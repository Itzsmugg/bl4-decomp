// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14702f2d7 FUN_14702f2d7 body=48 status=ok
// SIG undefined FUN_14702f2d7(void)

void FUN_14702f2d7(int param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_14702f307(param_5,param_2,*param_3,*param_4,*(int *)(param_3 + 1) / param_1,param_5,param_6);
  return;
}



// FUNCTION 14702f307 FUN_14702f307 body=349 status=ok
// SIG undefined FUN_14702f307(void)

void FUN_14702f307(uint param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,
                  longlong param_6,longlong param_7)

{
  float fVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_178 [40];
  longlong local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar5 = (ulonglong)param_2;
  if (0 < (int)param_2) {
    puVar3 = local_148;
    uVar7 = 0;
    lVar8 = param_6;
    do {
      if (0 < (int)param_1) {
        lVar4 = 0;
        uVar6 = (ulonglong)param_1;
        do {
          *(float *)(puVar3 + lVar4) =
               (*(float *)(param_7 + lVar4) - *(float *)(lVar8 + lVar4)) / (float)(int)param_5;
          lVar4 = lVar4 + uVar5 * 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar7 = uVar7 + 1;
      puVar3 = puVar3 + 4;
      lVar8 = lVar8 + 4;
      param_7 = param_7 + 4;
    } while (uVar7 != uVar5);
  }
  if (0 < (int)param_5) {
    uVar7 = 0;
    do {
      if (0 < (int)param_2) {
        puVar3 = local_148;
        uVar6 = 0;
        lVar8 = param_6;
        do {
          fVar9 = 0.0;
          if (0 < (int)param_1) {
            lVar4 = 0;
            uVar2 = 0;
            do {
              fVar1 = *(float *)(lVar8 + lVar4 * 4);
              fVar9 = fVar9 + *(float *)(param_3 + uVar2 * 4) * fVar1;
              *(float *)(lVar8 + lVar4 * 4) = fVar1 + *(float *)(puVar3 + lVar4 * 4);
              uVar2 = uVar2 + 1;
              lVar4 = lVar4 + uVar5;
            } while (param_1 != uVar2);
          }
          *(float *)(param_4 + uVar7 * (longlong)(int)param_2 * 4 + uVar6 * 4) = fVar9;
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 4;
          lVar8 = lVar8 + 4;
        } while (uVar6 != uVar5);
      }
      uVar7 = uVar7 + 1;
      param_3 = param_3 + (longlong)(int)param_1 * 4;
    } while (uVar7 != param_5);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
  local_150 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702f465 FUN_14702f465 body=188 status=ok
// SIG undefined FUN_14702f465(void)

void FUN_14702f465(uint param_1,uint param_2,longlong *param_3,longlong *param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar3 = (longlong)(int)param_3[1] / (longlong)(int)param_1;
  if (0 < (int)uVar3) {
    lVar2 = *param_4;
    lVar6 = *param_3;
    uVar9 = 0;
    do {
      if (0 < (int)param_2) {
        lVar1 = lVar2 + uVar9 * (longlong)(int)param_2 * 4;
        uVar5 = 0;
        pfVar4 = param_5;
        do {
          fVar10 = 0.0;
          if (0 < (int)param_1) {
            uVar7 = 0;
            pfVar8 = pfVar4;
            do {
              fVar10 = fVar10 + *(float *)(lVar6 + uVar7 * 4) * *pfVar8;
              uVar7 = uVar7 + 1;
              pfVar8 = pfVar8 + param_2;
            } while (param_1 != uVar7);
          }
          *(float *)(lVar1 + uVar5 * 4) = fVar10 + *(float *)(lVar1 + uVar5 * 4);
          uVar5 = uVar5 + 1;
          pfVar4 = pfVar4 + 1;
        } while (uVar5 != param_2);
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + (longlong)(int)param_1 * 4;
    } while (uVar9 != (uVar3 & 0xffffffff));
  }
  return;
}



// FUNCTION 14702f521 FUN_14702f521 body=175 status=ok
// SIG undefined FUN_14702f521(void)

void FUN_14702f521(uint param_1,uint param_2,longlong param_3,longlong param_4,uint param_5,
                  float *param_6)

{
  longlong lVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float *pfVar5;
  ulonglong uVar6;
  float fVar7;
  
  if (0 < (int)param_5) {
    uVar6 = 0;
    do {
      if (0 < (int)param_2) {
        lVar1 = param_4 + uVar6 * (longlong)(int)param_2 * 4;
        uVar3 = 0;
        pfVar2 = param_6;
        do {
          fVar7 = 0.0;
          if (0 < (int)param_1) {
            uVar4 = 0;
            pfVar5 = pfVar2;
            do {
              fVar7 = fVar7 + *(float *)(param_3 + uVar4 * 4) * *pfVar5;
              uVar4 = uVar4 + 1;
              pfVar5 = pfVar5 + param_2;
            } while (param_1 != uVar4);
          }
          *(float *)(lVar1 + uVar3 * 4) = fVar7 + *(float *)(lVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
          pfVar2 = pfVar2 + 1;
        } while (uVar3 != param_2);
      }
      uVar6 = uVar6 + 1;
      param_3 = param_3 + (longlong)(int)param_1 * 4;
    } while (uVar6 != param_5);
  }
  return;
}



// FUNCTION 14702f655 FUN_14702f655 body=181 status=ok
// SIG undefined FUN_14702f655(void)

void FUN_14702f655(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar11 = param_1[1];
  uVar13 = (int)lVar11 / 2;
  FUN_14702dc6a(param_2,uVar13);
  FUN_14702dc6a(param_3,uVar13);
  lVar12 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar12 + uVar13;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar12) < uVar13) {
    FUN_145ca0cd4(param_2);
  }
  lVar12 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar12 + uVar13;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar12) < uVar13) {
    FUN_145ca0cd4(param_3);
  }
  if (1 < (int)lVar11) {
    lVar11 = *param_3;
    lVar12 = *param_2;
    lVar3 = *param_1;
    uVar14 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + uVar14 * 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(lVar3 + 0x10 + uVar14 * 4);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)(lVar12 + uVar14 * 2);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar7;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(lVar11 + uVar14 * 2);
      *puVar1 = uVar4;
      puVar1[1] = uVar6;
      puVar1[2] = uVar8;
      puVar1[3] = uVar10;
      uVar14 = uVar14 + 8;
    } while (uVar14 < uVar13 * 2);
  }
  return;
}



// FUNCTION 14702f70a FUN_14702f70a body=37 status=ok
// SIG undefined FUN_14702f70a(void)

void FUN_14702f70a(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  
  if (0 < param_3) {
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + uVar9 * 4);
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      pfVar2 = (float *)(param_1 + 0x10 + uVar9 * 4);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar2 = (float *)(param_2 + uVar9 * 2);
      *pfVar2 = *pfVar1 + pfVar1[1];
      pfVar2[1] = fVar3 + fVar4;
      pfVar2[2] = fVar5 + fVar6;
      pfVar2[3] = fVar7 + fVar8;
      uVar9 = uVar9 + 8;
    } while (uVar9 < (uint)(param_3 * 2));
  }
  return;
}



// FUNCTION 14702f72f FUN_14702f72f body=140 status=ok
// SIG undefined FUN_14702f72f(void)

void FUN_14702f72f(int param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (0 < param_1) {
    lVar2 = *(longlong *)(L"au.debug.bufferdiagnostics" + (longlong)(int)param_2 * 4 + 0x19);
    iVar3 = 0;
    do {
      uVar4 = (ulonglong)param_2;
      iVar5 = iVar3;
      if (0 < (int)param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_14475e4ac(param_3,iVar1);
          }
          *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) =
               *(undefined4 *)(lVar2 + (longlong)iVar5 * 4);
          iVar5 = iVar5 + 8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_1);
  }
  return;
}



// FUNCTION 14702f7bb FUN_14702f7bb body=474 status=ok
// SIG undefined FUN_14702f7bb(void)

void FUN_14702f7bb(uint param_1,char param_2,byte param_3,longlong *param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 == 1) {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
      FUN_14475e4ac(param_4,iVar2);
    }
    *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = 0x3f800000;
    return;
  }
  if (((4 < (int)param_1 || param_1 == 3) & param_3) == 1) {
    uVar3 = 0;
    do {
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      uVar5 = 0x3f800000;
      if (uVar3 != 2) {
        uVar5 = 0;
      }
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_14475e4ac(param_4,iVar2);
      }
      *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = uVar5;
      uVar3 = uVar3 + 1;
    } while (param_1 != uVar3);
    return;
  }
  if (param_2 == '\x02') {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
      FUN_14475e4ac(param_4,iVar2);
    }
    *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = 0x3f800000;
    iVar2 = (int)param_4[1];
    uVar3 = iVar2 + 1;
    *(uint *)(param_4 + 1) = uVar3;
    uVar5 = 0x3f800000;
  }
  else if (param_2 == '\x01') {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
      FUN_14475e4ac(param_4,iVar2);
    }
    *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = 0x3f34fdf4;
    iVar2 = (int)param_4[1];
    uVar3 = iVar2 + 1;
    *(uint *)(param_4 + 1) = uVar3;
    uVar5 = 0x3f34fdf4;
  }
  else {
    if (param_2 != '\0') goto LAB_14702f938;
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
      FUN_14475e4ac(param_4,iVar2);
    }
    *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = 0x3f000000;
    iVar2 = (int)param_4[1];
    uVar3 = iVar2 + 1;
    *(uint *)(param_4 + 1) = uVar3;
    uVar5 = 0x3f000000;
  }
  if (*(uint *)((longlong)param_4 + 0xc) < uVar3) {
    FUN_14475e4ac(param_4,iVar2);
  }
  *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = uVar5;
LAB_14702f938:
  if (2 < (int)param_1) {
    puVar1 = (&PTR_DAT_14a1351f0)[(int)(param_1 - 1)];
    lVar4 = 0x10;
    do {
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_14475e4ac(param_4,iVar2);
      }
      *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) =
           *(undefined4 *)(puVar1 + (longlong)(int)lVar4 * 4);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)param_1 << 3 != lVar4);
  }
  return;
}



// FUNCTION 14702f995 FUN_14702f995 body=277 status=ok
// SIG undefined FUN_14702f995(void)

void FUN_14702f995(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < (int)param_1) {
    lVar2 = *(longlong *)(L"au.debug.bufferdiagnostics" + (longlong)(int)param_1 * 4 + 0x19);
    lVar3 = (ulonglong)param_1 << 3;
    lVar4 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) =
           *(undefined4 *)(lVar2 + (longlong)(int)lVar4 * 4);
      lVar4 = lVar4 + 8;
    } while (lVar3 != lVar4);
    lVar4 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) =
           *(undefined4 *)(lVar2 + (longlong)((int)lVar4 + 1) * 4);
      lVar4 = lVar4 + 8;
    } while (lVar3 != lVar4);
    lVar4 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) =
           *(undefined4 *)(lVar2 + (longlong)((int)lVar4 + 4) * 4);
      lVar4 = lVar4 + 8;
    } while (lVar3 != lVar4);
    lVar4 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14475e4ac(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) =
           *(undefined4 *)(lVar2 + (longlong)((int)lVar4 + 5) * 4);
      lVar4 = lVar4 + 8;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 14702faaa FUN_14702faaa body=228 status=ok
// SIG undefined FUN_14702faaa(void)

void FUN_14702faaa(uint param_1,int param_2,longlong *param_3)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar5 = (longlong)local_40;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1447c510a(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar5 << 2);
  }
  if (0 < (int)param_1) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      if (0 < param_2) {
        lVar5 = (longlong)iVar1;
        uVar4 = uVar2;
        iVar3 = param_2;
        do {
          *(undefined4 *)(*param_3 + uVar4 * 4) = *(undefined4 *)((longlong)local_48 + lVar5 * 4);
          lVar5 = lVar5 + 1;
          uVar4 = uVar4 + param_1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + param_2;
    } while (uVar2 != param_1);
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



// FUNCTION 14702fb8f FUN_14702fb8f body=117 status=ok
// SIG undefined FUN_14702fb8f(void)

bool FUN_14702fb8f(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uVar3 = iVar1 - 1U | iVar2 - 1U;
  if (uVar3 < 8) {
    if (iVar1 == 4) {
      FUN_14702f995(iVar2,param_2);
    }
    else if (iVar1 == 1) {
      FUN_14702f7bb(iVar2,CONCAT31((int3)(iVar2 - 1U >> 8),*(undefined1 *)((longlong)param_1 + 9)),
                    *(undefined1 *)((longlong)param_1 + 10),param_2);
    }
    else {
      FUN_14702f72f(iVar1,iVar2,param_2);
    }
    if ((char)param_1[2] == '\x01') {
      FUN_14702faaa(*param_1,param_1[1],param_2);
    }
  }
  return uVar3 < 8;
}



// FUNCTION 14702fc04 FUN_14702fc04 body=175 status=ok
// SIG undefined FUN_14702fc04(void)

bool FUN_14702fc04(uint param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar3 = param_1 - 1;
  if (uVar3 < 8) {
    puVar5 = &DAT_14a135230 + *(int *)(&DAT_14a135230 + (ulonglong)uVar3 * 4);
    iVar4 = 0;
    do {
      lVar2 = 0;
      do {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(puVar5 + lVar2);
        lVar2 = lVar2 + 0x18;
      } while ((ulonglong)param_1 * 0x18 != lVar2);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar4 != 6);
    if (param_2 == '\x01') {
      FUN_14702faaa(6,param_1,param_3);
    }
  }
  return uVar3 < 8;
}



// FUNCTION 14702fcb4 FUN_14702fcb4 body=88 status=ok
// SIG undefined FUN_14702fcb4(void)

undefined8 * FUN_14702fcb4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470345a0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14702fd0c FUN_14702fd0c body=124 status=ok
// SIG undefined FUN_14702fd0c(void)

void FUN_14702fd0c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ca0cd4(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147034658(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14702fd8a FUN_14702fd8a body=78 status=ok
// SIG undefined FUN_14702fd8a(void)

void FUN_14702fd8a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ca0cd4();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147034658();
      return;
    }
  }
  return;
}



// FUNCTION 14702fdd9 FUN_14702fdd9 body=432 status=ok
// SIG undefined FUN_14702fdd9(void)

void FUN_14702fdd9(float param_1,float param_2,int param_3,float param_4,longlong *param_5,
                  int *param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = param_4 * 0.5;
  fVar8 = param_1 - param_2 * 6.0697083;
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar6 = param_2 * 6.0697083 + param_1;
  if (fVar9 <= fVar6) {
    fVar6 = fVar9;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar10 = (float)param_3;
  fVar9 = (fVar8 * fVar10) / param_4;
  fVar8 = (fVar6 * fVar10) / param_4;
  iVar2 = (int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1;
  uVar1 = ((int)ROUND(fVar8 + fVar8 + -0.5) >> 1) + iVar2;
  iVar2 = -iVar2;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    uVar4 = uVar1;
  }
  *param_6 = iVar2;
  FUN_14702dc6a(param_5,uVar4 + 1);
  lVar3 = param_5[1];
  *(uint *)(param_5 + 1) = uVar4 + (int)lVar3 + 1;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar3) <= uVar4) {
    FUN_145ca0cd4(param_5);
  }
  uVar5 = 0;
  do {
    fVar8 = ((float)(iVar2 + (int)uVar5) * param_4) / fVar10 - param_1;
    dVar7 = exp(((double)(fVar8 * fVar8) * -0.5) / (double)(param_2 * param_2));
    *(float *)(*param_5 + uVar5 * 4) = (float)dVar7;
    uVar5 = uVar5 + 1;
  } while (uVar4 + 1 != uVar5);
  if (0 < (int)param_5[1]) {
    lVar3 = 0;
    do {
      iVar2 = _finite((double)*(float *)(*param_5 + lVar3 * 4));
      if (iVar2 == 0) {
        *(undefined4 *)(*param_5 + lVar3 * 4) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_5[1]);
  }
  return;
}



// FUNCTION 14702ff8a FUN_14702ff8a body=39 status=ok
// SIG undefined FUN_14702ff8a(void)

float FUN_14702ff8a(int param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)exp2f((float)param_1 / param_3);
  return fVar1 * param_2;
}



// FUNCTION 14702ffb2 FUN_14702ffb2 body=627 status=ok
// SIG undefined FUN_14702ffb2(void)

void FUN_14702ffb2(float *param_1,longlong *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int *local_70;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar1 = param_1[2];
  *param_3 = 0;
  fVar7 = 1e-08;
  if (1e-08 <= param_1[1]) {
    fVar7 = param_1[1];
  }
  local_78 = param_2;
  local_70 = param_3;
  FUN_14702fdd9(*param_1,fVar7,param_1[2],param_1[3]);
  fVar8 = 1.0 / (float)(int)param_1[2];
  if (1.0 / (float)(int)param_1[2] <= fVar7 / param_1[3]) {
    fVar8 = fVar7 / param_1[3];
  }
  if ((int)param_2[1] < 1) goto LAB_147030137;
  local_64 = 0.0;
  FUN_1421c56b0(*param_2);
  if (0.95 <= local_64) goto LAB_147030137;
  memset((void *)*param_2,0,(longlong)(int)param_2[1] << 2);
  fVar7 = ((float)(int)param_1[2] * *param_1) / param_1[3] - (float)*param_3;
  uVar4 = (int)ROUND(fVar7 + fVar7 + -0.5) >> 1;
  uVar3 = uVar4 + 1;
  iVar2 = (int)param_2[1];
  if ((int)uVar4 < 0) {
LAB_147030108:
    if (iVar2 <= (int)uVar3 || (int)uVar4 < -1) goto LAB_147030137;
    lVar5 = *param_2;
LAB_14703011d:
    fVar7 = 1.0;
  }
  else {
    if (iVar2 <= (int)uVar3) {
      if (iVar2 <= (int)uVar4) goto LAB_147030108;
      lVar5 = *param_2;
      uVar3 = uVar4;
      goto LAB_14703011d;
    }
    *(float *)(*param_2 + (ulonglong)uVar4 * 4) = ((float)(int)uVar4 - fVar7) + 1.0;
    lVar5 = *param_2;
    fVar7 = 1.0 - *(float *)(lVar5 + (ulonglong)uVar4 * 4);
  }
  *(float *)(lVar5 + (ulonglong)uVar3 * 4) = fVar7;
  fVar8 = 1.0 / (float)(int)param_1[2];
LAB_147030137:
  if (*(char *)(param_1 + 4) != '\0') {
    if (*(char *)(param_1 + 4) == '\x01') {
      fVar7 = fVar8 * (float)(int)param_1[2] * 2.5066283;
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
    }
    else {
      fVar7 = fVar8 * (float)(int)param_1[2] * 2.5066283;
    }
    if ((0.0 < fVar7) && ((fVar7 != 1.0 || (NAN(fVar7))))) {
      FUN_1421c4f70(*param_2,(int)param_2[1],1.0 / fVar7);
    }
  }
  iVar2 = *param_3;
  if ((int)fVar1 / 2 < iVar2) {
    *param_3 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1470345fa(param_2,0);
    }
  }
  else {
    iVar6 = (int)fVar1 / 2 + 1;
    if (iVar6 < (int)param_2[1] + iVar2) {
      FUN_147030226(param_2,iVar6 - iVar2,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147030226 FUN_147030226 body=124 status=ok
// SIG undefined FUN_147030226(void)

void FUN_147030226(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ca0cd4(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_147034658(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1470302a3 FUN_1470302a3 body=560 status=ok
// SIG undefined FUN_1470302a3(void)

undefined8 * FUN_1470302a3(undefined8 *param_1,int *param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  iVar3 = *param_2;
  *puVar2 = &PTR_FUN_14a1354f8;
  *(int *)(puVar2 + 1) = ((int)(((uint)(param_3 >> 0x1f) & 1) + (int)param_3) >> 1) + 1;
  *(int *)((longlong)puVar2 + 0xc) = iVar3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  local_d8 = 0.0;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_147034012(puVar2 + 2,&local_d8);
  *param_1 = puVar2;
  local_d0 = CONCAT44(param_4,(int)param_3);
  uStack_c8 = CONCAT71(uStack_c8._1_7_,(char)param_2[4]);
  if (0 < *param_2) {
    iVar3 = 0;
    do {
      fVar1 = (float)param_2[2];
      fVar4 = (float)exp2f((float)iVar3 / (float)param_2[1]);
      fVar4 = fVar4 * fVar1;
      fVar1 = (float)param_2[3];
      local_d8 = fVar4;
      fVar5 = (float)exp2f(1.0 / (float)param_2[1]);
      local_d4 = (fVar5 + -1.0) * fVar1 * fVar4;
      if ((fVar4 <= param_4 + param_4) && (fVar4 - local_d4 <= param_4)) {
        local_e8 = 0;
        uStack_e0 = 0;
        local_ec = 0;
        FUN_14702ffb2(&local_d8,&local_e8,&local_ec);
        local_100 = local_e8;
        local_f8 = (undefined4)uStack_e0;
        FUN_1470304d4(puVar2,iVar3,local_ec,&local_100);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_2);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470304d4 FUN_1470304d4 body=254 status=ok
// SIG undefined FUN_1470304d4(void)

void FUN_1470304d4(longlong param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  void **ppvVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x18) = param_3;
  uVar2 = *(uint *)(param_4 + 1);
  _Src = (void *)*param_4;
  local_40 = (void *)0x0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar2);
  }
  local_38 = CONCAT44(local_38._4_4_,uVar2);
  if (uVar2 == 0) {
    local_38 = 0;
  }
  else {
    FUN_1447c510a(&local_40,uVar2,0);
    memcpy(local_40,_Src,(ulonglong)uVar2 * 4);
  }
  lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x18;
  ppvVar3 = (void **)(lVar1 + 8);
  if (ppvVar3 != &local_40) {
    if (*ppvVar3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar3 = local_40;
    local_40 = (void *)0x0;
    *(undefined4 *)(lVar1 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(lVar1 + 0x14) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470305d4 FUN_1470305d4 body=139 status=ok
// SIG undefined FUN_1470305d4(void)

void FUN_1470305d4(longlong param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18) * 0.5 * 0.9;
  if (fVar1 <= param_3) {
    param_3 = fVar1;
  }
  if (param_3 <= 5.0) {
    param_3 = 5.0;
  }
  if ((((*(int *)(param_1 + 8) == param_2) && (ABS(*(float *)(param_1 + 0x20) - param_3) <= 1e-08))
      && (ABS(*(float *)(param_1 + 0x24) - param_4) <= 1e-08)) &&
     (ABS(*(float *)(param_1 + 0x28) - param_5) <= 1e-08)) {
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  *(float *)(param_1 + 0x20) = param_3;
  *(float *)(param_1 + 0x24) = param_4;
  *(float *)(param_1 + 0x28) = param_5;
  FUN_147033a80();
  return;
}



// FUNCTION 147030660 FUN_147030660 body=36 status=ok
// SIG undefined FUN_147030660(void)

void FUN_147030660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1354f0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 147030684 FUN_147030684 body=24 status=ok
// SIG undefined FUN_147030684(void)

void FUN_147030684(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a1354f0;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14703069c FUN_14703069c body=241 status=ok
// SIG undefined FUN_14703069c(void)

void FUN_14703069c(longlong param_1,float param_2,int param_3,undefined4 param_4,float param_5,
                  undefined4 param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float fVar8;
  
  *(float *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  fVar8 = param_2 * 0.5 * 0.9;
  if (fVar8 <= param_5) {
    param_5 = fVar8;
  }
  if (param_5 <= 5.0) {
    param_5 = 5.0;
  }
  *(float *)(param_1 + 0x20) = param_5;
  *(undefined4 *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x28) = param_7;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1400020a8();
    param_3 = *(int *)(param_1 + 0x1c);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)param_3;
  uVar5 = 0xffffffffffffffff;
  if (SUB168(auVar2 * ZEXT816(0x24),8) == 0) {
    uVar5 = SUB168(auVar2 * ZEXT816(0x24),0);
  }
  puVar3 = (undefined4 *)FUN_144a7d36f(uVar5);
  if (param_3 == 0) {
    *(undefined4 **)(param_1 + 0x10) = puVar3;
  }
  else {
    puVar7 = puVar3;
    do {
      *puVar7 = 0x3f800000;
      *(undefined8 *)(puVar7 + 1) = 0;
      *(undefined8 *)(puVar7 + 3) = 0;
      *(undefined8 *)(puVar7 + 5) = 0;
      *(undefined8 *)(puVar7 + 7) = 0;
      puVar7 = puVar7 + 9;
    } while (puVar7 != puVar3 + (longlong)param_3 * 9);
    *(undefined4 **)(param_1 + 0x10) = puVar3;
    if (0 < param_3) {
      lVar4 = 0x14;
      lVar6 = 0;
      do {
        lVar6 = lVar6 + 1;
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar4 = lVar4 + 0x24;
      } while (lVar6 < *(int *)(param_1 + 0x1c));
    }
  }
  FUN_147033a80(param_1);
  return;
}



// FUNCTION 14703078e FUN_14703078e body=172 status=ok
// SIG undefined FUN_14703078e(void)

void FUN_14703078e(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x10);
      fVar1 = *(float *)(param_2 + lVar6 * 4);
      fVar2 = *(float *)(lVar4 + -0xc + lVar5 * 4);
      fVar3 = *(float *)(lVar4 + -4 + lVar5 * 4);
      fVar7 = ((*(float *)(lVar4 + -0x18 + lVar5 * 4) * *(float *)(lVar4 + -8 + lVar5 * 4) +
               *(float *)(lVar4 + -0x20 + lVar5 * 4) * fVar1 +
               *(float *)(lVar4 + -0x1c + lVar5 * 4) * fVar2) -
              *(float *)(lVar4 + -0x14 + lVar5 * 4) * fVar3) -
              *(float *)(lVar4 + -0x10 + lVar5 * 4) * *(float *)(lVar4 + lVar5 * 4);
      *(float *)(lVar4 + lVar5 * 4) = fVar3;
      *(float *)(lVar4 + -4 + lVar5 * 4) = fVar7;
      *(float *)(lVar4 + -8 + lVar5 * 4) = fVar2;
      *(float *)(lVar4 + -0xc + lVar5 * 4) = fVar1;
      *(float *)(param_3 + lVar6 * 4) = fVar7;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 9;
    } while (lVar6 < *(int *)(param_1 + 0x1c));
  }
  return;
}



// FUNCTION 14703083a FUN_14703083a body=445 status=ok
// SIG undefined FUN_14703083a(void)

undefined4 *
FUN_14703083a(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
             undefined4 param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = param_3;
  param_1[10] = param_4;
  uVar6 = param_3 - 1;
  param_1[0xb] = uVar6;
  param_1[0xc] = param_5;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[3] = param_6;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[1] = param_2;
  if (param_3 <= (int)param_5) {
    param_5 = param_3 + 2;
    if (-1 < (int)uVar6) {
      param_5 = uVar6;
    }
    param_5 = param_5 & 0xfffffffc;
    param_1[0xc] = param_5;
  }
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar4,param_5 + param_3 * 2,param_5 + param_3,0x10,0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  FUN_1470342b6(uVar5);
  FUN_1470342b6(0);
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x1e),param_1[0xb]);
  iVar1 = param_1[10];
  iVar2 = param_1[9];
  uVar5 = FUN_14001cc68(0x30,0x10);
  FUN_147037b42(uVar5,(iVar1 - iVar2) + 1,param_1[0xc]);
  lVar3 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (lVar3 != 0) {
    FUN_147037c96(lVar3);
    thunk_FUN_1400020a8(lVar3,0x30);
  }
  FUN_14702dc6a(param_1 + 0xe,param_1[0xc]);
  uVar6 = param_1[0xc];
  iVar1 = param_1[0x10];
  param_1[0x10] = iVar1 + uVar6;
  if ((uint)(param_1[0x11] - iVar1) < uVar6) {
    FUN_145ca0cd4(param_1 + 0xe,iVar1);
    uVar6 = param_1[0xc];
  }
  FUN_14702dc6a(param_1 + 0x16,uVar6);
  uVar6 = param_1[0xc];
  iVar1 = param_1[0x18];
  param_1[0x18] = iVar1 + uVar6;
  if ((uint)(param_1[0x19] - iVar1) < uVar6) {
    FUN_145ca0cd4(param_1 + 0x16,iVar1);
    uVar6 = param_1[0xc];
  }
  FUN_14702dc6a(param_1 + 0x1a,uVar6);
  iVar1 = param_1[0x1c];
  param_1[0x1c] = iVar1 + param_1[0xc];
  if ((uint)(param_1[0x1d] - iVar1) < (uint)param_1[0xc]) {
    FUN_145ca0cd4(param_1 + 0x1a);
  }
  return param_1;
}



// FUNCTION 1470309f8 FUN_1470309f8 body=121 status=ok
// SIG undefined FUN_1470309f8(void)

void FUN_1470309f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_147037c96(lVar1);
    thunk_FUN_1400020a8(lVar1,0x30);
  }
  FUN_1470342b6(*(undefined8 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147030a72 FUN_147030a72 body=339 status=ok
// SIG undefined FUN_147030a72(void)

void FUN_147030a72(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar6 = *(uint *)(param_2 + 1);
  uVar7 = (ulonglong)uVar6;
  FUN_14702dc6a(param_4,uVar7);
  lVar4 = param_4[1];
  *(uint *)(param_4 + 1) = (int)lVar4 + uVar6;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - (int)lVar4) < uVar6) {
    FUN_145ca0cd4(param_4);
  }
  if (uVar6 == *(uint *)(param_3 + 1)) {
    if (uVar6 != 0) {
      lVar4 = *param_2;
      lVar3 = *param_4;
      puVar1 = (undefined8 *)(param_1 + 0x38);
      iVar8 = 0;
      do {
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x30);
        if ((int)uVar7 < (int)*(uint *)(param_1 + 0x30)) {
          uVar10 = uVar7;
        }
        uVar6 = (uint)uVar10;
        FUN_14702dc6a(puVar1,uVar10);
        iVar2 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar2 + uVar6;
        if ((uint)(*(int *)(param_1 + 0x44) - iVar2) < uVar6) {
          FUN_145ca0cd4(puVar1);
        }
        _Dst = (void *)*puVar1;
        lVar9 = (longlong)iVar8;
        memcpy(_Dst,(void *)(lVar9 * 4 + *param_3),(longlong)(int)uVar6 << 2);
        if (0 < (int)uVar6) {
          uVar5 = 0;
          do {
            *(float *)((longlong)_Dst + uVar5 * 4) =
                 *(float *)((longlong)_Dst + uVar5 * 4) - (float)*(int *)(param_1 + 0x2c);
            uVar5 = uVar5 + 1;
          } while (uVar10 != uVar5);
        }
        FUN_147030bc6(param_1,lVar4 + lVar9 * 4,puVar1,uVar10,lVar9 * 4 + lVar3);
        iVar8 = iVar8 + uVar6;
        uVar6 = (int)uVar7 - uVar6;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
    return;
  }
  memset((void *)*param_4,0,(longlong)(int)uVar6 << 2);
  return;
}



// FUNCTION 147030bc6 FUN_147030bc6 body=494 status=ok
// SIG undefined FUN_147030bc6(void)

void FUN_147030bc6(float *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  float fVar2;
  void *_Src;
  undefined8 uVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  void *local_80;
  uint local_78;
  ulonglong local_70;
  
  local_98 = param_5;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pfVar1 = param_1 + 0x16;
  FUN_14702dc6a(pfVar1,param_4);
  fVar2 = param_1[0x18];
  param_1[0x18] = (float)((int)fVar2 + param_4);
  if ((uint)((int)param_1[0x19] - (int)fVar2) < param_4) {
    FUN_145ca0cd4(pfVar1);
  }
  pvVar4 = (void *)FUN_14702db1e(*(undefined8 *)(param_1 + 0x1e),param_4,0);
  memcpy(*(void **)(param_1 + 0x16),pvVar4,(longlong)(int)param_4 << 2);
  FUN_147037d0c(*(undefined8 *)(param_1 + 0x20),pfVar1,param_3,param_1 + 0x1a);
  FUN_14702dc6a(param_1 + 0x12,param_4);
  fVar2 = param_1[0x14];
  param_1[0x14] = (float)((int)fVar2 + param_4);
  if ((uint)((int)param_1[0x15] - (int)fVar2) < param_4) {
    FUN_145ca0cd4(param_1 + 0x12);
  }
  fVar2 = param_1[4];
  fVar5 = param_1[6];
  if ((int)fVar5 < (int)fVar2) {
    fVar7 = ((float)(int)fVar5 * param_1[2]) / (float)(int)fVar2 + *param_1;
    param_1[1] = fVar7;
    fVar5 = (float)((int)fVar5 + 1);
    param_1[6] = fVar5;
  }
  else {
    fVar7 = param_1[1];
  }
  pvVar4 = *(void **)(param_1 + 0x16);
  _Src = *(void **)(param_1 + 0x1a);
  uVar3 = *(undefined8 *)(param_1 + 0x12);
  fVar6 = fVar7;
  if ((int)fVar5 < (int)fVar2) {
    fVar6 = (float)((int)fVar5 + param_4 + -1);
    fVar5 = fVar2;
    if ((int)fVar6 < (int)fVar2) {
      fVar5 = fVar6;
    }
    param_1[6] = fVar5;
    fVar6 = ((float)(int)fVar5 * param_1[2]) / (float)(int)fVar2 + *param_1;
    param_1[1] = fVar6;
  }
  memcpy(pvVar4,_Src,(longlong)(int)param_4 << 2);
  local_80 = pvVar4;
  local_78 = param_4;
  FUN_142af1d12(&local_80,fVar7,fVar6);
  FUN_1421c5730(param_2,pvVar4,uVar3,param_4);
  FUN_14702dace(*(undefined8 *)(param_1 + 0x1e),param_4);
  FUN_14702d9f4(*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x12),param_4);
  local_90 = uVar3;
  local_88 = (ulonglong)param_4;
  FUN_142af1d12(&local_90,-fVar7,-fVar6);
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_1421c5730(uVar3,_Src,local_98,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147030db6 FUN_147030db6 body=120 status=ok
// SIG undefined FUN_147030db6(void)

void FUN_147030db6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (0 < *(int *)(lVar1 + 0x30)) {
    memset(*(void **)(lVar1 + 0x10),0,(longlong)(*(int *)(lVar1 + 0x30) << 2));
  }
  if (0 < *(int *)(lVar1 + 0x34)) {
    memset(*(void **)(lVar1 + 0x18),0,(longlong)(*(int *)(lVar1 + 0x34) << 2));
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x24) + -1);
  FUN_147037ce8(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 147030e2e FUN_147030e2e body=239 status=ok
// SIG undefined FUN_147030e2e(void)

undefined8 * FUN_147030e2e(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = &PTR_FUN_14a1354f0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  param_1[6] = &PTR_FUN_14a1354f0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x41a0000041200000;
  param_1[0x17] = 0xc0c00000447a0000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  param_1[0x1a] = 0x473b80003f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  local_18 = 0;
  FUN_147030f1e(param_1 + 0x1c);
  FUN_147030f7e(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147030f1e FUN_147030f1e body=96 status=ok
// SIG undefined FUN_147030f1e(void)

void FUN_147030f1e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    FUN_1470347e8(param_1);
  }
  bVar3 = false;
  do {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14703487a(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    bVar2 = !bVar3;
    bVar3 = true;
  } while (bVar2);
  return;
}



// FUNCTION 147030f7e FUN_147030f7e body=97 status=ok
// SIG undefined FUN_147030f7e(void)

void FUN_147030f7e(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 1) {
    fVar2 = 1.0;
  }
  else if (iVar1 == 2) {
    fVar2 = 1.0 / *(float *)(param_1 + 0xc0) + -1.0;
  }
  else if (iVar1 == 3) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = 1.0 - 1.0 / *(float *)(param_1 + 0xc0);
  }
  *(float *)(param_1 + 100) = fVar2;
  FUN_1470318fc();
  return;
}



// FUNCTION 147030fe0 FUN_147030fe0 body=159 status=ok
// SIG undefined FUN_147030fe0(void)

void FUN_147030fe0(undefined8 *param_1)

{
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1470347c2(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a1354f0;
  if (param_1[8] != 0) {
    thunk_FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1354f0;
  if (param_1[2] != 0) {
    thunk_FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147031080 FUN_147031080 body=510 status=ok
// SIG undefined FUN_147031080(void)

void FUN_147031080(longlong param_1,undefined4 param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  FUN_147031280(param_1,param_3);
  FUN_1470313fa(param_1);
  if (0 < (int)param_3) {
    lVar5 = 0;
    do {
      local_50 = *(undefined4 *)(param_1 + 0xd4);
      local_4c = *(undefined4 *)(param_1 + 0xb4);
      local_48 = *(undefined4 *)(param_1 + 0xb8);
      local_44 = *(undefined4 *)(param_1 + 0x68);
      local_40 = *(undefined1 *)(param_1 + 0xd9);
      local_3c = 0x40a00000;
      FUN_1470315fc(*(longlong *)(param_1 + 0x80) + lVar5);
      lVar5 = lVar5 + 0x30;
    } while ((ulonglong)param_3 * 0x30 != lVar5);
  }
  iVar3 = 0;
  local_58 = 0;
  local_60 = 0x40000000;
  local_68 = 0x469c4000;
  FUN_14703069c(param_1,*(undefined4 *)(param_1 + 0xd4),param_3,5);
  local_58 = 0;
  local_60 = 0x40000000;
  local_68 = 0x469c4000;
  FUN_14703069c(param_1 + 0x30,*(undefined4 *)(param_1 + 0xd4),param_3,6);
  iVar2 = *(int *)(param_1 + 0x9c);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14482f6fa(param_1 + 0x90);
    iVar3 = *(int *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0x9c);
  }
  *(uint *)(param_1 + 0x98) = iVar3 + param_3;
  if ((uint)(iVar2 - iVar3) < param_3) {
    FUN_14475e4ac(param_1 + 0x90);
  }
  iVar4 = 0;
  memset((void *)((longlong)iVar3 * 4 + *(longlong *)(param_1 + 0x90)),0,(longlong)(int)param_3 << 2
        );
  plVar1 = (longlong *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14482f6fa(plVar1);
    iVar4 = *(int *)(param_1 + 0xa8);
    iVar2 = *(int *)(param_1 + 0xac);
  }
  *(uint *)(param_1 + 0xa8) = iVar4 + param_3;
  if ((uint)(iVar2 - iVar4) < param_3) {
    FUN_14475e4ac(plVar1);
  }
  memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)param_3 << 2);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147031280 FUN_147031280 body=378 status=ok
// SIG undefined FUN_147031280(void)

void FUN_147031280(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (*(uint *)(param_1 + 0xa8) != param_2) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    iVar3 = *(int *)(param_1 + 0xac);
    iVar4 = 0;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      FUN_14482f6fa(plVar1);
      iVar4 = *(int *)(param_1 + 0xa8);
      iVar3 = *(int *)(param_1 + 0xac);
    }
    *(uint *)(param_1 + 0xa8) = iVar4 + param_2;
    if ((uint)(iVar3 - iVar4) < param_2) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)param_2 << 2);
  }
  if (*(uint *)(param_1 + 0x78) != param_2) {
    fVar5 = (*(float *)(param_1 + 0xd4) * 100.0) / 1000.0;
    iVar4 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    iVar3 = 1;
    if (1 < iVar4) {
      iVar3 = iVar4;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    fVar5 = (*(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xb0)) / 1000.0;
    iVar4 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x7c);
    FUN_1470347c2(*(undefined8 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
      FUN_147034a54(plVar1,0);
    }
    if (0 < (int)param_2) {
      do {
        iVar2 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
          FUN_147034ab4(plVar1,iVar2);
        }
        FUN_147035140((longlong)iVar2 * 0x20 + *plVar1,iVar3,iVar4,0x20);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}



// FUNCTION 1470313fa FUN_1470313fa body=512 status=ok
// SIG undefined FUN_1470313fa(void)

void FUN_1470313fa(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(uint *)(param_1 + 0x88) != param_2) {
    plVar1 = (longlong *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) < 0) {
      FUN_147034900(plVar1);
    }
    uVar3 = param_2;
    if (0 < (int)param_2) {
      do {
        local_50 = *(undefined4 *)(param_1 + 0xd4);
        local_4c = *(undefined4 *)(param_1 + 0xb4);
        local_48 = *(undefined4 *)(param_1 + 0xb8);
        local_44 = *(undefined4 *)(param_1 + 0x68);
        local_40 = *(undefined1 *)(param_1 + 0xd9);
        local_3c = 0x40a00000;
        iVar2 = *(int *)(param_1 + 0x88);
        *(uint *)(param_1 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
          FUN_1470349c0(plVar1,iVar2);
        }
        FUN_147034930((longlong)iVar2 * 0x30 + *plVar1);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  if (*(uint *)(param_1 + 0x1c) != param_2) {
    local_58 = 0;
    local_60 = 0x40000000;
    local_68 = 0x469c4000;
    FUN_14703069c(param_1,*(undefined4 *)(param_1 + 0xd4),param_2,5);
  }
  if (*(uint *)(param_1 + 0x4c) != param_2) {
    local_58 = 0;
    local_60 = 0x40000000;
    local_68 = 0x469c4000;
    FUN_14703069c(param_1 + 0x30,*(undefined4 *)(param_1 + 0xd4),param_2,6);
  }
  if (*(uint *)(param_1 + 0x98) != param_2) {
    plVar1 = (longlong *)(param_1 + 0x90);
    iVar2 = *(int *)(param_1 + 0x9c);
    iVar4 = 0;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      FUN_14482f6fa(plVar1);
      iVar4 = *(int *)(param_1 + 0x98);
      iVar2 = *(int *)(param_1 + 0x9c);
    }
    *(uint *)(param_1 + 0x98) = iVar4 + param_2;
    if ((uint)(iVar2 - iVar4) < param_2) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)param_2 << 2);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470315fc FUN_1470315fc body=251 status=ok
// SIG undefined FUN_1470315fc(void)

void FUN_1470315fc(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_147032eba(param_1,*param_2);
  fVar2 = (float)param_2[1];
  param_1[2] = fVar2;
  fVar3 = 0.0;
  fVar1 = 0.0;
  if (0.0 < fVar2) {
    if (*(char *)(param_1 + 5) == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar1 = expf(fVar1 / (fVar2 * *param_1));
  }
  param_1[1] = fVar1;
  fVar2 = (float)param_2[2];
  param_1[4] = fVar2;
  if (0.0 < fVar2) {
    if (*(char *)(param_1 + 5) == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar3 = expf(fVar1 / (fVar2 * *param_1));
  }
  param_1[3] = fVar3;
  param_1[7] = (float)param_2[3];
  FUN_147031b9a(param_1,*(undefined1 *)(param_2 + 4));
  fVar2 = (float)param_2[5];
  if (0.0 < fVar2) {
    param_1[9] = fVar2;
    if (0.0 < *param_1) {
      fVar2 = expf(-1000.0 / (fVar2 * *param_1));
      param_1[10] = fVar2;
      param_1[0xb] = 1.0 - fVar2;
    }
  }
  return;
}



// FUNCTION 1470316f8 FUN_1470316f8 body=126 status=ok
// SIG undefined FUN_1470316f8(void)

void FUN_1470316f8(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if (100.0 <= param_2) {
    param_2 = 100.0;
  }
  *(float *)(param_1 + 0xb0) = param_2;
  fVar5 = (param_2 * *(float *)(param_1 + 0xd4)) / 1000.0;
  iVar1 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar2 = 0;
    lVar4 = 0;
    do {
      FUN_147035216(*(longlong *)(param_1 + 0x70) + lVar2,iVar3);
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x20;
    } while (lVar4 < *(int *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 147031776 FUN_147031776 body=186 status=ok
// SIG undefined FUN_147031776(void)

void FUN_147031776(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  *(float *)(param_1 + 0xb4) = param_2;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      fVar4 = 0.0;
      lVar1 = *(longlong *)(param_1 + 0x80);
      *(float *)(lVar1 + 8 + lVar2) = param_2;
      if (0.0 < param_2) {
        fVar4 = -1002.3935;
        if (*(char *)(lVar1 + 0x14 + lVar2) == '\0') {
          fVar4 = -4605.1704;
        }
        fVar4 = expf(fVar4 / (*(float *)(lVar1 + lVar2) * param_2));
      }
      *(float *)(lVar1 + 4 + lVar2) = fVar4;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 147031830 FUN_147031830 body=189 status=ok
// SIG undefined FUN_147031830(void)

void FUN_147031830(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  *(float *)(param_1 + 0xb8) = param_2;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar3 = 0x14;
    lVar2 = 0;
    do {
      fVar4 = 0.0;
      lVar1 = *(longlong *)(param_1 + 0x80);
      *(float *)(lVar1 + -4 + lVar3) = param_2;
      if (0.0 < param_2) {
        fVar4 = -1002.3935;
        if (*(char *)(lVar1 + lVar3) == '\0') {
          fVar4 = -4605.1704;
        }
        fVar4 = expf(fVar4 / (*(float *)(lVar1 + -0x14 + lVar3) * param_2));
      }
      *(float *)(lVar1 + -8 + lVar3) = fVar4;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 1470318ee FUN_1470318ee body=13 status=ok
// SIG undefined FUN_1470318ee(void)

void FUN_1470318ee(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  FUN_1470318fc();
  return;
}



// FUNCTION 1470318fc FUN_1470318fc body=193 status=ok
// SIG undefined FUN_1470318fc(void)

void FUN_1470318fc(longlong param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  
  **(float **)(param_1 + 0xe0) = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xc4);
  fVar3 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xc4);
  if (0.0 <= fVar3) {
    fVar3 = 0.0;
  }
  *(float *)(*(longlong *)(param_1 + 0xe0) + 8) = fVar3;
  *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 4) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0xc) = *(undefined4 *)(param_1 + 100);
  pfVar1 = *(float **)(param_1 + 0xe0);
  uVar2 = -(uint)(ABS(*pfVar1 - pfVar1[2]) < 1e-08);
  *(uint *)(param_1 + 0xf0) = uVar2 & 0x322bcc77 | ~uVar2 & (uint)(*pfVar1 - pfVar1[2]);
  uVar2 = -(uint)(ABS(pfVar1[2] - *pfVar1) < 1e-08);
  *(uint *)(param_1 + 0xf4) = uVar2 & 0x322bcc77 | ~uVar2 & (uint)(pfVar1[2] - *pfVar1);
  return;
}



// FUNCTION 1470319be FUN_1470319be body=21 status=ok
// SIG undefined FUN_1470319be(void)

void FUN_1470319be(longlong param_1,float param_2)

{
  if (param_2 <= 1e-08) {
    param_2 = 1e-08;
  }
  *(float *)(param_1 + 0xc0) = param_2;
  FUN_147030f7e();
  return;
}



// FUNCTION 1470319d4 FUN_1470319d4 body=21 status=ok
// SIG undefined FUN_1470319d4(void)

void FUN_1470319d4(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0xc4) = param_2 * 0.5;
  FUN_1470318fc();
  return;
}



// FUNCTION 1470319ea FUN_1470319ea body=44 status=ok
// SIG undefined FUN_1470319ea(void)

void FUN_1470319ea(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = powf(10.0,param_2 / 20.0);
  *(float *)(param_1 + 200) = fVar1;
  return;
}



// FUNCTION 147031a16 FUN_147031a16 body=7 status=ok
// SIG undefined FUN_147031a16(void)

void FUN_147031a16(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xda) = param_2;
  return;
}



// FUNCTION 147031a1e FUN_147031a1e body=44 status=ok
// SIG undefined FUN_147031a1e(void)

void FUN_147031a1e(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = powf(10.0,param_2 / 20.0);
  *(float *)(param_1 + 0xd0) = fVar1;
  return;
}



// FUNCTION 147031a4a FUN_147031a4a body=60 status=ok
// SIG undefined FUN_147031a4a(void)

void FUN_147031a4a(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x48) * 0.5 * 0.9;
  if (fVar1 <= param_2) {
    param_2 = fVar1;
  }
  if (param_2 <= 5.0) {
    param_2 = 5.0;
  }
  if ((*(float *)(param_1 + 0x50) == param_2) && (!NAN(*(float *)(param_1 + 0x50)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x50) = param_2;
  FUN_147033a80(param_1 + 0x30);
  return;
}



// FUNCTION 147031a86 FUN_147031a86 body=7 status=ok
// SIG undefined FUN_147031a86(void)

void FUN_147031a86(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xdb) = param_2;
  return;
}



// FUNCTION 147031a8e FUN_147031a8e body=38 status=ok
// SIG undefined FUN_147031a8e(void)

void FUN_147031a8e(longlong param_1,float param_2)

{
  if (((*(float *)(param_1 + 0x58) != param_2) || (NAN(*(float *)(param_1 + 0x58)) || NAN(param_2)))
     && (*(float *)(param_1 + 0x58) = param_2, *(int *)(param_1 + 0x38) - 4U < 3)) {
    FUN_147033a80(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 147031ab4 FUN_147031ab4 body=56 status=ok
// SIG undefined FUN_147031ab4(void)

void FUN_147031ab4(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18) * 0.5 * 0.9;
  if (fVar1 <= param_2) {
    param_2 = fVar1;
  }
  if (param_2 <= 5.0) {
    param_2 = 5.0;
  }
  if ((*(float *)(param_1 + 0x20) == param_2) && (!NAN(*(float *)(param_1 + 0x20)) && !NAN(param_2))
     ) {
    return;
  }
  *(float *)(param_1 + 0x20) = param_2;
  FUN_147033a80();
  return;
}



// FUNCTION 147031aec FUN_147031aec body=7 status=ok
// SIG undefined FUN_147031aec(void)

void FUN_147031aec(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xdc) = param_2;
  return;
}



// FUNCTION 147031af4 FUN_147031af4 body=33 status=ok
// SIG undefined FUN_147031af4(void)

void FUN_147031af4(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (((*(float *)(param_1 + 0x28) != param_2) || (NAN(*(float *)(param_1 + 0x28)) || NAN(param_2)))
     && (*(float *)(param_1 + 0x28) = param_2, *(int *)(param_1 + 8) - 4U < 3)) {
    fVar6 = (*(float *)(param_1 + 0x20) * 6.2831855) / *(float *)(param_1 + 0x18);
    fVar4 = sinf(fVar6);
    fVar5 = cosf(fVar6);
    fVar6 = sinhf((*(float *)(param_1 + 0x24) * 0.3465736 * fVar6) / fVar4);
    fVar6 = fVar6 * fVar4;
    switch(*(undefined4 *)(param_1 + 8)) {
    case 4:
      fVar4 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
      fVar7 = fVar5 * -2.0;
      fVar11 = 1.0 - fVar6 * fVar4;
      fVar10 = fVar6 * fVar4 + 1.0;
      fVar8 = fVar6 / fVar4 + 1.0;
      fVar6 = 1.0 - fVar6 / fVar4;
      fVar4 = fVar7;
      break;
    case 5:
      fVar11 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
      fVar7 = fVar11 + fVar11;
      if (fVar7 < 0.0) {
        fVar6 = sqrtf(fVar7);
      }
      else {
        fVar6 = SQRT(fVar7);
      }
      fVar4 = fVar4 * fVar6;
      fVar9 = fVar11 + 1.0;
      fVar12 = fVar11 + -1.0;
      fVar6 = fVar9 - fVar12 * fVar5;
      fVar10 = (fVar6 + fVar4) * fVar11;
      fVar7 = fVar7 * (fVar12 - fVar5 * fVar9);
      fVar11 = (fVar6 - fVar4) * fVar11;
      fVar6 = fVar12 * fVar5 + fVar9;
      fVar8 = fVar6 + fVar4;
      fVar6 = fVar6 - fVar4;
      fVar4 = (fVar5 * fVar9 + fVar12) * -2.0;
      break;
    case 6:
      fVar11 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
      fVar6 = fVar11 + fVar11;
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      fVar4 = fVar4 * fVar6;
      fVar9 = fVar11 + 1.0;
      fVar12 = fVar11 + -1.0;
      fVar6 = fVar12 * fVar5 + fVar9;
      fVar10 = (fVar6 + fVar4) * fVar11;
      fVar7 = (fVar5 * fVar9 + fVar12) * fVar11 * -2.0;
      fVar11 = (fVar6 - fVar4) * fVar11;
      fVar6 = fVar9 - fVar12 * fVar5;
      fVar8 = fVar6 + fVar4;
      fVar12 = fVar12 - fVar5 * fVar9;
      fVar6 = fVar6 - fVar4;
      fVar4 = fVar12 + fVar12;
      break;
    default:
      fVar7 = 1.0 - fVar5;
      fVar10 = fVar7 * 0.5;
      fVar8 = fVar6 + 1.0;
      fVar6 = 1.0 - fVar6;
      fVar11 = fVar10;
      fVar4 = fVar5 * -2.0;
    }
    iVar1 = _finite((double)fVar8);
    if (iVar1 == 0) {
      fVar6 = 0.0;
      fVar4 = 0.0;
      fVar11 = 0.0;
      fVar7 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = fVar10 / fVar8;
      fVar7 = fVar7 / fVar8;
      fVar11 = fVar11 / fVar8;
      fVar4 = fVar4 / fVar8;
      fVar6 = fVar6 / fVar8;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        *(float *)(*(longlong *)(param_1 + 0x10) + lVar2) = fVar10;
        *(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar2) = fVar7;
        *(float *)(*(longlong *)(param_1 + 0x10) + 8 + lVar2) = fVar11;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0xc + lVar2) = fVar4;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar2) = fVar6;
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x24;
      } while (lVar3 < *(int *)(param_1 + 0x1c));
    }
    return;
  }
  return;
}



// FUNCTION 147031b16 FUN_147031b16 body=44 status=ok
// SIG undefined FUN_147031b16(void)

void FUN_147031b16(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = powf(10.0,param_2 / 20.0);
  *(float *)(param_1 + 0xcc) = fVar1;
  return;
}



// FUNCTION 147031b42 FUN_147031b42 body=7 status=ok
// SIG undefined FUN_147031b42(void)

void FUN_147031b42(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd8) = param_2;
  return;
}



// FUNCTION 147031b4a FUN_147031b4a body=80 status=ok
// SIG undefined FUN_147031b4a(void)

void FUN_147031b4a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(char *)(param_1 + 0xd9) = (char)param_2;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_147031b9a(*(longlong *)(param_1 + 0x80) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 147031b9a FUN_147031b9a body=140 status=ok
// SIG undefined FUN_147031b9a(void)

void FUN_147031b9a(float *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  *(char *)(param_1 + 5) = param_2;
  fVar2 = 0.0;
  fVar1 = 0.0;
  if (0.0 < param_1[2]) {
    if (param_2 == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar1 = expf(fVar1 / (param_1[2] * *param_1));
  }
  param_1[1] = fVar1;
  if (0.0 < param_1[4]) {
    if (*(char *)(param_1 + 5) == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar2 = expf(fVar1 / (param_1[4] * *param_1));
  }
  param_1[3] = fVar2;
  return;
}



// FUNCTION 147031c26 FUN_147031c26 body=51 status=ok
// SIG undefined FUN_147031c26(void)

void FUN_147031c26(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar1 = 0x1c;
    lVar2 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x80) + lVar1) = param_2;
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 147031c5a FUN_147031c5a body=8 status=ok
// SIG undefined FUN_147031c5a(void)

void FUN_147031c5a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  FUN_147030f7e();
  return;
}



// FUNCTION 147031c62 FUN_147031c62 body=227 status=ok
// SIG undefined FUN_147031c62(void)

void FUN_147031c62(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar9 = *(int *)(param_1 + 0x1c);
    if (0 < iVar9) {
      lVar8 = 0;
      do {
        if (0 < (int)param_3) {
          lVar4 = *(longlong *)(param_2 + lVar8 * 8);
          lVar5 = *(longlong *)(param_4 + lVar8 * 8);
          uVar7 = 0;
          do {
            lVar6 = *(longlong *)(param_1 + 0x10);
            fVar1 = *(float *)(lVar4 + uVar7 * 4);
            fVar2 = *(float *)(lVar6 + 0x14 + lVar8 * 0x24);
            fVar3 = *(float *)(lVar6 + 0x1c + lVar8 * 0x24);
            fVar10 = ((*(float *)(lVar6 + 8 + lVar8 * 0x24) *
                       *(float *)(lVar6 + 0x18 + lVar8 * 0x24) +
                      *(float *)(lVar6 + lVar8 * 0x24) * fVar1 +
                      *(float *)(lVar6 + 4 + lVar8 * 0x24) * fVar2) -
                     *(float *)(lVar6 + 0xc + lVar8 * 0x24) * fVar3) -
                     *(float *)(lVar6 + 0x10 + lVar8 * 0x24) *
                     *(float *)(lVar6 + 0x20 + lVar8 * 0x24);
            *(float *)(lVar6 + 0x20 + lVar8 * 0x24) = fVar3;
            *(float *)(lVar6 + 0x1c + lVar8 * 0x24) = fVar10;
            *(float *)(lVar6 + 0x18 + lVar8 * 0x24) = fVar2;
            *(float *)(lVar6 + 0x14 + lVar8 * 0x24) = fVar1;
            *(float *)(lVar5 + uVar7 * 4) = fVar10;
            uVar7 = uVar7 + 1;
          } while (param_3 != uVar7);
          iVar9 = *(int *)(param_1 + 0x1c);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar9);
    }
  }
  return;
}



// FUNCTION 147031d46 FUN_147031d46 body=399 status=ok
// SIG undefined FUN_147031d46(void)

void FUN_147031d46(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      fVar5 = *(float *)(param_2 + uVar3 * 4);
      fVar4 = *(float *)(param_1 + 0xc4);
      fVar1 = *(float *)(param_1 + 0xbc);
      if (*(int *)(param_1 + 0x60) == 4) {
        if (((fVar4 < 0.0) || (fVar1 - fVar4 <= fVar5)) || (fVar5 <= fVar4 + fVar1)) {
          fVar5 = *(float *)(param_1 + 100) * (fVar1 - fVar5);
        }
        else {
LAB_147031e5d:
          pfVar2 = *(float **)(param_1 + 0xe0);
          fVar5 = (((fVar5 - *pfVar2) / *(float *)(param_1 + 0xf4)) * pfVar2[3] +
                  ((fVar5 - pfVar2[2]) / *(float *)(param_1 + 0xf0)) * pfVar2[1]) * (fVar1 - fVar5);
          if (*(int *)(param_1 + 0x60) != 4) goto LAB_147031e25;
        }
        if (36.0 <= fVar5) {
          fVar5 = 36.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
LAB_147031dfa:
        fVar4 = powf(10.0,fVar5 / 20.0);
      }
      else {
        if (((0.0 <= fVar4) && (fVar1 - fVar4 < fVar5)) && (fVar5 < fVar4 + fVar1))
        goto LAB_147031e5d;
        fVar5 = *(float *)(param_1 + 100) * (fVar1 - fVar5);
LAB_147031e25:
        fVar4 = 1.0;
        if (fVar5 <= -1e-08) goto LAB_147031dfa;
      }
      *(float *)(param_2 + uVar3 * 4) = fVar4;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
  return;
}



// FUNCTION 147031ed6 FUN_147031ed6 body=112 status=ok
// SIG undefined FUN_147031ed6(void)

void FUN_147031ed6(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_1408652ee(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14489624a(param_1,iVar2);
      }
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 147031f47 FUN_147031f47 body=125 status=ok
// SIG undefined FUN_147031f47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_147031f47(float param_1)

{
  float fVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e33c) {
    FUN_144b3d300(&DAT_14c99e33c);
    if (DAT_14c99e33c == -1) {
      _DAT_14c99e338 = 1.442695;
      _Init_thread_footer(&DAT_14c99e33c);
    }
  }
  fVar1 = logf(param_1 + 1.0);
  return fVar1 * _DAT_14c99e338;
}



// FUNCTION 147031fc4 FUN_147031fc4 body=465 status=ok
// SIG undefined FUN_147031fc4(void)

undefined8 * FUN_147031fc4(undefined8 *param_1,float param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_88 [40];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
  uVar1 = param_4[1];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  *(float *)((longlong)param_1 + 0x14) = param_2;
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
  param_1[0xe] = 0;
  fVar3 = param_2 / 29761.0;
  local_60 = (int)(fVar3 * 710.0);
  local_5c = (int)(fVar3 * 535.0);
  local_58 = (int)(fVar3 * 1895.0);
  local_54 = (int)(fVar3 * 1385.0);
  FUN_147032196(param_1 + 0x1d,param_3,&local_60);
  local_60 = (int)(fVar3 * 1395.0);
  local_5c = (int)(fVar3 * 685.0);
  local_58 = (int)(fVar3 * 1065.0);
  local_54 = (int)(fVar3 * 1635.0);
  FUN_147032196(param_1 + 0x37,param_3,&local_60);
  iVar2 = (int)((float)(int)param_2 + (float)(int)param_2);
  FUN_147035140(param_1 + 0x51,iVar2,0,param_3);
  FUN_147035140(param_1 + 0x55,iVar2,0,param_3);
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xf) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3e800000;
  FUN_1470324a2(param_1);
  FUN_147032516(param_1);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147032196 FUN_147032196 body=779 status=ok
// SIG undefined FUN_147032196(void)

uint * FUN_147032196(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar2 = param_3[1];
  *(undefined8 *)param_1 = *param_3;
  *(undefined8 *)(param_1 + 2) = uVar2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  uVar1 = param_1[3];
  if ((int)param_1[2] < (int)param_1[3]) {
    uVar1 = param_1[2];
  }
  uVar3 = *param_1;
  uVar5 = param_1[1];
  if ((int)uVar3 < (int)param_1[1]) {
    uVar5 = uVar3;
  }
  if ((int)uVar1 <= (int)uVar5) {
    uVar5 = uVar1;
  }
  if ((int)param_2 <= (int)uVar5) {
    uVar5 = param_2;
  }
  uVar1 = uVar5 + 3;
  if (-1 < (int)uVar5) {
    uVar1 = uVar5;
  }
  uVar5 = 1;
  if (1 < (int)(uVar1 & 0xfffffffc)) {
    uVar5 = uVar1 & 0xfffffffc;
  }
  param_1[4] = uVar5;
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar4,uVar5 + uVar3 * 2,uVar5,0x10,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  FUN_1470342b6(uVar2);
  FUN_1470342b6(0);
  uVar1 = param_1[1];
  uVar3 = param_1[4];
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar4,uVar3 + uVar1 * 2,uVar3,0x10,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  FUN_1470342b6(uVar2);
  FUN_1470342b6(0);
  uVar1 = param_1[2];
  uVar3 = param_1[4];
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar4,uVar3 + uVar1 * 2,uVar3,0x10,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  FUN_1470342b6(uVar2);
  FUN_1470342b6(0);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar4,uVar3 + uVar1 * 2,uVar3,0x10,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x22);
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  FUN_1470342b6(uVar2);
  FUN_1470342b6(0);
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x1c),*param_1);
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x1e),param_1[1]);
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x20),param_1[2]);
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x22),param_1[3]);
  FUN_14702dc6a(param_1 + 0x24,param_1[4]);
  FUN_14702dc6a(param_1 + 0x28,param_1[4]);
  FUN_14702dc6a(param_1 + 0x2c,param_1[4]);
  FUN_14702dc6a(param_1 + 0x30,param_1[4]);
  uVar3 = param_1[4];
  uVar1 = param_1[0x26];
  param_1[0x26] = uVar1 + uVar3;
  if (param_1[0x27] - uVar1 < uVar3) {
    FUN_145ca0cd4(param_1 + 0x24);
    uVar3 = param_1[4];
  }
  uVar1 = param_1[0x2a];
  param_1[0x2a] = uVar1 + uVar3;
  if (param_1[0x2b] - uVar1 < uVar3) {
    FUN_145ca0cd4(param_1 + 0x28);
    uVar3 = param_1[4];
  }
  uVar1 = param_1[0x2e];
  param_1[0x2e] = uVar1 + uVar3;
  if (param_1[0x2f] - uVar1 < uVar3) {
    FUN_145ca0cd4(param_1 + 0x2c);
    uVar3 = param_1[4];
  }
  uVar1 = param_1[0x32];
  param_1[0x32] = uVar1 + uVar3;
  if (param_1[0x33] - uVar1 < uVar3) {
    FUN_145ca0cd4(param_1 + 0x30);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 1470324a2 FUN_1470324a2 body=116 status=ok
// SIG undefined FUN_1470324a2(void)

void FUN_1470324a2(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  if (0.9999 <= fVar1) {
    fVar1 = 0.9999;
  }
  fVar2 = param_1[1];
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_1 = fVar1;
  if (1000.0 <= fVar2) {
    fVar2 = 1000.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_1[1] = fVar2;
  fVar1 = param_1[2];
  if (0.99999 <= fVar1) {
    fVar1 = 0.99999;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[2] = fVar1;
  fVar1 = param_1[3];
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  param_1[3] = fVar1;
  fVar1 = param_1[4];
  if (0.99999 <= fVar1) {
    fVar1 = 0.99999;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[4] = fVar1;
  return;
}



// FUNCTION 147032516 FUN_147032516 body=690 status=ok
// SIG undefined FUN_147032516(void)

void FUN_147032516(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = (int)(((float)(int)*(float *)(param_1 + 0x14) * *(float *)(param_1 + 4)) / 1000.0);
  FUN_147035216(param_1 + 0x288,iVar1);
  FUN_147035216(param_1 + 0x2a8,iVar1);
  fVar2 = (float)FUN_147031f47(*(undefined4 *)(param_1 + 8));
  *(float *)(param_1 + 0x2cc) = fVar2;
  *(float *)(param_1 + 0x2d0) = 1.0 - fVar2;
  *(float *)(param_1 + 0x2dc) = fVar2;
  *(float *)(param_1 + 0x2e0) = 1.0 - fVar2;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar4 = fVar2 + 0.1;
  if (0.9999 <= fVar4) {
    fVar4 = 0.9999;
  }
  *(float *)(param_1 + 0x9c) = fVar4;
  fVar5 = fVar2 + -0.12;
  if (0.9999 <= fVar5) {
    fVar5 = 0.9999;
  }
  *(float *)(param_1 + 0xa0) = fVar5;
  fVar6 = fVar2 + 0.08;
  if (0.9999 <= fVar6) {
    fVar6 = 0.9999;
  }
  *(float *)(param_1 + 0xa4) = fVar6;
  fVar3 = fVar2 + -0.07;
  fVar7 = fVar3;
  if (0.9999 <= fVar3) {
    fVar7 = 0.9999;
  }
  *(float *)(param_1 + 0xa8) = fVar7;
  *(float *)(param_1 + 0x8c) = 1.0 - fVar4;
  *(float *)(param_1 + 0x90) = 1.0 - fVar5;
  *(float *)(param_1 + 0x94) = 1.0 - fVar6;
  *(float *)(param_1 + 0x98) = 1.0 - fVar7;
  *(undefined8 *)(param_1 + 0x7c) = 0x3e4ccccd3dcccccd;
  *(undefined8 *)(param_1 + 0x84) = 0x3ecccccd3e99999a;
  fVar4 = fVar2 + 0.17;
  if (0.999 <= fVar4) {
    fVar4 = 0.999;
  }
  *(float *)(param_1 + 0xd4) = fVar4;
  if (0.999 <= fVar3) {
    fVar3 = 0.999;
  }
  *(float *)(param_1 + 0xd8) = fVar3;
  fVar5 = fVar2 + 0.05;
  if (0.999 <= fVar5) {
    fVar5 = 0.999;
  }
  fVar2 = fVar2 + -0.11;
  *(float *)(param_1 + 0xdc) = fVar5;
  if (0.999 <= fVar2) {
    fVar2 = 0.999;
  }
  *(float *)(param_1 + 0xe0) = fVar2;
  *(float *)(param_1 + 0xc4) = 1.0 - fVar4;
  *(float *)(param_1 + 200) = 1.0 - fVar3;
  *(float *)(param_1 + 0xcc) = 1.0 - fVar5;
  *(float *)(param_1 + 0xd0) = 1.0 - fVar2;
  *(undefined8 *)(param_1 + 0xb4) = 0x3e4ccccd3dcccccd;
  *(undefined4 *)(param_1 + 0xbc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xc0) = 0x3ecccccd;
  fVar2 = (1.0 - *(float *)(param_1 + 0xc)) * 0.5;
  *(float *)(param_1 + 0xac) = fVar2;
  *(float *)(param_1 + 0xe4) = fVar2;
  *(undefined8 *)(param_1 + 300) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x1fc) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 500) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x1d4) = *(undefined8 *)(param_1 + 0xb8);
  return;
}



// FUNCTION 1470327c8 FUN_1470327c8 body=152 status=ok
// SIG undefined FUN_1470327c8(void)

void FUN_1470327c8(longlong param_1)

{
  FUN_14703525a(param_1 + 0x2a8);
  FUN_14703525a(param_1 + 0x288);
  FUN_147032860(param_1 + 0x1b8);
  FUN_147032860(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147032860 FUN_147032860 body=123 status=ok
// SIG undefined FUN_147032860(void)

void FUN_147032860(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1470342b6(*(undefined8 *)(param_1 + 0x88));
  FUN_1470342b6(*(undefined8 *)(param_1 + 0x80));
  FUN_1470342b6(*(undefined8 *)(param_1 + 0x78));
  FUN_1470342b6(*(undefined8 *)(param_1 + 0x70));
  return;
}



// FUNCTION 1470328dc FUN_1470328dc body=38 status=ok
// SIG undefined FUN_1470328dc(void)

void FUN_1470328dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1470324a2();
  FUN_147032516(param_1);
  return;
}



// FUNCTION 147032902 FUN_147032902 body=690 status=ok
// SIG undefined FUN_147032902(void)

void FUN_147032902(undefined4 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar8 = (longlong)*(int *)(param_2 + 1) / (longlong)param_3;
  uVar9 = (uint)uVar8;
  puVar1 = (undefined8 *)(param_1 + 6);
  FUN_14702dc6a(puVar1,uVar8 & 0xffffffff);
  puVar2 = param_1 + 10;
  FUN_14702dc6a(puVar2,uVar8 & 0xffffffff);
  puVar3 = param_1 + 0xe;
  FUN_14702dc6a(puVar3,uVar8 & 0xffffffff);
  puVar4 = (undefined8 *)(param_1 + 0x12);
  FUN_14702dc6a(puVar4,uVar8 & 0xffffffff);
  puVar5 = param_1 + 0x16;
  FUN_14702dc6a(puVar5,uVar8 & 0xffffffff);
  puVar6 = param_1 + 0x1a;
  FUN_14702dc6a(puVar6,uVar8 & 0xffffffff);
  iVar7 = param_1[8];
  param_1[8] = iVar7 + uVar9;
  if ((uint)(param_1[9] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar1);
  }
  iVar7 = param_1[0xc];
  param_1[0xc] = iVar7 + uVar9;
  if ((uint)(param_1[0xd] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar2);
  }
  iVar7 = param_1[0x10];
  param_1[0x10] = iVar7 + uVar9;
  if ((uint)(param_1[0x11] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar3);
  }
  iVar7 = param_1[0x14];
  param_1[0x14] = iVar7 + uVar9;
  if ((uint)(param_1[0x15] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar4);
  }
  iVar7 = param_1[0x18];
  param_1[0x18] = iVar7 + uVar9;
  if ((uint)(param_1[0x19] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar5);
  }
  iVar7 = param_1[0x1c];
  param_1[0x1c] = iVar7 + uVar9;
  if ((uint)(param_1[0x1d] - iVar7) < uVar9) {
    FUN_145ca0cd4(puVar6);
  }
  FUN_14702dc6a(param_4,uVar8 & 0xffffffff);
  FUN_14702dc6a(param_5,uVar8 & 0xffffffff);
  iVar7 = *(int *)(param_4 + 1);
  *(uint *)(param_4 + 1) = iVar7 + uVar9;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar7) < uVar9) {
    FUN_145ca0cd4(param_4);
  }
  iVar7 = *(int *)(param_5 + 1);
  *(uint *)(param_5 + 1) = iVar7 + uVar9;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar7) < uVar9) {
    FUN_145ca0cd4(param_5);
  }
  if (param_3 == 2) {
    FUN_14702f655(param_2,puVar1,puVar4);
  }
  else {
    if (param_3 != 1) {
      memset((void *)*param_4,0,(longlong)(int)uVar9 << 2);
      memset((void *)*param_5,0,(longlong)(int)uVar9 << 2);
      return;
    }
    memcpy((void *)*puVar1,(void *)*param_2,(longlong)(int)uVar9 << 2);
    memcpy((void *)*puVar4,(void *)*param_2,(longlong)(int)uVar9 << 2);
  }
  FUN_1470352ac(param_1 + 0xa2,puVar1,puVar3);
  FUN_1470352ac(param_1 + 0xaa,puVar4,puVar6);
  FUN_14702e71c(param_1 + 0xb2,puVar3,puVar2);
  FUN_14702e71c(param_1 + 0xb6,puVar6,puVar5);
  FUN_147032bb4(param_1 + 0x3a,puVar2,param_4);
  FUN_147032bb4(param_1 + 0x6e,puVar5,param_5);
  FUN_1421c4f70(*param_4,*(undefined4 *)(param_4 + 1),*param_1);
  FUN_1421c4f70(*param_5,*(undefined4 *)(param_5 + 1),*param_1);
  return;
}



// FUNCTION 147032bb4 FUN_147032bb4 body=124 status=ok
// SIG undefined FUN_147032bb4(void)

void FUN_147032bb4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_2 + 1);
  lVar1 = *param_2;
  FUN_14702dc6a(param_3,uVar5);
  lVar3 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar3 + uVar5;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar3) < uVar5) {
    FUN_145ca0cd4(param_3);
  }
  if (0 < (int)uVar5) {
    lVar3 = *param_3;
    iVar7 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0x10);
      if ((int)uVar5 <= (int)*(uint *)(param_1 + 0x10)) {
        uVar4 = uVar5;
      }
      FUN_147033654(param_1,lVar1 + (longlong)iVar7 * 4,uVar4,lVar3 + (longlong)iVar7 * 4);
      iVar7 = iVar7 + uVar4;
      uVar6 = uVar5 - uVar4;
      bVar2 = (int)uVar4 <= (int)uVar5;
      uVar5 = uVar6;
    } while (uVar6 != 0 && bVar2);
  }
  return;
}



// FUNCTION 147032c30 FUN_147032c30 body=78 status=ok
// SIG undefined FUN_147032c30(void)

void FUN_147032c30(longlong param_1)

{
  FUN_14703528a(param_1 + 0x288);
  FUN_14703528a(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  FUN_147032c7e(param_1 + 0xe8);
  FUN_147032c7e(param_1 + 0x1b8);
  return;
}



// FUNCTION 147032c7e FUN_147032c7e body=401 status=ok
// SIG undefined FUN_147032c7e(void)

void FUN_147032c7e(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (0 < *(int *)(lVar1 + 0x30)) {
    memset(*(void **)(lVar1 + 0x10),0,(longlong)(*(int *)(lVar1 + 0x30) << 2));
  }
  if (0 < *(int *)(lVar1 + 0x34)) {
    memset(*(void **)(lVar1 + 0x18),0,(longlong)(*(int *)(lVar1 + 0x34) << 2));
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x70));
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (0 < *(int *)(lVar1 + 0x30)) {
    memset(*(void **)(lVar1 + 0x10),0,(longlong)(*(int *)(lVar1 + 0x30) << 2));
  }
  if (0 < *(int *)(lVar1 + 0x34)) {
    memset(*(void **)(lVar1 + 0x18),0,(longlong)(*(int *)(lVar1 + 0x34) << 2));
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (0 < *(int *)(lVar1 + 0x30)) {
    memset(*(void **)(lVar1 + 0x10),0,(longlong)(*(int *)(lVar1 + 0x30) << 2));
  }
  if (0 < *(int *)(lVar1 + 0x34)) {
    memset(*(void **)(lVar1 + 0x18),0,(longlong)(*(int *)(lVar1 + 0x34) << 2));
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (0 < *(int *)(lVar1 + 0x30)) {
    memset(*(void **)(lVar1 + 0x10),0,(longlong)(*(int *)(lVar1 + 0x30) << 2));
  }
  if (0 < *(int *)(lVar1 + 0x34)) {
    memset(*(void **)(lVar1 + 0x18),0,(longlong)(*(int *)(lVar1 + 0x34) << 2));
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  FUN_14702d93a(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 147032e10 FUN_147032e10 body=170 status=ok
// SIG undefined FUN_147032e10(void)

float * FUN_147032e10(float *param_1,float param_2,float param_3,float param_4,char param_5)

{
  float fVar1;
  
  *param_1 = param_2;
  *(char *)(param_1 + 5) = param_5;
  fVar1 = 0.0;
  if (param_2 <= 0.0) {
    *param_1 = 48000.0;
    param_2 = 48000.0;
  }
  param_1[2] = param_3;
  if (0.0 < param_3) {
    if (param_5 == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar1 = expf(fVar1 / (param_2 * param_3));
  }
  param_1[1] = fVar1;
  param_1[4] = param_4;
  fVar1 = 0.0;
  if (0.0 < param_4) {
    if (*(char *)(param_1 + 5) == '\0') {
      fVar1 = -4605.1704;
    }
    else {
      fVar1 = -1002.3935;
    }
    fVar1 = expf(fVar1 / (param_4 * *param_1));
  }
  param_1[3] = fVar1;
  return param_1;
}



// FUNCTION 147032eba FUN_147032eba body=135 status=ok
// SIG undefined FUN_147032eba(void)

void FUN_147032eba(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < param_2) {
    *param_1 = param_2;
    if (0.0 < param_1[2]) {
      if (*(char *)(param_1 + 5) == '\0') {
        fVar1 = -4605.1704;
      }
      else {
        fVar1 = -1002.3935;
      }
      fVar1 = expf(fVar1 / (param_1[2] * param_2));
    }
    param_1[1] = fVar1;
    fVar1 = 0.0;
    if (0.0 < param_1[4]) {
      if (*(char *)(param_1 + 5) == '\0') {
        fVar1 = -4605.1704;
      }
      else {
        fVar1 = -1002.3935;
      }
      fVar1 = expf(fVar1 / (param_1[4] * *param_1));
    }
    param_1[3] = fVar1;
  }
  return;
}



// FUNCTION 147032f42 FUN_147032f42 body=104 status=ok
// SIG undefined FUN_147032f42(void)

void FUN_147032f42(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 0x18) != param_2) {
    plVar1 = (longlong *)(param_1 + 0x20);
    FUN_14005ea14(plVar1);
    if (0 < (int)param_2) {
      iVar2 = *(int *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = iVar2 + param_2;
      if ((uint)(*(int *)(param_1 + 0x2c) - iVar2) < param_2) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(ulonglong)param_2 << 2);
    }
    *(uint *)(param_1 + 0x18) = param_2;
  }
  return;
}



// FUNCTION 147032faa FUN_147032faa body=143 status=ok
// SIG undefined FUN_147032faa(void)

void FUN_147032faa(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  
  if (0 < param_3) {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar6 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      uVar1 = *(uint *)(param_1 + 4);
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar5 = 0;
      do {
        fVar9 = *(float *)(*(longlong *)(param_1 + 0x20) + uVar5 * 4);
        if (uVar5 < param_3 * uVar4) {
          uVar7 = uVar5;
          do {
            fVar3 = *(float *)(param_2 + uVar7 * 4);
            fVar9 = fVar9 - fVar3;
            uVar8 = -(uint)(0.0 < fVar9);
            fVar9 = (float)(~uVar8 & uVar1 | uVar8 & uVar2) * fVar9 + fVar3;
            uVar7 = uVar7 + (longlong)(int)uVar6;
          } while ((longlong)uVar7 < (longlong)(ulonglong)(param_3 * uVar4));
        }
        *(float *)(*(longlong *)(param_1 + 0x20) + uVar5 * 4) = fVar9;
        uVar5 = uVar5 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x18);
      } while ((longlong)uVar5 < (longlong)uVar6);
    }
  }
  return;
}



// FUNCTION 14703303a FUN_14703303a body=143 status=ok
// SIG undefined FUN_14703303a(void)

int FUN_14703303a(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  
  _Src = (void *)*param_1;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 3);
  iVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar3 = *(int *)(param_1 + 2);
    iVar4 = (iVar2 - iVar1) + iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 2);
  }
  if (param_3 < iVar4) {
    iVar4 = param_3;
  }
  iVar3 = iVar3 - *(uint *)((longlong)param_1 + 0x14);
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  memcpy(param_2,(void *)((longlong)_Src + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 4),
         (longlong)iVar3 * 4);
  memcpy((void *)((longlong)param_2 + (longlong)iVar3 * 4),_Src,(longlong)(iVar4 - iVar3) << 2);
  LOCK();
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)(*(int *)((longlong)param_1 + 0x14) + iVar4) % *(uint *)(param_1 + 2);
  UNLOCK();
  return iVar4;
}



// FUNCTION 1470330ca FUN_1470330ca body=154 status=ok
// SIG undefined FUN_1470330ca(void)

float * FUN_1470330ca(float *param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  
  *param_1 = param_2;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  if (param_2 <= 0.0) {
    *param_1 = 48000.0;
  }
  FUN_147033164(param_1,param_3);
  if (0.0 < param_4) {
    fVar1 = expf(-1000.0 / (param_4 * *param_1));
    param_1[2] = fVar1;
    param_1[3] = 1.0 - fVar1;
  }
  FUN_1470331dc(param_1);
  return param_1;
}



// FUNCTION 147033164 FUN_147033164 body=119 status=ok
// SIG undefined FUN_147033164(void)

void FUN_147033164(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(uint *)(param_1 + 4) != param_2) {
    plVar1 = (longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) < 0) {
      FUN_14482f6fa(plVar1);
    }
    if (0 < (int)param_2) {
      iVar2 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = iVar2 + param_2;
      if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < param_2) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(ulonglong)param_2 << 2);
    }
    *(uint *)(param_1 + 4) = param_2;
  }
  return;
}



// FUNCTION 1470331dc FUN_1470331dc body=129 status=ok
// SIG undefined FUN_1470331dc(void)

void FUN_1470331dc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar4) {
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14482f6fa(plVar1);
      uVar4 = *(uint *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x18) = uVar4 + iVar3;
    if ((uint)(iVar2 - iVar3) < uVar4) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar1),0,(longlong)(int)uVar4 << 2);
    return;
  }
  return;
}



// FUNCTION 14703325e FUN_14703325e body=128 status=ok
// SIG undefined FUN_14703325e(void)

void FUN_14703325e(longlong param_1,undefined8 param_2,int param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  
  uVar6 = (longlong)param_3 * (longlong)*(int *)(param_1 + 4);
  FUN_1421c53a0(param_2,param_4,uVar6 & 0xffffffff);
  if (0 < *(int *)(param_1 + 4)) {
    uVar1 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      fVar7 = *(float *)(lVar5 + uVar1 * 4);
      if ((longlong)uVar1 < (longlong)uVar6) {
        uVar4 = uVar1 & 0xffffffff;
        do {
          iVar2 = (int)uVar4;
          fVar7 = *(float *)(param_1 + 0xc) * *(float *)(param_4 + (longlong)iVar2 * 4) +
                  fVar7 * *(float *)(param_1 + 8);
          *(float *)(param_4 + (longlong)iVar2 * 4) = fVar7;
          uVar3 = iVar2 + *(int *)(param_1 + 4);
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < (int)uVar6);
        lVar5 = *(longlong *)(param_1 + 0x10);
      }
      *(float *)(lVar5 + uVar1 * 4) = fVar7;
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 4));
  }
  return;
}



// FUNCTION 1470332de FUN_1470332de body=109 status=ok
// SIG undefined FUN_1470332de(void)

undefined8 FUN_1470332de(undefined8 param_1)

{
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0x1473b8000;
  local_24 = 0x42c8000041200000;
  local_1c = 2;
  local_18 = 1;
  local_14 = 0x40a00000;
  FUN_14703334c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703334c FUN_14703334c body=133 status=ok
// SIG undefined FUN_14703334c(void)

undefined8 * FUN_14703334c(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1470330ca(param_1 + 2,*param_2,param_2[1],param_2[6]);
  uVar1 = param_2[1];
  FUN_147032e10(param_1 + 6,*param_2,param_2[2],param_2[3],*(undefined1 *)(param_2 + 5));
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_147032f42(param_1 + 6,uVar1);
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)((longlong)param_1 + 100) = param_2[4];
  return param_1;
}



// FUNCTION 1470333d2 FUN_1470333d2 body=319 status=ok
// SIG undefined FUN_1470333d2(void)

void FUN_1470333d2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[1];
  FUN_147032e10(&local_58,*param_2,param_2[2],param_2[3]);
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147032f42(&local_58,uVar1);
  *(longlong *)(param_1 + 0x40) = local_48;
  *(undefined4 *)(param_1 + 0x30) = local_58;
  *(undefined4 *)(param_1 + 0x34) = uStack_54;
  *(undefined4 *)(param_1 + 0x38) = uStack_50;
  *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x48) = local_40;
  if ((undefined4 *)(param_1 + 0x30) == &local_58) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x50) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x5c) = uStack_30._4_4_;
  }
  FUN_1470330ca(&local_58,*param_2,param_2[1],param_2[6]);
  *(undefined4 *)(param_1 + 0x10) = local_58;
  *(undefined4 *)(param_1 + 0x14) = uStack_54;
  *(undefined4 *)(param_1 + 0x18) = uStack_50;
  *(undefined4 *)(param_1 + 0x1c) = uStack_4c;
  if ((undefined4 *)(param_1 + 0x10) == &local_58) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x20) = local_48;
    *(undefined4 *)(param_1 + 0x28) = local_40;
    *(undefined4 *)(param_1 + 0x2c) = local_3c;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2[1];
  *(undefined4 *)(param_1 + 100) = param_2[4];
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147033512 FUN_147033512 body=49 status=ok
// SIG undefined FUN_147033512(void)

void FUN_147033512(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x60) != param_2) {
    FUN_147032f42(param_1 + 0x30);
    FUN_147033164(param_1 + 0x10,*(undefined4 *)(param_1 + 0x60));
    *(int *)(param_1 + 0x60) = param_2;
  }
  return;
}



// FUNCTION 147033544 FUN_147033544 body=207 status=ok
// SIG undefined FUN_147033544(void)

void FUN_147033544(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0xc) * param_3;
  if (0 < (int)uVar3) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    iVar2 = 0;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_1470345fa(param_1,0);
      iVar2 = *(int *)(param_1 + 1);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar2 + uVar3;
    if ((uint)(iVar1 - iVar2) < uVar3) {
      FUN_145ca0cd4(param_1);
    }
    iVar1 = *(int *)((longlong)param_1 + 100);
    if (iVar1 == 2) {
      FUN_1421c3b30(param_2,*param_1,uVar3);
      return;
    }
    if (iVar1 == 0) {
      FUN_14703325e(param_1 + 2,param_2,param_3,*param_1);
      return;
    }
    if (iVar1 == 1) {
      FUN_14703325e(param_1 + 2,param_2,param_3,*param_1);
      FUN_1421c5330(*param_1,*(undefined4 *)(param_1 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147033614 FUN_147033614 body=59 status=ok
// SIG undefined FUN_147033614(void)

void FUN_147033614(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 0xc) * param_3 < 1) {
    return;
  }
  FUN_147033544();
  FUN_147032faa(param_1 + 6,*param_1,param_3);
  return;
}



// FUNCTION 147033650 FUN_147033650 body=4 status=ok
// SIG undefined FUN_147033650(void)

void FUN_147033650(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}



// FUNCTION 147033654 FUN_147033654 body=680 status=ok
// SIG undefined FUN_147033654(void)

void FUN_147033654(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auStack_b8 [44];
  uint local_8c;
  float local_88 [4];
  float local_78 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = param_3;
  lVar5 = FUN_14702db1e(*(undefined8 *)(param_1 + 0x70),param_3);
  lVar6 = FUN_14702db1e(*(undefined8 *)(param_1 + 0x78),param_3);
  lVar7 = FUN_14702db1e(*(undefined8 *)(param_1 + 0x80),param_3);
  lVar8 = FUN_14702db1e(*(undefined8 *)(param_1 + 0x88));
  lVar1 = *(longlong *)(param_1 + 0x90);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar3 = *(longlong *)(param_1 + 0xb0);
  lVar4 = *(longlong *)(param_1 + 0xc0);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  uVar11 = (ulonglong)local_8c;
  if (0 < (int)local_8c) {
    uVar9 = 0;
    do {
      local_88[0] = *(float *)(lVar5 + uVar9 * 4);
      local_88[1] = *(float *)(lVar6 + uVar9 * 4);
      local_88[2] = *(float *)(lVar7 + uVar9 * 4);
      local_88[3] = *(float *)(lVar8 + uVar9 * 4);
      fVar12 = *(float *)(param_1 + 0x14) * *(float *)(param_2 + uVar9 * 4);
      local_78[0] = *(float *)(param_1 + 0x18) * local_88[0] + *(float *)(param_1 + 0x5c) + fVar12;
      local_78[1] = *(float *)(param_1 + 0x1c) * local_88[1] + *(float *)(param_1 + 0x60) + fVar12;
      local_78[2] = *(float *)(param_1 + 0x20) * local_88[2] + *(float *)(param_1 + 100) + fVar12;
      local_78[3] = *(float *)(param_1 + 0x24) * local_88[3] + *(float *)(param_1 + 0x68) + fVar12;
      *(float *)(lVar1 + uVar9 * 4) = local_78[0];
      *(float *)(lVar2 + uVar9 * 4) = local_78[1];
      *(float *)(lVar3 + uVar9 * 4) = local_78[2];
      *(float *)(lVar4 + uVar9 * 4) = local_78[3];
      *(undefined4 *)(param_4 + uVar9 * 4) = 0;
      lVar10 = 0;
      do {
        fVar12 = (local_88[lVar10] - local_78[lVar10] * *(float *)(param_1 + 0x18 + lVar10 * 4)) *
                 *(float *)(param_1 + 0x28 + lVar10 * 4) +
                 *(float *)(param_1 + 0x4c + lVar10 * 4) * *(float *)(param_1 + 0x38 + lVar10 * 4);
        *(float *)(param_1 + 0x4c + lVar10 * 4) = fVar12;
        *(float *)(param_4 + uVar9 * 4) = fVar12 + *(float *)(param_4 + uVar9 * 4);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      fVar12 = *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x5c) =
           (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x50)) * fVar12;
      *(float *)(param_1 + 0x60) =
           (*(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x58)) * fVar12;
      *(float *)(param_1 + 100) = (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x58)) * fVar12
      ;
      *(float *)(param_1 + 0x68) =
           (-*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x54)) * fVar12;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  FUN_14702dace(*(undefined8 *)(param_1 + 0x70),uVar11);
  FUN_14702dace(*(undefined8 *)(param_1 + 0x78),uVar11);
  FUN_14702dace(*(undefined8 *)(param_1 + 0x80),uVar11);
  FUN_14702dace(*(undefined8 *)(param_1 + 0x88),uVar11);
  FUN_14702d9f4(*(undefined8 *)(param_1 + 0x70),lVar1,uVar11);
  FUN_14702d9f4(*(undefined8 *)(param_1 + 0x78),lVar2,uVar11);
  FUN_14702d9f4(*(undefined8 *)(param_1 + 0x80),lVar3,uVar11);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_14702d9f4(*(undefined8 *)(param_1 + 0x88),lVar4,uVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
}



// FUNCTION 147033900 FUN_147033900 body=90 status=ok
// SIG undefined FUN_147033900(void)

bool FUN_147033900(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142af3157(&local_28,param_1,param_2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0 < local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703395c FUN_14703395c body=105 status=ok
// SIG undefined FUN_14703395c(void)

void FUN_14703395c(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_14703506c(*(undefined8 *)(param_1 + 0x38));
  FUN_1470339c6(param_1,uVar2);
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470339c6 FUN_1470339c6 body=131 status=ok
// SIG undefined FUN_1470339c6(void)

void FUN_1470339c6(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x34);
      iVar3 = 0;
      if (iVar1 < 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        FUN_144893a1c(param_1 + 0x28,0);
        iVar3 = *(int *)(param_1 + 0x30);
        iVar1 = *(int *)(param_1 + 0x34);
      }
      iVar4 = iVar3 + param_2;
      *(int *)(param_1 + 0x30) = iVar4;
      if ((uint)(iVar1 - iVar3) < param_2) {
        FUN_1447403be(param_1 + 0x28);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      uVar2 = FUN_147034fda(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),iVar4);
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))
                (*(longlong **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),(longlong)(int)uVar2
                );
    } while (uVar2 == param_2);
  }
  return;
}



// FUNCTION 147033a4a FUN_147033a4a body=54 status=ok
// SIG undefined FUN_147033a4a(void)

byte FUN_147033a4a(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte bVar1;
  
  bVar1 = FUN_147034dc4(*(undefined8 *)(param_1 + 0x38));
  if ((bVar1 & param_4) == 1) {
    FUN_1470339c6(param_1,0x1000);
    bVar1 = 1;
  }
  return bVar1;
}



// FUNCTION 147033a80 FUN_147033a80 body=1425 status=ok
// SIG undefined FUN_147033a80(void)

void FUN_147033a80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar6 = (*(float *)(param_1 + 0x20) * 6.2831855) / *(float *)(param_1 + 0x18);
  fVar4 = sinf(fVar6);
  fVar5 = cosf(fVar6);
  fVar6 = sinhf((*(float *)(param_1 + 0x24) * 0.3465736 * fVar6) / fVar4);
  fVar6 = fVar6 * fVar4;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 1:
    fVar10 = fVar5 + 1.0;
    fVar7 = -fVar10;
    goto LAB_147033e03;
  case 2:
    fVar11 = -fVar6;
    fVar8 = fVar6 + 1.0;
    fVar9 = 1.0 - fVar6;
    fVar7 = 0.0;
    fVar10 = fVar6;
    goto LAB_147033f76;
  case 3:
    fVar7 = fVar5 * -2.0;
    fVar10 = 1.0;
    fVar9 = 1.0 - fVar6;
    fVar8 = fVar6 + 1.0;
    fVar11 = fVar10;
    fVar5 = fVar7;
    break;
  case 4:
    fVar4 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
    fVar7 = fVar5 * -2.0;
    fVar10 = fVar6 * fVar4 + 1.0;
    fVar8 = fVar6 / fVar4 + 1.0;
    fVar9 = 1.0 - fVar6 / fVar4;
    fVar11 = 1.0 - fVar6 * fVar4;
    fVar5 = fVar7;
    break;
  case 5:
    fVar6 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
    fVar7 = fVar6 + fVar6;
    if (fVar7 < 0.0) {
      fVar10 = sqrtf(fVar7);
    }
    else {
      fVar10 = SQRT(fVar7);
    }
    fVar4 = fVar4 * fVar10;
    fVar10 = fVar6 + 1.0;
    fVar12 = fVar6 + -1.0;
    fVar13 = fVar10 - fVar12 * fVar5;
    fVar7 = fVar7 * (fVar12 - fVar5 * fVar10);
    fVar11 = (fVar13 - fVar4) * fVar6;
    fVar9 = fVar12 * fVar5 + fVar10;
    fVar8 = fVar9 + fVar4;
    fVar5 = fVar5 * fVar10 + fVar12;
    fVar9 = fVar9 - fVar4;
    fVar10 = (fVar13 + fVar4) * fVar6;
LAB_147033f76:
    fVar5 = fVar5 * -2.0;
    break;
  case 6:
    fVar6 = powf(10.0,*(float *)(param_1 + 0x28) / 40.0);
    fVar10 = fVar6 + fVar6;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    fVar4 = fVar4 * fVar10;
    fVar11 = fVar6 + 1.0;
    fVar13 = fVar6 + -1.0;
    fVar12 = fVar13 * fVar5 + fVar11;
    fVar10 = (fVar12 + fVar4) * fVar6;
    fVar7 = (fVar5 * fVar11 + fVar13) * fVar6 * -2.0;
    fVar9 = fVar11 - fVar13 * fVar5;
    fVar8 = fVar9 + fVar4;
    fVar13 = fVar13 - fVar5 * fVar11;
    fVar9 = fVar9 - fVar4;
    fVar11 = (fVar12 - fVar4) * fVar6;
    fVar5 = fVar13 + fVar13;
    break;
  case 7:
    fVar10 = 1.0 - fVar6;
    fVar7 = fVar5 * -2.0;
    fVar8 = fVar6 + 1.0;
    fVar9 = fVar10;
    fVar11 = fVar8;
    fVar5 = fVar7;
    break;
  case 8:
    fVar9 = tanf((*(float *)(param_1 + 0x20) * 3.1415927) / *(float *)(param_1 + 0x18));
    fVar9 = 1.0 / fVar9;
    fVar4 = fVar9 * 1.4142135 * ((fVar6 + fVar6) / fVar4);
    fVar9 = fVar9 * fVar9;
    fVar10 = 1.0 / (fVar4 + 1.0 + fVar9);
    fVar7 = fVar10 + fVar10;
    fVar5 = (1.0 - fVar9) * fVar7;
    fVar9 = (1.0 - fVar4) + fVar9;
    goto LAB_147033ddc;
  case 9:
    fVar9 = tanf((*(float *)(param_1 + 0x20) * 3.1415927) / *(float *)(param_1 + 0x18));
    fVar4 = fVar9 * 1.4142135 * ((fVar6 + fVar6) / fVar4);
    fVar9 = fVar9 * fVar9;
    fVar10 = 1.0 / (fVar4 + 1.0 + fVar9);
    fVar7 = fVar10 * -2.0;
    fVar5 = (fVar9 + -1.0) * -fVar7;
    fVar9 = (1.0 - fVar4) + fVar9;
LAB_147033ddc:
    fVar8 = 1.0;
    fVar9 = fVar9 * fVar10;
    fVar11 = fVar10;
    break;
  default:
    fVar7 = 1.0 - fVar5;
    fVar10 = fVar7;
LAB_147033e03:
    fVar10 = fVar10 * 0.5;
    fVar8 = fVar6 + 1.0;
    fVar9 = 1.0 - fVar6;
    fVar11 = fVar10;
    fVar5 = fVar5 * -2.0;
  }
  iVar1 = _finite((double)fVar8);
  if (iVar1 == 0) {
    fVar9 = 0.0;
    fVar5 = 0.0;
    fVar11 = 0.0;
    fVar7 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar10 = fVar10 / fVar8;
    fVar7 = fVar7 / fVar8;
    fVar11 = fVar11 / fVar8;
    fVar5 = fVar5 / fVar8;
    fVar9 = fVar9 / fVar8;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      *(float *)(*(longlong *)(param_1 + 0x10) + lVar2) = fVar10;
      *(float *)(*(longlong *)(param_1 + 0x10) + 4 + lVar2) = fVar7;
      *(float *)(*(longlong *)(param_1 + 0x10) + 8 + lVar2) = fVar11;
      *(float *)(*(longlong *)(param_1 + 0x10) + 0xc + lVar2) = fVar5;
      *(float *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar2) = fVar9;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x24;
    } while (lVar3 < *(int *)(param_1 + 0x1c));
  }
  return;
}



// FUNCTION 147034012 FUN_147034012 body=180 status=ok
// SIG undefined FUN_147034012(void)

void FUN_147034012(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_147034c0a(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      lVar4 = (longlong)iVar1;
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_147034cc0(param_1,iVar1);
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar4 * 0x18) = *param_2;
      *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = 0;
      iVar1 = param_2[4];
      _Src = *(void **)(param_2 + 2);
      *(int *)(lVar2 + 0x10 + lVar4 * 0x18) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(lVar2 + lVar4 * 0x18 + 0x14) = 0;
      }
      else {
        puVar3 = (undefined8 *)(lVar2 + lVar4 * 0x18 + 8);
        FUN_1447c510a(puVar3,iVar1,0);
        memcpy((void *)*puVar3,_Src,(longlong)iVar1 << 2);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470340c6 FUN_1470340c6 body=62 status=ok
// SIG undefined FUN_1470340c6(void)

undefined8 * FUN_1470340c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1354f0;
  if (param_1[2] != 0) {
    thunk_FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147034104 FUN_147034104 body=74 status=ok
// SIG undefined FUN_147034104(void)

undefined8 * FUN_147034104(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1354f8;
  FUN_147034bdb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14703414e FUN_14703414e body=88 status=ok
// SIG undefined FUN_14703414e(void)

undefined8 * FUN_14703414e(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1470341a6 FUN_1470341a6 body=137 status=ok
// SIG undefined FUN_1470341a6(void)

longlong * FUN_1470341a6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147034230(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 147034230 FUN_147034230 body=132 status=ok
// SIG undefined FUN_147034230(void)

void FUN_147034230(longlong param_1,int param_2)

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



// FUNCTION 1470342b6 FUN_1470342b6 body=64 status=ok
// SIG undefined FUN_1470342b6(void)

void FUN_1470342b6(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    thunk_FUN_1400020a8(param_1,0x48);
    return;
  }
  return;
}



// FUNCTION 1470342f6 FUN_1470342f6 body=93 status=ok
// SIG undefined FUN_1470342f6(void)

void FUN_1470342f6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),uVar2,4);
  return;
}



// FUNCTION 147034354 FUN_147034354 body=122 status=ok
// SIG undefined FUN_147034354(void)

void FUN_147034354(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7ea90(param_1,param_2,uVar5,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470343d0 FUN_1470343d0 body=132 status=ok
// SIG undefined FUN_1470343d0(void)

void FUN_1470343d0(longlong param_1,int param_2)

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



// FUNCTION 147034456 FUN_147034456 body=36 status=ok
// SIG undefined FUN_147034456(void)

undefined8 FUN_147034456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14703449c FUN_14703449c body=93 status=ok
// SIG undefined FUN_14703449c(void)

void FUN_14703449c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1361f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a136180;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470344fa FUN_1470344fa body=126 status=ok
// SIG undefined FUN_1470344fa(void)

void FUN_1470344fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1361f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a136180;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147034569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147034586 FUN_147034586 body=23 status=ok
// SIG undefined FUN_147034586(void)

undefined8 FUN_147034586(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1470345a0 FUN_1470345a0 body=90 status=ok
// SIG undefined FUN_1470345a0(void)

void FUN_1470345a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,0x10);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_144a7ea90(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1470345fa FUN_1470345fa body=93 status=ok
// SIG undefined FUN_1470345fa(void)

void FUN_1470345fa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),uVar2,4);
  return;
}



// FUNCTION 147034658 FUN_147034658 body=59 status=ok
// SIG undefined FUN_147034658(void)

void FUN_147034658(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147034694(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),iVar1,4);
  return;
}



// FUNCTION 147034694 FUN_147034694 body=97 status=ok
// SIG undefined FUN_147034694(void)

ulonglong FUN_147034694(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0x10);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1470346f5 FUN_1470346f5 body=56 status=ok
// SIG undefined FUN_1470346f5(void)

void FUN_1470346f5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a1354f0;
    if (param_1[2] != 0) {
      thunk_FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14703472e FUN_14703472e body=147 status=ok
// SIG undefined FUN_14703472e(void)

void FUN_14703472e(longlong param_1,int param_2)

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



// FUNCTION 1470347c2 FUN_1470347c2 body=38 status=ok
// SIG undefined FUN_1470347c2(void)

void FUN_1470347c2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14703525a(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1470347e8 FUN_1470347e8 body=145 status=ok
// SIG undefined FUN_1470347e8(void)

void FUN_1470347e8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,4);
  }
  uVar2 = 0x7fffffff;
  if (1 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14703487a FUN_14703487a body=132 status=ok
// SIG undefined FUN_14703487a(void)

void FUN_14703487a(longlong param_1,int param_2)

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



// FUNCTION 147034900 FUN_147034900 body=48 status=ok
// SIG undefined FUN_147034900(void)

void FUN_147034900(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,4);
  }
  return;
}



// FUNCTION 147034930 FUN_147034930 body=143 status=ok
// SIG undefined FUN_147034930(void)

float * FUN_147034930(float *param_1,undefined4 *param_2)

{
  float fVar1;
  
  FUN_147032e10(param_1,*param_2,param_2[1],param_2[2],*(undefined1 *)(param_2 + 4));
  param_1[6] = 0.0;
  param_1[7] = (float)param_2[3];
  param_1[8] = 0.0;
  param_1[9] = 5.0;
  param_1[10] = 0.0;
  param_1[0xb] = 1.0;
  fVar1 = (float)param_2[5];
  if (0.0 < fVar1) {
    param_1[9] = fVar1;
    if (0.0 < *param_1) {
      fVar1 = expf(-1000.0 / (fVar1 * *param_1));
      param_1[10] = fVar1;
      param_1[0xb] = 1.0 - fVar1;
    }
  }
  return param_1;
}



// FUNCTION 1470349c0 FUN_1470349c0 body=147 status=ok
// SIG undefined FUN_1470349c0(void)

void FUN_1470349c0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147034a54 FUN_147034a54 body=96 status=ok
// SIG undefined FUN_147034a54(void)

void FUN_147034a54(longlong param_1,int param_2)

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



// FUNCTION 147034ab4 FUN_147034ab4 body=132 status=ok
// SIG undefined FUN_147034ab4(void)

void FUN_147034ab4(longlong param_1,int param_2)

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



// FUNCTION 147034b3a FUN_147034b3a body=118 status=ok
// SIG undefined FUN_147034b3a(void)

void FUN_147034b3a(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 2) = param_2 + 1;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 3) = 0;
  UNLOCK();
  iVar3 = 0;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1470345fa(param_1);
    iVar3 = (int)param_1[1];
    iVar2 = *(int *)((longlong)param_1 + 0xc);
  }
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 1) = uVar1 + iVar3;
  if ((uint)(iVar2 - iVar3) < uVar1) {
    FUN_145ca0cd4(param_1);
  }
  memset((void *)((longlong)iVar3 * 4 + *param_1),0,(longlong)(int)uVar1 << 2);
  return;
}



// FUNCTION 147034bb0 FUN_147034bb0 body=43 status=ok
// SIG undefined FUN_147034bb0(void)

void FUN_147034bb0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147034bdb FUN_147034bdb body=47 status=ok
// SIG undefined FUN_147034bdb(void)

void FUN_147034bdb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147034c0a FUN_147034c0a body=68 status=ok
// SIG undefined FUN_147034c0a(void)

void FUN_147034c0a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147034bdb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147034c50(param_1,param_2);
  return;
}



// FUNCTION 147034c50 FUN_147034c50 body=112 status=ok
// SIG undefined FUN_147034c50(void)

void FUN_147034c50(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147034cc0 FUN_147034cc0 body=147 status=ok
// SIG undefined FUN_147034cc0(void)

void FUN_147034cc0(longlong param_1,int param_2)

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



// FUNCTION 147034d54 FUN_147034d54 body=112 status=ok
// SIG undefined FUN_147034d54(void)

undefined8 * FUN_147034d54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  FUN_14703e832();
  uVar2 = *(uint *)(param_1 + 2);
  iVar1 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
    FUN_1405b572a(param_1);
    uVar2 = *(uint *)(param_1 + 2);
  }
  memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar2 * 2);
  return param_1;
}



// FUNCTION 147034dc4 FUN_147034dc4 body=210 status=ok
// SIG undefined FUN_147034dc4(void)

ulonglong FUN_147034dc4(longlong param_1,void *param_2,uint param_3,char param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  
  uVar4 = 0;
  if (param_3 <=
      (*(int *)(param_1 + 0x3c) + *(uint *)(param_1 + 0x38) + ~*(uint *)(param_1 + 0x40)) %
      *(uint *)(param_1 + 0x38)) {
    _Dst = *(void **)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x38);
    uVar5 = (*(int *)(param_1 + 0x3c) + uVar3 + ~*(uint *)(param_1 + 0x40)) % uVar3;
    if ((int)uVar5 <= (int)param_3) {
      param_3 = uVar5;
    }
    uVar5 = uVar3 - uVar2;
    if ((int)param_3 < (int)(uVar3 - uVar2)) {
      uVar5 = param_3;
    }
    memcpy((void *)((longlong)_Dst + (ulonglong)uVar2 * 4),param_2,(longlong)(int)uVar5 * 4);
    memcpy(_Dst,(void *)((longlong)param_2 + (longlong)(int)uVar5 * 4),
           (longlong)(int)(param_3 - uVar5) << 2);
    LOCK();
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) =
         (int)((ulonglong)(param_3 + uVar2) % (ulonglong)*(uint *)(param_1 + 0x38));
    UNLOCK();
    uVar4 = CONCAT71((int7)((ulonglong)_Dst >> 8),1);
    if (param_4 != '\0') {
      uVar4 = FUN_147034e96(param_1,uVar1);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147034e96 FUN_147034e96 body=324 status=ok
// SIG undefined FUN_147034e96(void)

ulonglong FUN_147034e96(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  void *_Dst;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  int iVar10;
  
  iVar10 = *(int *)((longlong)param_1 + 0x3c);
  iVar2 = (int)param_1[8];
  uVar6 = iVar2 - iVar10;
  if (iVar2 < iVar10) {
    uVar6 = (iVar2 - iVar10) + (int)param_1[7];
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (lVar5 < (longlong)(ulonglong)uVar6) {
    plVar1 = param_1 + 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) < 0) {
      FUN_14482f6fa(plVar1,0);
    }
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    lVar5 = param_1[2];
    iVar10 = (int)lVar5 + uVar6;
    *(int *)(param_1 + 2) = iVar10;
    if ((uint)(*(int *)((longlong)param_1 + 0x14) - (int)lVar5) < uVar6) {
      FUN_14475e4ac(plVar1);
      iVar10 = (int)param_1[2];
    }
    FUN_14703303a(param_1 + 5,param_1[1],iVar10);
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < 0) {
      FUN_144893a1c(param_1 + 3,0);
    }
    cVar4 = (**(code **)(*param_1 + 0x20))(param_1,plVar1,param_1 + 3);
    if (cVar4 == '\0') {
      uVar9 = 0;
    }
    else {
      _Src = (void *)param_1[3];
      _Dst = (void *)param_1[9];
      uVar6 = *(uint *)(param_1 + 0xc);
      uVar3 = *(uint *)(param_1 + 0xb);
      uVar7 = (*(int *)((longlong)param_1 + 0x5c) + uVar3 + ~*(uint *)(param_1 + 0xc)) % uVar3;
      uVar8 = *(uint *)(param_1 + 4);
      if ((int)uVar7 <= (int)*(uint *)(param_1 + 4)) {
        uVar8 = uVar7;
      }
      uVar7 = uVar3 - uVar6;
      if ((int)uVar8 < (int)(uVar3 - uVar6)) {
        uVar7 = uVar8;
      }
      memcpy((void *)((longlong)_Dst + (ulonglong)uVar6),_Src,(longlong)(int)uVar7);
      memcpy(_Dst,(void *)((longlong)_Src + (longlong)(int)uVar7),(longlong)(int)(uVar8 - uVar7));
      LOCK();
      *(uint *)(param_1 + 0xc) = (uVar8 + uVar6) % *(uint *)(param_1 + 0xb);
      UNLOCK();
    }
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147034fda FUN_147034fda body=9 status=ok
// SIG undefined FUN_147034fda(void)

void FUN_147034fda(longlong param_1)

{
  FUN_147034fe4(param_1 + 0x48);
  return;
}



// FUNCTION 147034fe4 FUN_147034fe4 body=135 status=ok
// SIG undefined FUN_147034fe4(void)

int FUN_147034fe4(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  
  _Src = (void *)*param_1;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 3);
  iVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar3 = *(int *)(param_1 + 2);
    iVar4 = (iVar2 - iVar1) + iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 2);
  }
  if (param_3 < iVar4) {
    iVar4 = param_3;
  }
  iVar3 = iVar3 - *(uint *)((longlong)param_1 + 0x14);
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  memcpy(param_2,(void *)((ulonglong)*(uint *)((longlong)param_1 + 0x14) + (longlong)_Src),
         (longlong)iVar3);
  memcpy((void *)((longlong)param_2 + (longlong)iVar3),_Src,(longlong)(iVar4 - iVar3));
  LOCK();
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)(*(int *)((longlong)param_1 + 0x14) + iVar4) % *(uint *)(param_1 + 2);
  UNLOCK();
  return iVar4;
}



// FUNCTION 14703506c FUN_14703506c body=212 status=ok
// SIG undefined FUN_14703506c(void)

ulonglong FUN_14703506c(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  void *_Dst;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_147034e96();
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_144893a1c(param_1 + 3,0);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_1 + 3);
  _Src = (void *)param_1[3];
  _Dst = (void *)param_1[9];
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0xb);
  uVar6 = (*(int *)((longlong)param_1 + 0x5c) + uVar1 + ~*(uint *)(param_1 + 0xc)) % uVar1;
  if ((int)*(uint *)(param_1 + 4) < (int)uVar6) {
    uVar6 = *(uint *)(param_1 + 4);
  }
  uVar7 = uVar1 - uVar5;
  if ((int)uVar6 < (int)(uVar1 - uVar5)) {
    uVar7 = uVar6;
  }
  memcpy((void *)((ulonglong)uVar5 + (longlong)_Dst),_Src,(longlong)(int)uVar7);
  memcpy(_Dst,(void *)((longlong)_Src + (longlong)(int)uVar7),(longlong)(int)(uVar6 - uVar7));
  LOCK();
  *(uint *)(param_1 + 0xc) = (uVar5 + uVar6) % *(uint *)(param_1 + 0xb);
  UNLOCK();
  if ((int)uVar6 < 0) {
    uVar4 = (ulonglong)(int)uVar6;
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0x5c);
    iVar3 = (int)param_1[0xc];
    uVar5 = iVar3 - iVar2;
    if (iVar3 < iVar2) {
      uVar5 = (iVar3 - iVar2) + (int)param_1[0xb];
    }
    uVar4 = (ulonglong)uVar5;
  }
  return uVar4;
}



// FUNCTION 147035140 FUN_147035140 body=214 status=ok
// SIG undefined FUN_147035140(void)

uint * FUN_147035140(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = param_2;
  uVar6 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar3,param_4 + param_2 * 2,param_4 + param_2,4,0x10);
  lVar2 = *(longlong *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = uVar3;
  if (lVar2 != 0) {
    FUN_14702d90a(lVar2);
    thunk_FUN_1400020a8(lVar2,0x48);
    uVar3 = *(undefined8 *)(param_1 + 6);
  }
  FUN_14702d93a(uVar3,*param_1);
  uVar4 = 0;
  if (0 < (int)param_3) {
    uVar4 = param_3;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_3) {
    uVar4 = uVar1;
  }
  param_1[1] = uVar4;
  uVar5 = uVar1 - uVar4;
  if ((uVar5 & 3) != 0) {
    uVar5 = uVar1 + ~uVar4 & 0xfffffffc;
    uVar6 = (uVar1 + ~uVar4 & 3) + 1;
  }
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  return param_1;
}



// FUNCTION 147035216 FUN_147035216 body=67 status=ok
// SIG undefined FUN_147035216(void)

void FUN_147035216(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar4 = 0;
  if (0 < (int)param_2) {
    uVar4 = param_2;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < (int)param_2) {
    uVar4 = uVar1;
  }
  param_1[1] = uVar4;
  uVar3 = uVar1 - uVar4;
  if ((uVar3 & 3) != 0) {
    uVar3 = uVar1 + ~uVar4 & 0xfffffffc;
    uVar2 = (uVar1 + ~uVar4 & 3) + 1;
  }
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return;
}



// FUNCTION 14703525a FUN_14703525a body=47 status=ok
// SIG undefined FUN_14703525a(void)

void FUN_14703525a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14702d90a(lVar1);
    thunk_FUN_1400020a8(lVar1,0x48);
    return;
  }
  return;
}



// FUNCTION 14703528a FUN_14703528a body=33 status=ok
// SIG undefined FUN_14703528a(void)

void FUN_14703528a(undefined4 *param_1)

{
  FUN_14702dc10(*(undefined8 *)(param_1 + 6));
  FUN_14702d93a(*(undefined8 *)(param_1 + 6),*param_1);
  return;
}



// FUNCTION 1470352ac FUN_1470352ac body=132 status=ok
// SIG undefined FUN_1470352ac(void)

void FUN_1470352ac(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_2 + 1);
  FUN_14702dc6a(param_3,uVar1);
  lVar5 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar5 + uVar1;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar5) < uVar1) {
    FUN_145ca0cd4(param_3);
  }
  if (0 < (int)param_2[1]) {
    lVar5 = *param_3;
    lVar2 = *param_2;
    iVar8 = 0;
    iVar6 = (int)param_2[1];
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar6 < *(int *)(param_1 + 0x10)) {
        iVar4 = iVar6;
      }
      FUN_147035384(param_1,lVar2 + (longlong)iVar8 * 4,iVar4,lVar5 + (longlong)iVar8 * 4);
      iVar8 = iVar8 + iVar4;
      iVar7 = iVar6 - iVar4;
      bVar3 = iVar4 <= iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar3);
  }
  return;
}



// FUNCTION 147035330 FUN_147035330 body=83 status=ok
// SIG undefined FUN_147035330(void)

void FUN_147035330(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (0 < (int)param_2[1]) {
    lVar1 = *param_2;
    lVar2 = *param_3;
    iVar7 = 0;
    iVar5 = (int)param_2[1];
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar5 < *(int *)(param_1 + 0x10)) {
        iVar4 = iVar5;
      }
      FUN_147035384(param_1,lVar1 + (longlong)iVar7 * 4,iVar4,lVar2 + (longlong)iVar7 * 4);
      iVar7 = iVar7 + iVar4;
      iVar6 = iVar5 - iVar4;
      bVar3 = iVar4 <= iVar5;
      iVar5 = iVar6;
    } while (iVar6 != 0 && bVar3);
  }
  return;
}



// FUNCTION 147035384 FUN_147035384 body=88 status=ok
// SIG undefined FUN_147035384(void)

void FUN_147035384(longlong param_1,undefined8 param_2,int param_3,void *param_4)

{
  longlong lVar1;
  
  FUN_14702d9f4(*(undefined8 *)(param_1 + 0x18));
  lVar1 = FUN_14702db1e(*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0xc) + param_3,
                        *(undefined4 *)(param_1 + 8));
  memcpy(param_4,(void *)(lVar1 + (longlong)*(int *)(param_1 + 0xc) * 4),(longlong)param_3 * 4);
  FUN_14702dace(*(undefined8 *)(param_1 + 0x18),param_3);
  return;
}



// FUNCTION 1470353dc FUN_1470353dc body=168 status=ok
// SIG undefined FUN_1470353dc(void)

void FUN_1470353dc(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = FUN_14702d936(*(undefined8 *)(param_1 + 0x18));
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  if ((int)param_2 < (int)uVar3) {
    uVar3 = param_2;
  }
  _Src = (void *)FUN_14702db1e(*(undefined8 *)(param_1 + 0x18),uVar3,0);
  if (_Src == (void *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (-1 < *(int *)((longlong)param_3 + 0xc)) {
      return;
    }
    FUN_1470345fa(param_3,0);
    return;
  }
  FUN_14702dc6a(param_3,uVar3);
  iVar1 = *(int *)(param_3 + 1);
  *(uint *)(param_3 + 1) = iVar1 + uVar3;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar1) < uVar3) {
    FUN_145ca0cd4(param_3);
  }
  memcpy((void *)*param_3,_Src,(longlong)(int)uVar3 << 2);
  return;
}



// FUNCTION 147035484 FUN_147035484 body=87 status=ok
// SIG undefined FUN_147035484(void)

undefined8 * FUN_147035484(undefined8 *param_1)

{
  *param_1 = 0xbf800000;
  param_1[1] = 0;
  param_1[6] = 0x100000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1470357b2();
  param_1[4] = param_1[2];
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1470354dc FUN_1470354dc body=128 status=ok
// SIG undefined FUN_1470354dc(void)

void FUN_1470354dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *param_1 = 0xbf800000;
  local_1c = 0;
  FUN_1448158c6(param_1 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  FUN_1470357b2(param_1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 0xe) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703555e FUN_14703555e body=164 status=ok
// SIG undefined FUN_14703555e(void)

void FUN_14703555e(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  param_1[10] = param_3;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    param_1[10] = 0.0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_3 = 0.0;
  }
  if (1e-08 < ABS(param_2 - *param_1)) {
    *param_1 = param_2;
    fVar1 = (param_2 + param_2) / param_1[0xc];
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = expf(fVar1 * -3.1415927);
    param_1[3] = fVar1;
    param_3 = param_1[10];
    param_1[2] = (fVar1 - param_1[1]) / (float)(int)param_3;
  }
  if ((int)param_3 < 2) {
    param_1[2] = 0.0;
    param_1[1] = param_1[3];
  }
  return;
}



// FUNCTION 147035602 FUN_147035602 body=431 status=ok
// SIG undefined FUN_147035602(void)

void FUN_147035602(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 != 1) {
    uVar10 = param_4 & 0xfffffffc;
    if (iVar2 == 4) {
      fVar13 = *(float *)(param_1 + 4);
      pfVar3 = *(float **)(param_1 + 0x20);
      fVar11 = *pfVar3;
      fVar21 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar19 = pfVar3[3];
      if ((int)uVar10 < 1) {
        uVar9 = 0;
      }
      else {
        fVar17 = *(float *)(param_1 + 8);
        uVar9 = 0;
        fVar18 = fVar13;
        fVar12 = fVar13;
        fVar14 = fVar13;
        do {
          fVar13 = fVar13 + fVar17;
          fVar18 = fVar18 + fVar17;
          fVar12 = fVar12 + fVar17;
          fVar14 = fVar14 + fVar17;
          pfVar1 = (float *)(param_2 + uVar9 * 4);
          fVar11 = (fVar11 - *pfVar1) * fVar13 + *pfVar1;
          fVar21 = (fVar21 - pfVar1[1]) * fVar18 + pfVar1[1];
          fVar20 = (fVar20 - pfVar1[2]) * fVar12 + pfVar1[2];
          fVar19 = (fVar19 - pfVar1[3]) * fVar14 + pfVar1[3];
          pfVar1 = (float *)(param_3 + uVar9 * 4);
          *pfVar1 = fVar11;
          pfVar1[1] = fVar21;
          pfVar1[2] = fVar20;
          pfVar1[3] = fVar19;
          uVar9 = uVar9 + 4;
        } while (uVar9 < uVar10);
      }
      uVar7 = (uint)uVar9;
      *(float *)(param_1 + 4) = fVar13;
      *pfVar3 = fVar11;
      pfVar3[1] = fVar21;
      pfVar3[2] = fVar20;
      pfVar3[3] = fVar19;
    }
    else {
      uVar7 = 0;
      if (iVar2 == 2) {
        fVar13 = *(float *)(param_1 + 4);
        fVar11 = *(float *)(param_1 + 8);
        fVar20 = fVar11 + fVar11;
        pfVar3 = *(float **)(param_1 + 0x20);
        uVar9 = 0;
        fVar21 = fVar13;
        if (uVar10 != 0) {
          fVar21 = fVar13 + fVar11;
          fVar13 = fVar13 + fVar20;
        }
        fVar17 = (float)*(undefined8 *)pfVar3;
        fVar18 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
        fVar11 = (float)*(undefined8 *)pfVar3;
        fVar19 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
        if (0 < (int)uVar10) {
          uVar9 = 0;
          fVar12 = fVar21;
          fVar14 = fVar13;
          do {
            pfVar1 = (float *)(param_2 + uVar9 * 4);
            fVar11 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar15 = fVar17 - fVar11;
            fVar16 = fVar18 - fVar19;
            fVar17 = (((fVar17 - fVar11) * fVar21 + fVar11) - pfVar1[2]) * fVar13 + pfVar1[2];
            fVar18 = (((fVar18 - fVar19) * fVar12 + fVar19) - pfVar1[3]) * fVar14 + pfVar1[3];
            pfVar1 = (float *)(param_3 + uVar9 * 4);
            *pfVar1 = fVar15 * fVar21 + fVar11;
            pfVar1[1] = fVar16 * fVar12 + fVar19;
            pfVar1[2] = fVar17;
            pfVar1[3] = fVar18;
            fVar21 = fVar21 + fVar20;
            fVar12 = fVar12 + fVar20;
            fVar13 = fVar13 + fVar20;
            fVar14 = fVar14 + fVar20;
            uVar9 = uVar9 + 4;
            fVar11 = fVar17;
            fVar19 = fVar18;
          } while (uVar9 < uVar10);
        }
        uVar7 = (uint)uVar9;
        *(float *)(param_1 + 4) = fVar21;
        *pfVar3 = fVar17;
        auVar6._4_4_ = fVar18;
        auVar6._0_4_ = fVar17;
        auVar6._8_4_ = fVar11;
        auVar6._12_4_ = fVar19;
        uVar4 = extractps(auVar6,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 4) = uVar4;
      }
    }
    if ((int)uVar7 < (int)param_4) {
      uVar9 = (ulonglong)uVar7;
      do {
        uVar5 = (longlong)((ulonglong)(uint)((int)uVar9 >> 0x1f) << 0x20 | uVar9 & 0xffffffff) %
                (longlong)*(int *)(param_1 + 0x34);
        uVar8 = uVar5 & 0xffffffff;
        fVar13 = 1.0;
        if ((int)uVar5 != 0) {
          fVar13 = 0.0;
        }
        fVar11 = fVar13 * *(float *)(param_1 + 8) + *(float *)(param_1 + 4);
        *(float *)(param_1 + 4) = fVar11;
        fVar13 = *(float *)(param_2 + uVar9 * 4);
        fVar13 = (*(float *)(*(longlong *)(param_1 + 0x20) + uVar8 * 4) - fVar13) * fVar11 + fVar13;
        *(float *)(*(longlong *)(param_1 + 0x20) + uVar8 * 4) = fVar13;
        *(float *)(param_3 + uVar9 * 4) = fVar13;
        uVar9 = uVar9 + 1;
      } while (param_4 != uVar9);
    }
    return;
  }
  fVar13 = *(float *)(param_1 + 4);
  pfVar3 = *(float **)(param_1 + 0x20);
  fVar11 = *pfVar3;
  fVar21 = fVar13;
  if (0 < (int)param_4) {
    fVar20 = *(float *)(param_1 + 8);
    uVar9 = 0;
    do {
      fVar21 = fVar21 + fVar20;
      fVar19 = *(float *)(param_2 + uVar9 * 4);
      fVar11 = (fVar11 - fVar19) * fVar13 + fVar19;
      *(float *)(param_3 + uVar9 * 4) = fVar11;
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  *pfVar3 = fVar11;
  *(float *)(param_1 + 4) = fVar21;
  return;
}



// FUNCTION 1470357b2 FUN_1470357b2 body=111 status=ok
// SIG undefined FUN_1470357b2(void)

void FUN_1470357b2(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14482f6fa(plVar1);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x18) = uVar2 + iVar4;
  if ((uint)(iVar3 - iVar4) < uVar2) {
    FUN_14475e4ac(plVar1);
  }
  memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)uVar2 << 2);
  return;
}



// FUNCTION 147035822 FUN_147035822 body=82 status=ok
// SIG undefined FUN_147035822(void)

undefined8 * FUN_147035822(undefined8 *param_1)

{
  *param_1 = 0xbf800000;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_147035bc4();
  param_1[4] = param_1[2];
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 147035874 FUN_147035874 body=146 status=ok
// SIG undefined FUN_147035874(void)

void FUN_147035874(undefined4 *param_1,float param_2,undefined4 param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[0xc] = param_2;
  param_1[0xd] = param_2 * 0.5 + -1.0;
  param_1[0xe] = param_3;
  *param_1 = 0xbf800000;
  local_1c = 0;
  FUN_1448158c6(param_1 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[10] = 0;
  FUN_147035bc4(param_1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 0xf) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147035908 FUN_147035908 body=213 status=ok
// SIG undefined FUN_147035908(void)

void FUN_147035908(float *param_1,float param_2,float param_3)

{
  float fVar1;
  
  param_1[10] = param_3;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    param_1[10] = 0.0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_3 = 0.0;
  }
  if (1e-08 < ABS(param_2 - *param_1)) {
    if (param_1[0xd] <= param_2) {
      param_2 = param_1[0xd];
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *param_1 = param_2;
    fVar1 = (param_2 * 3.1415927) / param_1[0xc];
    fVar1 = ((1.0 - ABS(fVar1) / 3.1415927) * fVar1) /
            ((1.0 - ABS(fVar1 + 1.5707964) / 3.1415927) * (fVar1 + 1.5707964));
    fVar1 = fVar1 / (fVar1 + 1.0);
    param_1[3] = fVar1;
    param_1[2] = (fVar1 - param_1[1]) / (float)(int)param_3;
  }
  if ((int)param_3 < 2) {
    param_1[2] = 0.0;
    param_1[1] = param_1[3];
  }
  return;
}



// FUNCTION 1470359de FUN_1470359de body=485 status=ok
// SIG undefined FUN_1470359de(void)

void FUN_1470359de(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 1) {
    uVar13 = param_4 & 0xfffffffc;
    if (iVar3 == 4) {
      fVar14 = *(float *)(param_1 + 4);
      pfVar4 = *(float **)(param_1 + 0x20);
      fVar23 = *pfVar4;
      fVar15 = pfVar4[1];
      fVar18 = pfVar4[2];
      fVar19 = pfVar4[3];
      if ((int)uVar13 < 1) {
        uVar12 = 0;
      }
      else {
        fVar22 = *(float *)(param_1 + 8);
        uVar12 = 0;
        fVar28 = fVar14;
        fVar16 = fVar14;
        fVar17 = fVar14;
        do {
          fVar14 = fVar14 + fVar22;
          fVar28 = fVar28 + fVar22;
          fVar16 = fVar16 + fVar22;
          fVar17 = fVar17 + fVar22;
          pfVar1 = (float *)(param_2 + uVar12 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar20 = pfVar1[3];
          fVar21 = (*pfVar1 - fVar23) * fVar14;
          fVar24 = (fVar8 - fVar15) * fVar28;
          fVar25 = (fVar9 - fVar18) * fVar16;
          fVar26 = (fVar20 - fVar19) * fVar17;
          fVar27 = fVar23 + fVar21;
          fVar29 = fVar15 + fVar24;
          fVar30 = fVar18 + fVar25;
          fVar31 = fVar19 + fVar26;
          fVar23 = fVar21 + fVar27;
          fVar15 = fVar24 + fVar29;
          fVar18 = fVar25 + fVar30;
          fVar19 = fVar26 + fVar31;
          pfVar2 = (float *)(param_3 + uVar12 * 4);
          *pfVar2 = *pfVar1 - fVar27;
          pfVar2[1] = fVar8 - fVar29;
          pfVar2[2] = fVar9 - fVar30;
          pfVar2[3] = fVar20 - fVar31;
          uVar12 = uVar12 + 4;
        } while (uVar12 < uVar13);
      }
      uVar10 = (uint)uVar12;
      *(float *)(param_1 + 4) = fVar14;
      *pfVar4 = fVar23;
      pfVar4[1] = fVar15;
      pfVar4[2] = fVar18;
      pfVar4[3] = fVar19;
    }
    else {
      uVar10 = 0;
      if (iVar3 == 2) {
        fVar14 = *(float *)(param_1 + 4);
        fVar23 = *(float *)(param_1 + 8);
        fVar18 = fVar23 + fVar23;
        pfVar4 = *(float **)(param_1 + 0x20);
        uVar12 = 0;
        fVar15 = fVar14;
        if (uVar13 != 0) {
          fVar15 = fVar14 + fVar23;
          fVar14 = fVar14 + fVar18;
        }
        fVar22 = (float)*(undefined8 *)pfVar4;
        fVar28 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
        fVar23 = (float)*(undefined8 *)pfVar4;
        fVar19 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
        if (0 < (int)uVar13) {
          uVar12 = 0;
          fVar16 = fVar15;
          fVar17 = fVar14;
          do {
            pfVar1 = (float *)(param_2 + uVar12 * 4);
            fVar23 = *pfVar1;
            fVar19 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            fVar24 = (fVar23 - fVar22) * fVar15;
            fVar25 = (fVar19 - fVar28) * fVar16;
            fVar24 = fVar22 + fVar24 + fVar24;
            fVar25 = fVar28 + fVar25 + fVar25;
            fVar26 = (fVar8 - fVar24) * fVar14;
            fVar27 = (fVar9 - fVar25) * fVar17;
            fVar20 = fVar22 + (fVar23 - fVar22) * fVar15;
            fVar21 = fVar28 + (fVar19 - fVar28) * fVar16;
            fVar24 = fVar24 + fVar26;
            fVar25 = fVar25 + fVar27;
            fVar22 = fVar26 + fVar24;
            fVar28 = fVar27 + fVar25;
            pfVar1 = (float *)(param_3 + uVar12 * 4);
            *pfVar1 = fVar23 - fVar20;
            pfVar1[1] = fVar19 - fVar21;
            pfVar1[2] = fVar8 - fVar24;
            pfVar1[3] = fVar9 - fVar25;
            fVar15 = fVar15 + fVar18;
            fVar16 = fVar16 + fVar18;
            fVar14 = fVar14 + fVar18;
            fVar17 = fVar17 + fVar18;
            uVar12 = uVar12 + 4;
            fVar23 = fVar22;
            fVar19 = fVar28;
          } while (uVar12 < uVar13);
        }
        uVar10 = (uint)uVar12;
        *(float *)(param_1 + 4) = fVar15;
        *pfVar4 = fVar22;
        auVar7._4_4_ = fVar28;
        auVar7._0_4_ = fVar22;
        auVar7._8_4_ = fVar23;
        auVar7._12_4_ = fVar19;
        uVar5 = extractps(auVar7,1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 4) = uVar5;
      }
    }
    if ((int)uVar10 < (int)param_4) {
      uVar12 = (ulonglong)uVar10;
      do {
        uVar6 = (longlong)((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar12 & 0xffffffff) %
                (longlong)*(int *)(param_1 + 0x38);
        uVar11 = uVar6 & 0xffffffff;
        fVar14 = 1.0;
        if ((int)uVar6 != 0) {
          fVar14 = 0.0;
        }
        fVar15 = fVar14 * *(float *)(param_1 + 8) + *(float *)(param_1 + 4);
        *(float *)(param_1 + 4) = fVar15;
        fVar14 = *(float *)(param_2 + uVar12 * 4);
        fVar23 = *(float *)(*(longlong *)(param_1 + 0x20) + uVar11 * 4);
        fVar15 = (fVar14 - fVar23) * fVar15;
        fVar23 = fVar23 + fVar15;
        *(float *)(*(longlong *)(param_1 + 0x20) + uVar11 * 4) = fVar15 + fVar23;
        *(float *)(param_3 + uVar12 * 4) = fVar14 - fVar23;
        uVar12 = uVar12 + 1;
      } while (param_4 != uVar12);
    }
    return;
  }
  fVar14 = *(float *)(param_1 + 4);
  pfVar4 = *(float **)(param_1 + 0x20);
  fVar23 = *pfVar4;
  if (0 < (int)param_4) {
    fVar15 = *(float *)(param_1 + 8);
    uVar12 = 0;
    do {
      fVar14 = fVar14 + fVar15;
      fVar18 = *(float *)(param_2 + uVar12 * 4);
      fVar22 = (fVar18 - fVar23) * fVar14;
      fVar19 = fVar23 + fVar22;
      fVar23 = fVar22 + fVar19;
      *(float *)(param_3 + uVar12 * 4) = fVar18 - fVar19;
      uVar12 = uVar12 + 1;
    } while (param_4 != uVar12);
  }
  *pfVar4 = fVar23;
  *(float *)(param_1 + 4) = fVar14;
  return;
}



// FUNCTION 147035bc4 FUN_147035bc4 body=111 status=ok
// SIG undefined FUN_147035bc4(void)

void FUN_147035bc4(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14482f6fa(plVar1);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x18) = uVar2 + iVar4;
  if ((uint)(iVar3 - iVar4) < uVar2) {
    FUN_14475e4ac(plVar1);
  }
  memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(int)uVar2 << 2);
  return;
}



// FUNCTION 147035c34 FUN_147035c34 body=161 status=ok
// SIG undefined FUN_147035c34(void)

void FUN_147035c34(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar3);
    FUN_14702dc6a(puVar1,param_2);
    iVar2 = *(int *)(param_1 + 8 + lVar3);
    *(uint *)(param_1 + 8 + lVar3) = iVar2 + param_2;
    if ((uint)(*(int *)(param_1 + 0xc + lVar3) - iVar2) < param_2) {
      FUN_145ca0cd4(puVar1);
    }
    memset((void *)*puVar1,0,(longlong)(int)param_2 << 2);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  FUN_14702dc6a(puVar1,param_2);
  iVar2 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar2 + param_2;
  if ((uint)(*(int *)(param_1 + 0x7c) - iVar2) < param_2) {
    FUN_145ca0cd4(puVar1);
  }
  memset((void *)*puVar1,0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 147035cd6 FUN_147035cd6 body=235 status=ok
// SIG undefined FUN_147035cd6(void)

void FUN_147035cd6(int *param_1,float param_2)

{
  param_2 = param_2 / 29761.0;
  *param_1 = (int)(param_2 * 908.0);
  param_1[1] = (int)(param_2 * 16.0);
  param_1[2] = (int)(param_2 * 353.0);
  param_1[3] = (int)(param_2 * 837.0);
  param_1[4] = (int)(param_2 * 2437.0);
  param_1[5] = (int)(param_2 * 590.0);
  param_1[6] = (int)(param_2 * 2656.0);
  param_1[7] = (int)(param_2 * 187.0);
  param_1[8] = (int)(param_2 * 1041.0);
  param_1[9] = (int)(param_2 * 1066.0);
  param_1[10] = (int)(param_2 * 1607.0);
  param_1[0xb] = (int)(param_2 * 463.0);
  return;
}



// FUNCTION 147035dc2 FUN_147035dc2 body=235 status=ok
// SIG undefined FUN_147035dc2(void)

void FUN_147035dc2(int *param_1,float param_2)

{
  param_2 = param_2 / 29761.0;
  *param_1 = (int)(param_2 * 672.0);
  param_1[1] = (int)(param_2 * 16.0);
  param_1[2] = (int)(param_2 * 266.0);
  param_1[3] = (int)(param_2 * 1845.0);
  param_1[4] = (int)(param_2 * 863.0);
  param_1[5] = (int)(param_2 * 1479.0);
  param_1[6] = (int)(param_2 * 1800.0);
  param_1[7] = (int)(param_2 * 335.0);
  param_1[8] = (int)(param_2 * 1578.0);
  param_1[9] = (int)(param_2 * 121.0);
  param_1[10] = (int)(param_2 * 1875.0);
  param_1[0xb] = (int)(param_2 * 1724.0);
  return;
}



// FUNCTION 147035eae FUN_147035eae body=922 status=ok
// SIG undefined FUN_147035eae(void)

undefined4 * FUN_147035eae(undefined4 *param_1,undefined4 param_2,uint param_3,undefined8 *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0x3f0000003a03126f;
  param_1[4] = 0;
  uVar8 = param_4[1];
  uVar9 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  *(undefined8 *)(param_1 + 5) = *param_4;
  *(undefined8 *)(param_1 + 7) = uVar8;
  *(undefined8 *)(param_1 + 9) = uVar9;
  *(undefined8 *)(param_1 + 0xb) = uVar5;
  *(undefined8 *)(param_1 + 0xd) = uVar6;
  *(undefined8 *)(param_1 + 0xf) = uVar7;
  memset(param_1 + 0x12,0,0x90);
  if ((int)param_1[0x10] < (int)param_3) {
    param_3 = param_1[0x10];
  }
  uVar10 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  param_1[1] = uVar10 & 0xfffffffc;
  iVar2 = param_1[5];
  iVar3 = param_1[6];
  uVar8 = FUN_14001cc68(0x88,0x10);
  FUN_14703083a(uVar8,0x80000000,iVar2 - iVar3,iVar3 + iVar2,uVar10 & 0xfffffffc,param_2);
  lVar4 = *(longlong *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  if (lVar4 != 0) {
    FUN_1470309f8(lVar4);
    thunk_FUN_1400020a8(lVar4,0x88);
  }
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[7],param_1[7],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x14) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[8],param_1[8],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x16) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[9],param_1[9],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[10],param_1[10],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x1a) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar8 = FUN_14001cc68(0x10,0x10);
  FUN_14702e6da(uVar8,param_1[2]);
  lVar4 = *(longlong *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x1c) = uVar8;
  if (lVar4 != 0) {
    thunk_FUN_1400020a8(lVar4,0x10);
  }
  fVar1 = (float)param_1[4];
  uVar8 = FUN_14001cc68(0x28,0x10);
  FUN_147037e50(uVar8,fVar1 + -0.15,param_1[0xb],param_1[1]);
  lVar4 = *(longlong *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1e) = uVar8;
  if (lVar4 != 0) {
    FUN_147037f30(lVar4);
    thunk_FUN_1400020a8(lVar4,0x28);
  }
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[0xc],param_1[0xc],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[0xd],param_1[0xd],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x22);
  *(undefined8 *)(param_1 + 0x22) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[0xe],param_1[0xe],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x24) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[0xf],param_1[0xf],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x26);
  *(undefined8 *)(param_1 + 0x26) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  uVar9 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar9,param_1[0x10],param_1[0x10],0x100);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  FUN_14703e8c8(uVar8);
  FUN_14703e8c8(0);
  return param_1;
}



// FUNCTION 147036248 FUN_147036248 body=249 status=ok
// SIG undefined FUN_147036248(void)

void FUN_147036248(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0xa0));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x98));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x90));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x88));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_147037f30(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    thunk_FUN_1400020a8(*(longlong *)(param_1 + 0x70),0x10);
  }
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x68));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x60));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x58));
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x50));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_1470309f8(lVar1);
    thunk_FUN_1400020a8(lVar1,0x88);
    return;
  }
  return;
}



// FUNCTION 147036342 FUN_147036342 body=703 status=ok
// SIG undefined FUN_147036342(void)

void FUN_147036342(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_147035c34(param_5,uVar3);
  if ((uVar3 == *(uint *)(param_3 + 1)) && (uVar3 == *(uint *)(param_4 + 8))) {
    lVar1 = param_1 + 0xa8;
    FUN_14702dc6a(lVar1,uVar3);
    iVar4 = *(int *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xb0) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0xb4) - iVar4) < uVar3) {
      FUN_145ca0cd4(lVar1);
    }
    lVar2 = param_1 + 0xb8;
    FUN_14702dc6a(lVar2,uVar3);
    iVar4 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0xc4) - iVar4) < uVar3) {
      FUN_145ca0cd4(lVar2);
    }
    local_b8 = param_1 + 200;
    FUN_14702dc6a(local_b8,uVar3);
    iVar4 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_1 + 0xd4) - iVar4) < uVar3) {
      FUN_145ca0cd4(local_b8);
    }
    local_70 = *(undefined8 *)(param_1 + 0xa8);
    local_68 = *(undefined4 *)(param_1 + 0xb0);
    local_80 = *param_2;
    local_78 = *(undefined4 *)(param_2 + 1);
    local_90 = *param_3;
    local_88 = *(undefined4 *)(param_3 + 1);
    FUN_142af41a5(&local_90,1.0 - *(float *)(param_1 + 0xc));
    FUN_147030a72(*(undefined8 *)(param_1 + 0x48),lVar1,param_4,lVar2);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x50),lVar2,param_5);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x58),param_5,param_5 + 0x10);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x60),param_5 + 0x10,param_5 + 0x20);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x68),param_5 + 0x20,lVar1);
    local_a0 = *(undefined8 *)(param_1 + 0xa8);
    local_98 = *(undefined4 *)(param_1 + 0xb0);
    FUN_142af1db6(&local_a0,1.0 - *(float *)(param_1 + 8));
    FUN_14702e71c(*(undefined8 *)(param_1 + 0x70),lVar1,lVar2);
    local_b0 = *(undefined8 *)(param_1 + 0xb8);
    local_a8 = *(undefined4 *)(param_1 + 0xc0);
    FUN_142af1db6(&local_b0,1.0 - *(float *)(param_1 + 0xc));
    lVar5 = local_b8;
    FUN_147036602(*(undefined8 *)(param_1 + 0x78),lVar2,lVar1,local_b8);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x80),lVar5,param_5 + 0x30);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x88),param_5 + 0x30,param_5 + 0x40);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x90),lVar1,param_5 + 0x50);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0x98),param_5 + 0x50,param_5 + 0x60);
    FUN_1470352ac(*(undefined8 *)(param_1 + 0xa0),param_5 + 0x60,param_5 + 0x70);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147036602 FUN_147036602 body=246 status=ok
// SIG undefined FUN_147036602(void)

void FUN_147036602(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar1 = *param_2;
  uVar8 = *(uint *)(param_2 + 1);
  FUN_14702dc6a(param_3,uVar8);
  lVar3 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar3 + uVar8;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar3) < uVar8) {
    FUN_145ca0cd4(param_3);
  }
  FUN_14702dc6a(param_4,uVar8);
  lVar3 = param_4[1];
  *(uint *)(param_4 + 1) = (int)lVar3 + uVar8;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - (int)lVar3) < uVar8) {
    FUN_145ca0cd4(param_4);
  }
  else if (uVar8 == 0) {
    return;
  }
  lVar3 = *param_3;
  lVar2 = *param_4;
  iVar6 = 0;
  do {
    uVar5 = param_1[2];
    if ((int)uVar8 <= (int)param_1[2]) {
      uVar5 = uVar8;
    }
    uVar4 = FUN_14702db1e(*(undefined8 *)(param_1 + 8),uVar5,0);
    lVar7 = (longlong)iVar6;
    lVar9 = lVar7 * 4 + lVar2;
    thunk_FUN_1421c3a50(lVar1 + lVar7 * 4,uVar4,uVar5,lVar3 + lVar7 * 4,lVar9,*param_1);
    FUN_14702dace(*(undefined8 *)(param_1 + 8),uVar5);
    FUN_14702d9f4(*(undefined8 *)(param_1 + 8),lVar9);
    iVar6 = iVar6 + uVar5;
    uVar8 = uVar8 - uVar5;
  } while (uVar8 != 0);
  return;
}



// FUNCTION 1470366f8 FUN_1470366f8 body=289 status=ok
// SIG undefined FUN_1470366f8(void)

void FUN_1470366f8(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x88);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x90);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0x98);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  FUN_14702e714(*(undefined8 *)(param_1 + 0x70));
  FUN_147030db6(*(undefined8 *)(param_1 + 0x48));
  lVar2 = *(longlong *)(param_1 + 0x78);
  FUN_14702dc10(*(undefined8 *)(lVar2 + 0x20));
  FUN_14702d93a(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 4));
  return;
}



// FUNCTION 14703681a FUN_14703681a body=125 status=ok
// SIG undefined FUN_14703681a(void)

void FUN_14703681a(longlong param_1,float param_2)

{
  float *pfVar1;
  
  *(float *)(param_1 + 0x10) = param_2;
  pfVar1 = *(float **)(param_1 + 0x48);
  param_2 = -param_2;
  if (0.9 <= param_2) {
    param_2 = 0.9;
  }
  if (param_2 <= -0.9) {
    param_2 = -0.9;
  }
  if (*(char *)(pfVar1 + 7) == '\x01') {
    *(undefined1 *)(pfVar1 + 7) = 0;
    pfVar1[4] = 0.0;
    pfVar1[6] = 0.0;
  }
  else {
    pfVar1[4] = (float)(int)(pfVar1[8] * pfVar1[3]);
    pfVar1[6] = 0.0;
    if ((float)(int)(pfVar1[8] * pfVar1[3]) != 0.0) {
      pfVar1[2] = param_2 - pfVar1[1];
      *pfVar1 = pfVar1[1];
      goto LAB_147036851;
    }
  }
  pfVar1[1] = param_2;
LAB_147036851:
  **(float **)(param_1 + 0x78) = *(float *)(param_1 + 0x10) + -0.15;
  return;
}



// FUNCTION 147036898 FUN_147036898 body=1292 status=ok
// SIG undefined FUN_147036898(void)

float * FUN_147036898(float *param_1,float param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  
  *param_1 = param_2;
  param_1[1] = 1.0;
  param_1[2] = 0.0;
  param_1[3] = 1.5707964;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  uVar9 = *(undefined8 *)(param_4 + 2);
  uVar11 = *(undefined8 *)(param_4 + 3);
  uVar8 = *(undefined8 *)(param_4 + 5);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)(param_1 + 9) = uVar11;
  *(undefined8 *)(param_1 + 0xb) = uVar8;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = 0.0;
  param_1[0x17] = 0.0;
  param_1[0x18] = 0.0;
  param_1[0x19] = 0.0;
  FUN_147035cd6(param_1 + 0x1a,param_2);
  FUN_147035dc2(param_1 + 0x26,param_2);
  memset(param_1 + 0x32,0,0x160);
  fVar12 = param_4[1];
  fVar1 = param_4[2];
  fVar3 = param_4[3];
  fVar4 = param_4[3];
  fVar5 = param_4[4];
  fVar6 = param_4[5];
  fVar7 = param_4[6];
  param_1[6] = *param_4;
  param_1[7] = fVar12;
  param_1[8] = fVar1;
  param_1[9] = fVar3;
  param_1[9] = fVar4;
  param_1[10] = fVar5;
  param_1[0xb] = fVar6;
  param_1[0xc] = fVar7;
  FUN_147036da4(param_1 + 6);
  uVar9 = FUN_14001cc68(0xd8,0x10);
  FUN_147035eae(uVar9,*param_1,param_3,param_1 + 0x1a);
  lVar2 = *(longlong *)(param_1 + 0x32);
  *(undefined8 *)(param_1 + 0x32) = uVar9;
  if (lVar2 != 0) {
    FUN_147036248(lVar2);
    thunk_FUN_1400020a8(lVar2,0xd8);
  }
  lVar10 = FUN_14001cc68(0xd8,0x10);
  FUN_147035eae(lVar10,*param_1,param_3,param_1 + 0x26);
  lVar2 = *(longlong *)(param_1 + 0x34);
  *(longlong *)(param_1 + 0x34) = lVar10;
  if (lVar2 != 0) {
    FUN_147036248(lVar2);
    thunk_FUN_1400020a8(lVar2,0xd8);
    lVar10 = *(longlong *)(param_1 + 0x34);
  }
  fVar12 = *(float *)(lVar10 + 4);
  if ((int)*(float *)(*(longlong *)(param_1 + 0x32) + 4) < (int)*(float *)(lVar10 + 4)) {
    fVar12 = *(float *)(*(longlong *)(param_1 + 0x32) + 4);
  }
  param_1[5] = fVar12;
  fVar1 = *param_1;
  uVar11 = FUN_14001cc68(0x20,0x10);
  FUN_147035140(uVar11,(int)((fVar1 * 2000.0) / 1000.0) + 8,0,fVar12);
  uVar9 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xe) = uVar11;
  FUN_14703e8c8(uVar9);
  FUN_14703e8c8(0);
  fVar12 = param_1[8];
  uVar9 = FUN_14001cc68(0x10,0x10);
  FUN_14702e6da(uVar9,1.0 - fVar12);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  if (lVar2 != 0) {
    thunk_FUN_1400020a8(lVar2,0x10);
  }
  fVar12 = *param_1;
  uVar9 = FUN_14001cc68(0x28,0x10);
  FUN_147037e50(uVar9,param_1[9],(int)((fVar12 / 29761.0) * 142.0),param_1[5]);
  lVar2 = *(longlong *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x12) = uVar9;
  if (lVar2 != 0) {
    FUN_147037f30(lVar2);
    thunk_FUN_1400020a8(lVar2,0x28);
  }
  fVar12 = *param_1;
  uVar9 = FUN_14001cc68(0x28,0x10);
  FUN_147037e50(uVar9,param_1[9],(int)((fVar12 / 29761.0) * 107.0),param_1[5]);
  lVar2 = *(longlong *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x14) = uVar9;
  if (lVar2 != 0) {
    FUN_147037f30(lVar2);
    thunk_FUN_1400020a8(lVar2,0x28);
  }
  fVar12 = *param_1;
  fVar1 = param_1[9];
  uVar9 = FUN_14001cc68(0x28,0x10);
  FUN_147037e50(uVar9,fVar1 + -0.125,(int)((fVar12 / 29761.0) * 379.0),param_1[5]);
  lVar2 = *(longlong *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x16) = uVar9;
  if (lVar2 != 0) {
    FUN_147037f30(lVar2);
    thunk_FUN_1400020a8(lVar2,0x28);
  }
  fVar12 = *param_1;
  fVar1 = param_1[9];
  uVar9 = FUN_14001cc68(0x28,0x10);
  FUN_147037e50(uVar9,fVar1 + -0.125,(int)((fVar12 / 29761.0) * 277.0),param_1[5]);
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  if (lVar2 != 0) {
    FUN_147037f30(lVar2);
    thunk_FUN_1400020a8(lVar2,0x28);
  }
  param_1[4] = 6.2831855 / *param_1;
  FUN_14702dc6a(param_1 + 0x7e,param_1[5]);
  FUN_14702dc6a(param_1 + 0x82,param_1[5]);
  FUN_14702dc6a(param_1 + 0x86,param_1[5]);
  FUN_14702dc6a(param_1 + 0x76,param_1[5]);
  FUN_14702dc6a(param_1 + 0x7a,param_1[5]);
  fVar1 = param_1[5];
  fVar12 = param_1[0x80];
  param_1[0x80] = (float)((int)fVar12 + (int)fVar1);
  if ((uint)((int)param_1[0x81] - (int)fVar12) < (uint)fVar1) {
    FUN_145ca0cd4(param_1 + 0x7e,fVar12);
    fVar1 = param_1[5];
  }
  fVar12 = param_1[0x84];
  param_1[0x84] = (float)((int)fVar12 + (int)fVar1);
  if ((uint)((int)param_1[0x85] - (int)fVar12) < (uint)fVar1) {
    FUN_145ca0cd4(param_1 + 0x82,fVar12);
    fVar1 = param_1[5];
  }
  fVar12 = param_1[0x88];
  param_1[0x88] = (float)((int)fVar12 + (int)fVar1);
  if ((uint)((int)param_1[0x89] - (int)fVar12) < (uint)fVar1) {
    FUN_145ca0cd4(param_1 + 0x86,fVar12);
    fVar1 = param_1[5];
  }
  fVar12 = param_1[0x78];
  param_1[0x78] = (float)((int)fVar12 + (int)fVar1);
  if ((uint)((int)param_1[0x79] - (int)fVar12) < (uint)fVar1) {
    FUN_145ca0cd4(param_1 + 0x76,fVar12);
    fVar1 = param_1[5];
  }
  fVar12 = param_1[0x7c];
  param_1[0x7c] = (float)((int)fVar12 + (int)fVar1);
  if ((uint)((int)param_1[0x7d] - (int)fVar12) < (uint)fVar1) {
    FUN_145ca0cd4(param_1 + 0x7a,fVar12);
    fVar1 = param_1[5];
  }
  FUN_147035c34(param_1 + 0x36,fVar1);
  FUN_147035c34(param_1 + 0x56,param_1[5]);
  FUN_147036e38(param_1);
  return param_1;
}



// FUNCTION 147036da4 FUN_147036da4 body=148 status=ok
// SIG undefined FUN_147036da4(void)

void FUN_147036da4(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  if (2000.0 <= fVar1) {
    fVar1 = 2000.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_1 = fVar1;
  if (0.0 <= fVar2) {
    fVar2 = 0.0;
  }
  param_1[1] = fVar2;
  fVar1 = param_1[2];
  if (0.99999 <= fVar1) {
    fVar1 = 0.99999;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[2] = fVar1;
  fVar1 = param_1[4];
  if (0.99999 <= fVar1) {
    fVar1 = 0.99999;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[4] = fVar1;
  fVar1 = param_1[3];
  if (0.99999 <= fVar1) {
    fVar1 = 0.99999;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[3] = fVar1;
  fVar1 = param_1[5];
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  param_1[5] = fVar1;
  fVar1 = param_1[6];
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[6] = fVar1;
  return;
}



// FUNCTION 147036e38 FUN_147036e38 body=339 status=ok
// SIG undefined FUN_147036e38(void)

void FUN_147036e38(float *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  fVar7 = powf(10.0,param_1[7] / 20.0);
  param_1[1] = fVar7;
  puVar2 = *(uint **)(param_1 + 0xe);
  uVar6 = (uint)((param_1[6] * *param_1) / 1000.0);
  uVar4 = 0;
  uVar5 = 0;
  if (0 < (int)uVar6) {
    uVar5 = uVar6;
  }
  uVar1 = *puVar2;
  if ((int)uVar1 < (int)uVar6) {
    uVar5 = uVar1;
  }
  puVar2[1] = uVar5;
  uVar6 = uVar1 - uVar5;
  if ((uVar6 & 3) != 0) {
    uVar6 = uVar1 + ~uVar5 & 0xfffffffc;
    uVar4 = (uVar1 + ~uVar5 & 3) + 1;
  }
  puVar2[2] = uVar6;
  puVar2[3] = uVar4;
  FUN_14702e6fc(*(undefined8 *)(param_1 + 0x10),1.0 - param_1[8]);
  fVar7 = param_1[9];
  **(float **)(param_1 + 0x12) = fVar7;
  **(float **)(param_1 + 0x14) = fVar7;
  **(float **)(param_1 + 0x16) = param_1[9] + -0.125;
  **(float **)(param_1 + 0x18) = param_1[9] + -0.125;
  FUN_14703681a(*(undefined8 *)(param_1 + 0x32),param_1[0xc]);
  lVar3 = *(longlong *)(param_1 + 0x32);
  *(float *)(lVar3 + 8) = param_1[10];
  FUN_14702e6fc(*(undefined8 *)(lVar3 + 0x70));
  *(float *)(*(longlong *)(param_1 + 0x32) + 0xc) = param_1[0xb];
  FUN_14703681a(*(undefined8 *)(param_1 + 0x34),param_1[0xc]);
  lVar3 = *(longlong *)(param_1 + 0x34);
  *(float *)(lVar3 + 8) = param_1[10];
  FUN_14702e6fc(*(undefined8 *)(lVar3 + 0x70));
  *(float *)(*(longlong *)(param_1 + 0x34) + 0xc) = param_1[0xb];
  return;
}



// FUNCTION 147036f8c FUN_147036f8c body=338 status=ok
// SIG undefined FUN_147036f8c(void)

void FUN_147036f8c(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  FUN_1470370de(param_1 + 0x158);
  FUN_1470370de(param_1 + 0xd8);
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    FUN_147036248(lVar1);
    thunk_FUN_1400020a8(lVar1,0xd8);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (lVar1 != 0) {
    FUN_147036248(lVar1);
    thunk_FUN_1400020a8(lVar1,0xd8);
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_147037f30(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_147037f30(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_147037f30(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_147037f30(lVar1);
    thunk_FUN_1400020a8(lVar1,0x28);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    thunk_FUN_1400020a8(*(longlong *)(param_1 + 0x40),0x10);
  }
  FUN_14703e8c8(*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 1470370de FUN_1470370de body=56 status=ok
// SIG undefined FUN_1470370de(void)

void FUN_1470370de(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x70;
  do {
    if (*(longlong *)(param_1 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 147037116 FUN_147037116 body=252 status=ok
// SIG undefined FUN_147037116(void)

void FUN_147037116(longlong param_1,longlong *param_2,int param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = (longlong)(int)param_2[1] / (longlong)param_3;
  uVar5 = (uint)uVar3;
  uVar7 = uVar3 & 0xffffffff;
  FUN_14702dc6a(param_4,uVar3 & 0xffffffff);
  FUN_14702dc6a(param_5,uVar7);
  lVar4 = param_4[1];
  *(uint *)(param_4 + 1) = (int)lVar4 + uVar5;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - (int)lVar4) < uVar5) {
    FUN_145ca0cd4(param_4);
  }
  lVar4 = param_5[1];
  *(uint *)(param_5 + 1) = (int)lVar4 + uVar5;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar4) < uVar5) {
    FUN_145ca0cd4(param_5);
  }
  if (0 < (int)uVar5) {
    lVar4 = *param_2;
    lVar1 = *param_4;
    lVar2 = *param_5;
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar6 = (int)uVar7;
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar6 <= *(int *)(param_1 + 0x14)) {
        iVar8 = iVar6;
      }
      FUN_147037212(param_1,lVar4 + (longlong)iVar10 * 4,iVar8,param_3,lVar1 + (longlong)iVar9 * 4,
                    lVar2 + (longlong)iVar9 * 4);
      iVar10 = iVar10 + iVar8 * param_3;
      iVar9 = iVar9 + iVar8;
      uVar7 = (ulonglong)(uint)(iVar6 - iVar8);
    } while (iVar6 - iVar8 != 0 && iVar8 <= iVar6);
  }
  return;
}



// FUNCTION 147037212 FUN_147037212 body=1340 status=ok
// SIG undefined FUN_147037212(void)

void FUN_147037212(longlong param_1,void *param_2,uint param_3,int param_4,void *param_5,
                  void *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  size_t _Size;
  undefined1 auStack_258 [32];
  longlong local_238;
  void *local_228;
  void *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  uint local_1d0;
  undefined8 local_1c8;
  uint local_1c0;
  void *local_1b8;
  uint local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  void *local_198;
  uint local_190;
  undefined8 local_188;
  uint local_180;
  undefined8 local_178;
  uint local_170;
  void *local_168;
  uint local_160;
  void *local_158;
  uint local_150;
  undefined8 local_148;
  uint local_140;
  undefined8 local_138;
  uint local_130;
  void *local_128;
  uint local_120;
  void *local_118;
  uint local_110;
  undefined8 local_108;
  uint local_100;
  void *local_f8;
  uint local_f0;
  undefined8 local_e8;
  uint local_e0;
  void *local_d8;
  uint local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_b8;
  uint local_b0;
  void *local_a8;
  uint local_a0;
  void *local_98;
  uint local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  uint local_70;
  void *local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_220 = param_6;
  local_228 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  puVar1 = (undefined8 *)(param_1 + 0x1f8);
  FUN_14702dc6a(puVar1,param_3);
  lVar2 = param_1 + 0x208;
  FUN_14702dc6a(lVar2,param_3);
  lVar3 = param_1 + 0x1d8;
  FUN_14702dc6a(lVar3,param_3);
  lVar4 = param_1 + 0x1e8;
  FUN_14702dc6a(lVar4,param_3);
  iVar5 = *(int *)(param_1 + 0x200);
  *(uint *)(param_1 + 0x200) = iVar5 + param_3;
  if ((uint)(*(int *)(param_1 + 0x204) - iVar5) < param_3) {
    FUN_145ca0cd4(puVar1);
  }
  iVar5 = *(int *)(param_1 + 0x210);
  *(uint *)(param_1 + 0x210) = iVar5 + param_3;
  if ((uint)(*(int *)(param_1 + 0x214) - iVar5) < param_3) {
    FUN_145ca0cd4(lVar2);
  }
  iVar5 = *(int *)(param_1 + 0x1e0);
  *(uint *)(param_1 + 0x1e0) = iVar5 + param_3;
  if ((uint)(*(int *)(param_1 + 0x1e4) - iVar5) < param_3) {
    FUN_145ca0cd4(lVar3);
  }
  iVar5 = *(int *)(param_1 + 0x1f0);
  *(uint *)(param_1 + 0x1f0) = iVar5 + param_3;
  if ((uint)(*(int *)(param_1 + 500) - iVar5) < param_3) {
    FUN_145ca0cd4(lVar4);
  }
  if (param_4 == 2) {
    FUN_14702f70a(param_2,*puVar1,param_3);
    _Size = (longlong)(int)param_3 << 2;
  }
  else {
    if (param_4 != 1) {
      memset(local_228,0,(longlong)(int)param_3 << 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
    }
    _Size = (longlong)(int)param_3 << 2;
    memcpy((void *)*puVar1,param_2,_Size);
  }
  local_58 = *(undefined8 *)(param_1 + 0x1f8);
  local_50 = *(undefined4 *)(param_1 + 0x200);
  FUN_142af1db6(&local_58,(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 4)) / (float)param_4);
  FUN_1470352ac(*(undefined8 *)(param_1 + 0x38),puVar1,lVar2);
  FUN_14702e71c(*(undefined8 *)(param_1 + 0x40),lVar2,puVar1);
  FUN_14703781e(*(undefined8 *)(param_1 + 0x48),puVar1,lVar2);
  FUN_14703781e(*(undefined8 *)(param_1 + 0x50),lVar2,puVar1);
  FUN_14703781e(*(undefined8 *)(param_1 + 0x58),puVar1,lVar2);
  FUN_14703781e(*(undefined8 *)(param_1 + 0x60),lVar2,puVar1);
  FUN_1470353dc(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0xa0),param_3,lVar2);
  FUN_1470353dc(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xa0),param_3,param_1 + 0x218);
  FUN_1470378da(param_1,param_3,lVar3,lVar4);
  local_238 = param_1 + 0xd8;
  FUN_147036342(*(undefined8 *)(param_1 + 200),puVar1,param_1 + 0x218,lVar3);
  local_238 = param_1 + 0x158;
  FUN_147036342(*(undefined8 *)(param_1 + 0xd0),puVar1,lVar2,lVar4);
  pvVar10 = local_228;
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  local_208 = *(undefined8 *)(param_1 + 0xf8);
  local_218 = *(undefined8 *)(param_1 + 0x108);
  local_200 = *(undefined8 *)(param_1 + 0x118);
  local_210 = *(undefined8 *)(param_1 + 0x128);
  local_1f8 = *(undefined8 *)(param_1 + 0x138);
  local_1f0 = *(undefined8 *)(param_1 + 0x168);
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  local_1e8 = *(undefined8 *)(param_1 + 0x188);
  uVar8 = *(undefined8 *)(param_1 + 0x198);
  local_1e0 = *(undefined8 *)(param_1 + 0x1a8);
  uVar9 = *(undefined8 *)(param_1 + 0x1b8);
  memcpy(local_228,*(void **)(param_1 + 0x158),_Size);
  local_68 = pvVar10;
  local_78 = uVar7;
  local_70 = param_3;
  local_60 = param_3;
  FUN_142af2786();
  local_98 = pvVar10;
  local_90 = param_3;
  local_88 = uVar8;
  local_80 = param_3;
  FUN_142af4161();
  local_a8 = pvVar10;
  local_b8 = uVar9;
  local_b0 = param_3;
  local_a0 = param_3;
  FUN_142af2786();
  local_d8 = pvVar10;
  local_d0 = param_3;
  local_c8 = uVar6;
  local_c0 = param_3;
  FUN_142af4161();
  local_e8 = local_218;
  local_f8 = pvVar10;
  local_f0 = param_3;
  local_e0 = param_3;
  FUN_142af4161();
  local_108 = local_210;
  local_118 = pvVar10;
  local_110 = param_3;
  local_100 = param_3;
  FUN_142af4161();
  pvVar10 = local_220;
  memcpy(local_220,*(void **)(param_1 + 0xd8),_Size);
  local_128 = pvVar10;
  local_138 = local_208;
  local_130 = param_3;
  local_120 = param_3;
  FUN_142af2786();
  local_148 = local_200;
  local_158 = pvVar10;
  local_150 = param_3;
  local_140 = param_3;
  FUN_142af4161();
  local_168 = pvVar10;
  local_178 = local_1f8;
  local_170 = param_3;
  local_160 = param_3;
  FUN_142af2786();
  local_188 = local_1f0;
  local_198 = pvVar10;
  local_190 = param_3;
  local_180 = param_3;
  FUN_142af4161();
  local_1a8 = local_1e8;
  local_1b8 = pvVar10;
  local_1b0 = param_3;
  local_1a0 = param_3;
  FUN_142af4161();
  local_1c8 = local_1e0;
  local_1d8 = pvVar10;
  local_1d0 = param_3;
  local_1c0 = param_3;
  FUN_142af4161();
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147037772 FUN_147037772 body=172 status=ok
// SIG undefined FUN_147037772(void)

void FUN_147037772(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  FUN_14702dc10(*(undefined8 *)(puVar1 + 6));
  FUN_14702d93a(*(undefined8 *)(puVar1 + 6),*puVar1);
  FUN_14702e714(*(undefined8 *)(param_1 + 0x40));
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_14702dc10(*(undefined8 *)(lVar2 + 0x20));
  FUN_14702d93a(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 4));
  lVar2 = *(longlong *)(param_1 + 0x50);
  FUN_14702dc10(*(undefined8 *)(lVar2 + 0x20));
  FUN_14702d93a(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 4));
  lVar2 = *(longlong *)(param_1 + 0x58);
  FUN_14702dc10(*(undefined8 *)(lVar2 + 0x20));
  FUN_14702d93a(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 4));
  lVar2 = *(longlong *)(param_1 + 0x60);
  FUN_14702dc10(*(undefined8 *)(lVar2 + 0x20));
  FUN_14702d93a(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 4));
  FUN_1470366f8(*(undefined8 *)(param_1 + 200));
  FUN_1470366f8(*(undefined8 *)(param_1 + 0xd0));
  return;
}



// FUNCTION 14703781e FUN_14703781e body=188 status=ok
// SIG undefined FUN_14703781e(void)

void FUN_14703781e(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = *param_2;
  uVar6 = *(uint *)(param_2 + 1);
  uVar2 = *(undefined8 *)(param_1 + 4);
  FUN_14702dc6a(param_3,uVar6);
  lVar3 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar3 + uVar6;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar3) < uVar6) {
    FUN_145ca0cd4(param_3);
  }
  else if (uVar6 == 0) {
    return;
  }
  lVar3 = *param_3;
  iVar7 = 0;
  do {
    uVar5 = param_1[2];
    if ((int)uVar6 <= (int)param_1[2]) {
      uVar5 = uVar6;
    }
    uVar4 = FUN_14702db1e(*(undefined8 *)(param_1 + 8),uVar5,0);
    thunk_FUN_1421c3a50(lVar1 + (longlong)iVar7 * 4,uVar4,uVar5,lVar3 + (longlong)iVar7 * 4,uVar2,
                        *param_1);
    FUN_14702dace(*(undefined8 *)(param_1 + 8),uVar5);
    FUN_14702d9f4(*(undefined8 *)(param_1 + 8),uVar2);
    iVar7 = iVar7 + uVar5;
    uVar6 = uVar6 - uVar5;
  } while (uVar6 != 0);
  return;
}



// FUNCTION 1470378da FUN_1470378da body=616 status=ok
// SIG undefined FUN_1470378da(void)

void FUN_1470378da(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  
  FUN_14702dc6a(param_3);
  FUN_14702dc6a(param_4,param_2);
  lVar4 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar4 + param_2;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar4) < param_2) {
    FUN_145ca0cd4(param_3);
  }
  lVar4 = param_4[1];
  *(uint *)(param_4 + 1) = (int)lVar4 + param_2;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - (int)lVar4) < param_2) {
    FUN_145ca0cd4(param_4);
  }
  if (0 < (int)param_2) {
    lVar4 = *param_3;
    lVar3 = *param_4;
    uVar5 = 0;
    do {
      fVar1 = *(float *)(param_1 + 8);
      fVar2 = *(float *)(param_1 + 0xc);
      fVar6 = fVar1 + *(float *)(param_1 + 0x10);
      *(uint *)(param_1 + 8) =
           ~-(uint)(3.1415927 < fVar6) & (uint)fVar6 |
           (uint)(fVar6 + -6.2831855) & -(uint)(3.1415927 < fVar6);
      fVar6 = fVar2 + *(float *)(param_1 + 0x10);
      *(uint *)(param_1 + 0xc) =
           ~-(uint)(3.1415927 < fVar6) & (uint)fVar6 |
           (uint)(fVar6 + -6.2831855) & -(uint)(3.1415927 < fVar6);
      *(float *)(lVar4 + uVar5 * 4) =
           (float)*(int *)(param_1 + 0x6c) *
           ((1.0 - ABS(fVar1) / 3.1415927) * ((fVar1 * 4.0) / 3.1415927) * 0.5 + 0.5) +
           (float)*(int *)(param_1 + 0x68);
      *(float *)(lVar3 + uVar5 * 4) =
           (float)*(int *)(param_1 + 0x9c) *
           ((1.0 - ABS(fVar2) / 3.1415927) * ((fVar2 * 4.0) / 3.1415927) * 0.5 + 0.5) +
           (float)*(int *)(param_1 + 0x98);
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return;
}



// FUNCTION 147037b42 FUN_147037b42 body=339 status=ok
// SIG undefined FUN_147037b42(void)

int * FUN_147037b42(int *param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_2 < 1) {
    *param_1 = 1;
    param_2 = 1;
  }
  if ((param_3 & 3) != 0) {
    param_3 = (-param_3 | 0xfffffffc) + param_3;
    param_1[1] = param_3;
  }
  plVar1 = (longlong *)(param_1 + 2);
  if ((int)param_3 < 1) {
    param_1[1] = 4;
    param_3 = 4;
  }
  lVar4 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(lVar4,param_3 + param_2 * 2 + 2,param_2 + param_3 + 1,0x10,0x10);
  lVar5 = *plVar1;
  *plVar1 = lVar4;
  if (lVar5 != 0) {
    FUN_14702d90a(lVar5);
    thunk_FUN_1400020a8(lVar5,0x48);
    lVar4 = *plVar1;
  }
  FUN_14702d93a(lVar4,*param_1 + 1);
  FUN_14702dc94(param_1 + 4,param_1[1]);
  uVar3 = param_1[1];
  iVar2 = param_1[6];
  param_1[6] = iVar2 + uVar3;
  if ((uint)(param_1[7] - iVar2) < uVar3) {
    FUN_147034354(param_1 + 4);
    uVar3 = param_1[1];
  }
  if (0 < (int)uVar3) {
    lVar5 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 4) + lVar5 * 4) = *param_1 + (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_1[1]);
  }
  uVar6 = FUN_14001cc68(0x10,0x10);
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar6 = FUN_14001cc68(0x10,0x10);
  *(undefined8 *)(param_1 + 10) = uVar6;
  return param_1;
}



// FUNCTION 147037c96 FUN_147037c96 body=82 status=ok
// SIG undefined FUN_147037c96(void)

void FUN_147037c96(longlong param_1)

{
  longlong lVar1;
  
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_14702d90a(lVar1);
    thunk_FUN_1400020a8(lVar1,0x48);
    return;
  }
  return;
}



// FUNCTION 147037ce8 FUN_147037ce8 body=35 status=ok
// SIG undefined FUN_147037ce8(void)

void FUN_147037ce8(int *param_1)

{
  FUN_14702dc10(*(undefined8 *)(param_1 + 2));
  FUN_14702d93a(*(undefined8 *)(param_1 + 2),*param_1 + 1);
  return;
}



// FUNCTION 147037d0c FUN_147037d0c body=194 status=ok
// SIG undefined FUN_147037d0c(void)

void FUN_147037d0c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar7 = (ulonglong)uVar1;
  FUN_14702dc6a(param_4,uVar7);
  lVar4 = param_4[1];
  *(uint *)(param_4 + 1) = (int)lVar4 + uVar1;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - (int)lVar4) < uVar1) {
    FUN_145ca0cd4(param_4);
  }
  if (uVar1 == *(uint *)(param_3 + 1)) {
    if (0 < (int)uVar1) {
      lVar4 = *param_4;
      lVar2 = *param_2;
      lVar3 = *param_3;
      iVar8 = 0;
      do {
        iVar6 = (int)uVar7;
        iVar5 = *(int *)(param_1 + 4);
        if (iVar6 < *(int *)(param_1 + 4)) {
          iVar5 = iVar6;
        }
        lVar9 = (longlong)iVar8;
        FUN_147037dce(param_1,lVar2 + lVar9 * 4,lVar3 + lVar9 * 4,iVar5,lVar4 + lVar9 * 4);
        iVar8 = iVar8 + iVar5;
        uVar7 = (ulonglong)(uint)(iVar6 - iVar5);
      } while (iVar6 - iVar5 != 0 && iVar5 <= iVar6);
    }
  }
  else if (0 < (int)uVar1) {
    memset((void *)*param_4,0,uVar7 << 2);
    return;
  }
  return;
}



// FUNCTION 147037dce FUN_147037dce body=130 status=ok
// SIG undefined FUN_147037dce(void)

void FUN_147037dce(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  
  FUN_14702d9f4(*(undefined8 *)(param_1 + 2),param_2,param_4);
  uVar1 = FUN_14702db1e(*(undefined8 *)(param_1 + 2),param_4 + *param_1 + 1,0);
  FUN_142af4241(param_2,param_3,uVar1,*(undefined8 *)(param_1 + 4),param_1[8],param_1[10],param_4,
                param_5,(float)*param_1);
  FUN_14702dace(*(undefined8 *)(param_1 + 2),param_4);
  return;
}



// FUNCTION 147037e50 FUN_147037e50 body=223 status=ok
// SIG undefined FUN_147037e50(void)

undefined4 * FUN_147037e50(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if ((int)param_3 < (int)param_4) {
    param_4 = param_3 + 3;
    if (-1 < (int)param_3) {
      param_4 = param_3;
    }
    param_4 = param_4 & 0xfffffffc;
    param_1[2] = param_4;
  }
  uVar3 = FUN_14001cc68(0x48,0x10);
  FUN_142af1c00(uVar3,param_3 + param_4 * 2,param_4,0x10,0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (lVar2 != 0) {
    FUN_14702d90a(lVar2);
    thunk_FUN_1400020a8(lVar2,0x48);
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
  FUN_14702d93a(uVar3,param_1[1]);
  FUN_14702dc6a(param_1 + 4,param_1[2]);
  iVar1 = param_1[6];
  param_1[6] = iVar1 + param_1[2];
  if ((uint)(param_1[7] - iVar1) < (uint)param_1[2]) {
    FUN_145ca0cd4(param_1 + 4);
  }
  return param_1;
}



// FUNCTION 147037f30 FUN_147037f30 body=67 status=ok
// SIG undefined FUN_147037f30(void)

void FUN_147037f30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_14702d90a(lVar1);
    thunk_FUN_1400020a8(lVar1,0x48);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147037f74 FUN_147037f74 body=127 status=ok
// SIG undefined FUN_147037f74(void)

undefined8 * FUN_147037f74(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_14a1368b0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_147034b3a(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14c99e400 + 1;
  DAT_14c99e400 = DAT_14c99e400 + 1;
  *(int *)(param_1 + 8) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 147037ff4 FUN_147037ff4 body=74 status=ok
// SIG undefined FUN_147037ff4(void)

void FUN_147037ff4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a1368b0;
  LOCK();
  lVar1 = param_1[9];
  param_1[9] = 0;
  UNLOCK();
  if (lVar1 != 0) {
    FUN_14018802a();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14703803e FUN_14703803e body=229 status=ok
// SIG undefined FUN_14703803e(void)

undefined4 FUN_14703803e(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x44) != 0) {
    if (param_4 != '\0') {
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar1 = *(int *)(param_1 + 0x20);
      uVar4 = iVar1 - iVar2;
      if (iVar1 < iVar2) {
        uVar4 = (iVar1 - iVar2) + *(int *)(param_1 + 0x18);
      }
      if (param_3 < uVar4) {
        iVar2 = *(int *)(param_1 + 0x20) - param_3;
        if (iVar2 < 0) {
          iVar2 = iVar2 + *(int *)(param_1 + 0x18);
        }
        LOCK();
        *(int *)(param_1 + 0x1c) = iVar2;
        UNLOCK();
      }
    }
    uVar3 = FUN_14703303a(param_1 + 8,param_2);
    if (ABS(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x3c)) <= 1e-08) {
      local_30 = param_2;
      local_28 = uVar3;
      FUN_142af1db6();
    }
    else {
      local_40 = param_2;
      local_38 = uVar3;
      FUN_142af1d12(&local_40,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147038124 FUN_147038124 body=23 status=ok
// SIG undefined FUN_147038124(void)

int FUN_147038124(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar3 = (iVar2 - iVar1) + *(int *)(param_1 + 0x18);
  }
  return iVar3;
}



// FUNCTION 14703813c FUN_14703813c body=200 status=ok
// SIG undefined FUN_14703813c(void)

uint FUN_14703813c(longlong param_1,void *param_2,uint param_3)

{
  void *_Dst;
  size_t _Size;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst_00;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  size_t _Size_00;
  
  _Dst_00 = *(void **)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar5 = (*(int *)(param_1 + 0x1c) + uVar3 + ~*(uint *)(param_1 + 0x20)) % uVar3;
  if ((int)param_3 < (int)uVar5) {
    uVar5 = param_3;
  }
  uVar6 = uVar3 - uVar2;
  if ((int)uVar5 < (int)(uVar3 - uVar2)) {
    uVar6 = uVar5;
  }
  _Size = (longlong)(int)uVar6 * 4;
  _Size_00 = (longlong)(int)(uVar5 - uVar6) << 2;
  _Dst = (void *)((longlong)_Dst_00 + (ulonglong)uVar2 * 4);
  if (param_2 == (void *)0x0) {
    memset(_Dst,0,_Size);
    memset(_Dst_00,0,_Size_00);
  }
  else {
    memcpy(_Dst,param_2,_Size);
    memcpy(_Dst_00,(void *)((longlong)param_2 + (longlong)(int)uVar6 * 4),_Size_00);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) =
       (int)((ulonglong)(uVar2 + uVar5) % (ulonglong)*(uint *)(param_1 + 0x18));
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar1);
  }
  return uVar5;
}



// FUNCTION 147038204 FUN_147038204 body=398 status=ok
// SIG undefined FUN_147038204(void)

uint FUN_147038204(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x44) == 0) goto LAB_14703822c;
  FUN_14702fd8a(param_1 + 0x28,param_3,0);
  if (param_4 == '\0') {
LAB_14703837c:
    uVar3 = FUN_14703303a(param_1 + 8,*(undefined8 *)(param_1 + 0x28),param_3);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20);
    uVar3 = iVar1 - iVar2;
    if (iVar1 < iVar2) {
      uVar3 = (iVar1 - iVar2) + *(int *)(param_1 + 0x18);
    }
    if (uVar3 <= param_3) goto LAB_14703837c;
    iVar2 = *(int *)(param_1 + 0x20) - param_3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + *(int *)(param_1 + 0x18);
    }
    LOCK();
    *(int *)(param_1 + 0x1c) = iVar2;
    UNLOCK();
    _Src = *(void **)(param_1 + 8);
    _Dst = *(void **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20);
    uVar3 = iVar1 - iVar2;
    if (iVar1 < iVar2) {
      iVar4 = *(int *)(param_1 + 0x18);
      uVar3 = (iVar1 - iVar2) + iVar4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    if ((int)param_3 < (int)uVar3) {
      uVar3 = param_3;
    }
    uVar5 = iVar4 - *(uint *)(param_1 + 0x1c);
    if ((int)uVar3 < (int)uVar5) {
      uVar5 = uVar3;
    }
    memcpy(_Dst,(void *)((longlong)_Src + (ulonglong)*(uint *)(param_1 + 0x1c) * 4),
           (longlong)(int)uVar5 * 4);
    memcpy((void *)((longlong)_Dst + (longlong)(int)uVar5 * 4),_Src,
           (longlong)(int)(uVar3 - uVar5) << 2);
  }
  if (ABS(*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x3c)) <= 1e-08) {
    local_60 = *(undefined8 *)(param_1 + 0x28);
    local_58 = uVar3;
    local_50 = param_2;
    local_48 = uVar3;
    FUN_142af2795();
  }
  else {
    local_80 = *(undefined8 *)(param_1 + 0x28);
    local_78 = uVar3;
    local_70 = param_2;
    local_68 = uVar3;
    FUN_142af41c4(&local_80,&local_70,*(undefined4 *)(param_1 + 0x3c),
                  *(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
  }
LAB_14703822c:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147038394 FUN_147038394 body=46 status=ok
// SIG undefined FUN_147038394(void)

void FUN_147038394(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = *param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x44) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470383c2 FUN_1470383c2 body=46 status=ok
// SIG undefined FUN_1470383c2(void)

void FUN_1470383c2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = *param_1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x44) = *(int *)(lVar2 + 0x44) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470383f0 FUN_1470383f0 body=37 status=ok
// SIG undefined FUN_1470383f0(void)

void FUN_1470383f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 147038416 FUN_147038416 body=135 status=ok
// SIG undefined FUN_147038416(void)

undefined8 * FUN_147038416(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 2));
  *(undefined4 *)(param_2 + 2) = 0;
  local_18 = local_38;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  *(undefined4 *)param_1 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
  param_1[2] = local_38;
  local_48 = uVar2;
  uStack_40 = uVar3;
  local_38 = uVar1;
  FUN_145be9032();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703849e FUN_14703849e body=137 status=ok
// SIG undefined FUN_14703849e(void)

int FUN_14703849e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 != 0) {
    iVar4 = FUN_14703813c();
    iVar5 = 1;
    if (1 < DAT_14c75f588) {
      iVar5 = DAT_14c75f588;
    }
    iVar5 = ((int)param_1[2] + 1) % iVar5;
    *(int *)(param_1 + 2) = iVar5;
    if (iVar4 != 0 && iVar5 != 0) {
      return iVar4;
    }
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      return iVar4;
    }
    if ((int)plVar3[1] != 1) {
      return iVar4;
    }
    *param_1 = 0;
    param_1[1] = 0;
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
  return -1;
}



// FUNCTION 147038528 FUN_147038528 body=33 status=ok
// SIG undefined FUN_147038528(void)

undefined4 FUN_147038528(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else if (param_1[1] == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(param_1[1] + 8);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 1);
  }
  return uVar2;
}



// FUNCTION 14703854a FUN_14703854a body=274 status=ok
// SIG undefined FUN_14703854a(void)

longlong * FUN_14703854a(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_3c = param_4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  plVar5 = (longlong *)FUN_14703e998(&local_40,&local_3c);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14703ea78(param_1,iVar3);
  }
  lVar7 = (longlong)iVar3 * 0x10;
  lVar4 = *param_1;
  *(longlong **)(lVar4 + lVar7) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
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
  lVar4 = *param_1;
  lVar6 = *(longlong *)(lVar4 + lVar7);
  *param_2 = lVar6;
  lVar4 = *(longlong *)(lVar4 + 8 + lVar7);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar6 = *param_2;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703865e FUN_14703865e body=122 status=ok
// SIG undefined FUN_14703865e(void)

void FUN_14703865e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14703ea78(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    return;
  }
  return;
}



// FUNCTION 1470386d8 FUN_1470386d8 body=167 status=ok
// SIG undefined FUN_1470386d8(void)

int FUN_1470386d8(longlong param_1,void *param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_147038780(param_1);
  FUN_1470388d6(param_1);
  iVar4 = 0;
  memset(param_2,0,(longlong)param_3 << 2);
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar5 = 0;
    iVar4 = 0;
    do {
      iVar3 = FUN_147038204(*(undefined8 *)(lVar2 + lVar5),param_2,param_3,param_4);
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return iVar4;
}



// FUNCTION 147038780 FUN_147038780 body=342 status=ok
// SIG undefined FUN_147038780(void)

void FUN_147038780(undefined8 *param_1)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  iVar3 = *(int *)(param_1 + 0xf);
  if ((longlong)iVar3 != 0) {
    lVar7 = param_1[0xe];
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar7 + lVar9);
      if (*(int *)(lVar5 + 0x44) == 0) {
        iVar4 = *(int *)(param_1 + 8);
        uVar6 = iVar4 + 1;
        *(uint *)(param_1 + 8) = uVar6;
        if (*(uint *)((longlong)param_1 + 0x44) < uVar6) {
          FUN_1446f48e2(param_1 + 7);
        }
        *(undefined4 *)(param_1[7] + (longlong)iVar4 * 4) = *(undefined4 *)(lVar5 + 0x40);
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  if ((longlong)*(int *)(param_1 + 8) != 0) {
    puVar1 = param_1 + 0xe;
    piVar10 = (int *)param_1[7];
    piVar2 = piVar10 + *(int *)(param_1 + 8);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
    do {
      EnterCriticalSection(lpCriticalSection);
      if (0 < (longlong)*(int *)(param_1 + 1)) {
        plVar8 = (longlong *)*param_1;
        lVar7 = 0;
        do {
          if (*piVar10 == *(int *)(*plVar8 + 0x40)) {
            FUN_14703eb5e(param_1);
            FUN_14703ebe6(param_1);
            LeaveCriticalSection(lpCriticalSection);
            goto LAB_14703886c;
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 2;
        } while (*(int *)(param_1 + 1) != lVar7);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (0 < (longlong)*(int *)(param_1 + 0xf)) {
        plVar8 = (longlong *)*puVar1;
        lVar7 = 0;
        do {
          if (*piVar10 == *(int *)(*plVar8 + 0x40)) {
            FUN_14703eb5e(puVar1);
            FUN_14703ebe6(puVar1);
            break;
          }
          lVar7 = lVar7 + 1;
          plVar8 = plVar8 + 2;
        } while (*(int *)(param_1 + 0xf) != lVar7);
      }
LAB_14703886c:
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) < 0) {
    FUN_14481578e(param_1 + 7,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  return;
}



// FUNCTION 1470388d6 FUN_1470388d6 body=194 status=ok
// SIG undefined FUN_1470388d6(void)

void FUN_1470388d6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  puVar5 = (undefined8 *)*param_1;
  uVar4 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    puVar6 = puVar5 + (longlong)(int)param_1[1] * 2;
    do {
      iVar1 = (int)param_1[0xf];
      *(uint *)(param_1 + 0xf) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x7c) < iVar1 + 1U) {
        FUN_14703ea78(param_1 + 0xe,iVar1);
      }
      lVar2 = param_1[0xe];
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar5;
      lVar3 = puVar5[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
    uVar4 = (undefined4)param_1[1];
    puVar5 = (undefined8 *)*param_1;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1459d2db1(puVar5,uVar4);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14703eafe(param_1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 147038998 FUN_147038998 body=139 status=ok
// SIG undefined FUN_147038998(void)

uint FUN_147038998(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  FUN_147038780(param_1);
  FUN_1470388d6(param_1);
  if ((longlong)*(int *)(param_1 + 0x78) == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + lVar4);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x1c);
        iVar2 = *(int *)(lVar3 + 0x20);
        uVar6 = iVar2 - iVar1;
        if (iVar2 < iVar1) {
          uVar6 = (iVar2 - iVar1) + *(int *)(lVar3 + 0x18);
        }
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x78) * 0x10 != lVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar5;
}



// FUNCTION 147038a24 FUN_147038a24 body=88 status=ok
// SIG undefined FUN_147038a24(void)

void FUN_147038a24(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  iVar1 = *(int *)(param_1 + 0x7c);
  FUN_1459d2db1(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_14703eafe(param_1 + 0x70,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 147038a7c FUN_147038a7c body=292 status=ok
// SIG undefined FUN_147038a7c(void)

longlong * FUN_147038a7c(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = CONCAT44(local_48._4_4_,param_3 * 2);
  local_2c = param_4;
  plVar5 = (longlong *)FUN_14703ec81();
  *param_2 = (longlong)(plVar5 + 2);
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  local_48 = *param_2;
  lStack_40 = param_2[1];
  if (lStack_40 != 0) {
    LOCK();
    *(int *)(lStack_40 + 8) = *(int *)(lStack_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 0x44) = *(int *)(local_48 + 0x44) + 1;
    UNLOCK();
  }
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14703ed36(param_1,iVar3);
  }
  lVar4 = *param_1;
  *(longlong *)(lVar4 + lVar6 * 0x18) = local_48;
  *(longlong *)(lVar4 + 8 + lVar6 * 0x18) = lStack_40;
  local_48 = 0;
  lStack_40 = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar6 * 0x18) = local_38;
  local_38 = 0;
  FUN_145be9032();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147038ba2 FUN_147038ba2 body=205 status=ok
// SIG undefined FUN_147038ba2(void)

void FUN_147038ba2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  local_38 = *param_2;
  lStack_30 = param_2[1];
  if (lStack_30 != 0) {
    LOCK();
    *(int *)(lStack_30 + 8) = *(int *)(lStack_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = 0;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0x44) = *(int *)(local_38 + 0x44) + 1;
    UNLOCK();
  }
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14703ed36(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(longlong *)(lVar2 + lVar3 * 0x18) = local_38;
  *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = lStack_30;
  local_38 = 0;
  lStack_30 = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x18) = local_28;
  local_28 = 0;
  FUN_145be9032();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147038c70 FUN_147038c70 body=49 status=ok
// SIG undefined FUN_147038c70(void)

undefined4 FUN_147038c70(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  FUN_147038ca2(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return uVar1;
}



// FUNCTION 147038ca2 FUN_147038ca2 body=47 status=ok
// SIG undefined FUN_147038ca2(void)

void FUN_147038ca2(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_147038d6e(param_1 + 0x38,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 147038cd2 FUN_147038cd2 body=156 status=ok
// SIG undefined FUN_147038cd2(void)

uint FUN_147038cd2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  FUN_147038ca2(param_1);
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar4 = 0xffffffff;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      uVar3 = (*(int *)(lVar2 + 0x1c) + *(uint *)(lVar2 + 0x18) + ~*(uint *)(lVar2 + 0x20)) %
              *(uint *)(lVar2 + 0x18);
      if (((uVar3 != 0) ||
          ((*(longlong *)(lVar1 + lVar5) != 0 &&
           ((lVar2 = *(longlong *)(lVar1 + 8 + lVar5), lVar2 == 0 || (*(int *)(lVar2 + 8) != 1))))))
         && (uVar3 <= uVar4)) {
        uVar4 = uVar3;
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x40) * 0x18 != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return uVar4;
}



// FUNCTION 147038d6e FUN_147038d6e body=101 status=ok
// SIG undefined FUN_147038d6e(void)

void FUN_147038d6e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14703ed36(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x18 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x18
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 147038dd4 FUN_147038dd4 body=175 status=ok
// SIG undefined FUN_147038dd4(void)

int FUN_147038dd4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  FUN_147038ca2(param_1);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x40);
  if (uVar5 == 0) {
    iVar3 = -1;
  }
  else if ((int)*(uint *)(param_1 + 0x40) < 1) {
    iVar3 = 0x7fffffff;
  }
  else {
    lVar4 = uVar5 * 0x18;
    iVar3 = 0x7fffffff;
    do {
      lVar4 = lVar4 + -0x18;
      iVar2 = FUN_14703849e(*(longlong *)(param_1 + 0x38) + lVar4,param_2,param_3);
      if (iVar2 == -1) {
        FUN_14703edca((longlong *)(param_1 + 0x38),(int)uVar5 + -1);
      }
      else if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return iVar3;
}



// FUNCTION 147038e84 FUN_147038e84 body=29 status=ok
// SIG undefined FUN_147038e84(void)

undefined8 FUN_147038e84(longlong param_1,undefined8 param_2)

{
  FUN_147038a7c(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 147038ea2 FUN_147038ea2 body=175 status=ok
// SIG undefined FUN_147038ea2(void)

void FUN_147038ea2(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_147038998();
  uVar2 = FUN_147038cd2(param_1 + 0xa8);
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  if ((int)uVar1 < 1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x124);
  iVar4 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    FUN_1470345fa(param_1 + 0x118,0);
    iVar4 = *(int *)(param_1 + 0x120);
    iVar3 = *(int *)(param_1 + 0x124);
  }
  *(uint *)(param_1 + 0x120) = iVar4 + uVar1;
  if ((uint)(iVar3 - iVar4) < uVar1) {
    FUN_145ca0cd4(param_1 + 0x118);
  }
  FUN_1470386d8(param_1,*(undefined8 *)(param_1 + 0x118),uVar1,0);
  FUN_147038dd4(param_1 + 0xa8,*(undefined8 *)(param_1 + 0x118),uVar1);
  return;
}



// FUNCTION 147038f52 FUN_147038f52 body=76 status=ok
// SIG undefined FUN_147038f52(void)

DWORD * FUN_147038f52(DWORD *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  *param_1 = local_20.s.LowPart;
  param_1[1] = local_20.s.LowPart;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147038fa0 FUN_147038fa0 body=46 status=ok
// SIG undefined FUN_147038fa0(void)

undefined8 * FUN_147038fa0(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f0000003f4ccccd;
  param_1[2] = 0x3f333333;
  param_1[3] = 0x3f00000000000000;
  param_1[4] = 0x3f0000003f000000;
  param_1[5] = 0x3f0000003f000000;
  *(undefined2 *)(param_1 + 6) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 147038fce FUN_147038fce body=156 status=ok
// SIG undefined FUN_147038fce(void)

undefined4 *
FUN_147038fce(undefined4 *param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  undefined8 in_RDX;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = 0x3f800000;
  *(undefined8 *)(param_1 + 3) = 0x3f0000003f4ccccd;
  *(undefined8 *)(param_1 + 5) = 0x3f333333;
  *(undefined8 *)(param_1 + 7) = 0x3f00000000000000;
  param_1[9] = 0x3f000000;
  param_1[10] = 0x3f000000;
  param_1[0xb] = 0x3f000000;
  param_1[0xc] = 0x3f000000;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x36) = 0;
  FUN_147031fc4(param_1 + 0xe,in_RDX,param_3,&DAT_14c99e364);
  FUN_147036898(param_1 + 200,param_2,param_3 & 0xffffffff,param_4 + 0x14);
  memset(param_1 + 0x152,0,0x90);
  FUN_14703906a(param_1,param_4);
  return param_1;
}



// FUNCTION 14703906a FUN_14703906a body=154 status=ok
// SIG undefined FUN_14703906a(void)

void FUN_14703906a(longlong param_1,undefined4 *param_2)

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
  
  if ((*(char *)(param_1 + 0x34) == '\x01') && (*(char *)(param_2 + 0xc) == '\0')) {
    FUN_147032c30(param_1 + 0x38);
  }
  if ((*(char *)(param_1 + 0x35) == '\x01') && (*(char *)((longlong)param_2 + 0x31) == '\0')) {
    FUN_147037772(param_1 + 800);
  }
  *(undefined4 *)(param_1 + 0x34) = param_2[0xc];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x24) = param_2[8];
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_1470328dc(param_1 + 0x38,param_1 + 4);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x24);
  FUN_147036da4(param_1 + 0x338);
  FUN_147036e38(param_1 + 800);
  return;
}



// FUNCTION 147039104 FUN_147039104 body=190 status=ok
// SIG undefined FUN_147039104(void)

void FUN_147039104(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_1400020a8();
  }
  FUN_147036f8c(param_1 + 800);
  FUN_1470327c8(param_1 + 0x38);
  return;
}



// FUNCTION 1470391c2 FUN_1470391c2 body=5 status=ok
// SIG undefined FUN_1470391c2(void)

longlong FUN_1470391c2(longlong param_1)

{
  return param_1 + 4;
}



// FUNCTION 1470391c8 FUN_1470391c8 body=1008 status=ok
// SIG undefined FUN_1470391c8(void)

void FUN_1470391c8(longlong param_1,undefined8 *param_2,int param_3,longlong param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar6 = (ulonglong)*(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x5c8);
    FUN_14702dc6a(puVar1);
    uVar7 = *(uint *)(param_2 + 1);
    iVar4 = *(int *)(param_1 + 0x5d0);
    *(uint *)(param_1 + 0x5d0) = iVar4 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x5d4) - iVar4) < uVar7) {
      FUN_145ca0cd4(puVar1);
    }
    memcpy((void *)*puVar1,(void *)*param_2,(longlong)*(int *)(param_2 + 1) << 2);
    iVar4 = *(int *)(param_2 + 1);
    uVar5 = (longlong)iVar4 / (longlong)param_3;
    uVar6 = (longlong)iVar4 % (longlong)param_3 & 0xffffffff;
    if (iVar4 != 0) {
      uVar6 = uVar5 & 0xffffffff;
      uVar7 = (uint)uVar5;
      if ((*(char *)(param_1 + 0x34) == '\0') && (*(char *)(param_1 + 0x35) == '\0')) {
        uVar7 = uVar7 * param_5;
        FUN_14702dc6a(param_4,uVar7);
        iVar4 = *(int *)(param_4 + 8);
        *(uint *)(param_4 + 8) = iVar4 + uVar7;
        if ((uint)(*(int *)(param_4 + 0xc) - iVar4) < uVar7) {
          FUN_145ca0cd4(param_4,iVar4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
      }
      lVar2 = param_1 + 0x588;
      FUN_14702dc6a(lVar2,uVar6);
      lVar3 = param_1 + 0x598;
      FUN_14702dc6a(lVar3,uVar6);
      iVar4 = *(int *)(param_1 + 0x590);
      *(uint *)(param_1 + 0x590) = iVar4 + uVar7;
      if ((uint)(*(int *)(param_1 + 0x594) - iVar4) < uVar7) {
        FUN_145ca0cd4(lVar2);
      }
      iVar4 = *(int *)(param_1 + 0x5a0);
      *(uint *)(param_1 + 0x5a0) = iVar4 + uVar7;
      if ((uint)(*(int *)(param_1 + 0x5a4) - iVar4) < uVar7) {
        FUN_145ca0cd4(lVar3);
      }
      if (*(char *)(param_1 + 0x34) == '\x01') {
        if (*(char *)(param_1 + 0x35) == '\0') {
          local_c8 = lVar3;
          FUN_147032902(param_1 + 0x38,puVar1,param_3,lVar2);
        }
        else {
          local_b0 = param_1 + 0x548;
          FUN_14702dc6a(local_b0,uVar5 & 0xffffffff);
          local_b8 = param_1 + 0x558;
          FUN_14702dc6a(local_b8,uVar6);
          local_c0 = param_1 + 0x568;
          FUN_14702dc6a(local_c0,uVar5 & 0xffffffff);
          lVar3 = param_1 + 0x578;
          FUN_14702dc6a(lVar3,uVar5 & 0xffffffff);
          iVar4 = *(int *)(param_1 + 0x550);
          *(uint *)(param_1 + 0x550) = iVar4 + uVar7;
          if ((uint)(*(int *)(param_1 + 0x554) - iVar4) < uVar7) {
            FUN_145ca0cd4(local_b0);
          }
          iVar4 = *(int *)(param_1 + 0x560);
          *(uint *)(param_1 + 0x560) = iVar4 + uVar7;
          if ((uint)(*(int *)(param_1 + 0x564) - iVar4) < uVar7) {
            FUN_145ca0cd4(local_b8);
          }
          iVar4 = *(int *)(param_1 + 0x570);
          *(uint *)(param_1 + 0x570) = iVar4 + uVar7;
          if ((uint)(*(int *)(param_1 + 0x574) - iVar4) < uVar7) {
            FUN_145ca0cd4(local_c0);
          }
          iVar4 = *(int *)(param_1 + 0x580);
          *(uint *)(param_1 + 0x580) = iVar4 + uVar7;
          if ((uint)(*(int *)(param_1 + 0x584) - iVar4) < uVar7) {
            FUN_145ca0cd4(lVar3);
          }
          local_c8 = lVar3;
          FUN_147032902(param_1 + 0x38,puVar1,param_3,local_c0);
          local_c8 = local_b8;
          FUN_147037116(param_1 + 800,puVar1,param_3,local_b0);
          local_58 = *(undefined8 *)(param_1 + 0x588);
          local_50 = *(undefined4 *)(param_1 + 0x590);
          local_68 = *(undefined8 *)(param_1 + 0x548);
          local_60 = *(undefined4 *)(param_1 + 0x550);
          local_78 = *(undefined8 *)(param_1 + 0x568);
          local_70 = *(undefined4 *)(param_1 + 0x570);
          FUN_142af2843();
          local_88 = *(undefined8 *)(param_1 + 0x598);
          local_80 = *(undefined4 *)(param_1 + 0x5a0);
          local_98 = *(undefined8 *)(param_1 + 0x558);
          local_90 = *(undefined4 *)(param_1 + 0x560);
          local_a8 = *(undefined8 *)(param_1 + 0x578);
          local_a0 = *(undefined4 *)(param_1 + 0x580);
          FUN_142af2843();
        }
      }
      else if (*(char *)(param_1 + 0x35) != '\0') {
        local_c8 = lVar3;
        FUN_147037116(param_1 + 800,puVar1,param_3,lVar2);
      }
      FUN_1470395f6(param_1,lVar2,param_4,param_5);
      goto LAB_147039212;
    }
  }
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8,uVar6);
  }
LAB_147039212:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470395f6 FUN_1470395f6 body=650 status=ok
// SIG undefined FUN_1470395f6(void)

void FUN_1470395f6(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)(param_2 + 8);
  uVar7 = (ulonglong)uVar1;
  uVar10 = uVar1 * param_4;
  FUN_14702dc6a(param_3,uVar10);
  lVar5 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar5 + uVar10;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar5) < uVar10) {
    FUN_145ca0cd4(param_3);
  }
  memset((void *)*param_3,0,(longlong)(int)uVar10 << 2);
  if (param_4 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  if (((int)param_4 < 5) || (*(char *)(param_1 + 0x36) == '\0')) {
    if (0 < (int)uVar1) {
      lVar5 = *(longlong *)(param_1 + 0x588);
      lVar3 = *(longlong *)(param_1 + 0x598);
      puVar6 = (undefined4 *)(*param_3 + 4);
      uVar9 = 0;
      do {
        puVar6[-1] = *(undefined4 *)(lVar5 + uVar9 * 4);
        *puVar6 = *(undefined4 *)(lVar3 + uVar9 * 4);
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + (int)param_4;
      } while (uVar7 != uVar9);
    }
  }
  else {
    FUN_14702dc6a(param_1 + 0x5a8,uVar1);
    FUN_14702dc6a(param_1 + 0x5b8,uVar7);
    iVar2 = *(int *)(param_1 + 0x5b0);
    *(uint *)(param_1 + 0x5b0) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x5b4) - iVar2) < uVar1) {
      FUN_145ca0cd4(param_1 + 0x5a8);
    }
    iVar2 = *(int *)(param_1 + 0x5c0);
    *(uint *)(param_1 + 0x5c0) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x5c4) - iVar2) < uVar1) {
      FUN_145ca0cd4(param_1 + 0x5b8);
    }
    local_60 = *(undefined8 *)(param_1 + 0x5a8);
    local_58 = *(undefined4 *)(param_1 + 0x5b0);
    local_70 = *(undefined8 *)(param_1 + 0x588);
    local_68 = *(undefined4 *)(param_1 + 0x590);
    FUN_142af313d(&local_70,0x3f000000);
    local_80 = *(undefined8 *)(param_1 + 0x5b8);
    local_78 = *(undefined4 *)(param_1 + 0x5c0);
    local_90 = *(undefined8 *)(param_1 + 0x598);
    local_88 = *(undefined4 *)(param_1 + 0x5a0);
    FUN_142af313d(&local_90,0x3f000000);
    lVar5 = *(longlong *)(param_1 + 0x5a8);
    lVar3 = *(longlong *)(param_1 + 0x5b8);
    lVar8 = lVar3;
    lVar4 = lVar5;
    if (*(char *)(param_1 + 0x36) == '\x02') {
      lVar8 = lVar5;
      lVar4 = lVar3;
    }
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)(*param_3 + 0x14);
      uVar9 = 0;
      do {
        puVar6[-5] = *(undefined4 *)(lVar5 + uVar9 * 4);
        puVar6[-4] = *(undefined4 *)(lVar3 + uVar9 * 4);
        puVar6[-1] = *(undefined4 *)(lVar4 + uVar9 * 4);
        *puVar6 = *(undefined4 *)(lVar8 + uVar9 * 4);
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + param_4;
      } while (uVar7 != uVar9);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470398a4 FUN_1470398a4 body=60 status=ok
// SIG undefined FUN_1470398a4(void)

undefined8 * FUN_1470398a4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_14a136960;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xbf800000;
  FUN_1470398e0(0,param_3);
  return param_1;
}



// FUNCTION 1470398e0 FUN_1470398e0 body=243 status=ok
// SIG undefined FUN_1470398e0(void)

void FUN_1470398e0(longlong param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float _X;
  
  if ((*(float *)(param_1 + 0xc) != param_2) || (NAN(*(float *)(param_1 + 0xc)) || NAN(param_2))) {
    *(float *)(param_1 + 0xc) = param_2;
    _X = (param_2 * 6.2831855) / (float)*(int *)(param_1 + 8);
    fVar2 = cosf(_X);
    *(float *)(param_1 + 0x10) = fVar2 * -2.0;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    fVar2 = *(float *)(param_1 + 0x18);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= -1.0) {
      fVar2 = -1.0;
    }
    *(float *)(param_1 + 0x18) = fVar2;
    fVar3 = fVar2;
    if (1.0 <= fVar2) {
      fVar3 = 1.0;
    }
    fVar3 = asinf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 | ~-(uint)(fVar2 < -1.0) & (uint)fVar3)
                 );
    fVar2 = _X;
    if (_X <= 1e-08) {
      fVar2 = 1e-08;
    }
    uVar1 = -(uint)(*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x18));
    fVar2 = sinf((fVar3 / fVar2 + (float)(~uVar1 & 0x3f800000 | uVar1 & 0xbf800000)) * _X);
    *(float *)(param_1 + 0x1c) = fVar2;
  }
  return;
}



// FUNCTION 1470399d4 FUN_1470399d4 body=6 status=ok
// SIG undefined FUN_1470399d4(void)

void FUN_1470399d4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 1470399da FUN_1470399da body=56 status=ok
// SIG undefined FUN_1470399da(void)

undefined8 FUN_1470399da(longlong param_1)

{
  float fVar1;
  
  fVar1 = -*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x18) -
          *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x18) = fVar1;
  return CONCAT44(0x80000000,fVar1 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x24));
}



// FUNCTION 147039a12 FUN_147039a12 body=56 status=ok
// SIG undefined FUN_147039a12(void)

undefined8 * FUN_147039a12(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x98,0x10);
  FUN_14703efb2(uVar1,param_2);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 147039a4a FUN_147039a4a body=249 status=ok
// SIG undefined FUN_147039a4a(void)

undefined8 * FUN_147039a4a(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a136968;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined2 *)((longlong)param_1 + 10) = 0x200;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x200;
  FUN_14702e078(param_1 + 3,0x200,1,0);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar2 = 0x1000;
  if (0x400 < *(ushort *)((longlong)param_1 + 10)) {
    lVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 10) << 2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_147034b3a(param_1 + 0xc,lVar2);
  uVar1 = *(undefined2 *)((longlong)param_1 + 10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  FUN_147039c9c(param_1 + 0x10,uVar1);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 147039b44 FUN_147039b44 body=252 status=ok
// SIG undefined FUN_147039b44(void)

undefined8 * FUN_147039b44(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a136968;
  param_1[1] = *param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  uVar1 = *(ushort *)((longlong)param_2 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = (uint)uVar1;
  FUN_14702e078(param_1 + 3,uVar1,1,0);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar3 = 0x1000;
  if (0x400 < *(ushort *)((longlong)param_1 + 10)) {
    lVar3 = (ulonglong)*(ushort *)((longlong)param_1 + 10) << 2;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_147034b3a(param_1 + 0xc,lVar3);
  uVar2 = *(undefined2 *)((longlong)param_2 + 2);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x15),4000);
  FUN_147039c9c(param_1 + 0x10,uVar2);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_142af45ea(param_1);
  return param_1;
}



// FUNCTION 147039c40 FUN_147039c40 body=92 status=ok
// SIG undefined FUN_147039c40(void)

void FUN_147039c40(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  LOCK();
  *(undefined4 *)(param_1 + 0x58) = 0;
  UNLOCK();
  lVar1 = 0x1000;
  if (0x400 < *(ushort *)(param_1 + 10)) {
    lVar1 = (ulonglong)*(ushort *)(param_1 + 10) << 2;
  }
  FUN_147034b3a(param_1 + 0x60,lVar1);
  FUN_147039c9c(param_1 + 0x80,*(undefined2 *)(param_1 + 10));
  FUN_142af45ea(param_1);
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}



// FUNCTION 147039c9c FUN_147039c9c body=308 status=ok
// SIG undefined FUN_147039c9c(void)

void FUN_147039c9c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  FUN_147034bb0(*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1470407a6(param_1);
  }
  iVar3 = 4;
  do {
    lVar6 = param_1[1];
    uVar2 = (int)lVar6 + 1;
    *(uint *)(param_1 + 1) = uVar2;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
      FUN_1470343d0(param_1);
    }
    lVar1 = *param_1;
    lVar6 = (longlong)(int)lVar6 * 0x10;
    puVar4 = (undefined8 *)(lVar1 + lVar6);
    *puVar4 = 0;
    puVar4[1] = 0;
    if (0 < (int)param_2) {
      puVar4 = (undefined8 *)(lVar1 + lVar6);
      *(uint *)(puVar4 + 1) = param_2;
      FUN_145ca0cd4(puVar4);
      memset((void *)*puVar4,0,(ulonglong)param_2 << 2);
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)((longlong)param_1 + 0x1c);
  iVar5 = 0;
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_140cb0586(param_1 + 2,0);
    iVar5 = (int)param_1[3];
    iVar3 = *(int *)((longlong)param_1 + 0x1c);
  }
  *(int *)(param_1 + 3) = iVar5 + 4;
  if ((uint)(iVar3 - iVar5) < 4) {
    FUN_144941252(param_1 + 2,iVar5);
  }
  lVar6 = param_1[2];
  puVar4 = (undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 8);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4 = (undefined8 *)(lVar6 + (longlong)iVar5 * 8);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



// FUNCTION 147039dd0 FUN_147039dd0 body=421 status=ok
// SIG undefined FUN_147039dd0(void)

void FUN_147039dd0(longlong param_1,longlong *param_2,char param_3,float param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *param_2;
  uVar3 = (int)param_2[1] - 2;
  fVar8 = (float)(-(uint)(0.0 <= param_4) &
                 (uint)((float)(int)param_2[1] * (param_4 / (*(float *)(param_1 + 0x14) * 0.5))));
  if (param_3 == '\x02') {
    uVar4 = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1 & 0xfffffffe;
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = uVar3;
    }
    uVar6 = 0;
    if (0 < (int)uVar4) {
      uVar6 = (ulonglong)uVar4;
    }
    uVar7 = 2;
    if (2 < (int)uVar4) {
      uVar7 = (ulonglong)uVar4;
    }
    uVar4 = (int)uVar6 + 2;
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = uVar3;
    }
    fVar8 = *(float *)(lVar2 + -8 + uVar7 * 4);
    fVar9 = *(float *)(lVar2 + uVar6 * 4);
    fVar1 = *(float *)(lVar2 + (longlong)(int)uVar4 * 4);
    fVar9 = ((fVar9 + fVar9) - fVar8) - fVar1;
    *param_5 = (fVar1 - fVar8) / (fVar9 + fVar9);
    fVar8 = *(float *)(lVar2 + -4 + uVar7 * 4);
    fVar9 = *(float *)(lVar2 + 4 + uVar6 * 4);
    fVar1 = *(float *)(lVar2 + 4 + (longlong)(int)uVar4 * 4);
    fVar9 = ((fVar9 + fVar9) - fVar8) - fVar1;
    fVar9 = (fVar1 - fVar8) / (fVar9 + fVar9);
  }
  else if (param_3 == '\x01') {
    uVar5 = (int)ROUND(fVar8 + fVar8 + -0.5) >> 1 & 0xfffffffe;
    uVar4 = uVar5;
    if ((int)uVar3 <= (int)uVar5) {
      uVar4 = uVar3;
    }
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar6 = 0;
    }
    if ((int)(uVar5 + 2) < (int)uVar3) {
      uVar3 = uVar5 + 2;
    }
    uVar7 = (ulonglong)uVar3;
    if ((int)uVar3 < 1) {
      uVar7 = 0;
    }
    fVar8 = fVar8 - (float)(int)uVar6;
    fVar9 = *(float *)(lVar2 + uVar6 * 4);
    *param_5 = (fVar9 - fVar9) * fVar8 + fVar9;
    fVar9 = *(float *)(lVar2 + 4 + uVar6 * 4);
    fVar9 = (*(float *)(lVar2 + 4 + uVar7 * 4) - fVar9) * fVar8 + fVar9;
  }
  else {
    if (param_3 != '\0') {
      return;
    }
    uVar4 = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1 & 0xfffffffe;
    if ((int)uVar3 <= (int)uVar4) {
      uVar4 = uVar3;
    }
    uVar3 = 0;
    if (0 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *param_5 = *(float *)(lVar2 + (ulonglong)uVar3 * 4);
    fVar9 = *(float *)(lVar2 + 4 + (ulonglong)uVar3 * 4);
  }
  *param_6 = fVar9;
  return;
}



// FUNCTION 147039f76 FUN_147039f76 body=207 status=ok
// SIG undefined FUN_147039f76(void)

void FUN_147039f76(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float *local_58;
  float *local_50;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar3 = 0.0;
  if (((*(byte *)(param_1 + 0x11) & 1) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xd8), lVar2 = lVar1, lVar1 != 0 ||
      (lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x10 + *(longlong *)(param_1 + 0x80), lVar2 != 0
      )))) {
    local_50 = &local_48;
    local_58 = &local_44;
    FUN_147039dd0(0,lVar2,param_3,param_2);
    if (lVar1 == 0) {
      FUN_14703a484(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    fVar3 = SQRT(local_44 * local_44 + local_48 * local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar3);
}



// FUNCTION 14703a046 FUN_14703a046 body=197 status=ok
// SIG undefined FUN_14703a046(void)

undefined8 FUN_14703a046(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if (((*(byte *)(param_1 + 0x11) & 1) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xd8), lVar2 = lVar1, lVar1 != 0 ||
      (lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x10 + *(longlong *)(param_1 + 0x80), uVar3 = 0,
      lVar2 != 0)))) {
    local_50 = &local_48;
    local_58 = &local_44;
    FUN_147039dd0(param_1,lVar2,param_3,param_2);
    uVar3 = FUN_144a7ed88(local_48,local_44);
    if (lVar1 == 0) {
      FUN_14703a484(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703a10c FUN_14703a10c body=268 status=ok
// SIG undefined FUN_14703a10c(void)

void FUN_14703a10c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14482f6fa(param_3,0);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    local_34 = *(undefined4 *)(param_1 + 0x14);
    local_30 = *(undefined4 *)(param_1 + 0x38);
    local_2c = *(undefined1 *)(param_1 + 0x40);
    local_2b = FUN_14702e4fa(param_1 + 0x18);
    (**(code **)(*param_2 + 0x10))(param_2,&local_34);
    lVar1 = *(longlong *)(param_1 + 0xd8);
    lVar2 = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0xd0) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0xa0) * 8);
      lVar2 = (longlong)*(int *)(param_1 + 0xa0) * 0x10 + *(longlong *)(param_1 + 0x80);
      if (lVar2 == 0) goto LAB_14703a1ab;
    }
    (**(code **)(*param_2 + 0x30))(param_2,lVar2,*(undefined8 *)(param_1 + 0xd0),param_3);
    if (lVar1 == 0) {
      FUN_14703a484(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
  }
LAB_14703a1ab:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14703a21a FUN_14703a21a body=520 status=ok
// SIG undefined FUN_14703a21a(void)

void FUN_14703a21a(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      FUN_142af45ea(param_1);
    }
    puVar10 = (undefined8 *)
              ((longlong)*(int *)(param_1 + 0xa4) * 0x10 + *(longlong *)(param_1 + 0x80));
    uVar4 = *(uint *)(param_1 + 0x38);
    if ((int)*(uint *)(param_1 + 0x38) < (int)*(uint *)(param_1 + 0x3c)) {
      uVar4 = *(uint *)(param_1 + 0x3c);
    }
    iVar7 = *(int *)(param_1 + 0x74);
    iVar1 = *(int *)(param_1 + 0x78);
    uVar6 = iVar1 - iVar7;
    if (iVar1 < iVar7) {
      uVar6 = (iVar1 - iVar7) + *(int *)(param_1 + 0x70);
    }
    if (uVar4 <= uVar6) {
      _Dst = *(void **)(param_1 + 0x48);
      if (param_2 == '\0') {
        iVar7 = *(int *)(param_1 + 0x78);
        if (iVar7 < *(int *)(param_1 + 0x74)) {
          iVar7 = iVar7 + *(int *)(param_1 + 0x70);
        }
        iVar1 = *(int *)(param_1 + 0x38);
        _Src = *(void **)(param_1 + 0x60);
        iVar5 = *(int *)(param_1 + 0x74);
        iVar2 = *(int *)(param_1 + 0x78);
        iVar8 = iVar2 - iVar5;
        if (iVar2 < iVar5) {
          iVar9 = *(int *)(param_1 + 0x70);
          iVar8 = (iVar2 - iVar5) + iVar9;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x70);
        }
        uVar11 = (ulonglong)
                 (uint)(((*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x58)) - iVar7) + iVar1 / 2)
        ;
        if (iVar1 < iVar8) {
          iVar8 = iVar1;
        }
        iVar9 = iVar9 - *(uint *)(param_1 + 0x74);
        if (iVar8 < iVar9) {
          iVar9 = iVar8;
        }
        memcpy(_Dst,(void *)((longlong)_Src + (ulonglong)*(uint *)(param_1 + 0x74) * 4),
               (longlong)iVar9 * 4);
        memcpy((void *)((longlong)_Dst + (longlong)iVar9 * 4),_Src,(longlong)(iVar8 - iVar9) << 2);
        iVar7 = *(int *)(param_1 + 0x74);
        iVar1 = *(int *)(param_1 + 0x78);
        iVar5 = iVar1 - iVar7;
        if (iVar1 < iVar7) {
          iVar5 = (iVar1 - iVar7) + *(int *)(param_1 + 0x70);
        }
        if (*(int *)(param_1 + 0x3c) < iVar5) {
          iVar5 = *(int *)(param_1 + 0x3c);
        }
        LOCK();
        *(uint *)(param_1 + 0x74) =
             (uint)(*(int *)(param_1 + 0x74) + iVar5) % *(uint *)(param_1 + 0x70);
        UNLOCK();
      }
      else {
        iVar7 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x38);
        if (iVar7 < 0) {
          iVar7 = iVar7 + *(int *)(param_1 + 0x70);
        }
        uVar11 = (ulonglong)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x38) / 2);
        LOCK();
        *(int *)(param_1 + 0x74) = iVar7;
        UNLOCK();
        FUN_14703303a(param_1 + 0x60,_Dst,*(undefined4 *)(param_1 + 0x38));
      }
      fVar12 = *(float *)(param_1 + 0x14);
      if (fVar12 <= 1.0) {
        fVar12 = 1.0;
      }
      FUN_14702e4e6(param_1 + 0x18);
      plVar3 = *(longlong **)(param_1 + 0xe0);
      if (plVar3 == (longlong *)0x0) {
        if (0 < (longlong)*(int *)(puVar10 + 1)) {
          memset((void *)*puVar10,0,(longlong)*(int *)(puVar10 + 1) << 2);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x20))(plVar3,_Dst,*puVar10);
      }
      *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0xa4) * 8) =
           (double)(longlong)uVar11 / (double)fVar12;
      FUN_14703a422(param_1 + 0x80);
      return;
    }
  }
  return;
}



// FUNCTION 14703a422 FUN_14703a422 body=97 status=ok
// SIG undefined FUN_14703a422(void)

void FUN_14703a422(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = iVar1 + 4;
  if (-1 < (int)(iVar1 + 1U)) {
    uVar2 = iVar1 + 1U;
  }
  *(uint *)(param_1 + 0x24) = (iVar1 - (uVar2 & 0xfffffffc)) + 1;
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar2 = iVar1 + 4;
    if (-1 < (int)(iVar1 + 1U)) {
      uVar2 = iVar1 + 1U;
    }
    *(uint *)(param_1 + 0x24) = (iVar1 - (uVar2 & 0xfffffffc)) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14703a484 FUN_14703a484 body=97 status=ok
// SIG undefined FUN_14703a484(void)

void FUN_14703a484(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = iVar1 + 4;
  if (-1 < (int)(iVar1 + 1U)) {
    uVar2 = iVar1 + 1U;
  }
  *(uint *)(param_1 + 0x20) = (iVar1 - (uVar2 & 0xfffffffc)) + 1;
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
    iVar1 = *(int *)(param_1 + 0x20);
    uVar2 = iVar1 + 4;
    if (-1 < (int)(iVar1 + 1U)) {
      uVar2 = iVar1 + 1U;
    }
    *(uint *)(param_1 + 0x20) = (iVar1 - (uVar2 & 0xfffffffc)) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 14703a4e6 FUN_14703a4e6 body=118 status=ok
// SIG undefined FUN_14703a4e6(void)

void FUN_14703a4e6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((*(char *)((longlong)param_1 + 0x11) == '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14703a502;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*param_1 != 0) {
      FUN_14703a21a(*param_1,(char)param_1[2]);
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
LAB_14703a502:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 14703a55c FUN_14703a55c body=101 status=ok
// SIG undefined FUN_14703a55c(void)

undefined8 * FUN_14703a55c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a136970;
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a136d80;
  FUN_147039a4a(puVar1 + 2);
  param_1[1] = puVar1 + 2;
  param_1[2] = puVar1;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14703a5c2 FUN_14703a5c2 body=127 status=ok
// SIG undefined FUN_14703a5c2(void)

undefined8 * FUN_14703a5c2(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a136970;
  puVar1 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a136d80;
  FUN_147039b44(puVar1 + 2,param_2,param_3);
  param_1[1] = puVar1 + 2;
  param_1[2] = puVar1;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14703a642 FUN_14703a642 body=16 status=ok
// SIG undefined FUN_14703a642(void)

void FUN_14703a642(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar1 + 8) = *param_2;
  *(undefined1 *)(lVar1 + 0x10) = 1;
  return;
}



// FUNCTION 14703a652 FUN_14703a652 body=9 status=ok
// SIG undefined FUN_14703a652(void)

void FUN_14703a652(longlong param_1)

{
  FUN_147039f76(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14703a65c FUN_14703a65c body=61 status=ok
// SIG undefined FUN_14703a65c(void)

undefined8 FUN_14703a65c(longlong param_1)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  
  fVar4 = (float)*(ushort *)(*(longlong *)(param_1 + 8) + 10) * 0.5;
  fVar1 = 0.0;
  uVar3 = 0;
  if (0.0 < fVar4) {
    uVar2 = FUN_147039f76();
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    fVar1 = (float)uVar2 / fVar4;
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 14703a69a FUN_14703a69a body=9 status=ok
// SIG undefined FUN_14703a69a(void)

void FUN_14703a69a(longlong param_1)

{
  FUN_14703a10c(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14703a6a4 FUN_14703a6a4 body=111 status=ok
// SIG undefined FUN_14703a6a4(void)

void FUN_14703a6a4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0x11) & 1) != 0) {
    if (*(longlong *)(lVar1 + 0xd8) != 0) {
      FUN_14703a484(lVar1 + 0x80);
      *(undefined8 *)(lVar1 + 0xd0) = 0;
    }
    *(undefined8 *)(lVar1 + 0xd0) =
         *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + (longlong)*(int *)(lVar1 + 0xa0) * 8);
    *(longlong *)(lVar1 + 0xd8) =
         (longlong)*(int *)(lVar1 + 0xa0) * 0x10 + *(longlong *)(lVar1 + 0x80);
  }
  return;
}



// FUNCTION 14703a714 FUN_14703a714 body=56 status=ok
// SIG undefined FUN_14703a714(void)

void FUN_14703a714(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((*(byte *)(lVar1 + 0x11) & 1) != 0) && (*(longlong *)(lVar1 + 0xd8) != 0)) {
    FUN_14703a484(lVar1 + 0x80);
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14703a74c FUN_14703a74c body=174 status=ok
// SIG undefined FUN_14703a74c(void)

undefined8 FUN_14703a74c(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar3 = *(longlong *)(param_1 + 8);
  LOCK();
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + param_3;
  UNLOCK();
  _Dst = *(void **)(lVar3 + 0x60);
  uVar1 = *(uint *)(lVar3 + 0x78);
  uVar2 = *(uint *)(lVar3 + 0x70);
  uVar4 = (*(int *)(lVar3 + 0x74) + uVar2 + ~*(uint *)(lVar3 + 0x78)) % uVar2;
  uVar6 = uVar4;
  if ((int)param_3 < (int)uVar4) {
    uVar6 = param_3;
  }
  uVar5 = uVar2 - uVar1;
  if ((int)uVar6 < (int)(uVar2 - uVar1)) {
    uVar5 = uVar6;
  }
  memcpy((void *)((longlong)_Dst + (ulonglong)uVar1 * 4),param_2,(longlong)(int)uVar5 * 4);
  memcpy(_Dst,(void *)((longlong)param_2 + (longlong)(int)uVar5 * 4),
         (longlong)(int)(uVar6 - uVar5) << 2);
  LOCK();
  *(uint *)(lVar3 + 0x78) = (uVar6 + uVar1) % *(uint *)(lVar3 + 0x70);
  UNLOCK();
  return CONCAT71((int7)((ulonglong)(uVar6 + uVar1) / (ulonglong)*(uint *)(lVar3 + 0x70) >> 8),
                  (int)param_3 <= (int)uVar4);
}



// FUNCTION 14703a7fa FUN_14703a7fa body=680 status=ok
// SIG undefined FUN_14703a7fa(void)

undefined8 * FUN_14703a7fa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a136980;
  uVar4 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar4;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar7 = (longlong *)*param_3;
  param_1[7] = plVar7;
  lVar3 = param_3[1];
  param_1[8] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_1[7];
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar5 = (**(code **)(*plVar7 + 8))();
  *(int *)(param_1 + 3) = iVar5 / 2;
  iVar6 = (**(code **)(*(longlong *)param_1[7] + 8))();
  *(uint *)((longlong)param_1 + 0x1c) = iVar6 + 2U;
  iVar5 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar6 + iVar5 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0x34) - iVar5) < iVar6 + 2U) {
    FUN_145ca0cd4(param_1 + 5);
  }
  *(uint *)(param_1 + 4) =
       (*(int *)((longlong)param_1 + 0x14) / *(int *)(param_1 + 3) + 1) -
       (uint)(*(int *)((longlong)param_1 + 0x14) % *(int *)(param_1 + 3) == 0);
  if (0 < *(int *)(param_1 + 1)) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 10);
      *(uint *)(param_1 + 10) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar6 + 1U) {
        FUN_147040a7e(param_1 + 9,iVar6);
      }
      local_50 = param_1[7];
      lVar3 = param_1[9];
      local_48 = param_1[8];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      FUN_14703b272(lVar3 + (longlong)iVar6 * 0x38,&local_50);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 1));
  }
  if (0 < *(int *)(param_1 + 2)) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xe);
      *(uint *)(param_1 + 0xe) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0x74) < iVar6 + 1U) {
        FUN_147040b0e(param_1 + 0xd,iVar6);
      }
      local_50 = param_1[7];
      lVar3 = param_1[0xd];
      local_48 = param_1[8];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      FUN_14703b54e(lVar3 + (longlong)iVar6 * 0x48,*(undefined4 *)(param_1 + 4),&local_50);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 2));
  }
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    iVar5 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xc);
      *(uint *)(param_1 + 0xc) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 100) < iVar6 + 1U) {
        FUN_147040ba2(param_1 + 0xb,iVar6);
      }
      local_50 = param_1[7];
      lVar3 = param_1[0xb];
      local_48 = param_1[8];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      FUN_14703b364(lVar3 + (longlong)iVar6 * 0x48,*(undefined4 *)(param_1 + 4),&local_50);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)param_1 + 0xc));
  }
  local_50 = CONCAT71(local_50._1_7_,1);
  FUN_14475e60e(param_1 + 0x19);
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703aaa4 FUN_14703aaa4 body=219 status=ok
// SIG undefined FUN_14703aaa4(void)

void FUN_14703aaa4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a136980;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14703c752(param_1 + 0xf);
  FUN_147040a57(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_147040a31(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1470409b3(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14703ab8c FUN_14703ab8c body=928 status=ok
// SIG undefined FUN_14703ab8c(void)

void FUN_14703ab8c(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  void *_Dst;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_3;
  if (0 < *(int *)(param_1 + 8)) {
    lVar14 = 0;
    lVar21 = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x48);
      pvVar7 = *(void **)(param_2 + lVar21 * 8);
      _Dst = *(void **)(lVar15 + 0x18 + lVar14);
      uVar8 = *(undefined8 *)(lVar15 + 0x28 + lVar14);
      memcpy((void *)((longlong)_Dst + (longlong)*(int *)(lVar15 + lVar14) * 4),pvVar7,
             (longlong)*(int *)(lVar15 + lVar14) << 2);
      plVar16 = *(longlong **)(lVar15 + 8 + lVar14);
      (**(code **)(*plVar16 + 0x20))(plVar16,_Dst,uVar8);
      memcpy(_Dst,pvVar7,(longlong)*(int *)(lVar15 + lVar14) << 2);
      lVar21 = lVar21 + 1;
      lVar14 = lVar14 + 0x38;
    } while (lVar21 < *(int *)(param_1 + 8));
  }
  plVar16 = (longlong *)(param_1 + 0x78);
  local_c0 = param_1 + 0x88;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  uStack_80 = local_c0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar13 = *(int *)(param_1 + 0xa0);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_b0 = plVar16;
  if ((iStack_74 != iVar13) || (uStack_80 != local_c0)) {
    do {
      lVar21 = (longlong)*(int *)(*local_b0 + 4 + (longlong)iStack_94 * 0x18);
      lVar14 = *(longlong *)(param_1 + 0x68);
      uVar5 = *(uint *)(lVar14 + 0x1c + lVar21 * 0x48);
      if (0 < (int)uVar5) {
        piVar1 = (int *)(*local_b0 + (longlong)iStack_94 * 0x18);
        fVar4 = (float)piVar1[3];
        piVar22 = (int *)((longlong)piVar1[2] * 0x48 + *(longlong *)(param_1 + 0x58));
        lVar15 = *(longlong *)(param_1 + 0x28);
        uVar6 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x30 + (longlong)*piVar1 * 0x38);
        uVar18 = uVar6 & 0xfffffffc;
        lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28 + (longlong)*piVar1 * 0x38);
        if (0 < (int)uVar18) {
          uVar20 = 0;
          do {
            pfVar2 = (float *)(lVar23 + uVar20 * 4);
            fVar10 = pfVar2[1];
            fVar11 = pfVar2[2];
            fVar12 = pfVar2[3];
            pfVar3 = (float *)(lVar15 + uVar20 * 4);
            *pfVar3 = *pfVar2 * fVar4;
            pfVar3[1] = fVar10 * fVar4;
            pfVar3[2] = fVar11 * fVar4;
            pfVar3[3] = fVar12 * fVar4;
            uVar20 = uVar20 + 4;
          } while (uVar20 < uVar18);
        }
        if (uVar18 != uVar6) {
          lVar19 = (longlong)(int)uVar18;
          do {
            *(float *)(lVar15 + lVar19 * 4) = *(float *)(lVar23 + lVar19 * 4) * fVar4;
            lVar19 = lVar19 + 1;
          } while (lVar19 < (int)uVar6);
        }
        lVar15 = 8;
        uVar20 = 0;
        do {
          lVar19 = (longlong)((piVar22[0xc] + (int)uVar20) % *piVar22) * 0x10;
          lVar23 = *(longlong *)(lVar14 + lVar21 * 0x48 + 0x38);
          local_88 = *(undefined8 *)(*(longlong *)(piVar22 + 0xe) + lVar19);
          uStack_80 = CONCAT44(uStack_80._4_4_,
                               *(undefined4 *)(*(longlong *)(piVar22 + 0xe) + 8 + lVar19));
          local_58 = *(undefined8 *)(lVar23 + -8 + lVar15);
          local_50 = *(undefined4 *)(lVar23 + lVar15);
          local_68 = *(undefined8 *)(param_1 + 0x28);
          local_60 = *(undefined4 *)(param_1 + 0x30);
          FUN_142af4140();
          uVar20 = uVar20 + 1;
          lVar15 = lVar15 + 0x10;
        } while (uVar5 != uVar20);
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar16 ||
             (CONCAT44(uStack_9c,uStack_a0) != local_c0 || iStack_94 != iVar13));
  }
  lVar14 = local_b8;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar15 = 0x38;
    lVar21 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 200) + lVar21) == '\x01') {
        memset(*(void **)(lVar14 + lVar21 * 8),0,(longlong)*(int *)(param_1 + 0x18) << 2);
        lVar23 = *(longlong *)(param_1 + 0x58);
        iVar13 = *(int *)(lVar23 + -8 + lVar15);
        *(int *)(lVar23 + -8 + lVar15) = (iVar13 + 1) % *(int *)(lVar23 + -0x38 + lVar15);
        plVar16 = (longlong *)(lVar21 * 0x48 + 0x38 + lVar23);
      }
      else {
        lVar23 = *(longlong *)(param_1 + 0x58);
        plVar16 = (longlong *)(lVar15 + lVar23);
        pvVar7 = *(void **)(lVar14 + lVar21 * 8);
        plVar9 = *(longlong **)(lVar23 + -0x28 + lVar15);
        lVar19 = *(longlong *)(lVar23 + -0x18 + lVar15);
        (**(code **)(*plVar9 + 0x28))
                  (plVar9,*(undefined8 *)
                           (*(longlong *)(lVar23 + lVar15) +
                           (longlong)*(int *)(lVar23 + -8 + lVar15) * 0x10),lVar19);
        lVar17 = (longlong)*(int *)(lVar23 + -0x34 + lVar15);
        memcpy(pvVar7,(void *)(lVar19 + lVar17 * 4),lVar17 << 2);
        iVar13 = *(int *)(lVar23 + -8 + lVar15);
        *(int *)(lVar23 + -8 + lVar15) = (iVar13 + 1) % *(int *)(lVar23 + -0x38 + lVar15);
      }
      memset(*(void **)(*plVar16 + (longlong)iVar13 * 0x10),0,
             (longlong)*(int *)(lVar23 + -0x30 + lVar15) << 2);
      lVar21 = lVar21 + 1;
      lVar15 = lVar15 + 0x48;
    } while (lVar21 < *(int *)(param_1 + 0xc));
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14703af2e FUN_14703af2e body=200 status=ok
// SIG undefined FUN_14703af2e(void)

void FUN_14703af2e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar3 = 0x30;
    lVar2 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x48);
      memset(*(void **)(lVar4 + -0x18 + lVar3),0,(longlong)*(int *)(lVar4 + -0x10 + lVar3) << 2);
      memset(*(void **)(lVar4 + -8 + lVar3),0,(longlong)*(int *)(lVar4 + lVar3) << 2);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x38;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar2 = 0;
    do {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + lVar2 * 0x48);
      if (0 < *piVar1) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          memset(*(void **)(*(longlong *)(piVar1 + 0xe) + lVar3),0,(longlong)piVar1[2] << 2);
          lVar4 = lVar4 + 1;
          lVar3 = lVar3 + 0x10;
        } while (lVar4 < *piVar1);
      }
      memset(*(void **)(piVar1 + 8),0,(longlong)piVar1[1] << 3);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}



// FUNCTION 14703b02c FUN_14703b02c body=426 status=ok
// SIG undefined FUN_14703b02c(void)

void FUN_14703b02c(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,float param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_6c;
  int local_64;
  undefined4 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_6c._0_4_ = param_2;
  local_6c._4_4_ = param_3;
  local_64 = param_4;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_98 = &local_6c;
    local_90 = &param_5;
    FUN_147040da4(plVar1,&local_60);
    *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_4) = 0;
    uVar3 = local_80;
  }
  else {
    FUN_147040c36(plVar1,&local_6c);
    *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_4) = 1;
    lVar2 = param_1 + 0x88;
    local_60 = (undefined4 *)&DAT_100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 0xa0) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar5 = *(int *)(param_1 + 0xa0);
    }
    uStack_78 = CONCAT44(uStack_44,uStack_48);
    local_80 = local_50;
    uVar3 = local_80;
    local_90 = local_60;
    uStack_88 = (undefined4)uStack_58;
    uStack_84 = uStack_58._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar5) || (uStack_58 != lVar2)) {
      iVar4 = local_80._4_4_;
      local_80 = uVar3;
      do {
        if (*(int *)(*local_98 + 8 + (longlong)iVar4 * 0x18) == param_4) {
          *(undefined1 *)(*(longlong *)(param_1 + 200) + (longlong)param_4) = 0;
          uVar3 = local_80;
          break;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar4 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_98 != plVar1 ||
               (CONCAT44(uStack_84,uStack_88) != lVar2 || local_80._4_4_ != iVar5));
    }
  }
  local_80 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14703b1d8 FUN_14703b1d8 body=152 status=ok
// SIG undefined FUN_14703b1d8(void)

void FUN_14703b1d8(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = param_2 ^ (param_2 >> 2) + 0x9e3779b9 + param_2 * 0x40 + param_3;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  iVar1 = FUN_147041038((longlong *)(param_1 + 0x78),
                        uVar2 ^ (uVar2 >> 2) + 0x9e3779b9 + uVar2 * 0x40 + param_4);
  if (iVar1 == -1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0xc + (longlong)iVar1 * 0x18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar3);
}


