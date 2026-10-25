// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472bfbd4 FUN_1472bfbd4 body=42 status=ok
// SIG undefined FUN_1472bfbd4(void)

longlong FUN_1472bfbd4(longlong param_1,int param_2)

{
  FUN_140046644(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472bfbfe FUN_1472bfbfe body=85 status=ok
// SIG undefined FUN_1472bfbfe(void)

void FUN_1472bfbfe(longlong param_1,int param_2)

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
  FUN_142f6ff6e();
  return;
}



// FUNCTION 1472bfc54 FUN_1472bfc54 body=47 status=ok
// SIG undefined FUN_1472bfc54(void)

longlong FUN_1472bfc54(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472bfc84 FUN_1472bfc84 body=95 status=ok
// SIG undefined FUN_1472bfc84(void)

void FUN_1472bfc84(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1472bfce4 FUN_1472bfce4 body=85 status=ok
// SIG undefined FUN_1472bfce4(void)

void FUN_1472bfce4(longlong param_1,int param_2)

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
  FUN_142f7022a();
  return;
}



// FUNCTION 1472bfd3a FUN_1472bfd3a body=112 status=ok
// SIG undefined FUN_1472bfd3a(void)

void FUN_1472bfd3a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 1472bfdaa FUN_1472bfdaa body=147 status=ok
// SIG undefined FUN_1472bfdaa(void)

void FUN_1472bfdaa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472bfe3e FUN_1472bfe3e body=96 status=ok
// SIG undefined FUN_1472bfe3e(void)

void FUN_1472bfe3e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 1472bfe9e FUN_1472bfe9e body=132 status=ok
// SIG undefined FUN_1472bfe9e(void)

void FUN_1472bfe9e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472bff24 FUN_1472bff24 body=42 status=ok
// SIG undefined FUN_1472bff24(void)

longlong FUN_1472bff24(longlong param_1,int param_2)

{
  FUN_1472bff4e(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472bff4e FUN_1472bff4e body=58 status=ok
// SIG undefined FUN_1472bff4e(void)

void FUN_1472bff4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x1bd8;
  do {
    FUN_140064c53(*(undefined8 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 8 + lVar1));
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -0x28);
  return;
}



// FUNCTION 1472bff88 FUN_1472bff88 body=96 status=ok
// SIG undefined FUN_1472bff88(void)

void FUN_1472bff88(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 1472bffe8 FUN_1472bffe8 body=91 status=ok
// SIG undefined FUN_1472bffe8(void)

void FUN_1472bffe8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472c0044 FUN_1472c0044 body=91 status=ok
// SIG undefined FUN_1472c0044(void)

void FUN_1472c0044(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472c00a0 FUN_1472c00a0 body=91 status=ok
// SIG undefined FUN_1472c00a0(void)

void FUN_1472c00a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472c00fc FUN_1472c00fc body=118 status=ok
// SIG undefined FUN_1472c00fc(void)

int FUN_1472c00fc(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = iVar1 + 0x3fff;
  if (-1 < iVar1 + 0x2000) {
    iVar3 = iVar1 + 0x2000;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar4 = (iVar3 >> 0xd) - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar3 >> 0xd) {
    do {
      uVar2 = FUN_14001cc68(0x4000,0x10);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 1472c0172 FUN_1472c0172 body=118 status=ok
// SIG undefined FUN_1472c0172(void)

int FUN_1472c0172(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = iVar1 + 0xfff;
  if (-1 < iVar1 + 0x800) {
    iVar3 = iVar1 + 0x800;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar4 = (iVar3 >> 0xb) - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar3 >> 0xb) {
    do {
      uVar2 = FUN_14001cc68(0x4000,0x10);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 1472c01e8 FUN_1472c01e8 body=118 status=ok
// SIG undefined FUN_1472c01e8(void)

int FUN_1472c01e8(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = iVar1 + 0x1fff;
  if (-1 < iVar1 + 0x1000) {
    iVar3 = iVar1 + 0x1000;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar4 = (iVar3 >> 0xc) - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar3 >> 0xc) {
    do {
      uVar2 = FUN_14001cc68(0x4000,0x10);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 1472c025e FUN_1472c025e body=91 status=ok
// SIG undefined FUN_1472c025e(void)

void FUN_1472c025e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472c02ba FUN_1472c02ba body=91 status=ok
// SIG undefined FUN_1472c02ba(void)

void FUN_1472c02ba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[1];
  if ((int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar2 != (int)lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1472c0316 FUN_1472c0316 body=118 status=ok
// SIG undefined FUN_1472c0316(void)

int FUN_1472c0316(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar3 = iVar1 + 0xfff;
  if (-1 < iVar1 + 0x800) {
    iVar3 = iVar1 + 0x800;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar4 = (iVar3 >> 0xb) - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar3 >> 0xb) {
    do {
      uVar2 = FUN_14001cc68(0x4000,0x10);
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1456bd870(param_1,iVar3);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 1472c038c FUN_1472c038c body=226 status=ok
// SIG undefined FUN_1472c038c(void)

int FUN_1472c038c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)param_1[1];
  iVar3 = (int)param_1[2];
  iVar8 = iVar3 + 0x1ff;
  if (-1 < iVar3 + 0x100) {
    iVar8 = iVar3 + 0x100;
  }
  *(int *)(param_1 + 2) = iVar3 + 1;
  if (iVar7 < iVar8 >> 8) {
    do {
      lVar5 = FUN_14001cc68(0x4000,0x10);
      lVar6 = 0x30;
      do {
        puVar2 = (undefined8 *)(lVar5 + -0x30 + lVar6);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(lVar5 + -0x20 + lVar6) = 0;
        *(undefined2 *)(lVar5 + -0x1f + lVar6) = 0x193;
        *(undefined8 *)(lVar5 + -0x18 + lVar6) = 0xffffffffffffffff;
        *(undefined1 *)(lVar5 + -0x10 + lVar6) = 0xff;
        *(undefined8 *)(lVar5 + -8 + lVar6) = 0;
        puVar1 = (undefined4 *)(lVar5 + lVar6);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        lVar6 = lVar6 + 0x40;
      } while (lVar6 != 0x4030);
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_1456bd870(param_1,iVar4);
      }
      *(longlong *)(*param_1 + (longlong)iVar4 * 8) = lVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar8 >> 8);
  }
  return iVar3;
}



// FUNCTION 1472c046e FUN_1472c046e body=95 status=ok
// SIG undefined FUN_1472c046e(void)

void FUN_1472c046e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1472c04cd FUN_1472c04cd body=22 status=ok
// SIG undefined FUN_1472c04cd(void)

void FUN_1472c04cd(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 1472c04e4 FUN_1472c04e4 body=147 status=ok
// SIG undefined FUN_1472c04e4(void)

void FUN_1472c04e4(longlong param_1,int param_2)

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



// FUNCTION 1472c0578 FUN_1472c0578 body=62 status=ok
// SIG undefined FUN_1472c0578(void)

void FUN_1472c0578(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472c05b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1472c05b6 FUN_1472c05b6 body=112 status=ok
// SIG undefined FUN_1472c05b6(void)

ulonglong FUN_1472c05b6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472c05f0;
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
LAB_1472c05f0:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472c0626 FUN_1472c0626 body=132 status=ok
// SIG undefined FUN_1472c0626(void)

void FUN_1472c0626(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c06ac FUN_1472c06ac body=1115 status=ok
// SIG undefined FUN_1472c06ac(void)

longlong FUN_1472c06ac(longlong param_1,char param_2,longlong param_3,uint param_4,longlong param_5,
                      uint param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  char cVar14;
  char cVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x24) != param_2) &&
     (*(int *)(param_1 + 0x28) < (int)((float)(*(int *)(param_1 + 0x20) + 1) * 0.9))) {
    uVar12 = (ulonglong)param_4;
    cVar15 = *(char *)(*(longlong *)(param_3 + 8) + uVar12);
    if (cVar15 < '\0') {
      local_78 = param_7[4];
      uVar13 = *param_7;
      uVar3 = param_7[1];
      local_88 = param_7[2];
      uStack_80 = param_7[3];
      *(longlong *)(*(longlong *)(param_3 + 0x10) + uVar12 * 8) = param_5;
      lVar11 = *(longlong *)(param_3 + 0x18);
      lVar4 = uVar12 * 0x28;
      *(undefined8 *)(lVar11 + 0x20 + lVar4) = local_78;
      local_98._0_4_ = (undefined4)uVar13;
      local_98._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_90._0_4_ = (undefined4)uVar3;
      uStack_90._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar4);
      *puVar1 = local_88;
      puVar1[1] = uStack_80;
      puVar2 = (undefined4 *)(lVar11 + lVar4);
      *puVar2 = (undefined4)local_98;
      puVar2[1] = local_98._4_4_;
      puVar2[2] = (undefined4)uStack_90;
      puVar2[3] = uStack_90._4_4_;
      *(char *)(*(longlong *)(param_3 + 8) + uVar12) = param_2;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      local_98 = uVar13;
      uStack_90 = uVar3;
    }
    else {
      *(char *)(*(longlong *)(param_3 + 8) + uVar12) = param_2;
      uVar13 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar12 * 8);
      *(longlong *)(*(longlong *)(param_3 + 0x10) + uVar12 * 8) = param_5;
      lVar11 = *(longlong *)(param_3 + 0x18);
      local_48 = param_7[4];
      local_68 = *param_7;
      uStack_60 = param_7[1];
      local_58 = param_7[2];
      uStack_50 = param_7[3];
      param_7[4] = *(undefined8 *)(lVar11 + 0x20 + uVar12 * 0x28);
      puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x28);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar12 * 0x28);
      uVar6 = puVar1[1];
      param_7[2] = *puVar1;
      param_7[3] = uVar6;
      *param_7 = uVar3;
      param_7[1] = uVar5;
      *(undefined8 *)(lVar11 + 0x20 + uVar12 * 0x28) = local_48;
      puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar12 * 0x28);
      *puVar1 = local_58;
      puVar1[1] = uStack_50;
      puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x28);
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      cVar15 = cVar15 + '\x01';
      uVar16 = (ulonglong)(param_4 + 1);
      lVar11 = *(longlong *)(param_3 + 8);
      cVar14 = *(char *)(lVar11 + uVar16);
      if (-1 < cVar14) {
        pcVar17 = (char *)(lVar11 + uVar16);
        param_4 = param_4 + 2;
        do {
          if (cVar14 < cVar15) {
            *pcVar17 = cVar15;
            uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar16 * 8);
            *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar16 * 8) = uVar13;
            lVar11 = *(longlong *)(param_3 + 0x18);
            local_48 = param_7[4];
            local_68 = *param_7;
            uStack_60 = param_7[1];
            local_58 = param_7[2];
            uStack_50 = param_7[3];
            param_7[4] = *(undefined8 *)(lVar11 + 0x20 + uVar16 * 0x28);
            puVar1 = (undefined8 *)(lVar11 + uVar16 * 0x28);
            uVar13 = *puVar1;
            uVar5 = puVar1[1];
            puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar16 * 0x28);
            uVar6 = puVar1[1];
            param_7[2] = *puVar1;
            param_7[3] = uVar6;
            *param_7 = uVar13;
            param_7[1] = uVar5;
            *(undefined8 *)(lVar11 + 0x20 + uVar16 * 0x28) = local_48;
            puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar16 * 0x28);
            *puVar1 = local_58;
            puVar1[1] = uStack_50;
            puVar1 = (undefined8 *)(lVar11 + uVar16 * 0x28);
            *puVar1 = local_68;
            puVar1[1] = uStack_60;
            cVar15 = cVar14 + '\x01';
            lVar11 = *(longlong *)(param_3 + 8);
            uVar13 = uVar3;
          }
          else {
            cVar15 = cVar15 + '\x01';
            if (cVar15 == *(char *)(param_1 + 0x24)) {
              param_5 = *(longlong *)(*(longlong *)(param_3 + 0x10) + uVar12 * 8);
              *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar12 * 8) = uVar13;
              lVar11 = *(longlong *)(param_3 + 0x18);
              local_48 = param_7[4];
              uVar13 = *param_7;
              uVar3 = param_7[1];
              uVar5 = param_7[2];
              uVar6 = param_7[3];
              param_7[4] = *(undefined8 *)(lVar11 + 0x20 + uVar12 * 0x28);
              puVar1 = (undefined8 *)(lVar11 + uVar12 * 0x28);
              uVar7 = *puVar1;
              uVar8 = puVar1[1];
              puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar12 * 0x28);
              uVar9 = puVar1[1];
              param_7[2] = *puVar1;
              param_7[3] = uVar9;
              *param_7 = uVar7;
              param_7[1] = uVar8;
              *(undefined8 *)(lVar11 + 0x20 + uVar12 * 0x28) = local_48;
              local_68._0_4_ = (undefined4)uVar13;
              local_68._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
              uStack_60._0_4_ = (undefined4)uVar3;
              uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              local_58._0_4_ = (undefined4)uVar5;
              local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
              uStack_50._0_4_ = (undefined4)uVar6;
              uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
              puVar2 = (undefined4 *)(lVar11 + 0x10 + uVar12 * 0x28);
              *puVar2 = (undefined4)local_58;
              puVar2[1] = local_58._4_4_;
              puVar2[2] = (undefined4)uStack_50;
              puVar2[3] = uStack_50._4_4_;
              puVar2 = (undefined4 *)(lVar11 + uVar12 * 0x28);
              *puVar2 = (undefined4)local_68;
              puVar2[1] = local_68._4_4_;
              puVar2[2] = (undefined4)uStack_60;
              puVar2[3] = uStack_60._4_4_;
              local_68 = uVar13;
              uStack_60 = uVar3;
              local_58 = uVar5;
              uStack_50 = uVar6;
              FUN_1472c0b08(param_1);
              uVar10 = (int)((ulonglong)param_5 >> 0x20) * 0x17 + (int)param_5;
              uVar12 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar10);
              lVar11 = *(longlong *)(param_1 + 8);
              if ((lVar11 == 0) || (*(char *)(lVar11 + uVar12) < '\0')) {
                cVar15 = '\0';
                goto LAB_1472c0ada;
              }
              cVar15 = '\0';
              goto LAB_1472c0ab4;
            }
          }
          uVar16 = (ulonglong)param_4;
          pcVar17 = (char *)(lVar11 + uVar16);
          cVar14 = *(char *)(lVar11 + uVar16);
          param_4 = param_4 + 1;
        } while (-1 < cVar14);
      }
      local_a8 = param_7[4];
      uVar3 = *param_7;
      uVar5 = param_7[1];
      local_b8 = param_7[2];
      uStack_b0 = param_7[3];
      *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar16 * 8) = uVar13;
      lVar11 = *(longlong *)(param_3 + 0x18);
      *(undefined8 *)(lVar11 + 0x20 + uVar16 * 0x28) = local_a8;
      local_c8._0_4_ = (undefined4)uVar3;
      local_c8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uVar5;
      uStack_c0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar16 * 0x28);
      *puVar1 = local_b8;
      puVar1[1] = uStack_b0;
      puVar2 = (undefined4 *)(lVar11 + uVar16 * 0x28);
      *puVar2 = (undefined4)local_c8;
      puVar2[1] = local_c8._4_4_;
      puVar2[2] = (undefined4)uStack_c0;
      puVar2[3] = uStack_c0._4_4_;
      *(char *)(*(longlong *)(param_3 + 8) + uVar16) = cVar15;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      local_c8 = uVar3;
      uStack_c0 = uVar5;
    }
    lVar11 = uVar12 * 0x28 + *(longlong *)(param_3 + 0x18);
    goto LAB_1472c08ca;
  }
  FUN_1472c0b08(param_1);
  uVar12 = (ulonglong)(*(uint *)(param_1 + 0x20) & param_6);
  lVar11 = *(longlong *)(param_1 + 8);
  if ((lVar11 == 0) || (*(char *)(lVar11 + uVar12) < '\0')) {
    cVar15 = '\0';
  }
  else {
    cVar15 = '\0';
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar12 * 8) == param_5) goto LAB_1472c0ac7;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      cVar15 = cVar15 + '\x01';
    } while (cVar15 <= *(char *)(lVar11 + uVar12));
  }
  local_48 = param_7[4];
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_58 = param_7[2];
  uStack_50 = param_7[3];
  local_e0 = param_6;
  goto LAB_1472c09e2;
LAB_1472c0ac7:
  lVar11 = uVar12 * 0x28 + *(longlong *)(param_1 + 0x18);
  goto LAB_1472c08ca;
  while( true ) {
    uVar12 = (ulonglong)((int)uVar12 + 1);
    cVar15 = cVar15 + '\x01';
    if (*(char *)(lVar11 + uVar12) < cVar15) break;
LAB_1472c0ab4:
    if (param_5 == *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar12 * 8)) goto LAB_1472c0ac7;
  }
LAB_1472c0ada:
  local_48 = param_7[4];
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_58 = param_7[2];
  uStack_50 = param_7[3];
  local_e0 = uVar10;
LAB_1472c09e2:
  local_d8 = &local_68;
  local_e8 = param_5;
  lVar11 = FUN_1472c06ac(param_1,cVar15,param_1);
LAB_1472c08ca:
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 1472c0b08 FUN_1472c0b08 body=524 status=ok
// SIG undefined FUN_1472c0b08(void)

void FUN_1472c0b08(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  void *_Dst;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  uint local_b0;
  undefined4 *local_a8;
  int local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  uVar14 = (ulonglong)(uVar7 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar12 = 1 << ((byte)lVar4 & 0x1f);
  uVar7 = param_1[8];
  if ((uVar7 == 0) || (uVar7 + 1 != uVar12)) {
    uVar14 = (ulonglong)uVar12 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar15 = 4;
    if (4 < (uint)lVar4) {
      uVar15 = (uint)lVar4;
    }
    local_98 = *param_1;
    uStack_94 = param_1[1];
    uStack_90 = param_1[2];
    uStack_8c = param_1[3];
    local_88 = param_1[4];
    uStack_84 = param_1[5];
    uStack_80 = param_1[6];
    uStack_7c = param_1[7];
    local_9c = (int)(char)param_1[9];
    uVar14 = (ulonglong)(uVar15 + uVar12);
    _Dst = (void *)FUN_14001cc68(uVar14,0);
    uVar8 = FUN_14001cc68(uVar14 * 8,0);
    uVar11 = 0;
    uVar9 = FUN_14001cc68(uVar14 * 0x28,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar11 >> 8),0xff),uVar14);
    *param_1 = uVar15 + uVar12;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 6) = uVar9;
    param_1[8] = uVar12 - 1;
    *(char *)(param_1 + 9) = (char)uVar15;
    param_1[10] = 0;
    uVar7 = uVar7 + local_9c;
    if (uVar7 != 0) {
      lVar4 = CONCAT44(uStack_8c,uStack_90);
      lVar5 = CONCAT44(uStack_84,local_88);
      lVar6 = CONCAT44(uStack_7c,uStack_80);
      uVar14 = 0;
      do {
        if (-1 < *(char *)(lVar4 + uVar14)) {
          lVar2 = *(longlong *)(lVar5 + uVar14 * 8);
          uVar12 = (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2;
          uVar13 = (ulonglong)(param_1[8] & uVar12);
          lVar3 = *(longlong *)(param_1 + 2);
          if ((lVar3 == 0) || (*(char *)(lVar3 + uVar13) < '\0')) {
            cVar10 = '\0';
          }
          else {
            cVar10 = '\0';
            do {
              if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 4) + uVar13 * 8))
              goto LAB_1472c0cfa;
              uVar13 = (ulonglong)((int)uVar13 + 1);
              cVar10 = cVar10 + '\x01';
            } while (cVar10 <= *(char *)(lVar3 + uVar13));
          }
          puVar1 = (undefined4 *)(lVar6 + uVar14 * 0x28);
          local_58 = *(undefined8 *)(puVar1 + 8);
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uStack_70 = puVar1[2];
          uStack_6c = puVar1[3];
          local_68 = puVar1[4];
          uStack_64 = puVar1[5];
          uStack_60 = puVar1[6];
          uStack_5c = puVar1[7];
          local_b8 = lVar2;
          local_b0 = uVar12;
          local_a8 = &local_78;
          FUN_1472c06ac(param_1,cVar10,param_1);
        }
LAB_1472c0cfa:
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar7);
    }
    FUN_1472bba5a(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c0d16 FUN_1472c0d16 body=117 status=ok
// SIG undefined FUN_1472c0d16(void)

void FUN_1472c0d16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  UNLOCK();
  iVar4 = 0;
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3);
    if (lVar1 == 0) {
LAB_1472c0d41:
      iVar4 = iVar4 + 1;
    }
    else {
      cVar2 = FUN_1456bb142(lVar1 + 0x88,param_1);
      if (cVar2 == '\0') goto LAB_1472c0d41;
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      FUN_1456bb1d4(param_1 + 0x28,lVar1);
    }
    lVar3 = lVar3 + 8;
    if (lVar3 == 0x10) {
      LOCK();
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar4;
      UNLOCK();
      return;
    }
  } while( true );
}



// FUNCTION 1472c0d8c FUN_1472c0d8c body=29 status=ok
// SIG undefined FUN_1472c0d8c(void)

undefined8 FUN_1472c0d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c0da9 FUN_1472c0da9 body=36 status=ok
// SIG undefined FUN_1472c0da9(void)

void FUN_1472c0da9(longlong *param_1,undefined8 *param_2,longlong param_3)

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
  uVar13 = (ulonglong)uRam000000014ca3e674;
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = uRam000000014ca3e674;
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



// FUNCTION 1472c0dce FUN_1472c0dce body=56 status=ok
// SIG undefined FUN_1472c0dce(void)

undefined8 * FUN_1472c0dce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2dbbf0;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c0e06 FUN_1472c0e06 body=487 status=ok
// SIG undefined FUN_1472c0e06(void)

void FUN_1472c0e06(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined **local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 uStack_54;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = &local_98;
  local_98 = &PTR_FUN_14a249130;
  local_90 = &DAT_14a2dbc20;
  local_88 = 0x30;
  local_70 = 0;
  local_60 = 1;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_44 = 0;
  local_40 = L"FRayTracingDebugLineAABBIndexBuffer";
  local_38 = 0;
  uStack_30 = 0;
  local_7c = 0x200000030;
  local_74 = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,CONCAT71((int7)((ulonglong)local_68 >> 8),1));
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_70;
    local_b8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_7c);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  plVar4 = (longlong *)(param_1 + 0x10);
  if (plVar4 != &local_a0) {
    lVar3 = *plVar4;
    *plVar4 = local_a0;
    local_a0 = 0;
    if (lVar3 == 0) goto LAB_1472c0f2d;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1472c0f2d:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c0fee FUN_1472c0fee body=56 status=ok
// SIG undefined FUN_1472c0fee(void)

undefined8 * FUN_1472c0fee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2dbca0;
  FUN_144725486();
  FUN_146302a02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c1026 FUN_1472c1026 body=221 status=ok
// SIG undefined FUN_1472c1026(void)

void FUN_1472c1026(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14003821a(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14003821a(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x48);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_1472c112a((longlong *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < *(int *)(param_1 + 0x4c)) {
    return;
  }
  FUN_1472c112a((longlong *)(param_1 + 0x40));
  return;
}



// FUNCTION 1472c1104 FUN_1472c1104 body=38 status=ok
// SIG undefined FUN_1472c1104(void)

undefined8 FUN_1472c1104(undefined8 param_1,int param_2)

{
  FUN_146302a02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c112a FUN_1472c112a body=48 status=ok
// SIG undefined FUN_1472c112a(void)

void FUN_1472c112a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1472c115a FUN_1472c115a body=38 status=ok
// SIG undefined FUN_1472c115a(void)

undefined8 FUN_1472c115a(undefined8 param_1,int param_2)

{
  FUN_146300e92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c1186 FUN_1472c1186 body=29 status=ok
// SIG undefined FUN_1472c1186(void)

undefined8 FUN_1472c1186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c11a4 FUN_1472c11a4 body=384 status=ok
// SIG undefined FUN_1472c11a4(void)

void FUN_1472c11a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca3ef00;
  if (DAT_14ca3ef00 != 0) {
    LOCK();
    *(int *)(DAT_14ca3ef00 + 8) = *(int *)(DAT_14ca3ef00 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca3eeb8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2dbd40;
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



// FUNCTION 1472c1326 FUN_1472c1326 body=38 status=ok
// SIG undefined FUN_1472c1326(void)

undefined8 FUN_1472c1326(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c134c FUN_1472c134c body=163 status=ok
// SIG undefined FUN_1472c134c(void)

void FUN_1472c134c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f7682c();
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
  FUN_142f76914(param_1,param_2);
  return;
}



// FUNCTION 1472c13ef FUN_1472c13ef body=374 status=ok
// SIG undefined FUN_1472c13ef(void)

void FUN_1472c13ef(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472c1566 FUN_1472c1566 body=42 status=ok
// SIG undefined FUN_1472c1566(void)

longlong FUN_1472c1566(longlong param_1,int param_2)

{
  FUN_142f76986(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c1590 FUN_1472c1590 body=14 status=ok
// SIG undefined FUN_1472c1590(void)

void FUN_1472c1590(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142f769ea();
  return;
}



// FUNCTION 1472c159e FUN_1472c159e body=85 status=ok
// SIG undefined FUN_1472c159e(void)

void FUN_1472c159e(longlong param_1,int param_2)

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
  FUN_142f769ea();
  return;
}



// FUNCTION 1472c15f4 FUN_1472c15f4 body=54 status=ok
// SIG undefined FUN_1472c15f4(void)

void FUN_1472c15f4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1472c162a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1472c162a FUN_1472c162a body=41 status=ok
// SIG undefined FUN_1472c162a(void)

void FUN_1472c162a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144ab2e4c(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 1472c1654 FUN_1472c1654 body=48 status=ok
// SIG undefined FUN_1472c1654(void)

void FUN_1472c1654(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1472c1684 FUN_1472c1684 body=111 status=ok
// SIG undefined FUN_1472c1684(void)

void FUN_1472c1684(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 1472c16f4 FUN_1472c16f4 body=96 status=ok
// SIG undefined FUN_1472c16f4(void)

void FUN_1472c16f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1472c1754 FUN_1472c1754 body=113 status=ok
// SIG undefined FUN_1472c1754(void)

void FUN_1472c1754(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1472c17c6 FUN_1472c17c6 body=95 status=ok
// SIG undefined FUN_1472c17c6(void)

void FUN_1472c17c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1472c1826 FUN_1472c1826 body=62 status=ok
// SIG undefined FUN_1472c1826(void)

void FUN_1472c1826(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472c1864(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472c1864 FUN_1472c1864 body=93 status=ok
// SIG undefined FUN_1472c1864(void)

ulonglong FUN_1472c1864(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472c18c2 FUN_1472c18c2 body=132 status=ok
// SIG undefined FUN_1472c18c2(void)

void FUN_1472c18c2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c1948 FUN_1472c1948 body=146 status=ok
// SIG undefined FUN_1472c1948(void)

void FUN_1472c1948(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c19db FUN_1472c19db body=63 status=ok
// SIG undefined FUN_1472c19db(void)

void FUN_1472c19db(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + lVar6);
      *(longlong *)(param_1 + lVar6) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = param_1 + lVar6;
      lVar1 = param_2 + lVar6;
      uVar3 = *(undefined8 *)(lVar1 + 8);
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      uVar5 = *(undefined8 *)(lVar1 + 0x1b);
      *(undefined8 *)(lVar2 + 0x13) = *(undefined8 *)(lVar1 + 0x13);
      *(undefined8 *)(lVar2 + 0x1b) = uVar5;
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined8 *)(lVar2 + 0x10) = uVar4;
      lVar6 = lVar6 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1472c1a1a FUN_1472c1a1a body=95 status=ok
// SIG undefined FUN_1472c1a1a(void)

undefined8 * FUN_1472c1a1a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1472c1b00(param_1,iVar1);
    FUN_1472c1b65(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1472c1a7a FUN_1472c1a7a body=132 status=ok
// SIG undefined FUN_1472c1a7a(void)

void FUN_1472c1a7a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c1b00 FUN_1472c1b00 body=101 status=ok
// SIG undefined FUN_1472c1b00(void)

undefined8 FUN_1472c1b00(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x98,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xd79435e50d79435f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x98)) {
    uVar5 = uVar2 / 0x98 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x98,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1472c1b65 FUN_1472c1b65 body=143 status=ok
// SIG undefined FUN_1472c1b65(void)

void FUN_1472c1b65(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  do {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0x200000000;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_14176f2be(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x78);
    uVar2 = *(undefined4 *)(param_2 + 0x7c);
    uVar3 = *(undefined4 *)(param_2 + 0x80);
    uVar4 = *(undefined4 *)(param_2 + 0x84);
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
    *(undefined4 *)(param_1 + 0x90) = uVar6;
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    param_1 = param_1 + 0x98;
    param_2 = param_2 + 0x98;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1472c1bf4 FUN_1472c1bf4 body=29 status=ok
// SIG undefined FUN_1472c1bf4(void)

undefined8 FUN_1472c1bf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c1c12 FUN_1472c1c12 body=258 status=ok
// SIG undefined FUN_1472c1c12(void)

void FUN_1472c1c12(void)

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
              0x110) < DAT_14ca3f940) {
    FUN_144b3d300(&DAT_14ca3f940);
    if (DAT_14ca3f940 == -1) {
      FUN_1472c1d16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRayTracingDynamicGeometryUpdatePassParams";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 500;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3f8c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f77f2f);
      _Init_thread_footer(&DAT_14ca3f940);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c1d16 FUN_1472c1d16 body=226 status=ok
// SIG undefined FUN_1472c1d16(void)

longlong * FUN_1472c1d16(longlong *param_1)

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
  pcVar13 = FUN_1472c1dfa;
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



// FUNCTION 1472c1dfa FUN_1472c1dfa body=142 status=ok
// SIG undefined FUN_1472c1dfa(void)

code * FUN_1472c1dfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000001f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472c1e88;
}



// FUNCTION 1472c1e88 FUN_1472c1e88 body=142 status=ok
// SIG undefined FUN_1472c1e88(void)

code * FUN_1472c1e88(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472c1f16;
}



// FUNCTION 1472c1f16 FUN_1472c1f16 body=130 status=ok
// SIG undefined FUN_1472c1f16(void)

undefined1 * FUN_1472c1f16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicGeometryScratchBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472c1f98;
}



// FUNCTION 1472c1f9c FUN_1472c1f9c body=20 status=ok
// SIG undefined FUN_1472c1f9c(void)

void FUN_1472c1f9c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1472c1fb0(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 1472c1fb0 FUN_1472c1fb0 body=276 status=ok
// SIG undefined FUN_1472c1fb0(void)

void FUN_1472c1fb0(undefined8 *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,0x38);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = param_3 * 0x38;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar7);
    uVar6 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar6) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar6 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 * 0x38);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c20c6 FUN_1472c20c6 body=20 status=ok
// SIG undefined FUN_1472c20c6(void)

void FUN_1472c20c6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1472c20da(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 1472c20da FUN_1472c20da body=280 status=ok
// SIG undefined FUN_1472c20da(void)

void FUN_1472c20da(undefined8 *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  code *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    local_50 = &local_59;
    local_58 = FUN_140036a08;
    lVar3 = FUN_144a773aa(&local_58,&DAT_14c7585d0);
    puVar1 = (ulonglong *)(lVar3 + 0x10);
    uVar4 = param_3 * 8;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar4 >= 0x10) * 8;
    lVar2 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)(lVar3 + 0x10) + lVar2 & uVar7);
    uVar6 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)(lVar3 + 0x18) < uVar6) {
      FUN_140023dd8(puVar1,uVar5 + 8 + uVar4);
      _Dst = (void *)(lVar2 + *puVar1 & uVar7);
      uVar6 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar1 = uVar6;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c21f4 FUN_1472c21f4 body=52 status=ok
// SIG undefined FUN_1472c21f4(void)

void FUN_1472c21f4(longlong *param_1)

{
  FUN_1472c2228();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472c2228 FUN_1472c2228 body=89 status=ok
// SIG undefined FUN_1472c2228(void)

void FUN_1472c2228(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 1472c2282 FUN_1472c2282 body=87 status=ok
// SIG undefined FUN_1472c2282(void)

void FUN_1472c2282(longlong param_1,int param_2)

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
  FUN_1472c20da();
  return;
}



// FUNCTION 1472c22da FUN_1472c22da body=335 status=ok
// SIG undefined FUN_1472c22da(void)

void FUN_1472c22da(longlong *param_1,uint param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x10) == *param_3) goto LAB_1472c236d;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + *param_1 + 8);
      } while (iVar5 != -1);
      iVar5 = -1;
LAB_1472c236d:
      bVar6 = iVar5 != -1;
      goto LAB_1472c2304;
    }
  }
  bVar6 = false;
LAB_1472c2304:
  if (param_4 != (char *)0x0) {
    *param_4 = bVar6;
  }
  if (bVar6 == false) {
    FUN_1472c242a(param_1,local_38);
    *local_30 = *param_3;
    *(undefined4 *)(local_30 + 1) = 0xffffffff;
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_30 + 0xc) = param_2;
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)(local_30 + 1) =
           *(undefined4 *)
            ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_38[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar5;
      FUN_1472c2510(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c242a FUN_1472c242a body=229 status=ok
// SIG undefined FUN_1472c242a(void)

int * FUN_1472c242a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1472c2510 FUN_1472c2510 body=477 status=ok
// SIG undefined FUN_1472c2510(void)

void FUN_1472c2510(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1472c26ee FUN_1472c26ee body=87 status=ok
// SIG undefined FUN_1472c26ee(void)

void FUN_1472c26ee(longlong param_1,int param_2)

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
  FUN_1472c1fb0();
  return;
}



// FUNCTION 1472c2746 FUN_1472c2746 body=96 status=ok
// SIG undefined FUN_1472c2746(void)

void FUN_1472c2746(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1472c27a6 FUN_1472c27a6 body=132 status=ok
// SIG undefined FUN_1472c27a6(void)

void FUN_1472c27a6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c282c FUN_1472c282c body=62 status=ok
// SIG undefined FUN_1472c282c(void)

void FUN_1472c282c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472c286a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472c286a FUN_1472c286a body=93 status=ok
// SIG undefined FUN_1472c286a(void)

ulonglong FUN_1472c286a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472c28c8 FUN_1472c28c8 body=580 status=ok
// SIG undefined FUN_1472c28c8(void)

longlong FUN_1472c28c8(longlong param_1,char param_2,longlong param_3,ulonglong param_4,
                      ulonglong param_5,uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  uVar8 = *(uint *)(param_1 + 0x20);
LAB_1472c2900:
  while ((*(char *)(param_1 + 0x24) == param_2 ||
         ((int)((float)(uVar8 + 1) * 0.9) <= *(int *)(param_1 + 0x28)))) {
    FUN_1472c2b0c(param_1);
    uVar8 = *(uint *)(param_1 + 0x20);
    param_4 = (ulonglong)(uVar8 & param_6);
    lVar5 = *(longlong *)(param_1 + 8);
    param_2 = '\0';
    param_3 = param_1;
    if ((lVar5 != 0) && (param_2 = '\0', -1 < *(char *)(lVar5 + param_4))) {
      param_2 = '\0';
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8) == param_5)
        goto LAB_1472c2a2d;
        param_4 = (ulonglong)((int)param_4 + 1);
        param_2 = param_2 + '\x01';
      } while (param_2 <= *(char *)(lVar5 + param_4));
    }
  }
  iVar7 = (int)param_4;
  param_4 = param_4 & 0xffffffff;
  cVar9 = *(char *)(*(longlong *)(param_3 + 8) + param_4);
  if (cVar9 < '\0') {
    *(ulonglong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = param_5;
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = param_7;
    *(char *)(*(longlong *)(param_3 + 8) + param_4) = param_2;
  }
  else {
    *(char *)(*(longlong *)(param_3 + 8) + param_4) = param_2;
    uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + param_4 * 8);
    *(ulonglong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = param_5;
    uVar3 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4);
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = param_7;
    cVar9 = cVar9 + '\x01';
    uVar10 = (ulonglong)(iVar7 + 1);
    lVar5 = *(longlong *)(param_3 + 8);
    cVar6 = *(char *)(lVar5 + uVar10);
    if (-1 < cVar6) {
      pcVar11 = (char *)(lVar5 + uVar10);
      uVar8 = iVar7 + 2;
      do {
        if (cVar6 < cVar9) {
          *pcVar11 = cVar9;
          uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8);
          *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8) = uVar4;
          uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4);
          *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4) = uVar3;
          cVar9 = cVar6 + '\x01';
          lVar5 = *(longlong *)(param_3 + 8);
          uVar4 = uVar2;
          uVar3 = uVar1;
        }
        else {
          cVar9 = cVar9 + '\x01';
          if (cVar9 == *(char *)(param_1 + 0x24)) goto LAB_1472c2a60;
        }
        uVar10 = (ulonglong)uVar8;
        pcVar11 = (char *)(lVar5 + uVar10);
        cVar6 = *(char *)(lVar5 + uVar10);
        uVar8 = uVar8 + 1;
        if (cVar6 < '\0') break;
      } while( true );
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8) = uVar4;
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar10 * 4) = uVar3;
    *(char *)(*(longlong *)(param_3 + 8) + uVar10) = cVar9;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  param_1 = param_3;
LAB_1472c2a2d:
  return param_4 * 4 + *(longlong *)(param_1 + 0x18);
LAB_1472c2a60:
  param_5 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + param_4 * 8);
  *(undefined8 *)(*(longlong *)(param_3 + 0x10) + param_4 * 8) = uVar4;
  param_7 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4);
  *(undefined4 *)(*(longlong *)(param_3 + 0x18) + param_4 * 4) = uVar3;
  FUN_1472c2b0c(param_1);
  uVar8 = ((uint)(param_5 >> 0x14) & 0xffff ^ (uint)(param_5 >> 4)) * -0x7a143595;
  param_6 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  param_6 = param_6 >> 0x10 ^ param_6;
  uVar8 = *(uint *)(param_1 + 0x20);
  param_4 = (ulonglong)(param_6 & uVar8);
  lVar5 = *(longlong *)(param_1 + 8);
  param_2 = '\0';
  param_3 = param_1;
  if ((lVar5 != 0) && (param_2 = '\0', -1 < *(char *)(lVar5 + param_4))) {
    param_2 = '\0';
    do {
      if (param_5 == *(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8))
      goto LAB_1472c2a2d;
      param_4 = (ulonglong)((int)param_4 + 1);
      param_2 = param_2 + '\x01';
    } while (param_2 <= *(char *)(lVar5 + param_4));
  }
  goto LAB_1472c2900;
}



// FUNCTION 1472c2b0c FUN_1472c2b0c body=507 status=ok
// SIG undefined FUN_1472c2b0c(void)

void FUN_1472c2b0c(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  uint local_80;
  undefined4 local_78;
  int local_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  uVar13 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar11 = 1 << ((byte)lVar3 & 0x1f);
  uVar6 = param_1[8];
  if ((uVar6 == 0) || (uVar6 + 1 != uVar11)) {
    uVar13 = (ulonglong)uVar11 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar14 = 4;
    if (4 < (uint)lVar3) {
      uVar14 = (uint)lVar3;
    }
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = param_1[4];
    uStack_54 = param_1[5];
    uStack_50 = param_1[6];
    uStack_4c = param_1[7];
    local_6c = (int)(char)param_1[9];
    uVar13 = (ulonglong)(uVar14 + uVar11);
    _Dst = (void *)FUN_14001cc68(uVar13,0);
    uVar7 = FUN_14001cc68(uVar13 * 8,0);
    uVar10 = 0;
    uVar8 = FUN_14001cc68(uVar13 * 4,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),0xff),uVar13);
    *param_1 = uVar14 + uVar11;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 6) = uVar8;
    param_1[8] = uVar11 - 1;
    *(char *)(param_1 + 9) = (char)uVar14;
    param_1[10] = 0;
    uVar6 = uVar6 + local_6c;
    if (uVar6 != 0) {
      lVar3 = CONCAT44(uStack_5c,uStack_60);
      lVar4 = CONCAT44(uStack_54,local_58);
      lVar5 = CONCAT44(uStack_4c,uStack_50);
      uVar13 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar13)) {
          uVar1 = *(ulonglong *)(lVar4 + uVar13 * 8);
          uVar11 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          uVar11 = uVar11 >> 0x10 ^ uVar11;
          uVar12 = (ulonglong)(param_1[8] & uVar11);
          lVar2 = *(longlong *)(param_1 + 2);
          if ((lVar2 == 0) || (*(char *)(lVar2 + uVar12) < '\0')) {
            cVar9 = '\0';
          }
          else {
            cVar9 = '\0';
            do {
              if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 4) + uVar12 * 8))
              goto LAB_1472c2ced;
              uVar12 = (ulonglong)((int)uVar12 + 1);
              cVar9 = cVar9 + '\x01';
            } while (cVar9 <= *(char *)(lVar2 + uVar12));
          }
          local_88 = uVar1;
          local_80 = uVar11;
          local_78 = *(undefined4 *)(lVar5 + uVar13 * 4);
          FUN_1472c28c8(param_1,cVar9,param_1);
        }
LAB_1472c2ced:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
    FUN_1472bd5ba(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c2d08 FUN_1472c2d08 body=29 status=ok
// SIG undefined FUN_1472c2d08(void)

undefined8 FUN_1472c2d08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c2d26 FUN_1472c2d26 body=231 status=ok
// SIG undefined FUN_1472c2d26(void)

undefined8 *
FUN_1472c2d26(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_145ce4a14();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca3ab30;
  puVar6[4] = DAT_14ca3ab30;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca3aae8;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2dbe98;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1472c2e0e FUN_1472c2e0e body=38 status=ok
// SIG undefined FUN_1472c2e0e(void)

undefined8 FUN_1472c2e0e(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c2e34 FUN_1472c2e34 body=74 status=ok
// SIG undefined FUN_1472c2e34(void)

void FUN_1472c2e34(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x610) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x610) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472c2e7e FUN_1472c2e7e body=54 status=ok
// SIG undefined FUN_1472c2e7e(void)

void FUN_1472c2e7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472c2eb8 FUN_1472c2eb8 body=29 status=ok
// SIG undefined FUN_1472c2eb8(void)

undefined8 FUN_1472c2eb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c2ed5 FUN_1472c2ed5 body=26 status=ok
// SIG undefined FUN_1472c2ed5(void)

void FUN_1472c2ed5(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  uVar13 = (ulonglong)*(uint *)(param_3 + 0x3c);
  puVar4 = (undefined2 *)*param_2;
  puVar11 = (undefined2 *)(((longlong)puVar4 >> 0x18) + (longlong)param_2);
  if (((ulonglong)puVar4 & 1) == 0) {
    puVar11 = puVar4;
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puStack_60 = puVar11 + (longlong)*(int *)(param_2 + 1) * 4;
    uStack_74 = *(uint *)(param_3 + 0x3c);
    lStack_70 = param_4;
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
      param_4 = lStack_70;
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
        param_4 = lStack_70;
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
  lStack_58 = param_4;
  FUN_140023e89(param_1,param_2,&lStack_58,CONCAT71((int7)(uVar13 >> 8),1));
  if ((uStack_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c2ef0 FUN_1472c2ef0 body=29 status=ok
// SIG undefined FUN_1472c2ef0(void)

undefined8 FUN_1472c2ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c2f0e FUN_1472c2f0e body=258 status=ok
// SIG undefined FUN_1472c2f0e(void)

void FUN_1472c2f0e(void)

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
              0x110) < DAT_14ca408d8) {
    FUN_144b3d300(&DAT_14ca408d8);
    if (DAT_14ca408d8 == -1) {
      FUN_1472c3012(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FBuildInstanceBufferPassParams";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca40858,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f7a93a);
      _Init_thread_footer(&DAT_14ca408d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c3012 FUN_1472c3012 body=226 status=ok
// SIG undefined FUN_1472c3012(void)

longlong * FUN_1472c3012(longlong *param_1)

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
  pcVar13 = FUN_1472c30f6;
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



// FUNCTION 1472c30f6 FUN_1472c30f6 body=142 status=ok
// SIG undefined FUN_1472c30f6(void)

code * FUN_1472c30f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472c3184;
}



// FUNCTION 1472c3184 FUN_1472c3184 body=136 status=ok
// SIG undefined FUN_1472c3184(void)

code * FUN_1472c3184(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugInstanceGPUSceneIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472c320c;
}



// FUNCTION 1472c320c FUN_1472c320c body=136 status=ok
// SIG undefined FUN_1472c320c(void)

code * FUN_1472c320c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputStats";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472c3294;
}



// FUNCTION 1472c3294 FUN_1472c3294 body=130 status=ok
// SIG undefined FUN_1472c3294(void)

undefined1 * FUN_1472c3294(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472c3316;
}



// FUNCTION 1472c331a FUN_1472c331a body=29 status=ok
// SIG undefined FUN_1472c331a(void)

undefined8 FUN_1472c331a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472c3338 FUN_1472c3338 body=258 status=ok
// SIG undefined FUN_1472c3338(void)

void FUN_1472c3338(void)

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
              0x110) < DAT_14ca40960) {
    FUN_144b3d300(&DAT_14ca40960);
    if (DAT_14ca40960 == -1) {
      FUN_1472c343c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRayTracingSceneBuildPassParams";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1b2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca408e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f7ae98);
      _Init_thread_footer(&DAT_14ca40960);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c343c FUN_1472c343c body=226 status=ok
// SIG undefined FUN_1472c343c(void)

longlong * FUN_1472c343c(longlong *param_1)

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
  pcVar13 = FUN_1472c3520;
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



// FUNCTION 1472c3520 FUN_1472c3520 body=136 status=ok
// SIG undefined FUN_1472c3520(void)

code * FUN_1472c3520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicGeometryScratchBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472c35a8;
}



// FUNCTION 1472c35a8 FUN_1472c35a8 body=136 status=ok
// SIG undefined FUN_1472c35a8(void)

code * FUN_1472c35a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TLASBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472c3630;
}



// FUNCTION 1472c3630 FUN_1472c3630 body=136 status=ok
// SIG undefined FUN_1472c3630(void)

code * FUN_1472c3630(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472c36b8;
}



// FUNCTION 1472c36b8 FUN_1472c36b8 body=130 status=ok
// SIG undefined FUN_1472c36b8(void)

undefined1 * FUN_1472c36b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScratchBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472c373a;
}



// FUNCTION 1472c373e FUN_1472c373e body=147 status=ok
// SIG undefined FUN_1472c373e(void)

void FUN_1472c373e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472c37d2 FUN_1472c37d2 body=7 status=ok
// SIG undefined FUN_1472c37d2(void)

void FUN_1472c37d2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1472c37da FUN_1472c37da body=132 status=ok
// SIG undefined FUN_1472c37da(void)

void FUN_1472c37da(longlong param_1,int param_2)

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



// FUNCTION 1472c3860 FUN_1472c3860 body=48 status=ok
// SIG undefined FUN_1472c3860(void)

void FUN_1472c3860(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 1472c3890 FUN_1472c3890 body=48 status=ok
// SIG undefined FUN_1472c3890(void)

void FUN_1472c3890(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1472c38c0 FUN_1472c38c0 body=113 status=ok
// SIG undefined FUN_1472c38c0(void)

void FUN_1472c38c0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 1472c3932 FUN_1472c3932 body=96 status=ok
// SIG undefined FUN_1472c3932(void)

void FUN_1472c3932(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1472c3992 FUN_1472c3992 body=113 status=ok
// SIG undefined FUN_1472c3992(void)

int FUN_1472c3992(int *param_1,byte param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = ~(-1 << (param_2 & 0x1f)) & param_1[3];
  uVar2 = (ulonglong)uVar1 - (ulonglong)(uVar1 >> 1 & 0x15555555);
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333);
  return param_3 * 2 + *param_1 +
         (uint)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) *
         param_1[1];
}



// FUNCTION 1472c3a04 FUN_1472c3a04 body=187 status=ok
// SIG undefined FUN_1472c3a04(void)

undefined4 * FUN_1472c3a04(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0xa00000000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0xa00000000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0xffffffff00000080;
  param_1[0x4f] = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return param_1;
}



// FUNCTION 1472c3ac0 FUN_1472c3ac0 body=166 status=ok
// SIG undefined FUN_1472c3ac0(void)

undefined8
FUN_1472c3ac0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_1;
  local_40 = param_5;
  local_34 = param_1[(ulonglong)(byte)param_1[0x40] + 0xd] / local_38 + param_1[0x60];
  local_30 = param_6;
  local_2c = param_7;
  local_3c = param_8;
  local_44 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x4f8))(DAT_14ca83900,param_2,param_3,&local_44);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c3b68 FUN_1472c3b68 body=169 status=ok
// SIG undefined FUN_1472c3b68(void)

void FUN_1472c3b68(int *param_1,uint param_2,int param_3,undefined8 param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar5 = (uint)(byte)((ulonglong)(param_2 - (param_2 >> 1 & 0x1555555) & 0x3030303) *
                       0x101010101010101 >> 0x38);
  iVar6 = iVar1 * param_3 * uVar5;
  uVar3 = FUN_144ab4e40(param_1 + 0xc,iVar6);
  puVar4 = (undefined4 *)FUN_14001cc68(0x28,0x10);
  puVar4[3] = param_2;
  *puVar4 = uVar3;
  puVar4[1] = iVar1 * param_3;
  puVar4[2] = iVar6;
  *(undefined8 *)(puVar4 + 4) = param_4;
  uVar2 = param_5[1];
  *(undefined8 *)(puVar4 + 6) = *param_5;
  *(undefined8 *)(puVar4 + 8) = uVar2;
  param_1[0x5f] = param_1[0x5f] + uVar5 * param_3;
  return;
}



// FUNCTION 1472c3c12 FUN_1472c3c12 body=403 status=ok
// SIG undefined FUN_1472c3c12(void)

undefined8 FUN_1472c3c12(longlong param_1,undefined4 param_2,ulonglong param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  ulonglong local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1472b0be6();
  bVar1 = *(byte *)((longlong)param_4 + 9);
  bVar8 = (bVar1 & 0x10) == 0;
  if (cVar2 == '\0') {
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 0x10) == 0) goto LAB_1472c3c77;
    }
    else {
LAB_1472c3d24:
      cVar3 = FUN_1472b0be6();
      cVar2 = '\x01';
      if (cVar3 == '\0') {
        cVar2 = bVar8 + '\x02';
      }
      if ((bVar8 != false) || (cVar3 == '\0')) goto LAB_1472c3c7c;
    }
  }
  else if ((bVar1 & 0x10) == 0) {
    bVar8 = true;
    if ((bVar1 & 8) != 0) goto LAB_1472c3d24;
LAB_1472c3c77:
    cVar2 = '\x01';
LAB_1472c3c7c:
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    local_58 = *param_4;
    iStack_54 = param_4[1];
    iStack_50 = param_4[2];
    iStack_4c = param_4[3];
    local_60 = param_3;
    uVar4 = FUN_144a78877(iStack_54 * 0x17 + local_58,iStack_50);
    uVar7 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar4 = FUN_144a78877(uVar7 >> 0x10 ^ uVar7,uVar4);
    puVar5 = (undefined8 *)FUN_1472cf558(param_1 + 0x108,uVar4,&local_60);
    if (*(int *)(puVar5 + 1) == 0) {
      local_78 = *param_4;
      iStack_74 = param_4[1];
      iStack_70 = param_4[2];
      iStack_6c = param_4[3];
      local_88 = &local_78;
      uVar6 = FUN_1472c3b68(param_1,cVar2,param_2,param_3);
      *puVar5 = uVar6;
    }
    else {
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      uVar6 = *puVar5;
    }
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    goto LAB_1472c3d4e;
  }
  uVar6 = 0;
LAB_1472c3d4e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1472c3da6 FUN_1472c3da6 body=532 status=ok
// SIG undefined FUN_1472c3da6(void)

void FUN_1472c3da6(uint *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  int local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (undefined4 *)0x0) {
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  param_1[0x5e] = param_1[0x5e] - 1;
  uVar2 = *(ulonglong *)(param_2 + 4);
  if (uVar2 == 0) {
    uVar4 = *param_2;
    iVar5 = param_2[2];
    uVar7 = param_1[0x3e];
    uVar3 = uVar7 + 1;
    param_1[0x3e] = uVar3;
    if (param_1[0x3f] < uVar3) {
      FUN_14017bd48(param_1 + 0x28);
    }
    puVar9 = param_1 + 0x28;
    if (*(uint **)(param_1 + 0x3c) != (uint *)0x0) {
      puVar9 = *(uint **)(param_1 + 0x3c);
    }
    *(ulonglong *)(puVar9 + (longlong)(int)uVar7 * 2) = CONCAT44(iVar5,uVar4);
    param_1[0xc] = param_1[0xc] - iVar5;
    param_1[0x5f] = param_1[0x5f] - (uint)param_2[2] / *param_1;
  }
  else {
    local_58 = param_2[6];
    iStack_54 = param_2[7];
    uStack_50 = param_2[8];
    uStack_4c = param_2[9];
    puVar9 = param_1 + 0x42;
    local_60 = uVar2;
    uVar4 = FUN_144a78877(iStack_54 * 0x17 + local_58,uStack_50);
    uVar7 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar4 = FUN_144a78877(uVar7 >> 0x10 ^ uVar7,uVar4);
    iVar5 = FUN_1472cf5e6(puVar9,uVar4,&local_60);
    if (iVar5 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar5 * 0x30 + *(longlong *)puVar9;
    }
    plVar8 = (longlong *)(lVar6 + 0x18);
    if (lVar6 == 0) {
      plVar8 = (longlong *)0x0;
    }
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 != 0) goto LAB_1472c3e5b;
    uVar4 = *(undefined4 *)*plVar8;
    iVar5 = ((undefined4 *)*plVar8)[2];
    uVar7 = param_1[0x3e];
    uVar3 = uVar7 + 1;
    param_1[0x3e] = uVar3;
    if (param_1[0x3f] < uVar3) {
      FUN_14017bd48(param_1 + 0x28);
    }
    puVar10 = param_1 + 0x28;
    if (*(uint **)(param_1 + 0x3c) != (uint *)0x0) {
      puVar10 = *(uint **)(param_1 + 0x3c);
    }
    *(ulonglong *)(puVar10 + (longlong)(int)uVar7 * 2) = CONCAT44(iVar5,uVar4);
    param_1[0xc] = param_1[0xc] - iVar5;
    param_1[0x5f] = param_1[0x5f] - *(uint *)(*plVar8 + 8) / *param_1;
    FUN_1472cfb5e(puVar9,&local_60);
    param_2 = (undefined4 *)*plVar8;
    if (param_2 == (undefined4 *)0x0) goto LAB_1472c3e5b;
  }
  FUN_1400020a8(param_2);
LAB_1472c3e5b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1472c3fd6 FUN_1472c3fd6 body=295 status=ok
// SIG undefined FUN_1472c3fd6(void)

int * FUN_1472c3fd6(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_1[0x5c];
  if ((longlong)iVar1 != 0) {
    piVar3 = *(int **)(*(longlong *)(param_1 + 0x5a) + -8 + (longlong)iVar1 * 8);
    param_1[0x5c] = iVar1 + -1;
    if (piVar3 != (int *)0x0) goto LAB_1472c4037;
  }
  piVar3 = (int *)FUN_14001cc68(0x28,0x10);
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  *(undefined2 *)((longlong)piVar3 + 0x21) = 0x193;
LAB_1472c4037:
  uVar4 = (ulonglong)param_2 - (ulonglong)(param_2 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  iVar1 = param_1[0x61];
  iVar2 = *param_1;
  uVar5 = (uint)(byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  iVar6 = iVar2 * param_3 * uVar5;
  param_1[0x61] = iVar6 + iVar1;
  piVar3[3] = param_2;
  *piVar3 = iVar1;
  piVar3[1] = iVar2 * param_3;
  piVar3[2] = iVar6;
  param_1[0x60] = param_1[0x60] + uVar5 * param_3;
  iVar1 = param_1[0x58];
  param_1[0x58] = iVar1 + 1U;
  if ((uint)param_1[0x59] < iVar1 + 1U) {
    FUN_1472cf4d2(param_1 + 0x56,iVar1);
  }
  *(int **)(*(longlong *)(param_1 + 0x56) + (longlong)iVar1 * 8) = piVar3;
  return piVar3;
}



// FUNCTION 1472c40fd FUN_1472c40fd body=21 status=ok
// SIG undefined FUN_1472c40fd(void)

void FUN_1472c40fd(char param_1,undefined1 *param_2)

{
  if ((param_1 != '\0') && (*(int *)(DAT_14ca40a90 + 4) != 0)) {
    *param_2 = 1;
  }
  return;
}



// FUNCTION 1472c4112 FUN_1472c4112 body=42 status=ok
// SIG undefined FUN_1472c4112(void)

void FUN_1472c4112(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c416a FUN_1472c416a body=67 status=ok
// SIG undefined FUN_1472c416a(void)

undefined8 FUN_1472c416a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472c41ae FUN_1472c41ae body=52 status=ok
// SIG undefined FUN_1472c41ae(void)

void FUN_1472c41ae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c41e2 FUN_1472c41e2 body=42 status=ok
// SIG undefined FUN_1472c41e2(void)

void FUN_1472c41e2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4214 FUN_1472c4214 body=96 status=ok
// SIG undefined FUN_1472c4214(void)

undefined8 FUN_1472c4214(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f924c8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43660,1);
  return uVar3;
}



// FUNCTION 1472c4274 FUN_1472c4274 body=52 status=ok
// SIG undefined FUN_1472c4274(void)

void FUN_1472c4274(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c42a8 FUN_1472c42a8 body=424 status=ok
// SIG undefined FUN_1472c42a8(void)

void FUN_1472c42a8(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_1;
  uVar2 = FUN_14090c054(1,1);
  if (((char)uVar2 != '\0') && (*(char *)(param_2 + 0x4580) != '\0')) {
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    local_88 = 0;
    do {
      local_98 = (uint)uVar2;
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
      uVar5 = 0;
      do {
        local_94 = (uint)uVar2;
        uVar4 = 0;
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
        do {
          local_90 = (uint)uVar2;
          uVar8 = 0;
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
          do {
            local_8c = (uint)uVar2;
            iVar6 = 0;
            do {
              lVar7 = 0;
              do {
                local_5c = *(undefined4 *)((longlong)&DAT_14a2defb0 + lVar7);
                local_54 = (undefined1)local_88;
                local_64 = iVar6;
                local_60 = uVar8;
                local_58 = uVar4;
                local_50 = uVar5;
                FUN_1472c4452(&local_78,*(undefined8 *)(local_80 + 0x13818),&local_64);
                if (local_78 == 0) {
                  lVar3 = 0;
                }
                else {
                  lVar3 = *(longlong *)
                           (*(longlong *)(*(longlong *)(local_70 + 8) + 0x50) +
                           (longlong)*(int *)(local_78 + 0xd4) * 8);
                  if (lVar3 == 0) {
                    lVar3 = FUN_1400bafc2(*(longlong *)(local_70 + 8),
                                          (longlong)*(int *)(local_78 + 0xd4),1);
                  }
                }
                iVar1 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
                  FUN_1471499ca(param_3,iVar1);
                }
                *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
                lVar7 = lVar7 + 4;
              } while (lVar7 != 0xc);
              iVar6 = iVar6 + 1;
            } while (iVar6 != 4);
            uVar8 = 1;
            uVar2 = 0;
          } while ((local_8c & 1) != 0);
          uVar4 = 1;
        } while ((local_90 & 1) != 0);
        uVar5 = 1;
      } while ((local_94 & 1) != 0);
      local_88 = 1;
      uVar2 = 0;
    } while ((local_98 & 1) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c4452 FUN_1472c4452 body=147 status=ok
// SIG undefined FUN_1472c4452(void)

undefined4 * FUN_1472c4452(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 4);
  iVar3 = param_3[5];
  iVar4 = param_3[3];
  bVar2 = *(byte *)(param_3 + 1);
  iVar5 = param_3[2];
  iVar6 = *param_3;
  FUN_145e2854a();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca40b18,
                (uint)bVar2 * 4 + iVar6 + (((uint)bVar1 * 2 + iVar3 * 4 + iVar4) * 3 + iVar5) * 8);
  FUN_145e2854a();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c44e6 FUN_1472c44e6 body=140 status=ok
// SIG undefined FUN_1472c44e6(void)

undefined4 * FUN_1472c44e6(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_3 + 3);
  iVar2 = param_3[4];
  iVar3 = param_3[2];
  iVar4 = param_3[1];
  iVar5 = *param_3;
  FUN_145f9225a();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca40c40,
                (((uint)bVar1 * 2 + iVar2 * 4 + iVar3) * 3 + iVar4) * 4 + iVar5);
  FUN_145f9225a();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c4573 FUN_1472c4573 body=167 status=ok
// SIG undefined FUN_1472c4573(void)

void FUN_1472c4573(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int *in_stack_00000030;
  
  cVar2 = FUN_142e70c0b();
  if (cVar2 == '\0') {
    *in_stack_00000030 = -1;
    in_stack_00000030[1] = 0;
    in_stack_00000030[2] = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_14c760930;
    if (DAT_14c760930 < 0) {
      iVar1 = *(int *)(*(longlong *)(param_2 + 0x3608) + 0xf4);
      iVar4 = 2;
      if (2 < iVar1) {
        iVar4 = iVar1;
      }
    }
    *in_stack_00000030 = iVar4;
    in_stack_00000030[1] = DAT_14c760934;
    fVar3 = 0.01;
    if (0.01 <= DAT_14c760924) {
      fVar3 = DAT_14c760924;
    }
    in_stack_00000030[2] = (int)fVar3;
    in_stack_00000030[4] = *(byte *)(*(longlong *)(param_2 + 0x3608) + 0x22) >> 2 & 1;
    iVar4 = DAT_14c760938;
  }
  in_stack_00000030[3] = iVar4;
  return;
}



// FUNCTION 1472c461a FUN_1472c461a body=42 status=ok
// SIG undefined FUN_1472c461a(void)

void FUN_1472c461a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4672 FUN_1472c4672 body=67 status=ok
// SIG undefined FUN_1472c4672(void)

undefined8 FUN_1472c4672(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472c46b6 FUN_1472c46b6 body=52 status=ok
// SIG undefined FUN_1472c46b6(void)

void FUN_1472c46b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c46ea FUN_1472c46ea body=359 status=ok
// SIG undefined FUN_1472c46ea(void)

void FUN_1472c46ea(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 auStack_a8 [40];
  uint local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_5c [4];
  undefined1 local_58;
  undefined1 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_1;
  uVar4 = FUN_14177b86c(*(undefined8 *)(param_2 + 0x3608),
                        *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2));
  if ((char)uVar4 != '\0') {
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    uVar9 = 0;
    do {
      local_80 = (uint)uVar4;
      uVar7 = 0;
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      do {
        local_7c = (uint)uVar4;
        uVar10 = 0;
        bVar2 = true;
        do {
          bVar6 = bVar2;
          uVar3 = 0;
          bVar2 = true;
          do {
            bVar8 = bVar2;
            local_5c[0] = uVar9;
            local_58 = uVar7;
            local_54 = uVar10;
            local_50 = uVar3;
            FUN_1472c4852(&local_70,*(undefined8 *)(local_78 + 0x13818),local_5c);
            if (local_70 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(longlong *)
                       (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
                       (longlong)*(int *)(local_70 + 0xd4) * 8);
              if (lVar5 == 0) {
                lVar5 = FUN_1400bafc2(*(longlong *)(local_68 + 8),
                                      (longlong)*(int *)(local_70 + 0xd4),1);
              }
            }
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_1471499ca(param_3,iVar1);
            }
            *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar5;
            uVar3 = 1;
            bVar2 = false;
          } while (bVar8);
          uVar10 = 1;
          bVar2 = false;
        } while (bVar6);
        uVar7 = 1;
        uVar4 = 0;
      } while ((local_7c & 1) != 0);
      uVar9 = 1;
    } while ((local_80 & 1) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c4852 FUN_1472c4852 body=137 status=ok
// SIG undefined FUN_1472c4852(void)

undefined4 * FUN_1472c4852(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[4];
  bVar3 = param_3[8];
  iVar4 = *(int *)(param_3 + 0xc);
  FUN_145f59dea();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca40ee8,
                (uint)bVar1 + iVar4 * 8 | (uint)bVar2 * 2 + (uint)bVar3 * 4);
  FUN_145f59dea();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c48dc FUN_1472c48dc body=42 status=ok
// SIG undefined FUN_1472c48dc(void)

void FUN_1472c48dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c490e FUN_1472c490e body=96 status=ok
// SIG undefined FUN_1472c490e(void)

undefined8 FUN_1472c490e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7592e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca437f8,1);
  return uVar3;
}



// FUNCTION 1472c496e FUN_1472c496e body=52 status=ok
// SIG undefined FUN_1472c496e(void)

void FUN_1472c496e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c49a2 FUN_1472c49a2 body=42 status=ok
// SIG undefined FUN_1472c49a2(void)

void FUN_1472c49a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c49d4 FUN_1472c49d4 body=96 status=ok
// SIG undefined FUN_1472c49d4(void)

undefined8 FUN_1472c49d4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3537a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43908,1);
  return uVar3;
}



// FUNCTION 1472c4a34 FUN_1472c4a34 body=52 status=ok
// SIG undefined FUN_1472c4a34(void)

void FUN_1472c4a34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c4a68 FUN_1472c4a68 body=258 status=ok
// SIG undefined FUN_1472c4a68(void)

undefined1 * FUN_1472c4a68(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(int *)(DAT_14ca41208 + 4) != 0;
  if (*(int *)(DAT_14ca41208 + 4) < 0) {
    bVar4 = *(char *)(param_2 + 0x2bd4) == '\x01';
  }
  uVar1 = FUN_14090c054(bVar4,1,param_2);
  *param_1 = uVar1;
  iVar2 = DAT_14c76095c;
  if (DAT_14c76095c < 0) {
    iVar2 = *(int *)(param_2 + 0x2be0);
  }
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)(param_1 + 8) = DAT_14c760960;
  *(undefined4 *)(param_1 + 0xc) = DAT_14c760968;
  *(uint *)(param_1 + 0x10) =
       ~-(uint)(DAT_14c760940 < 0.0) & (uint)DAT_14c760940 |
       *(uint *)(param_2 + 0x2bd8) & -(uint)(DAT_14c760940 < 0.0);
  iVar2 = DAT_14c760944;
  if (DAT_14c760944 < 0) {
    iVar2 = *(int *)(param_2 + 0x2bdc);
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c760948;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c76094c;
  uVar3 = (uint)*(byte *)(param_2 + 0x2be4);
  if (-1 < (int)DAT_14c760950) {
    uVar3 = DAT_14c760950;
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = DAT_14c760954;
  *(undefined4 *)(param_1 + 0x28) = DAT_14c760958;
  uVar3 = *(byte *)(param_2 + 0x2be5) & 1;
  if (-1 < (int)DAT_14c760964) {
    uVar3 = DAT_14c760964;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  return param_1;
}



// FUNCTION 1472c4b6a FUN_1472c4b6a body=42 status=ok
// SIG undefined FUN_1472c4b6a(void)

void FUN_1472c4b6a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4b9c FUN_1472c4b9c body=96 status=ok
// SIG undefined FUN_1472c4b9c(void)

undefined8 FUN_1472c4b9c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ede88e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43990,1);
  return uVar3;
}



// FUNCTION 1472c4bfc FUN_1472c4bfc body=52 status=ok
// SIG undefined FUN_1472c4bfc(void)

void FUN_1472c4bfc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c4c30 FUN_1472c4c30 body=296 status=ok
// SIG undefined FUN_1472c4c30(void)

int * FUN_1472c4c30(int *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 **)param_1 = &DAT_100000001;
  if (param_2 != 0) {
    FUN_144b15a3c(param_2,&local_5c);
    fVar8 = (float)local_58;
    fVar10 = (float)local_5c;
    fVar9 = fVar8 / fVar10;
    *(ulonglong *)param_1 = CONCAT44(local_58,local_5c);
    lVar1 = DAT_14ca41470;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar2 ^ 1);
    }
    iVar3 = *(int *)(lVar1 + uVar4 * 4);
    iVar6 = 0x10;
    if (iVar3 < 0x10) {
      iVar6 = iVar3;
    }
    iVar3 = 1;
    if (1 < iVar6) {
      iVar3 = iVar6;
    }
    fVar7 = (float)iVar3;
    piVar5 = param_1;
    if (fVar9 <= fVar7) {
      fVar9 = fVar10 / fVar8;
      if (fVar9 <= fVar7) goto LAB_1472c4d10;
      piVar5 = param_1 + 1;
      fVar10 = fVar8;
    }
    *piVar5 = (int)((fVar9 / fVar7) * fVar10);
  }
LAB_1472c4d10:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1472c4d5a FUN_1472c4d5a body=42 status=ok
// SIG undefined FUN_1472c4d5a(void)

void FUN_1472c4d5a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4d8c FUN_1472c4d8c body=96 status=ok
// SIG undefined FUN_1472c4d8c(void)

undefined8 FUN_1472c4d8c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f75f2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43a18,1);
  return uVar3;
}



// FUNCTION 1472c4dec FUN_1472c4dec body=52 status=ok
// SIG undefined FUN_1472c4dec(void)

void FUN_1472c4dec(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c4e20 FUN_1472c4e20 body=42 status=ok
// SIG undefined FUN_1472c4e20(void)

void FUN_1472c4e20(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4e56 FUN_1472c4e56 body=96 status=ok
// SIG undefined FUN_1472c4e56(void)

undefined8 FUN_1472c4e56(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145cfe79e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43aa0,1);
  return uVar3;
}



// FUNCTION 1472c4eb6 FUN_1472c4eb6 body=52 status=ok
// SIG undefined FUN_1472c4eb6(void)

void FUN_1472c4eb6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c4eea FUN_1472c4eea body=42 status=ok
// SIG undefined FUN_1472c4eea(void)

void FUN_1472c4eea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4f20 FUN_1472c4f20 body=96 status=ok
// SIG undefined FUN_1472c4f20(void)

undefined8 FUN_1472c4f20(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1b33e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43b28,1);
  return uVar3;
}



// FUNCTION 1472c4f80 FUN_1472c4f80 body=52 status=ok
// SIG undefined FUN_1472c4f80(void)

void FUN_1472c4f80(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c4fb4 FUN_1472c4fb4 body=42 status=ok
// SIG undefined FUN_1472c4fb4(void)

void FUN_1472c4fb4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c4fea FUN_1472c4fea body=96 status=ok
// SIG undefined FUN_1472c4fea(void)

undefined8 FUN_1472c4fea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4aa60();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43bb0,1);
  return uVar3;
}



// FUNCTION 1472c504a FUN_1472c504a body=52 status=ok
// SIG undefined FUN_1472c504a(void)

void FUN_1472c504a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c507e FUN_1472c507e body=42 status=ok
// SIG undefined FUN_1472c507e(void)

void FUN_1472c507e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c50b4 FUN_1472c50b4 body=96 status=ok
// SIG undefined FUN_1472c50b4(void)

undefined8 FUN_1472c50b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f087fc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43c38,1);
  return uVar3;
}



// FUNCTION 1472c5114 FUN_1472c5114 body=52 status=ok
// SIG undefined FUN_1472c5114(void)

void FUN_1472c5114(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c5148 FUN_1472c5148 body=68 status=ok
// SIG undefined FUN_1472c5148(void)

longlong FUN_1472c5148(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1472cca80(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1472d050c(lVar2,1);
  return lVar2;
}



// FUNCTION 1472c518c FUN_1472c518c body=135 status=ok
// SIG undefined FUN_1472c518c(void)

void FUN_1472c518c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472cca80(param_1,iVar1);
    }
    FUN_1472d050c((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1472d0544(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1472d05aa(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472c5214 FUN_1472c5214 body=226 status=ok
// SIG undefined FUN_1472c5214(void)

float * FUN_1472c5214(float *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 32.0;
  lVar4 = DAT_14ca414b8;
  if ((param_2 < DAT_14ca414c0) && (DAT_14ca414b0 != (longlong *)0x0)) {
    lVar8 = (longlong)(int)param_2 * 0x30;
    lVar6 = (**(code **)(*DAT_14ca414b0 + 0x10))();
    fVar10 = 1.0 / (float)*(int *)(lVar6 + 0x30);
    iVar1 = *(int *)(lVar4 + 8 + lVar8);
    fVar9 = 1.0 / (float)*(int *)(lVar6 + 0x2c);
    *param_1 = (float)*(int *)(lVar4 + 4 + lVar8) * fVar9;
    param_1[1] = (float)iVar1 * fVar10;
    uVar2 = *(uint *)(lVar4 + 0x10 + lVar8);
    uVar3 = *(uint *)(lVar4 + 0xc + lVar8);
    param_1[2] = (float)(int)uVar3 * fVar9;
    uVar5 = uVar2;
    if ((int)uVar3 < (int)uVar2) {
      uVar5 = uVar3;
    }
    iVar1 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    param_1[3] = (float)(int)uVar2 * fVar10;
    if (uVar5 == 0) {
      iVar7 = 0;
    }
    param_1[4] = (float)iVar7;
  }
  return param_1;
}



// FUNCTION 1472c52f6 FUN_1472c52f6 body=157 status=ok
// SIG undefined FUN_1472c52f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472c52f6(undefined8 *param_1)

{
  _DAT_14ca414f8 = *(undefined4 *)(param_1 + 1);
  _DAT_14ca414f0 = *param_1;
  if (param_1 != (undefined8 *)&DAT_14ca414f0) {
    if (DAT_14ca41500 != 0) {
      FUN_1400020a8();
    }
    DAT_14ca41500 = param_1[2];
    param_1[2] = 0;
    DAT_14ca41508 = *(undefined4 *)(param_1 + 3);
    DAT_14ca4150c = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1[3] = 0;
    if (DAT_14ca41510 != 0) {
      FUN_1400020a8();
    }
    DAT_14ca41510 = param_1[4];
    param_1[4] = 0;
    DAT_14ca41518 = *(undefined4 *)(param_1 + 5);
    DAT_14ca4151c = *(undefined4 *)((longlong)param_1 + 0x2c);
    param_1[5] = 0;
  }
  return;
}



// FUNCTION 1472c5394 FUN_1472c5394 body=124 status=ok
// SIG undefined FUN_1472c5394(void)

void FUN_1472c5394(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14ca414d0;
  lVar2 = (longlong)DAT_14ca414d0;
  if (lVar2 < 0) {
    DAT_14ca414d0 = 0;
    if ((uint)(DAT_14ca414d4 - iVar1) < (uint)-iVar1) {
      FUN_1472cccfa(&DAT_14ca414c8,iVar1);
    }
    FUN_1472cccdb(lVar2 * 0x10 + DAT_14ca414c8,-iVar1);
    return;
  }
  if (DAT_14ca414d0 == 0) {
    return;
  }
  DAT_14ca414d0 = 0;
  FUN_1472ccc40(&DAT_14ca414c8);
  return;
}



// FUNCTION 1472c5410 FUN_1472c5410 body=663 status=ok
// SIG undefined FUN_1472c5410(void)

void FUN_1472c5410(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_140504644(param_2,0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_1462841aa(&local_88,uVar6);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar5)) {
      local_40 = iVar5;
      FUN_1457adf2c();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_140504644(param_2);
  }
  local_a0 = param_1 + 2;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_a8);
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = param_1;
  if (iStack_94 < (int)local_a0[3]) {
    do {
      lVar8 = (longlong)iStack_b4 * 0x24 + *local_d0;
      uVar4 = FUN_1447addd0(lVar8,0x10);
      iVar5 = FUN_140f5cb3a(&local_88,uVar4,lVar8);
      if (iVar5 == -1) {
        puVar7 = (undefined4 *)((longlong)iStack_b4 * 0x24 + *local_d0);
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_140c60952(param_2,iVar5);
        }
        uVar4 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
        *puVar1 = *puVar7;
        puVar1[1] = uVar4;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        FUN_1457adc9c(&local_88,&local_a8,(longlong)iStack_b4 * 0x24 + *local_d0,0);
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < (int)local_c0[3]);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c56aa FUN_1472c56aa body=985 status=ok
// SIG undefined FUN_1472c56aa(void)

void FUN_1472c56aa(longlong param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  void *pvVar13;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x30) == -1) {
    *(int *)(param_1 + 0x100) = param_2;
    uVar10 = param_2 + 0x1f;
    if (0x1f < uVar10) {
      pvVar13 = (void *)(param_1 + 0xe8);
      uVar11 = uVar10 >> 5;
      if (*(int *)(param_1 + 0x104) + 0x1fU >> 5 < uVar11) {
        FUN_14499171c(pvVar13,0,uVar11,4);
        *(uint *)(param_1 + 0x104) = uVar10 & 0xffffffe0;
      }
      pvVar5 = *(void **)(param_1 + 0xf8);
      if (*(void **)(param_1 + 0xf8) == (void *)0x0) {
        pvVar5 = pvVar13;
      }
      if (uVar10 < 0x120) {
        uVar11 = uVar10 >> 3 & 0x3c;
      }
      else {
        uVar11 = uVar11 << 2;
      }
      memset(pvVar5,0,(ulonglong)uVar11);
      iVar7 = *(int *)(param_1 + 0x100);
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      if (iVar7 % 0x20 != 0) {
        if (*(void **)(param_1 + 0xf8) != (void *)0x0) {
          pvVar13 = *(void **)(param_1 + 0xf8);
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)pvVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x3c) = param_3;
    if (*(int *)(param_1 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_6c = param_3;
  if (0 < *(int *)(param_1 + 0x38)) {
    uVar6 = 0;
    iVar7 = 0;
    do {
      uVar10 = (uint)uVar6;
      iVar2 = (int)uStack_50;
      if ((int)uVar10 < *(int *)(param_1 + 0x100)) {
        lVar8 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar8 = param_1 + 0xe8;
        }
        if ((*(uint *)(lVar8 + (uVar6 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0) goto LAB_1472c58a3;
        uVar11 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
        if (uStack_50._4_4_ < uVar11) {
          FUN_1446f48e2(&local_58);
        }
        *(int *)(local_58 + (longlong)iVar2 * 4) = iVar7;
        iVar7 = iVar7 + 1;
      }
      else {
LAB_1472c58a3:
        uVar11 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
        if (uStack_50._4_4_ < uVar11) {
          FUN_1446f48e2(&local_58);
        }
        *(undefined4 *)(local_58 + (longlong)iVar2 * 4) = 0xffffffff;
      }
      uVar6 = (ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < *(int *)(param_1 + 0x38));
  }
  pvVar13 = (void *)(param_1 + 0xe8);
  *(int *)(param_1 + 0x100) = param_2;
  uVar10 = param_2 + 0x1f;
  if (0x1f < uVar10) {
    uVar11 = uVar10 >> 5;
    if (*(int *)(param_1 + 0x104) + 0x1fU >> 5 < uVar11) {
      FUN_14499171c(pvVar13,0,uVar11,4);
      *(uint *)(param_1 + 0x104) = uVar10 & 0xffffffe0;
    }
    pvVar5 = *(void **)(param_1 + 0xf8);
    if (*(void **)(param_1 + 0xf8) == (void *)0x0) {
      pvVar5 = pvVar13;
    }
    if (uVar10 < 0x120) {
      uVar11 = uVar10 >> 3 & 0x3c;
    }
    else {
      uVar11 = uVar11 << 2;
    }
    memset(pvVar5,0,(ulonglong)uVar11);
    iVar7 = *(int *)(param_1 + 0x100);
    iVar2 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar2 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      pvVar5 = *(void **)(param_1 + 0xf8);
      if (*(void **)(param_1 + 0xf8) == (void *)0x0) {
        pvVar5 = pvVar13;
      }
      bVar4 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_1472c5410();
  iVar7 = 0;
  if (0 < (int)uStack_60) {
    lVar8 = 0;
    lVar12 = 0;
    iVar7 = 0;
    do {
      piVar3 = (int *)FUN_14025f370(param_1 + 0x48,local_68 + lVar8);
      iVar2 = *(int *)(local_58 + (longlong)*piVar3 * 4);
      pvVar5 = *(void **)(param_1 + 0xf8);
      if (*(void **)(param_1 + 0xf8) == (void *)0x0) {
        pvVar5 = pvVar13;
      }
      iVar9 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      puVar1 = (uint *)((longlong)pvVar5 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
      *piVar3 = iVar2;
      iVar9 = iVar2 + 1;
      if (iVar2 + 1 <= iVar7) {
        iVar9 = iVar7;
      }
      iVar7 = iVar9;
      lVar12 = lVar12 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar12 < (int)uStack_60);
  }
  if (0 < (int)uStack_50) {
    lVar8 = 0;
    do {
      if (iVar7 <= *(int *)(local_58 + lVar8 * 4)) {
        *(undefined4 *)(local_58 + lVar8 * 4) = 0xffffffff;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uStack_50);
  }
  FUN_1472c5abc(param_1 + 0x28,param_2,local_6c,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472c5abc FUN_1472c5abc body=1135 status=ok
// SIG undefined FUN_1472c5abc(void)

void FUN_1472c5abc(longlong *param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_138 [40];
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar10 = (longlong *)param_1[3];
  local_110 = param_1;
  local_f8 = param_4;
  local_c0 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x30))(plVar10);
    plVar11 = (longlong *)local_110[3];
    if (plVar11 != (longlong *)0x0) {
      local_110[3] = 0;
      (**(code **)(*plVar11 + 0x38))();
    }
  }
  local_108 = (ulonglong)*(uint *)(local_110 + 2);
  *(undefined4 *)(local_110 + 2) = param_2;
  (**(code **)(*local_110 + 8))(local_110,&DAT_14ca85100);
  local_100 = plVar10[1];
  if (local_100 == 0) {
    lVar6 = 0;
  }
  else {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
    lVar6 = local_c0[1];
    plVar10 = local_c0;
  }
  uVar9 = (ulonglong)(param_3 + -1 + (uint)(param_3 == 0)) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_d0 = &local_b8;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffff;
  uStack_a8 = (undefined4)lVar6;
  uStack_a4 = (undefined4)((ulonglong)lVar6 >> 0x20);
  uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
  uStack_9c = 0;
  uStack_98 = 0x80;
  local_94 = 0;
  local_88 = 0;
  local_70 = *(undefined8 *)(local_110[3] + 8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x200000000000;
  local_5c = 0;
  local_50 = 0;
  local_c8 = 2;
  FUN_144760590(&DAT_14ca85100,&local_d0,0);
  lVar6 = 0x68;
  do {
    if (*(char *)((longlong)&local_b8 + lVar6) == '\x01') {
      *(undefined1 *)((longlong)&local_b8 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x38;
  } while (lVar6 != -8);
  plVar11 = local_110;
  if (0 < (int)local_108) {
    iVar13 = 0;
    uVar9 = 0;
    do {
      iVar3 = *(int *)(*local_f8 + uVar9 * 4);
      local_f0 = uVar9;
      if (iVar3 != -1) {
        iVar12 = 0;
        do {
          uStack_b0 = DAT_14c9a52a0;
          local_b8 = DAT_14c9a5298;
          uStack_a4 = DAT_14c9a52a0;
          uStack_ac = (undefined4)DAT_14c9a5298;
          uStack_a8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
          uStack_98 = DAT_14c9a52a0;
          uVar4 = *(undefined8 *)(plVar11[3] + 8);
          puVar7 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar8 = puVar7 + 0xc;
          lVar6 = plVar10[1];
          uStack_a0 = uStack_ac;
          uStack_9c = uStack_a8;
          if (DAT_14ca85108 < puVar8) {
            local_e8 = plVar10[1];
            FUN_140023dd8(&DAT_14ca85100,0x68);
            puVar7 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
            puVar8 = puVar7 + 0xc;
            lVar6 = local_e8;
            plVar11 = local_110;
          }
          DAT_14ca85160 = DAT_14ca85160 + 1;
          DAT_14ca85100 = puVar8;
          *DAT_14ca85130 = puVar7;
          DAT_14ca85130 = puVar7 + 1;
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a289d68;
          *(undefined4 *)(puVar7 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar7 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(puVar7 + 3) = uStack_b0;
          *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_ac;
          puVar7[4] = CONCAT44(uStack_a4,uStack_a8);
          puVar7[5] = CONCAT44(uStack_9c,uStack_a0);
          *(undefined4 *)(puVar7 + 6) = uStack_98;
          *(int *)((longlong)puVar7 + 0x34) = iVar12 + iVar13;
          *(int *)(puVar7 + 7) = iVar3 * 6 + iVar12;
          *(undefined8 *)((longlong)puVar7 + 0x3c) = 1;
          *(undefined4 *)((longlong)puVar7 + 0x44) = 0;
          *(uint *)(puVar7 + 9) = 0x40 - ((uint)lVar5 ^ 0x3f);
          puVar7[10] = lVar6;
          puVar7[0xb] = uVar4;
          iVar12 = iVar12 + 1;
        } while (iVar12 != 6);
      }
      uVar9 = local_f0 + 1;
      iVar13 = iVar13 + 6;
    } while (uVar9 != local_108);
  }
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0xffffffff;
  uStack_a8 = (undefined4)plVar10[1];
  uStack_a4 = (undefined4)((ulonglong)plVar10[1] >> 0x20);
  uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
  uStack_9c = 0x80;
  uStack_98 = 0x70;
  local_94 = 0;
  local_88 = 0;
  local_70 = *(undefined8 *)(plVar11[3] + 8);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x7000002000;
  local_5c = 0;
  local_50 = 0;
  local_e0 = &local_b8;
  local_d8 = 2;
  FUN_144760590(&DAT_14ca85100,&local_e0,0);
  lVar6 = 0x68;
  do {
    if (*(char *)((longlong)&local_b8 + lVar6) == '\x01') {
      *(undefined1 *)((longlong)&local_b8 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x38;
  } while (lVar6 != -8);
  FUN_14118259e(&DAT_14ca9a3e8,&local_c0);
  if (local_100 != 0) {
    LOCK();
    puVar1 = (uint *)(local_100 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x38))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c5f2c FUN_1472c5f2c body=458 status=ok
// SIG undefined FUN_1472c5f2c(void)

void FUN_1472c5f2c(float *param_1,float *param_2)

{
  *param_1 = param_2[3] * -0.32573497;
  param_1[1] = param_2[1] * -0.32573497;
  param_1[2] = param_2[2] * 0.32573497;
  param_1[3] = *param_2 * 0.28209478 + param_2[6] * -0.07884789;
  param_1[4] = param_2[0xf] * -0.32573497;
  param_1[5] = param_2[0xd] * -0.32573497;
  param_1[6] = param_2[0xe] * 0.32573497;
  param_1[7] = param_2[0xc] * 0.28209478 + param_2[0x12] * -0.07884789;
  param_1[8] = param_2[0x1b] * -0.32573497;
  param_1[9] = param_2[0x19] * -0.32573497;
  param_1[10] = param_2[0x1a] * 0.32573497;
  param_1[0xb] = param_2[0x18] * 0.28209478 + param_2[0x1e] * -0.07884789;
  param_1[0xc] = param_2[4] * 0.2731371;
  param_1[0xd] = param_2[5] * -0.2731371;
  param_1[0xe] = param_2[6] * 0.23654369;
  param_1[0xf] = param_2[7] * -0.2731371;
  param_1[0x10] = param_2[0x10] * 0.2731371;
  param_1[0x11] = param_2[0x11] * -0.2731371;
  param_1[0x12] = param_2[0x12] * 0.23654369;
  param_1[0x13] = param_2[0x13] * -0.2731371;
  param_1[0x14] = param_2[0x1c] * 0.2731371;
  param_1[0x15] = param_2[0x1d] * -0.2731371;
  param_1[0x16] = param_2[0x1e] * 0.23654369;
  param_1[0x17] = param_2[0x1f] * -0.2731371;
  param_1[0x18] = param_2[8] * 0.13656855;
  param_1[0x19] = param_2[0x14] * 0.13656855;
  param_1[0x1a] = param_2[0x20] * 0.13656855;
  param_1[0x1b] = 1.0;
  return;
}



// FUNCTION 1472c60f6 FUN_1472c60f6 body=42 status=ok
// SIG undefined FUN_1472c60f6(void)

void FUN_1472c60f6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c612c FUN_1472c612c body=96 status=ok
// SIG undefined FUN_1472c612c(void)

undefined8 FUN_1472c612c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14153eeb6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43cc0,1);
  return uVar3;
}



// FUNCTION 1472c618c FUN_1472c618c body=52 status=ok
// SIG undefined FUN_1472c618c(void)

void FUN_1472c618c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c61c0 FUN_1472c61c0 body=42 status=ok
// SIG undefined FUN_1472c61c0(void)

void FUN_1472c61c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c61f6 FUN_1472c61f6 body=96 status=ok
// SIG undefined FUN_1472c61f6(void)

undefined8 FUN_1472c61f6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14153eeb6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43cc0,1);
  return uVar3;
}



// FUNCTION 1472c6256 FUN_1472c6256 body=52 status=ok
// SIG undefined FUN_1472c6256(void)

void FUN_1472c6256(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c628a FUN_1472c628a body=42 status=ok
// SIG undefined FUN_1472c628a(void)

void FUN_1472c628a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c62c0 FUN_1472c62c0 body=96 status=ok
// SIG undefined FUN_1472c62c0(void)

undefined8 FUN_1472c62c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14153eeb6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43cc0,1);
  return uVar3;
}



// FUNCTION 1472c6320 FUN_1472c6320 body=52 status=ok
// SIG undefined FUN_1472c6320(void)

void FUN_1472c6320(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c6354 FUN_1472c6354 body=42 status=ok
// SIG undefined FUN_1472c6354(void)

void FUN_1472c6354(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c638a FUN_1472c638a body=96 status=ok
// SIG undefined FUN_1472c638a(void)

undefined8 FUN_1472c638a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145daab66();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43d48,1);
  return uVar3;
}



// FUNCTION 1472c63ea FUN_1472c63ea body=52 status=ok
// SIG undefined FUN_1472c63ea(void)

void FUN_1472c63ea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c641e FUN_1472c641e body=42 status=ok
// SIG undefined FUN_1472c641e(void)

void FUN_1472c641e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c6454 FUN_1472c6454 body=96 status=ok
// SIG undefined FUN_1472c6454(void)

undefined8 FUN_1472c6454(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145daab66();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43d48,1);
  return uVar3;
}



// FUNCTION 1472c64b4 FUN_1472c64b4 body=52 status=ok
// SIG undefined FUN_1472c64b4(void)

void FUN_1472c64b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c64e8 FUN_1472c64e8 body=42 status=ok
// SIG undefined FUN_1472c64e8(void)

void FUN_1472c64e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c651e FUN_1472c651e body=39 status=ok
// SIG undefined FUN_1472c651e(void)

void FUN_1472c651e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472c6546 FUN_1472c6546 body=52 status=ok
// SIG undefined FUN_1472c6546(void)

void FUN_1472c6546(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c657a FUN_1472c657a body=42 status=ok
// SIG undefined FUN_1472c657a(void)

void FUN_1472c657a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c65b0 FUN_1472c65b0 body=96 status=ok
// SIG undefined FUN_1472c65b0(void)

undefined8 FUN_1472c65b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e752fe();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43dd0,1);
  return uVar3;
}



// FUNCTION 1472c6610 FUN_1472c6610 body=52 status=ok
// SIG undefined FUN_1472c6610(void)

void FUN_1472c6610(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c6644 FUN_1472c6644 body=42 status=ok
// SIG undefined FUN_1472c6644(void)

void FUN_1472c6644(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c667a FUN_1472c667a body=96 status=ok
// SIG undefined FUN_1472c667a(void)

undefined8 FUN_1472c667a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1414881a4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43e58,1);
  return uVar3;
}



// FUNCTION 1472c66da FUN_1472c66da body=52 status=ok
// SIG undefined FUN_1472c66da(void)

void FUN_1472c66da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c670e FUN_1472c670e body=776 status=ok
// SIG undefined FUN_1472c670e(void)

void FUN_1472c670e(int param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0x14 < param_1) {
    FUN_144a5dc74(local_98);
    if (param_2 == 0) {
      local_58 = L"UpdateReflectionCaptures";
      local_50 = 0x18;
      FUN_1446e940c(&local_68,&local_58);
      local_58 = L"Engine";
      local_50 = 6;
      FUN_1446e940c(&local_78,&local_58);
      FUN_140208bae(&local_58,&local_78,&local_68,L"Building reflection captures...");
      FUN_140008f88(local_98,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
    }
    else {
      FUN_140056680(local_c8,param_2);
      FUN_140233b1a(local_b8,local_c8);
      local_58 = L"UpdateReflectionCapturesForX";
      local_50 = 0x1c;
      FUN_1446e940c(local_ec,&local_58);
      local_58 = L"Engine";
      local_50 = 6;
      FUN_1446e940c(local_f0,&local_58);
      FUN_140208bae(local_e8,local_f0,local_ec,L"Building reflection captures for {0}");
      FUN_14023409e(&local_d8,local_e8,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_b8);
      local_70 = &local_38;
      local_78 = &local_58;
      FUN_14010d304(&local_68);
      local_88 = local_d8;
      local_80 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_a8,&local_88,&local_68);
      FUN_14007f2db(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))(local_d0);
          }
        }
      }
      if (local_b8[0] != (longlong *)0x0) {
        (**(code **)(*local_b8[0] + 0x10))();
      }
      FUN_140008f88(local_98,local_a8);
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_146810a92(DAT_14c872be8,local_98,1,0);
    FUN_146810bda(DAT_14c872be8,0,param_1,local_98);
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c6a3e FUN_1472c6a3e body=230 status=ok
// SIG undefined FUN_1472c6a3e(void)

void FUN_1472c6a3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14153eeb6();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43cc0,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_14153eeb6();
  FUN_1472d0b7a(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c6b26 FUN_1472c6b26 body=230 status=ok
// SIG undefined FUN_1472c6b26(void)

void FUN_1472c6b26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145daab66();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43d48,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145daab66();
  FUN_1472d0d04(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c6c0e FUN_1472c6c0e body=42 status=ok
// SIG undefined FUN_1472c6c0e(void)

void FUN_1472c6c0e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c6c44 FUN_1472c6c44 body=96 status=ok
// SIG undefined FUN_1472c6c44(void)

undefined8 FUN_1472c6c44(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3596e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43ee0,1);
  return uVar3;
}



// FUNCTION 1472c6ca4 FUN_1472c6ca4 body=52 status=ok
// SIG undefined FUN_1472c6ca4(void)

void FUN_1472c6ca4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c6cd8 FUN_1472c6cd8 body=42 status=ok
// SIG undefined FUN_1472c6cd8(void)

void FUN_1472c6cd8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c6d0e FUN_1472c6d0e body=96 status=ok
// SIG undefined FUN_1472c6d0e(void)

undefined8 FUN_1472c6d0e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7586c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43f68,1);
  return uVar3;
}



// FUNCTION 1472c6d6e FUN_1472c6d6e body=52 status=ok
// SIG undefined FUN_1472c6d6e(void)

void FUN_1472c6d6e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c6da2 FUN_1472c6da2 body=42 status=ok
// SIG undefined FUN_1472c6da2(void)

void FUN_1472c6da2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c6dd8 FUN_1472c6dd8 body=96 status=ok
// SIG undefined FUN_1472c6dd8(void)

undefined8 FUN_1472c6dd8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5c07c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca43ff0,1);
  return uVar3;
}



// FUNCTION 1472c6e38 FUN_1472c6e38 body=52 status=ok
// SIG undefined FUN_1472c6e38(void)

void FUN_1472c6e38(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c6e6c FUN_1472c6e6c body=230 status=ok
// SIG undefined FUN_1472c6e6c(void)

void FUN_1472c6e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f3596e();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43ee0,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f3596e();
  FUN_1472d0fd8(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c6f54 FUN_1472c6f54 body=230 status=ok
// SIG undefined FUN_1472c6f54(void)

void FUN_1472c6f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e7586c();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43f68,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e7586c();
  FUN_1472d1204(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c703c FUN_1472c703c body=230 status=ok
// SIG undefined FUN_1472c703c(void)

void FUN_1472c703c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145e5c07c();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43ff0,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145e5c07c();
  FUN_1472d13ac(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c7124 FUN_1472c7124 body=42 status=ok
// SIG undefined FUN_1472c7124(void)

void FUN_1472c7124(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c716e FUN_1472c716e body=96 status=ok
// SIG undefined FUN_1472c716e(void)

undefined8 FUN_1472c716e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141597c8c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44078,1);
  return uVar3;
}



// FUNCTION 1472c71ce FUN_1472c71ce body=52 status=ok
// SIG undefined FUN_1472c71ce(void)

void FUN_1472c71ce(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c7202 FUN_1472c7202 body=42 status=ok
// SIG undefined FUN_1472c7202(void)

void FUN_1472c7202(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c724c FUN_1472c724c body=96 status=ok
// SIG undefined FUN_1472c724c(void)

undefined8 FUN_1472c724c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158fbc0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44100,1);
  return uVar3;
}



// FUNCTION 1472c72ac FUN_1472c72ac body=52 status=ok
// SIG undefined FUN_1472c72ac(void)

void FUN_1472c72ac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c72e0 FUN_1472c72e0 body=42 status=ok
// SIG undefined FUN_1472c72e0(void)

void FUN_1472c72e0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c732a FUN_1472c732a body=96 status=ok
// SIG undefined FUN_1472c732a(void)

undefined8 FUN_1472c732a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158ea52();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44188,1);
  return uVar3;
}



// FUNCTION 1472c738a FUN_1472c738a body=52 status=ok
// SIG undefined FUN_1472c738a(void)

void FUN_1472c738a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c73be FUN_1472c73be body=42 status=ok
// SIG undefined FUN_1472c73be(void)

void FUN_1472c73be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c73f4 FUN_1472c73f4 body=96 status=ok
// SIG undefined FUN_1472c73f4(void)

undefined8 FUN_1472c73f4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141574292();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44210,1);
  return uVar3;
}



// FUNCTION 1472c7454 FUN_1472c7454 body=52 status=ok
// SIG undefined FUN_1472c7454(void)

void FUN_1472c7454(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c7488 FUN_1472c7488 body=42 status=ok
// SIG undefined FUN_1472c7488(void)

void FUN_1472c7488(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c74be FUN_1472c74be body=96 status=ok
// SIG undefined FUN_1472c74be(void)

undefined8 FUN_1472c74be(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a620c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44298,1);
  return uVar3;
}



// FUNCTION 1472c751e FUN_1472c751e body=52 status=ok
// SIG undefined FUN_1472c751e(void)

void FUN_1472c751e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c7552 FUN_1472c7552 body=42 status=ok
// SIG undefined FUN_1472c7552(void)

void FUN_1472c7552(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472c7588 FUN_1472c7588 body=96 status=ok
// SIG undefined FUN_1472c7588(void)

undefined8 FUN_1472c7588(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415784e4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca44320,1);
  return uVar3;
}



// FUNCTION 1472c75e8 FUN_1472c75e8 body=52 status=ok
// SIG undefined FUN_1472c75e8(void)

void FUN_1472c75e8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472c761c FUN_1472c761c body=783 status=ok
// SIG undefined FUN_1472c761c(void)

void FUN_1472c761c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auStack_5f8 [32];
  wchar_t **local_5d8;
  undefined8 local_5d0;
  undefined4 local_5c8;
  undefined8 local_5c0;
  wchar_t *local_5b8;
  undefined1 local_5a9;
  undefined8 local_5a8 [64];
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined8 local_398;
  longlong local_390;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_5f8;
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar8 + 4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x30);
    puVar8 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar8 + 4;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar3;
  *puVar8 = &PTR_FUN_14a241850;
  puVar8[2] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar8;
  if (-1 < *(char *)(*(longlong *)(param_4 + 0xb8) + 0x129)) {
    lVar4 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa8) == 0) {
      lVar4 = param_4;
    }
    if (*(longlong *)(lVar4 + 8) != 0) {
      *(uint *)(lVar4 + 0x54) = *(uint *)(lVar4 + 0x54) & 0xfffffff8 | 2;
      memcpy(&local_3a8,*(void **)(*(longlong *)(lVar4 + 8) + 0x20),0x360);
      FUN_14716a100(local_5a8,&local_3a8);
      local_5d8 = (wchar_t **)&local_5a9;
      local_5a9 = 0;
      local_5b8 = L"SinglePrimitiveUniformView";
      local_5c8 = 0x210100;
      local_5c0 = 0;
      uVar6 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar6 = DAT_14ca84e48;
      }
      uVar7 = 0x400;
      if (DAT_14ca84e48 < 0x400) {
        uVar7 = DAT_14ca84e48;
      }
      local_5d0 = (wchar_t *)CONCAT44(uVar7 + (uVar7 == 0),uVar6 + (uVar6 == 0));
      lVar4 = FUN_144738de6(param_2 + 0x188,plVar1);
      local_5d8 = (wchar_t **)((ulonglong)local_5d8 & 0xffffffffffffff00);
      FUN_1447759b4(param_2,lVar4,local_5a8,0x200);
      if (lVar4 != 0) goto LAB_1472c786d;
    }
  }
  FUN_145c60944(&local_3a8);
  FUN_14716a100(local_5a8,&local_3a8);
  local_5d8 = &local_5b8;
  local_5b8 = (wchar_t *)((ulonglong)local_5b8 & 0xffffffffffffff00);
  local_5d0 = L"SinglePrimitiveUniformView";
  uStack_3a0 = 0x210100;
  local_398 = 0;
  local_3a8._0_4_ = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    local_3a8._0_4_ = DAT_14ca84e48;
  }
  local_3a8._0_4_ = (uint)local_3a8 + ((uint)local_3a8 == 0);
  uVar6 = 0x400;
  if (DAT_14ca84e48 < 0x400) {
    uVar6 = DAT_14ca84e48;
  }
  local_3a8._4_4_ = uVar6 + (uVar6 == 0);
  lVar4 = FUN_144738de6(param_2 + 0x188,plVar1,&local_5d0,&local_3a8);
  local_5d8 = (wchar_t **)((ulonglong)local_5d8 & 0xffffffffffffff00);
  FUN_1447759b4(param_2,lVar4,local_5a8,0x200);
LAB_1472c786d:
  uVar6 = (uint)local_3a8 >> 8;
  local_3a8._0_4_ = (uint)local_3a8 & 0xffffff00;
  local_3a8._4_4_ = 0;
  uStack_3a0 = 0xffffffff;
  local_398 = 0;
  if ((*(byte *)(lVar4 + 0x68) & 0x80) != 0) {
    local_3a8._0_4_ = CONCAT31((int3)uVar6,0x1c);
  }
  local_390 = lVar4;
  uVar5 = FUN_14475683e(param_2 + 0x198,plVar1,lVar4 + 8,&local_3a8);
  puVar8[2] = uVar5;
  local_3a8 = puVar8 + 2;
  lVar4 = FUN_144a92736();
  local_5a8[0] = *(undefined8 *)(lVar4 + 0x18);
  FUN_1471cffa6(param_2 + 0x1a8,plVar1,&local_3a8);
  if ((local_40 ^ (ulonglong)auStack_5f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c7947 FUN_1472c7947 body=125 status=ok
// SIG undefined FUN_1472c7947(void)

undefined4 * FUN_1472c7947(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0x3f800000;
  cVar1 = FUN_140653b22();
  if (cVar1 != '\0') {
    cVar1 = FUN_140102e2b();
    if (((cVar1 == '\0') && (*(char *)(DAT_14ca43218 + 1) == '\x01')) &&
       (*(char *)(DAT_14ca43278 + 1) == '\x01')) {
      uVar2 = *(undefined4 *)(DAT_14ca432a8 + 4);
      uVar3 = *(undefined4 *)(DAT_14ca43290 + 4);
    }
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return param_1;
}



// FUNCTION 1472c79c4 FUN_1472c79c4 body=40 status=ok
// SIG undefined FUN_1472c79c4(void)

longlong * FUN_1472c79c4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20 + (ulonglong)*(byte *)(param_1 + 0x41) * 8);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  return param_2;
}



// FUNCTION 1472c79ec FUN_1472c79ec body=40 status=ok
// SIG undefined FUN_1472c79ec(void)

longlong * FUN_1472c79ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30 + (ulonglong)*(byte *)(param_1 + 0x41) * 8);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
  }
  return param_2;
}



// FUNCTION 1472c7a14 FUN_1472c7a14 body=116 status=ok
// SIG undefined FUN_1472c7a14(void)

void FUN_1472c7a14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar2) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + uVar3 * 8) == param_2) {
        if (uVar2 - 1 != (int)uVar3) {
          memmove((void *)(lVar1 + uVar3 * 8),(void *)(lVar1 + uVar3 * 8 + 8),
                  (longlong)(int)((uVar2 - 1) - (int)uVar3) << 3);
          uVar2 = *(uint *)(param_1 + 0x28);
        }
        *(uint *)(param_1 + 0x28) = uVar2 - 1;
        FUN_1472d2950((longlong *)(param_1 + 0x20));
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  FUN_1472c7a88(param_1,param_2);
  return;
}



// FUNCTION 1472c7a88 FUN_1472c7a88 body=201 status=ok
// SIG undefined FUN_1472c7a88(void)

void FUN_1472c7a88(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  uVar4 = FUN_144a78877(uVar3,0xffffffff);
  if (*(int *)(param_1 + 0x4b70) != *(int *)(param_1 + 0x4b9c)) {
    lVar6 = param_1 + 0x4ba0;
    if (*(longlong *)(param_1 + 0x4ba8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x4ba8);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x4bb0) - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x4b68) + (longlong)iVar5 * 0x18);
        if (*puVar1 == ((ulonglong)uVar3 | 0xffffffff00000000)) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          uVar2 = puVar1[1];
          if (uVar2 != 0) {
            FUN_140039218(uVar2);
            FUN_1400020a8(uVar2);
          }
          FUN_1472d287e((longlong *)(param_1 + 0x4b68),(ulonglong)uVar3 | 0xffffffff00000000);
          return;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1472c7b52 FUN_1472c7b52 body=5 status=ok
// SIG undefined FUN_1472c7b52(void)

void FUN_1472c7b52(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1472c7b68 FUN_1472c7b68 body=40 status=ok
// SIG undefined FUN_1472c7b68(void)

void FUN_1472c7b68(longlong param_1)

{
  FUN_14726347a(param_1 + 0x2af0);
  FUN_14726347a(param_1 + 0x2c20);
  return;
}



// FUNCTION 1472c7b90 FUN_1472c7b90 body=545 status=ok
// SIG undefined FUN_1472c7b90(void)

void FUN_1472c7b90(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar6 = FUN_14486f0b8(param_1 + 0x53a0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x55a0) + 0x19 + (longlong)iVar6 * 0x50) = 1;
  if (*(char *)(param_3 + 0xc) == '\x01') {
    dVar2 = *param_3;
    dVar3 = param_3[1];
    dVar4 = param_3[2];
    local_b8 = *(undefined4 *)(param_3 + 4);
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_b0 = *(undefined4 *)(param_3 + 5);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_a8 = param_3[6];
    dVar11 = dVar3 + dVar3;
    dVar7 = dVar4 + dVar4;
    dVar10 = dVar2 * (dVar2 + dVar2);
    dVar5 = param_3[8];
    local_f8 = param_3[9];
    dStack_f0 = (1.0 - (dVar4 * dVar7 + dVar10)) * local_f8;
    dStack_d0 = param_3[10];
    local_c8 = (1.0 - (dVar10 + dVar3 * dVar11)) * dStack_d0;
    dVar10 = param_3[3];
    dVar8 = dVar7 * dVar10;
    dVar9 = (dVar2 + dVar2) * param_3[3];
    dVar10 = dVar11 * dVar10;
    dVar1 = (dVar11 * dVar2 + dVar8) * dVar5;
    local_e8 = (dVar7 * dVar3 + dVar9) * local_f8;
    local_d8 = (dVar10 + *param_3 * dVar7) * dStack_d0;
    local_108 = (*param_3 * dVar7 - dVar10) * dVar5;
    local_f8 = (dVar11 * dVar2 - dVar8) * local_f8;
    dStack_d0 = (dVar7 * dVar3 - dVar9) * dStack_d0;
    local_118._8_4_ = SUB84(dVar1,0);
    local_118._0_8_ = (1.0 - (dVar4 * dVar7 + dVar3 * dVar11)) * dVar5;
    local_118._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    uStack_100 = 0;
    uStack_e0 = 0;
    uStack_c0 = 0;
    uStack_a0 = 0x3ff0000000000000;
    FUN_1472c7db2(param_1 + 0x53a0,param_2);
  }
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c7db2 FUN_1472c7db2 body=334 status=ok
// SIG undefined FUN_1472c7db2(void)

void FUN_1472c7db2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = FUN_14486f0b8();
  lVar6 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 0x80;
    *puVar3 = &PTR_FUN_14a2e7fb8;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 **)(param_1 + 0x40) = puVar3;
  }
  uVar2 = (uint)*(ulonglong *)(lVar6 + 8);
  if ((uVar2 >> 8 & 1) != 0) {
    uVar4 = (*(ulonglong *)(lVar6 + 8) & 0xff) - (ulonglong)(uVar2 >> 1 & 0x55);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    lVar5 = lVar6 + 0x20;
    if (*(longlong *)(lVar6 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x40);
    }
    iVar7 = *(int *)(lVar5 + (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             ) * 4);
    if (iVar7 != -1) goto LAB_1472c7e92;
  }
  FUN_1472d2bb4(lVar6,*(undefined4 *)(puVar3 + 5));
  iVar7 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar7 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar7);
  }
  *(int *)(puVar3[4] + (longlong)iVar7 * 4) = iVar1;
  iVar7 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar7 + 1U) {
    FUN_1472d2d42(puVar3 + 2,iVar7);
  }
LAB_1472c7e92:
  puVar3 = (undefined8 *)((longlong)iVar7 * 0x80 + puVar3[2]);
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1472c7f00 FUN_1472c7f00 body=67 status=ok
// SIG undefined FUN_1472c7f00(void)

void FUN_1472c7f00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1472d2dc8(local_14,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c7f44 FUN_1472c7f44 body=51 status=ok
// SIG undefined FUN_1472c7f44(void)

void FUN_1472c7f44(LPCRITICAL_SECTION param_1)

{
  *(undefined4 *)&param_1[2].SpinCount = 0;
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_1472cebc6(param_1 + 1);
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1472c7f78 FUN_1472c7f78 body=82 status=ok
// SIG undefined FUN_1472c7f78(void)

void FUN_1472c7f78(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined4 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = param_2;
  if (*(char *)(param_2 + 0x23) == '\0') {
    local_20 = &local_10;
    local_18 = 1;
    FUN_142f99ac0();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c7fcc FUN_1472c7fcc body=62 status=ok
// SIG undefined FUN_1472c7fcc(void)

void FUN_1472c7fcc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14020ca14();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c800c FUN_1472c800c body=62 status=ok
// SIG undefined FUN_1472c800c(void)

void FUN_1472c800c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142f99ac0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8052 FUN_1472c8052 body=68 status=ok
// SIG undefined FUN_1472c8052(void)

void FUN_1472c8052(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_142f9b650(param_1,*(undefined8 *)(param_2 + 0x3b8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8098 FUN_1472c8098 body=74 status=ok
// SIG undefined FUN_1472c8098(void)

void FUN_1472c8098(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  local_c = param_4;
  FUN_142f9bb5e(param_1,*(undefined8 *)(param_2 + 0x3b8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c80e4 FUN_1472c80e4 body=390 status=ok
// SIG undefined FUN_1472c80e4(void)

void FUN_1472c80e4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  iVar2 = FUN_14486f0b8();
  lVar8 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar4 + 1) = 0x18;
    *puVar4 = &PTR_FUN_14a2e8290;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar4;
  }
  uVar3 = (uint)*(ulonglong *)(lVar8 + 8);
  if ((uVar3 >> 9 & 1) != 0) {
    uVar6 = (ulonglong)(uVar3 & 0x1ff) - (ulonglong)((uint)(*(ulonglong *)(lVar8 + 8) >> 1) & 0x55);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    lVar5 = lVar8 + 0x20;
    if (*(longlong *)(lVar8 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar8 + 0x40);
    }
    lVar5 = (longlong)
            *(int *)(lVar5 + (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             ) * 4);
    if (lVar5 != -1) {
      puVar4 = (undefined8 *)(puVar4[2] + lVar5 * 0x18);
      puVar7 = puVar4 + 1;
      *puVar4 = *param_3;
      goto LAB_1472c81dd;
    }
  }
  FUN_1472d4556(lVar8,*(undefined4 *)(puVar4 + 5));
  iVar1 = *(int *)(puVar4 + 5);
  *(uint *)(puVar4 + 5) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2(puVar4 + 4,iVar1);
  }
  *(int *)(puVar4[4] + (longlong)iVar1 * 4) = iVar2;
  iVar2 = *(int *)(puVar4 + 3);
  *(uint *)(puVar4 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x1c) < iVar2 + 1U) {
    FUN_1472d4748(puVar4 + 2,iVar2);
  }
  puVar4 = (undefined8 *)(puVar4[2] + (longlong)iVar2 * 0x18);
  puVar7 = puVar4 + 1;
  *puVar4 = *param_3;
  *puVar7 = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
LAB_1472c81dd:
  FUN_141763b3e(puVar7,param_3 + 1);
  return;
}



// FUNCTION 1472c8300 FUN_1472c8300 body=83 status=ok
// SIG undefined FUN_1472c8300(void)

void FUN_1472c8300(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  undefined4 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = param_2;
  if (*(char *)(param_2 + 0x23) == '\0') {
    local_20 = &local_10;
    local_18 = 1;
    (**(code **)(*param_1 + 0x40))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472c8354 FUN_1472c8354 body=62 status=ok
// SIG undefined FUN_1472c8354(void)

void FUN_1472c8354(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_142f9ceba();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


