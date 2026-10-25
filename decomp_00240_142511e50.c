// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142511e50 Unwind@142511e50 body=40 status=ok
// SIG undefined Unwind@142511e50(void)

void Unwind_142511e50(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 142511e80 Unwind@142511e80 body=40 status=ok
// SIG undefined Unwind@142511e80(void)

void Unwind_142511e80(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142511eb0 FUN_142511eb0 body=246 status=ok
// SIG undefined FUN_142511eb0(void)

ulonglong FUN_142511eb0(longlong param_1,uint param_2)

{
  void *_Dst;
  undefined8 unaff_RDI;
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x110001;
  if ((int)param_2 < 0x110001) {
    uVar2 = param_2;
  }
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(int *)(param_1 + 0x18) < (int)uVar2) {
    if ((int)uVar2 < 0x19) {
      uVar3 = uVar2 + 0x19;
    }
    else if (uVar2 < 0x9c5) {
      uVar3 = uVar2 * 5;
    }
    else {
      uVar3 = 0x110001;
      if (uVar2 * 2 < 0x110001) {
        uVar3 = uVar2 * 2;
      }
    }
    _Dst = (void *)FUN_1424da030((longlong)(int)uVar3 << 2);
    if (_Dst == (void *)0x0) {
      if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
        **(undefined4 **)(param_1 + 0x10) = 0x110000;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1425160a0();
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      uVar1 = 0;
    }
    else {
      memcpy(_Dst,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x1c) << 2);
      if (*(longlong *)(param_1 + 0x10) != param_1 + 0x60) {
        FUN_1424da110();
      }
      *(void **)(param_1 + 0x10) = _Dst;
      *(uint *)(param_1 + 0x18) = uVar3;
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 142511fb0 FUN_142511fb0 body=146 status=ok
// SIG undefined FUN_142511fb0(void)

undefined8 FUN_142511fb0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  
  if (*param_2 < 1) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      *param_2 = 7;
    }
    else {
      FUN_142515f80(puVar1,&LAB_1424b70f0,FUN_1424a9cd0,1,param_2);
      *(undefined8 **)(param_1 + 0x50) = puVar1;
      if (*param_2 < 1) {
        return 1;
      }
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return 0;
}



// FUNCTION 142512050 Unwind@142512050 body=34 status=ok
// SIG undefined Unwind@142512050(void)

void Unwind_142512050(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142512080 FUN_142512080 body=72 status=ok
// SIG undefined FUN_142512080(void)

void FUN_142512080(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x40);
  if (lVar1 != 0) {
    FUN_1424a6be0(lVar1,*param_2);
  }
  *param_1 = lVar1;
  return;
}



// FUNCTION 1425120d0 Unwind@1425120d0 body=34 status=ok
// SIG undefined Unwind@1425120d0(void)

void Unwind_1425120d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142512100 FUN_142512100 body=88 status=ok
// SIG undefined FUN_142512100(void)

void FUN_142512100(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
    **(undefined4 **)(param_1 + 0x10) = 0x110000;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1425160a0();
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 142512160 FUN_142512160 body=109 status=ok
// SIG undefined FUN_142512160(void)

void FUN_142512160(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  lVar1 = FUN_1424da030((longlong)param_3 * 2 + 2);
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (lVar1 != 0) {
    *(int *)(param_1 + 0x48) = param_3;
    FUN_142504850(lVar1,param_2,param_3);
    *(undefined2 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 2) = 0;
  }
  return;
}



// FUNCTION 1425121d0 FUN_1425121d0 body=147 status=ok
// SIG undefined FUN_1425121d0(void)

void FUN_1425121d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) != param_1 + 0x60) {
    FUN_1424da110();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x30) != param_1 + 0x60) {
    FUN_1424da110();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 != 0) {
    FUN_1425c8500(lVar2);
    FUN_1401773f0(lVar2);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142512270 FUN_142512270 body=497 status=ok
// SIG undefined FUN_142512270(void)

longlong FUN_142512270(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  if (param_1 == param_2) {
    return param_1;
  }
  if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) {
    return param_1;
  }
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    **(undefined4 **)(param_1 + 0x10) = 0x110000;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1425160a0();
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    return param_1;
  }
  cVar2 = FUN_142511eb0(param_1,*(undefined4 *)(param_2 + 0x1c));
  if (cVar2 == '\0') {
    return param_1;
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)(param_1 + 0x1c) = iVar1;
  memcpy(*(void **)(param_1 + 0x10),*(void **)(param_2 + 0x10),(longlong)iVar1 << 2);
  if ((param_3 == '\0') && (*(longlong *)(param_2 + 0x28) != 0)) {
    lVar3 = thunk_FUN_1424da030(0x368);
    if (lVar3 != 0) {
      FUN_1425cb100(lVar3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x10),
                    *(undefined4 *)(param_1 + 0x1c));
      *(longlong *)(param_1 + 0x28) = lVar3;
      goto LAB_142512319;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_14251244d:
    FUN_142512100(param_1);
  }
  else {
LAB_142512319:
    lVar3 = *(longlong *)(param_2 + 0x50);
    if ((lVar3 == 0) || (*(int *)(lVar3 + 8) == 0)) {
      if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(*(longlong *)(param_1 + 0x50) + 8) != 0)
         ) {
        FUN_1425160a0();
      }
    }
    else {
      local_2c[0] = 0;
      lVar4 = *(longlong *)(param_1 + 0x50);
      if (lVar4 == 0) {
        cVar2 = FUN_142511fb0(param_1,local_2c);
        if (cVar2 == '\0') goto LAB_14251244d;
        lVar4 = *(longlong *)(param_1 + 0x50);
        lVar3 = *(longlong *)(param_2 + 0x50);
      }
      FUN_1425160f0(lVar4,lVar3,FUN_142512080,local_2c);
      if (0 < local_2c[0]) goto LAB_14251244d;
    }
    if ((param_3 == '\0') && (*(longlong *)(param_2 + 0x58) != 0)) {
      lVar3 = thunk_FUN_1424da030(0x180);
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
        goto LAB_14251244d;
      }
      FUN_1425c8390(lVar3,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x50));
      *(longlong *)(param_1 + 0x58) = lVar3;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_142512160(param_1,*(longlong *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x48));
    }
  }
  return param_1;
}



// FUNCTION 142512470 Unwind@142512470 body=36 status=ok
// SIG undefined Unwind@142512470(void)

void Unwind_142512470(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425124a0 Unwind@1425124a0 body=36 status=ok
// SIG undefined Unwind@1425124a0(void)

void Unwind_1425124a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425124d0 FUN_1425124d0 body=150 status=ok
// SIG undefined FUN_1425124d0(void)

undefined8 * FUN_1425124d0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(200);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::UnicodeSet::vftable;
    puVar1[1] = icu_64::UnicodeSet::vftable;
    puVar1[2] = puVar1 + 0xc;
    puVar1[3] = 0x100000019;
    *(undefined1 *)(puVar1 + 4) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    FUN_142512270(puVar1,param_1,0);
  }
  return puVar1;
}



// FUNCTION 142512570 Unwind@142512570 body=43 status=ok
// SIG undefined Unwind@142512570(void)

void Unwind_142512570(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425125a0 FUN_1425125a0 body=64 status=ok
// SIG undefined FUN_1425125a0(void)

longlong FUN_1425125a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 != 0) {
    FUN_142511c40(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 1425125e0 Unwind@1425125e0 body=32 status=ok
// SIG undefined Unwind@1425125e0(void)

void Unwind_1425125e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142512600 FUN_142512600 body=133 status=ok
// SIG undefined FUN_142512600(void)

undefined8 FUN_142512600(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (uVar1 == *(uint *)(param_2 + 0x1c)) {
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + uVar4 * 4) !=
            *(int *)(*(longlong *)(param_2 + 0x10) + uVar4 * 4)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (lVar2 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(lVar2 + 8) != 0;
    }
    if (*(longlong *)(param_2 + 0x50) == 0) {
      if (bVar5 != false) {
        return 0;
      }
    }
    else if (bVar5 != (*(int *)(*(longlong *)(param_2 + 0x50) + 8) != 0)) {
      return 0;
    }
    if (((lVar2 == 0) || (*(int *)(lVar2 + 8) == 0)) || (cVar3 = FUN_142516370(), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142512690 FUN_142512690 body=131 status=ok
// SIG undefined FUN_142512690(void)

uint FUN_142512690(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar3 = uVar2 & 3;
    if (uVar2 < 4) {
      uVar4 = 0;
    }
    else {
      uVar6 = uVar2 & 0xfffffffc;
      uVar4 = 0;
      do {
        uVar2 = (((uVar2 * 0xf4243 + *(int *)(lVar1 + uVar4 * 4)) * 0xf4243 +
                 *(int *)(lVar1 + 4 + uVar4 * 4)) * 0xf4243 + *(int *)(lVar1 + 8 + uVar4 * 4)) *
                0xf4243 + *(int *)(lVar1 + 0xc + uVar4 * 4);
        uVar4 = uVar4 + 4;
      } while (uVar6 != uVar4);
    }
    if ((ulonglong)uVar3 != 0) {
      uVar5 = 0;
      do {
        uVar2 = uVar2 * 0xf4243 + *(int *)(lVar1 + uVar4 * 4 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return uVar2;
}



// FUNCTION 142512720 FUN_142512720 body=254 status=ok
// SIG undefined FUN_142512720(void)

int FUN_142512720(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar5 = *(uint *)(param_1 + 0x1c);
  iVar7 = 0;
  iVar10 = 0;
  if (1 < (int)uVar5) {
    uVar8 = uVar5 >> 1;
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (uVar5 < 0x10) {
      uVar9 = 0;
      iVar10 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar8 & 0xfffffff8);
      iVar10 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      lVar11 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      do {
        piVar1 = (int *)(lVar6 + lVar11);
        piVar2 = (int *)(lVar6 + 0x10 + lVar11);
        piVar3 = (int *)(lVar6 + 0x20 + lVar11);
        piVar4 = (int *)(lVar6 + 0x30 + lVar11);
        iVar10 = (iVar10 + piVar1[1]) - *piVar1;
        iVar12 = (iVar12 + piVar1[3]) - piVar1[2];
        iVar13 = (iVar13 + piVar2[1]) - *piVar2;
        iVar14 = (iVar14 + piVar2[3]) - piVar2[2];
        iVar15 = (iVar15 + piVar3[1]) - *piVar3;
        iVar16 = (iVar16 + piVar3[3]) - piVar3[2];
        iVar17 = (iVar17 + piVar4[1]) - *piVar4;
        iVar18 = (iVar18 + piVar4[3]) - piVar4[2];
        lVar11 = lVar11 + 0x40;
      } while ((ulonglong)(uVar5 >> 4) << 6 != lVar11);
      iVar10 = iVar18 + iVar14 + iVar16 + iVar12 + iVar17 + iVar13 + iVar15 + iVar10;
      if (uVar9 == uVar8) goto LAB_142512801;
    }
    do {
      iVar10 = (iVar10 + *(int *)(lVar6 + 4 + uVar9 * 8)) - *(int *)(lVar6 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
LAB_142512801:
  if (*(longlong *)(param_1 + 0x50) != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x50) + 8);
  }
  return iVar7 + iVar10;
}



// FUNCTION 142512820 FUN_142512820 body=13 status=ok
// SIG undefined FUN_142512820(void)

int FUN_142512820(longlong param_1)

{
  return *(int *)(param_1 + 0x1c) / 2;
}



// FUNCTION 142512830 FUN_142512830 body=20 status=ok
// SIG undefined FUN_142512830(void)

int FUN_142512830(longlong param_1,int param_2)

{
  return *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 * 2 + 1) * 4) + -1;
}



// FUNCTION 142512850 FUN_142512850 body=13 status=ok
// SIG undefined FUN_142512850(void)

undefined4 FUN_142512850(longlong param_1,int param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 * 2) * 4);
}



// FUNCTION 142512860 FUN_142512860 body=29 status=ok
// SIG undefined FUN_142512860(void)

undefined8 FUN_142512860(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x1c) != 1) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 8) == 0);
  }
  return 1;
}



// FUNCTION 142512880 FUN_142512880 body=118 status=ok
// SIG undefined FUN_142512880(void)

ulonglong FUN_142512880(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  do {
    lVar4 = param_1;
    if (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425128d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
      return uVar3;
    }
    param_1 = *(longlong *)(lVar4 + 0x58);
  } while (*(longlong *)(lVar4 + 0x58) != 0);
  uVar3 = 0;
  if (param_2 < 0x110000) {
    piVar2 = *(int **)(lVar4 + 0x10);
    if (*piVar2 <= param_2) {
      iVar1 = *(int *)(lVar4 + 0x1c);
      uVar3 = (ulonglong)(iVar1 - 1U);
      if (((1 < iVar1) && (iVar1 != 2)) && (param_2 < piVar2[iVar1 - 2])) {
        uVar7 = iVar1 - 1U >> 1;
        uVar6 = 0;
        do {
          uVar5 = uVar7;
          if (param_2 < piVar2[(int)uVar7]) {
            uVar3 = (ulonglong)uVar7;
            uVar5 = uVar6;
          }
          uVar7 = (int)((int)uVar3 + uVar5) >> 1;
          uVar6 = uVar5;
        } while (uVar7 != uVar5);
      }
    }
    uVar3 = uVar3 & 0xffffffffffffff01;
  }
  return uVar3;
}



// FUNCTION 142512900 FUN_142512900 body=93 status=ok
// SIG undefined FUN_142512900(void)

undefined8 FUN_142512900(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*piVar2 <= param_2) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar3 = iVar1 - 1;
    if (((1 < iVar1) && (iVar1 != 2)) && (param_2 < piVar2[iVar1 - 2])) {
      uVar6 = uVar3 >> 1;
      uVar5 = 0;
      do {
        uVar4 = uVar6;
        if (param_2 < piVar2[(int)uVar6]) {
          uVar4 = uVar5;
          uVar3 = uVar6;
        }
        uVar6 = (int)(uVar3 + uVar4) >> 1;
        uVar5 = uVar4;
      } while (uVar6 != uVar4);
    }
    if ((uVar3 & 1) != 0) {
      return CONCAT71((int7)((ulonglong)piVar2 >> 8),param_3 < piVar2[(int)uVar3]);
    }
  }
  return 0;
}



// FUNCTION 142512960 FUN_142512960 body=258 status=ok
// SIG undefined FUN_142512960(void)

ulonglong FUN_142512960(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 < 0) {
    iVar4 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar4 = (int)sVar1 >> 5;
  }
  if (iVar4 != 0) {
    if (iVar4 < 3) {
      if (iVar4 == 1) {
        if (((int)sVar1 & 2U) == 0) {
          puVar8 = *(ushort **)(param_2 + 0x18);
        }
        else {
          puVar8 = (ushort *)(param_2 + 10);
        }
        uVar5 = (uint)*puVar8;
      }
      else {
        uVar5 = FUN_1424a8030(param_2,0);
        if ((int)uVar5 < 0x10000) goto LAB_14251298c;
      }
      do {
        lVar7 = param_1;
        plVar2 = *(longlong **)(lVar7 + 0x28);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142512a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar2 + 8))(plVar2,uVar5,*(code **)(*plVar2 + 8));
          return uVar6;
        }
        param_1 = *(longlong *)(lVar7 + 0x58);
      } while (*(longlong *)(lVar7 + 0x58) != 0);
      uVar6 = 0;
      if ((int)uVar5 < 0x110000) {
        piVar3 = *(int **)(lVar7 + 0x10);
        if (*piVar3 <= (int)uVar5) {
          iVar4 = *(int *)(lVar7 + 0x1c);
          uVar6 = (ulonglong)(iVar4 - 1U);
          if (((1 < iVar4) && (iVar4 != 2)) && ((int)uVar5 < piVar3[iVar4 - 2])) {
            uVar11 = iVar4 - 1U >> 1;
            uVar10 = 0;
            do {
              uVar9 = uVar11;
              if ((int)uVar5 < piVar3[(int)uVar11]) {
                uVar6 = (ulonglong)uVar11;
                uVar9 = uVar10;
              }
              uVar11 = (int)((int)uVar6 + uVar9) >> 1;
              uVar10 = uVar9;
            } while (uVar11 != uVar9);
          }
        }
        uVar6 = uVar6 & 0xffffffffffffff01;
      }
      goto LAB_1425129a9;
    }
LAB_14251298c:
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (lVar7 != 0) {
      iVar4 = FUN_142516b20(lVar7,param_2,0);
      uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),-1 < iVar4);
      goto LAB_1425129a9;
    }
  }
  uVar6 = 0;
LAB_1425129a9:
  return uVar6 & 0xffffffff;
}



// FUNCTION 142512a70 FUN_142512a70 body=246 status=ok
// SIG undefined FUN_142512a70(void)

bool FUN_142512a70(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  
  if (1 < (int)*(uint *)(param_2 + 0x1c)) {
    piVar4 = *(int **)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar1 = iVar2 - 1;
    uVar9 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8);
      if (iVar3 < *piVar4) goto LAB_142512b57;
      uVar10 = uVar1;
      if (((1 < iVar2) && (iVar2 != 2)) && (iVar3 < piVar4[iVar2 - 2])) {
        uVar8 = uVar1 >> 1;
        uVar7 = 0;
        do {
          uVar6 = uVar8;
          if (iVar3 < piVar4[(int)uVar8]) {
            uVar6 = uVar7;
            uVar10 = uVar8;
          }
          uVar8 = (int)(uVar10 + uVar6) >> 1;
          uVar7 = uVar6;
        } while (uVar8 != uVar6);
      }
      if (((uVar10 & 1) == 0) ||
         (piVar4[(int)uVar10] < *(int *)(*(longlong *)(param_2 + 0x10) + 4 + uVar9 * 8)))
      goto LAB_142512b57;
      uVar9 = uVar9 + 1;
    } while (uVar9 != *(uint *)(param_2 + 0x1c) >> 1);
  }
  bVar11 = true;
  if ((*(longlong *)(param_2 + 0x50) != 0) && (*(int *)(*(longlong *)(param_2 + 0x50) + 8) != 0)) {
    if (*(longlong *)(param_1 + 0x50) == 0) {
LAB_142512b57:
      bVar11 = false;
    }
    else {
      cVar5 = FUN_142516670();
      bVar11 = cVar5 != '\0';
    }
  }
  return bVar11;
}



// FUNCTION 142512b70 FUN_142512b70 body=512 status=ok
// SIG undefined FUN_142512b70(void)

ulonglong FUN_142512b70(longlong param_1,wchar_t *param_2,uint param_3,int param_4)

{
  wchar_t wVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_1c0 [244];
  int local_cc;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((int)param_3 < 1) {
    uVar9 = 0;
    if (-1 < (int)param_3) goto LAB_142512bd1;
    sVar8 = wcslen(param_2);
    param_3 = (uint)sVar8;
    uVar9 = 0;
    if (param_3 == 0) goto LAB_142512bd1;
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar7 = FUN_1425cb620(*(longlong *)(param_1 + 0x28),param_2,param_2 + param_3,param_4);
    uVar9 = (ulonglong)(lVar7 - (longlong)param_2) >> 1;
    goto LAB_142512bd1;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar9 = FUN_1425c8560(*(longlong *)(param_1 + 0x58),param_2,param_3,param_4);
    return uVar9;
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != 0)) {
    FUN_1425c7b70(local_1c0,param_1,lVar7,0x2a - (uint)(param_4 == 0));
    if (local_cc != 0) {
      uVar5 = FUN_1425c8560(local_1c0,param_2,param_3,param_4);
      FUN_1425c8500(local_1c0);
      uVar9 = (ulonglong)uVar5;
      goto LAB_142512bd1;
    }
    FUN_1425c8500(local_1c0);
  }
  uVar9 = 0;
  do {
    iVar2 = (int)uVar9;
    uVar14 = iVar2 + 1;
    wVar1 = param_2[iVar2];
    uVar5 = (uint)(ushort)wVar1;
    lVar7 = param_1;
    if ((((wVar1 & 0xfc00U) == 0xd800) && (uVar14 != param_3)) &&
       (lVar10 = (longlong)(int)uVar14, ((ushort)param_2[lVar10] & 0xfc00) == 0xdc00)) {
      uVar14 = iVar2 + 2;
      uVar5 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)param_2[lVar10] + 0xfca02400;
    }
    do {
      lVar10 = lVar7;
      if (*(longlong **)(lVar10 + 0x28) != (longlong *)0x0) {
        bVar4 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 8))();
        goto LAB_142512d26;
      }
      lVar7 = *(longlong *)(lVar10 + 0x58);
    } while (*(longlong *)(lVar10 + 0x58) != 0);
    uVar6 = 0;
    bVar4 = 0;
    if ((int)uVar5 < 0x110000) {
      piVar3 = *(int **)(lVar10 + 0x10);
      if (*piVar3 <= (int)uVar5) {
        iVar2 = *(int *)(lVar10 + 0x1c);
        uVar6 = iVar2 - 1;
        if (((1 < iVar2) && (iVar2 != 2)) && ((int)uVar5 < piVar3[iVar2 - 2])) {
          uVar13 = uVar6 >> 1;
          uVar12 = 0;
          do {
            uVar11 = uVar13;
            if ((int)uVar5 < piVar3[(int)uVar13]) {
              uVar6 = uVar13;
              uVar11 = uVar12;
            }
            uVar13 = (int)(uVar6 + uVar11) >> 1;
            uVar12 = uVar11;
          } while (uVar13 != uVar11);
        }
      }
      bVar4 = (byte)uVar6 & 1;
    }
LAB_142512d26:
  } while (((uint)(param_4 != 0) == (int)(char)bVar4) &&
          (uVar9 = (ulonglong)uVar14, (int)uVar14 < (int)param_3));
LAB_142512bd1:
  return uVar9 & 0xffffffff;
}



// FUNCTION 142512d80 Unwind@142512d80 body=51 status=ok
// SIG undefined Unwind@142512d80(void)

void Unwind_142512d80(undefined8 param_1,longlong param_2)

{
  FUN_1425c8500(param_2 + 0x28);
  return;
}



// FUNCTION 142512dc0 FUN_142512dc0 body=100 status=ok
// SIG undefined FUN_142512dc0(void)

undefined8 FUN_142512dc0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar5 = *piVar1;
  if (iVar5 <= param_2) {
    iVar5 = *(int *)(param_1 + 0x1c);
    uVar2 = iVar5 - 1;
    if (((1 < iVar5) && (iVar5 != 2)) && (param_2 < piVar1[iVar5 - 2])) {
      uVar6 = uVar2 >> 1;
      uVar4 = 0;
      do {
        uVar3 = uVar6;
        if (param_2 < piVar1[(int)uVar6]) {
          uVar3 = uVar4;
          uVar2 = uVar6;
        }
        uVar6 = (int)(uVar2 + uVar3) >> 1;
        uVar4 = uVar3;
      } while (uVar6 != uVar3);
    }
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    iVar5 = piVar1[(int)uVar2];
  }
  return CONCAT71((int7)((ulonglong)piVar1 >> 8),param_3 < iVar5);
}



// FUNCTION 142512e40 FUN_142512e40 body=167 status=ok
// SIG undefined FUN_142512e40(void)

ulonglong FUN_142512e40(longlong param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (1 < (int)*(uint *)(param_1 + 0x14)) {
    uVar5 = (uint)param_2;
    uVar6 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + uVar6 * 8);
      uVar9 = *(int *)(*(longlong *)(param_1 + 8) + 4 + uVar6 * 8) - 1;
      uVar7 = uVar9 & 0xff;
      uVar8 = uVar1 & 0xff;
      if ((uVar9 ^ uVar1) < 0x100) {
        if ((uVar8 <= uVar5) && (uVar5 <= uVar7)) goto LAB_142512ef4;
      }
      else {
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
        if ((uVar8 <= uVar5) || (uVar5 <= uVar7)) goto LAB_142512ef7;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(param_1 + 0x14) >> 1 != uVar6);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  unaff_RDI = 0;
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 8))) {
    do {
      uVar3 = FUN_142516630(lVar4,unaff_RDI);
      bVar2 = FUN_1424a8030(uVar3,0);
      if (bVar2 == param_2) goto LAB_142512ef4;
      uVar5 = (int)unaff_RDI + 1;
      unaff_RDI = (ulonglong)uVar5;
      lVar4 = *(longlong *)(param_1 + 0x48);
    } while ((int)uVar5 < *(int *)(lVar4 + 8));
    unaff_RDI = 0;
  }
LAB_142512ef7:
  return unaff_RDI & 0xffffffff;
LAB_142512ef4:
  unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
  goto LAB_142512ef7;
}



// FUNCTION 142512f10 FUN_142512f10 body=627 status=ok
// SIG undefined FUN_142512f10(void)

ulonglong FUN_142512f10(longlong param_1,longlong *param_2,int *param_3,int param_4,char param_5)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  
  iVar2 = *param_3;
  if (iVar2 == param_4) {
    lVar8 = param_1 + -8;
    do {
      lVar9 = lVar8;
      plVar3 = *(longlong **)(lVar9 + 0x28);
      if (plVar3 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar3 + 8))(plVar3,0xffff);
        if (cVar5 == '\0') goto LAB_142513151;
        goto LAB_142513140;
      }
      lVar8 = *(longlong *)(lVar9 + 0x58);
    } while (*(longlong *)(lVar9 + 0x58) != 0);
    piVar4 = *(int **)(lVar9 + 0x10);
    uVar17 = 0;
    if (*piVar4 < 0x10000) {
      iVar2 = *(int *)(lVar9 + 0x1c);
      uVar17 = iVar2 - 1;
      if (((1 < iVar2) && (iVar2 != 2)) && (0xffff < piVar4[iVar2 - 2])) {
        uVar16 = uVar17 >> 1;
        uVar12 = 0;
        do {
          uVar13 = uVar16;
          if (0xffff < piVar4[(int)uVar16]) {
            uVar13 = uVar12;
            uVar17 = uVar16;
          }
          uVar16 = (int)(uVar17 + uVar13) >> 1;
          uVar12 = uVar13;
        } while (uVar16 != uVar13);
      }
    }
    if ((uVar17 & 1) == 0) {
LAB_142513151:
      uVar10 = 0;
    }
    else {
LAB_142513140:
      uVar10 = (ulonglong)((param_5 == '\0') + 1);
    }
    return uVar10;
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(int *)(*(longlong *)(param_1 + 0x48) + 8) != 0)) {
    uVar6 = (**(code **)(*param_2 + 0x40))(param_2,iVar2);
    lVar8 = *(longlong *)(param_1 + 0x48);
    if (0 < *(int *)(lVar8 + 8)) {
      iVar18 = 0;
      iVar19 = 0;
      do {
        lVar8 = FUN_142516630(lVar8,iVar18);
        uVar1 = *(ushort *)(lVar8 + 8);
        if (iVar2 < param_4) {
          uVar17 = *(uint *)(lVar8 + 0xc);
          uVar12 = (int)(short)uVar1 >> 5;
          uVar16 = 0;
        }
        else {
          uVar12 = (int)(short)uVar1 >> 5;
          uVar17 = *(uint *)(lVar8 + 0xc);
          uVar16 = uVar12;
          if ((short)uVar1 < 0) {
            uVar16 = uVar17;
          }
          uVar16 = uVar16 - 1;
        }
        if ((short)uVar1 < 0) {
          uVar12 = uVar17;
        }
        uVar15 = 0xffff;
        if (uVar16 < uVar12) {
          if ((uVar1 & 2) == 0) {
            lVar9 = *(longlong *)(lVar8 + 0x18);
          }
          else {
            lVar9 = lVar8 + 10;
          }
          uVar15 = *(ushort *)(lVar9 + (longlong)(int)uVar16 * 2);
        }
        iVar14 = iVar19;
        if ((iVar2 < param_4) && (uVar6 < uVar15)) break;
        if (uVar15 == uVar6) {
          iVar7 = FUN_1425131b0(param_2,*param_3,param_4,lVar8);
          if (param_5 != '\0') {
            iVar11 = *param_3 - param_4;
            if (iVar2 < param_4) {
              iVar11 = param_4 - *param_3;
            }
            if (iVar7 == iVar11) {
              return 1;
            }
          }
          if (*(short *)(lVar8 + 8) < 0) {
            iVar11 = *(int *)(lVar8 + 0xc);
          }
          else {
            iVar11 = (int)*(short *)(lVar8 + 8) >> 5;
          }
          if (iVar7 == iVar11) {
            if (iVar19 < iVar7) {
              iVar14 = iVar7;
            }
            if ((iVar2 < param_4) && (iVar7 < iVar19)) break;
          }
        }
        iVar19 = iVar14;
        iVar18 = iVar18 + 1;
        lVar8 = *(longlong *)(param_1 + 0x48);
        iVar14 = iVar19;
      } while (iVar18 < *(int *)(lVar8 + 8));
      if (iVar14 != 0) {
        iVar19 = -iVar14;
        if (iVar2 < param_4) {
          iVar19 = iVar14;
        }
        *param_3 = *param_3 + iVar19;
        return 2;
      }
    }
  }
  uVar10 = FUN_1425c7ab0(param_1,param_2,param_3,param_4);
  return uVar10;
}



// FUNCTION 1425131b0 FUN_1425131b0 body=307 status=ok
// SIG undefined FUN_1425131b0(void)

ulonglong FUN_1425131b0(longlong *param_1,int param_2,int param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (*(short *)(param_4 + 8) < 0) {
    uVar9 = *(uint *)(param_4 + 0xc);
  }
  else {
    uVar9 = (int)*(short *)(param_4 + 8) >> 5;
  }
  if (param_2 < param_3) {
    uVar4 = param_3 - param_2;
    if ((int)uVar9 <= param_3 - param_2) {
      uVar4 = uVar9;
    }
    uVar6 = (ulonglong)uVar4;
    if (1 < (int)uVar4) {
      uVar8 = 1;
      do {
        sVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2 + (int)uVar8);
        sVar1 = *(short *)(param_4 + 8);
        uVar9 = (int)sVar1 >> 5;
        if (sVar1 < 0) {
          uVar9 = *(uint *)(param_4 + 0xc);
        }
        sVar3 = -1;
        if (uVar8 < uVar9) {
          lVar7 = param_4 + 10;
          if (((int)sVar1 & 2U) == 0) {
            lVar7 = *(longlong *)(param_4 + 0x18);
          }
          sVar3 = *(short *)(lVar7 + uVar8 * 2);
        }
        if (sVar2 != sVar3) {
          return 0;
        }
        uVar8 = uVar8 + 1;
      } while (uVar6 != uVar8);
    }
  }
  else {
    uVar4 = param_2 - param_3;
    if ((int)uVar9 <= param_2 - param_3) {
      uVar4 = uVar9;
    }
    uVar6 = (ulonglong)uVar4;
    if (1 < (int)uVar4) {
      uVar9 = uVar9 - 2;
      lVar7 = uVar6 - 1;
      do {
        param_2 = param_2 + -1;
        sVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
        sVar1 = *(short *)(param_4 + 8);
        if (sVar1 < 0) {
          uVar4 = *(uint *)(param_4 + 0xc);
        }
        else {
          uVar4 = (int)sVar1 >> 5;
        }
        sVar3 = -1;
        if (uVar9 < uVar4) {
          lVar5 = param_4 + 10;
          if (((int)sVar1 & 2U) == 0) {
            lVar5 = *(longlong *)(param_4 + 0x18);
          }
          sVar3 = *(short *)(lVar5 + (longlong)(int)uVar9 * 2);
        }
        if (sVar2 != sVar3) {
          return 0;
        }
        uVar9 = uVar9 - 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return uVar6;
}



// FUNCTION 1425132f0 FUN_1425132f0 body=15 status=ok
// SIG undefined FUN_1425132f0(void)

void FUN_1425132f0(longlong param_1,undefined8 param_2)

{
  FUN_142513300(param_2,param_1 + -8);
  return;
}



// FUNCTION 142513300 FUN_142513300 body=134 status=ok
// SIG undefined FUN_142513300(void)

longlong FUN_142513300(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((0 < *(int *)(param_2 + 0x1c)) && (*(longlong *)(param_2 + 0x10) != 0)) {
    FUN_142513630(param_1,*(longlong *)(param_2 + 0x10),*(int *)(param_2 + 0x1c),0);
  }
  lVar3 = *(longlong *)(param_2 + 0x50);
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 8))) {
    iVar4 = 0;
    do {
      uVar2 = FUN_142516630(lVar3,iVar4);
      if ((*(longlong *)(param_1 + 0x50) == 0) ||
         (iVar1 = FUN_142516b20(*(longlong *)(param_1 + 0x50),uVar2,0), iVar1 < 0)) {
        FUN_142513c10(param_1,uVar2);
      }
      iVar4 = iVar4 + 1;
      lVar3 = *(longlong *)(param_2 + 0x50);
    } while (iVar4 < *(int *)(lVar3 + 8));
  }
  return param_1;
}



// FUNCTION 142513390 FUN_142513390 body=68 status=ok
// SIG undefined FUN_142513390(void)

int FUN_142513390(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = -1;
  if (-1 < param_2) {
    lVar4 = 0;
    do {
      iVar2 = param_2;
      if ((longlong)((longlong)*(int *)(param_1 + 0x1c) & 0xfffffffffffffffeU) <= lVar4) {
        return -1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar4 * 4);
      lVar1 = lVar4 * 4;
      lVar4 = lVar4 + 2;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar1) - iVar5;
      param_2 = iVar2 - iVar3;
    } while (iVar3 <= iVar2);
    iVar5 = iVar5 + iVar2;
  }
  return iVar5;
}



// FUNCTION 1425133e0 FUN_1425133e0 body=267 status=ok
// SIG undefined FUN_1425133e0(void)

void FUN_1425133e0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar2 == 0 && lVar3 == 0) {
    **(undefined4 **)(param_1 + 0x10) = 0x110000;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1425160a0();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x58);
  }
  if ((lVar3 != 0 || lVar2 != 0) || ((*(byte *)(param_1 + 0x20) & 1) != 0)) goto LAB_1425134cc;
  if ((int)param_2 < 0) {
    uVar4 = 0;
LAB_1425134e6:
    if (-1 < (int)param_3) goto LAB_142513476;
LAB_1425134ec:
    uVar1 = 0;
LAB_1425134ee:
    param_3 = uVar1;
    if (uVar4 <= param_3) {
LAB_142513487:
      local_28 = param_3 + 1;
      local_24 = 0x110000;
      local_2c = uVar4;
      FUN_142514540(param_1,&local_2c,2,0);
    }
  }
  else {
    uVar4 = 0x10ffff;
    if (0x10ffff < param_2) goto LAB_1425134e6;
    uVar4 = param_2;
    if ((int)param_3 < 0) goto LAB_1425134ec;
LAB_142513476:
    uVar1 = 0x10ffff;
    if (0x10ffff < param_3) goto LAB_1425134ee;
    if (uVar4 <= param_3) goto LAB_142513487;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_1425134cc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 142513500 FUN_142513500 body=91 status=ok
// SIG undefined FUN_142513500(void)

longlong FUN_142513500(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
    **(undefined4 **)(param_1 + 0x10) = 0x110000;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1425160a0();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return param_1;
}



// FUNCTION 142513560 FUN_142513560 body=189 status=ok
// SIG undefined FUN_142513560(void)

void FUN_142513560(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) ||
     ((*(byte *)(param_1 + 0x20) & 1) != 0)) goto LAB_1425135fb;
  if ((int)param_2 < 0) {
    uVar1 = 0;
LAB_142513613:
    param_2 = uVar1;
    if (-1 < (int)param_3) goto LAB_1425135a1;
LAB_14251361a:
    uVar1 = 0;
LAB_14251361c:
    param_3 = uVar1;
    if (param_2 <= param_3) {
LAB_1425135b4:
      local_18 = param_3 + 1;
      local_14 = 0x110000;
      local_1c = param_2;
      FUN_142514540(param_1,&local_1c,2,0);
    }
  }
  else {
    uVar1 = 0x10ffff;
    if (0x10ffff < param_2) goto LAB_142513613;
    if ((int)param_3 < 0) goto LAB_14251361a;
LAB_1425135a1:
    uVar1 = 0x10ffff;
    if (0x10ffff < param_3) goto LAB_14251361c;
    if (param_2 <= param_3) goto LAB_1425135b4;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_1425135fb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142513630 FUN_142513630 body=781 status=ok
// SIG undefined FUN_142513630(void)

void FUN_142513630(longlong param_1,int *param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) ||
       (param_2 == (int *)0x0)) || ((*(byte *)(param_1 + 0x20) & 1) != 0)) ||
     (cVar6 = FUN_142514ac0(param_1,param_3 + *(int *)(param_1 + 0x1c)), cVar6 == '\0')) {
    return;
  }
  iVar9 = **(int **)(param_1 + 0x10);
  iVar11 = *param_2;
  uVar10 = 0;
  iVar7 = 1;
  iVar8 = 1;
  do {
    switch(param_4) {
    case 0:
      if (iVar9 < iVar11) {
        if ((int)uVar10 < 1) {
LAB_1425136f7:
          *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = iVar9;
          iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4);
          uVar10 = uVar10 + 1;
        }
        else {
          uVar1 = uVar10 - 1;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar1 * 4);
          if (iVar2 < iVar9) goto LAB_1425136f7;
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4);
          iVar9 = iVar2;
          uVar10 = uVar1;
          if (iVar2 < iVar3) {
            iVar9 = iVar3;
          }
        }
        iVar7 = iVar7 + 1;
        param_4 = 1;
      }
      else if (iVar11 < iVar9) {
        if ((int)uVar10 < 1) {
LAB_142513796:
          *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = iVar11;
          iVar11 = param_2[iVar8];
          uVar10 = uVar10 + 1;
        }
        else {
          uVar1 = uVar10 - 1;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar1 * 4);
          if (iVar2 < iVar11) goto LAB_142513796;
          iVar11 = iVar2;
          uVar10 = uVar1;
          if (iVar2 < param_2[iVar8]) {
            iVar11 = param_2[iVar8];
          }
        }
        iVar8 = iVar8 + 1;
        param_4 = 2;
      }
      else {
        if (iVar9 == 0x110000) {
LAB_1425138fe:
          *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = 0x110000;
          *(uint *)(param_1 + 0x1c) = uVar10 + 1;
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = uVar5;
          uVar4 = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x38) = uVar4;
          if (*(longlong *)(param_1 + 0x40) == 0) {
            return;
          }
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          return;
        }
        if ((int)uVar10 < 1) {
LAB_142513852:
          *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = iVar9;
          iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4);
          uVar10 = uVar10 + 1;
        }
        else {
          uVar1 = uVar10 - 1;
          iVar11 = *(int *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar1 * 4);
          if (iVar11 < iVar9) goto LAB_142513852;
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4);
          iVar9 = iVar11;
          uVar10 = uVar1;
          if (iVar11 < iVar2) {
            iVar9 = iVar2;
          }
        }
        iVar7 = iVar7 + 1;
        lVar12 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        iVar11 = param_2[lVar12];
        param_4 = 3;
      }
      break;
    case 1:
      if (iVar9 < iVar11) {
        lVar12 = (longlong)(int)uVar10;
        uVar10 = uVar10 + 1;
        *(int *)(*(longlong *)(param_1 + 0x30) + lVar12 * 4) = iVar9;
        lVar12 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar12 * 4);
        param_4 = 0;
      }
      else if (iVar11 < iVar9) {
        lVar12 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        iVar11 = param_2[lVar12];
        param_4 = 3;
      }
      else {
        if (iVar9 == 0x110000) goto LAB_1425138fe;
        lVar12 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar12 * 4);
        lVar12 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        iVar11 = param_2[lVar12];
        param_4 = 2;
      }
      break;
    case 2:
      if (iVar11 < iVar9) {
        *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = iVar11;
        goto LAB_1425137f1;
      }
      if (iVar9 < iVar11) {
        lVar12 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar12 * 4);
        param_4 = 3;
      }
      else {
        if (iVar9 == 0x110000) goto LAB_1425138fe;
        lVar12 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar12 * 4);
        lVar12 = (longlong)iVar8;
        iVar8 = iVar8 + 1;
        iVar11 = param_2[lVar12];
        param_4 = 1;
      }
      break;
    case 3:
      if (iVar9 < iVar11) {
        iVar9 = iVar11;
      }
      if (iVar9 == 0x110000) goto LAB_1425138fe;
      *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar10 * 4) = iVar9;
      lVar12 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar12 * 4);
LAB_1425137f1:
      uVar10 = uVar10 + 1;
      lVar12 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      iVar11 = param_2[lVar12];
      param_4 = 0;
    }
  } while( true );
}



// FUNCTION 142513960 FUN_142513960 body=456 status=ok
// SIG undefined FUN_142513960(void)

longlong FUN_142513960(longlong param_1,uint param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  void *_Src;
  uint uVar11;
  void *pvVar12;
  longlong lVar13;
  
  if ((int)param_2 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x10ffff;
    if (param_2 < 0x110000) {
      uVar5 = param_2;
    }
  }
  piVar2 = *(int **)(param_1 + 0x10);
  uVar11 = 0;
  if (*piVar2 <= (int)uVar5) {
    iVar7 = *(int *)(param_1 + 0x1c);
    uVar11 = iVar7 - 1;
    if (((1 < iVar7) && (iVar7 != 2)) && ((int)uVar5 < piVar2[iVar7 - 2])) {
      uVar10 = uVar11 >> 1;
      uVar9 = 0;
      do {
        uVar8 = uVar10;
        if ((int)uVar5 < piVar2[(int)uVar10]) {
          uVar11 = uVar10;
          uVar8 = uVar9;
        }
        uVar10 = (int)(uVar11 + uVar8) >> 1;
        uVar9 = uVar8;
      } while (uVar10 != uVar8);
    }
    if ((uVar11 & 1) != 0) {
      return param_1;
    }
  }
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    lVar13 = (longlong)(int)uVar11;
    if (uVar5 == piVar2[lVar13] - 1U) {
      piVar2[lVar13] = uVar5;
      if (uVar5 == 0x10ffff) {
        cVar4 = FUN_142511eb0(param_1,*(int *)(param_1 + 0x1c) + 1);
        if (cVar4 == '\0') {
          return param_1;
        }
        iVar7 = *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar7 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar7 * 4) = 0x110000;
      }
      if ((0 < (int)uVar11) &&
         (lVar3 = *(longlong *)(param_1 + 0x10),
         uVar5 == *(uint *)(lVar3 + (ulonglong)(uVar11 - 1) * 4))) {
        iVar7 = *(int *)(param_1 + 0x1c);
        pvVar12 = (void *)(lVar3 + (longlong)iVar7 * 4);
        _Src = (void *)(lVar3 + lVar13 * 4 + 4);
        if (_Src < pvVar12) {
          lVar1 = lVar3 + lVar13 * 4;
          pvVar6 = (void *)(lVar3 + lVar13 * 4 + 8);
          if (pvVar12 < pvVar6) {
            pvVar12 = pvVar6;
          }
          memmove((void *)(lVar1 + -4),_Src,
                  ((longlong)pvVar12 + (-5 - lVar1) & 0xfffffffffffffffcU) + 4);
          iVar7 = *(int *)(param_1 + 0x1c);
        }
        *(int *)(param_1 + 0x1c) = iVar7 + -2;
      }
    }
    else if (((int)uVar11 < 1) || (uVar5 != piVar2[uVar11 - 1])) {
      cVar4 = FUN_142511eb0(param_1,*(int *)(param_1 + 0x1c) + 2);
      if (cVar4 == '\0') {
        return param_1;
      }
      memmove((void *)(*(longlong *)(param_1 + 0x10) + lVar13 * 4 + 8),
              (void *)(*(longlong *)(param_1 + 0x10) + lVar13 * 4),
              (*(int *)(param_1 + 0x1c) - lVar13) * 4);
      *(uint *)(*(longlong *)(param_1 + 0x10) + lVar13 * 4) = uVar5;
      *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + lVar13 * 4) = uVar5 + 1;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
    }
    else {
      piVar2[uVar11 - 1] = uVar5 + 1;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return param_1;
}



// FUNCTION 142513b40 FUN_142513b40 body=198 status=ok
// SIG undefined FUN_142513b40(void)

longlong FUN_142513b40(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  sVar1 = *(short *)(param_2 + 8);
  if (sVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)sVar1 >> 5;
  }
  if (iVar2 == 0) {
    return param_1;
  }
  if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) {
    return param_1;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  if (iVar2 < 3) {
    if (iVar2 == 1) {
      if (((int)sVar1 & 2U) == 0) {
        puVar4 = *(ushort **)(param_2 + 0x18);
      }
      else {
        puVar4 = (ushort *)(param_2 + 10);
      }
      uVar3 = (uint)*puVar4;
    }
    else {
      uVar3 = FUN_1424a8030(param_2,0);
      if ((int)uVar3 < 0x10000) goto LAB_142513b87;
    }
    FUN_142513960(param_1,uVar3);
  }
  else {
LAB_142513b87:
    if (((*(longlong *)(param_1 + 0x50) == 0) ||
        (iVar2 = FUN_142516b20(*(longlong *)(param_1 + 0x50),param_2,0), iVar2 < 0)) &&
       (FUN_142513c10(param_1,param_2), *(longlong *)(param_1 + 0x40) != 0)) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return param_1;
}



// FUNCTION 142513c10 FUN_142513c10 body=437 status=ok
// SIG undefined FUN_142513c10(void)

void FUN_142513c10(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int local_24 [3];
  
  local_24[1] = -2;
  local_24[2] = -1;
  if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  local_24[0] = 0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x28);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      local_24[0] = 7;
    }
    else {
      FUN_142515f80(puVar1,&LAB_1424b70f0,FUN_1424a9cd0,1,local_24);
      *(undefined8 **)(param_1 + 0x50) = puVar1;
      if (local_24[0] < 1) goto LAB_142513c54;
      (**(code **)*puVar1)(puVar1,1);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_142512100(param_1);
  }
  else {
LAB_142513c54:
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x40);
    if (puVar1 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
        **(undefined4 **)(param_1 + 0x10) = 0x110000;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1425160a0();
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
    else {
      FUN_1424a6be0(puVar1,param_2);
      thunk_FUN_142516bd0(*(undefined8 *)(param_1 + 0x50),puVar1,FUN_142513e30,local_24);
      if (0 < local_24[0]) {
        if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
          **(undefined4 **)(param_1 + 0x10) = 0x110000;
          *(undefined4 *)(param_1 + 0x1c) = 1;
          if (*(longlong *)(param_1 + 0x40) != 0) {
            FUN_1424da110();
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_1425160a0();
          }
        }
        *(undefined1 *)(param_1 + 0x20) = 1;
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 142513dd0 Unwind@142513dd0 body=34 status=ok
// SIG undefined Unwind@142513dd0(void)

void Unwind_142513dd0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142513e00 Unwind@142513e00 body=34 status=ok
// SIG undefined Unwind@142513e00(void)

void Unwind_142513e00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142513e30 FUN_142513e30 body=121 status=ok
// SIG undefined FUN_142513e30(void)

ulonglong FUN_142513e30(longlong param_1,longlong param_2)

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



// FUNCTION 142513eb0 FUN_142513eb0 body=110 status=ok
// SIG undefined FUN_142513eb0(void)

undefined8 FUN_142513eb0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_2 + 8) < 0) {
    if (*(int *)(param_2 + 0xc) < 1) {
      return param_1;
    }
  }
  else if (*(short *)(param_2 + 8) >> 5 < 1) {
    return param_1;
  }
  iVar3 = 0;
  do {
    uVar1 = FUN_1424a8030(param_2,iVar3);
    FUN_142513960(param_1,uVar1);
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    iVar3 = (iVar3 - (uint)(uVar1 < 0x10000)) + 2;
  } while (iVar3 < iVar2);
  return param_1;
}



// FUNCTION 142513f30 FUN_142513f30 body=99 status=ok
// SIG undefined FUN_142513f30(void)

longlong FUN_142513f30(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    FUN_1425141d0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x1c),0);
    if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(*(longlong *)(param_1 + 0x50) + 8) != 0))
    {
      if ((*(longlong *)(param_2 + 0x50) == 0) || (*(int *)(*(longlong *)(param_2 + 0x50) + 8) == 0)
         ) {
        FUN_1425160a0();
      }
      else {
        FUN_1425168b0();
      }
    }
  }
  return param_1;
}



// FUNCTION 142513fa0 FUN_142513fa0 body=137 status=ok
// SIG undefined FUN_142513fa0(void)

longlong FUN_142513fa0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    FUN_142514540(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x1c),0);
    lVar3 = *(longlong *)(param_2 + 0x50);
    if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 8))) {
      iVar4 = 0;
      do {
        uVar2 = FUN_142516630(lVar3,iVar4);
        if ((*(longlong *)(param_1 + 0x50) == 0) ||
           (cVar1 = FUN_142516a40(*(longlong *)(param_1 + 0x50),uVar2), cVar1 == '\0')) {
          FUN_142513c10(param_1,uVar2);
        }
        iVar4 = iVar4 + 1;
        lVar3 = *(longlong *)(param_2 + 0x50);
      } while (iVar4 < *(int *)(lVar3 + 8));
    }
  }
  return param_1;
}



// FUNCTION 142514040 FUN_142514040 body=92 status=ok
// SIG undefined FUN_142514040(void)

longlong FUN_142514040(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    FUN_1425141d0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x1c),2);
    if ((*(longlong *)(param_1 + 0x50) != 0) &&
       (((*(int *)(*(longlong *)(param_1 + 0x50) + 8) != 0 && (*(longlong *)(param_2 + 0x50) != 0))
        && (*(int *)(*(longlong *)(param_2 + 0x50) + 8) != 0)))) {
      FUN_142516720();
    }
  }
  return param_1;
}



// FUNCTION 1425140a0 FUN_1425140a0 body=76 status=ok
// SIG undefined FUN_1425140a0(void)

longlong FUN_1425140a0(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(int *)(*(longlong *)(param_1 + 0x50) + 8) != 0)) {
    FUN_1425160a0();
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return param_1;
}



// FUNCTION 1425140f0 FUN_1425140f0 body=214 status=ok
// SIG undefined FUN_1425140f0(void)

void FUN_1425140f0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_2 < 0) {
    uVar1 = 0;
LAB_14251417e:
    if (-1 < (int)param_3) goto LAB_14251411d;
LAB_142514185:
    uVar2 = 0;
LAB_142514187:
    if (uVar1 <= uVar2) {
LAB_14251418f:
      local_1c = uVar1;
      local_18 = uVar2 + 1;
      local_14 = 0x110000;
      FUN_1425141d0(param_1,&local_1c,2,0);
      goto LAB_1425141b9;
    }
  }
  else {
    uVar1 = 0x10ffff;
    if (0x10ffff < param_2) goto LAB_14251417e;
    uVar1 = param_2;
    if ((int)param_3 < 0) goto LAB_142514185;
LAB_14251411d:
    uVar2 = 0x10ffff;
    if (0x10ffff < param_3) goto LAB_142514187;
    uVar2 = param_3;
    if (uVar1 <= param_3) goto LAB_14251418f;
  }
  if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
    **(undefined4 **)(param_1 + 0x10) = 0x110000;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1425160a0();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
LAB_1425141b9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425141d0 FUN_1425141d0 body=573 status=ok
// SIG undefined FUN_1425141d0(void)

void FUN_1425141d0(longlong param_1,int *param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (((*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) ||
      ((*(byte *)(param_1 + 0x20) & 1) != 0)) ||
     (cVar3 = FUN_142514ac0(param_1,param_3 + *(int *)(param_1 + 0x1c)), cVar3 == '\0')) {
    return;
  }
  iVar8 = **(int **)(param_1 + 0x10);
  iVar9 = *param_2;
  iVar4 = 0;
  iVar5 = 1;
  iVar7 = 1;
switchD_142514281_default:
  switch(param_4) {
  case 0:
    if (iVar8 < iVar9) {
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
      param_4 = 1;
      goto switchD_142514281_default;
    }
    if (iVar9 < iVar8) {
LAB_1425143b7:
      lVar6 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      iVar9 = param_2[lVar6];
      param_4 = 2;
      goto switchD_142514281_default;
    }
    if (iVar8 == 0x110000) {
LAB_1425143c8:
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4) = 0x110000;
      *(int *)(param_1 + 0x1c) = iVar4 + 1;
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      if (*(longlong *)(param_1 + 0x40) == 0) {
        return;
      }
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      return;
    }
    *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4) = iVar8;
    lVar6 = (longlong)iVar5;
    iVar5 = iVar5 + 1;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
    break;
  case 1:
    if (iVar8 < iVar9) {
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
      param_4 = 0;
      goto switchD_142514281_default;
    }
    if (iVar8 <= iVar9) {
      if (iVar8 != 0x110000) {
        lVar6 = (longlong)iVar5;
        iVar5 = iVar5 + 1;
        iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
        goto LAB_1425143b7;
      }
      goto LAB_1425143c8;
    }
    *(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 4) = iVar9;
    break;
  case 2:
    if (iVar9 < iVar8) {
LAB_142514256:
      lVar6 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      iVar9 = param_2[lVar6];
      param_4 = 0;
    }
    else if (iVar8 < iVar9) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = iVar8;
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
      param_4 = 3;
    }
    else {
      if (iVar8 == 0x110000) goto LAB_1425143c8;
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
LAB_142514390:
      lVar6 = (longlong)iVar7;
      iVar7 = iVar7 + 1;
      iVar9 = param_2[lVar6];
      param_4 = 1;
    }
    goto switchD_142514281_default;
  case 3:
    if (iVar8 < iVar9) goto code_r0x0001425142f5;
    if (iVar9 < iVar8) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = iVar9;
      goto LAB_142514390;
    }
    if (iVar8 != 0x110000) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = iVar8;
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
      goto LAB_142514256;
    }
    goto LAB_1425143c8;
  default:
    goto switchD_142514281_default;
  }
  iVar4 = iVar4 + 1;
  lVar6 = (longlong)iVar7;
  iVar7 = iVar7 + 1;
  iVar9 = param_2[lVar6];
  param_4 = 3;
  goto switchD_142514281_default;
code_r0x0001425142f5:
  lVar6 = (longlong)iVar4;
  iVar4 = iVar4 + 1;
  *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = iVar8;
  lVar6 = (longlong)iVar5;
  iVar5 = iVar5 + 1;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + lVar6 * 4);
  param_4 = 2;
  goto switchD_142514281_default;
}



// FUNCTION 142514420 FUN_142514420 body=140 status=ok
// SIG undefined FUN_142514420(void)

void FUN_142514420(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_2 < 0) {
    uVar1 = 0;
LAB_1425144a2:
    param_2 = uVar1;
    if (-1 < (int)param_3) goto LAB_14251444d;
LAB_1425144a9:
    uVar1 = 0;
LAB_1425144ab:
    param_3 = uVar1;
    if (param_3 < param_2) goto LAB_14251448a;
  }
  else {
    uVar1 = 0x10ffff;
    if (0x10ffff < param_2) goto LAB_1425144a2;
    if ((int)param_3 < 0) goto LAB_1425144a9;
LAB_14251444d:
    uVar1 = 0x10ffff;
    if (0x10ffff < param_3) goto LAB_1425144ab;
    if (param_3 < param_2) goto LAB_14251448a;
  }
  local_18 = param_3 + 1;
  local_14 = 0x110000;
  local_1c = param_2;
  FUN_1425141d0(param_1,&local_1c,2,2);
LAB_14251448a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1425144c0 FUN_1425144c0 body=109 status=ok
// SIG undefined FUN_1425144c0(void)

void FUN_1425144c0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0x10ffff;
  if (param_2 < 0x10ffff) {
    uVar1 = param_2;
  }
  local_1c = 0;
  if (-1 < (int)param_2) {
    local_1c = uVar1;
  }
  local_18 = 1;
  if (-1 < (int)param_2) {
    local_18 = uVar1 + 1;
  }
  local_14 = 0x110000;
  FUN_1425141d0(param_1,&local_1c,2,2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 142514540 FUN_142514540 body=328 status=ok
// SIG undefined FUN_142514540(void)

void FUN_142514540(longlong param_1,int *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  
  if (((*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) ||
      ((*(byte *)(param_1 + 0x20) & 1) != 0)) ||
     (cVar4 = FUN_142514ac0(param_1,param_3 + *(int *)(param_1 + 0x1c)), cVar4 == '\0')) {
    return;
  }
  iVar10 = *param_2;
  uVar5 = 1;
  if ((byte)(param_4 - 1U) < 2) {
    iVar6 = 0;
    bVar15 = iVar10 != 0;
    iVar10 = 0;
    if (bVar15) goto LAB_1425145aa;
    iVar10 = param_2[1];
  }
  iVar6 = 1;
LAB_1425145aa:
  iVar13 = **(int **)(param_1 + 0x10);
  uVar8 = 0;
  do {
    iVar7 = (int)uVar8;
    lVar9 = (longlong)iVar7 * 4;
    lVar12 = 0;
    while (iVar11 = (int)lVar12, iVar10 <= iVar13) {
      if (iVar13 <= iVar10) {
        if (iVar13 == 0x110000) {
          *(undefined4 *)(lVar9 + *(longlong *)(param_1 + 0x30) + lVar12 * 4) = 0x110000;
          *(int *)(param_1 + 0x1c) = iVar7 + iVar11 + 1;
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = uVar2;
          uVar1 = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x38) = uVar1;
          if (*(longlong *)(param_1 + 0x40) == 0) {
            return;
          }
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          return;
        }
        uVar8 = (uVar8 & 0xffffffff) + lVar12;
        piVar14 = (int *)(uVar5 * 4 + *(longlong *)(param_1 + 0x10));
        iVar10 = param_2[iVar6 + lVar12];
        iVar6 = iVar6 + iVar11 + 1;
        goto LAB_1425145db;
      }
      *(int *)(*(longlong *)(param_1 + 0x30) + lVar9 + lVar12 * 4) = iVar10;
      lVar3 = iVar6 + lVar12;
      lVar12 = lVar12 + 1;
      iVar10 = param_2[lVar3];
    }
    uVar8 = (ulonglong)(iVar7 + iVar11 + 1);
    *(int *)(lVar9 + *(longlong *)(param_1 + 0x30) + lVar12 * 4) = iVar13;
    piVar14 = (int *)(uVar5 * 4 + *(longlong *)(param_1 + 0x10));
    iVar6 = iVar6 + iVar11;
LAB_1425145db:
    iVar13 = *piVar14;
    uVar5 = (ulonglong)((int)uVar5 + 1);
  } while( true );
}



// FUNCTION 1425146a0 FUN_1425146a0 body=159 status=ok
// SIG undefined FUN_1425146a0(void)

longlong FUN_1425146a0(longlong param_1)

{
  int *_Dst;
  char cVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    _Dst = *(int **)(param_1 + 0x10);
    if (*_Dst == 0) {
      memmove(_Dst,_Dst + 1,(longlong)*(int *)(param_1 + 0x1c) * 4 - 4);
      iVar2 = -1;
    }
    else {
      cVar1 = FUN_142511eb0(param_1,*(int *)(param_1 + 0x1c) + 1);
      if (cVar1 == '\0') {
        return param_1;
      }
      memmove((void *)((longlong)*(void **)(param_1 + 0x10) + 4),*(void **)(param_1 + 0x10),
              (longlong)*(int *)(param_1 + 0x1c) << 2);
      **(undefined4 **)(param_1 + 0x10) = 0;
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar2;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return param_1;
}



// FUNCTION 142514740 FUN_142514740 body=205 status=ok
// SIG undefined FUN_142514740(void)

longlong FUN_142514740(longlong param_1)

{
  void *_Dst;
  uint uVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
     ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    _Dst = (void *)(param_1 + 0x60);
    if (*(void **)(param_1 + 0x30) != _Dst) {
      FUN_1424da110();
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    _Src = *(void **)(param_1 + 0x10);
    if (_Src != _Dst) {
      uVar1 = *(uint *)(param_1 + 0x1c);
      if ((longlong)(int)uVar1 < 0x1a) {
        memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
        FUN_1424da110(_Src);
        *(void **)(param_1 + 0x10) = _Dst;
        *(undefined4 *)(param_1 + 0x18) = 0x19;
      }
      else if ((int)(uVar1 + 7) < *(int *)(param_1 + 0x18)) {
        lVar3 = FUN_1424da060(_Src,(ulonglong)uVar1 << 2);
        if (lVar3 != 0) {
          *(longlong *)(param_1 + 0x10) = lVar3;
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
        }
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 1) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return param_1;
}



// FUNCTION 142514810 FUN_142514810 body=619 status=ok
// SIG undefined FUN_142514810(void)

undefined8 * FUN_142514810(undefined8 *param_1,ushort *param_2,int param_3,int param_4,int *param_5)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*param_5 < 1) {
    if (((0 < param_3) && (param_2 != (ushort *)0x0)) && (param_4 == 0)) {
      uVar1 = *param_2;
      uVar7 = uVar1;
      if ((short)uVar1 < 0) {
        uVar7 = param_2[1];
      }
      uVar6 = (ulonglong)uVar7;
      iVar8 = (uVar1 & 0x7fff) - (uint)uVar7;
      cVar2 = FUN_142511eb0();
      if (cVar2 == '\0') {
        return param_1;
      }
      uVar5 = ((short)uVar1 < 0) + 1;
      if (uVar7 != 0) {
        uVar3 = (ulonglong)(uVar7 & 3);
        if (uVar7 < 4) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            *(uint *)(param_1[2] + uVar4 * 4) = (uint)param_2[uVar5 + uVar4];
            *(uint *)(param_1[2] + 4 + uVar4 * 4) = (uint)param_2[(ulonglong)uVar5 + uVar4 + 1];
            *(uint *)(param_1[2] + 8 + uVar4 * 4) = (uint)param_2[(ulonglong)uVar5 + uVar4 + 2];
            *(uint *)(param_1[2] + 0xc + uVar4 * 4) = (uint)param_2[(ulonglong)uVar5 + uVar4 + 3];
            uVar4 = uVar4 + 4;
          } while ((uVar7 & 0xfffffffc) != uVar4);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(uint *)(param_1[2] + uVar4 * 4) = (uint)param_2[uVar5 + uVar4];
          uVar4 = uVar4 + 1;
        }
      }
      if (1 < iVar8) {
        param_2 = param_2 + (ulonglong)(uVar5 + uVar7) + 1;
        do {
          *(uint *)(param_1[2] + uVar6 * 4) = CONCAT22(param_2[-1],*param_2);
          uVar6 = uVar6 + 1;
          param_2 = param_2 + 2;
        } while ((longlong)uVar6 < (longlong)(int)(iVar8 / 2 + (uint)uVar7));
      }
      iVar8 = (int)uVar6;
      if ((iVar8 == 0) || (*(int *)(param_1[2] + -4 + (longlong)iVar8 * 4) != 0x110000)) {
        iVar8 = iVar8 + 1;
        *(undefined4 *)(param_1[2] + (uVar6 & 0xffffffff) * 4) = 0x110000;
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar8;
      return param_1;
    }
    *param_5 = 1;
    if (param_1[5] == 0 && param_1[0xb] == 0) {
      *(undefined4 *)param_1[2] = 0x110000;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
      if (param_1[8] != 0) {
        FUN_1424da110();
        param_1[8] = 0;
        *(undefined4 *)(param_1 + 9) = 0;
      }
      if (param_1[10] != 0) {
        FUN_1425160a0();
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0x110000;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}



// FUNCTION 142514a80 Unwind@142514a80 body=52 status=ok
// SIG undefined Unwind@142514a80(void)

void Unwind_142514a80(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142514ac0 FUN_142514ac0 body=226 status=ok
// SIG undefined FUN_142514ac0(void)

ulonglong FUN_142514ac0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x110001;
  if ((int)param_2 < 0x110001) {
    uVar3 = param_2;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(int *)(param_1 + 0x38) < (int)uVar3) {
    if ((int)uVar3 < 0x19) {
      uVar4 = uVar3 + 0x19;
    }
    else if (uVar3 < 0x9c5) {
      uVar4 = uVar3 * 5;
    }
    else {
      uVar4 = 0x110001;
      if (uVar3 * 2 < 0x110001) {
        uVar4 = uVar3 * 2;
      }
    }
    lVar1 = FUN_1424da030((longlong)(int)uVar4 << 2);
    if (lVar1 == 0) {
      if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
        **(undefined4 **)(param_1 + 0x10) = 0x110000;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1425160a0();
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      uVar2 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x30) != param_1 + 0x60) {
        FUN_1424da110();
      }
      *(longlong *)(param_1 + 0x30) = lVar1;
      *(uint *)(param_1 + 0x38) = uVar4;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 142514bb0 FUN_142514bb0 body=119 status=ok
// SIG undefined FUN_142514bb0(void)

void FUN_142514bb0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_2 + 8) < 0) {
    if (*(int *)(param_2 + 0xc) < 1) {
      return;
    }
  }
  else if (*(short *)(param_2 + 8) >> 5 < 1) {
    return;
  }
  iVar3 = 0;
  do {
    uVar1 = FUN_1424a8030(param_2,iVar3);
    FUN_142514c30(param_1,uVar1,param_3);
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    iVar3 = (iVar3 - (uint)(uVar1 < 0x10000)) + 2;
  } while (iVar3 < iVar2);
  return;
}



// FUNCTION 142514c30 FUN_142514c30 body=157 status=ok
// SIG undefined FUN_142514c30(void)

void FUN_142514c30(undefined8 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_3 != '\0') && (cVar1 = FUN_1425cc5a0(param_2), cVar1 != '\0')) &&
     (cVar1 = FUN_1425cc5b0(param_1,param_2), cVar1 != '\0')) goto LAB_142514ca7;
  switch(param_2) {
  case 0x24:
  case 0x26:
  case 0x2d:
  case 0x3a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x7b:
  case 0x7d:
    local_1c = 0x5c;
    puVar2 = &local_1c;
LAB_142514c8c:
    FUN_1424a6cf0(param_1,puVar2,0,1);
    break;
  default:
    cVar1 = FUN_1425cc7f0(param_2);
    if (cVar1 != '\0') {
      local_1a = 0x5c;
      puVar2 = &local_1a;
      goto LAB_142514c8c;
    }
  }
  FUN_1424a7d60(param_1,param_2);
LAB_142514ca7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142514ce0 FUN_142514ce0 body=368 status=ok
// SIG undefined FUN_142514ce0(void)

longlong FUN_142514ce0(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar4 = FUN_142514e70(param_1,param_2,param_3);
    return lVar4;
  }
  iVar6 = *(int *)(param_1 + 0x48);
  if (0 < iVar6) {
    uVar7 = 0;
    iVar9 = 0;
    do {
      iVar5 = iVar9 + 1;
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 2);
      uVar8 = (uint)uVar1;
      if ((((uVar1 & 0xfc00) == 0xd800) && (iVar5 != iVar6)) &&
         (uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 2),
         (uVar3 & 0xfc00) == 0xdc00)) {
        iVar9 = iVar9 + 2;
        uVar8 = (uint)uVar1 * 0x400 + uVar3 + 0xfca02400;
        if ((char)param_3 == '\0') goto LAB_142514d20;
LAB_142514dab:
        cVar2 = FUN_1425cc5a0(uVar8);
        if (cVar2 == '\0') goto LAB_142514d20;
        if ((uVar7 & 0x80000001) == 1) {
          uVar1 = *(ushort *)(param_2 + 8);
          if ((short)uVar1 < 0) {
            iVar6 = *(int *)(param_2 + 0xc);
          }
          else {
            iVar6 = (int)(short)uVar1 >> 5;
          }
          iVar5 = iVar6 + -1;
          if ((((int)(short)uVar1 & 1U) == 0) || (iVar5 != 0)) {
            if (iVar6 != 0) {
              if (iVar6 < 0x401) {
                *(ushort *)(param_2 + 8) = (short)iVar5 * 0x20 | uVar1 & 0x1f;
              }
              else {
                *(ushort *)(param_2 + 8) = uVar1 | 0xffe0;
                *(int *)(param_2 + 0xc) = iVar5;
              }
            }
          }
          else {
            FUN_1424a8e40(param_2);
          }
        }
        FUN_1425cc5b0(param_2,uVar8);
        uVar7 = 0;
      }
      else {
        iVar9 = iVar5;
        if ((char)param_3 != '\0') goto LAB_142514dab;
LAB_142514d20:
        FUN_1424a7d60(param_2,uVar8);
        uVar7 = uVar7 + 1;
        if (uVar8 != 0x5c) {
          uVar7 = 0;
        }
      }
      iVar6 = *(int *)(param_1 + 0x48);
    } while (iVar9 < iVar6);
  }
  return param_2;
}



// FUNCTION 142514e70 FUN_142514e70 body=651 status=ok
// SIG undefined FUN_142514e70(void)

void FUN_142514e70(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_78 [46];
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4a = 0x5b;
  FUN_1424a6cf0(param_2,&local_4a,0,1);
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar7 = iVar3 / 2;
  if (iVar3 < 4) {
    if (iVar3 < 2) goto LAB_142515011;
  }
  else if ((**(int **)(param_1 + 0x10) == 0) &&
          ((*(int **)(param_1 + 0x10))[uVar7 * 2 - 1] == 0x110000)) {
    local_4a = 0x5e;
    FUN_1424a6cf0(param_2,&local_4a,0,1);
    uVar5 = 2;
    if (2 < (int)uVar7) {
      uVar5 = (ulonglong)uVar7;
    }
    uVar6 = 1;
    do {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + -4 + uVar6 * 8);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
      iVar3 = iVar1 + -1;
      FUN_142514c30(param_2,iVar4,param_3);
      if (iVar4 != iVar3) {
        if (iVar4 != iVar1 + -2) {
          local_4a = 0x2d;
          FUN_1424a6cf0(param_2,&local_4a,0,1);
        }
        FUN_142514c30(param_2,iVar3,param_3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
    goto LAB_142515011;
  }
  uVar5 = 0;
  do {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + uVar5 * 8);
    iVar3 = iVar1 + -1;
    FUN_142514c30(param_2,iVar4,param_3);
    if (iVar4 != iVar3) {
      if (iVar4 != iVar1 + -2) {
        local_4a = 0x2d;
        FUN_1424a6cf0(param_2,&local_4a,0,1);
      }
      FUN_142514c30(param_2,iVar3,param_3);
    }
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
LAB_142515011:
  if ((*(longlong *)(param_1 + 0x50) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0x50) + 8))) {
    iVar3 = 0;
    do {
      local_4a = 0x7b;
      FUN_1424a6cf0(param_2,&local_4a,0,1);
      lVar2 = FUN_142516630(*(undefined8 *)(param_1 + 0x50),iVar3);
      if (*(short *)(lVar2 + 8) < 0) {
        if (0 < *(int *)(lVar2 + 0xc)) {
LAB_1425150b7:
          iVar4 = 0;
          do {
            uVar7 = FUN_1424a8030(lVar2,iVar4);
            FUN_142514c30(param_2,uVar7);
            if (*(short *)(lVar2 + 8) < 0) {
              iVar1 = *(int *)(lVar2 + 0xc);
            }
            else {
              iVar1 = (int)*(short *)(lVar2 + 8) >> 5;
            }
            iVar4 = (iVar4 - (uint)(uVar7 < 0x10000)) + 2;
          } while (iVar4 < iVar1);
        }
      }
      else if (0 < *(short *)(lVar2 + 8) >> 5) goto LAB_1425150b7;
      local_4a = 0x7d;
      FUN_1424a6cf0(param_2,&local_4a,0,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(longlong *)(param_1 + 0x50) + 8));
  }
  local_4a = 0x5d;
  FUN_1424a6cf0(param_2,&local_4a,0,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 142515150 FUN_142515150 body=90 status=ok
// SIG undefined FUN_142515150(void)

void FUN_142515150(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      if (*(int *)(param_2 + 0xc) == 0) goto LAB_142515191;
    }
    else if ((short)uVar1 >> 5 == 0) goto LAB_142515191;
    *(ushort *)(param_2 + 8) = uVar1 & 0x1f;
  }
  else {
    FUN_1424a8e40(param_2);
  }
LAB_142515191:
  FUN_142514ce0(param_1 + -8,param_2,param_3);
  return;
}



// FUNCTION 1425151b0 FUN_1425151b0 body=325 status=ok
// SIG undefined FUN_1425151b0(void)

longlong FUN_1425151b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x58) != 0) {
    return param_1;
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return param_1;
  }
  FUN_142514740(param_1);
  if ((*(longlong *)(param_1 + 0x50) == 0) || (*(int *)(*(longlong *)(param_1 + 0x50) + 8) == 0)) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      return param_1;
    }
  }
  else {
    lVar1 = thunk_FUN_1424da030(0x180);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        **(undefined4 **)(param_1 + 0x10) = 0x110000;
        *(undefined4 *)(param_1 + 0x1c) = 1;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          FUN_1424da110();
          *(undefined8 *)(param_1 + 0x40) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        if (*(longlong *)(param_1 + 0x50) != 0) {
          FUN_1425160a0();
        }
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      return param_1;
    }
    FUN_1425c7b70(lVar1,param_1,*(undefined8 *)(param_1 + 0x50),0x3f,lVar1,uVar2);
    *(longlong *)(param_1 + 0x58) = lVar1;
    if (*(int *)(lVar1 + 0xf4) != 0) {
      return param_1;
    }
    FUN_1425c8500(lVar1);
    FUN_1401773f0(lVar1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar1 = thunk_FUN_1424da030(0x368);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_142512100(param_1);
  }
  else {
    FUN_1425ca930(lVar1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c));
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  return param_1;
}



// FUNCTION 142515300 Unwind@142515300 body=34 status=ok
// SIG undefined Unwind@142515300(void)

void Unwind_142515300(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142515330 Unwind@142515330 body=34 status=ok
// SIG undefined Unwind@142515330(void)

void Unwind_142515330(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142515360 FUN_142515360 body=521 status=ok
// SIG undefined FUN_142515360(void)

ulonglong FUN_142515360(longlong param_1,wchar_t *param_2,uint param_3,int param_4)

{
  wchar_t wVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_1c0 [244];
  int local_cc;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar9 = (ulonglong)param_3;
  if ((int)param_3 < 1) {
    uVar11 = 0;
    if (-1 < (int)param_3) goto LAB_1425153c2;
    sVar8 = wcslen(param_2);
    uVar9 = sVar8 & 0xffffffff;
    uVar11 = 0;
    if ((int)sVar8 == 0) goto LAB_1425153c2;
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar7 = FUN_1425cbae0(*(longlong *)(param_1 + 0x28),param_2,param_2 + uVar9,param_4);
    uVar11 = (ulonglong)(lVar7 - (longlong)param_2) >> 1;
    goto LAB_1425153c2;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar9 = FUN_1425c8f10(*(longlong *)(param_1 + 0x58),param_2,uVar9,param_4);
    return uVar9;
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != 0)) {
    FUN_1425c7b70(local_1c0,param_1,lVar7,0x1a - (uint)(param_4 == 0));
    if (local_cc != 0) {
      uVar5 = FUN_1425c8f10(local_1c0,param_2,uVar9,param_4);
      FUN_1425c8500(local_1c0);
      uVar11 = (ulonglong)uVar5;
      goto LAB_1425153c2;
    }
    FUN_1425c8500(local_1c0);
  }
  do {
    iVar2 = (int)uVar9;
    wVar1 = param_2[(longlong)iVar2 + -1];
    uVar5 = (uint)(ushort)wVar1;
    lVar7 = param_1;
    if ((iVar2 < 2) || ((wVar1 & 0xfc00U) != 0xdc00)) {
LAB_1425154d0:
      uVar15 = (ulonglong)(iVar2 - 1);
    }
    else {
      uVar15 = (ulonglong)(iVar2 - 2);
      if ((param_2[uVar15] & 0xfc00U) != 0xd800) goto LAB_1425154d0;
      uVar5 = (uint)(ushort)wVar1 + (uint)(ushort)param_2[uVar15] * 0x400 + 0xfca02400;
    }
    do {
      lVar10 = lVar7;
      if (*(longlong **)(lVar10 + 0x28) != (longlong *)0x0) {
        bVar4 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 8))();
        goto LAB_142515526;
      }
      lVar7 = *(longlong *)(lVar10 + 0x58);
    } while (*(longlong *)(lVar10 + 0x58) != 0);
    uVar6 = 0;
    bVar4 = 0;
    if ((int)uVar5 < 0x110000) {
      piVar3 = *(int **)(lVar10 + 0x10);
      if (*piVar3 <= (int)uVar5) {
        iVar2 = *(int *)(lVar10 + 0x1c);
        uVar6 = iVar2 - 1;
        if (((1 < iVar2) && (iVar2 != 2)) && ((int)uVar5 < piVar3[iVar2 - 2])) {
          uVar14 = uVar6 >> 1;
          uVar13 = 0;
          do {
            uVar12 = uVar14;
            if ((int)uVar5 < piVar3[(int)uVar14]) {
              uVar6 = uVar14;
              uVar12 = uVar13;
            }
            uVar14 = (int)(uVar6 + uVar12) >> 1;
            uVar13 = uVar12;
          } while (uVar14 != uVar12);
        }
      }
      bVar4 = (byte)uVar6 & 1;
    }
LAB_142515526:
    uVar11 = uVar9;
  } while (((uint)(param_4 != 0) == (int)(char)bVar4) &&
          (uVar9 = uVar15, uVar11 = uVar15, 0 < (int)uVar15));
LAB_1425153c2:
  return uVar11 & 0xffffffff;
}



// FUNCTION 142515580 Unwind@142515580 body=51 status=ok
// SIG undefined Unwind@142515580(void)

void Unwind_142515580(undefined8 param_1,longlong param_2)

{
  FUN_1425c8500(param_2 + 0x28);
  return;
}



// FUNCTION 1425155c0 FUN_1425155c0 body=716 status=ok
// SIG undefined FUN_1425155c0(void)

ulonglong FUN_1425155c0(longlong param_1,char *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_1c8 [248];
  int local_d0;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  sVar6 = (size_t)param_3;
  if ((int)param_3 < 1) {
    if (-1 < (int)param_3) {
      return 0;
    }
    sVar6 = strlen(param_2);
    if ((int)sVar6 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar4 = FUN_1425cbfd0(*(longlong *)(param_1 + 0x28),param_2,sVar6,param_4);
    return (ulonglong)(uint)(iVar4 - (int)param_2);
  }
  uVar5 = (uint)sVar6;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar7 = FUN_1425c9900(*(longlong *)(param_1 + 0x58),param_2,sVar6 & 0xffffffff,param_4);
    return uVar7;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 8) != 0)) {
    FUN_1425c7b70(local_1c8,param_1,lVar1,0x26 - (uint)(param_4 == 0));
    if (local_d0 != 0) {
      uVar5 = FUN_1425c9900(local_1c8,param_2,sVar6 & 0xffffffff,param_4);
      FUN_1425c8500(local_1c8);
      return (ulonglong)uVar5;
    }
    FUN_1425c8500(local_1c8);
  }
  uVar7 = 0;
  do {
    lVar8 = (longlong)(int)uVar7;
    uVar12 = lVar8 + 1;
    bVar3 = param_2[lVar8];
    uVar10 = (uint)bVar3;
    lVar1 = param_1;
    if ((char)bVar3 < '\0') {
      if ((uint)uVar12 == uVar5) {
LAB_14251570b:
        uVar10 = 0xfffd;
        uVar12 = sVar6 & 0xffffffff;
      }
      else {
        uVar10 = (uint)bVar3;
        if (bVar3 < 0xe0) {
          if (0xc1 < bVar3) {
            uVar10 = uVar10 & 0x1f;
LAB_14251575d:
            if ((byte)((byte)param_2[(int)uVar12] ^ 0x80) < 0x40) {
              uVar10 = uVar10 << 6 | (byte)param_2[(int)uVar12] ^ 0x80;
              uVar12 = (ulonglong)((int)uVar12 + 1);
              goto LAB_1425157f0;
            }
          }
        }
        else if (bVar3 < 0xf0) {
          uVar10 = uVar10 & 0xf;
          if (((byte)(&DAT_14bd49f86)[uVar10] >> ((byte)param_2[uVar12] >> 5) & 1) != 0) {
            bVar3 = param_2[uVar12] & 0x3f;
LAB_142515742:
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            if (uVar11 != uVar5) {
              uVar10 = (uint)bVar3 | uVar10 << 6;
              goto LAB_14251575d;
            }
            goto LAB_14251570b;
          }
        }
        else if (bVar3 < 0xf5) {
          if (((uint)(int)(char)(&DAT_14bd49f97)[(byte)param_2[uVar12] >> 4] >>
               (uVar10 - 0xf0 & 0x1f) & 1) != 0) {
            uVar9 = lVar8 + 2;
            if ((uint)uVar9 == uVar5) goto LAB_14251570b;
            bVar3 = param_2[uVar9] + 0x80;
            if (0x3f < bVar3) {
              uVar10 = 0xfffd;
              uVar12 = uVar9 & 0xffffffff;
              goto LAB_1425157f0;
            }
            uVar10 = (byte)param_2[uVar12] & 0x3f | (uVar10 - 0xf0) * 0x40;
            uVar12 = uVar9 & 0xffffffff;
            goto LAB_142515742;
          }
        }
        uVar10 = 0xfffd;
      }
    }
LAB_1425157f0:
    do {
      lVar8 = lVar1;
      if (*(longlong **)(lVar8 + 0x28) != (longlong *)0x0) {
        bVar3 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 8))();
        goto LAB_142515836;
      }
      lVar1 = *(longlong *)(lVar8 + 0x58);
    } while (*(longlong *)(lVar8 + 0x58) != 0);
    uVar11 = 0;
    bVar3 = 0;
    if ((int)uVar10 < 0x110000) {
      piVar2 = *(int **)(lVar8 + 0x10);
      if (*piVar2 <= (int)uVar10) {
        iVar4 = *(int *)(lVar8 + 0x1c);
        uVar11 = iVar4 - 1;
        if (((1 < iVar4) && (iVar4 != 2)) && ((int)uVar10 < piVar2[iVar4 - 2])) {
          uVar15 = uVar11 >> 1;
          uVar14 = 0;
          do {
            uVar13 = uVar15;
            if ((int)uVar10 < piVar2[(int)uVar15]) {
              uVar11 = uVar15;
              uVar13 = uVar14;
            }
            uVar15 = (int)(uVar11 + uVar13) >> 1;
            uVar14 = uVar13;
          } while (uVar15 != uVar13);
        }
      }
      bVar3 = (byte)uVar11 & 1;
    }
LAB_142515836:
    if (((uint)(param_4 != 0) != (int)(char)bVar3) ||
       (uVar7 = uVar12 & 0xffffffff, (int)uVar5 <= (int)uVar12)) {
      return uVar7;
    }
  } while( true );
}



// FUNCTION 1425158a0 Unwind@1425158a0 body=55 status=ok
// SIG undefined Unwind@1425158a0(void)

void Unwind_1425158a0(undefined8 param_1,longlong param_2)

{
  FUN_1425c8500(param_2 + 0x20);
  return;
}



// FUNCTION 1425158e0 FUN_1425158e0 body=498 status=ok
// SIG undefined FUN_1425158e0(void)

ulonglong FUN_1425158e0(longlong param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  size_t sVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_1c8 [248];
  int local_d0;
  uint local_44 [3];
  
  local_44[1] = 0xfffffffe;
  local_44[2] = 0xffffffff;
  sVar8 = (size_t)param_3;
  if ((int)param_3 < 1) {
    if (-1 < (int)param_3) {
      return 0;
    }
    sVar8 = strlen(param_2);
    if ((int)sVar8 == 0) {
      return 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar7 = FUN_1425cc330(*(longlong *)(param_1 + 0x28),param_2,sVar8,param_4);
    return uVar7;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar7 = FUN_1425ca0e0(*(longlong *)(param_1 + 0x58),param_2,sVar8 & 0xffffffff,param_4);
    return uVar7;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 8) != 0)) {
    FUN_1425c7b70(local_1c8,param_1,lVar2,0x16 - (uint)(param_4 == 0));
    if (local_d0 != 0) {
      uVar5 = FUN_1425ca0e0(local_1c8,param_2,sVar8 & 0xffffffff,param_4);
      FUN_1425c8500(local_1c8);
      return (ulonglong)uVar5;
    }
    FUN_1425c8500(local_1c8);
  }
  uVar7 = sVar8 & 0xffffffff;
  do {
    local_44[0] = (int)uVar7 - 1;
    uVar5 = (uint)(byte)param_2[(longlong)(int)uVar7 + -1];
    lVar2 = param_1;
    if (param_2[(longlong)(int)uVar7 + -1] < '\0') {
      uVar5 = FUN_142580f00(param_2,0,local_44,uVar5,0xfd);
    }
    do {
      lVar9 = lVar2;
      if (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0) {
        bVar4 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))();
        goto LAB_142515a89;
      }
      lVar2 = *(longlong *)(lVar9 + 0x58);
    } while (*(longlong *)(lVar9 + 0x58) != 0);
    uVar6 = 0;
    bVar4 = 0;
    if ((int)uVar5 < 0x110000) {
      piVar3 = *(int **)(lVar9 + 0x10);
      if (*piVar3 <= (int)uVar5) {
        iVar1 = *(int *)(lVar9 + 0x1c);
        uVar6 = iVar1 - 1;
        if (((1 < iVar1) && (iVar1 != 2)) && ((int)uVar5 < piVar3[iVar1 - 2])) {
          uVar12 = uVar6 >> 1;
          uVar11 = 0;
          do {
            uVar10 = uVar12;
            if ((int)uVar5 < piVar3[(int)uVar12]) {
              uVar6 = uVar12;
              uVar10 = uVar11;
            }
            uVar12 = (int)(uVar6 + uVar10) >> 1;
            uVar11 = uVar10;
          } while (uVar12 != uVar10);
        }
      }
      bVar4 = (byte)uVar6 & 1;
    }
LAB_142515a89:
    if (((uint)(param_4 != 0) != (int)(char)bVar4) ||
       (uVar7 = (ulonglong)local_44[0], (int)local_44[0] < 1)) {
      return uVar7;
    }
  } while( true );
}



// FUNCTION 142515ae0 Unwind@142515ae0 body=51 status=ok
// SIG undefined Unwind@142515ae0(void)

void Unwind_142515ae0(undefined8 param_1,longlong param_2)

{
  FUN_1425c8500(param_2 + 0x30);
  return;
}



// FUNCTION 142515b20 FUN_142515b20 body=38 status=ok
// SIG undefined FUN_142515b20(void)

undefined8 FUN_142515b20(undefined8 param_1,int param_2)

{
  FUN_1425121d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142515b50 FUN_142515b50 body=45 status=ok
// SIG undefined FUN_142515b50(void)

longlong FUN_142515b50(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1425121d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142515b80 FUN_142515b80 body=22 status=ok
// SIG undefined FUN_142515b80(void)

undefined8 * FUN_142515b80(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 142515ba0 FUN_142515ba0 body=1 status=ok
// SIG undefined FUN_142515ba0(void)

void FUN_142515ba0(void)

{
  return;
}



// FUNCTION 142515bb0 FUN_142515bb0 body=241 status=ok
// SIG undefined FUN_142515bb0(void)

uint FUN_142515bb0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar1 = param_1 + 1;
  lVar8 = param_1[1];
  if (lVar8 == 0) {
    lVar8 = *param_1;
    iVar5 = *(int *)(lVar8 + 0x28);
    if ((iVar5 < *(int *)(lVar8 + 0x2c)) &&
       (*(ushort *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 2) < 0xd800)) {
      *(int *)(lVar8 + 0x28) = iVar5 + 1;
      uVar4 = (uint)*(ushort *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 2);
    }
    else {
      uVar4 = FUN_14250e570();
      if (uVar4 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    iVar5 = 0;
    uVar4 = FUN_1424d7ef0(uVar4,plVar1,0);
    *(uint *)(param_1 + 2) = uVar4;
    if (0x1e < uVar4) {
      if ((int)uVar4 < 0) {
        uVar4 = ~uVar4;
        *(uint *)(param_1 + 2) = uVar4;
      }
      goto LAB_142515c27;
    }
    lVar8 = *plVar1;
    uVar3 = uVar4;
  }
  else {
    iVar5 = *(int *)((longlong)param_1 + 0x14);
    uVar3 = *(uint *)(param_1 + 2);
  }
  uVar6 = iVar5 + 1;
  *(uint *)((longlong)param_1 + 0x14) = uVar6;
  uVar2 = *(ushort *)(lVar8 + (longlong)iVar5 * 2);
  uVar4 = (uint)uVar2;
  if ((((uVar2 & 0xfc00) == 0xd800) && (uVar6 != uVar3)) &&
     (uVar7 = (uint)*(ushort *)(lVar8 + (longlong)(int)uVar6 * 2), (uVar7 & 0xfc00) == 0xdc00)) {
    uVar6 = iVar5 + 2;
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
    uVar4 = (uint)uVar2 * 0x400 + uVar7 + 0xfca02400;
  }
  if ((int)uVar6 < (int)uVar3) {
    return uVar4;
  }
LAB_142515c27:
  *plVar1 = 0;
  return uVar4;
}



// FUNCTION 142515cb0 FUN_142515cb0 body=9 status=ok
// SIG undefined FUN_142515cb0(void)

bool FUN_142515cb0(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 142515cc0 FUN_142515cc0 body=30 status=ok
// SIG undefined FUN_142515cc0(void)

undefined8 *
FUN_142515cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 142515ce0 FUN_142515ce0 body=1 status=ok
// SIG undefined FUN_142515ce0(void)

void FUN_142515ce0(void)

{
  return;
}



// FUNCTION 142515cf0 FUN_142515cf0 body=296 status=ok
// SIG undefined FUN_142515cf0(void)

uint FUN_142515cf0(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar1 = param_1 + 3;
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    lVar8 = param_1[1];
    if (param_1[2] <= lVar8) {
      return 0xffffffff;
    }
    param_1[1] = lVar8 + 1;
    uVar2 = *(ushort *)(*param_1 + lVar8 * 2);
    uVar3 = (uint)uVar2;
    if ((((uVar2 & 0xfc00) == 0xd800) && (lVar8 + 1 != param_1[2])) &&
       (uVar4 = (uint)*(ushort *)(*param_1 + 2 + lVar8 * 2), (uVar4 & 0xfc00) == 0xdc00)) {
      param_1[1] = lVar8 + 2;
      uVar3 = (uint)uVar2 * 0x400 + uVar4 + 0xfca02400;
    }
    iVar5 = 0;
    uVar3 = FUN_1424d7ef0(uVar3,plVar1,0);
    *(uint *)(param_1 + 4) = uVar3;
    if (0x1e < uVar3) {
      if ((int)uVar3 < 0) {
        uVar3 = ~uVar3;
        *(uint *)(param_1 + 4) = uVar3;
      }
      goto LAB_142515d6b;
    }
    lVar8 = *plVar1;
    uVar4 = uVar3;
  }
  else {
    iVar5 = *(int *)((longlong)param_1 + 0x24);
    uVar4 = *(uint *)(param_1 + 4);
  }
  uVar6 = iVar5 + 1;
  *(uint *)((longlong)param_1 + 0x24) = uVar6;
  uVar2 = *(ushort *)(lVar8 + (longlong)iVar5 * 2);
  uVar3 = (uint)uVar2;
  if ((((uVar2 & 0xfc00) == 0xd800) && (uVar6 != uVar4)) &&
     (uVar7 = (uint)*(ushort *)(lVar8 + (longlong)(int)uVar6 * 2), (uVar7 & 0xfc00) == 0xdc00)) {
    uVar6 = iVar5 + 2;
    *(uint *)((longlong)param_1 + 0x24) = uVar6;
    uVar3 = (uint)uVar2 * 0x400 + uVar7 + 0xfca02400;
  }
  if ((int)uVar6 < (int)uVar4) {
    return uVar3;
  }
LAB_142515d6b:
  *plVar1 = 0;
  return uVar3;
}



// FUNCTION 142515e20 FUN_142515e20 body=9 status=ok
// SIG undefined FUN_142515e20(void)

bool FUN_142515e20(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) != 0;
}



// FUNCTION 142515e30 FUN_142515e30 body=5 status=ok
// SIG undefined FUN_142515e30(void)

undefined8 FUN_142515e30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 142515e40 FUN_142515e40 body=8 status=ok
// SIG undefined FUN_142515e40(void)

undefined * FUN_142515e40(void)

{
  return &DAT_14c792c20;
}



// FUNCTION 142515e50 FUN_142515e50 body=82 status=ok
// SIG undefined FUN_142515e50(void)

undefined8 * FUN_142515e50(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::UVector::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*param_2 < 1) {
    lVar1 = FUN_1424da030(0x40);
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      *param_2 = 7;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xc) = 8;
    }
  }
  return param_1;
}



// FUNCTION 142515eb0 FUN_142515eb0 body=103 status=ok
// SIG undefined FUN_142515eb0(void)

undefined8 * FUN_142515eb0(undefined8 *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = icu_64::UVector::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*param_3 < 1) {
    uVar2 = 8;
    if (0xf0000000 < param_2 + 0xf0000000) {
      uVar2 = (ulonglong)param_2;
    }
    lVar1 = FUN_1424da030(uVar2 * 8);
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      *param_3 = 7;
    }
    else {
      *(int *)((longlong)param_1 + 0xc) = (int)uVar2;
    }
  }
  return param_1;
}



// FUNCTION 142515f20 FUN_142515f20 body=87 status=ok
// SIG undefined FUN_142515f20(void)

undefined8 * FUN_142515f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  
  *param_1 = icu_64::UVector::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (*param_4 < 1) {
    lVar1 = FUN_1424da030(0x40);
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      *param_4 = 7;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xc) = 8;
    }
  }
  return param_1;
}



// FUNCTION 142515f80 FUN_142515f80 body=110 status=ok
// SIG undefined FUN_142515f80(void)

undefined8 *
FUN_142515f80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,int *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = icu_64::UVector::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  if (*param_5 < 1) {
    uVar2 = 8;
    if (0xf0000000 < param_4 + 0xf0000000) {
      uVar2 = (ulonglong)param_4;
    }
    lVar1 = FUN_1424da030(uVar2 * 8);
    param_1[2] = lVar1;
    if (lVar1 == 0) {
      *param_5 = 7;
    }
    else {
      *(int *)((longlong)param_1 + 0xc) = (int)uVar2;
    }
  }
  return param_1;
}



// FUNCTION 142515ff0 FUN_142515ff0 body=122 status=ok
// SIG undefined FUN_142515ff0(void)

void FUN_142515ff0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = icu_64::UVector::vftable;
  if (param_1[3] != 0) {
    iVar1 = *(int *)(param_1 + 1);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2 * 8) != 0) {
          (*(code *)param_1[3])();
          iVar1 = *(int *)(param_1 + 1);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1424da110(param_1[2]);
  param_1[2] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142516080 Unwind@142516080 body=21 status=ok
// SIG undefined Unwind@142516080(void)

void Unwind_142516080(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425160a0 FUN_1425160a0 body=73 status=ok
// SIG undefined FUN_1425160a0(void)

void FUN_1425160a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar2 * 8) != 0) {
          (**(code **)(param_1 + 0x18))();
          iVar1 = *(int *)(param_1 + 8);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1425160f0 FUN_1425160f0 body=221 status=ok
// SIG undefined FUN_1425160f0(void)

void FUN_1425160f0(longlong param_1,longlong param_2,code *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_2 + 8);
  iVar3 = 1;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((int)uVar1 <= iVar2) {
LAB_14251615c:
      FUN_1425161e0(param_1,uVar1,param_4);
      if (0 < *param_4) {
        return;
      }
      if (*(int *)(param_2 + 8) < 1) {
        return;
      }
      lVar4 = 0;
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x10);
        if ((*(longlong *)(lVar5 + lVar4) != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
          (**(code **)(param_1 + 0x18))(*(longlong *)(lVar5 + lVar4));
          lVar5 = *(longlong *)(param_1 + 0x10);
        }
        (*param_3)(lVar5 + lVar4,*(longlong *)(param_2 + 0x10) + lVar4);
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar7 < *(int *)(param_2 + 8));
      return;
    }
    if (iVar2 < 0x40000000) {
      uVar6 = iVar2 * 2;
      if (iVar2 * 2 <= (int)uVar1) {
        uVar6 = uVar1;
      }
      if (uVar6 < 0x10000000) {
        lVar4 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar6 << 3);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x10) = lVar4;
          *(uint *)(param_1 + 0xc) = uVar6;
          uVar1 = *(uint *)(param_2 + 8);
          goto LAB_14251615c;
        }
        iVar3 = 7;
      }
    }
  }
  *param_4 = iVar3;
  return;
}



// FUNCTION 1425161e0 FUN_1425161e0 body=368 status=ok
// SIG undefined FUN_1425161e0(void)

void FUN_1425161e0(longlong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((int)param_2 < 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 8);
  if ((int)uVar6 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)param_2) {
      if (0x3fffffff < iVar1) {
LAB_14251622a:
        *param_3 = 1;
        return;
      }
      uVar6 = iVar1 * 2;
      if (iVar1 * 2 <= (int)param_2) {
        uVar6 = param_2;
      }
      if (0xfffffff < uVar6) goto LAB_14251622a;
      lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar6 << 3);
      if (lVar3 == 0) {
        *param_3 = 7;
        return;
      }
      *(longlong *)(param_1 + 0x10) = lVar3;
      *(uint *)(param_1 + 0xc) = uVar6;
      uVar6 = *(uint *)(param_1 + 8);
    }
    if ((int)uVar6 < (int)param_2) {
      uVar4 = (ulonglong)(int)uVar6;
      uVar5 = ~uVar4;
      uVar6 = param_2 - uVar6 & 3;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) = 0;
          uVar4 = uVar4 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (2 < uVar5 + param_2) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10 + uVar4 * 8) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18 + uVar4 * 8) = 0;
          uVar4 = uVar4 + 4;
        } while (param_2 != uVar4);
      }
    }
  }
  else {
    while (uVar2 = uVar6, (int)param_2 < (int)uVar2) {
      uVar6 = uVar2 - 1;
      iVar1 = *(int *)(param_1 + 8);
      if ((int)uVar2 <= iVar1) {
        uVar4 = (ulonglong)uVar6;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
        if ((int)uVar2 < iVar1) {
          do {
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4 * 8);
            uVar4 = uVar4 + 1;
            uVar5 = (longlong)*(int *)(param_1 + 8) - 1;
          } while ((longlong)uVar4 < (longlong)uVar5);
        }
        else {
          uVar5 = (ulonglong)(iVar1 - 1);
        }
        *(int *)(param_1 + 8) = (int)uVar5;
        if ((lVar3 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
          (**(code **)(param_1 + 0x18))();
        }
      }
    }
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 142516370 FUN_142516370 body=99 status=ok
// SIG undefined FUN_142516370(void)

ulonglong FUN_142516370(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((*(longlong *)(param_1 + 0x20) != 0) && (0 < *(int *)(param_1 + 8))) {
      lVar3 = 0;
      do {
        cVar1 = (**(code **)(param_1 + 0x20))
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar3 * 8),
                           *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar3 * 8));
        if (cVar1 == '\0') goto LAB_1425163c5;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 8));
    }
  }
  else {
LAB_1425163c5:
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1425163e0 FUN_1425163e0 body=132 status=ok
// SIG undefined FUN_1425163e0(void)

void FUN_1425163e0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if (-2 < iVar4) {
    uVar3 = iVar4 + 1;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar4 < iVar1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
LAB_14251640f:
      *(uint *)(param_1 + 8) = uVar3;
      *(undefined8 *)(lVar2 + (longlong)iVar4 * 8) = param_2;
      return;
    }
    if (iVar1 < 0x40000000) {
      uVar5 = iVar1 * 2;
      if (iVar1 * 2 <= (int)uVar3) {
        uVar5 = uVar3;
      }
      if (uVar5 < 0x10000000) {
        lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar5 << 3);
        if (lVar2 == 0) {
          *param_3 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(uint *)(param_1 + 0xc) = uVar5;
        iVar4 = *(int *)(param_1 + 8);
        uVar3 = iVar4 + 1;
        goto LAB_14251640f;
      }
    }
  }
  *param_3 = 1;
  return;
}



// FUNCTION 142516470 FUN_142516470 body=142 status=ok
// SIG undefined FUN_142516470(void)

void FUN_142516470(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (-2 < iVar3) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar3 < iVar1) {
      lVar2 = *(longlong *)(param_1 + 0x10);
LAB_14251649b:
      *(undefined8 *)(lVar2 + (longlong)iVar3 * 8) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 8) * 8) = param_2
      ;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    if (iVar1 < 0x40000000) {
      uVar4 = iVar1 * 2;
      if (iVar1 * 2 <= (int)(iVar3 + 1U)) {
        uVar4 = iVar3 + 1U;
      }
      if (uVar4 < 0x10000000) {
        lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar4 << 3);
        if (lVar2 == 0) {
          *param_3 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x10) = lVar2;
        *(uint *)(param_1 + 0xc) = uVar4;
        iVar3 = *(int *)(param_1 + 8);
        goto LAB_14251649b;
      }
    }
  }
  *param_3 = 1;
  return;
}



// FUNCTION 142516500 FUN_142516500 body=298 status=ok
// SIG undefined FUN_142516500(void)

void FUN_142516500(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_3 < 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if ((int)uVar4 < (int)param_3) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((int)uVar4 < iVar1) {
LAB_142516533:
    if (uVar4 - param_3 != 0 && (int)param_3 <= (int)uVar4) {
      uVar5 = ~param_3 + uVar4;
      uVar6 = uVar4 - param_3 & 3;
      if (uVar6 == 0) {
        uVar2 = (ulonglong)uVar4;
      }
      else {
        do {
          uVar2 = (ulonglong)(uVar4 - 1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8);
          uVar6 = uVar6 - 1;
          uVar4 = uVar4 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar5) {
        do {
          iVar1 = (int)uVar2;
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 1) * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 1) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 2) * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 2) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 3) * 8);
          uVar2 = (ulonglong)(iVar1 - 4U);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(iVar1 - 3) * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8);
        } while ((int)param_3 < (int)(iVar1 - 4U));
      }
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_3 * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    if (iVar1 < 0x40000000) {
      uVar5 = iVar1 * 2;
      if (iVar1 * 2 <= (int)(uVar4 + 1)) {
        uVar5 = uVar4 + 1;
      }
      if (uVar5 < 0x10000000) {
        lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar5 << 3);
        if (lVar3 == 0) {
          *param_4 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x10) = lVar3;
        *(uint *)(param_1 + 0xc) = uVar5;
        uVar4 = *(uint *)(param_1 + 8);
        goto LAB_142516533;
      }
    }
    *param_4 = 1;
  }
  return;
}



// FUNCTION 142516630 FUN_142516630 body=22 status=ok
// SIG undefined FUN_142516630(void)

undefined8 FUN_142516630(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8);
  }
  return uVar1;
}



// FUNCTION 142516650 FUN_142516650 body=21 status=ok
// SIG undefined FUN_142516650(void)

undefined4 FUN_142516650(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 8);
  }
  return uVar1;
}



// FUNCTION 142516670 FUN_142516670 body=165 status=ok
// SIG undefined FUN_142516670(void)

ulonglong FUN_142516670(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (0 < *(int *)(param_2 + 8)) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar5 * 8);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        if (0 < (int)*(uint *)(param_1 + 8)) {
          uVar4 = 0;
          while (*(int *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) != (int)uVar1) {
            uVar4 = uVar4 + 1;
            if (*(uint *)(param_1 + 8) == uVar4) goto LAB_142516703;
          }
          goto LAB_1425166f0;
        }
LAB_142516703:
        uVar3 = 0;
        break;
      }
      if (*(int *)(param_1 + 8) < 1) goto LAB_142516703;
      uVar4 = 0;
      while (cVar2 = (**(code **)(param_1 + 0x20))
                               (uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8)),
            cVar2 == '\0') {
        uVar4 = uVar4 + 1;
        if ((longlong)*(int *)(param_1 + 8) <= (longlong)uVar4) goto LAB_142516703;
      }
LAB_1425166f0:
      if ((int)uVar4 < 0) goto LAB_142516703;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 8));
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 142516720 FUN_142516720 body=278 status=ok
// SIG undefined FUN_142516720(void)

undefined8 FUN_142516720(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (*(int *)(param_2 + 8) < 1) {
    return 0;
  }
  lVar9 = 0;
  uVar6 = 0;
LAB_142516760:
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + lVar9 * 8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (0 < (int)*(uint *)(param_1 + 8)) {
      uVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8) == (int)uVar1) goto LAB_1425167c0;
        uVar8 = uVar8 + 1;
      } while (*(uint *)(param_1 + 8) != uVar8);
    }
  }
  else if (0 < *(int *)(param_1 + 8)) {
    uVar8 = 0;
    do {
      cVar3 = (**(code **)(param_1 + 0x20))
                        (uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8));
      if (cVar3 != '\0') goto LAB_1425167c0;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 8));
  }
  goto LAB_142516750;
LAB_1425167c0:
  iVar7 = (int)uVar8;
  if (-1 < iVar7) {
    uVar6 = 1;
    if (iVar7 < *(int *)(param_1 + 8)) {
      uVar8 = uVar8 & 0xffffffff;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8);
      uVar4 = *(int *)(param_1 + 8) - 1;
      uVar5 = (ulonglong)uVar4;
      if (iVar7 < (int)uVar4) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar8 * 8);
          uVar8 = uVar8 + 1;
          uVar5 = (longlong)*(int *)(param_1 + 8) - 1;
        } while ((longlong)uVar8 < (longlong)uVar5);
      }
      *(int *)(param_1 + 8) = (int)uVar5;
      if ((lVar2 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
        (**(code **)(param_1 + 0x18))();
      }
    }
  }
LAB_142516750:
  lVar9 = lVar9 + 1;
  if (*(int *)(param_2 + 8) <= lVar9) {
    return uVar6;
  }
  goto LAB_142516760;
}



// FUNCTION 142516850 FUN_142516850 body=89 status=ok
// SIG undefined FUN_142516850(void)

void FUN_142516850(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    uVar4 = (ulonglong)param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
    uVar2 = *(int *)(param_1 + 8) - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)param_2 < (int)uVar2) {
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4 * 8);
        uVar4 = uVar4 + 1;
        uVar3 = (longlong)*(int *)(param_1 + 8) - 1;
      } while ((longlong)uVar4 < (longlong)uVar3);
    }
    *(int *)(param_1 + 8) = (int)uVar3;
    if ((lVar1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001425168a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x18))(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1425168b0 FUN_1425168b0 body=289 status=ok
// SIG undefined FUN_1425168b0(void)

undefined8 FUN_1425168b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)*(uint *)(param_1 + 8);
  if ((int)*(uint *)(param_1 + 8) < 1) {
    return 0;
  }
  uVar7 = 0;
  uVar8 = uVar10;
LAB_1425168f2:
  uVar10 = (ulonglong)((int)uVar10 - 1);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar10 * 8);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if (0 < (int)*(uint *)(param_2 + 8)) {
      uVar9 = 0;
      do {
        if (*(int *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8) == (int)uVar2) goto LAB_142516950;
        uVar9 = uVar9 + 1;
      } while (*(uint *)(param_2 + 8) != uVar9);
    }
  }
  else if (0 < *(int *)(param_2 + 8)) {
    uVar9 = 0;
    do {
      cVar5 = (**(code **)(param_2 + 0x20))
                        (uVar2,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + uVar9 * 8));
      if (cVar5 != '\0') goto LAB_142516950;
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_2 + 8));
  }
  goto LAB_142516960;
LAB_142516950:
  if ((int)uVar9 < 0) {
LAB_142516960:
    iVar1 = *(int *)(param_1 + 8);
    uVar7 = 1;
    if ((longlong)uVar8 <= (longlong)iVar1) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar10 * 8);
      uVar9 = uVar10;
      if ((longlong)uVar8 < (longlong)iVar1) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar9 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar9 * 8);
          uVar9 = uVar9 + 1;
          uVar6 = (longlong)*(int *)(param_1 + 8) - 1;
        } while ((longlong)uVar9 < (longlong)uVar6);
      }
      else {
        uVar6 = (ulonglong)(iVar1 - 1);
      }
      *(int *)(param_1 + 8) = (int)uVar6;
      if ((lVar3 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
        (**(code **)(param_1 + 0x18))();
      }
    }
  }
  bVar4 = (longlong)uVar8 < 2;
  uVar8 = uVar8 - 1;
  if (bVar4) {
    return uVar7;
  }
  goto LAB_1425168f2;
}



// FUNCTION 1425169f0 FUN_1425169f0 body=72 status=ok
// SIG undefined FUN_1425169f0(void)

undefined8 FUN_1425169f0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 8))) {
    uVar4 = (ulonglong)param_2;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
    uVar2 = *(int *)(param_1 + 8) - 1;
    uVar3 = (ulonglong)uVar2;
    if ((int)param_2 < (int)uVar2) {
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4 * 8);
        uVar4 = uVar4 + 1;
        uVar3 = (longlong)*(int *)(param_1 + 8) - 1;
      } while ((longlong)uVar4 < (longlong)uVar3);
    }
    *(int *)(param_1 + 8) = (int)uVar3;
    return uVar1;
  }
  return 0;
}



// FUNCTION 142516a40 FUN_142516a40 body=209 status=ok
// SIG undefined FUN_142516a40(void)

ulonglong FUN_142516a40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (0 < (int)uVar3) {
      uVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8) == param_2) goto LAB_142516ab0;
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  else if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      cVar2 = (**(code **)(param_1 + 0x20))
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8));
      if (cVar2 != '\0') goto LAB_142516ab0;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 8));
  }
LAB_142516b05:
  uVar7 = 0;
LAB_142516b07:
  return uVar7 & 0xffffffff;
LAB_142516ab0:
  iVar5 = (int)uVar6;
  if (-1 < iVar5) {
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (iVar5 < *(int *)(param_1 + 8)) {
      uVar6 = uVar6 & 0xffffffff;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8);
      uVar3 = *(int *)(param_1 + 8) - 1;
      uVar4 = (ulonglong)uVar3;
      if (iVar5 < (int)uVar3) {
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + uVar6 * 8);
          uVar6 = uVar6 + 1;
          uVar4 = (longlong)*(int *)(param_1 + 8) - 1;
        } while ((longlong)uVar6 < (longlong)uVar4);
      }
      *(int *)(param_1 + 8) = (int)uVar4;
      if ((lVar1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
        (**(code **)(param_1 + 0x18))();
      }
    }
    goto LAB_142516b07;
  }
  goto LAB_142516b05;
}



// FUNCTION 142516b20 FUN_142516b20 body=135 status=ok
// SIG undefined FUN_142516b20(void)

ulonglong FUN_142516b20(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if ((int)param_3 < (int)uVar1) {
      plVar3 = (longlong *)((longlong)(int)param_3 * 8 + *(longlong *)(param_1 + 0x10));
      do {
        if (*plVar3 == param_2) {
          return (ulonglong)param_3;
        }
        param_3 = param_3 + 1;
        plVar3 = plVar3 + 1;
      } while (uVar1 != param_3);
    }
  }
  else if ((int)param_3 < (int)uVar1) {
    uVar4 = (ulonglong)(int)param_3;
    do {
      cVar2 = (**(code **)(param_1 + 0x20))
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8));
      if (cVar2 != '\0') {
        return uVar4 & 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 8));
  }
  return 0xffffffff;
}



// FUNCTION 142516bb0 FUN_142516bb0 body=9 status=ok
// SIG undefined FUN_142516bb0(void)

undefined8 FUN_142516bb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return uVar1;
}



// FUNCTION 142516bc0 thunk_FUN_142516bd0 body=5 status=ok
// SIG undefined thunk_FUN_142516bd0(void)

void thunk_FUN_142516bd0(longlong param_1,undefined8 param_2,code *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
    uVar2 = 1;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar10 = *(int *)(param_1 + 8);
    do {
      while( true ) {
        iVar5 = (iVar4 + iVar10) / 2;
        cVar1 = (*param_3)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 8),
                           param_2);
        if (cVar1 < '\x01') break;
        iVar10 = iVar5;
        if (iVar4 == iVar5) goto LAB_142516c34;
      }
      iVar4 = iVar5 + 1;
    } while (iVar4 != iVar10);
LAB_142516c34:
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 < -1) goto LAB_142516cab;
    uVar2 = iVar4 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 <= iVar4) {
    if (iVar5 < 0x40000000) {
      uVar6 = iVar5 * 2;
      if (iVar5 * 2 <= (int)uVar2) {
        uVar6 = uVar2;
      }
      if (uVar6 < 0x10000000) {
        lVar8 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar6 << 3);
        if (lVar8 == 0) {
          *param_4 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x10) = lVar8;
        *(uint *)(param_1 + 0xc) = uVar6;
        iVar4 = *(int *)(param_1 + 8);
        goto LAB_142516c52;
      }
    }
LAB_142516cab:
    *param_4 = 1;
    return;
  }
LAB_142516c52:
  if (iVar4 - iVar10 != 0 && iVar10 <= iVar4) {
    lVar8 = (longlong)iVar4;
    uVar7 = ~(longlong)iVar10 + lVar8;
    uVar2 = iVar4 - iVar10 & 3;
    uVar3 = (ulonglong)uVar2;
    lVar9 = lVar8;
    if (uVar2 != 0) {
      do {
        lVar8 = lVar9 + -1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar9 * 8);
        uVar3 = uVar3 - 1;
        lVar9 = lVar8;
      } while (uVar3 != 0);
    }
    if (2 < uVar7) {
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x18 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x18 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x20 + lVar8 * 8);
        lVar8 = lVar8 + -4;
      } while (iVar10 < lVar8);
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 8) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 142516bd0 FUN_142516bd0 body=381 status=ok
// SIG undefined FUN_142516bd0(void)

void FUN_142516bd0(longlong param_1,undefined8 param_2,code *param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar10 = 0;
    uVar2 = 1;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar10 = *(int *)(param_1 + 8);
    do {
      while( true ) {
        iVar5 = (iVar4 + iVar10) / 2;
        cVar1 = (*param_3)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 8),
                           param_2);
        if (cVar1 < '\x01') break;
        iVar10 = iVar5;
        if (iVar4 == iVar5) goto LAB_142516c34;
      }
      iVar4 = iVar5 + 1;
    } while (iVar4 != iVar10);
LAB_142516c34:
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 < -1) goto LAB_142516cab;
    uVar2 = iVar4 + 1;
  }
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 <= iVar4) {
    if (iVar5 < 0x40000000) {
      uVar6 = iVar5 * 2;
      if (iVar5 * 2 <= (int)uVar2) {
        uVar6 = uVar2;
      }
      if (uVar6 < 0x10000000) {
        lVar8 = FUN_1424da060(*(undefined8 *)(param_1 + 0x10),(ulonglong)uVar6 << 3);
        if (lVar8 == 0) {
          *param_4 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x10) = lVar8;
        *(uint *)(param_1 + 0xc) = uVar6;
        iVar4 = *(int *)(param_1 + 8);
        goto LAB_142516c52;
      }
    }
LAB_142516cab:
    *param_4 = 1;
    return;
  }
LAB_142516c52:
  if (iVar4 - iVar10 != 0 && iVar10 <= iVar4) {
    lVar8 = (longlong)iVar4;
    uVar7 = ~(longlong)iVar10 + lVar8;
    uVar2 = iVar4 - iVar10 & 3;
    uVar3 = (ulonglong)uVar2;
    lVar9 = lVar8;
    if (uVar2 != 0) {
      do {
        lVar8 = lVar9 + -1;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar9 * 8);
        uVar3 = uVar3 - 1;
        lVar9 = lVar8;
      } while (uVar3 != 0);
    }
    if (2 < uVar7) {
      do {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x18 + lVar8 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x18 + lVar8 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x20 + lVar8 * 8);
        lVar8 = lVar8 + -4;
      } while (iVar10 < lVar8);
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 8) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 142516d60 FUN_142516d60 body=142 status=ok
// SIG undefined FUN_142516d60(void)

undefined8 * FUN_142516d60(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = icu_64::UVector::vftable;
  if (param_1[3] != 0) {
    iVar1 = *(int *)(param_1 + 1);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2 * 8) != 0) {
          (*(code *)param_1[3])();
          iVar1 = *(int *)(param_1 + 1);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1424da110(param_1[2]);
  param_1[2] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142516e00 Unwind@142516e00 body=22 status=ok
// SIG undefined Unwind@142516e00(void)

void Unwind_142516e00(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142516e20 FUN_142516e20 body=115 status=ok
// SIG undefined FUN_142516e20(void)

/* WARNING: Removing unreachable block (ram,0x000142517363) */

bool FUN_142516e20(uint param_1,uint param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ushort *puVar10;
  int iVar11;
  bool bVar12;
  longlong lStack_f8;
  undefined **ppuStack_f0;
  ushort uStack_e8;
  int iStack_e4;
  undefined8 uStack_b0;
  undefined ***pppuStack_a8;
  longlong lStack_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined **ppuStack_70;
  ushort uStack_68;
  ushort uStack_66;
  int iStack_64;
  ushort *puStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 < 0x41) {
    switch(param_2) {
    default:
      uStack_30 = 0x142517213;
      uVar3 = FUN_1424d88f0(param_1,*(undefined4 *)(&DAT_1499da100 + (ulonglong)param_2 * 0x10));
      return (*(uint *)(&DAT_1499da104 + (ulonglong)param_2 * 0x10) & uVar3) != 0;
    case 2:
      uVar1 = FUN_1425814e0(param_1);
      return (bool)uVar1;
    case 3:
      uVar1 = FUN_142581460(param_1);
      return (bool)uVar1;
    case 9:
      uVar7 = DAT_14c707940 ^ (ulonglong)auStack_48;
      uStack_28 = (ulonglong)(uint)uStack_28;
      puStack_50 = (undefined *)0x14251726a;
      lVar6 = FUN_1425ce690((longlong)&uStack_28 + 4);
      if ((((uStack_28._4_4_ < 1) && ((param_1 & 0xfffffc00) != 0xd800)) && (0xffff < param_1)) &&
         ((param_1 < 0x110000 && ((int)param_1 < *(int *)(*(longlong *)(lVar6 + 0x20) + 0x18))))) {
        puStack_50 = (undefined *)0x1425172c3;
        FUN_1425cceb0(*(longlong *)(lVar6 + 0x20),param_1);
      }
                    /* WARNING: Subroutine does not return */
      puStack_50 = &UNK_1425172fa;
      FUN_144d8e3a0(uVar7 ^ (ulonglong)auStack_48);
    case 0x14:
      uVar1 = FUN_142581560(param_1);
      return (bool)uVar1;
    case 0x16:
    case 0x1b:
    case 0x1e:
    case 0x22:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x37:
      uVar1 = FUN_1424d8150(param_1,param_2);
      return (bool)uVar1;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      uVar7 = DAT_14c707940 ^ (ulonglong)auStack_38;
      puStack_40 = (undefined *)0x14251735c;
      plVar8 = (longlong *)FUN_1425cdd30(param_2 - 0x23,&stack0xffffffffffffffec);
      puStack_40 = (undefined *)0x142517376;
      (**(code **)(*plVar8 + 0x80))(plVar8,param_1);
                    /* WARNING: Subroutine does not return */
      puStack_40 = &UNK_142517389;
      FUN_144d8e3a0(uVar7 ^ (ulonglong)auStack_38);
    case 0x29:
      uVar7 = DAT_14c707940 ^ (ulonglong)auStack_48;
      puStack_50 = (undefined *)0x1425173c9;
      uVar9 = FUN_1425ce690(&stack0xffffffffffffffe4);
      puStack_50 = (undefined *)0x1425173e4;
      cVar2 = FUN_1425d0e00(uVar9,&stack0xffffffffffffffe4);
      if (cVar2 != '\0') {
        puStack_50 = (undefined *)0x1425173f2;
        FUN_1425d6eb0(uVar9,param_1);
      }
                    /* WARNING: Subroutine does not return */
      puStack_50 = &UNK_142517405;
      FUN_144d8e3a0(uVar7 ^ (ulonglong)auStack_48);
    case 0x2c:
      uVar1 = FUN_1424d8990(param_1);
      return (bool)uVar1;
    case 0x2d:
      uVar1 = FUN_1424d8aa0(param_1);
      return (bool)uVar1;
    case 0x2e:
      uVar1 = FUN_1424d8d20(param_1);
      return (bool)uVar1;
    case 0x2f:
      uVar1 = FUN_1424d8bd0(param_1);
      return (bool)uVar1;
    case 0x30:
      uVar1 = FUN_1424d8840(param_1);
      return (bool)uVar1;
    case 0x36:
      goto switchD_142516e3f_caseD_36;
    case 0x38:
      uStack_28 = 0xfffffffffffffffe;
      uStack_30 = uStack_30 & 0xffffffff;
      uVar9 = FUN_1425cdee0((longlong)&uStack_30 + 4);
      if (uStack_30._4_4_ < 1) {
        FUN_1424a6c30(&ppuStack_70,param_1);
        ppuStack_f0 = &PTR_FUN_149e18960;
        uStack_e8 = 2;
        pppuStack_a8 = &ppuStack_f0;
        lStack_a0 = 0;
        uStack_98 = 0;
        uStack_93 = 0;
        uStack_90 = 0;
        uStack_8b = 0;
        uStack_88 = 0;
        uStack_b0 = uVar9;
        cVar2 = FUN_1425cfe40(&uStack_b0,5,(longlong)&uStack_30 + 4);
        if (cVar2 != '\0') {
          if ((uStack_68 & 0x11) == 0) {
            if ((uStack_68 & 2) != 0) {
              puStack_58 = &uStack_66;
            }
          }
          else {
            puStack_58 = (ushort *)0x0;
          }
          iVar4 = iStack_64;
          if (-1 < (short)uStack_68) {
            iVar4 = (int)(short)uStack_68 >> 5;
          }
          lStack_f8 = (longlong)&uStack_30 + 4;
          FUN_1425d32e0(uVar9,puStack_58,puStack_58 + iVar4,0,1,&uStack_b0);
        }
        if (lStack_a0 != 0) {
          FUN_1408550d0(pppuStack_a8,(ulonglong)(CONCAT35(uStack_8b,uStack_90) - lStack_a0) >> 1);
        }
        if (uStack_30._4_4_ < 1) {
          if ((uStack_e8 & 1) == 0) {
            if (-1 < (short)uStack_e8) {
              iStack_e4 = (int)(short)uStack_e8 >> 5;
            }
            if (-1 < (short)uStack_68) {
              iStack_64 = (int)(short)uStack_68 >> 5;
            }
            bVar12 = false;
            if ((((int)(short)uStack_68 & 1U) == 0) && (iStack_e4 == iStack_64)) {
              cVar2 = FUN_1412ae090(&ppuStack_f0,&ppuStack_70);
              bVar12 = cVar2 != '\0';
            }
          }
          else {
            bVar12 = (bool)((byte)uStack_68 & 1);
          }
          bVar12 = (bool)(bVar12 ^ 1);
        }
        else {
          bVar12 = false;
        }
        FUN_140859a90(&ppuStack_f0);
        FUN_140859a90(&ppuStack_70);
      }
      else {
        bVar12 = false;
      }
      return bVar12;
    case 0x3e:
      return param_1 - 0x1f1e6 < 0x1a;
    }
  }
  return false;
switchD_142516e3f_caseD_36:
  uStack_28 = 0xfffffffffffffffe;
  ppuStack_70 = &PTR_FUN_149e18960;
  uStack_68 = 2;
  uStack_30 = uStack_30 & 0xffffffff;
  plVar8 = (longlong *)FUN_1425ce4e0((longlong)&uStack_30 + 4);
  if (uStack_30._4_4_ < 1) {
    cVar2 = (**(code **)(*plVar8 + 0x30))(plVar8,param_1,&ppuStack_70);
    if (cVar2 == '\0') {
      if (-1 < (int)param_1) goto LAB_142517540;
    }
    else {
      uVar3 = (uint)(short)uStack_68;
      iVar11 = (int)uVar3 >> 5;
      iVar4 = iVar11;
      if ((short)uStack_68 < 0) {
        iVar4 = iStack_64;
      }
      if (iVar4 == 1) {
        if ((uVar3 & 2) != 0) {
          puStack_58 = &uStack_66;
        }
        param_1 = (uint)*puStack_58;
LAB_142517540:
        iVar4 = FUN_1424d7ef0(param_1,&lStack_f8,0);
        bVar12 = -1 < iVar4;
        goto LAB_142517554;
      }
      if (iVar4 < 3) {
        param_1 = FUN_1424a8030(&ppuStack_70,0);
        if ((-1 < (int)param_1) && (iVar4 == 2 - (uint)(param_1 < 0x10000))) goto LAB_142517540;
        uVar3 = (uint)(short)uStack_68;
        iVar11 = (int)uVar3 >> 5;
      }
      if ((short)uVar3 < 0) {
        iVar11 = iStack_64;
      }
      if ((uVar3 & 0x11) == 0) {
        puVar10 = puStack_58;
        if ((uVar3 & 2) != 0) {
          puVar10 = &uStack_66;
        }
      }
      else {
        puVar10 = (ushort *)0x0;
      }
      uVar3 = 0;
      uVar5 = FUN_14257e020(&lStack_f8,0x3e,puVar10,iVar11,0,(longlong)&uStack_30 + 4);
      if (uStack_30._4_4_ < 1) {
        if (-1 < (short)uStack_68) {
          iStack_64 = (int)(short)uStack_68 >> 5;
        }
        if (((int)(short)uStack_68 & 0x11U) == 0) {
          if ((uStack_68 & 2) != 0) {
            puStack_58 = &uStack_66;
          }
        }
        else {
          puStack_58 = (ushort *)0x0;
        }
        iVar4 = FUN_142504650(puStack_58,iStack_64,&lStack_f8,uVar5,uVar3 & 0xffffff00);
        bVar12 = iVar4 != 0;
        goto LAB_142517554;
      }
    }
  }
  bVar12 = false;
LAB_142517554:
  FUN_140859a90(&ppuStack_70);
  return bVar12;
}



// FUNCTION 142516e50 FUN_142516e50 body=161 status=ok
// SIG undefined FUN_142516e50(void)

ulonglong FUN_142516e50(undefined4 param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [8];
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if ((int)param_2 < 0x1000) {
    uVar7 = 0;
    if (param_2 < 0x41) {
      uStack_30 = 0x142516e81;
      cVar1 = (*(code *)(&switchD_142516e3f::switchdataD_1499da108)[(ulonglong)param_2 * 2])
                        (&DAT_1499da100 + (ulonglong)param_2 * 0x10);
      uVar7 = (ulonglong)(uint)(int)cVar1;
    }
  }
  else {
    if (param_2 < 0x1019) {
      lVar6 = (ulonglong)(param_2 - 0x1000) * 0x20;
      switch(param_2) {
      case 0x1000:
        uVar7 = FUN_142581720(param_1);
        return uVar7;
      default:
        uStack_30 = 0x1425178d3;
        uVar4 = FUN_1424d88f0(param_1,*(undefined4 *)(&DAT_1499da510 + lVar6));
        return (ulonglong)
               (uint)((int)(uVar4 & *(uint *)(&UNK_1499da514 + lVar6)) >>
                     ((&UNK_1499da518)[lVar6] & 0x1f));
      case 0x1002:
        uStack_30 = 0x14251791b;
        bVar2 = FUN_1425ce8a0(param_1);
        return (ulonglong)bVar2;
      case 0x1005:
        uStack_30 = 0x14251794b;
        cVar1 = FUN_1424d86a0(param_1);
        return (ulonglong)(uint)(int)cVar1;
      case 0x1006:
        uVar7 = FUN_142581660(param_1);
        return uVar7;
      case 0x1007:
        uVar7 = FUN_1425815e0(param_1);
        return uVar7;
      case 0x1009:
        uStack_30 = 0x14251798b;
        uVar4 = FUN_1424d9150(param_1);
        uVar7 = 0;
        if ((0x3f < uVar4) && (uVar7 = 1, 0x2bf < uVar4)) {
          uVar7 = (ulonglong)(3 - (uVar4 < 0x540));
        }
        return uVar7;
      case 0x100a:
        uVar7 = DAT_14c707940 ^ (ulonglong)auStack_38;
        uStack_18 = (ulonglong)(uint)uStack_18;
        puStack_40 = (undefined *)0x1425179e8;
        FUN_1424d92a0(param_1,(longlong)&uStack_18 + 4);
                    /* WARNING: Subroutine does not return */
        puStack_40 = &UNK_1425179f7;
        FUN_144d8e3a0(uVar7 ^ (ulonglong)auStack_38);
      case 0x100b:
        uStack_30 = 0x142517a10;
        uVar4 = FUN_1424d88f0(param_1,2);
        uVar5 = uVar4 >> 5 & 0x1f;
        uVar4 = 0;
        if (uVar5 < 10) {
          uVar4 = *(uint *)(&DAT_1499da830 + (ulonglong)uVar5 * 4);
        }
        return (ulonglong)uVar4;
      case 0x100c:
      case 0x100d:
      case 0x100e:
      case 0x100f:
        uVar7 = FUN_1425cdf60(param_1,param_2 - 0x100a);
        return uVar7;
      case 0x1010:
        uStack_30 = 0x142517a4b;
        uVar3 = FUN_1425ce980(param_1);
        return (ulonglong)(uVar3 >> 8);
      case 0x1011:
        uStack_30 = 0x142517a6b;
        bVar2 = FUN_1425ce980(param_1);
        return (ulonglong)bVar2;
      case 0x1015:
        uVar7 = FUN_1425816a0(param_1);
        return uVar7;
      case 0x1016:
        uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
        uStack_1c = 0;
        cVar1 = FUN_142517050(&uStack_1c);
        if ((cVar1 != '\0') && (DAT_14c792c28 != 0)) {
          FUN_1425cd140(DAT_14c792c28,param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_48);
      case 0x1017:
        uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
        uStack_1c = 0;
        cVar1 = FUN_142517050(&uStack_1c);
        if ((cVar1 != '\0') && (DAT_14c792c30 != 0)) {
          FUN_1425cd140(DAT_14c792c30,param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_48);
      case 0x1018:
        uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
        uStack_1c = 0;
        cVar1 = FUN_142517050(&uStack_1c);
        if ((cVar1 != '\0') && (DAT_14c792c38 != 0)) {
          FUN_1425cd140(DAT_14c792c38,param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_48);
      }
    }
    uVar7 = 0;
    if (param_2 == 0x2000) {
      uStack_30 = 0x142516ec0;
      bVar2 = FUN_1424d86a0(param_1);
      uVar7 = (ulonglong)(uint)(1 << (bVar2 & 0x1f));
    }
  }
  return uVar7;
}



// FUNCTION 142516ed0 FUN_142516ed0 body=167 status=ok
// SIG undefined FUN_142516ed0(void)

uint FUN_142516ed0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (-1 < (int)param_1) {
    if (param_1 < 0x41) {
      uVar1 = 2;
      if (*(int *)(&DAT_1499da104 + (ulonglong)param_1 * 0x10) == 0) {
        return *(uint *)(&DAT_1499da100 + (ulonglong)param_1 * 0x10);
      }
    }
    else if (0xfff < param_1) {
      if (param_1 < 0x1019) {
        uVar1 = 2;
        if ((0x1e3fae5UL >> ((ulonglong)(param_1 - 0x1000) & 0x3f) & 1) != 0) {
          return *(uint *)(&DAT_1499da510 + (ulonglong)(param_1 - 0x1000) * 0x20);
        }
      }
      else {
        if (param_1 < 0x4000) {
          return (uint)((param_1 & 0xffffefff) == 0x2000);
        }
        if (0x400d < param_1) {
          return (uint)(param_1 == 0x7000) * 2;
        }
        if (param_1 - 0x4000 < 0xd) {
          return *(uint *)(&DAT_1499da858 + (longlong)(int)(param_1 - 0x4000) * 4);
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 142516f80 FUN_142516f80 body=199 status=ok
// SIG undefined FUN_142516f80(void)

void FUN_142516f80(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = FUN_142517050(param_3);
  if (cVar2 != '\0') {
    uVar3 = 1;
    if (param_1 - 0xcU < 3) {
      lVar1 = *(longlong *)(&PTR_DAT_1499da890)[(int)(param_1 - 0xcU)];
      if (lVar1 != 0) {
        iVar5 = 0;
        iVar4 = FUN_1425cd270(lVar1,0,0,0,0,0,0);
        while (-1 < iVar4) {
          (*(code *)param_2[1])(*param_2,iVar5);
          iVar5 = iVar4 + 1;
          iVar4 = FUN_1425cd270(lVar1,iVar5,0,0,0,0,0);
        }
        return;
      }
      uVar3 = 2;
    }
    *param_3 = uVar3;
  }
  return;
}



// FUNCTION 142517050 FUN_142517050 body=427 status=ok
// SIG undefined FUN_142517050(void)

bool FUN_142517050(int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*param_1 < 1) {
    if ((DAT_14c792c58 == 2) || (cVar3 = FUN_142501800(&DAT_14c792c58), cVar3 == '\0')) {
      if (0 < DAT_14c792c5c) {
        *param_1 = DAT_14c792c5c;
      }
    }
    else {
      DAT_14c792c50 = FUN_1424e51c0(0,&DAT_14bd49f82,"ulayout",&LAB_142517c30,0,param_1);
      iVar5 = *param_1;
      if (iVar5 < 1) {
        piVar4 = (int *)FUN_142532380(DAT_14c792c50);
        iVar5 = *piVar4;
        if ((longlong)iVar5 < 0xc) {
          *param_1 = 3;
          iVar5 = 3;
        }
        else {
          iVar1 = piVar4[1];
          iVar6 = iVar1 + iVar5 * -4;
          if (0xf < iVar6) {
            DAT_14c792c28 = FUN_1425ccc80(0xffffffff,0xffffffff,piVar4 + iVar5,iVar6,0,param_1);
          }
          iVar5 = piVar4[2];
          if (0xf < iVar5 - iVar1) {
            DAT_14c792c30 =
                 FUN_1425ccc80(0xffffffff,0xffffffff,(longlong)iVar1 + (longlong)piVar4,
                               iVar5 - iVar1,0,param_1);
          }
          if (0xf < piVar4[3] - iVar5) {
            DAT_14c792c38 =
                 FUN_1425ccc80(0xffffffff,0xffffffff,(longlong)piVar4 + (longlong)iVar5,
                               piVar4[3] - iVar5,0,param_1);
          }
          uVar2 = piVar4[9];
          DAT_14c792c48 = uVar2 >> 8 & 0xff;
          DAT_14c792c40 = uVar2 >> 0x18;
          DAT_14c792c44 = uVar2 >> 0x10 & 0xff;
          FUN_1424d6720(0xf,FUN_142517c70);
          iVar5 = *param_1;
        }
      }
      DAT_14c792c5c = iVar5;
      FUN_1425019c0(&DAT_14c792c58);
    }
    return *param_1 < 1;
  }
  return false;
}



// FUNCTION 142517200 caseD_0 body=31 status=ok
// SIG undefined caseD_0(void)

bool switchD_142516e3f::caseD_0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1424d88f0(param_2,*param_1);
  return (param_1[1] & uVar1) != 0;
}



// FUNCTION 142517240 caseD_9 body=186 status=ok
// SIG undefined caseD_9(void)

void switchD_142516e3f::caseD_9(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  lVar1 = FUN_1425ce690(&local_24);
  if ((((local_24 < 1) && ((param_2 & 0xfffffc00) != 0xd800)) && (0xffff < param_2)) &&
     ((param_2 < 0x110000 && ((int)param_2 < *(int *)(*(longlong *)(lVar1 + 0x20) + 0x18))))) {
    FUN_1425cceb0(*(longlong *)(lVar1 + 0x20),param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517330 caseD_25 body=89 status=ok
// SIG undefined caseD_25(void)

void switchD_142516e3f::caseD_25(undefined8 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  plVar1 = (longlong *)FUN_1425cdd30(param_3 + -0x23,&local_14);
  if (local_14 < 1) {
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425173a0 caseD_29 body=101 status=ok
// SIG undefined caseD_29(void)

void switchD_142516e3f::caseD_29(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  uVar2 = FUN_1425ce690(&local_1c);
  if ((local_1c < 1) && (cVar1 = FUN_1425d0e00(uVar2,&local_1c), cVar1 != '\0')) {
    FUN_1425d6eb0(uVar2,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517460 caseD_36 body=392 status=ok
// SIG undefined caseD_36(void)

ulonglong switchD_142516e3f::caseD_36(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  ushort *puVar8;
  int iVar9;
  undefined1 local_f8 [136];
  undefined **local_70;
  ushort local_68;
  ushort local_66;
  int local_64;
  ushort *local_58;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_70 = &PTR_FUN_149e18960;
  local_68 = 2;
  local_2c[0] = 0;
  plVar5 = (longlong *)FUN_1425ce4e0(local_2c);
  if (local_2c[0] < 1) {
    cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5,param_2,&local_70);
    uVar7 = (undefined7)((ulonglong)local_2c >> 8);
    if (cVar1 == '\0') {
      if (-1 < (int)param_2) goto LAB_142517540;
    }
    else {
      uVar2 = (uint)(short)local_68;
      iVar9 = (int)uVar2 >> 5;
      iVar3 = iVar9;
      if ((short)local_68 < 0) {
        iVar3 = local_64;
      }
      if (iVar3 == 1) {
        if ((uVar2 & 2) != 0) {
          local_58 = &local_66;
        }
        param_2 = (uint)*local_58;
LAB_142517540:
        iVar3 = FUN_1424d7ef0(param_2,local_f8,0);
        uVar6 = CONCAT71(uVar7,-1 < iVar3);
        goto LAB_142517554;
      }
      if (iVar3 < 3) {
        param_2 = FUN_1424a8030(&local_70,0);
        if ((-1 < (int)param_2) && (iVar3 == 2 - (uint)(param_2 < 0x10000))) goto LAB_142517540;
        uVar2 = (uint)(short)local_68;
        iVar9 = (int)uVar2 >> 5;
      }
      if ((short)uVar2 < 0) {
        iVar9 = local_64;
      }
      if ((uVar2 & 0x11) == 0) {
        puVar8 = local_58;
        if ((uVar2 & 2) != 0) {
          puVar8 = &local_66;
        }
      }
      else {
        puVar8 = (ushort *)0x0;
      }
      uVar2 = 0;
      uVar4 = FUN_14257e020(local_f8,0x3e,puVar8,iVar9,0,local_2c);
      if (local_2c[0] < 1) {
        if (-1 < (short)local_68) {
          local_64 = (int)(short)local_68 >> 5;
        }
        if (((int)(short)local_68 & 0x11U) == 0) {
          if ((local_68 & 2) != 0) {
            local_58 = &local_66;
          }
        }
        else {
          local_58 = (ushort *)0x0;
        }
        iVar3 = FUN_142504650(local_58,local_64,local_f8,uVar4,uVar2 & 0xffffff00);
        uVar6 = CONCAT71(uVar7,iVar3 != 0);
        goto LAB_142517554;
      }
    }
  }
  uVar6 = 0;
LAB_142517554:
  FUN_140859a90(&local_70);
  return uVar6 & 0xffffffff;
}



// FUNCTION 1425175f0 Unwind@1425175f0 body=39 status=ok
// SIG undefined Unwind@1425175f0(void)

void Unwind_1425175f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142517620 caseD_38 body=388 status=ok
// SIG undefined caseD_38(void)

byte switchD_142516e3f::caseD_38(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  undefined **local_f0;
  ushort local_e8;
  int local_e4;
  undefined8 local_b0;
  undefined ***local_a8;
  longlong local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined1 local_70 [8];
  ushort local_68;
  undefined1 local_66 [2];
  int local_64;
  undefined1 *local_58;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  local_2c[0] = 0;
  uVar3 = FUN_1425cdee0(local_2c);
  if (local_2c[0] < 1) {
    FUN_1424a6c30(local_70,param_2);
    local_f0 = &PTR_FUN_149e18960;
    local_e8 = 2;
    local_a8 = &local_f0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_93 = 0;
    local_90 = 0;
    uStack_8b = 0;
    uStack_88 = 0;
    local_b0 = uVar3;
    cVar1 = FUN_1425cfe40(&local_b0,5,local_2c);
    if (cVar1 != '\0') {
      if ((local_68 & 0x11) == 0) {
        if ((local_68 & 2) != 0) {
          local_58 = local_66;
        }
      }
      else {
        local_58 = (undefined1 *)0x0;
      }
      iVar2 = local_64;
      if (-1 < (short)local_68) {
        iVar2 = (int)(short)local_68 >> 5;
      }
      FUN_1425d32e0(uVar3,local_58,local_58 + (longlong)iVar2 * 2,0,1,&local_b0,local_2c);
    }
    if (local_a0 != 0) {
      FUN_1408550d0(local_a8,(ulonglong)(CONCAT35(uStack_8b,local_90) - local_a0) >> 1);
    }
    if (local_2c[0] < 1) {
      if ((local_e8 & 1) == 0) {
        if (-1 < (short)local_e8) {
          local_e4 = (int)(short)local_e8 >> 5;
        }
        if (-1 < (short)local_68) {
          local_64 = (int)(short)local_68 >> 5;
        }
        bVar5 = false;
        if ((((int)(short)local_68 & 1U) == 0) && (local_e4 == local_64)) {
          cVar1 = FUN_1412ae090(&local_f0,local_70);
          bVar5 = cVar1 != '\0';
        }
      }
      else {
        bVar5 = (bool)((byte)local_68 & 1);
      }
      bVar4 = bVar5 ^ 1;
    }
    else {
      bVar4 = 0;
    }
    FUN_140859a90(&local_f0);
    FUN_140859a90(local_70);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}



// FUNCTION 1425177b0 Unwind@1425177b0 body=39 status=ok
// SIG undefined Unwind@1425177b0(void)

void Unwind_1425177b0(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x78);
  return;
}



// FUNCTION 1425177e0 Unwind@1425177e0 body=48 status=ok
// SIG undefined Unwind@1425177e0(void)

void Unwind_1425177e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  FUN_140859a90(param_2 + 0xb8);
  return;
}



// FUNCTION 142517810 Unwind@142517810 body=25 status=ok
// SIG undefined Unwind@142517810(void)

void Unwind_142517810(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142517840 FUN_142517840 body=56 status=ok
// SIG undefined FUN_142517840(void)

void FUN_142517840(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1408550d0(*(undefined8 *)(param_1 + 8),
                  (ulonglong)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10)) >> 1);
  }
  return;
}



// FUNCTION 142517880 Unwind@142517880 body=19 status=ok
// SIG undefined Unwind@142517880(void)

void Unwind_142517880(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425178a0 caseD_1000 body=7 status=ok
// SIG undefined caseD_1000(void)

void switchD_142516ea9::caseD_1000(undefined8 param_1,undefined4 param_2)

{
  FUN_142581720(param_2);
  return;
}



// FUNCTION 1425178c0 caseD_1001 body=34 status=ok
// SIG undefined caseD_1001(void)

int switchD_142516ea9::caseD_1001(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1424d88f0(param_2,*param_1);
  return (int)(uVar1 & param_1[1]) >> (*(byte *)(param_1 + 2) & 0x1f);
}



// FUNCTION 1425178f0 FUN_1425178f0 body=30 status=ok
// SIG undefined FUN_1425178f0(void)

uint FUN_1425178f0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1424d91d0(*param_1);
  return (uVar1 & param_1[1]) >> (*(byte *)(param_1 + 2) & 0x1f);
}



// FUNCTION 142517910 caseD_1002 body=19 status=ok
// SIG undefined caseD_1002(void)

undefined1 switchD_142516ea9::caseD_1002(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1425ce8a0(param_2);
  return uVar1;
}



// FUNCTION 142517940 caseD_1005 body=19 status=ok
// SIG undefined caseD_1005(void)

int switchD_142516ea9::caseD_1005(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1424d86a0(param_2);
  return (int)cVar1;
}



// FUNCTION 142517980 caseD_1009 body=52 status=ok
// SIG undefined caseD_1009(void)

int switchD_142516ea9::caseD_1009(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_1424d9150(param_2);
  iVar2 = 0;
  if ((0x3f < uVar1) && (iVar2 = 1, 0x2bf < uVar1)) {
    iVar2 = 3 - (uint)(uVar1 < 0x540);
  }
  return iVar2;
}



// FUNCTION 1425179c0 caseD_100a body=55 status=ok
// SIG undefined caseD_100a(void)

void switchD_142516ea9::caseD_100a(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_1424d92a0(param_2,&local_14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 142517a00 caseD_100b body=48 status=ok
// SIG undefined caseD_100b(void)

undefined4 switchD_142516ea9::caseD_100b(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1424d88f0(param_2,2);
  uVar1 = uVar1 >> 5 & 0x1f;
  uVar2 = 0;
  if (uVar1 < 10) {
    uVar2 = *(undefined4 *)(&DAT_1499da830 + (ulonglong)uVar1 * 4);
  }
  return uVar2;
}



// FUNCTION 142517a40 caseD_1010 body=22 status=ok
// SIG undefined caseD_1010(void)

ushort switchD_142516ea9::caseD_1010(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_1425ce980(param_2);
  return uVar1 >> 8;
}



// FUNCTION 142517a60 caseD_1011 body=19 status=ok
// SIG undefined caseD_1011(void)

undefined1 switchD_142516ea9::caseD_1011(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1425ce980(param_2);
  return uVar1;
}



// FUNCTION 142517a90 caseD_1016 body=81 status=ok
// SIG undefined caseD_1016(void)

void switchD_142516ea9::caseD_1016(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_142517050(&local_1c);
  if ((cVar1 != '\0') && (DAT_14c792c28 != 0)) {
    FUN_1425cd140(DAT_14c792c28,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517af0 FUN_142517af0 body=106 status=ok
// SIG undefined FUN_142517af0(void)

void FUN_142517af0(void)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_142517050(&local_1c);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517b70 caseD_1017 body=81 status=ok
// SIG undefined caseD_1017(void)

void switchD_142516ea9::caseD_1017(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_142517050(&local_1c);
  if ((cVar1 != '\0') && (DAT_14c792c30 != 0)) {
    FUN_1425cd140(DAT_14c792c30,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517bd0 caseD_1018 body=81 status=ok
// SIG undefined caseD_1018(void)

void switchD_142516ea9::caseD_1018(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_142517050(&local_1c);
  if ((cVar1 != '\0') && (DAT_14c792c38 != 0)) {
    FUN_1425cd140(DAT_14c792c38,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 142517c70 FUN_142517c70 body=141 status=ok
// SIG undefined FUN_142517c70(void)

undefined8 FUN_142517c70(void)

{
  undefined4 uVar1;
  
  FUN_142532330(DAT_14c792c50);
  DAT_14c792c50 = 0;
  FUN_1425ccea0(DAT_14c792c28);
  DAT_14c792c28 = 0;
  FUN_1425ccea0(DAT_14c792c30);
  DAT_14c792c30 = 0;
  FUN_1425ccea0(DAT_14c792c38);
  uVar1 = DAT_14c792c58;
  DAT_14c792c38 = 0;
  DAT_14c792c40 = 0;
  DAT_14c792c44 = 0;
  DAT_14c792c48 = 0;
  LOCK();
  DAT_14c792c58 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142517d00 FUN_142517d00 body=8 status=ok
// SIG undefined FUN_142517d00(void)

undefined * FUN_142517d00(void)

{
  return &DAT_14c792c60;
}



// FUNCTION 142517d10 FUN_142517d10 body=89 status=ok
// SIG undefined FUN_142517d10(void)

undefined8 * FUN_142517d10(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::UVector32::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  lVar1 = FUN_1424da030(0x20);
  param_1[3] = lVar1;
  if (lVar1 == 0) {
    *param_2 = 7;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 8;
  }
  return param_1;
}



// FUNCTION 142517d70 FUN_142517d70 body=121 status=ok
// SIG undefined FUN_142517d70(void)

undefined8 * FUN_142517d70(undefined8 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  *param_1 = icu_64::UVector32::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  uVar1 = 8;
  if (0 < (int)param_2) {
    uVar1 = param_2;
  }
  if (0x1fffffff < uVar1) {
    uVar1 = FUN_142501310(8,0);
  }
  lVar2 = FUN_1424da030((longlong)(int)uVar1 << 2);
  param_1[3] = lVar2;
  if (lVar2 == 0) {
    *param_3 = 7;
  }
  else {
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
  }
  return param_1;
}



// FUNCTION 142517df0 FUN_142517df0 body=48 status=ok
// SIG undefined FUN_142517df0(void)

void FUN_142517df0(undefined8 *param_1)

{
  *param_1 = icu_64::UVector32::vftable;
  FUN_1424da110(param_1[3]);
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142517e20 FUN_142517e20 body=499 status=ok
// SIG undefined FUN_142517e20(void)

void FUN_142517e20(longlong param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar6 = *(uint *)(param_2 + 8);
  uVar7 = *(uint *)(param_1 + 0xc);
  if (((int)uVar6 < 0) || ((int)uVar7 < (int)uVar6)) {
    if (0 < *param_3) {
      return;
    }
    if ((int)uVar6 < 0) {
LAB_142517fa7:
      iVar4 = 1;
LAB_142517fac:
      *param_3 = iVar4;
      return;
    }
    if ((int)uVar7 < (int)uVar6) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((0 < (int)uVar1) && (iVar4 = 0xf, (int)uVar1 < (int)uVar6)) goto LAB_142517fac;
      if (0x3fffffff < (int)uVar7) goto LAB_142517fa7;
      uVar9 = uVar7 * 2;
      if ((int)(uVar7 * 2) <= (int)uVar6) {
        uVar9 = uVar6;
      }
      uVar7 = uVar9;
      if ((int)uVar1 < (int)uVar9) {
        uVar7 = uVar1;
      }
      if ((int)uVar1 < 1) {
        uVar7 = uVar9;
      }
      iVar4 = 1;
      if (0x1fffffff < (int)uVar7) goto LAB_142517fac;
      lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 2);
      if (lVar2 == 0) {
        iVar4 = 7;
        goto LAB_142517fac;
      }
      *(longlong *)(param_1 + 0x18) = lVar2;
      *(uint *)(param_1 + 0xc) = uVar7;
      uVar6 = *(uint *)(param_2 + 8);
      if ((int)uVar6 < 0) {
        return;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < (int)uVar6) {
    if ((int)uVar7 < (int)uVar6) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((0x3fffffff < (int)uVar7) || (0 < (int)uVar1 && (int)uVar1 < (int)uVar6))
      goto LAB_142517f4b;
      uVar9 = uVar7 * 2;
      if ((int)(uVar7 * 2) <= (int)uVar6) {
        uVar9 = uVar6;
      }
      uVar7 = uVar9;
      if ((int)uVar1 < (int)uVar9) {
        uVar7 = uVar1;
      }
      if ((int)uVar1 < 1) {
        uVar7 = uVar9;
      }
      if ((0x1fffffff < (int)uVar7) ||
         (lVar2 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 2), lVar2 == 0))
      goto LAB_142517f4b;
      *(longlong *)(param_1 + 0x18) = lVar2;
      *(uint *)(param_1 + 0xc) = uVar7;
      iVar4 = *(int *)(param_1 + 8);
    }
    if (iVar4 < (int)uVar6) {
      uVar3 = (ulonglong)iVar4;
      uVar5 = ~uVar3;
      uVar7 = uVar6 - iVar4 & 3;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 != 0) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4) = 0;
          uVar3 = uVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (2 < uVar5 + uVar6) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar3 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + uVar3 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + uVar3 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xc + uVar3 * 4) = 0;
          uVar3 = uVar3 + 4;
        } while (uVar6 != uVar3);
      }
    }
  }
  *(uint *)(param_1 + 8) = uVar6;
LAB_142517f4b:
  if (0 < *(int *)(param_2 + 8)) {
    lVar2 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 142518020 FUN_142518020 body=275 status=ok
// SIG undefined FUN_142518020(void)

void FUN_142518020(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if ((int)param_2 < 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)param_2) {
      uVar8 = *(uint *)(param_1 + 0x10);
      if (0x3fffffff < iVar1) {
        return;
      }
      if (0 < (int)uVar8 && (int)uVar8 < (int)param_2) {
        return;
      }
      uVar2 = iVar1 * 2;
      if (iVar1 * 2 <= (int)param_2) {
        uVar2 = param_2;
      }
      uVar7 = uVar2;
      if ((int)uVar8 < (int)uVar2) {
        uVar7 = uVar8;
      }
      if ((int)uVar8 < 1) {
        uVar7 = uVar2;
      }
      if (0x1fffffff < (int)uVar7) {
        return;
      }
      lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar7 << 2);
      if (lVar3 == 0) {
        return;
      }
      *(longlong *)(param_1 + 0x18) = lVar3;
      *(uint *)(param_1 + 0xc) = uVar7;
      iVar5 = *(int *)(param_1 + 8);
    }
    if (iVar5 < (int)param_2) {
      uVar4 = (ulonglong)iVar5;
      uVar6 = ~uVar4;
      uVar8 = param_2 - iVar5 & 3;
      uVar9 = (ulonglong)uVar8;
      if (uVar8 != 0) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = 0;
          uVar4 = uVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (2 < uVar6 + param_2) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + uVar4 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + uVar4 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xc + uVar4 * 4) = 0;
          uVar4 = uVar4 + 4;
        } while (param_2 != uVar4);
      }
    }
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 142518140 FUN_142518140 body=22 status=ok
// SIG undefined FUN_142518140(void)

void FUN_142518140(longlong param_1,undefined4 param_2,uint param_3)

{
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 8))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 142518160 FUN_142518160 body=331 status=ok
// SIG undefined FUN_142518160(void)

void FUN_142518160(longlong param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)param_3 < 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < (int)param_3) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if ((int)uVar2 < iVar1) {
LAB_142518192:
    if (uVar2 - param_3 != 0 && (int)param_3 <= (int)uVar2) {
      uVar5 = ~param_3 + uVar2;
      uVar6 = uVar2 - param_3 & 3;
      if (uVar6 == 0) {
        uVar4 = (ulonglong)uVar2;
      }
      else {
        do {
          uVar4 = (ulonglong)(uVar2 - 1);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
          uVar6 = uVar6 - 1;
          uVar2 = uVar2 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar5) {
        do {
          iVar1 = (int)uVar4;
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 1) * 4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 1) * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 2) * 4);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 2) * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 3) * 4);
          uVar4 = (ulonglong)(iVar1 - 4U);
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(iVar1 - 3) * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
        } while ((int)param_3 < (int)(iVar1 - 4U));
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_3 * 4) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    if (0 < *param_4) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    if ((0 < (int)uVar5) && ((int)uVar5 <= (int)uVar2)) {
      *param_4 = 0xf;
      return;
    }
    if (iVar1 < 0x40000000) {
      uVar6 = iVar1 * 2;
      if (iVar1 * 2 <= (int)(uVar2 + 1)) {
        uVar6 = uVar2 + 1;
      }
      uVar2 = uVar6;
      if ((int)uVar5 < (int)uVar6) {
        uVar2 = uVar5;
      }
      if ((int)uVar5 < 1) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 0x20000000) {
        lVar3 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar2 << 2);
        if (lVar3 == 0) {
          *param_4 = 7;
          return;
        }
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(uint *)(param_1 + 0xc) = uVar2;
        uVar2 = *(uint *)(param_1 + 8);
        goto LAB_142518192;
      }
    }
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1425182b0 FUN_1425182b0 body=8 status=ok
// SIG undefined FUN_1425182b0(void)

void FUN_1425182b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1425182c0 FUN_1425182c0 body=143 status=ok
// SIG undefined FUN_1425182c0(void)

ulonglong FUN_1425182c0(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  if (0 < *param_3) goto LAB_14251831d;
  if ((int)param_2 < 0) goto LAB_142518317;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((int)param_2 <= iVar1) goto LAB_14251831f;
  uVar2 = *(uint *)(param_1 + 0x10);
  if (((int)uVar2 < 1) || ((int)param_2 <= (int)uVar2)) {
    if (iVar1 < 0x40000000) {
      uVar3 = iVar1 * 2;
      if (iVar1 * 2 <= (int)param_2) {
        uVar3 = param_2;
      }
      uVar5 = uVar3;
      if ((int)uVar2 < (int)uVar3) {
        uVar5 = uVar2;
      }
      if ((int)uVar2 < 1) {
        uVar5 = uVar3;
      }
      if ((int)uVar5 < 0x20000000) {
        lVar4 = FUN_1424da060(*(undefined8 *)(param_1 + 0x18),(ulonglong)uVar5 << 2);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x18) = lVar4;
          *(uint *)(param_1 + 0xc) = uVar5;
          goto LAB_14251831f;
        }
        *param_3 = 7;
        goto LAB_14251831d;
      }
    }
LAB_142518317:
    *param_3 = 1;
  }
  else {
    *param_3 = 0xf;
  }
LAB_14251831d:
  uVar6 = 0;
LAB_14251831f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 142518350 FUN_142518350 body=68 status=ok
// SIG undefined FUN_142518350(void)

undefined8 * FUN_142518350(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::UVector32::vftable;
  FUN_1424da110(param_1[3]);
  param_1[3] = 0;
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425183a0 FUN_1425183a0 body=261 status=ok
// SIG undefined FUN_1425183a0(void)

undefined8 * FUN_1425183a0(undefined8 *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  *param_1 = icu_64::RegexCompile::vftable;
  param_1[0x26] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x27) = 2;
  FUN_142517d10(param_1 + 0x2f,param_3,param_3,param_4,param_1 + 0x26,param_1 + 0x2f);
  FUN_1425d7050(param_1 + 0x36,param_3);
  FUN_1425d7050(param_1 + 0x3b,param_3);
  FUN_14250dba0(param_3);
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[4] = 0;
  param_1[8] = 0xffffffffffffffff;
  param_1[6] = 1;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(uint *)((longlong)param_1 + 0x124) = *(uint *)(param_2 + 0x18) | 0x80000000;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if ((*param_3 < 1) && (0 < *(int *)(param_2 + 0x78))) {
    *param_3 = *(int *)(param_2 + 0x78);
  }
  return param_1;
}



// FUNCTION 1425184b0 Unwind@1425184b0 body=36 status=ok
// SIG undefined Unwind@1425184b0(void)

void Unwind_1425184b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_142515ff0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425184e0 Unwind@1425184e0 body=36 status=ok
// SIG undefined Unwind@1425184e0(void)

void Unwind_1425184e0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_142515ff0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142518510 Unwind@142518510 body=36 status=ok
// SIG undefined Unwind@142518510(void)

void Unwind_142518510(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 142518540 Unwind@142518540 body=36 status=ok
// SIG undefined Unwind@142518540(void)

void Unwind_142518540(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 142518570 FUN_142518570 body=96 status=ok
// SIG undefined FUN_142518570(void)

void FUN_142518570(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::RegexCompile::vftable;
  puVar1 = (undefined8 *)param_1[0x41];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_142515ff0(param_1 + 0x3b);
  thunk_FUN_142515ff0(param_1 + 0x36);
  FUN_142517df0(param_1 + 0x2f);
  FUN_140859a90(param_1 + 0x26);
  return;
}



// FUNCTION 1425185d0 FUN_1425185d0 body=206 status=ok
// SIG undefined FUN_1425185d0(void)

void FUN_1425185d0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_38 = thunk_FUN_1424da030(0x40);
  if (local_38 != 0) {
    FUN_1424a6be0(local_38,param_2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = local_38;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0x345ad82c;
  uStack_c0 = 0x9000000000;
  FUN_14250ee60(&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),param_4);
  if (*param_4 < 1) {
    FUN_1425186d0(param_1,&local_c8,param_3,param_4);
    FUN_14250edb0(&local_c8);
  }
  return;
}



// FUNCTION 1425186a0 Unwind@1425186a0 body=43 status=ok
// SIG undefined Unwind@1425186a0(void)

void Unwind_1425186a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xb0));
  return;
}



// FUNCTION 1425186d0 FUN_1425186d0 body=950 status=ok
// SIG undefined FUN_1425186d0(void)

void FUN_1425186d0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Dst;
  size_t sVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  
  *(int **)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*param_4 < 1) {
    uVar8 = FUN_14250ebe0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),param_2,0,1,param_4);
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar8;
    lVar9 = DAT_14c792c08;
    if (**(int **)(param_1 + 8) < 1) {
      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90) = DAT_14c792c08;
      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) = lVar9 + 0x68;
      uVar8 = FUN_14250e6d0(param_2);
      *(undefined8 *)(param_1 + 0x170) = uVar8;
      if ((*(byte *)(param_1 + 0x124) & 0x10) != 0) {
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
      FUN_142518ab0(param_1,param_1 + 0x48);
      if (**(int **)(param_1 + 8) < 1) {
        uVar14 = 1;
        do {
          puVar15 = (undefined4 *)(&DAT_1499da930 + uVar14 * 8);
          bVar2 = (&DAT_1499da934)[uVar14 * 8];
          cVar5 = *(char *)(param_1 + 0x4c);
          uVar11 = *(uint *)(param_1 + 0x48);
          while( true ) {
            uVar12 = (uint)bVar2;
            if (((uVar12 < 0x7f) && (cVar5 == '\0')) && (uVar11 == uVar12)) break;
            if (bVar2 == 0xfe) {
              if (cVar5 != '\0') break;
            }
            else {
              if ((uVar12 == 0xff) || ((bVar2 == 0xfd && (uVar11 == 0xffffffff)))) break;
              if (((char)bVar2 < -0x10 && cVar5 == '\0') && (uVar11 != 0xffffffff)) {
                cVar5 = FUN_142512880((ulonglong)(uVar12 - 0x80) * 200 + DAT_14c792c08 + 0x208);
                if (cVar5 != '\0') break;
                cVar5 = *(char *)(param_1 + 0x4c);
                uVar11 = *(uint *)(param_1 + 0x48);
              }
            }
            bVar2 = *(byte *)(puVar15 + 3);
            puVar15 = puVar15 + 2;
          }
          cVar5 = FUN_142519600(param_1,*puVar15);
          if (cVar5 == '\0') {
            if (**(int **)(param_1 + 8) < 1) {
              iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x80);
              if (iVar6 < 0) {
                uVar8 = 0x10300;
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x80) = iVar6 + 2;
                uVar8 = 0x10314;
                if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x80) < 0xfffff0) goto LAB_142518986;
              }
              FUN_14251b1c0(param_1,uVar8);
LAB_142518986:
              FUN_14251b330(param_1);
              uVar7 = FUN_14251b640(param_1,3,
                                    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8
                                            ) + -1);
              *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x7c) = uVar7;
              FUN_14251ba40(param_1);
              uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 8);
              lVar9 = (longlong)(int)uVar11;
              sVar10 = 0xffffffffffffffff;
              if (-1 < lVar9) {
                sVar10 = lVar9 << 5;
              }
              _Dst = (void *)thunk_FUN_1424da030(sVar10);
              if ((lVar9 != 0) && (_Dst != (void *)0x0)) {
                memset(_Dst,0,lVar9 << 5);
              }
              *(void **)(*(longlong *)(param_1 + 0x10) + 0x70) = _Dst;
              if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) != 0) {
                if ((int)uVar11 < 1) {
                  return;
                }
                uVar14 = 0;
                do {
                  lVar9 = FUN_142516630(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x68),
                                        uVar14 & 0xffffffff);
                  if (lVar9 != 0) {
                    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
                    uVar13 = 0;
                    do {
                      cVar5 = FUN_142512880(lVar9,uVar13);
                      if (cVar5 != '\0') {
                        pbVar1 = (byte *)(uVar14 * 0x20 + lVar4 + (uVar13 >> 3));
                        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar13 & 7));
                      }
                      uVar12 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar12;
                    } while (uVar12 != 0x100);
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar11);
                return;
              }
              **(undefined4 **)(param_1 + 8) = 7;
              *param_4 = 7;
              return;
            }
            break;
          }
          bVar2 = *(byte *)((longlong)puVar15 + 6);
          if (bVar2 != 0) {
            iVar3 = *(int *)(param_1 + 0x120);
            iVar6 = iVar3 + 1;
            *(int *)(param_1 + 0x120) = iVar6;
            if (0x62 < iVar3) {
              FUN_14251b1c0(param_1,0x10300);
              iVar6 = *(int *)(param_1 + 0x120) + -1;
              *(int *)(param_1 + 0x120) = iVar6;
            }
            *(ushort *)(param_1 + 0x58 + (longlong)iVar6 * 2) = (ushort)bVar2;
          }
          if (*(char *)((longlong)puVar15 + 7) != '\0') {
            FUN_142518ab0(param_1,param_1 + 0x48);
          }
          uVar14 = (ulonglong)*(byte *)((longlong)puVar15 + 5);
          if (*(byte *)((longlong)puVar15 + 5) == 0xff) {
            iVar6 = *(int *)(param_1 + 0x120);
            uVar14 = (ulonglong)*(ushort *)(param_1 + 0x58 + (longlong)iVar6 * 2);
            *(int *)(param_1 + 0x120) = iVar6 + -1;
            if ((longlong)iVar6 < 1) {
              *(int *)(param_1 + 0x120) = iVar6;
              FUN_14251b1c0(param_1,0x10306);
            }
          }
        } while (**(int **)(param_1 + 8) < 1);
      }
      if (*(int *)(param_1 + 0x1b8) != 0) {
        do {
          lVar9 = FUN_1425d70a0(param_1 + 0x1b0);
          if (lVar9 != 0) {
            FUN_1425121d0(lVar9);
            FUN_1401773f0(lVar9);
          }
        } while (*(int *)(param_1 + 0x1b8) != 0);
      }
    }
  }
  return;
}



// FUNCTION 142518ab0 FUN_142518ab0 body=2772 status=ok
// SIG undefined FUN_142518ab0(void)

void FUN_142518ab0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
LAB_142518aeb:
  do {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    if (*(int *)(lVar5 + 0x1c) < *(int *)(lVar5 + 0x28)) {
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x38) + 0x40))();
    }
    else {
      lVar5 = (longlong)*(int *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x20);
    }
    *(longlong *)(param_1 + 0x20) = lVar5;
    uVar4 = *(uint *)(param_1 + 0x44);
    if (uVar4 == 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      iVar9 = *(int *)(lVar5 + 0x28);
      if ((*(int *)(lVar5 + 0x2c) <= iVar9) ||
         (0xd7ff < *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2))) {
        uVar4 = FUN_14250e570();
        if ((int)uVar4 < 0xd) goto LAB_142518b64;
LAB_142518b8c:
        if (((uVar4 != 0xd) && (uVar4 != 0x85)) && (uVar4 != 0x2028)) goto LAB_142518bc6;
LAB_142518ba1:
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
        lVar5 = 0;
LAB_142518bcd:
        *(longlong *)(param_1 + 0x38) = lVar5;
LAB_142518bd1:
        *(uint *)(param_1 + 0x40) = uVar4;
        goto LAB_142518bd4;
      }
      *(int *)(lVar5 + 0x28) = iVar9 + 1;
      uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
      uVar4 = (uint)uVar1;
      if (0xc < uVar1) goto LAB_142518b8c;
LAB_142518b64:
      if (uVar4 != 0xffffffff) {
        if (uVar4 != 10) {
LAB_142518bc6:
          lVar5 = *(longlong *)(param_1 + 0x38) + 1;
          goto LAB_142518bcd;
        }
        if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142518ba1;
        goto LAB_142518bd1;
      }
      *param_2 = 0xffffffff;
      *(undefined1 *)(param_2 + 1) = 0;
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar4 = 0xffffffff;
        goto LAB_142518d60;
      }
      *(undefined1 *)(param_2 + 1) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
LAB_142518bd4:
      *param_2 = uVar4;
      *(undefined1 *)(param_2 + 1) = 0;
      if (*(char *)(param_1 + 0x28) == '\0') {
LAB_142518d60:
        if (*(char *)(param_1 + 0x29) != '\0') {
          *(undefined1 *)(param_1 + 0x29) = 0;
          goto LAB_1425195de;
        }
        if ((*(byte *)(param_1 + 0x124) & 4) != 0) {
joined_r0x000142518d9c:
          if (uVar4 == 0x23) {
            uVar4 = 0x23;
            if (*(char *)(param_1 + 0x2a) == '\x01') {
              do {
                uVar4 = *(uint *)(param_1 + 0x44);
                if (uVar4 == 0xffffffff) {
                  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
                  iVar9 = *(int *)(lVar5 + 0x28);
                  if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
                     (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
                    *(int *)(lVar5 + 0x28) = iVar9 + 1;
                    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
                    uVar4 = (uint)uVar1;
                    if (uVar1 < 0x85) goto LAB_142518e3f;
LAB_142518e17:
                    if ((uVar4 != 0x85) && (uVar4 != 0x2028)) goto LAB_142518e52;
LAB_142518e70:
                    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
                    lVar5 = 0;
LAB_142518e76:
                    *(longlong *)(param_1 + 0x38) = lVar5;
                  }
                  else {
                    uVar4 = FUN_14250e570();
                    if (0x84 < (int)uVar4) goto LAB_142518e17;
LAB_142518e3f:
                    if (uVar4 != 10) {
                      if (uVar4 == 0xd) goto LAB_142518e70;
                      if (uVar4 != 0xffffffff) {
LAB_142518e52:
                        lVar5 = *(longlong *)(param_1 + 0x38) + 1;
                        goto LAB_142518e76;
                      }
                      *param_2 = 0xffffffff;
                      uVar4 = 0xffffffff;
                      break;
                    }
                    if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142518e70;
                  }
                  *(uint *)(param_1 + 0x40) = uVar4;
                }
                else {
                  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
                }
                *param_2 = uVar4;
                if ((int)uVar4 < 0x85) {
                  if ((uVar4 == 10) || (uVar4 == 0xd)) break;
                }
                else if ((uVar4 == 0x2028) || (uVar4 == 0x85)) break;
              } while( true );
            }
          }
          else if (uVar4 == 0xffffffff) goto LAB_1425195de;
          cVar3 = FUN_1425cc7f0(uVar4);
          if (cVar3 != '\0') {
            uVar4 = *(uint *)(param_1 + 0x44);
            if (uVar4 == 0xffffffff) {
              lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
              iVar9 = *(int *)(lVar5 + 0x28);
              if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
                 (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
                *(int *)(lVar5 + 0x28) = iVar9 + 1;
                uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
                uVar4 = (uint)uVar1;
                if (0xc < uVar1) goto LAB_142518f2c;
LAB_142518f0d:
                if (uVar4 != 0xffffffff) {
                  if (uVar4 != 10) goto LAB_142518f49;
                  if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142518f41;
                  goto LAB_142518f54;
                }
              }
              else {
                uVar4 = FUN_14250e570();
                if ((int)uVar4 < 0xd) goto LAB_142518f0d;
LAB_142518f2c:
                if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_142518f41:
                  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
                  lVar5 = 0;
                }
                else {
LAB_142518f49:
                  lVar5 = *(longlong *)(param_1 + 0x38) + 1;
                }
                *(longlong *)(param_1 + 0x38) = lVar5;
LAB_142518f54:
                *(uint *)(param_1 + 0x40) = uVar4;
              }
              *param_2 = uVar4;
            }
            else {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
              *param_2 = uVar4;
            }
            goto joined_r0x000142518d9c;
          }
          uVar4 = *param_2;
        }
        if (uVar4 != 0x5c) goto LAB_1425195de;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        if (*(int *)(lVar5 + 0x1c) < *(int *)(lVar5 + 0x28)) {
          lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x38) + 0x40))();
        }
        else {
          lVar5 = (longlong)*(int *)(lVar5 + 0x28) + *(longlong *)(lVar5 + 0x20);
        }
        lVar10 = DAT_14c792c08 + 0x9d8;
        if (*(int *)(param_1 + 0x44) == -1) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
          iVar9 = *(int *)(lVar6 + 0x28);
          if ((iVar9 < *(int *)(lVar6 + 0x2c)) &&
             (*(ushort *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
            *(int *)(lVar6 + 0x28) = iVar9 + 1;
            uVar1 = *(ushort *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar9 * 2);
            uVar4 = (uint)uVar1;
            if (0xc < uVar1) goto LAB_14251900b;
LAB_142518fed:
            if (uVar4 != 0xffffffff) {
              if (uVar4 != 10) goto LAB_14251903b;
              if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142519020;
              goto LAB_142519046;
            }
          }
          else {
            uVar4 = FUN_14250e570();
            if ((int)uVar4 < 0xd) goto LAB_142518fed;
LAB_14251900b:
            if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_142519020:
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
              lVar6 = 0;
            }
            else {
LAB_14251903b:
              lVar6 = *(longlong *)(param_1 + 0x38) + 1;
            }
            *(longlong *)(param_1 + 0x38) = lVar6;
LAB_142519046:
            *(uint *)(param_1 + 0x40) = uVar4;
          }
          *(uint *)(param_1 + 0x44) = uVar4;
        }
        cVar3 = FUN_142512880(lVar10);
        uVar4 = *(uint *)(param_1 + 0x44);
        if (cVar3 != '\0') {
          if (uVar4 == 0xffffffff) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
            iVar9 = *(int *)(lVar10 + 0x28);
            if ((iVar9 < *(int *)(lVar10 + 0x2c)) &&
               (*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
              *(int *)(lVar10 + 0x28) = iVar9 + 1;
              uVar4 = (uint)*(ushort *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 2);
            }
            else {
              uVar4 = FUN_14250e570();
            }
            if ((int)uVar4 < 0xd) {
              if (uVar4 == 0xffffffff) goto LAB_1425192ca;
              if (uVar4 != 10) goto LAB_1425192bc;
              if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_14251926b;
            }
            else {
              if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_14251926b:
                *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
                lVar10 = 0;
              }
              else {
LAB_1425192bc:
                lVar10 = *(longlong *)(param_1 + 0x38) + 1;
              }
              *(longlong *)(param_1 + 0x38) = lVar10;
            }
            *(uint *)(param_1 + 0x40) = uVar4;
          }
          else {
            *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
          }
LAB_1425192ca:
          *(undefined1 *)(param_2 + 1) = 1;
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
          if (((*(longlong *)(lVar10 + 0x20) == 0) &&
              (lVar6 = *(longlong *)(param_1 + 0x170), lVar6 == *(longlong *)(lVar10 + 0x10))) &&
             (lVar6 == *(int *)(lVar10 + 0x1c))) {
            local_48 = CONCAT44(local_48._4_4_,(int)lVar5);
            uVar4 = FUN_1425048e0(&LAB_1425118b0,&local_48,lVar6,*(undefined8 *)(lVar10 + 0x30));
            *param_2 = uVar4;
            lVar10 = (longlong)(int)local_48;
            if (lVar5 == lVar10) {
              FUN_14251b1c0(param_1,0x10303);
              lVar10 = (longlong)(int)local_48;
            }
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (lVar10 - lVar5);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
            lVar10 = lVar10 - *(longlong *)(lVar5 + 0x20);
            if (((lVar10 < 0) || (*(int *)(lVar5 + 0x1c) <= lVar10)) ||
               (0xdbff < *(ushort *)(*(longlong *)(lVar5 + 0x30) + lVar10 * 2))) {
              FUN_14250e700();
            }
            else {
              *(int *)(lVar5 + 0x28) = (int)lVar10;
            }
          }
          else {
            local_34 = 0;
            local_40 = 0xffffffff;
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
            lVar7 = lVar5 - *(longlong *)(lVar6 + 0x20);
            local_48 = lVar10;
            if (((lVar7 < 0) || (*(int *)(lVar6 + 0x1c) <= lVar7)) ||
               (0xdbff < *(ushort *)(*(longlong *)(lVar6 + 0x30) + lVar7 * 2))) {
              FUN_14250e700(lVar6,lVar5);
            }
            else {
              *(int *)(lVar6 + 0x28) = (int)lVar7;
            }
            uVar4 = FUN_1425048e0(FUN_1425117a0,&local_34,0x7fffffff,&local_48);
            *param_2 = uVar4;
            if (local_34 == 0) {
              FUN_14251b1c0(param_1,0x10303);
            }
            else if (local_40 == local_34) {
              lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
              if ((*(int *)(lVar5 + 0x28) < 1) ||
                 (uVar4 = *(int *)(lVar5 + 0x28) - 1,
                 0xd7ff < *(ushort *)(*(longlong *)(lVar5 + 0x30) + (ulonglong)uVar4 * 2))) {
                FUN_14250e620();
              }
              else {
                *(uint *)(lVar5 + 0x28) = uVar4;
              }
            }
            else if (local_40 != local_34 - 1) {
              FUN_14250e380(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),local_34 + ~local_40)
              ;
            }
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)(int)local_34;
          }
          goto LAB_1425195de;
        }
        if (uVar4 == 0xffffffff) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
          iVar9 = *(int *)(lVar5 + 0x28);
          if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
             (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
            *(int *)(lVar5 + 0x28) = iVar9 + 1;
            uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
            uVar4 = (uint)uVar1;
            if (0xc < uVar1) goto LAB_1425190d6;
LAB_1425190ba:
            if (uVar4 != 0xffffffff) {
              if (uVar4 != 10) goto LAB_1425190f1;
              if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_1425190e9;
              goto LAB_1425190fc;
            }
          }
          else {
            uVar4 = FUN_14250e570();
            if ((int)uVar4 < 0xd) goto LAB_1425190ba;
LAB_1425190d6:
            if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_1425190e9:
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
              lVar5 = 0;
            }
            else {
LAB_1425190f1:
              lVar5 = *(longlong *)(param_1 + 0x38) + 1;
            }
            *(longlong *)(param_1 + 0x38) = lVar5;
LAB_1425190fc:
            *(uint *)(param_1 + 0x40) = uVar4;
          }
          *(uint *)(param_1 + 0x44) = uVar4;
          if (uVar4 != 0xffffffff) goto LAB_14251906f;
LAB_14251910b:
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
          iVar9 = *(int *)(lVar5 + 0x28);
          if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
             (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
            *(int *)(lVar5 + 0x28) = iVar9 + 1;
            uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
            uVar4 = (uint)uVar1;
            if (0xc < uVar1) goto LAB_14251915b;
LAB_14251913f:
            if (uVar4 != 0xffffffff) {
              if (uVar4 != 10) goto LAB_142519176;
              if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_14251916e;
              goto LAB_142519181;
            }
          }
          else {
            uVar4 = FUN_14250e570();
            if ((int)uVar4 < 0xd) goto LAB_14251913f;
LAB_14251915b:
            if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_14251916e:
              *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
              lVar5 = 0;
            }
            else {
LAB_142519176:
              lVar5 = *(longlong *)(param_1 + 0x38) + 1;
            }
            *(longlong *)(param_1 + 0x38) = lVar5;
LAB_142519181:
            *(uint *)(param_1 + 0x40) = uVar4;
          }
          *(uint *)(param_1 + 0x44) = uVar4;
        }
        else {
          if (uVar4 == 0xffffffff) goto LAB_14251910b;
LAB_14251906f:
          if (uVar4 == 0x30) {
            *param_2 = 0;
            if (*(int *)(param_1 + 0x44) == -1) {
              lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
              iVar9 = *(int *)(lVar5 + 0x28);
              if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
                 (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
                *(int *)(lVar5 + 0x28) = iVar9 + 1;
                uVar4 = (uint)*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
              }
              else {
                uVar4 = FUN_14250e570();
              }
              if ((int)uVar4 < 0xd) {
                if (uVar4 == 0xffffffff) goto LAB_142519470;
                if (uVar4 != 10) goto LAB_142519462;
                if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_1425192b1;
              }
              else {
                if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_1425192b1:
                  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
                  lVar5 = 0;
                }
                else {
LAB_142519462:
                  lVar5 = *(longlong *)(param_1 + 0x38) + 1;
                }
                *(longlong *)(param_1 + 0x38) = lVar5;
              }
              *(uint *)(param_1 + 0x40) = uVar4;
            }
            else {
              *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
            }
LAB_142519470:
            iVar9 = 0;
            break;
          }
        }
        if (uVar4 != 0x51) {
          *(undefined1 *)(param_1 + 0x29) = 1;
          goto LAB_1425195de;
        }
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
        goto LAB_142518aeb;
      }
      *(undefined1 *)(param_2 + 1) = 1;
      if (uVar4 != 0x5c) goto LAB_1425195de;
      uVar4 = *(uint *)(param_1 + 0x44);
      uVar8 = 0x5c;
      if (uVar4 == 0xffffffff) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        iVar9 = *(int *)(lVar5 + 0x28);
        if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
           (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
          *(int *)(lVar5 + 0x28) = iVar9 + 1;
          uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
          uVar4 = (uint)uVar1;
          if (0xc < uVar1) goto LAB_142518c80;
LAB_142518c64:
          if (uVar4 != 0xffffffff) {
            if (uVar4 != 10) goto LAB_142518c9b;
            if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142518c93;
            goto LAB_142518ca6;
          }
        }
        else {
          uVar4 = FUN_14250e570();
          if ((int)uVar4 < 0xd) goto LAB_142518c64;
LAB_142518c80:
          if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_142518c93:
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
            lVar5 = 0;
          }
          else {
LAB_142518c9b:
            lVar5 = *(longlong *)(param_1 + 0x38) + 1;
          }
          *(longlong *)(param_1 + 0x38) = lVar5;
LAB_142518ca6:
          *(uint *)(param_1 + 0x40) = uVar4;
        }
        *(uint *)(param_1 + 0x44) = uVar4;
        uVar8 = *param_2;
      }
      if (uVar4 == 0x45) {
        if (((*(byte *)(param_1 + 0x124) & 0x10) != 0) && (uVar8 != 0xffffffff)) goto LAB_1425195de;
        *(undefined1 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
        goto LAB_142518aeb;
      }
      if (uVar8 != 0xffffffff) goto LAB_1425195de;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x44) == -1) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      iVar9 = *(int *)(lVar5 + 0x28);
      if ((iVar9 < *(int *)(lVar5 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2) < 0xd800)) {
        *(int *)(lVar5 + 0x28) = iVar9 + 1;
        uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar9 * 2);
        uVar4 = (uint)uVar1;
        if (0xc < uVar1) goto LAB_142518d33;
LAB_142518d0c:
        if (uVar4 == 0xffffffff) goto LAB_142518aeb;
        if (uVar4 != 10) goto LAB_142519028;
        if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142518d4a;
      }
      else {
        uVar4 = FUN_14250e570();
        if ((int)uVar4 < 0xd) goto LAB_142518d0c;
LAB_142518d33:
        if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_142518d4a:
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
          lVar5 = 0;
        }
        else {
LAB_142519028:
          lVar5 = *(longlong *)(param_1 + 0x38) + 1;
        }
        *(longlong *)(param_1 + 0x38) = lVar5;
      }
      *(uint *)(param_1 + 0x40) = uVar4;
      goto LAB_142518aeb;
    }
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  } while( true );
  do {
    uVar4 = *(uint *)(param_1 + 0x44);
    if (uVar4 == 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      iVar2 = *(int *)(lVar5 + 0x28);
      if ((iVar2 < *(int *)(lVar5 + 0x2c)) &&
         (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
        *(int *)(lVar5 + 0x28) = iVar2 + 1;
        uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 2);
        uVar4 = (uint)uVar1;
        if (0xc < uVar1) goto LAB_1425194eb;
LAB_1425194cf:
        if (uVar4 != 0xffffffff) {
          if (uVar4 != 10) goto LAB_142519506;
          if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_1425194fe;
          goto LAB_142519511;
        }
      }
      else {
        uVar4 = FUN_14250e570();
        if ((int)uVar4 < 0xd) goto LAB_1425194cf;
LAB_1425194eb:
        if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_1425194fe:
          *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
          lVar5 = 0;
        }
        else {
LAB_142519506:
          lVar5 = *(longlong *)(param_1 + 0x38) + 1;
        }
        *(longlong *)(param_1 + 0x38) = lVar5;
LAB_142519511:
        *(uint *)(param_1 + 0x40) = uVar4;
      }
      *(uint *)(param_1 + 0x44) = uVar4;
    }
    if (uVar4 - 0x38 < 0xfffffff8) {
      if (iVar9 == 0) {
        FUN_14251b1c0(param_1,0x10303);
      }
      break;
    }
    uVar8 = *param_2;
    uVar4 = (uVar4 & 7) + uVar8 * 8;
    *param_2 = uVar4;
    if ((int)uVar4 < 0x100) {
      if (*(int *)(param_1 + 0x44) == -1) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        iVar2 = *(int *)(lVar5 + 0x28);
        if ((iVar2 < *(int *)(lVar5 + 0x2c)) &&
           (*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 2) < 0xd800)) {
          *(int *)(lVar5 + 0x28) = iVar2 + 1;
          uVar4 = (uint)*(ushort *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 2);
        }
        else {
          uVar4 = FUN_14250e570();
        }
        if ((int)uVar4 < 0xd) {
          if (uVar4 == 0xffffffff) goto LAB_142519488;
          if (uVar4 != 10) goto LAB_1425195b6;
          if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_1425195ae;
        }
        else {
          if (((uVar4 == 0xd) || (uVar4 == 0x85)) || (uVar4 == 0x2028)) {
LAB_1425195ae:
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
            lVar5 = 0;
          }
          else {
LAB_1425195b6:
            lVar5 = *(longlong *)(param_1 + 0x38) + 1;
          }
          *(longlong *)(param_1 + 0x38) = lVar5;
        }
        *(uint *)(param_1 + 0x40) = uVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      }
    }
    else {
      *param_2 = uVar8 & 0x1fffffff;
    }
LAB_142519488:
    iVar9 = iVar9 + -1;
  } while (iVar9 != -3);
  *(undefined1 *)(param_2 + 1) = 1;
LAB_1425195de:
  *(undefined1 *)(param_1 + 0x2a) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 142519600 FUN_142519600 body=6768 status=ok
// SIG undefined FUN_142519600(void)

/* WARNING: Instruction at (ram,0x00014251affd) overlaps instruction at (ram,0x00014251affc)
    */

undefined8 FUN_142519600(longlong param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong unaff_RDI;
  undefined1 local_108 [200];
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar14 = 1;
  switch(param_2) {
  case 0:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511900(local_108);
    FUN_142511a00(local_108,10,0xd);
    FUN_142513960(local_108,0x85);
    FUN_142511a00(local_108,0x2028,0x2029);
    FUN_1425146a0(local_108);
    FUN_142513300(uVar10,local_108);
    goto LAB_14251aa06;
  case 1:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511900(local_108);
    FUN_1425c6e50(local_108,0x2000,0x1000,*(undefined8 *)(param_1 + 8));
    FUN_142513960(local_108,9);
    FUN_142513300(uVar10,local_108);
    goto LAB_14251aa06;
  case 2:
  case 0x5a:
    puVar9 = (undefined8 *)thunk_FUN_1424da030(0x40);
    if (puVar9 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
      FUN_14251b1c0(param_1,7);
    }
    else {
      *puVar9 = &PTR_FUN_149e18960;
      *(undefined2 *)(puVar9 + 1) = 2;
      *(undefined8 **)(param_1 + 0x208) = puVar9;
    }
    break;
  case 3:
    FUN_14251cb00(param_1,0);
    goto LAB_14251a459;
  default:
switchD_14251963e_caseD_4:
                    /* WARNING: Subroutine does not return */
    abort();
  case 5:
    FUN_14251cb00(param_1,0);
    FUN_14251c5b0(param_1,7,0);
    uVar7 = FUN_14251b2c0(param_1,3);
    FUN_14251c5b0(param_1,8,uVar7);
    FUN_14251c5b0(param_1,7,0);
    lVar11 = param_1 + 0x178;
    FUN_14251cdf0(lVar11,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,0xfffffffe,*(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -3,
                  *(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1,
                  *(undefined8 *)(param_1 + 8));
    FUN_14251ce30(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x88),uVar7,
                  *(undefined8 *)(param_1 + 8));
    if (*(longlong *)(param_1 + 0x208) == 0) break;
    iVar6 = FUN_142502d50(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0),
                          *(longlong *)(param_1 + 0x208),
                          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + 8),
                          *(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x208) = 0;
    if ((iVar6 < 1) || (0 < **(int **)(param_1 + 8))) break;
  case 0x18:
    FUN_14251b1c0(param_1,0x10315);
    break;
  case 6:
  case 0x67:
    FUN_1424a7d60(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x48));
    break;
  case 7:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_14251d9c0(uVar10,0x200,*(undefined8 *)(param_1 + 8));
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x124);
    *(undefined1 *)(param_1 + 300) = 1;
    break;
  case 9:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x13;
    goto LAB_14251af9f;
  case 10:
    lVar11 = FUN_14251dc90(param_1);
    goto LAB_14251a81c;
  case 0xb:
    FUN_14251b1c0(param_1,0x10308);
    break;
  case 0xc:
    if (((*(byte *)(param_1 + 0x125) & 2) != 0) &&
       ((*(uint *)(param_1 + 0x48) & 0xffffffdf) - 0x41 < 0x1a)) {
      FUN_14251b1c0(param_1,0x10303);
    }
  case 0x58:
    FUN_14251db00(param_1,0x40006);
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142513960(uVar10,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x48);
    break;
  case 0xd:
    uVar13 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    uVar10 = *(undefined8 *)(DAT_14c792c08 + 0x20);
    goto LAB_14251abb2;
  case 0xe:
    break;
  case 0xf:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x3a;
    goto LAB_14251af9f;
  case 0x10:
    FUN_14251cb00(param_1,0);
    uVar7 = FUN_14251ce70(param_1,4);
    FUN_14251c5b0(param_1,0x2c,uVar7);
    FUN_14251c5b0(param_1,0x2d,uVar7);
    FUN_14251c5b0(param_1,0,0);
    FUN_14251c5b0(param_1,0,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251cdf0(param_1 + 0x178,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar16 = (undefined1 *)0xfffffff9;
    goto LAB_14251a2a1;
  case 0x11:
    FUN_14251c5b0(param_1,6,2);
    FUN_14251c5b0(param_1,0xd,3);
    FUN_14251c5b0(param_1,0xe,0);
    FUN_142519600(param_1,0x4d);
    break;
  case 0x12:
    uVar7 = FUN_14251ced0(param_1,0);
    FUN_14251d3b0(param_1,0x19,0x1c);
    FUN_14251cfe0(param_1,uVar7);
    uVar20 = FUN_14251ce70(param_1,1);
    iVar6 = FUN_14251cd90(param_1,0x20,uVar20);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar6,uVar7);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (*(int *)(lVar11 + 8) < 1) {
      lVar17 = 1;
    }
    else {
      uVar5 = *(int *)(lVar11 + 8) - 1;
      *(uint *)(lVar11 + 8) = uVar5;
      lVar17 = (longlong)(*(int *)(*(longlong *)(lVar11 + 0x18) + (ulonglong)uVar5 * 8) + 1);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    }
    FUN_14251d5c0(lVar11,lVar17,*(undefined8 *)(param_1 + 8));
    goto LAB_14251aeda;
  case 0x13:
    FUN_14251cb00(param_1,0);
    FUN_14251c5b0(param_1,7,0);
    uVar7 = FUN_14251ce70(param_1,1);
    FUN_14251c5b0(param_1,0x20,uVar7);
    FUN_14251c5b0(param_1,7,0);
    unaff_RDI = param_1 + 0x178;
    FUN_14251cdf0(unaff_RDI,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(unaff_RDI,&DAT_fffffffd,*(undefined8 *)(param_1 + 8));
switchD_142519cd9_caseD_a:
    goto LAB_14251a2b8;
  case 0x14:
    FUN_14251cb00(param_1,0);
    uVar7 = FUN_14251ce70(param_1,2);
    FUN_14251c5b0(param_1,0x25,uVar7);
    FUN_14251c5b0(param_1,6,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251cdf0(param_1 + 0x178,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar16 = &DAT_fffffffb;
    goto LAB_14251a2a1;
  case 0x15:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x16;
    goto LAB_14251af9f;
  case 0x16:
    FUN_14251cb00(param_1,0);
switchD_142519cd9_caseD_0:
    uVar10 = 0x18;
    goto LAB_14251af9f;
  case 0x17:
    if (*(int *)(param_1 + 0x1a4) < 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    iVar6 = FUN_1424d8db0(*(undefined4 *)(param_1 + 0x48));
    lVar11 = (longlong)iVar6 + (longlong)*(int *)(param_1 + 0x1a4) * 10;
    if (lVar11 < 0x80000000) {
      *(int *)(param_1 + 0x1a4) = (int)lVar11;
      break;
    }
    goto LAB_14251a896;
  case 0x19:
    FUN_14251da60(param_1,0x30004);
    break;
  case 0x1a:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142513960(uVar10,0x26);
    break;
  case 0x1b:
    uVar7 = FUN_14251d820(param_1);
    FUN_14251db00(param_1,0x40006);
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142513960(uVar10,uVar7);
    *(undefined4 *)(param_1 + 0x200) = uVar7;
    break;
  case 0x1c:
    uVar7 = FUN_14251d820(param_1);
    FUN_1424a7d60(param_1 + 0x130,uVar7);
    break;
  case 0x1d:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511900(local_108);
    FUN_1425c6e50(local_108,0x2000,0x1000,*(undefined8 *)(param_1 + 8));
    FUN_142513960(local_108,9);
    FUN_1425146a0(local_108);
    FUN_142513300(uVar10,local_108);
    goto LAB_14251aa06;
  case 0x1e:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x35;
    if ((*(uint *)(param_1 + 0x124) & 0x100) == 0) {
      uVar10 = 0x10;
    }
    goto LAB_14251af9f;
  case 0x1f:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x14;
    goto LAB_14251af9f;
  case 0x20:
    puVar16 = (undefined1 *)0x40007;
    goto LAB_14251a951;
  case 0x21:
    FUN_14251cb00(param_1,0);
    uVar7 = FUN_14251ce70(param_1,2);
    FUN_14251c5b0(param_1,0x25,uVar7);
    FUN_14251c5b0(param_1,6,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 2);
    FUN_14251c5b0(param_1,0xd,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 3)
    ;
    FUN_14251c5b0(param_1,0x26,uVar7);
    FUN_14251c5b0(param_1,1,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251cdf0(param_1 + 0x178,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar16 = (undefined1 *)0xfffffffc;
    goto LAB_14251a2a1;
  case 0x22:
    FUN_14251cb00(param_1,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251c5b0(param_1,7,0);
    lVar11 = param_1 + 0x178;
    FUN_14251cdf0(lVar11,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,0xfffffffa,*(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -2,
                  *(undefined8 *)(param_1 + 8));
    FUN_14251cdf0(lVar11,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1,
                  *(undefined8 *)(param_1 + 8));
LAB_14251a459:
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x128);
    break;
  case 0x23:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x3a;
    goto LAB_14251acf4;
  case 0x24:
    iVar6 = FUN_1424d8db0(*(undefined4 *)(param_1 + 0x48));
    lVar11 = (longlong)iVar6 + (longlong)*(int *)(param_1 + 0x1a0) * 10;
    if (lVar11 < 0x80000000) {
      *(int *)(param_1 + 0x1a0) = (int)lVar11;
      break;
    }
LAB_14251a896:
    FUN_14251b1c0(param_1,0x10307);
    break;
  case 0x25:
    FUN_14251cb00(param_1,0);
    uVar20 = *(uint *)(param_1 + 0x124) & 9;
    puVar15 = &switchD_142519fc8::switchdataD_1499db8c8;
    piVar12 = (int *)((longlong)&switchD_142519fc8::switchdataD_1499db8c8 +
                     (longlong)(int)(&switchD_142519fc8::switchdataD_1499db8c8)[uVar20]);
    switch(uVar20) {
    case 0:
    case 1:
      goto switchD_142519fc8_caseD_0;
    default:
switchD_142519cd9_caseD_2:
      pcVar1 = (code *)swi(3);
      uVar14 = (*pcVar1)();
      return uVar14;
    case 8:
      uVar10 = 0x2b;
      break;
    case 9:
      uVar10 = 0x1e;
      break;
    case 10:
      LOCK();
      *(undefined1 *)piVar12 = 0xb8;
      UNLOCK();
      iRam000001288621d0f7 = (int)piVar12;
      *piVar12 = *piVar12 + iRam000001288621d0f7;
      goto switchD_14251963e_caseD_e;
    case 0xb:
switchD_142519fc8_caseD_b:
      uVar5 = *(uint *)(*(longlong *)(puVar15 + 6) + (unaff_RDI & 0xffffffff) * 8);
      uVar20 = (uVar5 >> 0x18) - 0xb;
      uVar18 = (ulonglong)uVar20;
      uVar19 = uVar18;
      if (uVar20 < 0x11) {
        uVar19 = (longlong)&switchD_14251ad4f::switchdataD_1499db8f0 +
                 (longlong)(int)(&switchD_14251ad4f::switchdataD_1499db8f0)[uVar18];
        switch(uVar18) {
        case 0:
          FUN_14251cd90(param_1,0x32,uVar5 & 0xffffff);
          puVar15 = *(uint **)(*(longlong *)(param_1 + 0x10) + 0x20);
          goto switchD_142519cd9_caseD_c;
        case 1:
        case 10:
        case 0x10:
          goto switchD_142519fc8_caseD_c;
        }
      }
      goto switchD_14251ad4f_caseD_2;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
switchD_142519fc8_caseD_c:
switchD_142519cd9_caseD_c:
      FUN_14250e0c0(puVar15);
      goto LAB_14251b04c;
    }
    goto LAB_14251af9f;
  case 0x26:
    FUN_14251db00(param_1,0x10002);
    FUN_1425d70e0(param_1 + 0x1d8);
    break;
  case 0x27:
    lVar11 = param_1 + 0x1d8;
    iVar6 = FUN_142516650(lVar11,*(int *)(param_1 + 0x1e0) + -1);
    if (iVar6 != 0x20009) {
      FUN_142516470(lVar11,0x20003,*(undefined8 *)(param_1 + 8));
      break;
    }
    FUN_1425d70e0(lVar11);
    FUN_142516470(lVar11,0x20003,*(undefined8 *)(param_1 + 8));
    goto LAB_14251a97b;
  case 0x28:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x31;
    goto LAB_14251a9b9;
  case 0x29:
    uVar7 = 0;
    FUN_14251cb00(param_1,0);
    unaff_RDI = param_1 + 0x178;
    if (0 < *(int *)(param_1 + 0x180)) {
      uVar20 = *(int *)(param_1 + 0x180) - 1;
      *(uint *)(param_1 + 0x180) = uVar20;
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 400) + (ulonglong)uVar20 * 4);
    }
    iVar6 = FUN_14251cd90(param_1,6,
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 1);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar6,uVar7);
    FUN_14251c5b0(param_1,0xd,0);
    FUN_14251cdf0(unaff_RDI,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1,
                  *(undefined8 *)(param_1 + 8));
    FUN_14251c5b0(param_1,7,0);
    goto LAB_14251a2c0;
  case 0x2a:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x35;
    if ((*(uint *)(param_1 + 0x124) & 0x100) == 0) {
      uVar10 = 0x10;
    }
    goto LAB_14251acf4;
  case 0x2b:
    FUN_14251cb00(param_1,0);
    uVar10 = 10;
    goto LAB_14251acf4;
  case 0x2c:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x39;
    goto LAB_14251af9f;
  case 0x2d:
  case 0x39:
  case 0x57:
    FUN_14251b1c0(param_1,0x10301);
    break;
  case 0x2e:
    FUN_14251cb00(param_1,0);
    if ((*(uint *)(param_1 + 0x124) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 0x124) & 1) == 0) {
        uVar10 = 0xc;
      }
      else {
        uVar10 = 0x1b;
      }
    }
    else {
      uVar10 = 0x15;
    }
    goto LAB_14251af9f;
  case 0x2f:
    switch(*(undefined4 *)(param_1 + 0x48)) {
    case 0x2d:
      *(undefined1 *)(param_1 + 300) = 0;
      uVar20 = 0;
      break;
    default:
      goto switchD_14251963e_caseD_4;
    case 100:
      uVar20 = 1;
      break;
    case 0x69:
      uVar20 = 2;
      break;
    case 0x6d:
      uVar20 = 8;
      break;
    case 0x73:
      uVar20 = 0x20;
      break;
    case 0x75:
      uVar20 = 0;
      break;
    case 0x77:
      uVar20 = 0x100;
      break;
    case 0x78:
      uVar20 = 4;
    }
    if (*(char *)(param_1 + 300) == '\0') {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & ~uVar20;
    }
    else {
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | uVar20;
    }
    break;
  case 0x30:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511b90(local_108,*(undefined8 *)(DAT_14c792c08 + 8));
    FUN_1425146a0(local_108);
    FUN_142513300(uVar10,local_108);
    goto LAB_14251aa06;
  case 0x31:
    uVar20 = FUN_14251ced0(param_1,0);
    uVar10 = 6;
    goto LAB_14251afa2;
  case 0x32:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511900(local_108);
    FUN_1425c6e50(local_108,0x2000,0x200,*(undefined8 *)(param_1 + 8));
    FUN_1425146a0(local_108);
    FUN_142513300(uVar10,local_108);
    goto LAB_14251aa06;
  case 0x33:
    iVar6 = FUN_14251ced0(param_1,1);
    FUN_14251cfe0(param_1,iVar6);
    uVar20 = FUN_14251ce70(param_1,1);
    iVar8 = FUN_14251cd90(param_1,0x20,uVar20);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6);
    iVar8 = FUN_14251cd90(param_1,6,
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 1);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6 + 1);
    goto LAB_14251aae7;
  case 0x34:
    iVar6 = FUN_14251d820(param_1);
    if ((**(int **)(param_1 + 8) < 1) &&
       ((*(int *)(param_1 + 0x200) == -1 || (iVar6 < *(int *)(param_1 + 0x200))))) {
      FUN_14251b1c0(param_1,0x10310);
    }
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511a00(uVar10,*(undefined4 *)(param_1 + 0x200),iVar6);
    *(int *)(param_1 + 0x200) = iVar6;
    break;
  case 0x35:
  case 0x56:
    FUN_14251b1c0(param_1,0x10305);
    break;
  case 0x36:
    FUN_14251cb00(param_1,0);
    uVar10 = 10;
LAB_14251a9b9:
    uVar20 = 4;
    goto LAB_14251afa2;
  case 0x37:
    iVar6 = FUN_14251ced0(param_1,1);
    FUN_14251cfe0(param_1,iVar6);
    uVar20 = FUN_14251ce70(param_1,1);
    iVar8 = FUN_14251cd90(param_1,0x20,uVar20);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6);
    iVar8 = FUN_14251cd90(param_1,6,
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 1);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6 + 1);
    FUN_14251c5b0(param_1,0xd,iVar6 + 1);
LAB_14251aae7:
    uVar14 = 1;
    uVar10 = 0x21;
    goto LAB_14251afa2;
  case 0x38:
    uVar20 = FUN_14251ced0(param_1,0);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar6 = *(int *)(lVar11 + 8);
    if (((uVar20 == iVar6 - 1U) && (-1 < (int)uVar20)) && ((int)uVar20 < iVar6)) {
      uVar5 = *(uint *)(*(longlong *)(lVar11 + 0x18) + (ulonglong)uVar20 * 8);
      uVar3 = uVar5 >> 0x18;
      switch(uVar3) {
      case 0xb:
        FUN_14251c5b0(param_1,0x32,uVar5 & 0xffffff);
        break;
      case 0xc:
      case 0x15:
      case 0x1b:
        uVar20 = 0x34000000;
        if (0 < **(int **)(param_1 + 8)) {
          uVar20 = 0;
        }
        FUN_14251cf50(param_1,(uVar3 == 0x15 | uVar20) + (*(uint *)(param_1 + 0x124) & 1) * 2);
        break;
      default:
        goto switchD_142519d92_caseD_d;
      }
LAB_14251b04c:
      uVar20 = FUN_14251b2c0(param_1,1);
      uVar10 = 0x33;
      goto LAB_14251afa2;
    }
switchD_142519d92_caseD_d:
    iVar6 = FUN_14251b640(param_1,uVar20);
    if (iVar6 == 0) {
      FUN_14251cfe0(param_1,uVar20);
      uVar7 = FUN_14251b2c0(param_1,1);
      iVar6 = FUN_14251cd90(param_1,0x23,uVar7);
      FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar6,uVar20);
      uVar20 = uVar20 + 1;
      uVar10 = 0x12;
    }
    else {
      uVar10 = 0xf;
    }
    goto LAB_14251aee2;
  case 0x3a:
    FUN_14251c690(param_1);
    if (0 < *(int *)(param_1 + 0x180)) break;
  case 0x5e:
    FUN_14251b1c0(param_1,0x10306);
    break;
  case 0x3b:
    FUN_14251d3b0(param_1,0x1a,0x1d);
    break;
  case 0x3c:
    lVar11 = FUN_14251d610(param_1);
LAB_14251a81c:
    if (lVar11 != 0) {
      uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
      FUN_142513300(uVar10,lVar11);
      FUN_1425121d0(lVar11);
      FUN_1401773f0(lVar11);
    }
    break;
  case 0x3d:
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + 8);
    for (uVar20 = FUN_1424d8db0(*(undefined4 *)(param_1 + 0x48)); (int)uVar20 < iVar6;
        uVar20 = iVar8 + uVar20 * 10) {
      uVar5 = *(uint *)(param_1 + 0x44);
      if (uVar5 == 0xffffffff) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        iVar8 = *(int *)(lVar11 + 0x28);
        if (iVar8 < *(int *)(lVar11 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 2))
          goto LAB_142519a88;
          *(int *)(lVar11 + 0x28) = iVar8 + 1;
          uVar5 = (uint)*(ushort *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 2);
        }
        else {
LAB_142519a88:
          uVar5 = FUN_14250e570();
        }
        if ((int)uVar5 < 0xd) {
          if (uVar5 != 0xffffffff) {
            if (uVar5 != 10) goto LAB_142519ac3;
            if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142519abb;
            goto LAB_142519ace;
          }
        }
        else {
          if (((uVar5 == 0xd) || (uVar5 == 0x85)) || (uVar5 == 0x2028)) {
LAB_142519abb:
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
            lVar11 = 0;
          }
          else {
LAB_142519ac3:
            lVar11 = *(longlong *)(param_1 + 0x38) + 1;
          }
          *(longlong *)(param_1 + 0x38) = lVar11;
LAB_142519ace:
          *(uint *)(param_1 + 0x40) = uVar5;
        }
        *(uint *)(param_1 + 0x44) = uVar5;
      }
      cVar2 = FUN_142512880(*(undefined8 *)(DAT_14c792c08 + 0xaa0),uVar5);
      if (cVar2 == '\0') break;
      if (*(int *)(param_1 + 0x44) == -1) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        iVar8 = *(int *)(lVar11 + 0x28);
        if (iVar8 < *(int *)(lVar11 + 0x2c)) {
          if (0xd7ff < *(ushort *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 2))
          goto LAB_142519b2c;
          *(int *)(lVar11 + 0x28) = iVar8 + 1;
          uVar3 = (uint)*(ushort *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 2);
        }
        else {
LAB_142519b2c:
          uVar3 = FUN_14250e570();
        }
        if ((int)uVar3 < 0xd) {
          if (uVar3 == 0xffffffff) goto LAB_142519a3d;
          if (uVar3 != 10) goto LAB_142519b67;
          if (*(int *)(param_1 + 0x40) != 0xd) goto LAB_142519b5f;
        }
        else {
          if (((uVar3 == 0xd) || (uVar3 == 0x85)) || (uVar3 == 0x2028)) {
LAB_142519b5f:
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
            lVar11 = 0;
          }
          else {
LAB_142519b67:
            lVar11 = *(longlong *)(param_1 + 0x38) + 1;
          }
          *(longlong *)(param_1 + 0x38) = lVar11;
        }
        *(uint *)(param_1 + 0x40) = uVar3;
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      }
LAB_142519a3d:
      iVar8 = FUN_1424d8db0(uVar5);
    }
    FUN_14251cb00(param_1,0);
    if ((*(byte *)(param_1 + 0x124) & 2) == 0) {
      uVar10 = 0x22;
    }
    else {
      uVar10 = 0x29;
    }
    goto LAB_14251afa2;
  case 0x3e:
    puVar16 = (undefined1 *)0x40006;
    goto LAB_14251a951;
  case 0x3f:
    FUN_14251b1c0(param_1,0x10303);
    break;
  case 0x40:
    uVar14 = 1;
    uVar7 = FUN_14251ced0(param_1,1);
    iVar6 = FUN_14251cd90(param_1,6,
                          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8));
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar6,uVar7);
    break;
  case 0x41:
    puVar16 = &DAT_00040008;
LAB_14251a951:
    FUN_14251da60(param_1,puVar16);
LAB_14251a956:
    FUN_142516470(param_1 + 0x1d8,1,*(undefined8 *)(param_1 + 8));
    if ((*(byte *)(param_1 + 0x124) & 2) != 0) {
LAB_14251a97b:
      FUN_142516470(param_1 + 0x1d8,0x20009,*(undefined8 *)(param_1 + 8));
    }
    break;
  case 0x42:
    iVar6 = FUN_14251ced0(param_1,1);
    uVar20 = FUN_14251ce70(param_1,1);
    iVar8 = FUN_14251cd90(param_1,0x20,uVar20);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6);
    FUN_14251c5b0(param_1,6,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 2);
    FUN_14251c5b0(param_1,0xd,iVar6 + 1);
LAB_14251aeda:
    uVar10 = 0x21;
LAB_14251aee2:
    uVar14 = 1;
    goto LAB_14251afa2;
  case 0x43:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x16;
    goto LAB_14251acf4;
  case 0x44:
    FUN_14251cb00(param_1,0);
    uVar7 = FUN_14251ce70(param_1,4);
    FUN_14251c5b0(param_1,0x2c,uVar7);
    FUN_14251c5b0(param_1,0x2f,uVar7);
    FUN_14251c5b0(param_1,0,0);
    FUN_14251c5b0(param_1,0,0);
    FUN_14251c5b0(param_1,0,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251cdf0(param_1 + 0x178,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar16 = (undefined1 *)0xfffffff8;
    goto LAB_14251a2a1;
  case 0x45:
    FUN_14251cb00(param_1,0);
    uVar10 = *(undefined8 *)(param_1 + 8);
    local_40 = thunk_FUN_1424da030(200);
    if (local_40 != 0) {
      FUN_142511900(local_40);
    }
    FUN_1425163e0(param_1 + 0x1b0,local_40,uVar10);
    goto LAB_14251a956;
  case 0x46:
    FUN_14251da60(param_1,0x30005);
    break;
  case 0x47:
    iVar6 = FUN_142502860(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xd0),
                          *(undefined8 *)(param_1 + 0x208));
    if (iVar6 == 0) {
      FUN_14251b1c0(param_1,0x10315);
    }
    else {
      FUN_14251cb00(param_1,0);
      if ((*(byte *)(param_1 + 0x124) & 2) == 0) {
        uVar10 = 0x22;
      }
      else {
        uVar10 = 0x29;
      }
      FUN_14251c5b0(param_1,uVar10,iVar6);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x208);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    break;
  case 0x48:
    if ((*(int *)(param_1 + 0x200) == -1) || (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x200)))
    {
      FUN_14251b1c0(param_1,0x10310);
    }
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511a00(uVar10,*(undefined4 *)(param_1 + 0x200),*(undefined4 *)(param_1 + 0x48));
    break;
  case 0x49:
    FUN_14251cb00(param_1,0);
    puVar15 = &switchD_142519cd9::switchdataD_1499db8a0;
    switch(*(uint *)(param_1 + 0x124) & 9) {
    case 0:
      goto switchD_142519cd9_caseD_0;
    case 1:
      uVar10 = 0x36;
      break;
    default:
      goto switchD_142519cd9_caseD_2;
    case 8:
      uVar10 = 0x2a;
      break;
    case 9:
      uVar10 = 0x37;
      break;
    case 10:
    case 0xb:
      goto switchD_142519cd9_caseD_a;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_142519cd9_caseD_c;
    }
    goto LAB_14251af9f;
  case 0x4a:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x38;
    goto LAB_14251acf4;
  case 0x4b:
    uVar14 = 0;
    FUN_14251cb00(param_1,0);
    break;
  case 0x4c:
    iVar6 = FUN_14251ced0(param_1,1);
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8);
    iVar4 = FUN_14251cd90(param_1,0xd,iVar8 + 1);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar4,iVar6);
    FUN_14251c5b0(param_1,0xd,iVar8 + 2);
    goto LAB_14251acd3;
  case 0x4d:
    FUN_14251cb00(param_1,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251c5b0(param_1,7,0);
    FUN_14251cdf0(param_1 + 0x178,*(undefined4 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8));
    uVar10 = *(undefined8 *)(param_1 + 8);
    puVar16 = (undefined1 *)0xffffffff;
LAB_14251a2a1:
    unaff_RDI = param_1 + 0x178;
    FUN_14251cdf0(unaff_RDI,puVar16,uVar10);
LAB_14251a2b8:
    FUN_14251cdf0(unaff_RDI);
LAB_14251a2c0:
    FUN_14251cdf0(unaff_RDI,*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1,
                  *(undefined8 *)(param_1 + 8));
    break;
  case 0x4e:
    FUN_14251cb00(param_1,0);
switchD_142519fc8_caseD_0:
    uVar10 = 0x17;
    goto LAB_14251af9f;
  case 0x4f:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511a00(uVar10,10,0xd);
    FUN_142513960(uVar10,0x85);
    FUN_142511a00(uVar10,0x2028,0x2029);
    break;
  case 0x50:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x38;
    goto LAB_14251af9f;
  case 0x51:
    FUN_14251b1c0(param_1,0x1030b);
    break;
  case 0x52:
    FUN_14251b1c0(param_1,0x1030f);
    break;
  case 0x53:
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a0);
    break;
  case 0x54:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142513960(uVar10,0x2d);
    break;
  case 0x55:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x31;
LAB_14251acf4:
    uVar20 = 1;
    goto LAB_14251afa2;
  case 0x59:
    FUN_14251c690(param_1);
    if (0 < *(int *)(param_1 + 0x180)) {
      FUN_14251b1c0(param_1,0x10306);
    }
    uVar14 = 0;
    uVar10 = 2;
    goto LAB_14251af9f;
  case 0x5b:
    if (((*(byte *)(param_1 + 0x125) & 2) != 0) &&
       ((*(uint *)(param_1 + 0x48) & 0xffffffdf) - 0x41 < 0x1a)) {
      FUN_14251b1c0(param_1,0x10303);
    }
  case 0x5c:
    FUN_1424a7d60(param_1 + 0x130,*(undefined4 *)(param_1 + 0x48));
    break;
  case 0x5d:
    *(undefined1 *)(param_1 + 0x2a) = 0;
    break;
  case 0x5f:
    iVar6 = FUN_14251ced0(param_1,1);
    iVar8 = FUN_14251cd90(param_1,0xd,
                          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8));
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6);
LAB_14251acd3:
    uVar20 = iVar6 + 1;
    uVar10 = 6;
    goto LAB_14251aee2;
  case 0x60:
    uVar10 = FUN_1425d70a0(param_1 + 0x1b0);
    goto LAB_14251981d;
  case 0x61:
    cVar2 = FUN_14251d140(param_1);
    if (cVar2 == '\0') {
      FUN_14251d3b0(param_1,0x19,0x1c);
    }
    break;
  case 0x62:
    FUN_14251cb00(param_1,0);
    uVar10 = 0x11;
LAB_14251af9f:
    uVar20 = 0;
LAB_14251afa2:
    FUN_14251c5b0(param_1,uVar10,uVar20);
    break;
  case 99:
    uVar5 = FUN_14251ced0(param_1,0);
    unaff_RDI = (ulonglong)uVar5;
    puVar15 = *(uint **)(*(longlong *)(param_1 + 0x10) + 0x20);
    uVar20 = puVar15[2] - 1;
    uVar19 = (ulonglong)uVar20;
    if (((uVar5 == uVar20) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)puVar15[2]))
    goto switchD_142519fc8_caseD_b;
switchD_14251ad4f_caseD_2:
    uVar14 = 1;
    iVar6 = FUN_14251ced0(param_1,CONCAT71((int7)(uVar19 >> 8),1));
    uVar7 = FUN_14251cd90(param_1,0xf,iVar6 + 1);
    iVar8 = FUN_14251b640(param_1,iVar6,
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1);
    if (iVar8 == 0) {
      FUN_14251cfe0(param_1,iVar6);
      uVar7 = FUN_14251b2c0(param_1,1);
      iVar8 = FUN_14251cd90(param_1,0x23,uVar7);
      FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6 + 1)
      ;
      uVar7 = FUN_14251cd90(param_1,0x12,iVar6 + 2);
    }
    iVar8 = FUN_14251cd90(param_1,6,
                          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + 1);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),(longlong)iVar8,iVar6);
    FUN_14251cf50(param_1,uVar7);
    break;
  case 100:
    uVar13 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    uVar10 = *(undefined8 *)(DAT_14c792c08 + 8);
LAB_14251abb2:
    FUN_142513300(uVar13,uVar10);
    break;
  case 0x65:
    uVar10 = FUN_142516630(param_1 + 0x1b0,*(int *)(param_1 + 0x1b8) + -1);
    FUN_142511b90(local_108,*(undefined8 *)(DAT_14c792c08 + 0x20));
    FUN_1425146a0(local_108);
    FUN_142513300(uVar10,local_108);
LAB_14251aa06:
    FUN_1425121d0(local_108);
    break;
  case 0x66:
    FUN_14251cb00(param_1,0);
    uVar10 = FUN_14251d610(param_1);
LAB_14251981d:
    FUN_14251d710(param_1,uVar10);
    break;
  case 0x68:
    *(undefined8 *)(param_1 + 0x1a0) = 0xffffffff00000000;
  }
switchD_14251963e_caseD_e:
  if (0 < **(int **)(param_1 + 8)) {
    uVar14 = 0;
  }
  return uVar14;
}



// FUNCTION 14251b070 Unwind@14251b070 body=47 status=ok
// SIG undefined Unwind@14251b070(void)

void Unwind_14251b070(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xe8));
  return;
}



// FUNCTION 14251b0a0 Unwind@14251b0a0 body=47 status=ok
// SIG undefined Unwind@14251b0a0(void)

void Unwind_14251b0a0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b0d0 Unwind@14251b0d0 body=47 status=ok
// SIG undefined Unwind@14251b0d0(void)

void Unwind_14251b0d0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b100 Unwind@14251b100 body=47 status=ok
// SIG undefined Unwind@14251b100(void)

void Unwind_14251b100(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b130 Unwind@14251b130 body=47 status=ok
// SIG undefined Unwind@14251b130(void)

void Unwind_14251b130(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b160 Unwind@14251b160 body=47 status=ok
// SIG undefined Unwind@14251b160(void)

void Unwind_14251b160(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b190 Unwind@14251b190 body=47 status=ok
// SIG undefined Unwind@14251b190(void)

void Unwind_14251b190(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251b1c0 FUN_14251b1c0 body=243 status=ok
// SIG undefined FUN_14251b1c0(void)

void FUN_14251b1c0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == 7) || (**(int **)(param_1 + 8) < 1)) {
    **(int **)(param_1 + 8) = param_2;
    if (*(longlong *)(param_1 + 0x30) < 0x80000000) {
      lVar1 = *(longlong *)(param_1 + 0x38);
      **(undefined4 **)(param_1 + 0x18) = (int)*(longlong *)(param_1 + 0x30);
      uVar2 = 0xffffffff;
      if (lVar1 < 0x80000000) {
        uVar2 = *(undefined4 *)(param_1 + 0x38);
      }
    }
    else {
      **(undefined4 **)(param_1 + 0x18) = 0;
      uVar2 = 0xffffffff;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = uVar2;
    local_1c = 0;
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    local_38 = 0x10;
    local_30 = &local_1c;
    FUN_14250eb20(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                  *(longlong *)(param_1 + 0x20) + -0xf,*(longlong *)(param_1 + 0x20),
                  *(longlong *)(param_1 + 0x18) + 8);
    local_38 = 0x10;
    local_30 = &local_1c;
    FUN_14250eb20(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),*(longlong *)(param_1 + 0x20),
                  *(longlong *)(param_1 + 0x20) + 0xf,*(longlong *)(param_1 + 0x18) + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14251b2c0 FUN_14251b2c0 body=102 status=ok
// SIG undefined FUN_14251b2c0(void)

int FUN_14251b2c0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    uVar2 = 0x10300;
    iVar3 = 0;
    if (0xfffffeff < param_2 - 0x101U) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x80);
      iVar3 = 0;
      if (-1 < iVar1) {
        *(int *)(*(longlong *)(param_1 + 0x10) + 0x80) = param_2 + iVar1;
        uVar2 = 0x10314;
        iVar3 = iVar1;
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x80) < 0xfffff0) {
          return iVar1;
        }
      }
    }
    FUN_14251b1c0(param_1,uVar2);
  }
  return iVar3;
}



// FUNCTION 14251b330 FUN_14251b330 body=623 status=ok
// SIG undefined FUN_14251b330(void)

void FUN_14251b330(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined **local_a0;
  undefined2 local_98;
  undefined1 local_60 [8];
  int local_58;
  int local_54;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (**(int **)(param_1 + 8) < 1) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8);
    FUN_142517d70(local_60,iVar1);
    iVar8 = 0;
    uVar10 = 0;
    while (iVar9 = (int)uVar10, iVar9 < iVar1) {
      if (((-2 < local_58) && (local_58 < local_54)) ||
         (cVar4 = FUN_1425182c0(local_60,local_58 + 1,*(undefined8 *)(param_1 + 8)), cVar4 != '\0'))
      {
        *(int *)(local_48 + (longlong)local_58 * 4) = iVar8;
        local_58 = local_58 + 1;
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar9 < *(int *)(lVar2 + 8)) {
        uVar7 = (uint)*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + uVar10 * 8);
      }
      else {
        uVar7 = 0;
      }
      iVar8 = iVar8 + (uint)((uVar7 & 0xff000000) == 0x7000000);
      uVar10 = (ulonglong)(iVar9 + 1);
    }
    local_a0 = &PTR_FUN_149e18960;
    local_98 = 2;
    iVar8 = 0;
    uVar7 = 0;
    while( true ) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      if (iVar1 <= (int)uVar7) break;
      if ((int)uVar7 < *(int *)(lVar2 + 8)) {
        uVar10 = *(ulonglong *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar7 * 8);
        uVar5 = (uint)uVar10;
        switch(uVar10 >> 0x18 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0x10:
        case 0x11:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1e:
        case 0x20:
        case 0x21:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0xff:
          goto switchD_14251b45d_caseD_0;
        case 6:
        case 0xd:
        case 0xf:
        case 0x12:
        case 0x1c:
        case 0x1d:
        case 0x1f:
        case 0x24:
          uVar6 = 0;
          iVar9 = 0;
          if ((0 < local_58) && ((int)(uVar5 & 0xffffff) < local_58)) {
            iVar9 = *(int *)(local_48 + (ulonglong)(uVar5 & 0xffffff) * 4);
          }
          if (**(int **)(param_1 + 8) < 1) {
            uVar6 = (uVar5 & 0xffffff) - iVar9;
            if ((0xffffff < (int)uVar6) || ((int)uVar6 < 0)) goto switchD_14251b45d_caseD_3b;
            uVar6 = uVar5 & 0xff000000 | uVar6;
          }
          FUN_14250e0c0(lVar2,(longlong)(int)uVar6,iVar8);
          iVar8 = iVar8 + 1;
          uVar7 = uVar7 + 1;
          break;
        case 7:
switchD_14251b45d_caseD_7:
          uVar7 = uVar7 + 1;
          break;
        case 0x22:
        case 0x29:
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88);
          iVar9 = *(int *)(lVar3 + 8);
          if ((int)(uVar5 & 0xffffff) <= iVar9) {
            if (((uVar10 & 0xffffff) == 0) || (iVar9 < 1)) {
              uVar6 = 0;
              if (**(int **)(param_1 + 8) < 1) goto LAB_14251b560;
            }
            else {
              uVar6 = 0;
              if (**(int **)(param_1 + 8) < 1) {
                uVar6 = *(uint *)(*(longlong *)(lVar3 + 0x18) +
                                 (ulonglong)((uVar5 & 0xffffff) - 1) * 4);
                if ((0xffffff < (int)uVar6) || ((int)uVar6 < 0)) goto switchD_14251b45d_caseD_3b;
LAB_14251b560:
                uVar6 = uVar5 & 0xff000000 | uVar6;
              }
            }
            FUN_14250e0c0(lVar2,(longlong)(int)uVar6,iVar8);
            iVar8 = iVar8 + 1;
            *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 200) = 1;
            goto switchD_14251b45d_caseD_7;
          }
          FUN_14251b1c0(param_1,0x1030a);
          uVar7 = uVar7 + 1;
          break;
        default:
switchD_14251b45d_caseD_3b:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        uVar5 = 0;
switchD_14251b45d_caseD_0:
        FUN_14250e0c0(lVar2,(longlong)(int)uVar5,iVar8);
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 + 1;
      }
    }
    FUN_14250dfa0(lVar2,iVar8);
    FUN_140859a90(&local_a0);
    FUN_142517df0(local_60);
  }
  return;
}



// FUNCTION 14251b5c0 Unwind@14251b5c0 body=51 status=ok
// SIG undefined Unwind@14251b5c0(void)

void Unwind_14251b5c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14251b600 Unwind@14251b600 body=51 status=ok
// SIG undefined Unwind@14251b600(void)

void Unwind_14251b600(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x68);
  return;
}



// FUNCTION 14251b640 FUN_14251b640 body=944 status=ok
// SIG undefined FUN_14251b640(void)

uint FUN_14251b640(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_68 [8];
  int local_60;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar11 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    FUN_142517d70(local_68,param_3 + 2);
    FUN_142518020(local_68,param_3 + 2);
    uVar1 = param_3 + 1;
    for (uVar11 = param_2; (int)uVar11 <= (int)uVar1; uVar11 = uVar11 + 1) {
      FUN_142518140(local_68,0x7fffffff,uVar11);
    }
    uVar11 = 0;
    while( true ) {
      uVar6 = (ulonglong)param_2;
      if (param_3 < (int)param_2) break;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      iVar4 = *(int *)(lVar5 + 8);
      if (((int)param_2 < 0) || (iVar4 <= (int)param_2)) {
        uVar8 = 0;
        uVar7 = 0;
        if (-1 < (int)param_2) goto LAB_14251b72d;
        uVar11 = (int)uVar11 >> 0x1f & uVar11;
        goto switchD_14251b79b_caseD_0;
      }
      uVar7 = *(uint *)(*(longlong *)(lVar5 + 0x18) + uVar6 * 8);
      uVar8 = uVar7 >> 0x18;
LAB_14251b72d:
      if ((local_60 < 1) || (local_60 <= (int)param_2)) {
        uVar3 = uVar11;
        if (-1 < (int)uVar11) {
          uVar3 = 0;
        }
        uVar12 = uVar3;
        if (0 < (int)uVar11) {
          uVar12 = 0;
        }
        if ((int)param_2 < 0) {
          uVar12 = uVar3;
        }
      }
      else {
        iVar10 = *(int *)(local_50 + uVar6 * 4);
        uVar12 = uVar11;
        if (iVar10 < (int)uVar11) {
          uVar12 = 0;
        }
        if ((-1 < (int)param_2) && (iVar10 < (int)uVar11)) {
          uVar12 = *(uint *)(local_50 + uVar6 * 4);
        }
      }
      uVar11 = uVar12;
      switch(uVar8) {
      case 0:
      case 2:
      case 5:
      case 7:
      case 8:
      case 9:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x26:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
        break;
      case 1:
        goto switchD_14251b79b_caseD_1;
      case 4:
        param_2 = param_2 + 1;
        if ((int)param_2 < iVar4) {
          uVar7 = (uint)*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)param_2 * 8);
        }
        else {
          uVar7 = 0;
        }
        uVar11 = (uVar7 & 0xffffff) + uVar12;
        if ((uVar12 ^ 0x7fffffff) <= (uVar7 & 0xffffff)) {
          uVar11 = 0x7fffffff;
        }
        break;
      case 6:
        uVar7 = uVar7 & 0xffffff;
        if (param_2 < uVar7) {
          iVar4 = 0;
          if ((0 < local_60) && ((int)uVar7 < local_60)) {
            iVar4 = *(int *)(local_50 + (ulonglong)uVar7 * 4);
          }
          if ((int)uVar12 < iVar4) {
            FUN_142518140(local_68,uVar12);
          }
        }
        break;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x19:
      case 0x1a:
        if ((int)(param_2 + 1) < iVar4) {
          uVar7 = (uint)*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)(param_2 + 1) * 8);
        }
        else {
          uVar7 = 0;
        }
        if ((int)(param_2 + 2) < iVar4) {
          iVar4 = *(int *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)(param_2 + 2) * 8);
        }
        else {
          iVar4 = 0;
        }
        param_2 = param_2 + 3;
        if (iVar4 == 0) {
          param_2 = uVar7 & 0xffffff;
        }
        break;
      case 0x24:
        param_2 = param_2 + 1;
      case 0xd:
        uVar7 = uVar7 & 0xffffff;
        if (uVar7 < param_2) {
switchD_14251b79b_caseD_1:
          uVar11 = 0;
          if ((0 < local_60) && ((int)(param_2 + 1) < local_60)) {
            uVar11 = *(uint *)(local_50 + (ulonglong)(param_2 + 1) * 4);
          }
        }
        else {
          iVar4 = 0;
          if ((0 < local_60) && ((int)uVar7 < local_60)) {
            iVar4 = *(int *)(local_50 + (ulonglong)uVar7 * 4);
          }
          if ((int)uVar12 < iVar4) {
            FUN_142518140(local_68,uVar12);
          }
        }
        break;
      case 0x25:
      case 0x2c:
        iVar10 = (uVar8 == 0x25) + 1;
        do {
          do {
            do {
              while( true ) {
                do {
                  do {
                    iVar9 = (int)uVar6;
                    param_2 = iVar9 + 1;
                    uVar6 = (ulonglong)param_2;
                  } while (iVar9 < -1);
                } while (iVar4 <= (int)param_2);
                uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)param_2 * 8);
                uVar8 = (uint)uVar2;
                uVar7 = (uint)((ulonglong)uVar2 >> 0x18) & 0xff;
                iVar9 = iVar10 + 2;
                if (uVar7 != 0x25) {
                  iVar9 = iVar10;
                }
                iVar10 = (uint)(uVar7 == 0x2c) + iVar9;
                if (uVar7 == 6) break;
                if (((uVar7 == 0x30) || (uVar7 == 0x26)) && (iVar10 = iVar10 + -1, iVar10 == 0))
                goto switchD_14251b79b_caseD_0;
              }
              uVar7 = uVar8 & 0xffffff;
            } while (uVar7 <= param_2);
            iVar9 = 0;
            if ((0 < local_60) && ((int)uVar7 < local_60)) {
              iVar9 = *(int *)(local_50 + (ulonglong)(uVar8 & 0xffffff) * 4);
            }
          } while (iVar9 <= (int)uVar12);
          FUN_142518140(local_68,uVar12);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
          iVar4 = *(int *)(lVar5 + 8);
        } while( true );
      case 0x28:
        param_2 = param_2 + 1;
      case 3:
      case 10:
      case 0xb:
      case 0xc:
      case 0x13:
      case 0x15:
      case 0x16:
      case 0x1b:
      case 0x27:
      case 0x31:
      case 0x38:
      case 0x39:
      case 0x3a:
        uVar11 = uVar12 + 1;
        if ((uVar12 & 0xfffffffe) == 0x7ffffffe) {
          uVar11 = 0x7fffffff;
        }
      }
switchD_14251b79b_caseD_0:
      param_2 = param_2 + 1;
    }
    if (((param_3 < -1) || (local_60 < 1)) || (local_60 <= (int)uVar1)) {
      uVar11 = uVar11 & (int)uVar11 >> 0x1f;
    }
    else if (*(int *)(local_50 + (ulonglong)uVar1 * 4) < (int)uVar11) {
      uVar11 = *(uint *)(local_50 + (ulonglong)uVar1 * 4);
    }
    FUN_142517df0(local_68);
  }
  return uVar11;
}



// FUNCTION 14251ba00 Unwind@14251ba00 body=52 status=ok
// SIG undefined Unwind@14251ba00(void)

void Unwind_14251ba00(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x20);
  return;
}



// FUNCTION 14251ba40 FUN_14251ba40 body=2453 status=ok
// SIG undefined FUN_14251ba40(void)

void FUN_14251ba40(longlong param_1)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_140 [200];
  longlong local_78;
  undefined1 local_70 [8];
  int local_68;
  longlong local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < **(int **)(param_1 + 8)) {
    return;
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8);
  FUN_142517d70(local_70,iVar6 + 1);
  uVar7 = FUN_142518020(local_70,iVar6 + 1);
  iVar11 = 3;
  if (3 < iVar6) {
    do {
      uVar7 = FUN_142518140(local_70,0x7fffffff);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
  }
  local_4c = (int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  local_50 = 0;
  uVar12 = 0;
  for (uVar18 = 3; lVar8 = *(longlong *)(param_1 + 0x10), (int)uVar18 < iVar6; uVar18 = uVar18 + 1)
  {
    lVar9 = *(longlong *)(lVar8 + 0x20);
    iVar11 = *(int *)(lVar9 + 8);
    if (((int)uVar18 < 0) || (iVar11 <= (int)uVar18)) {
      if (-1 < (int)uVar18) {
        uVar16 = 0;
        uVar17 = 0;
        goto LAB_14251bb3e;
      }
      uVar12 = (int)uVar12 >> 0x1f & uVar12;
      goto switchD_14251bbf6_caseD_0;
    }
    uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)uVar18 * 8);
    uVar16 = uVar17 >> 0x18 & 0xff;
LAB_14251bb3e:
    if ((local_68 < 1) || (local_68 <= (int)uVar18)) {
      uVar4 = uVar12;
      if (-1 < (int)uVar12) {
        uVar4 = 0;
      }
      uVar14 = uVar4;
      if (0 < (int)uVar12) {
        uVar14 = 0;
      }
      if ((int)uVar18 < 0) {
        uVar14 = uVar4;
      }
    }
    else {
      iVar10 = *(int *)(local_58 + (ulonglong)uVar18 * 4);
      uVar14 = uVar12;
      if (iVar10 < (int)uVar12) {
        uVar14 = 0;
      }
      local_78 = lVar8;
      if ((-1 < (int)uVar18) && (iVar10 < (int)uVar12)) {
        uVar14 = *(uint *)(local_58 + (ulonglong)uVar18 * 4);
      }
    }
    uVar12 = uVar14;
    if (0x3a < (byte)uVar16) {
switchD_14251bbf6_caseD_26:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = (uint)uVar17;
    switch(uVar16) {
    default:
      goto switchD_14251bbf6_caseD_0;
    case 1:
      goto switchD_14251bbf6_caseD_1;
    case 3:
      if (uVar12 == 0) {
        FUN_142513960(*(undefined8 *)(lVar8 + 0xb0));
LAB_14251c288:
        local_50 = local_50 + 2;
      }
      break;
    case 4:
      if ((int)(uVar18 + 1) < iVar11) {
        uVar14 = (uint)*(undefined8 *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(uVar18 + 1) * 8);
      }
      else {
        uVar14 = 0;
      }
      uVar14 = uVar14 & 0xffffff;
      if (uVar12 == 0) {
        FUN_1424a8030(lVar8 + 0x28);
        FUN_142513960(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        local_50 = local_50 + 1;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0xa4) = uVar4 & 0xffffff;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0xa8) = uVar14;
      }
      goto LAB_14251c251;
    case 6:
      uVar4 = uVar4 & 0xffffff;
      local_4c = 0;
      if (uVar18 < uVar4) {
        if ((0 < local_68) && ((int)uVar4 < local_68)) {
          local_4c = *(int *)(local_58 + (ulonglong)uVar4 * 4);
        }
        if ((int)uVar12 < local_4c) {
          FUN_142518140(local_70,uVar12,(ulonglong)uVar4);
        }
        goto switchD_14251bbf6_caseD_f;
      }
      goto switchD_14251bbf6_caseD_0;
    case 10:
      if (uVar12 == 0) {
        FUN_142513300(*(undefined8 *)(lVar8 + 0xb0));
        goto LAB_14251c288;
      }
      break;
    case 0xb:
      if (uVar12 == 0) {
        FUN_142516630(*(undefined8 *)(lVar8 + 0x68),uVar4 & 0xffffff);
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c288;
      }
      break;
    case 0xc:
    case 0x13:
    case 0x15:
    case 0x1b:
      if (uVar12 == 0) {
        FUN_142513500(*(undefined8 *)(lVar8 + 0xb0));
        FUN_1425146a0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c288;
      }
      break;
    case 0xd:
      goto switchD_14251bbf6_caseD_d;
    case 0xf:
    case 0x12:
    case 0x1c:
    case 0x1d:
    case 0x33:
      goto switchD_14251bbf6_caseD_f;
    case 0x16:
      if (uVar12 == 0) {
        FUN_142511900(local_140);
        FUN_1425c6e50(local_140,0x2000,0x200,*(undefined8 *)(param_1 + 8));
        if ((uVar17 & 0xffffff) != 0) {
          FUN_1425146a0(local_140);
        }
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
LAB_14251c0f8:
        local_50 = local_50 + 2;
        FUN_1425121d0(local_140);
      }
      break;
    case 0x17:
      if ((char)local_4c == '\0') goto switchD_14251bbf6_caseD_f;
      *(undefined4 *)(lVar8 + 0xa0) = 3;
LAB_14251bf05:
      local_4c = (int)CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),1);
      goto switchD_14251bbf6_caseD_0;
    case 0x19:
    case 0x1a:
      if ((int)(uVar18 + 1) < iVar11) {
        uVar4 = (uint)*(undefined8 *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(uVar18 + 1) * 8);
      }
      else {
        uVar4 = 0;
      }
      if ((iVar11 <= (int)(uVar18 + 2)) ||
         (*(int *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(uVar18 + 2) * 8) == 0)) {
        iVar11 = 0;
        if ((0 < local_68) && (iVar11 = 0, (int)(uVar4 & 0xffffff) < local_68)) {
          iVar11 = *(int *)(local_58 + (ulonglong)(uVar4 & 0xffffff) * 4);
        }
        if ((int)uVar12 < iVar11) {
          FUN_142518140(local_70);
        }
      }
      uVar18 = uVar18 + 3;
      goto switchD_14251bbf6_caseD_f;
    case 0x1e:
    case 0x2b:
      if ((char)local_4c != '\0') {
        *(undefined4 *)(lVar8 + 0xa0) = 4;
        goto LAB_14251bf05;
      }
      goto switchD_14251bbf6_caseD_f;
    case 0x24:
      uVar18 = uVar18 + 1;
switchD_14251bbf6_caseD_d:
      uVar4 = uVar4 & 0xffffff;
      if (uVar18 <= uVar4) {
        iVar11 = 0;
        if ((0 < local_68) && (iVar11 = 0, (int)uVar4 < local_68)) {
          iVar11 = *(int *)(local_58 + (ulonglong)uVar4 * 4);
        }
        if ((int)uVar12 < iVar11) {
          FUN_142518140(local_70,uVar12,(ulonglong)uVar4);
        }
        goto switchD_14251bbf6_caseD_f;
      }
switchD_14251bbf6_caseD_1:
      local_4c = 0;
      if ((local_68 < 1) || (local_68 <= (int)(uVar18 + 1))) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(uint *)(local_58 + (ulonglong)(uVar18 + 1) * 4);
        local_4c = 0;
      }
      goto switchD_14251bbf6_caseD_0;
    case 0x25:
    case 0x2c:
      iVar10 = ((int)uVar16 == 0x25) + 1;
      do {
        uVar4 = uVar18;
        do {
          do {
            while( true ) {
              do {
                do {
                  uVar18 = uVar4 + 1;
                  bVar2 = (int)uVar4 < -1;
                  uVar4 = uVar18;
                } while (bVar2);
              } while (iVar11 <= (int)uVar18);
              uVar7 = *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)uVar18 * 8);
              uVar13 = (uint)uVar7;
              uVar14 = (uint)((ulonglong)uVar7 >> 0x18) & 0xff;
              iVar15 = iVar10 + 2;
              if (uVar14 != 0x25) {
                iVar15 = iVar10;
              }
              iVar10 = (uint)(uVar14 == 0x2c) + iVar15;
              if (uVar14 == 6) break;
              if (((uVar14 == 0x30) || (uVar14 == 0x26)) && (iVar10 = iVar10 + -1, iVar10 == 0))
              goto switchD_14251bbf6_caseD_0;
            }
            uVar14 = uVar13 & 0xffffff;
          } while (uVar14 <= uVar18);
          iVar15 = 0;
          if ((0 < local_68) && (iVar15 = 0, (int)uVar14 < local_68)) {
            iVar15 = *(int *)(local_58 + (ulonglong)(uVar13 & 0xffffff) * 4);
          }
        } while (iVar15 <= (int)uVar12);
        FUN_142518140(local_70,uVar12);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
        iVar11 = *(int *)(lVar9 + 8);
      } while( true );
    case 0x26:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
      goto switchD_14251bbf6_caseD_26;
    case 0x27:
      if (uVar12 == 0) {
        uVar4 = uVar4 & 0xffffff;
        cVar3 = FUN_142516e20(uVar4,0x22);
        if (cVar3 == '\0') {
          FUN_142513960(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        }
        else {
          FUN_142511960(local_140,uVar4,uVar4);
          FUN_1425d73f0(local_140,2);
          FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
          FUN_1425121d0(local_140);
        }
        goto LAB_14251c288;
      }
      break;
    case 0x28:
      if ((int)(uVar18 + 1) < iVar11) {
        uVar14 = (uint)*(undefined8 *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(uVar18 + 1) * 8);
      }
      else {
        uVar14 = 0;
      }
      if (uVar12 == 0) {
        uVar5 = FUN_1424a8030(lVar8 + 0x28,uVar4 & 0xffffff);
        FUN_142511900(local_140);
        FUN_14251e260(uVar5,local_140);
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        local_50 = local_50 + 2;
        FUN_1425121d0(local_140);
      }
      uVar14 = uVar14 & 0xffffff;
LAB_14251c251:
      uVar18 = uVar18 + 1;
      uVar4 = uVar14 + uVar12;
      uVar13 = uVar12 ^ 0x7fffffff;
      uVar12 = 0x7fffffff;
      if (uVar14 < uVar13) {
        uVar12 = uVar4;
      }
      local_4c = 0;
      goto switchD_14251bbf6_caseD_0;
    case 0x31:
      if (uVar12 == 0) {
        FUN_142511b90(local_140,
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 0x90) + (ulonglong)(uVar4 & 0xffffff) * 8));
        FUN_1425146a0(local_140);
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c0f8;
      }
      break;
    case 0x32:
      if (uVar12 != 0) goto switchD_14251bbf6_caseD_f;
      FUN_142516630(*(undefined8 *)(lVar8 + 0x68),uVar4 & 0xffffff);
      FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
LAB_14251c083:
      local_50 = local_50 + 2;
      local_4c = 0;
      uVar12 = 0;
      goto switchD_14251bbf6_caseD_0;
    case 0x34:
      if (uVar12 == 0) {
        FUN_142513500(*(undefined8 *)(lVar8 + 0xb0));
        FUN_1425146a0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c083;
      }
switchD_14251bbf6_caseD_f:
      local_4c = 0;
      goto switchD_14251bbf6_caseD_0;
    case 0x38:
      if (uVar12 == 0) {
        FUN_142511900(local_140);
        FUN_1425c6e50(local_140,0x2000,0x1000,*(undefined8 *)(param_1 + 8));
        FUN_142513960(local_140,9);
        if ((uVar17 & 0xffffff) != 0) {
          FUN_1425146a0(local_140);
        }
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c0f8;
      }
      break;
    case 0x39:
    case 0x3a:
      if (uVar12 == 0) {
        FUN_142511900(local_140);
        FUN_142511a00(local_140,10,0xd);
        FUN_142513960(local_140,0x85);
        FUN_142511a00(local_140,0x2028,0x2029);
        if ((uVar17 & 0xffffff) != 0) {
          FUN_1425146a0(local_140);
        }
        FUN_142513300(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0));
        goto LAB_14251c0f8;
      }
    }
    uVar4 = uVar12 & 0xfffffffe;
    uVar12 = uVar12 + 1;
    if (uVar4 == 0x7ffffffe) {
      uVar12 = 0x7fffffff;
    }
    local_4c = 0;
switchD_14251bbf6_caseD_0:
  }
  lVar9 = *(longlong *)(lVar8 + 0xb0);
  if (lVar9 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xc0);
    uVar12 = 0;
    do {
      cVar3 = FUN_142512880(lVar9,uVar12);
      if (cVar3 != '\0') {
        pbVar1 = (byte *)(lVar8 + (ulonglong)(uVar12 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar12 & 7));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x100);
    lVar8 = *(longlong *)(param_1 + 0x10);
  }
  if (*(int *)(lVar8 + 0xa0) == 3) goto LAB_14251c3ae;
  if ((local_50 == 1) && (0 < *(int *)(lVar8 + 0x7c))) {
    uVar5 = FUN_1424a8030(lVar8 + 0x28,*(undefined4 *)(lVar8 + 0xa4));
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa0) = 5;
LAB_14251c37c:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xb8) = uVar5;
  }
  else {
    if (*(int *)(lVar8 + 0xa0) == 4) goto LAB_14251c3ae;
    if (*(int *)(lVar8 + 0x7c) != 0) {
      iVar6 = FUN_142512720(*(undefined8 *)(lVar8 + 0xb0));
      if (iVar6 == 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa0) = 1;
        uVar5 = FUN_142513390(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0),0);
        goto LAB_14251c37c;
      }
      cVar3 = FUN_142512900(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb0),0,0x10ffff);
      lVar8 = *(longlong *)(param_1 + 0x10);
      if ((cVar3 == '\0') && (0 < *(int *)(lVar8 + 0x7c))) {
        *(undefined4 *)(lVar8 + 0xa0) = 2;
        goto LAB_14251c3ae;
      }
    }
    *(undefined4 *)(lVar8 + 0xa0) = 0;
  }
LAB_14251c3ae:
  FUN_142517df0(local_70);
  return;
}



// FUNCTION 14251c3f0 Unwind@14251c3f0 body=55 status=ok
// SIG undefined Unwind@14251c3f0(void)

void Unwind_14251c3f0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c430 Unwind@14251c430 body=55 status=ok
// SIG undefined Unwind@14251c430(void)

void Unwind_14251c430(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c470 Unwind@14251c470 body=55 status=ok
// SIG undefined Unwind@14251c470(void)

void Unwind_14251c470(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c4b0 Unwind@14251c4b0 body=55 status=ok
// SIG undefined Unwind@14251c4b0(void)

void Unwind_14251c4b0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c4f0 Unwind@14251c4f0 body=55 status=ok
// SIG undefined Unwind@14251c4f0(void)

void Unwind_14251c4f0(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c530 Unwind@14251c530 body=55 status=ok
// SIG undefined Unwind@14251c530(void)

void Unwind_14251c530(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251c570 Unwind@14251c570 body=55 status=ok
// SIG undefined Unwind@14251c570(void)

void Unwind_14251c570(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0xf8);
  return;
}



// FUNCTION 14251c5b0 FUN_14251c5b0 body=216 status=ok
// SIG undefined FUN_14251c5b0(void)

void FUN_14251c5b0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (0 < **(int **)(param_1 + 8)) {
    return;
  }
  if (((0xff < param_2) || (0xffffff < (int)param_3)) ||
     (((int)param_3 < 0 &&
      (((param_2 != 0 && (param_2 != 0xff)) || (param_2 = 0xff, param_3 < 0xff000000)))))) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar3 = *(int *)(lVar1 + 8);
  if ((iVar3 < -1) || (*(int *)(lVar1 + 0xc) <= iVar3)) {
    cVar2 = FUN_14250e240(lVar1,iVar3 + 1);
    if (cVar2 == '\0') goto LAB_14251c648;
    iVar3 = *(int *)(lVar1 + 8);
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar3 * 8) =
       (longlong)(int)(param_2 << 0x18 | param_3);
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
LAB_14251c648:
  if ((0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) &&
     (**(int **)(param_1 + 8) < 1)) {
    FUN_14251b1c0(param_1,0x10314);
    return;
  }
  return;
}



// FUNCTION 14251c690 FUN_14251c690 body=1123 status=ok
// SIG undefined FUN_14251c690(void)

void FUN_14251c690(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x180) < 1) {
    FUN_14251b1c0(param_1,0x10306);
    return;
  }
  FUN_14251cb00(param_1,0);
  do {
    uVar9 = *(uint *)(param_1 + 0x180);
    uVar8 = 0;
    if (0 < (int)uVar9) {
      *(uint *)(param_1 + 0x180) = uVar9 - 1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 400) + (ulonglong)(uVar9 - 1) * 4);
      uVar8 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) break;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if ((int)uVar8 < (int)*(uint *)(lVar4 + 8)) {
      uVar9 = (uint)*(undefined8 *)(*(longlong *)(lVar4 + 0x18) + uVar8 * 8);
    }
    else {
      uVar9 = 0;
    }
    FUN_14250e0c0(lVar4,(longlong)(int)(*(uint *)(lVar4 + 8) | uVar9));
    *(int *)(param_1 + 0x198) = (int)uVar8;
  } while( true );
  uVar5 = 0;
  if (1 < uVar9) {
    *(uint *)(param_1 + 0x180) = uVar9 - 2;
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 400) + (ulonglong)(uVar9 - 2) * 4);
  }
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  switch(uVar3) {
  case 0xfffffff8:
    uVar9 = 0;
    if (4 < *(int *)(param_1 + 0x198)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar3 = *(int *)(param_1 + 0x198) - 5;
      if ((int)uVar3 < *(int *)(lVar4 + 8)) {
        uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar3 * 8) & 0xffffff;
      }
    }
    FUN_14251c5b0(param_1,0x30,uVar9);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1;
    iVar2 = FUN_14251b640(param_1,*(undefined4 *)(param_1 + 0x198),iVar7);
    uVar9 = FUN_14251de80(param_1,*(undefined4 *)(param_1 + 0x198),iVar7);
    if (0xffffff < uVar9) {
LAB_14251cab4:
      FUN_14251b1c0(param_1,0x1030c);
      break;
    }
    uVar8 = 0;
    uVar6 = (longlong)iVar2;
    if (iVar2 == 0x7fffffff && uVar9 == 0) {
      uVar6 = uVar8;
    }
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar6,
                  *(int *)(param_1 + 0x198) + -3);
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar9,
                  *(int *)(param_1 + 0x198) + -2);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    if (**(int **)(param_1 + 8) < 1) {
      uVar9 = *(uint *)(lVar4 + 8);
      if ((0xffffff < (int)uVar9) || ((int)uVar9 < 0)) goto switchD_14251c74a_default;
      uVar8 = (ulonglong)uVar9 | 0x1f000000;
    }
    iVar2 = *(int *)(param_1 + 0x198) + -1;
    goto LAB_14251cada;
  case 0xfffffff9:
    uVar9 = 0;
    if (3 < *(int *)(param_1 + 0x198)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar3 = *(int *)(param_1 + 0x198) - 4;
      uVar9 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 8)) {
        uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar3 * 8) & 0xffffff;
      }
    }
    FUN_14251c5b0(param_1,0x2e,uVar9);
    FUN_14251c5b0(param_1,0x26,uVar9);
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8) + -1;
    iVar2 = FUN_14251b640(param_1,*(undefined4 *)(param_1 + 0x198),iVar7);
    uVar9 = FUN_14251de80(param_1,*(undefined4 *)(param_1 + 0x198),iVar7);
    if (0xffffff < uVar9) goto LAB_14251cab4;
    lVar4 = 0;
    if (iVar2 != 0x7fffffff || uVar9 != 0) {
      lVar4 = (longlong)iVar2;
    }
    FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),lVar4,
                  *(int *)(param_1 + 0x198) + -2);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar2 = *(int *)(param_1 + 0x198) + -1;
    uVar8 = (ulonglong)uVar9;
    goto LAB_14251cada;
  case 0xfffffffa:
  case 0xffffffff:
    break;
  case 0xfffffffb:
    iVar2 = *(int *)(param_1 + 0x198);
    uVar9 = 0;
    if ((0 < iVar2) &&
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), iVar2 <= *(int *)(lVar4 + 8)))
    {
      uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)(iVar2 - 1) * 8) & 0xffffff;
    }
    FUN_14251c5b0(param_1,0x26,uVar9);
    if (**(int **)(param_1 + 8) < 1) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      iVar2 = *(int *)(lVar4 + 8);
      if ((iVar2 < -1) || (*(int *)(lVar4 + 0xc) <= iVar2)) {
        cVar1 = FUN_14250e240(lVar4,iVar2 + 1);
        if (cVar1 != '\0') {
          iVar2 = *(int *)(lVar4 + 8);
          goto LAB_14251c990;
        }
      }
      else {
LAB_14251c990:
        *(undefined8 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar2 * 8) = 0x1000000;
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      if ((0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) &&
         (**(int **)(param_1 + 8) < 1)) {
        FUN_14251b1c0(param_1,0x10314);
      }
    }
    FUN_14251c5b0(param_1,0x26,uVar9);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar2 = *(int *)(param_1 + 0x198);
    if (**(int **)(param_1 + 8) < 1) {
      iVar7 = *(int *)(lVar4 + 8);
      if ((0x1000000 < iVar7) || (iVar7 < 1)) {
switchD_14251c74a_default:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar8 = (ulonglong)(iVar7 - 1U | 0x6000000);
    }
    else {
      uVar8 = 0;
    }
LAB_14251cada:
    FUN_14250e0c0(lVar4,uVar8,iVar2);
    break;
  case 0xfffffffc:
    uVar9 = 0;
    if (4 < *(int *)(param_1 + 0x198)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar3 = *(int *)(param_1 + 0x198) - 5;
      if ((int)uVar3 < *(int *)(lVar4 + 8)) {
        uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar3 * 8) & 0xffffff;
      }
    }
    FUN_14251c5b0(param_1,0x26,uVar9);
    break;
  case 0xfffffffd:
    uVar9 = 0;
    if (-2 < *(int *)(param_1 + 0x198)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar3 = *(int *)(param_1 + 0x198) + 1;
      if ((int)uVar3 < *(int *)(lVar4 + 8)) {
        uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar3 * 8) & 0xffffff;
      }
    }
    FUN_14251c5b0(param_1,0x21,uVar9);
    break;
  case 0xfffffffe:
    uVar9 = 0;
    if (-2 < *(int *)(param_1 + 0x198)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      uVar3 = *(int *)(param_1 + 0x198) + 1;
      if ((int)uVar3 < *(int *)(lVar4 + 8)) {
        uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x18) + (ulonglong)uVar3 * 8) & 0xffffff;
      }
    }
    FUN_14251c5b0(param_1,9,uVar9);
    break;
  default:
    goto switchD_14251c74a_default;
  }
  *(undefined4 *)(param_1 + 0x19c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8);
  return;
}



// FUNCTION 14251cb00 FUN_14251cb00 body=654 status=ok
// SIG undefined FUN_14251cb00(void)

void FUN_14251cb00(longlong param_1,char param_2)

{
  longlong lVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  
  if (*(short *)(param_1 + 0x138) < 0) {
    iVar9 = *(int *)(param_1 + 0x13c);
  }
  else {
    iVar9 = (int)*(short *)(param_1 + 0x138) >> 5;
  }
  if (iVar9 != 0) {
    lVar1 = param_1 + 0x130;
    uVar5 = FUN_1424a81b0(lVar1,iVar9,0xffffffff);
    uVar6 = FUN_1424a8030(lVar1,uVar5);
    if (param_2 != '\0') {
      uVar4 = *(ushort *)(param_1 + 0x138);
      if ((uVar5 == 0) && ((uVar4 & 1) != 0)) {
        FUN_1424a8e40(lVar1);
      }
      else {
        if ((short)uVar4 < 0) {
          uVar7 = *(uint *)(param_1 + 0x13c);
        }
        else {
          uVar7 = (int)(short)uVar4 >> 5;
        }
        if (uVar5 < uVar7) {
          if ((int)uVar5 < 0x400) {
            *(ushort *)(param_1 + 0x138) = (ushort)(uVar5 << 5) | uVar4 & 0x1f;
          }
          else {
            *(ushort *)(param_1 + 0x138) = uVar4 | 0xffe0;
            *(uint *)(param_1 + 0x13c) = uVar5;
          }
        }
      }
      FUN_14251cb00(param_1,0);
      FUN_1424a7d60(lVar1,uVar6);
      if (*(short *)(param_1 + 0x138) < 0) {
        iVar9 = *(int *)(param_1 + 0x13c);
      }
      else {
        iVar9 = (int)*(short *)(param_1 + 0x138) >> 5;
      }
      if (iVar9 == 0) {
        return;
      }
      uVar5 = FUN_1424a81b0(lVar1,iVar9,0xffffffff);
      uVar6 = FUN_1424a8030(lVar1,uVar5);
    }
    if ((*(byte *)(param_1 + 0x124) & 2) != 0) {
      FUN_14257efe0(lVar1,0);
      if (*(short *)(param_1 + 0x138) < 0) {
        iVar9 = *(int *)(param_1 + 0x13c);
      }
      else {
        iVar9 = (int)*(short *)(param_1 + 0x138) >> 5;
      }
      uVar5 = FUN_1424a81b0(lVar1,iVar9,0xffffffff);
      uVar6 = FUN_1424a8030(lVar1,uVar5);
    }
    if (uVar5 == 0) {
      if (((*(byte *)(param_1 + 0x124) & 2) == 0) ||
         (cVar3 = FUN_142516e20(uVar6,0x22), cVar3 == '\0')) {
        uVar8 = 3;
      }
      else {
        uVar8 = 0x27;
      }
      FUN_14251c5b0(param_1,uVar8,uVar6);
    }
    else {
      if (((*(short *)(param_1 + 0x138) < 0) && (0xffffff < *(int *)(param_1 + 0x13c))) ||
         ((*(short *)(*(longlong *)(param_1 + 0x10) + 0x30) < 0 &&
          (0xffffff < *(int *)(*(longlong *)(param_1 + 0x10) + 0x34))))) {
        FUN_14251b1c0(param_1,0x10314);
      }
      sVar2 = *(short *)(*(longlong *)(param_1 + 0x10) + 0x30);
      if (sVar2 < 0) {
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x34);
      }
      else {
        iVar9 = (int)sVar2 >> 5;
      }
      uVar8 = 0x28;
      if ((*(byte *)(param_1 + 0x124) & 2) == 0) {
        uVar8 = 4;
      }
      FUN_14251c5b0(param_1,uVar8,iVar9);
      if (*(short *)(param_1 + 0x138) < 0) {
        iVar9 = *(int *)(param_1 + 0x13c);
      }
      else {
        iVar9 = (int)*(short *)(param_1 + 0x138) >> 5;
      }
      FUN_14251c5b0(param_1,5,iVar9);
      if (*(short *)(param_1 + 0x138) < 0) {
        iVar9 = *(int *)(param_1 + 0x13c);
      }
      else {
        iVar9 = (int)*(short *)(param_1 + 0x138) >> 5;
      }
      FUN_1424a9690(*(longlong *)(param_1 + 0x10) + 0x28,lVar1,0,iVar9);
    }
    uVar4 = 2;
    if ((*(ushort *)(param_1 + 0x138) & 1) == 0) {
      uVar4 = *(ushort *)(param_1 + 0x138) & 0x1f;
    }
    *(ushort *)(param_1 + 0x138) = uVar4;
  }
  return;
}



// FUNCTION 14251cd90 FUN_14251cd90 body=82 status=ok
// SIG undefined FUN_14251cd90(void)

uint FUN_14251cd90(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    if (((0xff < param_2) || (0xffffff < (int)param_3)) ||
       (((int)param_3 < 0 &&
        (((param_2 != 0 && (param_2 != 0xff)) || (param_2 = 0xff, param_3 < 0xff000000)))))) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = param_2 << 0x18 | param_3;
  }
  return uVar1;
}



// FUNCTION 14251cdf0 FUN_14251cdf0 body=63 status=ok
// SIG undefined FUN_14251cdf0(void)

undefined4 FUN_14251cdf0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 < -1) || (*(int *)(param_1 + 0xc) <= iVar2)) {
    cVar1 = FUN_1425182c0(param_1,iVar2 + 1);
    if (cVar1 == '\0') {
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_2;
}



// FUNCTION 14251ce30 FUN_14251ce30 body=61 status=ok
// SIG undefined FUN_14251ce30(void)

void FUN_14251ce30(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 < -1) || (*(int *)(param_1 + 0xc) <= iVar2)) {
    cVar1 = FUN_1425182c0(param_1,iVar2 + 1);
    if (cVar1 == '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 4) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



// FUNCTION 14251ce70 FUN_14251ce70 body=92 status=ok
// SIG undefined FUN_14251ce70(void)

int FUN_14251ce70(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    iVar2 = 0;
    if (0xfffffeff < param_2 - 0x101U) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x84);
      iVar2 = 0;
      if ((-1 < iVar1) &&
         (*(int *)(*(longlong *)(param_1 + 0x10) + 0x84) = param_2 + iVar1, iVar2 = iVar1,
         *(int *)(*(longlong *)(param_1 + 0x10) + 0x84) < 0xfffff0)) {
        return iVar1;
      }
    }
    FUN_14251b1c0(param_1,0x10300);
  }
  return iVar2;
}



// FUNCTION 14251ced0 FUN_14251ced0 body=125 status=ok
// SIG undefined FUN_14251ced0(void)

uint FUN_14251ced0(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  FUN_14251cb00(param_1,1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 == *(int *)(param_1 + 0x19c)) {
    uVar5 = *(uint *)(param_1 + 0x198);
  }
  else {
    uVar1 = iVar2 - 1;
    uVar5 = uVar1;
    if ((0 < iVar2) &&
       (uVar5 = iVar2 - 2,
       ((uint)*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)uVar1 * 8) & 0xff000000) !=
       0x5000000)) {
      uVar5 = uVar1;
    }
    if (param_2 != '\0') {
      uVar4 = 0x7000000;
      if (0 < **(int **)(param_1 + 8)) {
        uVar4 = 0;
      }
      FUN_14250e0e0(lVar3,uVar4,uVar5);
    }
  }
  return uVar5;
}



// FUNCTION 14251cf50 FUN_14251cf50 body=131 status=ok
// SIG undefined FUN_14251cf50(void)

void FUN_14251cf50(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (0 < **(int **)(param_1 + 8)) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar3 = *(int *)(lVar1 + 8);
  if ((iVar3 < -1) || (*(int *)(lVar1 + 0xc) <= iVar3)) {
    cVar2 = FUN_14250e240(lVar1,iVar3 + 1);
    if (cVar2 == '\0') goto LAB_14251cf9d;
    iVar3 = *(int *)(lVar1 + 8);
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar3 * 8) = (longlong)param_2;
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
LAB_14251cf9d:
  if ((0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) &&
     (**(int **)(param_1 + 8) < 1)) {
    FUN_14251b1c0(param_1,0x10314);
    return;
  }
  return;
}



// FUNCTION 14251cfe0 FUN_14251cfe0 body=329 status=ok
// SIG undefined FUN_14251cfe0(void)

void FUN_14251cfe0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar8 = 0x7000000;
  if (0 < **(int **)(param_1 + 8)) {
    uVar8 = 0;
  }
  FUN_14250e0e0(lVar1,uVar8,param_2);
  iVar3 = *(int *)(lVar1 + 8);
  if (0 < iVar3) {
    uVar9 = 0;
    do {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + uVar9 * 8);
      uVar5 = (uint)uVar2;
      if ((((uVar5 & 0xfe000000) == 0x1c000000) ||
          (((byte)(uVar2 >> 0x18) < 0x25 && ((0x108004a040U >> (uVar2 >> 0x18 & 0x3f) & 1) != 0))))
         && (uVar6 = uVar5 & 0xffffff, param_2 < (int)uVar6)) {
        uVar4 = 0;
        if (**(int **)(param_1 + 8) < 1) {
          if (uVar6 == 0xffffff) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar4 = uVar5 & 0xff000000 | uVar6 + 1;
        }
        FUN_14250e0c0(lVar1,(longlong)(int)uVar4,uVar9 & 0xffffffff);
        iVar3 = *(int *)(lVar1 + 8);
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x180);
  if (0 < iVar3) {
    uVar9 = 0;
    do {
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = *(int *)(*(longlong *)(param_1 + 400) + uVar9 * 4);
      }
      if (param_2 < iVar7) {
        FUN_142518140(param_1 + 0x178,iVar7 + 1,uVar9 & 0xffffffff);
        iVar3 = *(int *)(param_1 + 0x180);
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar3);
  }
  if (param_2 < *(int *)(param_1 + 0x19c)) {
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  }
  if (param_2 < *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  return;
}



// FUNCTION 14251d140 FUN_14251d140 body=596 status=ok
// SIG undefined FUN_14251d140(void)

ulonglong FUN_14251d140(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  
  if ((*(int *)(param_1 + 0x1a4) < 0xb) && (*(int *)(param_1 + 0x1a0) <= *(int *)(param_1 + 0x1a4)))
  {
    FUN_14251cb00(param_1,1);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    iVar7 = *(int *)(lVar1 + 8);
    if (iVar7 == *(int *)(param_1 + 0x19c)) {
      uVar6 = *(uint *)(param_1 + 0x198);
    }
    else {
      uVar6 = iVar7 - 1;
      if ((0 < iVar7) &&
         (((uint)*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)uVar6 * 8) & 0xff000000)
          == 0x5000000)) {
        uVar6 = iVar7 - 2;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1a4);
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (iVar3 == 0) {
      FUN_14250dfa0(lVar1,uVar6);
      if ((int)uVar6 <= *(int *)(param_1 + 0x198)) {
        *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      }
      uVar4 = CONCAT71(uVar5,1);
      if ((int)uVar6 <= *(int *)(param_1 + 0x19c)) {
        *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
      }
      goto LAB_14251d1c5;
    }
    if ((uVar6 == iVar7 - 1U) || (iVar3 == 1)) {
      lVar11 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < iVar7)) {
        lVar11 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + (ulonglong)uVar6 * 8);
      }
      if (**(int **)(param_1 + 8) < 1) {
        uVar8 = (iVar3 * 2 - *(int *)(param_1 + 0x1a0)) + (iVar7 - 1U);
        if ((0xffffff < (int)uVar8) || ((int)uVar8 < 0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar9 = (ulonglong)(uVar8 | 0x6000000);
      }
      else {
        uVar9 = 0;
      }
      if (*(int *)(param_1 + 0x1a0) == 0) {
        FUN_14251cfe0(param_1,uVar6);
        FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar9,uVar6);
        iVar3 = *(int *)(param_1 + 0x1a4);
      }
      uVar4 = CONCAT71(uVar5,1);
      if (1 < iVar3) {
        iVar7 = 1;
        do {
          piVar10 = *(int **)(param_1 + 8);
          if (iVar7 < *(int *)(param_1 + 0x1a0)) {
LAB_14251d270:
            if (*piVar10 < 1) {
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
              iVar3 = *(int *)(lVar1 + 8);
              if ((iVar3 < -1) || (*(int *)(lVar1 + 0xc) <= iVar3)) {
                cVar2 = FUN_14250e240(lVar1,iVar3 + 1);
                if (cVar2 != '\0') {
                  iVar3 = *(int *)(lVar1 + 8);
                  goto LAB_14251d339;
                }
              }
              else {
LAB_14251d339:
                *(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar3 * 8) = lVar11;
                *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
              }
              if ((0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) &&
                 (**(int **)(param_1 + 8) < 1)) {
                FUN_14251b1c0(param_1,0x10314);
              }
            }
          }
          else if (*piVar10 < 1) {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            iVar3 = *(int *)(lVar1 + 8);
            if ((iVar3 < -1) || (*(int *)(lVar1 + 0xc) <= iVar3)) {
              cVar2 = FUN_14250e240(lVar1,iVar3 + 1);
              if (cVar2 != '\0') {
                iVar3 = *(int *)(lVar1 + 8);
                goto LAB_14251d2c3;
              }
            }
            else {
LAB_14251d2c3:
              *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar3 * 8) = uVar9;
              *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            }
            piVar10 = *(int **)(param_1 + 8);
            if (0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) {
              if (0 < *piVar10) goto LAB_14251d27a;
              FUN_14251b1c0(param_1,0x10314);
              piVar10 = *(int **)(param_1 + 8);
            }
            goto LAB_14251d270;
          }
LAB_14251d27a:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_1 + 0x1a4));
      }
      goto LAB_14251d1c5;
    }
  }
  uVar4 = 0;
LAB_14251d1c5:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14251d3b0 FUN_14251d3b0 body=520 status=ok
// SIG undefined FUN_14251d3b0(void)

void FUN_14251d3b0(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_14251cb00(param_1,1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar1 = *(int *)(lVar3 + 8);
  if (iVar1 == *(int *)(param_1 + 0x19c)) {
    uVar4 = *(uint *)(param_1 + 0x198);
  }
  else {
    uVar5 = iVar1 - 1;
    uVar4 = uVar5;
    if ((0 < iVar1) &&
       (uVar4 = iVar1 - 2,
       ((uint)*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)uVar5 * 8) & 0xff000000) !=
       0x5000000)) {
      uVar4 = uVar5;
    }
    uVar2 = 0x7000000;
    if (0 < **(int **)(param_1 + 8)) {
      uVar2 = 0;
    }
    FUN_14250e0e0(lVar3,uVar2,uVar4);
  }
  FUN_14251cfe0(param_1,uVar4);
  FUN_14251cfe0(param_1,uVar4);
  FUN_14251cfe0(param_1,uVar4);
  uVar5 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x80);
    if ((int)uVar5 < 0) {
      uVar5 = 0;
      uVar2 = 0x10300;
    }
    else {
      *(uint *)(*(longlong *)(param_1 + 0x10) + 0x80) =
           (1 - (*(int *)(param_1 + 0x1a4) >> 0x1f)) + uVar5;
      uVar2 = 0x10314;
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x80) < 0xfffff0) goto LAB_14251d49a;
    }
    FUN_14251b1c0(param_1,uVar2);
  }
LAB_14251d49a:
  if (**(int **)(param_1 + 8) < 1) {
    if ((0xff < param_2) || (0xffffff < uVar5)) goto LAB_14251d5b2;
    lVar3 = (longlong)(int)(uVar5 | param_2 << 0x18);
  }
  else {
    lVar3 = 0;
  }
  FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),lVar3,uVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  if (**(int **)(param_1 + 8) < 1) {
    uVar5 = *(uint *)(lVar3 + 8);
    if ((0xffffff < (int)uVar5) || ((int)uVar5 < 0)) {
LAB_14251d5b2:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar5 = uVar5 | 0x1f000000;
  }
  else {
    uVar5 = 0;
  }
  FUN_14250e0c0(lVar3,uVar5,uVar4 + 1);
  FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)*(int *)(param_1 + 0x1a0),uVar4 + 2);
  FUN_14250e0c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),
                (longlong)*(int *)(param_1 + 0x1a4),uVar4 + 3);
  FUN_14251c5b0(param_1,param_3,uVar4);
  uVar5 = *(uint *)(param_1 + 0x1a0);
  if ((0xffffff < uVar5) || (iVar1 = *(int *)(param_1 + 0x1a4), 0xffffff < iVar1)) {
    FUN_14251b1c0(param_1,0x10307);
    uVar5 = *(uint *)(param_1 + 0x1a0);
    iVar1 = *(int *)(param_1 + 0x1a4);
  }
  if ((iVar1 < (int)uVar5) && (iVar1 != -1)) {
    FUN_14251b1c0(param_1,0x10309);
    return;
  }
  return;
}



// FUNCTION 14251d5c0 FUN_14251d5c0 body=66 status=ok
// SIG undefined FUN_14251d5c0(void)

undefined8 FUN_14251d5c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 < -1) || (*(int *)(param_1 + 0xc) <= iVar2)) {
    cVar1 = FUN_14250e240(param_1,iVar2 + 1);
    if (cVar1 == '\0') {
      return param_2;
    }
    iVar2 = *(int *)(param_1 + 8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_2;
}



// FUNCTION 14251d610 FUN_14251d610 body=198 status=ok
// SIG undefined FUN_14251d610(void)

undefined8 FUN_14251d610(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  undefined **local_70;
  undefined2 local_68;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (**(int **)(param_1 + 8) < 1) {
    piVar1 = (int *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x48);
    local_70 = &PTR_FUN_149e18960;
    local_68 = 2;
    FUN_142518ab0(param_1,piVar1);
    if (*piVar1 == 0x7b) {
      while( true ) {
        FUN_142518ab0(param_1,piVar1);
        if (*piVar1 == 0x7d) break;
        if (*piVar1 == -1) goto LAB_14251d691;
        FUN_1424a7d60(&local_70);
      }
      uVar3 = FUN_14251e380(param_1,&local_70,
                            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar2 == 0x50) & 0xffffffff);
      FUN_142518ab0(param_1,piVar1);
    }
    else {
LAB_14251d691:
      FUN_14251b1c0(param_1,0x10304);
      uVar3 = 0;
    }
    FUN_140859a90(&local_70);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14251d6e0 Unwind@14251d6e0 body=40 status=ok
// SIG undefined Unwind@14251d6e0(void)

void Unwind_14251d6e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14251d710 FUN_14251d710 body=266 status=ok
// SIG undefined FUN_14251d710(void)

void FUN_14251d710(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1425140a0(param_2);
  iVar3 = FUN_142512720(param_2);
  if (iVar3 == 1) {
    uVar4 = FUN_142513390(param_2,0);
    FUN_1424a7d60(param_1 + 0x130,uVar4);
    goto LAB_14251d7d5;
  }
  if (iVar3 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    uVar4 = *(undefined4 *)(lVar1 + 8);
    FUN_1425163e0(lVar1,param_2,*(undefined8 *)(param_1 + 8));
    FUN_14251c5b0(param_1,0xb,uVar4);
    return;
  }
  if (0 < **(int **)(param_1 + 8)) goto LAB_14251d7d5;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  iVar3 = *(int *)(lVar1 + 8);
  if ((iVar3 < -1) || (*(int *)(lVar1 + 0xc) <= iVar3)) {
    cVar2 = FUN_14250e240(lVar1,iVar3 + 1);
    if (cVar2 != '\0') {
      iVar3 = *(int *)(lVar1 + 8);
      goto LAB_14251d777;
    }
  }
  else {
LAB_14251d777:
    *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar3 * 8) = 0x1000000;
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  if ((0xfffff0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 8)) &&
     (**(int **)(param_1 + 8) < 1)) {
    FUN_14251b1c0(param_1,0x10314);
  }
LAB_14251d7d5:
  FUN_1425121d0(param_2);
  FUN_1401773f0(param_2);
  return;
}



// FUNCTION 14251d820 FUN_14251d820 body=356 status=ok
// SIG undefined FUN_14251d820(void)

undefined4 FUN_14251d820(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_d8 [112];
  undefined **local_68;
  ushort local_60;
  undefined1 local_5e [2];
  uint local_5c;
  undefined1 *local_50;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (0 < **(int **)(param_1 + 8)) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x48);
  FUN_142518ab0(param_1,piVar1);
  if (*(int *)(param_1 + 0x48) != 0x7b) {
    FUN_14251b1c0(param_1,0x10304);
    return 0;
  }
  local_68 = &PTR_FUN_149e18960;
  local_60 = 2;
  while( true ) {
    FUN_142518ab0(param_1,piVar1);
    if (*piVar1 == 0x7d) break;
    if (*piVar1 == -1) goto LAB_14251d95e;
    FUN_1424a7d60(&local_68);
  }
  if ((short)local_60 < 0) {
    uVar4 = local_5c;
    if ((local_60 & 0x11) != 0) goto LAB_14251d8c7;
LAB_14251d8d5:
    if ((local_60 & 2) != 0) {
      local_50 = local_5e;
    }
  }
  else {
    uVar4 = (int)(short)local_60 >> 5;
    if ((local_60 & 0x11) == 0) goto LAB_14251d8d5;
LAB_14251d8c7:
    local_50 = (undefined1 *)0x0;
  }
  cVar2 = FUN_14250aed0(local_50,uVar4);
  if (cVar2 != '\0') {
    if (-1 < (short)local_60) {
      local_5c = (int)(short)local_60 >> 5;
    }
    if (local_5c < 100) {
      FUN_1424a83f0(&local_68,0,local_5c,local_d8,100,0);
      uVar3 = FUN_1425d7cb0(0,local_d8,*(undefined8 *)(param_1 + 8));
      if (0 < **(int **)(param_1 + 8)) {
        FUN_14251b1c0(param_1,0x10304);
      }
      FUN_142518ab0(param_1,piVar1);
      goto LAB_14251d96d;
    }
  }
LAB_14251d95e:
  FUN_14251b1c0(param_1,0x10304);
  uVar3 = 0;
LAB_14251d96d:
  FUN_140859a90(&local_68);
  return uVar3;
}



// FUNCTION 14251d990 Unwind@14251d990 body=39 status=ok
// SIG undefined Unwind@14251d990(void)

void Unwind_14251d990(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xa0);
  return;
}



// FUNCTION 14251d9c0 FUN_14251d9c0 body=103 status=ok
// SIG undefined FUN_14251d9c0(void)

void FUN_14251d9c0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_f8 [200];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_142511900(local_f8);
  uVar1 = FUN_1425c6e50(local_f8,0x2000,param_2,param_3);
  FUN_142513300(param_1,uVar1);
  FUN_1425121d0(local_f8);
  return;
}



// FUNCTION 14251da30 Unwind@14251da30 body=43 status=ok
// SIG undefined Unwind@14251da30(void)

void Unwind_14251da30(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x20);
  return;
}



// FUNCTION 14251da60 FUN_14251da60 body=109 status=ok
// SIG undefined FUN_14251da60(void)

void FUN_14251da60(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_14251db00();
  FUN_142516470(param_1 + 0x1d8,param_2,*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar2 = thunk_FUN_1424da030(200);
  if (lVar2 != 0) {
    FUN_142511900(lVar2);
  }
  FUN_1425163e0(param_1 + 0x1b0,lVar2,uVar1);
  return;
}



// FUNCTION 14251dad0 Unwind@14251dad0 body=34 status=ok
// SIG undefined Unwind@14251dad0(void)

void Unwind_14251dad0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14251db00 FUN_14251db00 body=397 status=ok
// SIG undefined FUN_14251db00(void)

void FUN_14251db00(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x1d8;
  uVar3 = FUN_142516650(lVar1,*(int *)(param_1 + 0x1e0) + -1);
  if ((param_2 & 0xffff0000) <= (uVar3 & 0xffff0000)) {
    lVar2 = param_1 + 0x1b0;
    do {
      FUN_1425d70e0(lVar1);
      uVar4 = FUN_142516630(lVar2,*(int *)(param_1 + 0x1b8) + -1);
      if ((int)uVar3 < 0x30005) {
        if (uVar3 == 0x20003) {
          FUN_1425146a0(uVar4);
        }
        else {
          if (uVar3 != 0x20009) {
            if (uVar3 != 0x30004) goto LAB_14251dc89;
            goto LAB_14251db5b;
          }
          FUN_1425d73f0(uVar4,2);
          FUN_1425140a0(uVar4);
        }
      }
      else {
        if ((int)uVar3 < 0x40007) {
          if (uVar3 == 0x30005) {
LAB_14251dc54:
            FUN_1425d70a0(lVar2);
            uVar5 = FUN_142516630(lVar2,*(int *)(param_1 + 0x1b8) + -1);
            FUN_142513f30(uVar5,uVar4);
          }
          else {
            if (uVar3 != 0x40006) {
LAB_14251dc89:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            FUN_1425d70a0(lVar2);
            uVar5 = FUN_142516630(lVar2,*(int *)(param_1 + 0x1b8) + -1);
            FUN_142513300(uVar5,uVar4);
          }
        }
        else {
          if (uVar3 != 0x40007) {
            if (uVar3 != 0x40008) goto LAB_14251dc89;
            goto LAB_14251dc54;
          }
LAB_14251db5b:
          FUN_1425d70a0(lVar2);
          uVar5 = FUN_142516630(lVar2,*(int *)(param_1 + 0x1b8) + -1);
          FUN_142514040(uVar5,uVar4);
        }
        FUN_1425121d0(uVar4);
        FUN_1401773f0(uVar4);
      }
      uVar3 = FUN_142516650(lVar1,*(int *)(param_1 + 0x1e0) + -1);
    } while ((param_2 & 0xffff0000) <= (uVar3 & 0xffff0000));
  }
  return;
}



// FUNCTION 14251dc90 FUN_14251dc90 body=414 status=ok
// SIG undefined FUN_14251dc90(void)

undefined8 FUN_14251dc90(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined **local_c0;
  undefined2 local_b8;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (**(int **)(param_1 + 8) < 1) {
    local_80 = *(undefined8 *)(param_1 + 0x20);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    if (*(int *)(lVar9 + 0x1c) < *(int *)(lVar9 + 0x28)) {
      lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x38) + 0x40))();
    }
    else {
      lVar9 = (longlong)*(int *)(lVar9 + 0x28) + *(longlong *)(lVar9 + 0x20);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    uVar3 = *(undefined1 *)(param_1 + 0x29);
    local_71 = *(undefined1 *)(param_1 + 0x2a);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    piVar1 = (int *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    local_c0 = &PTR_FUN_149e18960;
    local_b8 = 2;
    FUN_142518ab0(param_1,piVar1);
    iVar4 = *piVar1;
    if (iVar4 == 0x5e) {
      uVar10 = FUN_142518ab0(param_1,piVar1);
      iVar4 = *piVar1;
      local_78 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    else {
      local_78 = 0;
    }
    do {
      FUN_1424a7d60(&local_c0,iVar4);
      FUN_142518ab0(param_1,piVar1);
      if ((*(char *)(param_1 + 0x4c) != '\0') || (iVar4 = *piVar1, iVar4 == -1)) goto LAB_14251ddaa;
    } while (iVar4 != 0x3a);
    FUN_142518ab0(param_1,piVar1);
    if (*piVar1 == 0x5d) {
      uVar11 = FUN_14251e380(param_1,&local_c0,local_78);
    }
    else {
LAB_14251ddaa:
      *(undefined8 *)(param_1 + 0x20) = local_80;
      *(undefined1 *)(param_1 + 0x28) = uVar2;
      *(undefined1 *)(param_1 + 0x29) = uVar3;
      *(undefined1 *)(param_1 + 0x2a) = local_71;
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      *(undefined8 *)(param_1 + 0x38) = uVar8;
      *(undefined8 *)(param_1 + 0x40) = uVar11;
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      lVar12 = lVar9 - *(longlong *)(lVar6 + 0x20);
      if (((lVar12 < 0) || (*(int *)(lVar6 + 0x1c) <= lVar12)) ||
         (0xdbff < *(ushort *)(*(longlong *)(lVar6 + 0x30) + lVar12 * 2))) {
        FUN_14250e700(lVar6,lVar9);
      }
      else {
        *(int *)(lVar6 + 0x28) = (int)lVar12;
      }
      uVar11 = 0;
    }
    FUN_140859a90(&local_c0);
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}



// FUNCTION 14251de30 Unwind@14251de30 body=74 status=ok
// SIG undefined Unwind@14251de30(void)

void Unwind_14251de30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14251de80 FUN_14251de80 body=904 status=ok
// SIG undefined FUN_14251de80(void)

ulonglong FUN_14251de80(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 local_68 [8];
  int local_60;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar12 = 0;
  if (**(int **)(param_1 + 8) < 1) {
    FUN_142517d70(local_68,param_3 + 1);
    FUN_142518020(local_68,param_3 + 1);
    for (uVar14 = param_2; (int)uVar14 <= param_3; uVar14 = uVar14 + 1) {
      FUN_142518140(local_68,0);
    }
    uVar10 = 0;
    uVar13 = 0x7fffffff;
    while( true ) {
      uVar8 = (ulonglong)param_2;
      iVar6 = (int)uVar10;
      uVar12 = uVar10;
      if (param_3 < (int)param_2) break;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      iVar5 = *(int *)(lVar3 + 8);
      if (((int)param_2 < 0) || (iVar5 <= (int)param_2)) {
        if (-1 < (int)param_2) {
          uVar14 = 0;
          goto LAB_14251df5e;
        }
        if (iVar6 < 1) {
          uVar10 = 0;
        }
        goto LAB_14251df20;
      }
      uVar14 = (uint)*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + uVar8 * 8);
LAB_14251df5e:
      if ((local_60 < 1) || (local_60 <= (int)param_2)) {
        if (iVar6 < 1) {
          uVar10 = 0;
        }
        uVar11 = uVar10;
        if (iVar6 < 0) {
          uVar11 = 0;
        }
        if ((int)param_2 < 0) {
          uVar11 = uVar10;
        }
      }
      else {
        iVar2 = *(int *)(local_50 + uVar8 * 4);
        if (iVar6 < iVar2) {
          uVar10 = 0;
        }
        uVar11 = uVar10;
        if ((-1 < (int)param_2) && (iVar6 < iVar2)) {
          uVar11 = (ulonglong)*(uint *)(local_50 + uVar8 * 4);
        }
      }
      uVar9 = (uint)uVar11;
      uVar12 = uVar13;
      uVar7 = param_2;
      switch((char)(uVar14 >> 0x18)) {
      case '\0':
      case '\x02':
      case '\x05':
      case '\a':
      case '\b':
      case '\t':
      case '\x10':
      case '\x11':
      case '\x14':
      case '\x17':
      case '\x18':
      case '\x1e':
      case '\x1f':
      case ' ':
      case '!':
      case '#':
      case '%':
      case '&':
      case '*':
      case '+':
      case '-':
      case '.':
      case '/':
      case '0':
      case '5':
      case '6':
      case '7':
        break;
      case '\x01':
        uVar10 = 0;
        if ((0 < local_60) && (uVar10 = 0, (int)(param_2 + 1) < local_60)) {
          uVar11 = (ulonglong)*(uint *)(local_50 + (ulonglong)(param_2 + 1) * 4);
          break;
        }
        goto LAB_14251df20;
      case '\x03':
        uVar4 = uVar9 + 1;
        if ((uVar9 & 0xfffffffe) == 0x7ffffffe) {
          uVar4 = 0x7fffffff;
        }
        uVar11 = (ulonglong)uVar4;
        if (0x10000 < (uVar14 & 0xffffff)) {
          if ((uVar4 & 0xfffffffe) == 0x7ffffffe) goto switchD_14251dfe0_caseD_13;
          uVar11 = (ulonglong)(uVar4 + 1);
        }
        break;
      case '\x04':
      case '(':
        uVar7 = param_2 + 1;
        if ((int)uVar7 < iVar5) {
          uVar14 = (uint)*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)uVar7 * 8);
        }
        else {
          uVar14 = 0;
        }
        if ((uVar9 ^ 0x7fffffff) <= (uVar14 & 0xffffff)) goto switchD_14251dfe0_caseD_13;
        uVar11 = (ulonglong)((uVar14 & 0xffffff) + uVar9);
        break;
      case '\x06':
        uVar14 = uVar14 & 0xffffff;
        if (uVar14 <= param_2) goto switchD_14251dfe0_caseD_13;
        iVar6 = 0;
        if ((0 < local_60) && ((int)uVar14 < local_60)) {
          iVar6 = *(int *)(local_50 + (ulonglong)uVar14 * 4);
        }
        if (iVar6 < (int)uVar9) {
          FUN_142518140(local_68,uVar11);
        }
        break;
      case '\n':
      case '\v':
      case '\f':
      case '\x15':
      case '\x16':
      case '\x1b':
      case '\'':
      case '1':
      case '8':
      case '9':
      case ':':
        if (0xfffffffc < (uVar9 | 0x80000000)) goto switchD_14251dfe0_caseD_13;
        uVar11 = (ulonglong)(uVar9 + 2);
        break;
      case '\r':
      case '\x0f':
      case '\x12':
      case '$':
        uVar14 = uVar14 & 0xffffff;
        if (param_2 <= uVar14) {
          iVar6 = 0;
          if ((0 < local_60) && ((int)uVar14 < local_60)) {
            iVar6 = *(int *)(local_50 + (ulonglong)uVar14 * 4);
          }
          uVar10 = 0;
          if (iVar6 < (int)uVar9) {
            FUN_142518140(local_68,uVar11);
          }
          goto LAB_14251df20;
        }
        goto switchD_14251dfe0_caseD_13;
      default:
                    /* WARNING: Subroutine does not return */
        abort();
      case '\x13':
      case '\"':
      case ')':
      case '2':
      case '3':
      case '4':
        goto switchD_14251dfe0_caseD_13;
      case '\x19':
      case '\x1a':
        if ((int)(param_2 + 1) < iVar5) {
          uVar7 = (uint)*(undefined8 *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 + 1) * 8);
        }
        else {
          uVar7 = 0;
        }
        uVar7 = uVar7 & 0xffffff;
        if (uVar7 != param_2 + 4) {
          if ((int)(param_2 + 3) < iVar5) {
            iVar6 = *(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 + 3) * 8);
            if (iVar6 == -1) goto switchD_14251dfe0_caseD_13;
          }
          else {
            iVar6 = 0;
          }
          iVar5 = FUN_14251de80(param_1);
          uVar11 = (longlong)iVar6 * (longlong)iVar5 + (longlong)(int)uVar9;
          if (0x7ffffffe < (longlong)uVar11) goto switchD_14251dfe0_caseD_13;
        }
        break;
      case ',':
        iVar6 = 0;
        while( true ) {
          do {
            do {
              do {
                iVar2 = (int)uVar8;
                uVar7 = iVar2 + 1;
                uVar8 = (ulonglong)uVar7;
              } while (iVar2 < -1);
            } while (iVar5 <= (int)uVar7);
            cVar1 = *(char *)(*(longlong *)(lVar3 + 0x18) + 3 + (ulonglong)uVar7 * 8);
            if ((cVar1 == ',') || (cVar1 == '%')) {
              iVar6 = iVar6 + 1;
            }
          } while ((cVar1 != '&') && (cVar1 != '0'));
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
        }
      }
      param_2 = uVar7;
      uVar10 = uVar11 & 0xffffffff;
      if ((int)uVar11 == 0x7fffffff) break;
LAB_14251df20:
      param_2 = param_2 + 1;
    }
switchD_14251dfe0_caseD_13:
    FUN_142517df0(local_68);
  }
  return uVar12;
}



// FUNCTION 14251e220 Unwind@14251e220 body=52 status=ok
// SIG undefined Unwind@14251e220(void)

void Unwind_14251e220(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x20);
  return;
}



// FUNCTION 14251e260 FUN_14251e260 body=274 status=ok
// SIG undefined FUN_14251e260(void)

void FUN_14251e260(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar9 = (uint)param_1;
  if (0x10ffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = param_1 & 0xffffffff;
  cVar2 = FUN_142516e20(param_1,0x22);
  if (cVar2 != '\0') {
    uVar3 = thunk_FUN_1424d7d20(uVar10,0);
    FUN_1425133e0(param_2,uVar3,uVar3);
    lVar5 = -1;
    puVar6 = &DAT_1499dafb0;
    do {
      lVar5 = lVar5 + 1;
      uVar8 = *puVar6;
      puVar6 = puVar6 + 1;
    } while ((int)uVar8 < (int)uVar9);
    if ((uVar8 == uVar9) && ((int)lVar5 != 0x31)) {
      iVar4 = (int)(short)(&DAT_1499db080)[lVar5];
      uVar7 = 1;
      if (1 < (short)(&DAT_1499db0f0)[lVar5]) {
        uVar7 = (&DAT_1499db0f0)[lVar5];
      }
      uVar9 = (uint)uVar7;
      do {
        uVar7 = *(ushort *)(&DAT_1499db160 + (longlong)iVar4 * 2);
        uVar8 = (uint)uVar7;
        iVar1 = iVar4 + 1;
        if ((uVar7 & 0xfc00) == 0xd800) {
          uVar8 = (uint)uVar7 * 0x400 +
                  (uint)*(ushort *)(&DAT_1499db160 + (longlong)(iVar4 + 1) * 2) + 0xfca02400;
          iVar1 = iVar4 + 2;
        }
        iVar4 = iVar1;
        FUN_142513960(param_2,uVar8);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_1425d73f0(param_2,2);
    FUN_1425140a0(param_2);
    return;
  }
  FUN_1425133e0(param_2,uVar10,uVar10);
  return;
}



// FUNCTION 14251e380 FUN_14251e380 body=3649 status=ok
// SIG undefined FUN_14251e380(void)

longlong FUN_14251e380(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint uVar6;
  int *in_stack_fffffffffffffd78;
  ulonglong uVar7;
  undefined1 local_270 [200];
  undefined1 local_1a8 [64];
  undefined **local_168;
  undefined2 local_160;
  wchar_t *local_120;
  undefined *local_110;
  wchar_t *local_100;
  undefined *local_f0;
  undefined *local_e0;
  undefined *local_d0;
  wchar_t *local_c8;
  wchar_t *local_b8;
  wchar_t *local_a8;
  undefined *local_98;
  undefined1 local_90 [8];
  short local_88;
  int local_84;
  longlong local_50;
  longlong local_48;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  if (0 < **(int **)(param_1 + 8)) {
    return 0;
  }
  local_50 = 0;
  local_3c[0] = 0;
  local_168 = &PTR_FUN_149e18960;
  local_160 = 2;
  FUN_1424a6cf0(&local_168,L"[\\p{",0,0xffffffff);
  local_120 = L"[\\p{";
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  FUN_1424a9690(&local_168,param_2,0,iVar2);
  FUN_1424a6cf0(&local_168,&DAT_1499db252,0,0xffffffff);
  local_110 = &DAT_1499db252;
  uVar6 = *(uint *)(param_1 + 0x124) & 2;
  lVar3 = thunk_FUN_1424da030(200);
  if (lVar3 == 0) {
    if (0 < local_3c[0]) goto LAB_14251e4e7;
LAB_14251e6a6:
    local_3c[0] = 7;
    local_50 = lVar3;
    goto LAB_14251e846;
  }
  in_stack_fffffffffffffd78 = local_3c;
  local_48 = lVar3;
  FUN_1425d7150(lVar3,&local_168,uVar6,0,in_stack_fffffffffffffd78);
  lVar3 = local_48;
  if (0 < local_3c[0]) {
    FUN_1425121d0(local_48);
    FUN_1401773f0(lVar3);
LAB_14251e4e7:
    if ((local_3c[0] < 1) || (local_3c[0] == 7)) goto LAB_14251e846;
    local_3c[0] = 0;
    if (*(short *)(param_2 + 8) < 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_2 + 8) >> 5;
    }
    uVar7 = (ulonglong)in_stack_fffffffffffffd78 & 0xffffffff00000000;
    cVar1 = FUN_14257e950(param_2,0,iVar2,L"word",uVar7,0xffffffff,0);
    local_100 = L"word";
    if (cVar1 == '\0') {
      lVar3 = thunk_FUN_1424da030(200);
      if (lVar3 == 0) {
        if (0 < local_3c[0]) goto LAB_14251e846;
        goto LAB_14251e6a6;
      }
      local_48 = lVar3;
      FUN_142511b90(lVar3,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90) + 8));
    }
    else {
      if (*(short *)(param_2 + 8) < 0) {
        iVar2 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_2 + 8) >> 5;
      }
      uVar7 = uVar7 & 0xffffffff00000000;
      cVar1 = FUN_1424a7e30(param_2,0,iVar2,&DAT_1499db262,uVar7,0xffffffff);
      local_f0 = &DAT_1499db262;
      if (cVar1 != '\0') {
        FUN_1424a6be0(local_90,param_2);
        uVar7 = uVar7 & 0xffffffff00000000;
        cVar1 = FUN_1424a7e30(local_90,0,2,&DAT_1499db26a,uVar7,2);
        local_e0 = &DAT_1499db26a;
        if (cVar1 == '\0') {
          iVar2 = local_84;
          if (-1 < local_88) {
            iVar2 = (int)local_88 >> 5;
          }
          if (iVar2 < 3) goto LAB_14251e752;
          local_3c[0] = 0;
          lVar3 = thunk_FUN_1424da030(200);
          if (lVar3 == 0) {
LAB_14251e920:
            if (local_3c[0] < 1) {
              local_3c[0] = 7;
              local_50 = lVar3;
            }
          }
          else {
            local_48 = lVar3;
            FUN_142511900(lVar3);
            lVar3 = local_48;
            if (local_3c[0] < 1) {
              local_50 = local_48;
LAB_14251ec7e:
              FUN_1424a7860(local_270,local_90,2);
              FUN_1424a6c90(local_1a8,L"Block");
              FUN_1425c70b0(local_48,local_1a8,local_270,local_3c);
              FUN_140859a90(local_1a8);
              FUN_140859a90(local_270);
            }
            else {
              FUN_1425121d0(local_48);
              FUN_1401773f0(lVar3);
              if (local_3c[0] < 1) {
                local_48 = 0;
                goto LAB_14251ec7e;
              }
            }
          }
        }
        else {
LAB_14251e752:
          uVar7 = uVar7 & 0xffffffff00000000;
          cVar1 = FUN_1424a7e30(param_2,0,2,&DAT_1499db27c,uVar7,2);
          local_d0 = &DAT_1499db27c;
          if (cVar1 == '\0') {
            if (*(short *)(param_2 + 8) < 0) {
              iVar2 = *(int *)(param_2 + 0xc);
            }
            else {
              iVar2 = (int)*(short *)(param_2 + 8) >> 5;
            }
            if (iVar2 < 3) goto LAB_14251e7e8;
            uVar7 = uVar7 & 0xffffffff00000000;
            FUN_1424a9130(local_90,0,2,0,uVar7,0);
            if (-1 < local_88) {
              local_84 = (int)local_88 >> 5;
            }
            iVar2 = FUN_1424a8940(local_90,0x3d,0,local_84);
            if (iVar2 < 0) {
              cVar1 = FUN_14251f760(local_90,L"assigned",0xffffffff,0);
              if (cVar1 == '\0') {
                FUN_1424b9350(local_90,L"unassigned",0xffffffff);
                param_3 = param_3 == '\0';
              }
              else {
                cVar1 = FUN_14251f760(local_90,L"TitleCase",0xffffffff,0);
                if (cVar1 == '\0') {
                  FUN_1424b9350(local_90,L"Titlecase_Letter",0xffffffff);
                }
              }
              FUN_1424a9130(local_90,0,0,L"[\\p{",uVar7 & 0xffffffff00000000,0xffffffff);
              local_a8 = L"[\\p{";
              FUN_1424a6cf0(local_90,&DAT_1499db252,0,0xffffffff);
              local_98 = &DAT_1499db252;
              local_48 = thunk_FUN_1424da030(200);
              if (local_48 != 0) {
                FUN_1425c5b90(local_48,local_90,*(undefined8 *)(param_1 + 8));
              }
              FUN_14251f6f0(&local_50,local_48,local_3c);
              if (((local_3c[0] < 1) && (cVar1 = FUN_142512860(local_50), cVar1 == '\0')) &&
                 (uVar6 != 0)) {
                FUN_1425d73f0(local_50,2);
              }
              goto LAB_14251e83a;
            }
          }
          else {
LAB_14251e7e8:
            local_c8 = L"java";
            sVar4 = wcslen(L"java");
            cVar1 = FUN_1424a7e30(param_2,0,sVar4 & 0xffffffff,L"java",uVar7 & 0xffffffff00000000,
                                  (int)sVar4);
            local_b8 = L"java";
            if (cVar1 == '\0') {
              local_3c[0] = 0;
              lVar3 = thunk_FUN_1424da030(200);
              if (lVar3 == 0) goto LAB_14251e920;
              local_48 = lVar3;
              FUN_142511900(lVar3);
              lVar3 = local_48;
              if (local_3c[0] < 1) {
                local_50 = local_48;
              }
              else {
                FUN_1425121d0(local_48);
                FUN_1401773f0(lVar3);
                if (0 < local_3c[0]) goto LAB_14251e83a;
                local_48 = 0;
              }
              cVar1 = FUN_1424c19f0(param_2,L"javaDefined",0xffffffff);
              if (cVar1 == '\0') {
                FUN_14251d9c0(local_48,1,local_3c);
                FUN_1425146a0(local_48);
              }
              else {
                cVar1 = FUN_1424c19f0(param_2,L"javaDigit",0xffffffff);
                if (cVar1 == '\0') {
                  FUN_14251d9c0(local_48,0x200,local_3c);
                }
                else {
                  cVar1 = FUN_1424c19f0(param_2,L"javaIdentifierIgnorable",0xffffffff);
                  if (cVar1 == '\0') {
                    FUN_14251f7e0(local_48,local_3c);
                  }
                  else {
                    cVar1 = FUN_1424c19f0(param_2,L"javaISOControl",0xffffffff);
                    if (cVar1 == '\0') {
                      uVar5 = FUN_142511a00(local_48,0,0x1f);
                      FUN_142511a00(uVar5,0x7f,0x9f);
                    }
                    else {
                      cVar1 = FUN_1424c19f0(param_2,L"javaJavaIdentifierPart",0xffffffff);
                      if (cVar1 == '\0') {
                        FUN_14251d9c0(local_48,0x3e,local_3c);
                        FUN_14251d9c0(local_48,0x2000000,local_3c);
                        FUN_14251d9c0(local_48,0x400000,local_3c);
                        FUN_14251d9c0(local_48,0x200,local_3c);
                        FUN_14251d9c0(local_48,0x400,local_3c);
                        FUN_14251d9c0(local_48,0x100,local_3c);
                        FUN_14251d9c0(local_48,0x40,local_3c);
                        FUN_14251f7e0(local_48,local_3c);
                      }
                      else {
                        cVar1 = FUN_1424c19f0(param_2,L"javaJavaIdentifierStart",0xffffffff);
                        if (cVar1 == '\0') {
                          FUN_14251d9c0(local_48,0x3e,local_3c);
                          FUN_14251d9c0(local_48,0x400,local_3c);
                          FUN_14251d9c0(local_48,0x2000000,local_3c);
                          FUN_14251d9c0(local_48,0x400000,local_3c);
                        }
                        else {
                          cVar1 = FUN_1424c19f0(param_2,L"javaLetter",0xffffffff);
                          if (cVar1 == '\0') {
                            FUN_14251d9c0(local_48,0x3e,local_3c);
                          }
                          else {
                            cVar1 = FUN_1424c19f0(param_2,L"javaLetterOrDigit",0xffffffff);
                            if (cVar1 == '\0') {
                              FUN_14251d9c0(local_48,0x3e,local_3c);
                              FUN_14251d9c0(local_48,0x200,local_3c);
                            }
                            else {
                              cVar1 = FUN_1424c19f0(param_2,L"javaLowerCase",0xffffffff);
                              if (cVar1 == '\0') {
                                FUN_14251d9c0(local_48,4,local_3c);
                              }
                              else {
                                cVar1 = FUN_1424c19f0(param_2,L"javaMirrored",0xffffffff);
                                if (cVar1 == '\0') {
                                  FUN_1425c6e50(local_48,3,1,local_3c);
                                }
                                else {
                                  cVar1 = FUN_1424c19f0(param_2,L"javaSpaceChar",0xffffffff);
                                  if (cVar1 == '\0') {
                                    FUN_14251d9c0(local_48,0x7000,local_3c);
                                  }
                                  else {
                                    cVar1 = FUN_1424c19f0(param_2,L"javaSupplementaryCodePoint",
                                                          0xffffffff);
                                    if (cVar1 == '\0') {
                                      FUN_142511a00(local_48,0x10000,0x10ffff);
                                    }
                                    else {
                                      cVar1 = FUN_1424c19f0(param_2,L"javaTitleCase",0xffffffff);
                                      if (cVar1 == '\0') {
                                        FUN_14251d9c0(local_48,8,local_3c);
                                      }
                                      else {
                                        cVar1 = FUN_1424c19f0(param_2,L"javaUnicodeIdentifierStart",
                                                              0xffffffff);
                                        if (cVar1 == '\0') {
                                          FUN_14251d9c0(local_48,0x3e,local_3c);
                                          FUN_14251d9c0(local_48,0x400,local_3c);
                                        }
                                        else {
                                          cVar1 = FUN_1424c19f0(param_2,L"javaUnicodeIdentifierPart"
                                                                ,0xffffffff);
                                          if (cVar1 == '\0') {
                                            FUN_14251d9c0(local_48,0x3e,local_3c);
                                            FUN_14251d9c0(local_48,0x400000,local_3c);
                                            FUN_14251d9c0(local_48,0x200,local_3c);
                                            FUN_14251d9c0(local_48,0x400,local_3c);
                                            FUN_14251d9c0(local_48,0x100,local_3c);
                                            FUN_14251d9c0(local_48,0x40,local_3c);
                                            FUN_14251f7e0(local_48,local_3c);
                                          }
                                          else {
                                            cVar1 = FUN_1424c19f0(param_2,L"javaUpperCase",
                                                                  0xffffffff);
                                            if (cVar1 == '\0') {
                                              FUN_14251d9c0(local_48,2,local_3c);
                                            }
                                            else {
                                              cVar1 = FUN_1424c19f0(param_2,L"javaValidCodePoint",
                                                                    0xffffffff);
                                              if (cVar1 == '\0') {
                                                FUN_142511a00(local_48,0,0x10ffff);
                                              }
                                              else {
                                                cVar1 = FUN_1424c19f0(param_2,L"javaWhitespace",
                                                                      0xffffffff);
                                                if (cVar1 != '\0') goto LAB_14251e830;
                                                FUN_14251d9c0(local_48,0x7000,local_3c);
                                                FUN_142511900(local_270);
                                                uVar5 = FUN_142513960(local_270,0xa0);
                                                uVar5 = FUN_142513960(uVar5,0x2007);
                                                uVar5 = FUN_142513960(uVar5,0x202f);
                                                FUN_142514040(local_48,uVar5);
                                                FUN_1425121d0(local_270);
                                                uVar5 = FUN_142511a00(local_48,9,0xd);
                                                FUN_142511a00(uVar5,0x1c,0x1f);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (((local_3c[0] < 1) && (cVar1 = FUN_142512860(local_48), cVar1 == '\0')) &&
                 (uVar6 != 0)) {
                FUN_1425d73f0(local_48,2);
              }
              goto LAB_14251e83a;
            }
          }
LAB_14251e830:
          local_3c[0] = 0x10304;
        }
LAB_14251e83a:
        FUN_140859a90(local_90);
        goto LAB_14251e846;
      }
      lVar3 = thunk_FUN_1424da030(200);
      if (lVar3 == 0) {
        if (local_3c[0] < 1) {
          local_3c[0] = 7;
          local_50 = lVar3;
        }
        goto LAB_14251e846;
      }
      local_48 = lVar3;
      FUN_142511960(lVar3,0,0x10ffff);
    }
    lVar3 = local_48;
    if (0 < local_3c[0]) {
      FUN_1425121d0(local_48);
      FUN_1401773f0(lVar3);
      goto LAB_14251e846;
    }
  }
  local_50 = local_48;
LAB_14251e846:
  FUN_140859a90(&local_168);
  if (0 < local_3c[0]) {
    if (local_3c[0] == 1) {
      local_3c[0] = 0x10304;
    }
    FUN_14251b1c0(param_1,local_3c[0]);
    lVar3 = local_50;
    if (local_50 != 0) {
      FUN_1425121d0(local_50);
      FUN_1401773f0(lVar3);
    }
    return 0;
  }
  if (param_3 != '\0') {
    FUN_1425146a0(local_50);
    return local_50;
  }
  return local_50;
}



// FUNCTION 14251f1d0 Unwind@14251f1d0 body=50 status=ok
// SIG undefined Unwind@14251f1d0(void)

void Unwind_14251f1d0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f210 Unwind@14251f210 body=50 status=ok
// SIG undefined Unwind@14251f210(void)

void Unwind_14251f210(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f250 Unwind@14251f250 body=50 status=ok
// SIG undefined Unwind@14251f250(void)

void Unwind_14251f250(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x100);
  return;
}



// FUNCTION 14251f290 Unwind@14251f290 body=47 status=ok
// SIG undefined Unwind@14251f290(void)

void Unwind_14251f290(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14251f2c0 Unwind@14251f2c0 body=51 status=ok
// SIG undefined Unwind@14251f2c0(void)

void Unwind_14251f2c0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x1d0) = &DAT_1499db27c;
  return;
}



// FUNCTION 14251f300 Unwind@14251f300 body=50 status=ok
// SIG undefined Unwind@14251f300(void)

void Unwind_14251f300(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f340 Unwind@14251f340 body=51 status=ok
// SIG undefined Unwind@14251f340(void)

void Unwind_14251f340(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x1e8) = L"java";
  return;
}



// FUNCTION 14251f380 Unwind@14251f380 body=47 status=ok
// SIG undefined Unwind@14251f380(void)

void Unwind_14251f380(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x38);
  return;
}



// FUNCTION 14251f3b0 Unwind@14251f3b0 body=50 status=ok
// SIG undefined Unwind@14251f3b0(void)

void Unwind_14251f3b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x218);
  return;
}



// FUNCTION 14251f3f0 Unwind@14251f3f0 body=50 status=ok
// SIG undefined Unwind@14251f3f0(void)

void Unwind_14251f3f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 14251f430 Unwind@14251f430 body=51 status=ok
// SIG undefined Unwind@14251f430(void)

void Unwind_14251f430(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 400) = &DAT_1499db252;
  return;
}



// FUNCTION 14251f470 Unwind@14251f470 body=50 status=ok
// SIG undefined Unwind@14251f470(void)

void Unwind_14251f470(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f4b0 Unwind@14251f4b0 body=51 status=ok
// SIG undefined Unwind@14251f4b0(void)

void Unwind_14251f4b0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x1a0) = L"word";
  return;
}



// FUNCTION 14251f4f0 Unwind@14251f4f0 body=51 status=ok
// SIG undefined Unwind@14251f4f0(void)

void Unwind_14251f4f0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x1b0) = &DAT_1499db262;
  return;
}



// FUNCTION 14251f530 Unwind@14251f530 body=51 status=ok
// SIG undefined Unwind@14251f530(void)

void Unwind_14251f530(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x1c0) = &DAT_1499db26a;
  return;
}



// FUNCTION 14251f570 Unwind@14251f570 body=50 status=ok
// SIG undefined Unwind@14251f570(void)

void Unwind_14251f570(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f5b0 Unwind@14251f5b0 body=51 status=ok
// SIG undefined Unwind@14251f5b0(void)

void Unwind_14251f5b0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x1f8) = L"[\\p{";
  return;
}



// FUNCTION 14251f5f0 Unwind@14251f5f0 body=51 status=ok
// SIG undefined Unwind@14251f5f0(void)

void Unwind_14251f5f0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x208) = &DAT_1499db252;
  return;
}



// FUNCTION 14251f630 Unwind@14251f630 body=50 status=ok
// SIG undefined Unwind@14251f630(void)

void Unwind_14251f630(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x260));
  return;
}



// FUNCTION 14251f670 Unwind@14251f670 body=50 status=ok
// SIG undefined Unwind@14251f670(void)

void Unwind_14251f670(undefined8 param_1,longlong param_2)

{
  FUN_14251f8b0(param_2 + 600);
  return;
}



// FUNCTION 14251f6b0 Unwind@14251f6b0 body=51 status=ok
// SIG undefined Unwind@14251f6b0(void)

void Unwind_14251f6b0(undefined8 param_1,longlong param_2)

{
  *(wchar_t **)(param_2 + 0x180) = L"[\\p{";
  return;
}



// FUNCTION 14251f6f0 FUN_14251f6f0 body=102 status=ok
// SIG undefined FUN_14251f6f0(void)

void FUN_14251f6f0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  
  if (*param_3 < 1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_1425121d0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *param_1 = param_2;
    if (param_2 == 0) {
      *param_3 = 7;
    }
  }
  else if (param_2 != 0) {
    FUN_1425121d0(param_2);
    FUN_1401773f0(param_2);
    return;
  }
  return;
}



// FUNCTION 14251f760 FUN_14251f760 body=90 status=ok
// SIG undefined FUN_14251f760(void)

void FUN_14251f760(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(short *)(param_1 + 8) < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar1 = (int)*(short *)(param_1 + 8) >> 5;
  }
  FUN_14257e950(param_1,0,iVar1,param_2,0,param_3,param_4);
  return;
}



// FUNCTION 14251f7c0 Unwind@14251f7c0 body=28 status=ok
// SIG undefined Unwind@14251f7c0(void)

void Unwind_14251f7c0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 14251f7e0 FUN_14251f7e0 body=151 status=ok
// SIG undefined FUN_14251f7e0(void)

void FUN_14251f7e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_f0 [200];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = FUN_142511a00(param_1,0,8);
  uVar1 = FUN_142511a00(uVar1,0xe,0x1b);
  FUN_142511a00(uVar1,0x7f,0x9f);
  FUN_142511900(local_f0);
  uVar1 = FUN_1425c6e50(local_f0,0x2000,0x10000,param_2);
  FUN_142513300(param_1,uVar1);
  FUN_1425121d0(local_f0);
  return;
}



// FUNCTION 14251f880 Unwind@14251f880 body=39 status=ok
// SIG undefined Unwind@14251f880(void)

void Unwind_14251f880(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x28);
  return;
}



// FUNCTION 14251f8b0 FUN_14251f8b0 body=41 status=ok
// SIG undefined FUN_14251f8b0(void)

void FUN_14251f8b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 14251f8e0 FUN_14251f8e0 body=113 status=ok
// SIG undefined FUN_14251f8e0(void)

undefined8 * FUN_14251f8e0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::RegexCompile::vftable;
  puVar1 = (undefined8 *)param_1[0x41];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_142515ff0(param_1 + 0x3b);
  thunk_FUN_142515ff0(param_1 + 0x36);
  FUN_142517df0(param_1 + 0x2f);
  FUN_140859a90(param_1 + 0x26);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14251f960 FUN_14251f960 body=66 status=ok
// SIG undefined FUN_14251f960(void)

void FUN_14251f960(uint param_1,undefined8 param_2)

{
  FUN_142501320(0);
  FUN_1424d6760(7,FUN_14251f9b0);
  if (param_1 < 0x23) {
    (&DAT_14c792c70)[param_1] = param_2;
  }
  FUN_142501400(0);
  return;
}



// FUNCTION 14251f9b0 FUN_14251f9b0 body=60 status=ok
// SIG undefined FUN_14251f9b0(void)

undefined8 FUN_14251f9b0(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(code **)((longlong)&DAT_14c792c70 + lVar1) != (code *)0x0) {
      (**(code **)((longlong)&DAT_14c792c70 + lVar1))();
      *(undefined8 *)((longlong)&DAT_14c792c70 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x118);
  return 1;
}


