// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481cbbe2 FUN_1481cbbe2 body=160 status=ok
// SIG undefined FUN_1481cbbe2(void)

undefined8 FUN_1481cbbe2(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*pcVar1 == *param_3) {
          if (*(longlong *)(pcVar1 + 0x10) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x14);
          uVar7 = *(undefined4 *)(param_3 + 0x18);
          uVar8 = *(undefined4 *)(param_3 + 0x1c);
          *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(pcVar1 + 0x14) = uVar6;
          *(undefined4 *)(pcVar1 + 0x18) = uVar7;
          *(undefined4 *)(pcVar1 + 0x1c) = uVar8;
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_1481cbc82(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = *(int *)(pcVar1 + 0x20);
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481cbc82 FUN_1481cbc82 body=114 status=ok
// SIG undefined FUN_1481cbc82(void)

void FUN_1481cbc82(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1481cbcf4 FUN_1481cbcf4 body=132 status=ok
// SIG undefined FUN_1481cbcf4(void)

void FUN_1481cbcf4(longlong param_1,int param_2)

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



// FUNCTION 1481cbd7a FUN_1481cbd7a body=121 status=ok
// SIG undefined FUN_1481cbd7a(void)

longlong FUN_1481cbd7a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1481cbdf4();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1481cbe4c(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x28;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1481cbdf4 FUN_1481cbdf4 body=87 status=ok
// SIG undefined FUN_1481cbdf4(void)

char * FUN_1481cbdf4(longlong *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar2 * 0x28);
        if ((*pcVar1 == *param_3) &&
           (*(char *)(*param_1 + 1 + (longlong)iVar2 * 0x28) == param_3[1])) {
          return pcVar1;
        }
        iVar2 = *(int *)(pcVar1 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return (char *)0x0;
}



// FUNCTION 1481cbe4c FUN_1481cbe4c body=284 status=ok
// SIG undefined FUN_1481cbe4c(void)

undefined4 * FUN_1481cbe4c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined2 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481cbf6a(param_1,local_48);
  *local_40 = *(undefined2 *)*param_4;
  *(undefined4 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0xc) = 0;
  *(undefined4 *)(local_40 + 0x10) = 0xffffffff;
  cVar1 = FUN_1481cc050(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x12) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1481cb5e8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cbf6a FUN_1481cbf6a body=230 status=ok
// SIG undefined FUN_1481cbf6a(void)

int * FUN_1481cbf6a(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1481cc050 FUN_1481cc050 body=169 status=ok
// SIG undefined FUN_1481cc050(void)

undefined8 FUN_1481cc050(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        pcVar1 = (char *)(*param_1 + (longlong)iVar10 * 0x28);
        if ((*pcVar1 == *param_3) &&
           (*(char *)(*param_1 + 1 + (longlong)iVar10 * 0x28) == param_3[1])) {
          if (*(longlong *)(pcVar1 + 0x10) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x14);
          uVar7 = *(undefined4 *)(param_3 + 0x18);
          uVar8 = *(undefined4 *)(param_3 + 0x1c);
          *(undefined4 *)(pcVar1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
          *(undefined4 *)(pcVar1 + 0x14) = uVar6;
          *(undefined4 *)(pcVar1 + 0x18) = uVar7;
          *(undefined4 *)(pcVar1 + 0x1c) = uVar8;
          *(undefined4 *)pcVar1 = uVar2;
          *(undefined4 *)(pcVar1 + 4) = uVar3;
          *(undefined4 *)(pcVar1 + 8) = uVar4;
          *(undefined4 *)(pcVar1 + 0xc) = uVar5;
          FUN_1481cc0fa(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = *(int *)(pcVar1 + 0x20);
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481cc0fa FUN_1481cc0fa body=114 status=ok
// SIG undefined FUN_1481cc0fa(void)

void FUN_1481cc0fa(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1481cc16c FUN_1481cc16c body=132 status=ok
// SIG undefined FUN_1481cc16c(void)

void FUN_1481cc16c(longlong param_1,int param_2)

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



// FUNCTION 1481cc1f1 FUN_1481cc1f1 body=43 status=ok
// SIG undefined FUN_1481cc1f1(void)

void FUN_1481cc1f1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148060334(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 1481cc21c FUN_1481cc21c body=260 status=ok
// SIG undefined FUN_1481cc21c(void)

undefined8 * FUN_1481cc21c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1480603f8(param_1 + 1,iVar1,0);
    FUN_14806045a(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 0xc);
  }
  uVar2 = param_2[5];
  uVar6 = param_2[6];
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  param_1[5] = uVar2;
  param_1[6] = uVar6;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_141262aba(param_1 + 9,param_2 + 9);
  return param_1;
}



// FUNCTION 1481cc320 FUN_1481cc320 body=77 status=ok
// SIG undefined FUN_1481cc320(void)

void FUN_1481cc320(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1481cc370 FUN_1481cc370 body=48 status=ok
// SIG undefined FUN_1481cc370(void)

void FUN_1481cc370(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1481cc3a0 FUN_1481cc3a0 body=132 status=ok
// SIG undefined FUN_1481cc3a0(void)

void FUN_1481cc3a0(longlong param_1,int param_2)

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



// FUNCTION 1481cc426 FUN_1481cc426 body=62 status=ok
// SIG undefined FUN_1481cc426(void)

void FUN_1481cc426(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481cc4ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1481cc464 FUN_1481cc464 body=136 status=ok
// SIG undefined FUN_1481cc464(void)

void FUN_1481cc464(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1481cc4ec FUN_1481cc4ec body=93 status=ok
// SIG undefined FUN_1481cc4ec(void)

ulonglong FUN_1481cc4ec(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1481cc54a FUN_1481cc54a body=132 status=ok
// SIG undefined FUN_1481cc54a(void)

void FUN_1481cc54a(longlong param_1,int param_2)

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



// FUNCTION 1481cc5d0 FUN_1481cc5d0 body=48 status=ok
// SIG undefined FUN_1481cc5d0(void)

void FUN_1481cc5d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1481cc600 FUN_1481cc600 body=48 status=ok
// SIG undefined FUN_1481cc600(void)

void FUN_1481cc600(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x2b0,0x10);
  }
  return;
}



// FUNCTION 1481cc630 FUN_1481cc630 body=312 status=ok
// SIG undefined FUN_1481cc630(void)

undefined4 * FUN_1481cc630(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481cc76a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1481cc850(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1481cc93e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cc76a FUN_1481cc76a body=229 status=ok
// SIG undefined FUN_1481cc76a(void)

int * FUN_1481cc76a(longlong *param_1,int *param_2)

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



// FUNCTION 1481cc850 FUN_1481cc850 body=124 status=ok
// SIG undefined FUN_1481cc850(void)

undefined8 FUN_1481cc850(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1481cc8cc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481cc8cc FUN_1481cc8cc body=114 status=ok
// SIG undefined FUN_1481cc8cc(void)

void FUN_1481cc8cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1481cc93e FUN_1481cc93e body=477 status=ok
// SIG undefined FUN_1481cc93e(void)

void FUN_1481cc93e(longlong *param_1)

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



// FUNCTION 1481ccb1c FUN_1481ccb1c body=8 status=ok
// SIG undefined FUN_1481ccb1c(void)

void FUN_1481ccb1c(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1481ccb24 FUN_1481ccb24 body=132 status=ok
// SIG undefined FUN_1481ccb24(void)

void FUN_1481ccb24(longlong param_1,int param_2)

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



// FUNCTION 1481ccbaa FUN_1481ccbaa body=48 status=ok
// SIG undefined FUN_1481ccbaa(void)

void FUN_1481ccbaa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1481ccbda FUN_1481ccbda body=117 status=ok
// SIG undefined FUN_1481ccbda(void)

void FUN_1481ccbda(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 10;
    if (10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x23c)) {
    *(int *)(param_1 + 0x23c) = iVar4;
    FUN_1481ccc50(param_1,*(undefined4 *)(param_1 + 0x238));
    return;
  }
  return;
}



// FUNCTION 1481ccc50 FUN_1481ccc50 body=141 status=ok
// SIG undefined FUN_1481ccc50(void)

void FUN_1481ccc50(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x230);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x230,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x230),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x230,param_2,param_3,0x38);
  return;
}



// FUNCTION 1481cccde FUN_1481cccde body=132 status=ok
// SIG undefined FUN_1481cccde(void)

void FUN_1481cccde(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x238);
  if (param_2 <= (int)uVar1) {
    iVar6 = 10;
    if (10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x23c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x23c) = iVar6;
    FUN_1481ccc50(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481ccd63 FUN_1481ccd63 body=163 status=ok
// SIG undefined FUN_1481ccd63(void)

void FUN_1481ccd63(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143a9f1d5();
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
  FUN_143a9f2bd(param_1,param_2);
  return;
}



// FUNCTION 1481cce06 FUN_1481cce06 body=374 status=ok
// SIG undefined FUN_1481cce06(void)

void FUN_1481cce06(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1481ccf7c FUN_1481ccf7c body=73 status=ok
// SIG undefined FUN_1481ccf7c(void)

void FUN_1481ccf7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  if (*(longlong *)(param_1 + 0x230) == 0) {
    lVar1 = param_1;
  }
  FUN_144705e08(lVar1,*(undefined4 *)(param_1 + 0x238));
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) == 0) {
    return;
  }
  FUN_1481ccbda(param_1,0);
  return;
}



// FUNCTION 1481ccfc5 FUN_1481ccfc5 body=163 status=ok
// SIG undefined FUN_1481ccfc5(void)

void FUN_1481ccfc5(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143a9f30e();
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
  FUN_143a9f3f6(param_1,param_2);
  return;
}



// FUNCTION 1481cd068 FUN_1481cd068 body=374 status=ok
// SIG undefined FUN_1481cd068(void)

void FUN_1481cd068(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1481cd1de FUN_1481cd1de body=124 status=ok
// SIG undefined FUN_1481cd1de(void)

void FUN_1481cd1de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1481cd25c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481cd25c FUN_1481cd25c body=132 status=ok
// SIG undefined FUN_1481cd25c(void)

void FUN_1481cd25c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1481cd2e0 FUN_1481cd2e0 body=75 status=ok
// SIG undefined FUN_1481cd2e0(void)

void FUN_1481cd2e0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 4);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1481cd32c FUN_1481cd32c body=223 status=ok
// SIG undefined FUN_1481cd32c(void)

longlong FUN_1481cd32c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481cd40c();
  if (param_1 != param_2) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
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
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  uVar15 = *(undefined8 *)(param_2 + 0x48);
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  uVar17 = *(undefined8 *)(param_2 + 0x58);
  uVar18 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar18;
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  *(undefined8 *)(param_1 + 0x58) = uVar17;
  *(undefined8 *)(param_1 + 0x40) = uVar14;
  *(undefined8 *)(param_1 + 0x48) = uVar15;
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  *(undefined8 *)(param_1 + 0x38) = uVar13;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar7;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_38._0_4_ = (undefined4)uVar8;
  local_38._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar9;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_28._0_4_ = (undefined4)uVar10;
  local_28._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar11;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  *(undefined4 *)(param_2 + 0x60) = (undefined4)local_28;
  *(undefined4 *)(param_2 + 100) = local_28._4_4_;
  *(undefined4 *)(param_2 + 0x68) = (undefined4)uStack_20;
  *(undefined4 *)(param_2 + 0x6c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 0x50) = (undefined4)local_38;
  *(undefined4 *)(param_2 + 0x54) = local_38._4_4_;
  *(undefined4 *)(param_2 + 0x58) = (undefined4)uStack_30;
  *(undefined4 *)(param_2 + 0x5c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 0x40) = (undefined4)local_48;
  *(undefined4 *)(param_2 + 0x44) = local_48._4_4_;
  *(undefined4 *)(param_2 + 0x48) = (undefined4)uStack_40;
  *(undefined4 *)(param_2 + 0x4c) = uStack_40._4_4_;
  *(undefined4 *)(param_2 + 0x30) = (undefined4)local_58;
  *(undefined4 *)(param_2 + 0x34) = local_58._4_4_;
  *(undefined4 *)(param_2 + 0x38) = (undefined4)uStack_50;
  *(undefined4 *)(param_2 + 0x3c) = uStack_50._4_4_;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
  local_58 = uVar4;
  uStack_50 = uVar5;
  local_48 = uVar6;
  uStack_40 = uVar7;
  local_38 = uVar8;
  uStack_30 = uVar9;
  local_28 = uVar10;
  uStack_20 = uVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cd40c FUN_1481cd40c body=117 status=ok
// SIG undefined FUN_1481cd40c(void)

undefined4 * FUN_1481cd40c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      puVar4 = param_1;
    }
    FUN_14574890e(puVar4,param_1[6]);
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0x100000000;
  }
  return param_1;
}



// FUNCTION 1481cd482 FUN_1481cd482 body=124 status=ok
// SIG undefined FUN_1481cd482(void)

void FUN_1481cd482(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1481cd500(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481cd500 FUN_1481cd500 body=132 status=ok
// SIG undefined FUN_1481cd500(void)

void FUN_1481cd500(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1481cd584 FUN_1481cd584 body=115 status=ok
// SIG undefined FUN_1481cd584(void)

longlong FUN_1481cd584(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar1 = param_2;
  }
  FUN_1481cd5f8(param_1,lVar1,*(undefined4 *)(param_2 + 0x18));
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x50);
    if (*(undefined8 **)(param_2 + 0x40) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_2 + 0x40);
    }
    (**(code **)*puVar2)(puVar2,param_1 + 0x40);
  }
  return param_1;
}



// FUNCTION 1481cd5f8 FUN_1481cd5f8 body=80 status=ok
// SIG undefined FUN_1481cd5f8(void)

void FUN_1481cd5f8(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x18) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  FUN_1481cd648(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_1481cd6a7(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1481cd648 FUN_1481cd648 body=95 status=ok
// SIG undefined FUN_1481cd648(void)

void FUN_1481cd648(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    if (param_2 != 1) {
      uVar1 = FUN_144a3809e((longlong)param_2 << 4,0);
      iVar2 = (int)(uVar1 >> 4);
      if (iVar2 < param_2) {
        iVar2 = 0x7fffffff;
      }
      else {
        param_2 = 0;
        if (iVar2 < 1) goto LAB_1481cd681;
      }
    }
    param_2 = iVar2;
    FUN_1481cd500(param_1,0,param_2);
  }
LAB_1481cd681:
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}



// FUNCTION 1481cd6a7 FUN_1481cd6a7 body=45 status=ok
// SIG undefined FUN_1481cd6a7(void)

void FUN_1481cd6a7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2);
      *(longlong *)(param_1 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481cd6d4 FUN_1481cd6d4 body=132 status=ok
// SIG undefined FUN_1481cd6d4(void)

void FUN_1481cd6d4(longlong param_1,int param_2)

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



// FUNCTION 1481cd75a FUN_1481cd75a body=132 status=ok
// SIG undefined FUN_1481cd75a(void)

void FUN_1481cd75a(longlong param_1,int param_2)

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



// FUNCTION 1481cd7e0 FUN_1481cd7e0 body=139 status=ok
// SIG undefined FUN_1481cd7e0(void)

void FUN_1481cd7e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x14,0);
      iVar5 = (int)(uVar4 / 0x14);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_14005a706(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481cd86c FUN_1481cd86c body=140 status=ok
// SIG undefined FUN_1481cd86c(void)

void FUN_1481cd86c(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb3ea30;
  if (param_1 <= (int)DAT_14cb3ea30) {
    if (DAT_14cb3ea34 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb3ea30) {
        uVar2 = DAT_14cb3ea30;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb3ea30 + ((ulonglong)((longlong)(int)DAT_14cb3ea30 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb3ea34 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb3ea28,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481cd8fa FUN_1481cd8fa body=140 status=ok
// SIG undefined FUN_1481cd8fa(void)

void FUN_1481cd8fa(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb3eb00;
  if (param_1 <= (int)DAT_14cb3eb00) {
    if (DAT_14cb3eb04 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb3eb00) {
        uVar2 = DAT_14cb3eb00;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb3eb00 + ((ulonglong)((longlong)(int)DAT_14cb3eb00 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cb3eb04 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb3eaf8,param_1,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481cd988 FUN_1481cd988 body=31 status=ok
// SIG undefined FUN_1481cd988(void)

undefined8 FUN_1481cd988(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481cd9c4 FUN_1481cd9c4 body=93 status=ok
// SIG undefined FUN_1481cd9c4(void)

void FUN_1481cd9c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cda22 FUN_1481cda22 body=126 status=ok
// SIG undefined FUN_1481cda22(void)

void FUN_1481cda22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adff8d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481cda91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481cdaa0 FUN_1481cdaa0 body=21 status=ok
// SIG undefined FUN_1481cdaa0(void)

undefined8 FUN_1481cdaa0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481cdad2 FUN_1481cdad2 body=31 status=ok
// SIG undefined FUN_1481cdad2(void)

undefined8 FUN_1481cdad2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481cdb02 FUN_1481cdb02 body=93 status=ok
// SIG undefined FUN_1481cdb02(void)

void FUN_1481cdb02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cdb60 FUN_1481cdb60 body=93 status=ok
// SIG undefined FUN_1481cdb60(void)

void FUN_1481cdb60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cdbbe FUN_1481cdbbe body=126 status=ok
// SIG undefined FUN_1481cdbbe(void)

void FUN_1481cdbbe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adffb40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481cdc2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481cdc48 FUN_1481cdc48 body=31 status=ok
// SIG undefined FUN_1481cdc48(void)

undefined8 FUN_1481cdc48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481cdc84 FUN_1481cdc84 body=93 status=ok
// SIG undefined FUN_1481cdc84(void)

void FUN_1481cdc84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffbb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cdce2 FUN_1481cdce2 body=93 status=ok
// SIG undefined FUN_1481cdce2(void)

void FUN_1481cdce2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffbb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cdd40 FUN_1481cdd40 body=126 status=ok
// SIG undefined FUN_1481cdd40(void)

void FUN_1481cdd40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adffbb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481cddaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481cddcc FUN_1481cddcc body=31 status=ok
// SIG undefined FUN_1481cddcc(void)

undefined8 FUN_1481cddcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481cde08 FUN_1481cde08 body=93 status=ok
// SIG undefined FUN_1481cde08(void)

void FUN_1481cde08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffc20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cde66 FUN_1481cde66 body=93 status=ok
// SIG undefined FUN_1481cde66(void)

void FUN_1481cde66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea200;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adffc20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481cdec4 FUN_1481cdec4 body=126 status=ok
// SIG undefined FUN_1481cdec4(void)

void FUN_1481cdec4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea200;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adffc20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481cdf33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481cdf50 FUN_1481cdf50 body=114 status=ok
// SIG undefined FUN_1481cdf50(void)

void FUN_1481cdf50(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1481cdfc2 FUN_1481cdfc2 body=102 status=ok
// SIG undefined FUN_1481cdfc2(void)

void FUN_1481cdfc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb41300) {
    FUN_144b3d300(&DAT_14cb41300);
    if (DAT_14cb41300 == -1) {
      DAT_14cb412f0 = 0;
      atexit(FUN_143a9fd0b);
      _Init_thread_footer(&DAT_14cb41300);
      return;
    }
  }
  return;
}



// FUNCTION 1481ce02e FUN_1481ce02e body=178 status=ok
// SIG undefined FUN_1481ce02e(void)

void FUN_1481ce02e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1481ce0e2(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce0e2 FUN_1481ce0e2 body=216 status=ok
// SIG undefined FUN_1481ce0e2(void)

bool FUN_1481ce0e2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_30,puVar3,1);
  FUN_144939256(uVar1,local_50,local_30);
  local_48[0] = FUN_144830b78(local_48,&DAT_14cb420e0);
  local_40 = 0;
  uStack_38 = 0;
  bVar4 = false;
  piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_50,0);
  if (piVar2 != (int *)0x0) {
    if ((longlong)*piVar2 == -1) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar2) == -1;
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce1bc FUN_1481ce1bc body=194 status=ok
// SIG undefined FUN_1481ce1bc(void)

void FUN_1481ce1bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481ce280(param_1,&local_48,local_38);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce280 FUN_1481ce280 body=236 status=ok
// SIG undefined FUN_1481ce280(void)

undefined8 * FUN_1481ce280(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_48,puVar7,1);
  FUN_144939256(uVar2,local_68,local_48);
  local_60[0] = FUN_144830b78(local_60,&DAT_14cb42180);
  local_58 = 0;
  uStack_50 = 0;
  piVar6 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_68,0);
  if ((piVar6 == (int *)0x0) || ((longlong)*piVar6 == -1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar6);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *(undefined4 *)param_2 = *puVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce36e FUN_1481ce36e body=180 status=ok
// SIG undefined FUN_1481ce36e(void)

void FUN_1481ce36e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1481ce424(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce424 FUN_1481ce424 body=222 status=ok
// SIG undefined FUN_1481ce424(void)

undefined4 FUN_1481ce424(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined4 local_60 [2];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_48,puVar3,1);
  FUN_144939256(uVar1,local_68,local_48);
  local_60[0] = FUN_144830b78(local_60,&DAT_14cb420f0);
  local_58 = 0;
  uStack_50 = 0;
  piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_68,0);
  uVar4 = 0;
  if ((piVar2 != (int *)0x0) && ((longlong)*piVar2 != -1)) {
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar2);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce504 FUN_1481ce504 body=178 status=ok
// SIG undefined FUN_1481ce504(void)

void FUN_1481ce504(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1481ce5b8(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce5b8 FUN_1481ce5b8 body=295 status=ok
// SIG undefined FUN_1481ce5b8(void)

undefined4 FUN_1481ce5b8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_50,puVar4,1);
  FUN_144939256(uVar1,&local_58,local_50);
  lVar2 = DAT_14cb420c0;
  local_68 = DAT_14cb420c0;
  if ((DAT_14cb420c0 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cb420c0);
  }
  local_60 = 2;
  local_5e = 0;
  local_5c = 0xffffffff;
  FUN_140c6c286(lVar2,0);
  local_50 = local_58;
  local_48[0] = FUN_144830b78(local_48,&local_68);
  local_40 = 0;
  uStack_38 = 0;
  piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))
                            ((longlong *)(param_1 + 0x40),&local_50,0);
  uVar5 = 0;
  if ((piVar3 != (int *)0x0) && (uVar5 = 0, (longlong)*piVar3 != -1)) {
    uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar3);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce6e0 FUN_1481ce6e0 body=202 status=ok
// SIG undefined FUN_1481ce6e0(void)

void FUN_1481ce6e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481ce7ac(param_1,&local_58,local_38);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce7ac FUN_1481ce7ac body=295 status=ok
// SIG undefined FUN_1481ce7ac(void)

double * FUN_1481ce7ac(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_38,puVar6,1);
  FUN_144939256(uVar1,local_58,local_38);
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42190);
  local_48 = 0;
  uStack_40 = 0;
  piVar4 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_58,0);
  dVar3 = 0.0;
  if (piVar4 == (int *)0x0) {
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    lVar5 = (longlong)*piVar4;
    dVar7 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar3 = 0.0;
    if (lVar5 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      dVar9 = (double)*(float *)(lVar2 + 0xc + lVar5);
      dVar8 = (double)*(float *)(lVar2 + 8 + lVar5);
      dVar7 = (double)*(float *)(lVar2 + 4 + lVar5);
      dVar3 = (double)*(float *)(lVar2 + lVar5);
    }
  }
  *param_2 = dVar3;
  param_2[1] = dVar7;
  param_2[2] = dVar8;
  param_2[3] = dVar9;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce8d4 FUN_1481ce8d4 body=194 status=ok
// SIG undefined FUN_1481ce8d4(void)

void FUN_1481ce8d4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481ce998(param_1,&local_48,local_38);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ce998 FUN_1481ce998 body=257 status=ok
// SIG undefined FUN_1481ce998(void)

double * FUN_1481ce998(longlong param_1,double *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_38,puVar2,1);
  FUN_144939256(uVar3,local_58,local_38);
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42110);
  local_48 = 0;
  uStack_40 = 0;
  uVar3 = 0;
  piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_58,0);
  if (piVar1 != (int *)0x0) {
    if ((longlong)*piVar1 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar1);
    }
  }
  *param_2 = (double)(float)uVar3;
  param_2[1] = (double)(float)((ulonglong)uVar3 >> 0x20);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cea9a FUN_1481cea9a body=202 status=ok
// SIG undefined FUN_1481cea9a(void)

void FUN_1481cea9a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481ceb66(param_1,&local_58,local_38);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ceb66 FUN_1481ceb66 body=293 status=ok
// SIG undefined FUN_1481ceb66(void)

double * FUN_1481ceb66(longlong param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_38,puVar6,1);
  FUN_144939256(uVar1,local_58,local_38);
  local_50[0] = FUN_144830b78(local_50,&DAT_14cb42160);
  local_48 = 0;
  uStack_40 = 0;
  piVar4 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,local_58,0);
  dVar7 = 0.0;
  dVar3 = 1.0;
  if (piVar4 == (int *)0x0) {
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    lVar5 = (longlong)*piVar4;
    dVar8 = 0.0;
    dVar9 = 0.0;
    dVar3 = 1.0;
    if (lVar5 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      dVar3 = (double)*(float *)(lVar2 + 0xc + lVar5);
      dVar7 = (double)*(float *)(lVar2 + 8 + lVar5);
      dVar8 = (double)*(float *)(lVar2 + 4 + lVar5);
      dVar9 = (double)*(float *)(lVar2 + lVar5);
    }
  }
  *param_2 = dVar9;
  param_2[1] = dVar8;
  param_2[2] = dVar7;
  param_2[3] = dVar3;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cec8c FUN_1481cec8c body=205 status=ok
// SIG undefined FUN_1481cec8c(void)

void FUN_1481cec8c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1402ad63e(param_1,&local_50,local_38);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ced60 FUN_1481ced60 body=250 status=ok
// SIG undefined FUN_1481ced60(void)

void FUN_1481ced60(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481cee5c(param_1,local_28,local_2c != 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cee5c FUN_1481cee5c body=285 status=ok
// SIG undefined FUN_1481cee5c(void)

void FUN_1481cee5c(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_58,puVar4,1);
  FUN_144939256(uVar1,&local_38,local_58);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar2 != 0)) {
    FUN_144938edc(lVar2,&local_58,local_38);
    if (((local_58._4_4_ != 0 || (int)local_58 != 0) || local_50 != 0) || local_4c != 0)
    goto LAB_1481cef57;
  }
  local_58 = local_38;
  local_50 = FUN_144830b78(&local_50,&DAT_14cb420e0);
  local_48 = 0;
  uStack_40 = 0;
  piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_58,0);
  if ((piVar3 != (int *)0x0) && ((longlong)*piVar3 != -1)) {
    *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar3) = -(param_3 & 0xff);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1481cef57:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cef7a FUN_1481cef7a body=247 status=ok
// SIG undefined FUN_1481cef7a(void)

void FUN_1481cef7a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_1481cf072(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf072 FUN_1481cf072 body=284 status=ok
// SIG undefined FUN_1481cf072(void)

void FUN_1481cf072(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_58,puVar8,1);
  FUN_144939256(uVar2,&local_38,local_58);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar3 != 0)) {
    FUN_144938edc(lVar3,&local_58,local_38);
    if (((local_58._4_4_ != 0 || (int)local_58 != 0) || local_50 != 0) || local_4c != 0)
    goto LAB_1481cf16c;
  }
  local_58 = local_38;
  local_50 = FUN_144830b78(&local_50,&DAT_14cb42180);
  local_48 = 0;
  uStack_40 = 0;
  piVar7 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_58,0);
  if ((piVar7 != (int *)0x0) && ((longlong)*piVar7 != -1)) {
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar7);
    *puVar1 = *param_3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1481cf16c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf190 FUN_1481cf190 body=247 status=ok
// SIG undefined FUN_1481cf190(void)

void FUN_1481cf190(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481cf288(param_1,local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf288 FUN_1481cf288 body=284 status=ok
// SIG undefined FUN_1481cf288(void)

void FUN_1481cf288(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_68,puVar4,1);
  FUN_144939256(uVar1,&local_48,local_68);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar2 != 0)) {
    FUN_144938edc(lVar2,&local_68,local_48);
    if (((local_68._4_4_ != 0 || (int)local_68 != 0) || local_60 != 0) || local_5c != 0)
    goto LAB_1481cf37f;
  }
  local_68 = local_48;
  local_60 = FUN_144830b78(&local_60,&DAT_14cb420f0);
  local_58 = 0;
  uStack_50 = 0;
  piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_68,0);
  if ((piVar3 != (int *)0x0) && ((longlong)*piVar3 != -1)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar3) = param_3;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1481cf37f:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf3a6 FUN_1481cf3a6 body=246 status=ok
// SIG undefined FUN_1481cf3a6(void)

void FUN_1481cf3a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481cf49e(param_1,local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf49e FUN_1481cf49e body=280 status=ok
// SIG undefined FUN_1481cf49e(void)

void FUN_1481cf49e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_58,puVar4,1);
  FUN_144939256(uVar1,&local_38,local_58);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar2 != 0)) {
    FUN_144938edc(lVar2,&local_58,local_38);
    if (((local_58._4_4_ != 0 || (int)local_58 != 0) || local_50 != 0) || local_4c != 0)
    goto LAB_1481cf594;
  }
  local_58 = local_38;
  local_50 = FUN_144830b78(&local_50,&DAT_14cb420d0);
  local_48 = 0;
  uStack_40 = 0;
  piVar3 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_58,0);
  if ((piVar3 != (int *)0x0) && ((longlong)*piVar3 != -1)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)*piVar3) = param_3;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1481cf594:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf5b8 FUN_1481cf5b8 body=251 status=ok
// SIG undefined FUN_1481cf5b8(void)

void FUN_1481cf5b8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481cf6b4(param_1,local_28,puVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf6b4 FUN_1481cf6b4 body=397 status=ok
// SIG undefined FUN_1481cf6b4(void)

void FUN_1481cf6b4(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_98,puVar9,1);
  FUN_144939256(uVar5,&local_78,local_98);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar8 != 0)) {
    FUN_144938edc(lVar8,&local_98,local_78);
    if (((local_98._4_4_ != 0 || (int)local_98 != 0) || local_90 != 0) || local_8c != 0)
    goto LAB_1481cf803;
  }
  local_98 = local_78;
  local_90 = FUN_144830b78(&local_90,&DAT_14cb42190);
  local_88 = 0;
  uStack_80 = 0;
  dVar1 = param_3[3];
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = *param_3;
  piVar7 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_98,0);
  if ((piVar7 != (int *)0x0) && (lVar8 = (longlong)*piVar7, lVar8 != -1)) {
    lVar6 = *(longlong *)(param_1 + 0x60);
    *(float *)(lVar6 + lVar8) = (float)dVar4;
    *(float *)(lVar6 + 4 + lVar8) = (float)dVar3;
    *(float *)(lVar6 + 8 + lVar8) = (float)dVar2;
    *(float *)(lVar6 + 0xc + lVar8) = (float)dVar1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_1481cf803:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf842 FUN_1481cf842 body=247 status=ok
// SIG undefined FUN_1481cf842(void)

void FUN_1481cf842(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  FUN_1481cf93a(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cf93a FUN_1481cf93a body=323 status=ok
// SIG undefined FUN_1481cf93a(void)

void FUN_1481cf93a(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_78,puVar7,1);
  FUN_144939256(uVar3,&local_58,local_78);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar6 != 0)) {
    FUN_144938edc(lVar6,&local_78,local_58);
    if (((local_78._4_4_ != 0 || (int)local_78 != 0) || local_70 != 0) || local_6c != 0)
    goto LAB_1481cfa51;
  }
  local_78 = local_58;
  local_70 = FUN_144830b78(&local_70,&DAT_14cb42110);
  local_68 = 0;
  uStack_60 = 0;
  dVar1 = param_3[1];
  dVar2 = *param_3;
  piVar5 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_78,0);
  if ((piVar5 != (int *)0x0) && (lVar6 = (longlong)*piVar5, lVar6 != -1)) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    *(float *)(lVar4 + lVar6) = (float)dVar2;
    *(float *)(lVar4 + 4 + lVar6) = (float)dVar1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1481cfa51:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cfa7e FUN_1481cfa7e body=280 status=ok
// SIG undefined FUN_1481cfa7e(void)

void FUN_1481cfa7e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481cfb98(param_1,local_28,puVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cfb98 FUN_1481cfb98 body=397 status=ok
// SIG undefined FUN_1481cfb98(void)

void FUN_1481cfb98(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_98,puVar9,1);
  FUN_144939256(uVar5,&local_78,local_98);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40), lVar8 != 0)) {
    FUN_144938edc(lVar8,&local_98,local_78);
    if (((local_98._4_4_ != 0 || (int)local_98 != 0) || local_90 != 0) || local_8c != 0)
    goto LAB_1481cfce7;
  }
  local_98 = local_78;
  local_90 = FUN_144830b78(&local_90,&DAT_14cb42160);
  local_88 = 0;
  uStack_80 = 0;
  dVar1 = param_3[3];
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = *param_3;
  piVar7 = (int *)(**(code **)(*(longlong *)(param_1 + 0x40) + 0x58))(param_1 + 0x40,&local_98,0);
  if ((piVar7 != (int *)0x0) && (lVar8 = (longlong)*piVar7, lVar8 != -1)) {
    lVar6 = *(longlong *)(param_1 + 0x60);
    *(float *)(lVar6 + lVar8) = (float)dVar4;
    *(float *)(lVar6 + 4 + lVar8) = (float)dVar3;
    *(float *)(lVar6 + 8 + lVar8) = (float)dVar2;
    *(float *)(lVar6 + 0xc + lVar8) = (float)dVar1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 1;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_1481cfce7:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cfd26 FUN_1481cfd26 body=270 status=ok
// SIG undefined FUN_1481cfd26(void)

void FUN_1481cfd26(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_1402ad4d2(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cfe3c FUN_1481cfe3c body=54 status=ok
// SIG undefined FUN_1481cfe3c(void)

void FUN_1481cfe3c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ae02690;
  param_1[1] = 0;
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
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_1402ae190();
  return;
}



// FUNCTION 1481cfe72 FUN_1481cfe72 body=131 status=ok
// SIG undefined FUN_1481cfe72(void)

void FUN_1481cfe72(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *_Dst;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar4) {
    plVar1 = *(longlong **)(param_1 + 0x50);
    uVar3 = 0;
    _Dst = plVar1;
    do {
      if (*_Dst == *param_2) {
        if (uVar4 - 1 != (int)uVar3) {
          iVar5 = (uVar4 - 1) - (int)uVar3;
          iVar2 = 1;
          if (iVar5 < 1) {
            iVar2 = iVar5;
          }
          memmove(_Dst,plVar1 + (ulonglong)(uVar4 - iVar2) * 4,(longlong)iVar2 << 5);
          uVar4 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar4 - 1;
        FUN_1481d7226((longlong *)(param_1 + 0x50));
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = _Dst + 4;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 1481cfef6 FUN_1481cfef6 body=205 status=ok
// SIG undefined FUN_1481cfef6(void)

void FUN_1481cfef6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_144741050(param_2 + 1);
  FUN_144a81174(uVar3);
  FUN_144a81174(param_3);
  FUN_144741050(param_2 + 1);
  if ((*param_3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar1 + lVar4) == *param_2) &&
         (*(int *)(lVar1 + 8 + lVar4) == (int)param_2[1])) {
        uVar2 = FUN_144830b78(local_2c,param_3);
        *(undefined4 *)(lVar1 + 8 + lVar4) = uVar2;
        *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 1;
        break;
      }
      lVar4 = lVar4 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x28 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481cffc4 FUN_1481cffc4 body=215 status=ok
// SIG undefined FUN_1481cffc4(void)

void FUN_1481cffc4(longlong *param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x30))(param_1,0);
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,local_38);
    FUN_1402ae332(param_1,local_38);
    local_48 = param_2[4];
    local_40 = *(undefined4 *)(param_2 + 5);
    FUN_140096e5c(param_1);
    FUN_1402ae28a(param_1 + 6,param_2 + 6);
    FUN_1402ae23a(param_1 + 8,param_2 + 8);
    FUN_1402ae2da(param_1 + 10,param_2 + 10);
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 | 8;
    if (param_3 != '\0') {
      *(uint *)(param_1 + 0x10) = uVar1 | 0xf;
      FUN_140219f72(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d00ce FUN_1481d00ce body=167 status=ok
// SIG undefined FUN_1481d00ce(void)

void FUN_1481d00ce(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  (**(code **)(*param_1 + 0x2a8))(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d0176 FUN_1481d0176 body=160 status=ok
// SIG undefined FUN_1481d0176(void)

void FUN_1481d0176(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d021c FUN_1481d021c body=41 status=ok
// SIG undefined FUN_1481d021c(void)

void FUN_1481d021c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1481d0276 FUN_1481d0276 body=32 status=ok
// SIG undefined FUN_1481d0276(void)

undefined8 FUN_1481d0276(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
     (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))) {
    uVar1 = FUN_1481d7394(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1481d0296 FUN_1481d0296 body=192 status=ok
// SIG undefined FUN_1481d0296(void)

uint FUN_1481d0296(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_42;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_144a7eae6();
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
  }
  if (*(int *)(lVar5 + 0x88) < 1) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
    do {
      local_58 = 0;
      FUN_1406d5d50(param_1,&local_42,param_2,iVar4);
      uVar1 = 1 << ((byte)iVar4 & 0x1f);
      if (local_41 == '\0') {
        uVar1 = 0;
      }
      uVar3 = uVar3 | uVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar5 + 0x88));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1481d0358 FUN_1481d0358 body=424 status=ok
// SIG undefined FUN_1481d0358(void)

void FUN_1481d0358(longlong param_1)

{
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14c762948 = 0xffffffff;
  DAT_14cb425e8 = DAT_14c75b13c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  local_48 = 0x100000000;
  local_40 = &DAT_14cb424c0;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (DAT_14cb424d8 != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_88 = &DAT_14cb424b0;
  local_60 = &DAT_14cb424b0;
  local_58 = &DAT_14cb424b0;
  local_50 = 0;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      local_48 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x20);
      if (*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x20) == param_1) {
        FUN_140721fbe(&DAT_14cb424a0,&local_48);
        FUN_1481d7720(local_60,iStack_6c);
        local_50 = CONCAT11(local_50._1_1_,1);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_1481d74fe(local_58,*(int *)(local_58 + 1) - *(int *)((longlong)local_58 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d0502 FUN_1481d0502 body=448 status=ok
// SIG undefined FUN_1481d0502(void)

longlong * FUN_1481d0502(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  longlong local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  if (DAT_14cb424b8 != DAT_14cb424e4) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x10);
    uVar6 = (uint)param_1 & 0xffff;
    puVar7 = &DAT_14cb424e8;
    if (DAT_14cb424f0 != (undefined *)0x0) {
      puVar7 = DAT_14cb424f0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb424f8 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar6) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb424b0 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14cb424b0 + (longlong)iVar2 * 0x20) == param_1) {
        if ((undefined8 *)(lVar1 + 8) != (undefined8 *)0x0 && lVar1 != 0) {
          plVar4 = *(longlong **)(lVar1 + 8);
          goto LAB_1481d0627;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  FUN_1400021e4(&local_38,&local_48);
  plVar8 = local_48;
  if (local_40 == 0) {
    plVar8 = (longlong *)&DAT_149dfb77a;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 200))(plVar4,plVar8,1);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    local_48 = &local_38;
    FUN_1481d77ec(&local_2c);
    lVar1 = DAT_14cb424b0;
    *(longlong **)(DAT_14cb424b0 + 8 + (longlong)local_2c * 0x20) = plVar4;
    uVar5 = (**(code **)(*plVar4 + 0xd0))(plVar4);
    FUN_1481d06c4(uVar5,&local_48);
    *(longlong **)(lVar1 + 0x10 + (longlong)local_2c * 0x20) = local_48;
  }
LAB_1481d0627:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb42500);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d06c4 FUN_1481d06c4 body=215 status=ok
// SIG undefined FUN_1481d06c4(void)

undefined8 FUN_1481d06c4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e17030;
  local_30[3] = FUN_1481d0358;
  FUN_14110d2ba(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d079c FUN_1481d079c body=247 status=ok
// SIG undefined FUN_1481d079c(void)

ulonglong FUN_1481d079c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar6 = 0;
  lVar3 = FUN_140032b16(0);
  if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
    plVar9 = *(longlong **)(lVar3 + 0x28);
    plVar1 = plVar9 + *(int *)(lVar3 + 0x30);
    do {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        lVar4 = FUN_14129a444();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          iVar2 = *(int *)(lVar3 + 0x40);
          if (iVar2 == (int)param_2[1]) {
            if (1 < iVar2) {
              lVar4 = 0;
              while( true ) {
                uVar5 = *(ushort *)(*(longlong *)(lVar3 + 0x38) + lVar4);
                uVar6 = (ulonglong)uVar5;
                uVar7 = *(ushort *)(*param_2 + lVar4);
                if (uVar5 != uVar7) break;
                if (uVar5 == 0) goto LAB_1481d0861;
LAB_1481d0834:
                lVar4 = lVar4 + 2;
              }
              if ((uVar7 | uVar5) < 0x80) {
                uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                uVar8 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1481d0834;
              }
              if (uVar5 != uVar7) goto LAB_1481d07fc;
            }
          }
          else if ((int)param_2[1] + iVar2 != 1) goto LAB_1481d07fc;
LAB_1481d0861:
          iVar2 = FUN_1481d0296(param_1,lVar3);
          if (iVar2 != 0) {
            uVar6 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_1481d0876;
          }
        }
      }
LAB_1481d07fc:
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
    uVar6 = 0;
  }
LAB_1481d0876:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1481d0893 FUN_1481d0893 body=290 status=ok
// SIG undefined FUN_1481d0893(void)

void FUN_1481d0893(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(&DAT_14cb425d0,param_1);
  if (DAT_14c762950 == -1) {
    DAT_14c762950 = DAT_14c762934;
  }
  FUN_14479d2ce(&DAT_14cb425d0);
  iVar5 = 0;
  if (DAT_14cb42528 == 0) {
    iVar2 = DAT_14c762948;
    if (DAT_14c762948 == -1) {
      iVar2 = DAT_14c762934;
    }
    if (DAT_14c762938 != -1) {
      iVar2 = DAT_14c762938;
    }
    if (iVar2 - 1U < 0xfffffffe) {
      iVar5 = 0;
      uVar3 = 1 << ((byte)iVar2 & 0x1f);
      do {
        iVar5 = iVar5 + 1;
        uVar1 = uVar3 & 2;
        uVar3 = (int)uVar3 >> 1;
      } while (uVar1 == 0);
    }
  }
  FUN_140002266(&local_20,&DAT_149e063bc,iVar5);
  puVar6 = &DAT_149dfb77a;
  if (local_18 != 0) {
    puVar6 = local_20;
  }
  puVar4 = &DAT_149dfb77a;
  if (DAT_14c872b30 != 0) {
    puVar4 = DAT_14c872b28;
  }
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  FUN_1412e8829(puVar4,L"fx.Niagara.QualityLevel",puVar6,0xff000000);
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d09b6 FUN_1481d09b6 body=160 status=ok
// SIG undefined FUN_1481d09b6(void)

bool FUN_1481d09b6(undefined8 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  
  plVar3 = (longlong *)param_1[4];
  if (((plVar3 == (longlong *)0x0) || (*(uint *)(param_1 + 5) <= DAT_14cb425e8)) ||
     (*(uint *)(param_1 + 5) == 0xffffffff)) {
    *(undefined4 *)(param_1 + 5) = DAT_14c75b13c;
    plVar3 = (longlong *)FUN_1481d0502(*param_1);
    param_1[4] = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return false;
    }
  }
  if ((param_2 == 0) || (DAT_14cb42528 != 0)) {
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
    bVar4 = (uVar2 & 4) == 0;
  }
  else {
    bVar4 = false;
  }
  cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  bVar5 = *(char *)((longlong)param_1 + 10) == cVar1;
  *param_3 = bVar4 | bVar5;
  *param_4 = !bVar5 | bVar4;
  return bVar5;
}



// FUNCTION 1481d0a56 FUN_1481d0a56 body=197 status=ok
// SIG undefined FUN_1481d0a56(void)

bool FUN_1481d0a56(undefined8 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  
  plVar4 = (longlong *)param_1[4];
  if (((plVar4 == (longlong *)0x0) || (*(uint *)(param_1 + 5) <= DAT_14cb425e8)) ||
     (*(uint *)(param_1 + 5) == 0xffffffff)) {
    *(undefined4 *)(param_1 + 5) = DAT_14c75b13c;
    plVar4 = (longlong *)FUN_1481d0502(*param_1);
    param_1[4] = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return false;
    }
  }
  if ((param_2 == 0) || (DAT_14cb42528 != 0)) {
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    bVar5 = (uVar3 & 4) == 0;
  }
  else {
    bVar5 = false;
  }
  iVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4);
  if (((*(uint *)((longlong)param_1 + 0x1c) & 1) == 0) ||
     (*(int *)((longlong)param_1 + 0xc) <= iVar2)) {
    bVar1 = true;
    if ((*(uint *)((longlong)param_1 + 0x1c) & 2) != 0) {
      bVar1 = iVar2 <= *(int *)(param_1 + 2);
    }
  }
  else {
    bVar1 = false;
  }
  *param_3 = bVar5 | bVar1;
  *param_4 = ~bVar1 & 1U | bVar5;
  return bVar1;
}



// FUNCTION 1481d0b1c FUN_1481d0b1c body=205 status=ok
// SIG undefined FUN_1481d0b1c(void)

bool FUN_1481d0b1c(undefined8 *param_1,longlong param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  bool bVar4;
  float extraout_XMM0_Da;
  
  plVar3 = (longlong *)param_1[4];
  if (((plVar3 == (longlong *)0x0) || (*(uint *)(param_1 + 5) <= DAT_14cb425e8)) ||
     (*(uint *)(param_1 + 5) == 0xffffffff)) {
    *(undefined4 *)(param_1 + 5) = DAT_14c75b13c;
    plVar3 = (longlong *)FUN_1481d0502(*param_1);
    param_1[4] = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return false;
    }
  }
  if ((param_2 == 0) || (DAT_14cb42528 != 0)) {
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
    bVar4 = (uVar2 & 4) == 0;
  }
  else {
    bVar4 = false;
  }
  (**(code **)(*plVar3 + 0xb8))(plVar3);
  if (((*(uint *)((longlong)param_1 + 0x1c) & 4) == 0) ||
     (*(float *)((longlong)param_1 + 0x14) <= extraout_XMM0_Da)) {
    bVar1 = true;
    if ((*(uint *)((longlong)param_1 + 0x1c) & 8) != 0) {
      bVar1 = extraout_XMM0_Da <= *(float *)(param_1 + 3);
    }
  }
  else {
    bVar1 = false;
  }
  *param_3 = bVar4 | bVar1;
  *param_4 = ~bVar1 & 1U | bVar4;
  return bVar1;
}



// FUNCTION 1481d0bea FUN_1481d0bea body=139 status=ok
// SIG undefined FUN_1481d0bea(void)

void FUN_1481d0bea(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0x200;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined1 **)((longlong)param_1 + 0x2c) = &DAT_100000001;
  *(undefined1 **)((longlong)param_1 + 0x34) = &DAT_3f8000003f800000;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffff0 | 5;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  *(undefined1 **)((longlong)param_1 + 0x5c) = &DAT_100000001;
  *(undefined1 **)((longlong)param_1 + 100) = &DAT_3f8000003f800000;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffff0 | 5;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  return;
}



// FUNCTION 1481d0c7a FUN_1481d0c7a body=256 status=ok
// SIG undefined FUN_1481d0c7a(void)

void FUN_1481d0c7a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_48);
  FUN_144a5dc74(&local_38);
  plVar2 = local_48;
  plVar1 = (longlong *)*param_2;
  if (local_48 != plVar1) {
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  plVar2 = local_38;
  local_40 = (undefined4)param_2[1];
  plVar1 = (longlong *)*param_3;
  if (local_38 != plVar1) {
    local_38 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_30 = (undefined4)param_3[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cb42608);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_48);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d0d80 FUN_1481d0d80 body=259 status=ok
// SIG undefined FUN_1481d0d80(void)

void FUN_1481d0d80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14477b072(param_1,DAT_14cb42640);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    iVar3 = *(int *)(param_5 + 1) + -1;
    if (*(int *)(param_5 + 1) == 0) {
      iVar3 = 0;
    }
    local_58 = param_2;
    local_50 = param_3;
    local_4c = (char)param_4;
    FUN_1402980a2(&local_48,*param_5,iVar3);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
    iVar3 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_5,local_48,iVar3);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001481d0e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d0e98 FUN_1481d0e98 body=449 status=ok
// SIG undefined FUN_1481d0e98(void)

void FUN_1481d0e98(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48 [3];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_58 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_58 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_28,local_2c,iVar1 != 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d105a FUN_1481d105a body=143 status=ok
// SIG undefined FUN_1481d105a(void)

void FUN_1481d105a(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb42650);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_24 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_24);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001481d10e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d10f4 FUN_1481d10f4 body=41 status=ok
// SIG undefined FUN_1481d10f4(void)

void FUN_1481d10f4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1481d1140 FUN_1481d1140 body=150 status=ok
// SIG undefined FUN_1481d1140(void)

void FUN_1481d1140(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481d11d8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d11d8 FUN_1481d11d8 body=437 status=ok
// SIG undefined FUN_1481d11d8(void)

void FUN_1481d11d8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [4];
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(uint *)(param_1 + 0x3d8) & 1) != 0) {
    *(uint *)(param_1 + 0x3d8) = *(uint *)(param_1 + 0x3d8) & 0xfffffffe;
    FUN_1481d191c(param_1);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  iVar5 = *(int *)(param_1 + 0x3c0);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_1 + 0x3c4);
    iVar4 = 0;
    do {
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          uVar3 = (**(code **)(**(longlong **)
                                 (*(longlong *)(param_1 + 0x3c8) +
                                 (longlong)(iVar2 * iVar4 + iVar5) * 8) + 0x5d8))();
          local_58 = (undefined1 *)0x0;
          local_50 = 0x400000000;
          FUN_1481d1d4c(uVar3,local_78);
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_78;
          }
          lVar6 = (longlong)(int)local_50;
          if (lVar6 != 0) {
            lVar7 = 0;
            do {
              plVar1 = *(longlong **)(puVar8 + lVar7);
              local_a8 = local_98 + 2;
              FUN_1481d0d80(*(undefined8 *)(param_1 + 0x3a0),plVar1,iVar4,1);
              local_a8 = local_98;
              FUN_1481d0d80(*(undefined8 *)(param_1 + 0x3a8),plVar1,iVar5,0);
              (**(code **)(*plVar1 + 0x2a8))(plVar1,1);
              lVar7 = lVar7 + 8;
            } while (lVar6 * 8 != lVar7);
          }
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          iVar5 = iVar5 + 1;
          iVar2 = *(int *)(param_1 + 0x3c4);
        } while (iVar5 < iVar2);
        iVar5 = *(int *)(param_1 + 0x3c0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d13a4 FUN_1481d13a4 body=273 status=ok
// SIG undefined FUN_1481d13a4(void)

void FUN_1481d13a4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (0 < iVar4) {
    iVar1 = *(int *)(param_1 + 0x3c4);
    iVar3 = 0;
    do {
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          uVar2 = (**(code **)(**(longlong **)
                                 (*(longlong *)(param_1 + 0x3c8) +
                                 (longlong)(iVar1 * iVar3 + iVar4) * 8) + 0x5d8))();
          local_58 = (undefined1 *)0x0;
          local_50 = 0x400000000;
          FUN_1481d1d4c(uVar2,local_78);
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_78;
          }
          lVar5 = (longlong)(int)local_50;
          if (lVar5 != 0) {
            lVar6 = 0;
            do {
              (**(code **)(**(longlong **)(puVar7 + lVar6) + 0x2b0))();
              lVar6 = lVar6 + 8;
            } while (lVar5 * 8 != lVar6);
          }
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          iVar4 = iVar4 + 1;
          iVar1 = *(int *)(param_1 + 0x3c4);
        } while (iVar4 < iVar1);
        iVar4 = *(int *)(param_1 + 0x3c0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d14b6 FUN_1481d14b6 body=180 status=ok
// SIG undefined FUN_1481d14b6(void)

void FUN_1481d14b6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481d156c(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d156c FUN_1481d156c body=319 status=ok
// SIG undefined FUN_1481d156c(void)

void FUN_1481d156c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = *(int *)(param_1 + 0x3c0);
  if (0 < iVar4) {
    iVar1 = *(int *)(param_1 + 0x3c4);
    iVar7 = 0;
    local_80 = param_1;
    do {
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          uVar2 = (**(code **)(**(longlong **)
                                 (*(longlong *)(param_1 + 0x3c8) +
                                 (longlong)(iVar1 * iVar7 + iVar4) * 8) + 0x5d8))();
          local_58 = (undefined1 *)0x0;
          local_50 = 0x400000000;
          FUN_1481d1d4c(uVar2,local_78);
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_78;
          }
          lVar5 = (longlong)(int)local_50;
          if (lVar5 != 0) {
            lVar3 = 0;
            do {
              uVar2 = *(undefined8 *)(puVar6 + lVar3);
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_1456fde5c(param_2,iVar1);
              }
              *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
              lVar3 = lVar3 + 8;
              param_1 = local_80;
            } while (lVar5 * 8 != lVar3);
          }
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          iVar4 = iVar4 + 1;
          iVar1 = *(int *)(param_1 + 0x3c4);
        } while (iVar4 < iVar1);
        iVar4 = *(int *)(param_1 + 0x3c0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d16b0 FUN_1481d16b0 body=158 status=ok
// SIG undefined FUN_1481d16b0(void)

void FUN_1481d16b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1481d1750(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d1750 FUN_1481d1750 body=294 status=ok
// SIG undefined FUN_1481d1750(void)

void FUN_1481d1750(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_1[0x78];
  if (0 < iVar3) {
    iVar1 = *(int *)((longlong)param_1 + 0x3c4);
    iVar6 = 0;
    do {
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          uVar2 = (**(code **)(**(longlong **)
                                 (param_1[0x79] + (longlong)(iVar1 * iVar6 + iVar3) * 8) + 0x5d8))()
          ;
          local_58 = (undefined1 *)0x0;
          local_50 = 0x400000000;
          FUN_1481d1d4c(uVar2,local_78);
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_78;
          }
          lVar5 = (longlong)(int)local_50;
          if (lVar5 != 0) {
            lVar7 = 0;
            do {
              FUN_14810e5a6(*(undefined8 *)(puVar4 + lVar7),param_2);
              lVar7 = lVar7 + 8;
            } while (lVar5 * 8 != lVar7);
          }
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          iVar3 = iVar3 + 1;
          iVar1 = *(int *)((longlong)param_1 + 0x3c4);
        } while (iVar3 < iVar1);
        iVar3 = (int)param_1[0x78];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  (**(code **)(*param_1 + 0x400))(param_1,param_2 ^ 1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d187a FUN_1481d187a body=161 status=ok
// SIG undefined FUN_1481d187a(void)

void FUN_1481d187a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401b2056();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    FUN_1446f470e(&local_20,L"SceneComp",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147a03014(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x1c8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d191c FUN_1481d191c body=1070 status=ok
// SIG undefined FUN_1481d191c(void)

void FUN_1481d191c(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined2 **ppuVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  uint local_d8;
  longlong *local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_145d31460();
  if ((((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x3a0) != 0)) &&
      (*(longlong *)(param_1 + 0x3a8) != 0)) &&
     (((lVar6 = *(longlong *)(param_1 + 0x3b0), lVar6 != 0 && (lVar4 = FUN_145a798dc(), lVar4 != 0))
      && ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38) &&
          ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30 && (*(longlong *)(param_1 + 0x3b0) != 0)))))))) {
    FUN_1400337aa(*(undefined8 *)(param_1 + 0x390));
    lVar6 = *(longlong *)(param_1 + 0x3b0);
    if ((lVar6 == 0) ||
       (((lVar4 = FUN_145a798dc(), lVar4 == 0 || (*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38)))
        || (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x3b0);
    }
    FUN_1400337aa(uVar8);
    uVar2 = FUN_1481d105a(*(undefined8 *)(param_1 + 0x3a0));
    *(undefined4 *)(param_1 + 0x3c0) = uVar2;
    iVar3 = FUN_1481d105a(*(undefined8 *)(param_1 + 0x3a8));
    *(int *)(param_1 + 0x3c4) = iVar3;
    local_c8 = (longlong *)(param_1 + 0x3c8);
    FUN_1481d22f4(local_c8,iVar3 * *(int *)(param_1 + 0x3c0));
    iVar3 = *(int *)(param_1 + 0x3c0);
    if ((0 < iVar3) && (iVar11 = *(int *)(param_1 + 0x3c4), 0 < iVar11)) {
      iVar13 = 0;
      do {
        if (0 < iVar11) {
          uVar12 = 0;
          do {
            local_90 = *(undefined2 **)(param_1 + 0x18);
            FUN_1400021e4(&local_90,&local_a8);
            puVar9 = &DAT_149dfb77a;
            if (local_a0 != 0) {
              puVar9 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
            }
            local_d8 = uVar12;
            FUN_140002266(&local_90,L"%s[%d][%d]",puVar9,iVar13);
            puVar9 = &DAT_149dfb77a;
            if (local_88 != 0) {
              puVar9 = local_90;
            }
            FUN_1446f470e(&local_98,puVar9,1);
            plVar5 = (longlong *)FUN_1481d236b(param_1,local_98);
            if (local_90 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_a4,local_a8) != 0) {
              FUN_1400020a8();
            }
            lVar6 = *local_c8;
            if (plVar5 != (longlong *)0x0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(plVar5);
            }
            bVar1 = DAT_14c950c29;
            *(longlong **)(lVar6 + (longlong)(int)(iVar11 * iVar13 + uVar12) * 8) = plVar5;
            puVar9 = *(undefined2 **)(param_1 + 0x3b0);
            if ((puVar9 != (undefined2 *)0x0 & bVar1) == 1) {
              FUN_1456cec3c(puVar9);
              bVar1 = DAT_14c950c29;
            }
            local_90 = puVar9;
            if ((puVar9 != (undefined2 *)0x0 & bVar1) == 1) {
              FUN_1456cec3c(puVar9);
            }
            FUN_143475f30(plVar5,&local_90,0);
            *(byte *)((longlong)plVar5 + 0x9e) = *(byte *)((longlong)plVar5 + 0x9e) & 0xf7;
            (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(param_1 + 0x1c8),&DAT_14cadad98,0)
            ;
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0xb0);
            if (lVar6 == 0) {
              lVar6 = FUN_1448abda6();
            }
            FUN_140b506dc(plVar5,lVar6,0);
            plVar7 = (longlong *)(**(code **)(*plVar5 + 0x5d8))(plVar5);
            local_a8 = 0x202;
            FUN_1478b82cc(plVar7,plVar5,&local_a8,0);
            local_b8 = (double)((float)(int)uVar12 * *(float *)(param_1 + 0x3bc));
            local_c0 = (double)(*(float *)(param_1 + 0x3b8) * (float)iVar13);
            local_b0 = 0;
            local_d8 = local_d8 & 0xffffff00;
            FUN_14639e34e(plVar7,&local_c0,0,0);
            *(byte *)((longlong)plVar7 + 0x3a) = *(byte *)((longlong)plVar7 + 0x3a) | 6;
            local_90 = *(undefined2 **)(param_1 + 0x390);
            uVar8 = FUN_14477b072(plVar7,DAT_14cb42618);
            (**(code **)(*plVar7 + 0x248))(plVar7,uVar8,&local_90);
            local_70 = (undefined2 **)0x0;
            local_68 = 0x400000000;
            FUN_1481d1d4c(plVar7,&local_90);
            ppuVar10 = local_70;
            if (local_70 == (undefined2 **)0x0) {
              ppuVar10 = &local_90;
            }
            lVar6 = (longlong)(int)local_68;
            if (lVar6 != 0) {
              lVar4 = 0;
              do {
                (**(code **)(**(longlong **)((longlong)ppuVar10 + lVar4) + 0x2a8))
                          (*(longlong **)((longlong)ppuVar10 + lVar4),1);
                lVar4 = lVar4 + 8;
              } while (lVar6 * 8 != lVar4);
            }
            if (local_70 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            uVar12 = uVar12 + 1;
            iVar11 = *(int *)(param_1 + 0x3c4);
          } while ((int)uVar12 < iVar11);
          iVar3 = *(int *)(param_1 + 0x3c0);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d1d4c FUN_1481d1d4c body=125 status=ok
// SIG undefined FUN_1481d1d4c(void)

void FUN_1481d1d4c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x2c) < 0) {
    FUN_1481d7bd6(param_2);
  }
  local_20 = FUN_144a7e9aa();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1481d7af4(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d1dca FUN_1481d1dca body=53 status=ok
// SIG undefined FUN_1481d1dca(void)

void FUN_1481d1dca(longlong param_1)

{
  FUN_1404d1fb0();
  if ((*(uint *)(param_1 + 0x3d8) & 1) != 0) {
    *(uint *)(param_1 + 0x3d8) = *(uint *)(param_1 + 0x3d8) & 0xfffffffe;
    FUN_1481d191c(param_1);
  }
  FUN_1481d1e00(param_1);
  return;
}



// FUNCTION 1481d1e00 FUN_1481d1e00 body=1266 status=ok
// SIG undefined FUN_1481d1e00(void)

void FUN_1481d1e00(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  longlong *local_128;
  uint local_114;
  undefined8 local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_90 [2];
  longlong local_80;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*(longlong *)(param_1 + 0x390) != 0) && (*(longlong *)(param_1 + 0x3a0) != 0)) &&
     (*(longlong *)(param_1 + 0x3a8) != 0)) {
    iVar7 = *(int *)(param_1 + 0x3c0);
    if (0 < iVar7) {
      iVar5 = *(int *)(param_1 + 0x3c4);
      local_114 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      iVar10 = 0;
      do {
        if (0 < iVar5) {
          iVar7 = 0;
          do {
            local_110 = (**(code **)(**(longlong **)
                                       (*(longlong *)(param_1 + 0x3c8) +
                                       (longlong)(iVar5 * iVar10 + iVar7) * 8) + 0x5d8))();
            local_a8 = 0;
            uStack_a0 = 0;
            local_90[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x10) + 0x18)
            ;
            FUN_1400021e4(local_90,local_b8);
            FUN_14146ec20(local_90,local_b8);
            uVar3 = uStack_a0;
            lVar11 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_147058dbc(&local_a8,uVar3 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar11 * 0x20);
            *puVar1 = 0;
            puVar1[1] = 0;
            FUN_140b411da(local_a8 + lVar11 * 0x20,local_90);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            FUN_142787b30(local_90,iVar10);
            uVar3 = uStack_a0;
            lVar11 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_147058dbc(&local_a8,uVar3 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar11 * 0x20);
            *puVar1 = 0;
            puVar1[1] = 0;
            FUN_140b411da(local_a8 + lVar11 * 0x20,local_90);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            FUN_140230a2e(local_c8,L"{1} | X = {0}",&local_a8);
            uVar4 = uStack_a0;
            FUN_1407adb3e(local_a8,uStack_a0 & 0xffffffff);
            uVar3 = uStack_a0 >> 0x20;
            uStack_a0 = uStack_a0 & 0xffffffff00000000;
            if (((longlong)uVar4 < 0) && ((int)uVar3 != 0)) {
              FUN_147058e42(&local_a8,0);
            }
            local_90[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0x10) + 0x18)
            ;
            FUN_1400021e4(local_90,local_d8);
            FUN_14146ec20(local_90,local_d8);
            uVar3 = uStack_a0;
            lVar11 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_147058dbc(&local_a8,uVar3 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar11 * 0x20);
            *puVar1 = 0;
            puVar1[1] = 0;
            FUN_140b411da(local_a8 + lVar11 * 0x20,local_90);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            FUN_142787b30(local_90,iVar7);
            uVar3 = uStack_a0;
            lVar11 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_147058dbc(&local_a8,uVar3 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(local_a8 + 0x10 + lVar11 * 0x20);
            *puVar1 = 0;
            puVar1[1] = 0;
            FUN_140b411da(local_a8 + lVar11 * 0x20,local_90);
            if (local_80 != 0) {
              FUN_1400020a8();
            }
            FUN_140230a2e(local_e8,L"{1} | Y = {0}",&local_a8);
            local_70 = (longlong *)0x0;
            local_68 = 0x400000000;
            FUN_1481d1d4c(local_110,local_90);
            plVar8 = local_70;
            if (local_70 == (longlong *)0x0) {
              plVar8 = local_90;
            }
            lVar11 = (longlong)(int)local_68;
            if (lVar11 != 0) {
              lVar9 = 0;
              do {
                plVar2 = *(longlong **)((longlong)plVar8 + lVar9);
                if ((*(byte *)((longlong)plVar2 + 0x9e) & 0x10) == 0) {
                  if (*(char *)(param_1 + 0x398) == '\x01') {
                    (**(code **)(*plVar2 + 0x2a8))(plVar2,1);
                  }
                }
                else {
                  local_114 = 0;
                }
                local_128 = local_c8;
                FUN_1481d0d80(*(undefined8 *)(param_1 + 0x3a0),plVar2,iVar10,1);
                local_128 = local_e8;
                FUN_1481d0d80(*(undefined8 *)(param_1 + 0x3a8),plVar2,iVar7,0);
                lVar9 = lVar9 + 8;
              } while (lVar11 * 8 != lVar9);
            }
            FUN_140009b9a(local_f8,local_e8);
            FUN_140009b9a(local_108,local_c8);
            FUN_1481d0c7a(local_110,local_108,local_f8);
            if (local_108[0] != (longlong *)0x0) {
              (**(code **)(*local_108[0] + 0x10))();
            }
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_e8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1407adb3e(local_a8,uStack_a0 & 0xffffffff);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            iVar7 = iVar7 + 1;
            iVar5 = *(int *)(param_1 + 0x3c4);
          } while (iVar7 < iVar5);
          iVar7 = *(int *)(param_1 + 0x3c0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar7);
      if ((local_114 & 1) == 0) goto LAB_1481d22b3;
    }
    if (*(char *)(param_1 + 0x398) == '\x02') {
      FUN_1481d11d8(param_1);
    }
  }
LAB_1481d22b3:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d22f4 FUN_1481d22f4 body=118 status=ok
// SIG undefined FUN_1481d22f4(void)

void FUN_1481d22f4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1481d804c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1481d80d2(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481d236b FUN_1481d236b body=202 status=ok
// SIG undefined FUN_1481d236b(void)

undefined8 FUN_1481d236b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_140e1d66a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d2436 FUN_1481d2436 body=298 status=ok
// SIG undefined FUN_1481d2436(void)

void FUN_1481d2436(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x30) < 2) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = (float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1);
  }
  iVar1 = (int)((float)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38)) * fVar3 +
               (float)*(int *)(param_1 + 0x38));
  FUN_14042f9da(param_2,*(undefined8 *)(param_1 + 0x28),iVar1);
  FUN_1400021e4(param_1 + 0x28,&local_48);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"%s = %d",puVar2,iVar1);
  if (&local_38 == param_5) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d2562 FUN_1481d2562 body=299 status=ok
// SIG undefined FUN_1481d2562(void)

void FUN_1481d2562(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined2 *puVar1;
  float fVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x30) < 2) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1);
  }
  fVar2 = (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38)) * fVar2 +
          *(float *)(param_1 + 0x38);
  FUN_140219d5e(param_2,*(undefined8 *)(param_1 + 0x28),fVar2);
  FUN_1400021e4(param_1 + 0x28,&local_50);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_40,L"%s = %g",puVar1,(double)fVar2);
  if (&local_40 == param_5) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d268e FUN_1481d268e body=360 status=ok
// SIG undefined FUN_1481d268e(void)

void FUN_1481d268e(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  double dVar1;
  undefined2 *puVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  double local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x30) < 2) {
    dVar3 = 1.0;
  }
  else {
    dVar3 = (double)((float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1));
  }
  dVar1 = *(double *)(param_1 + 0x40) +
          (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x40)) * dVar3;
  dVar3 = *(double *)(param_1 + 0x38) +
          (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x38)) * dVar3;
  local_50 = dVar3;
  local_48 = dVar1;
  FUN_1481100e2(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_1400021e4(param_1 + 0x28,&local_70);
  puVar2 = local_70;
  if (local_68 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  local_78 = dVar1;
  FUN_140002266(&local_60,L"%s = {%g, %g}",puVar2,dVar3);
  if (&local_60 == param_5) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_60;
    local_60 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_58._4_4_;
    local_58 = 0;
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d27f8 FUN_1481d27f8 body=422 status=ok
// SIG undefined FUN_1481d27f8(void)

void FUN_1481d27f8(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  undefined2 *puVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x30) < 2) {
    dVar4 = 1.0;
  }
  else {
    dVar4 = (double)((float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1));
  }
  dVar1 = *(double *)(param_1 + 0x48) +
          (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x48)) * dVar4;
  dVar2 = *(double *)(param_1 + 0x40) +
          (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x40)) * dVar4;
  dVar4 = *(double *)(param_1 + 0x38) +
          (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x38)) * dVar4;
  local_68 = dVar4;
  local_60 = dVar2;
  local_58 = dVar1;
  FUN_1404e0f62(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_1400021e4(param_1 + 0x28,&local_88);
  puVar3 = local_88;
  if (local_80 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_98 = dVar2;
  local_90 = dVar1;
  FUN_140002266(&local_78,L"%s = {%g, %g, %g}",puVar3,dVar4);
  if (&local_78 == param_5) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_70._4_4_;
    local_70 = 0;
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d29a0 FUN_1481d29a0 body=509 status=ok
// SIG undefined FUN_1481d29a0(void)

void FUN_1481d29a0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x30) < 2) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = (double)((float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1));
  }
  local_70 = *(double *)(param_1 + 0x58) +
             (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x58)) * dVar1;
  dStack_78 = *(double *)(param_1 + 0x50) +
              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x50)) * dVar1;
  local_80 = *(double *)(param_1 + 0x48) +
             (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x48)) * dVar1;
  local_88 = *(double *)(param_1 + 0x40) +
             (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x40)) * dVar1;
  FUN_14112d1d2(param_2,*(undefined8 *)(param_1 + 0x28),&local_88);
  dVar4 = local_70;
  dVar3 = dStack_78;
  dVar2 = local_80;
  dVar1 = local_88;
  FUN_1400021e4(param_1 + 0x28,&local_a8);
  puVar5 = local_a8;
  if (local_a0 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_b8 = dVar4;
  local_c8 = dVar2;
  dStack_c0 = dVar3;
  FUN_140002266(&local_98,L"%s = {%g, %g, %g, %g}",puVar5,dVar1);
  if (&local_98 == param_5) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_90._4_4_;
    local_90 = 0;
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d2b9e FUN_1481d2b9e body=506 status=ok
// SIG undefined FUN_1481d2b9e(void)

void FUN_1481d2b9e(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x30) < 2) {
    fVar6 = 1.0;
  }
  else {
    fVar6 = (float)param_3 / (float)(*(int *)(param_1 + 0x30) + -1);
  }
  local_64 = (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x44)) * fVar6 +
             *(float *)(param_1 + 0x44);
  local_68 = (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40)) * fVar6 +
             *(float *)(param_1 + 0x40);
  local_6c = (*(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x3c)) * fVar6 +
             *(float *)(param_1 + 0x3c);
  local_70 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x38)) * fVar6 +
             *(float *)(param_1 + 0x38);
  FUN_1406eff12(param_2,*(undefined8 *)(param_1 + 0x28),&local_70);
  dVar2 = (double)local_64;
  dVar3 = (double)local_68;
  dVar4 = (double)local_6c;
  dVar1 = (double)local_70;
  FUN_1400021e4(param_1 + 0x28,&local_90);
  puVar5 = local_90;
  if (local_88 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_a8 = dVar4;
  local_a0 = dVar3;
  local_98 = dVar2;
  FUN_140002266(&local_80,L"%s = {%g, %g, %g, %g}",puVar5,SUB84(dVar1,0));
  if (&local_80 == param_5) {
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_5 != 0) {
      FUN_1400020a8();
    }
    *param_5 = local_80;
    local_80 = 0;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_78._4_4_;
    local_78 = 0;
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d2d9a FUN_1481d2d9a body=310 status=ok
// SIG undefined FUN_1481d2d9a(void)

void FUN_1481d2d9a(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 8) & 0x7fffffff;
  local_58 = param_3;
  local_50 = param_1;
  if ((int)*(uint *)(param_1 + 8) < 0) {
    local_48 = (ulonglong)(uint)(*(int *)(param_2 + 300) * *(int *)(param_1 + 0x88)) +
               *(longlong *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x88) == -1) {
      local_48 = 0;
    }
    local_40 = *(undefined4 *)(param_1 + 0x8c);
    local_38 = (ulonglong)(uint)(*(int *)(param_2 + 300) * *(int *)(param_1 + 0x90)) +
               *(longlong *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x90) == -1) {
      local_38 = 0;
    }
    local_30 = *(undefined4 *)(param_1 + 0x94);
    FUN_1481d8526(&local_50,*(undefined4 *)(param_2 + 0x120),uVar1);
  }
  else {
    local_48 = (ulonglong)(uint)(*(int *)(param_2 + 300) * *(int *)(param_1 + 0x88)) +
               *(longlong *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x88) == -1) {
      local_48 = 0;
    }
    local_40 = *(undefined4 *)(param_1 + 0x8c);
    local_38 = (ulonglong)(uint)(*(int *)(param_2 + 300) * *(int *)(param_1 + 0x90)) +
               *(longlong *)(param_2 + 0x28);
    if (*(int *)(param_1 + 0x90) == -1) {
      local_38 = 0;
    }
    local_30 = *(undefined4 *)(param_1 + 0x94);
    FUN_1481d8692(&local_50,*(undefined4 *)(param_2 + 0x120),uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d2ed2 FUN_1481d2ed2 body=158 status=ok
// SIG undefined FUN_1481d2ed2(void)

void FUN_1481d2ed2(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30 [2];
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 8) & 0x7fffffff;
  local_38 = param_3;
  local_30[0] = param_1;
  if ((int)*(uint *)(param_1 + 8) < 0) {
    local_30[1] = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_1481d902a(local_30,*(undefined4 *)(param_2 + 0x120),uVar1,param_2);
  }
  else {
    local_30[1] = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_1481d9224(local_30,*(undefined4 *)(param_2 + 0x120),uVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d2ff3 FUN_1481d2ff3 body=284 status=ok
// SIG undefined FUN_1481d2ff3(void)

void FUN_1481d2ff3(undefined8 *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = CONCAT31(local_30._1_3_,1);
  local_2c = -1;
  FUN_140aa8fc4(&local_30,*(undefined8 *)(param_2 + 8),*param_1);
  lVar2 = *(longlong *)(param_2 + 0x78);
  if (local_2c == -1 || lVar2 == 0) {
    lVar2 = 0;
    if ((char)local_30 == '\0') goto LAB_1481d307c;
  }
  else {
    if ((char)local_30 == '\0') {
      lVar2 = (ulonglong)(uint)(local_2c * *(int *)(lVar2 + 0x130)) + *(longlong *)(lVar2 + 0x38);
LAB_1481d307c:
      uVar1 = *(ushort *)(lVar2 + (longlong)param_3 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      local_30 = (int)(short)uVar1 & 0x80000000U | (uint)fVar4;
      goto LAB_1481d30a6;
    }
    lVar2 = (ulonglong)(uint)(local_2c * *(int *)(lVar2 + 0x128)) + *(longlong *)(lVar2 + 0x18);
  }
  local_30 = *(uint *)(lVar2 + (longlong)param_3 * 4);
LAB_1481d30a6:
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],&local_30,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d3110 FUN_1481d3110 body=169 status=ok
// SIG undefined FUN_1481d3110(void)

void FUN_1481d3110(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = -1;
  FUN_140a6f82a(&local_2c,*(undefined8 *)(param_2 + 8),*param_1);
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (local_2c == -1 || lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)(uint)(local_2c * *(int *)(lVar1 + 300)) + *(longlong *)(lVar1 + 0x28);
  }
  local_2c = *(int *)(lVar1 + (longlong)param_3 * 4);
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],&local_2c,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d31ba FUN_1481d31ba body=169 status=ok
// SIG undefined FUN_1481d31ba(void)

void FUN_1481d31ba(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = -1;
  FUN_140a6faac(&local_2c,*(undefined8 *)(param_2 + 8),*param_1);
  lVar1 = *(longlong *)(param_2 + 0x78);
  if (local_2c == -1 || lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)(uint)(local_2c * *(int *)(lVar1 + 300)) + *(longlong *)(lVar1 + 0x28);
  }
  local_2c = *(int *)(lVar1 + (longlong)param_3 * 4);
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],&local_2c,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d3264 FUN_1481d3264 body=448 status=ok
// SIG undefined FUN_1481d3264(void)

void FUN_1481d3264(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  float fVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  uint local_50;
  uint local_4c;
  byte local_48 [4];
  int local_44;
  undefined1 local_40;
  byte local_3f;
  undefined4 local_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 1;
  local_44 = -1;
  FUN_140da315a(local_48,*(undefined8 *)(param_2 + 8));
  lVar5 = *(longlong *)(param_2 + 0x78);
  local_40 = 0;
  local_3f = local_48[0];
  lVar4 = 0;
  local_3c = 0;
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  uStack_30._0_4_ = 0;
  uStack_30._4_4_ = 0;
  if (local_44 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (lVar5 != 0) {
      local_40 = 1;
      iVar2 = *(int *)(lVar5 + 0x128 + (ulonglong)(local_48[0] ^ 1) * 8);
      lVar4 = *(longlong *)(lVar5 + 0x18 + (ulonglong)(local_48[0] ^ 1) * 0x20);
      lVar7 = (ulonglong)(uint)(iVar2 * local_44) + lVar4;
      uStack_38._0_4_ = (undefined4)lVar7;
      uStack_38._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      lVar4 = (ulonglong)(uint)((local_44 + 1) * iVar2) + lVar4;
      uStack_30._0_4_ = (undefined4)lVar4;
      uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_3c = *(undefined4 *)(lVar5 + 0x120);
    }
  }
  lVar5 = (longlong)param_3;
  if (local_48[0] == 0) {
    lVar11 = 0;
    puVar8 = &local_50;
    bVar3 = true;
    do {
      bVar6 = bVar3;
      uVar1 = *(ushort *)((&uStack_38)[lVar11] + lVar5 * 2);
      uVar9 = (uint)uVar1 << 0xd;
      if ((uVar9 & 0xf800000) == 0xf800000) {
        fVar10 = (float)(uVar9 | 0x70000000);
      }
      else if ((uVar9 & 0xf800000) == 0) {
        fVar10 = (float)(uVar9 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar10 = (float)((uVar9 & 0xfffe000) + 0x38000000);
      }
      *puVar8 = (int)(short)uVar1 & 0x80000000U | (uint)fVar10;
      lVar11 = 1;
      puVar8 = &local_4c;
      bVar3 = false;
    } while (bVar6);
  }
  else {
    local_50 = *(uint *)(lVar7 + lVar5 * 4);
    local_4c = *(uint *)(lVar4 + lVar5 * 4);
  }
  uStack_38 = lVar7;
  uStack_30 = lVar4;
  FUN_140121138(param_1);
  memcpy(*(void **)(param_1 + 0x10),&local_50,(longlong)*(int *)(param_1 + 0x18));
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d3425 FUN_1481d3425 body=314 status=ok
// SIG undefined FUN_1481d3425(void)

void FUN_1481d3425(undefined8 *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_78 [36];
  uint local_54 [3];
  undefined1 local_48;
  char local_47;
  longlong alStack_40 [4];
  
  alStack_40[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54[0]._0_1_ = 1;
  local_54[1] = 0xffffffff;
  FUN_140aa948e(local_54,*(undefined8 *)(param_2 + 8),*param_1);
  FUN_14060d608(&local_48,*(undefined8 *)(param_2 + 0x78),(undefined1)local_54[0],local_54[1]);
  if (local_47 == '\0') {
    lVar2 = 0;
    do {
      uVar1 = *(ushort *)(alStack_40[lVar2] + (longlong)param_3 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      local_54[lVar2] = (int)(short)uVar1 & 0x80000000U | (uint)fVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  else {
    lVar2 = 0;
    do {
      local_54[lVar2] = *(uint *)(alStack_40[lVar2] + (longlong)param_3 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],local_54,(longlong)*(int *)(param_1 + 3));
  if ((alStack_40[3] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d3560 FUN_1481d3560 body=325 status=ok
// SIG undefined FUN_1481d3560(void)

void FUN_1481d3560(undefined8 *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50;
  char local_4f;
  longlong alStack_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = CONCAT71(local_68._1_7_,1);
  local_68 = CONCAT44(0xffffffff,(undefined4)local_68);
  FUN_140aa910c(&local_68,*(undefined8 *)(param_2 + 8),*param_1);
  FUN_14808a844(&local_50,*(undefined8 *)(param_2 + 0x78),local_68 & 0xff,local_68._4_4_);
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  if (local_4f == '\0') {
    lVar2 = 0;
    do {
      uVar1 = *(ushort *)(alStack_48[lVar2] + (longlong)param_3 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      *(uint *)((longlong)&local_68 + lVar2 * 4) = (int)(short)uVar1 & 0x80000000U | (uint)fVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
  }
  else {
    lVar2 = 0;
    do {
      *(undefined4 *)((longlong)&local_68 + lVar2 * 4) =
           *(undefined4 *)(alStack_48[lVar2] + (longlong)param_3 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
  }
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],&local_68,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d36a6 FUN_1481d36a6 body=314 status=ok
// SIG undefined FUN_1481d36a6(void)

void FUN_1481d36a6(undefined8 *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  uint local_60 [4];
  undefined1 local_50;
  char local_4f;
  longlong alStack_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0]._0_1_ = 1;
  local_60[1] = 0xffffffff;
  FUN_140a6fb6a(local_60,*(undefined8 *)(param_2 + 8),*param_1);
  FUN_144a47c00(&local_50,*(undefined8 *)(param_2 + 0x78),(undefined1)local_60[0],local_60[1]);
  if (local_4f == '\0') {
    lVar2 = 0;
    do {
      uVar1 = *(ushort *)(alStack_48[lVar2] + (longlong)param_3 * 2);
      uVar3 = (uint)uVar1 << 0xd;
      if ((uVar3 & 0xf800000) == 0xf800000) {
        fVar4 = (float)(uVar3 | 0x70000000);
      }
      else if ((uVar3 & 0xf800000) == 0) {
        fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
      }
      local_60[lVar2] = (int)(short)uVar1 & 0x80000000U | (uint)fVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
  }
  else {
    lVar2 = 0;
    do {
      local_60[lVar2] = *(uint *)(alStack_48[lVar2] + (longlong)param_3 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
  }
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],local_60,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d37e1 FUN_1481d37e1 body=177 status=ok
// SIG undefined FUN_1481d37e1(void)

void FUN_1481d37e1(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [28];
  undefined4 uStack_6c;
  undefined4 local_68 [6];
  longlong local_50 [5];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0]._0_1_ = 1;
  local_68[1] = 0xffffffff;
  FUN_141291c16(local_68,*(undefined8 *)(param_2 + 8),*param_1);
  FUN_140954484(local_50,*(undefined8 *)(param_2 + 0x78),(undefined1)local_68[0],local_68[1]);
  lVar1 = 1;
  do {
    (&uStack_6c)[lVar1] = *(undefined4 *)(local_50[lVar1] + (longlong)param_3 * 4);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 5);
  FUN_140121138(param_1);
  memcpy((void *)param_1[2],local_68,(longlong)*(int *)(param_1 + 3));
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d3894 FUN_1481d3894 body=233 status=ok
// SIG undefined FUN_1481d3894(void)

undefined8 * FUN_1481d3894(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 **local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = &local_60;
  local_58 = FUN_143ab8112;
  local_70 = *param_3;
  uVar1 = (ulonglong)(*(int *)(param_3 + 1) - 1);
  if (*(int *)(param_3 + 1) == 0) {
    uVar1 = 0;
  }
  local_68 = (undefined4)uVar1;
  FUN_1401905a2(&local_70,CONCAT62((int6)(uVar1 >> 0x10),0x2e),&local_58,0);
  if (((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) || ((int)uStack_40 < 1)) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_78 = 0;
    FUN_1481d3a4c(param_1,param_2,*(undefined8 *)(param_2 + 0x10),&local_48);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d397e FUN_1481d397e body=205 status=ok
// SIG undefined FUN_1481d397e(void)

longlong FUN_1481d397e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = FUN_14479d2ce();
  plVar1 = (longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    *plVar1 = 0;
    return 0;
  }
  lVar3 = FUN_1446ddbd2();
  if (((*plVar1 == 0) || (cVar2 = FUN_144729dda(param_1 + 0x10), cVar2 == '\0')) &&
     (*(int *)(param_1 + 0x20) != 0)) {
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 == 0) {
LAB_1481d3a3d:
      if (*plVar1 == 0) {
        return 0;
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return 0;
    }
    lVar5 = *(longlong *)(lVar4 + 8);
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_1481d3a3d;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1481d3a3d;
    *plVar1 = lVar4;
  }
  else {
    lVar4 = *plVar1;
  }
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     ((*(ushort *)(lVar4 + 0x29) & 0x180) == 0)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1481d3a4c FUN_1481d3a4c body=517 status=ok
// SIG undefined FUN_1481d3a4c(void)

longlong FUN_1481d3a4c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined8 local_78;
  longlong alStack_70 [6];
  
  alStack_70[5] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  alStack_70[3] = 0;
  alStack_70[4] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  local_78 = 0;
  alStack_70[0] = 0;
  lVar1 = FUN_144a8e29b(param_3,*(undefined8 *)(*param_4 + (longlong)param_5 * 8),3);
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar5) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar5 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar5) goto LAB_1481d3b21;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_1481d3b21:
      for (uVar4 = *(ulonglong *)(lVar1 + 0x10); (uVar4 & 1) == 0;
          uVar4 = *(ulonglong *)(uVar4 + 0x10)) {
        if (uVar4 < 2) {
          uVar4 = 0;
          goto LAB_1481d3bdb;
        }
      }
      if ((uVar4 & 0xfffffffffffffffe) == 0) {
        uVar4 = 0;
      }
      else if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c();
      }
      uVar4 = uVar4 & 0xfffffffffffffffe;
LAB_1481d3bdb:
      FUN_14485c47a(&local_78,uVar4);
      alStack_70[0] = lVar1;
      FUN_1449651a4(alStack_70,lVar1);
      alStack_70[4] = param_2;
      goto LAB_1481d3c00;
    }
    for (uVar4 = *(ulonglong *)(lVar1 + 0x10); (uVar4 & 1) == 0;
        uVar4 = *(ulonglong *)(uVar4 + 0x10)) {
      if (uVar4 < 2) {
        uVar4 = 0;
        goto LAB_1481d3b85;
      }
    }
    if ((uVar4 & 0xfffffffffffffffe) == 0) {
      uVar4 = 0;
    }
    else if (DAT_14c950c29 != '\0') {
      FUN_1456cec3c();
    }
    uVar4 = uVar4 & 0xfffffffffffffffe;
LAB_1481d3b85:
    FUN_14485c47a(&local_78,uVar4);
    alStack_70[0] = lVar1;
    FUN_1449651a4(alStack_70,lVar1);
    param_5 = param_5 + 1;
    alStack_70[4] = param_2;
    if ((-1 < param_5) && (param_5 < (int)param_4[1])) {
      local_88 = param_5;
      FUN_1481d3a4c(param_1,param_2 + *(int *)(lVar1 + 0x44),*(undefined8 *)(lVar1 + 0x70),param_4);
      goto LAB_1481d3c18;
    }
  }
LAB_1481d3c00:
  FUN_1406fa146(param_1,&local_78);
  *(longlong *)(param_1 + 0x28) = alStack_70[4];
LAB_1481d3c18:
  if (alStack_70[2] != 0) {
    FUN_1400020a8();
  }
  if ((alStack_70[5] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1481d3c52 FUN_1481d3c52 body=4566 status=ok
// SIG undefined FUN_1481d3c52(void)

void FUN_1481d3c52(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int *piVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 **ppuVar23;
  float *pfVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_a98 [32];
  undefined8 *local_a78;
  undefined8 *local_a70;
  undefined8 *local_a68;
  undefined8 *local_a60;
  undefined8 *local_a58;
  undefined8 *local_a50;
  int *local_a48;
  undefined8 *local_a40;
  int local_a38;
  undefined4 local_a30;
  undefined1 local_a28;
  undefined1 local_a20;
  undefined4 local_a18;
  int local_a04;
  undefined8 *local_a00;
  double local_9f8;
  undefined8 *local_9f0;
  ulonglong local_9e8;
  longlong local_9e0;
  undefined8 local_9d8;
  undefined8 *local_9d0;
  longlong local_9c8;
  longlong local_9c0;
  longlong local_9b8;
  undefined8 *local_9b0;
  longlong local_9a8;
  longlong local_9a0;
  uint local_998;
  uint local_994;
  undefined8 local_990;
  undefined4 uStack_988;
  undefined4 uStack_980;
  undefined8 uStack_97c;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  longlong local_950;
  uint local_948;
  uint local_944;
  undefined4 local_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined8 local_930;
  longlong local_928;
  longlong local_920;
  longlong local_918;
  uint uStack_910;
  uint uStack_90c;
  undefined4 uStack_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined1 uStack_8f8;
  byte bStack_8f7;
  undefined2 uStack_8f6;
  undefined2 uStack_8f4;
  undefined2 uStack_8f2;
  int iStack_8f0;
  undefined8 uStack_8e8;
  undefined4 uStack_8e0;
  undefined4 local_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  longlong local_8c8;
  uint uStack_8c0;
  uint uStack_8bc;
  undefined4 uStack_8b8;
  undefined8 uStack_8b4;
  undefined4 uStack_8ac;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined4 local_898;
  longlong local_890;
  uint local_888;
  undefined8 local_880;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined4 uStack_868;
  undefined8 local_860;
  undefined8 local_858 [16];
  undefined1 local_7d8 [16];
  double local_7c8;
  double local_7c0;
  undefined1 local_7b8 [16];
  double local_7a8;
  double local_7a0;
  double local_798;
  double local_790;
  double local_788;
  double local_780;
  double local_778;
  double dStack_770;
  double local_768;
  undefined8 local_760;
  undefined8 *local_758 [5];
  double local_730;
  double local_708;
  undefined8 local_6d8 [12];
  double local_678;
  double local_670;
  undefined8 local_668;
  undefined8 *local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  uint uStack_5f8;
  uint uStack_5f4;
  byte local_5f0;
  undefined1 local_5e8 [336];
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420;
  undefined1 local_41c [16];
  undefined8 local_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined8 uStack_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined4 local_3c4;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_228;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  if (*(int *)(DAT_14cb42a38 + 4) != 0) {
    puVar19 = (undefined8 *)param_2[0x29];
    local_9e8 = 0;
    if (*(char *)((longlong)puVar19 + 0x23f2) == '\x01') {
      local_9e8 = (ulonglong)(*(int *)(puVar19 + 0x3ba) != 0);
    }
    local_9d8 = param_2[0x22];
    local_1c8 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    lStack_1e0 = 0;
    local_1c0 = 0xffffffff;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_188 = 0xffffffff;
    uStack_184 = 0xffffffff;
    uStack_180 = 0xffffffff;
    uStack_17c = 0xffffffff;
    local_178 = 0xffffffff;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0xffffffffffffffff;
    local_148 = 0;
    local_140 = 0x4000000000;
    local_138 = DAT_14c8464e0;
    dStack_130 = DAT_14c8464e8;
    local_128 = DAT_14c8464f0;
    local_100 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_fc = DAT_14c846330;
    local_f4 = DAT_14c846338;
    local_a70 = *(undefined8 **)(param_1 + 8);
    local_a60 = (undefined8 *)CONCAT44(local_a60._4_4_,1);
    local_a78 = param_2;
    local_a68 = param_3;
    FUN_143aab366(param_1,local_9d8,&local_1e8,puVar19[1]);
    if ((local_1d8 != 0) && (*(int *)(param_1 + 0x1b0) != 0)) {
      uStack_1d0 = uStack_1d0 & 0xffff000000ffffff;
      FUN_144aefb7a(param_1,&local_1e8,param_2[0x21]);
      local_498._0_4_ = 0;
      local_498._4_1_ = 0;
      local_490 = 0xffffffff;
      local_460 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_468 = 0;
      local_458 = 0xffffffffffffffff;
      local_450 = 0;
      uStack_448 = 0;
      local_440 = 0;
      uStack_438 = 0;
      local_430 = 0;
      local_428 = 0x3ff0000000000000;
      local_420 = 0;
      local_41c._8_4_ = 0xffffffff;
      local_41c._0_8_ = 0xffffffffffffffff;
      local_41c._12_4_ = 0xffffffff;
      local_40c = 0xffffffff00000000;
      local_404 = 0;
      uStack_3fc = 0;
      local_3f4 = 0;
      uStack_3ec = 0;
      local_3e4 = 0;
      uStack_3dc = 0;
      local_3d4 = 0;
      uStack_3cc = 0;
      local_3c4 = 0x7f7fffff;
      local_3b8 = 0;
      uStack_3b4 = 0x40000000;
      uStack_3b0 = 0x3f800000;
      uStack_3ac = 0;
      local_228 = 0xc00000000;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0xffffffffffffffff;
      local_200 = 0xffffffff;
      local_1f8 = 0;
      if ((uStack_1d0._4_1_ != '\0') || (uStack_1d0._5_1_ == '\x01')) {
        local_a70 = &local_498;
        local_a78 = (undefined8 *)CONCAT71(local_a78._1_7_,(char)local_9e8);
        local_a68 = (undefined8 *)CONCAT44(local_a68._4_4_,0xffffffff);
        FUN_143aab988(param_1,&local_1e8,param_3,puVar19);
      }
      local_a00 = param_3;
      if (0 < *(int *)(param_1 + 0x1b0)) {
        lVar15 = param_1 + 0x120;
        lVar25 = 0;
        local_9f0 = puVar19;
        local_9c8 = lVar15;
        do {
          if ((lVar25 != 0) && (*(int *)(param_1 + 0x204) == -1)) break;
          lVar26 = *(longlong *)(param_1 + 0x1a0);
          if (*(longlong *)(param_1 + 0x1a0) == 0) {
            lVar26 = lVar15;
          }
          lVar22 = lVar25 * 0x80;
          local_8a0 = 0xffffffff;
          local_898 = 0;
          local_890 = 0;
          local_888 = 0;
          local_860 = 0;
          uStack_870 = 0;
          uStack_86c = 0;
          uStack_868 = 0;
          local_880 = 0;
          uStack_878 = 0;
          uStack_874 = 0;
          (**(code **)(**(longlong **)(lVar26 + lVar22) + 0x20))
                    (*(longlong **)(lVar26 + lVar22),&local_8a0,
                     *(undefined4 *)(lVar26 + 0x18 + lVar22));
          if (CONCAT44(uStack_86c,uStack_870) != 0 && (int)local_8a0 != -1) {
            uStack_908 = 0;
            uStack_904 = 0;
            uStack_900 = 0;
            local_918 = 0;
            uStack_910 = 0;
            uStack_90c = 0;
            uStack_8f8 = 0xff;
            bStack_8f7 = bStack_8f7 & 0xe0;
            uStack_8f6 = 0;
            uStack_8f4 = 0x100;
            iStack_8f0 = 0;
            local_8a8 = 0;
            uStack_8d8 = 0;
            uStack_8d4 = 0;
            uStack_8d0 = 0;
            uStack_8e8 = 0;
            uStack_8e0 = 0;
            local_8dc = 0;
            uStack_8b8 = 0;
            uStack_8b4 = 0;
            local_8c8 = 0;
            uStack_8c0 = 0;
            uStack_8bc = 0;
            local_9c0 = lVar25;
            local_920 = CONCAT44(uStack_86c,uStack_870);
            lVar15 = FUN_144af077a(param_2);
            uVar11 = local_9d8;
            if (*(longlong *)(puVar19[1] + 0x40) != 0) {
              *(undefined1 *)(lVar15 + 0x14) = *(undefined1 *)(*(longlong *)(puVar19[1] + 0x40) + 8)
              ;
            }
            puVar18 = (undefined8 *)(lVar26 + lVar22);
            puVar19 = (undefined8 *)(lVar15 + 8);
            *(undefined1 *)(lVar15 + 0x1f8) = (undefined1)uStack_1d0;
            (**(code **)(*(longlong *)(lVar15 + 8) + 0x18))(puVar19,local_9d8);
            (**(code **)(*(longlong *)*puVar18 + 0x30))
                      ((longlong *)*puVar18,uVar11,puVar19,&local_8a0);
            puVar21 = local_a00;
            local_a78 = puVar18;
            local_9b0 = puVar19;
            FUN_144aefe0e(param_1,&local_1e8,puVar19,local_a00);
            puVar19 = local_9f0;
            local_a70 = (undefined8 *)puVar21[0x5f];
            local_a68 = local_9f0;
            local_a78 = &local_498;
            local_a58 = (undefined8 *)CONCAT44(local_a58._4_4_,0xffffffff);
            local_a60 = puVar18;
            local_a04 = FUN_143aac710(param_1,uVar11,&local_1e8,param_2[0x21]);
            if (local_a04 != 0) {
              local_a70 = local_a00;
              local_a78 = puVar18;
              FUN_144b36a0c(param_1,local_5e8,&local_1e8,puVar19);
              FUN_144af01cc(param_1,&local_928,&local_1e8,local_5e8);
              *(longlong *)(lVar15 + 0x200) = local_928;
              lVar25 = *(longlong *)(lVar15 + 0x208);
              if (lVar25 != local_928) {
                *(longlong *)(lVar15 + 0x208) = local_928;
                if (local_928 != 0) {
                  LOCK();
                  *(int *)(local_928 + 8) = *(int *)(local_928 + 8) + 1;
                  UNLOCK();
                }
                if (lVar25 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar25 + 8);
                  uVar17 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar17 & 0x3fffffff) == 1) {
                    FUN_144a54812();
                  }
                }
              }
              if ((int)local_888 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(local_888);
              }
              if ((int)uStack_90c < (int)local_888) {
                FUN_147a3b5ca(&local_918);
              }
              uVar17 = local_888;
              local_9e0 = param_1;
              local_9d0 = param_2;
              if (0 < (int)local_888) {
                local_9f8 = (double)(lStack_1e0 + 0x30);
                lVar25 = 0;
                lVar26 = 0;
                local_9b8 = lStack_1e0;
                lVar15 = lStack_1e0;
                do {
                  if (*(int *)(local_890 + 8 + lVar25) != 0) {
                    piVar20 = (int *)(local_890 + lVar25);
                    puVar19 = (undefined8 *)puVar18[0xe];
                    if ((undefined8 *)puVar18[0xe] == (undefined8 *)0x0) {
                      puVar19 = puVar18 + 0xc;
                    }
                    iVar3 = *(int *)((longlong)puVar19 + (longlong)*piVar20 * 4);
                    if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar15 + 0x78))) {
                      dVar31 = *(double *)(lVar15 + 0x70);
                      if (*(double *)(lVar15 + 0x70) == 0.0) {
                        dVar31 = local_9f8;
                      }
                      puVar19 = *(undefined8 **)((longlong)dVar31 + (longlong)iVar3 * 8);
                      if (puVar19 != (undefined8 *)0x0) {
                        local_758[0] = puVar19;
                        plVar16 = (longlong *)
                                  FUN_1449cbe5c(puVar19,*(undefined4 *)(local_9e0 + 0xf8),local_758)
                        ;
                        cVar13 = (**(code **)(*plVar16 + 0x1a0))(plVar16);
                        uVar17 = local_888;
                        if (cVar13 == '\0') {
                          local_630 = (undefined8 *)0x0;
                          local_628 = 0x100000000;
                          local_610 = 0;
                          local_620 = 0;
                          uStack_618 = 0;
                          uStack_608 = 0xffffffff;
                          local_600 = 0xff0000ffffffff;
                          uStack_5f8 = uStack_5f8 & 0xffffff00;
                          uStack_5f4 = 0x40c00f07;
                          local_5f0 = local_5f0 & 0xfc;
                          FUN_141793e06(local_6d8);
                          local_a18 = 0xffffffff;
                          local_a20 = 0;
                          local_a28 = (undefined1)local_9e8;
                          local_a30 = 0xffffffff;
                          local_a38 = local_a04;
                          local_a40 = local_9f0;
                          local_a60 = local_a00;
                          local_a70 = local_9b0;
                          local_a78 = local_6d8;
                          local_a68 = puVar19;
                          local_a58 = puVar18;
                          local_a50 = &local_8a0;
                          local_a48 = piVar20;
                          FUN_1447fa5ac(local_9e0,local_9d8,&local_1e8,local_5e8);
                          uVar11 = local_600;
                          uVar17 = uStack_910;
                          local_600 = CONCAT44(local_600._4_4_,(int)lVar26);
                          uVar12 = local_600;
                          local_600._7_1_ = SUB81(uVar11,7);
                          local_600._0_7_ = CONCAT16((undefined1)local_8a0,(int6)uVar12);
                          uStack_5f4 = uStack_5f4 & 0xffefffff;
                          puVar19 = local_630;
                          if (local_630 == (undefined8 *)0x0) {
                            puVar19 = local_6d8;
                          }
                          puVar19[8] = CONCAT44(uStack_874,uStack_878);
                          lVar15 = (longlong)(int)uStack_910;
                          uStack_910 = uStack_910 + 1;
                          if (uStack_90c < uStack_910) {
                            FUN_147471df6(&local_918,uVar17);
                          }
                          _Dst = (void *)(local_918 + lVar15 * 0xf0);
                          *(undefined8 *)(local_918 + 0xa8 + lVar15 * 0xf0) = 0;
                          if (local_630 == (undefined8 *)0x0) {
                            memmove(_Dst,local_6d8,0xa8);
                          }
                          *(undefined8 **)((longlong)_Dst + 0xa8) = local_630;
                          local_630 = (undefined8 *)0x0;
                          *(undefined4 *)((longlong)_Dst + 0xb0) = (undefined4)local_628;
                          *(undefined4 *)((longlong)_Dst + 0xb4) = local_628._4_4_;
                          local_628 = 0x100000000;
                          *(byte *)((longlong)_Dst + 0xe8) = local_5f0;
                          auVar34._8_8_ = uStack_608;
                          auVar34._0_8_ = local_610;
                          *(undefined4 *)((longlong)_Dst + 0xd8) = (undefined4)local_600;
                          *(undefined4 *)((longlong)_Dst + 0xdc) = local_600._4_4_;
                          *(uint *)((longlong)_Dst + 0xe0) = uStack_5f8;
                          *(uint *)((longlong)_Dst + 0xe4) = uStack_5f4;
                          *(undefined1 (*) [16])((longlong)_Dst + 200) = auVar34;
                          *(undefined4 *)((longlong)_Dst + 0xb8) = (undefined4)local_620;
                          *(undefined4 *)((longlong)_Dst + 0xbc) = local_620._4_4_;
                          *(undefined4 *)((longlong)_Dst + 0xc0) = (undefined4)uStack_618;
                          *(undefined4 *)((longlong)_Dst + 0xc4) = uStack_618._4_4_;
                          FUN_1446fc232(local_6d8);
                          lVar15 = local_9b8;
                          uVar17 = local_888;
                        }
                      }
                    }
                  }
                  lVar26 = lVar26 + 1;
                  lVar25 = lVar25 + 0x1c;
                } while (lVar26 < (int)uVar17);
              }
              param_2 = local_9d0;
              param_1 = local_9e0;
              puVar19 = local_9f0;
              if ((uStack_910 != 0) && (uVar17 == uStack_910)) {
                puVar21 = local_a00 + 0x20;
                puVar18 = local_6d8;
                for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
                  *puVar18 = *puVar21;
                  puVar21 = puVar21 + 1;
                  puVar18 = puVar18 + 1;
                }
                if ((*(byte *)(local_9e0 + 0xf0) & 1) == 0) {
                  if (*(char *)(local_9e0 + 0x1c4) != '\x01') goto LAB_1481d4d13;
                  if (*(char *)(local_a00 + 0x71) == '\x01') goto LAB_1481d48fe;
                  uVar28 = (undefined4)local_668;
                  uVar29 = (undefined4)((ulonglong)local_668 >> 0x20);
                  bVar10 = false;
                  local_7a0 = local_670;
                  local_9f8 = local_678;
LAB_1481d4918:
                  uVar39 = (undefined4)DAT_14c8463d0;
                  uVar40 = DAT_14c8463d0._4_4_;
                  uVar41 = (undefined4)DAT_14c8463d8;
                  uVar42 = DAT_14c8463d8._4_4_;
                  if ((*(byte *)(local_9e0 + 0x26c) & 1) == 0) {
                    fVar30 = 1.0;
                    fVar43 = 1.0;
                    fVar44 = 1.0;
                    local_780 = (double)CONCAT44(uVar29,uVar28);
                  }
                  else {
                    lVar15 = *(longlong *)(lStack_1e0 + 0xa0);
                    lVar25 = (longlong)*(int *)(local_9e0 + 0x220);
                    local_780 = (double)CONCAT44(uVar29,uVar28);
                    if ((-1 < lVar25) &&
                       (local_780 = (double)CONCAT44(uVar29,uVar28),
                       *(int *)(local_9e0 + 0x220) < *(int *)(lStack_1e0 + 0xa8))) {
                      local_780 = (double)*(float *)(lVar15 + 8 + lVar25);
                      local_7a0 = (double)*(float *)(lVar15 + 4 + lVar25);
                      local_9f8 = (double)*(float *)(lVar15 + lVar25);
                      if (!bVar10) {
                        pfVar24 = (float *)&DAT_14c846330;
                        if ((float *)local_a00[0x5e] != (float *)0x0) {
                          pfVar24 = (float *)local_a00[0x5e];
                        }
                        local_9f8 = local_9f8 + (double)*pfVar24 * 65536.0;
                        local_7a0 = local_7a0 + (double)pfVar24[1] * 65536.0;
                        local_780 = local_780 + (double)pfVar24[2] * 65536.0;
                      }
                    }
                    lVar25 = (longlong)*(int *)(local_9e0 + 0x22c);
                    fVar30 = 1.0;
                    fVar43 = 1.0;
                    fVar44 = 1.0;
                    if (-1 < lVar25) {
                      fVar30 = 1.0;
                      fVar43 = 1.0;
                      fVar44 = 1.0;
                      if (*(int *)(local_9e0 + 0x22c) < *(int *)(lStack_1e0 + 0xa8)) {
                        fVar30 = *(float *)(lVar15 + lVar25);
                        fVar43 = *(float *)(lVar15 + 4 + lVar25);
                        fVar44 = *(float *)(lVar15 + 8 + lVar25);
                      }
                    }
                    iVar3 = *(int *)(local_9e0 + 0x230);
                    if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lStack_1e0 + 0xa8))) {
                      puVar2 = (undefined4 *)(lVar15 + iVar3);
                      uVar39 = *puVar2;
                      uVar40 = puVar2[1];
                      uVar41 = puVar2[2];
                      uVar42 = puVar2[3];
                    }
                  }
                  dVar31 = DAT_14c8463e0 * DAT_14c8463e0 +
                           (double)CONCAT44(uVar40,uVar39) * (double)CONCAT44(uVar40,uVar39);
                  dVar35 = DAT_14c8463e8 * DAT_14c8463e8 +
                           (double)CONCAT44(uVar42,uVar41) * (double)CONCAT44(uVar42,uVar41);
                  auVar33._0_8_ = dVar31 + dVar35;
                  auVar33._8_8_ = dVar31 + dVar35;
                  uVar27 = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
                  auVar34 = sqrtpd(auVar33,auVar33);
                  auVar37._8_8_ = 0x3ff0000000000000;
                  auVar37._0_8_ = 0x3ff0000000000000;
                  auVar37 = divpd(auVar37,auVar34);
                  auVar38._0_8_ = auVar37._0_8_ * DAT_14c8463e0;
                  auVar38._8_8_ = auVar37._8_8_ * DAT_14c8463e8;
                  auVar4._8_4_ = (int)uVar27;
                  auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                  auVar4._12_4_ = (int)(uVar27 >> 0x20);
                  auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar4);
                  dVar6 = (double)((ulonglong)((double)CONCAT44(uVar40,uVar39) * auVar37._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
                  dVar7 = (double)((ulonglong)((double)CONCAT44(uVar42,uVar41) * auVar37._8_8_) &
                                  uVar27);
                  dVar31 = dVar7 + dVar7;
                  dVar32 = auVar34._0_8_;
                  dVar36 = auVar34._8_8_;
                  dVar5 = dVar32 + dVar32;
                  dVar35 = dVar6 * (dVar6 + dVar6);
                  dVar8 = 1.0 - (dVar32 * dVar5 + dVar35);
                  local_790 = (dVar6 + dVar6) * dVar36;
                  dVar9 = dVar31 * dVar6 + dVar5 * dVar36;
                  local_7a8 = dVar5 * dVar7 + local_790;
                  local_790 = dVar5 * dVar7 - local_790;
                  local_7c8 = dVar5 * dVar6 - dVar31 * dVar36;
                  local_798 = dVar31 * dVar36 + dVar5 * dVar6;
                  local_788 = 1.0 - (dVar35 + dVar7 * dVar31);
                  puVar21 = &DAT_14c846400;
                  ppuVar23 = local_758;
                  for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *ppuVar23 = (undefined8 *)*puVar21;
                    puVar21 = puVar21 + 1;
                    ppuVar23 = ppuVar23 + 1;
                  }
                  local_758[0] = (undefined8 *)((double)fVar30 * (double)local_758[0]);
                  local_730 = (double)fVar43 * local_730;
                  local_708 = (double)fVar44 * local_708;
                  local_7d8._8_4_ = SUB84(dVar9,0);
                  local_7d8._0_8_ = 1.0 - (dVar32 * dVar5 + dVar7 * dVar31);
                  local_7d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                  local_7c0 = local_9f8;
                  local_7b8._8_4_ = SUB84(dVar8,0);
                  local_7b8._0_8_ = dVar31 * dVar6 - dVar5 * dVar36;
                  local_7b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  local_778 = 0.0;
                  dStack_770 = 0.0;
                  local_768 = 0.0;
                  local_760 = 0x3ff0000000000000;
                  FUN_1447fea8d(local_858,local_7d8);
                  puVar21 = local_858;
                  puVar18 = (undefined8 *)local_7d8;
                  for (lVar15 = 0x10; dVar7 = local_780, dVar6 = local_7a0, dVar5 = local_7a8,
                      dVar35 = local_7c0, dVar31 = local_7c8, lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar18 = *puVar21;
                    puVar21 = puVar21 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  uVar11 = local_7d8._8_8_;
                  local_7d8._8_8_ = local_7b8._0_8_;
                  local_7c8 = local_798;
                  local_7c0 = local_778;
                  local_7b8._0_8_ = uVar11;
                  local_7a8 = local_790;
                  local_7a0 = dStack_770;
                  local_798 = dVar31;
                  local_790 = dVar5;
                  local_780 = local_768;
                  local_778 = dVar35;
                  dStack_770 = dVar6;
                  local_768 = dVar7;
                  if (bVar10) {
                    FUN_1447fea8d(local_858,local_7d8,local_6d8);
                    puVar21 = local_858;
                    puVar18 = (undefined8 *)local_7d8;
                    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
                      *puVar18 = *puVar21;
                      puVar21 = puVar21 + 1;
                      puVar18 = puVar18 + 1;
                    }
                  }
                  uVar17 = uStack_8c0;
                  lVar15 = (longlong)(int)uStack_8c0;
                  uStack_8c0 = uStack_8c0 + 1;
                  if (uStack_8bc < uStack_8c0) {
                    FUN_140518214(&local_8c8,uVar17);
                  }
                  puVar21 = (undefined8 *)local_7d8;
                  puVar18 = (undefined8 *)(lVar15 * 0x80 + local_8c8);
                  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *puVar18 = *puVar21;
                    puVar21 = puVar21 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  iStack_8f0 = 1;
                  uVar17 = uStack_910;
                }
                else {
                  if (*(char *)(local_9e0 + 0x1c4) == '\x01') {
LAB_1481d48fe:
                    bVar10 = true;
                    uVar28 = (undefined4)DAT_14c8464f0;
                    uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    local_7a0 = DAT_14c8464e8;
                    local_9f8 = DAT_14c8464e0;
                    goto LAB_1481d4918;
                  }
LAB_1481d4d13:
                  iStack_8f0 = local_a04;
                }
                lVar15 = local_918;
                uVar14 = 0;
                if (uVar17 != 0) {
                  lVar26 = (longlong)(int)uVar17 * 0xf0;
                  lVar25 = local_918;
                  do {
                    FUN_1436a14f8(param_2,0,lVar25);
                    lVar25 = lVar25 + 0xf0;
                    lVar26 = lVar26 + -0xf0;
                    lVar15 = local_918;
                    uVar14 = uStack_910;
                  } while (lVar26 != 0);
                }
                local_994 = uStack_90c;
                local_9a8 = local_920;
                local_918 = 0;
                uStack_910 = 0;
                uStack_90c = 0;
                local_990 = CONCAT44(uStack_904,uStack_908);
                uStack_988 = uStack_900;
                uStack_980 = CONCAT22(uStack_8f6,CONCAT11(bStack_8f7,uStack_8f8));
                uStack_97c = CONCAT44(iStack_8f0,CONCAT22(uStack_8f2,uStack_8f4));
                uStack_968 = CONCAT44(local_8dc,uStack_8e0);
                local_970 = uStack_8e8;
                uStack_8e8 = 0;
                uStack_8e0 = 0;
                local_8dc = 0;
                local_960 = CONCAT44(uStack_8d4,uStack_8d8);
                uStack_958 = CONCAT44(uStack_8cc,uStack_8d0);
                local_950 = local_8c8;
                local_8c8 = 0;
                local_948 = uStack_8c0;
                local_944 = uStack_8bc;
                uStack_8c0 = 0;
                uStack_8bc = 0;
                local_940 = uStack_8b8;
                uStack_93c = (undefined4)uStack_8b4;
                uStack_938 = uStack_8b4._4_4_;
                uStack_934 = uStack_8ac;
                local_930 = local_8a8;
                local_8a8 = 0;
                local_9a0 = lVar15;
                local_998 = uVar14;
                FUN_147cee9b0(param_2,&local_9a8);
              }
              if (local_928 != 0) {
                LOCK();
                puVar1 = (uint *)(local_928 + 8);
                uVar17 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar17 & 0x3fffffff) == 1) {
                  FUN_144a54812();
                }
              }
            }
            FUN_1472aaabe(&local_920);
            lVar15 = local_9c8;
            lVar25 = local_9c0;
          }
          lVar25 = lVar25 + 1;
        } while (lVar25 < *(int *)(param_1 + 0x1b0));
      }
      FUN_144af0bce(&local_498);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_a98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d4e2a FUN_1481d4e2a body=121 status=ok
// SIG undefined FUN_1481d4e2a(void)

longlong FUN_1481d4e2a(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd8) = 0xff0000ffffffff;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x40c00f07;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xfc;
  FUN_141793e06();
  return param_1;
}



// FUNCTION 1481d4eb4 FUN_1481d4eb4 body=354 status=ok
// SIG undefined FUN_1481d4eb4(void)

void FUN_1481d4eb4(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  int local_48;
  undefined1 *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) goto LAB_1481d4f38;
  if ((longlong)(int)param_4[1] == 0) {
LAB_1481d4f2b:
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x10) == 0)) goto LAB_1481d4f38;
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    iVar4 = 0;
    do {
      if (*(longlong *)(*param_4 + lVar5) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(*param_4 + lVar5) + 0x10);
        if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
          bVar6 = false;
        }
        else {
          bVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
                  == lVar1 + 0x30;
        }
        iVar4 = iVar4 + (uint)bVar6;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_4[1] * 8 != lVar5);
    if (iVar4 == 0) goto LAB_1481d4f2b;
  }
  local_40 = *(undefined1 **)(lVar1 + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  FUN_1448097c4(&local_50,L"Niagara",&DAT_149dfb77a,1);
  FUN_1448097c4(&local_50,L"Properties",&DAT_149dfb77a,1);
  iVar3 = local_48 + -1;
  if (local_48 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(local_58,iVar3,local_50,1);
  local_40 = local_58;
  FUN_148125928(param_5,&local_34,&local_40,0);
  *(int *)(*param_5 + 8 + (longlong)local_34 * 0x14) = iVar4;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
LAB_1481d4f38:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d5018 FUN_1481d5018 body=189 status=ok
// SIG undefined FUN_1481d5018(void)

undefined8 FUN_1481d5018(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_144a84c36();
  plVar3 = (longlong *)FUN_144a78ede(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = FUN_1459d6a74();
    plVar3 = (longlong *)FUN_144a78ede(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) goto LAB_1481d504b;
  }
  else {
LAB_1481d504b:
    cVar1 = (**(code **)(*plVar3 + 0x110))(plVar3,param_2);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5d) == '\x01')) {
      (**(code **)(*param_2 + 8))(param_2,local_38);
      cVar1 = FUN_1481d079c(param_1 + 0x28,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      uVar2 = 1;
      if (cVar1 != '\0') goto LAB_1481d5067;
    }
  }
  uVar2 = 0;
LAB_1481d5067:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1481d50da FUN_1481d50da body=27 status=ok
// SIG undefined FUN_1481d50da(void)

void FUN_1481d50da(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  longlong *plStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  int iStack_70;
  undefined8 uStack_6c;
  int iStack_64;
  longlong lStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  lStack_100 = param_1;
  if ((*(uint *)(param_1 + 300) & 0x40) != 0) {
    if ((*(uint *)(param_1 + 300) & 4) == 0) {
      FUN_1481dafee();
      return;
    }
    uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
    uVar6 = 0;
    uStack_78 = 0;
    iStack_70 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_6c = 0xffffffff00000080;
    iStack_64 = 0;
    lStack_58 = 0;
    uStack_50 = 0;
    if (*param_2 == 0) {
      iVar7 = *(int *)(param_4 + 0xa0);
      uVar6 = 0;
    }
    else {
      do {
        uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar6 * 4);
        plStack_e8 = (longlong *)CONCAT44(plStack_e8._4_4_,uVar2);
        plVar4 = (longlong *)FUN_1481db6d2(&lStack_98,uVar2,&plStack_e8);
        lVar9 = plVar4[1];
        uVar3 = (int)lVar9 + 1;
        *(uint *)(plVar4 + 1) = uVar3;
        if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
          FUN_141838130(plVar4);
        }
        *(uint *)(*plVar4 + (longlong)(int)lVar9 * 4) = uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *param_2);
      uVar6 = (int)uStack_90 - iStack_64;
      iVar7 = *(int *)(param_4 + 0xa0);
      *(uint *)(param_4 + 0xa0) = iVar7 + uVar6;
      if ((uint)(*(int *)(param_4 + 0xa4) - iVar7) < uVar6) {
        FUN_1418382ec(param_4 + 0x40);
      }
    }
    lVar9 = param_4 + 0x40;
    if (*(longlong *)(param_4 + 0x98) != 0) {
      lVar9 = *(longlong *)(param_4 + 0x98);
    }
    memset((void *)((longlong)iVar7 * 0x58 + lVar9),0,(longlong)(int)uVar6 * 0x58);
    uVar3 = *param_2;
    iVar7 = uVar6 + *(int *)(param_4 + 0x18) + uVar3;
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (*(int *)(param_4 + 0x1c) < iVar7) {
      FUN_14480809c(param_4 + 0x10,iVar7);
      uVar3 = *param_2;
    }
    iVar5 = uVar3 + uVar6;
    iVar7 = *(int *)(param_4 + 0x28) + iVar5;
    if (-1 < iVar7) {
      if (*(int *)(param_4 + 0x2c) < iVar7) {
        FUN_14499148c(param_4 + 0x20,iVar7);
        iVar5 = *param_2 + uVar6;
      }
      iVar7 = *(int *)(param_4 + 0x38) + iVar5;
      if (-1 < iVar7) {
        if (*(int *)(param_4 + 0x3c) < iVar7) {
          FUN_14480809c(param_4 + 0x30,iVar7);
          iVar5 = uVar6 + *param_2;
        }
        iVar5 = iVar5 + *(int *)(param_4 + 8);
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (*(int *)(param_4 + 0xc) < iVar5) {
          FUN_14480809c(param_4);
        }
        uStack_b8 = &uStack_b9;
        plStack_e8 = &uStack_b8;
        FUN_1481dbc26(&lStack_98);
        FUN_1481dba7e(&lStack_98);
        uStack_b8 = (undefined1 *)0x100000000;
        uStack_a8 = 0xffffffff;
        iStack_a4 = 0;
        uStack_a0 = 0;
        iVar7 = 0;
        uStack_b0 = auStack_88;
        if (iStack_70 != 0) {
          FUN_1449c0562(&uStack_b8);
          iVar7 = iStack_70;
        }
        lVar9 = lStack_100;
        uStack_c8 = CONCAT44(uStack_9c,uStack_a0);
        uStack_d0 = uStack_a8;
        iStack_cc = iStack_a4;
        uStack_e0 = (undefined4)uStack_b8;
        uStack_dc = uStack_b8._4_4_;
        uStack_d8 = (undefined4)uStack_b0;
        uStack_d4 = uStack_b0._4_4_;
        plStack_e8 = &lStack_98;
        if ((iStack_a4 != iVar7) || (uStack_b0 != auStack_88)) {
          iVar5 = 0;
          do {
            lVar1 = *plStack_e8 + (longlong)iStack_cc * 0x20;
            puVar8 = (undefined8 *)(lVar1 + 8);
            FUN_144b37034(param_2,puVar8);
            uStack_f8 = *puVar8;
            uStack_f0 = *(undefined4 *)(lVar1 + 0x10);
            lStack_108 = param_4;
            FUN_141835d1c(lVar9,param_2,&uStack_f8,iVar5);
            iVar5 = iVar5 + 1;
            uStack_d0 = uStack_d0 & ~uStack_dc;
            FUN_1449c0562(&uStack_e0);
          } while (plStack_e8 != &lStack_98 ||
                   ((undefined1 *)CONCAT44(uStack_d4,uStack_d8) != auStack_88 || iStack_cc != iVar7)
                  );
        }
        uStack_50 = 0;
        if (lStack_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1481dc300(&lStack_98);
        if ((uStack_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar6 = 0;
  uStack_78 = 0;
  iStack_70 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_6c = 0xffffffff00000080;
  iStack_64 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  if (*param_2 == 0) {
    iVar7 = *(int *)(param_4 + 0xa0);
    uVar6 = 0;
  }
  else {
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)(int)uVar6 * 4);
      plStack_e8 = (longlong *)CONCAT44(plStack_e8._4_4_,uVar2);
      plVar4 = (longlong *)FUN_1481db6d2(&lStack_98,uVar2,&plStack_e8);
      lVar9 = plVar4[1];
      uVar3 = (int)lVar9 + 1;
      *(uint *)(plVar4 + 1) = uVar3;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar3) {
        FUN_141838130(plVar4);
      }
      *(uint *)(*plVar4 + (longlong)(int)lVar9 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *param_2);
    uVar6 = (int)uStack_90 - iStack_64;
    iVar7 = *(int *)(param_4 + 0xa0);
    *(uint *)(param_4 + 0xa0) = iVar7 + uVar6;
    if ((uint)(*(int *)(param_4 + 0xa4) - iVar7) < uVar6) {
      FUN_1418382ec(param_4 + 0x40);
    }
  }
  lVar9 = param_4 + 0x40;
  if (*(longlong *)(param_4 + 0x98) != 0) {
    lVar9 = *(longlong *)(param_4 + 0x98);
  }
  memset((void *)((longlong)iVar7 * 0x58 + lVar9),0,(longlong)(int)uVar6 * 0x58);
  uVar3 = *param_2;
  iVar7 = uVar6 + *(int *)(param_4 + 0x18) + uVar3;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (*(int *)(param_4 + 0x1c) < iVar7) {
    FUN_14480809c(param_4 + 0x10,iVar7);
    uVar3 = *param_2;
  }
  iVar5 = uVar3 + uVar6;
  iVar7 = *(int *)(param_4 + 0x28) + iVar5;
  if (-1 < iVar7) {
    if (*(int *)(param_4 + 0x2c) < iVar7) {
      FUN_14499148c(param_4 + 0x20,iVar7);
      iVar5 = *param_2 + uVar6;
    }
    iVar7 = *(int *)(param_4 + 0x38) + iVar5;
    if (-1 < iVar7) {
      if (*(int *)(param_4 + 0x3c) < iVar7) {
        FUN_14480809c(param_4 + 0x30,iVar7);
        iVar5 = uVar6 + *param_2;
      }
      iVar5 = iVar5 + *(int *)(param_4 + 8);
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)(param_4 + 0xc) < iVar5) {
        FUN_14480809c(param_4);
      }
      uStack_b8 = &uStack_b9;
      plStack_e8 = &uStack_b8;
      FUN_1481dbc26(&lStack_98);
      FUN_1481dba7e(&lStack_98);
      uStack_b8 = (undefined1 *)0x100000000;
      uStack_a8 = 0xffffffff;
      iStack_a4 = 0;
      uStack_a0 = 0;
      iVar7 = 0;
      uStack_b0 = auStack_88;
      if (iStack_70 != 0) {
        FUN_1449c0562(&uStack_b8);
        iVar7 = iStack_70;
      }
      lVar9 = lStack_100;
      uStack_c8 = CONCAT44(uStack_9c,uStack_a0);
      uStack_d0 = uStack_a8;
      iStack_cc = iStack_a4;
      uStack_e0 = (undefined4)uStack_b8;
      uStack_dc = uStack_b8._4_4_;
      uStack_d8 = (undefined4)uStack_b0;
      uStack_d4 = uStack_b0._4_4_;
      plStack_e8 = &lStack_98;
      if ((iStack_a4 != iVar7) || (uStack_b0 != auStack_88)) {
        iVar5 = 0;
        do {
          lVar1 = *plStack_e8 + (longlong)iStack_cc * 0x20;
          puVar8 = (undefined8 *)(lVar1 + 8);
          FUN_144b37034(param_2,puVar8);
          uStack_f8 = *puVar8;
          uStack_f0 = *(undefined4 *)(lVar1 + 0x10);
          lStack_108 = param_4;
          FUN_1418370b6(lVar9,param_2,&uStack_f8,iVar5);
          iVar5 = iVar5 + 1;
          uStack_d0 = uStack_d0 & ~uStack_dc;
          FUN_1449c0562(&uStack_e0);
        } while (plStack_e8 != &lStack_98 ||
                 ((undefined1 *)CONCAT44(uStack_d4,uStack_d8) != auStack_88 || iStack_cc != iVar7));
      }
      uStack_50 = 0;
      if (lStack_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1481dc300(&lStack_98);
      if ((uStack_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1481d50f6 FUN_1481d50f6 body=38 status=ok
// SIG undefined FUN_1481d50f6(void)

undefined8 FUN_1481d50f6(undefined8 param_1,int param_2)

{
  FUN_14006c2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481d5130 FUN_1481d5130 body=52 status=ok
// SIG undefined FUN_1481d5130(void)

undefined8 * FUN_1481d5130(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_14ae09a28;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481d5166 FUN_1481d5166 body=38 status=ok
// SIG undefined FUN_1481d5166(void)

undefined8 FUN_1481d5166(undefined8 param_1,int param_2)

{
  FUN_140137a40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481d5192 FUN_1481d5192 body=108 status=ok
// SIG undefined FUN_1481d5192(void)

void FUN_1481d5192(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_144769b64(param_2,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_2),*(void **)(param_1 + 0x100),
           (longlong)(int)uVar1 << 3);
    return;
  }
  return;
}



// FUNCTION 1481d524a FUN_1481d524a body=59 status=ok
// SIG undefined FUN_1481d524a(void)

undefined8 FUN_1481d524a(longlong *param_1)

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



// FUNCTION 1481d52fc FUN_1481d52fc body=44 status=ok
// SIG undefined FUN_1481d52fc(void)

void FUN_1481d52fc(undefined8 param_1,longlong *param_2)

{
  FUN_1406fc1fc(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481d533e FUN_1481d533e body=54 status=ok
// SIG undefined FUN_1481d533e(void)

undefined1 FUN_1481d533e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14806039a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1481d539c FUN_1481d539c body=59 status=ok
// SIG undefined FUN_1481d539c(void)

undefined8 FUN_1481d539c(longlong *param_1)

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



// FUNCTION 1481d543a FUN_1481d543a body=48 status=ok
// SIG undefined FUN_1481d543a(void)

void FUN_1481d543a(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1406fc1fc(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1481d546a FUN_1481d546a body=54 status=ok
// SIG undefined FUN_1481d546a(void)

void FUN_1481d546a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 1481d54a0 FUN_1481d54a0 body=44 status=ok
// SIG undefined FUN_1481d54a0(void)

void FUN_1481d54a0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 1481d5532 FUN_1481d5532 body=59 status=ok
// SIG undefined FUN_1481d5532(void)

undefined8 FUN_1481d5532(longlong *param_1)

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



// FUNCTION 1481d565a FUN_1481d565a body=59 status=ok
// SIG undefined FUN_1481d565a(void)

undefined8 FUN_1481d565a(longlong *param_1)

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



// FUNCTION 1481d56fc FUN_1481d56fc body=58 status=ok
// SIG undefined FUN_1481d56fc(void)

void FUN_1481d56fc(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1481d5756 FUN_1481d5756 body=92 status=ok
// SIG undefined FUN_1481d5756(void)

undefined8 FUN_1481d5756(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 0x18 + lVar3;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined8 *)(lVar2 + -8) = puVar1[2];
      FUN_1481d5918();
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481d57da FUN_1481d57da body=190 status=ok
// SIG undefined FUN_1481d57da(void)

void FUN_1481d57da(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar2 = *param_2;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
  uVar1 = *(undefined1 *)((longlong)puVar6 + 10);
  uVar4 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,(short)puVar6[1]);
  uVar5 = FUN_144a78877(uVar5,uVar1);
  FUN_144a78877(uVar5,((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d58a4 FUN_1481d58a4 body=38 status=ok
// SIG undefined FUN_1481d58a4(void)

void FUN_1481d58a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1481d5918 FUN_1481d5918 body=89 status=ok
// SIG undefined FUN_1481d5918(void)

undefined8 * FUN_1481d5918(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145cec054(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d5a48 FUN_1481d5a48 body=59 status=ok
// SIG undefined FUN_1481d5a48(void)

undefined8 FUN_1481d5a48(longlong *param_1)

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



// FUNCTION 1481d5a94 FUN_1481d5a94 body=38 status=ok
// SIG undefined FUN_1481d5a94(void)

void FUN_1481d5a94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14006c2ae(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1481d5b0a FUN_1481d5b0a body=62 status=ok
// SIG undefined FUN_1481d5b0a(void)

void FUN_1481d5b0a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481d5b48(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481d5b48 FUN_1481d5b48 body=93 status=ok
// SIG undefined FUN_1481d5b48(void)

ulonglong FUN_1481d5b48(uint param_1,uint param_2)

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



// FUNCTION 1481d5c12 FUN_1481d5c12 body=59 status=ok
// SIG undefined FUN_1481d5c12(void)

undefined8 FUN_1481d5c12(longlong *param_1)

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



// FUNCTION 1481d5d20 FUN_1481d5d20 body=59 status=ok
// SIG undefined FUN_1481d5d20(void)

undefined8 FUN_1481d5d20(longlong *param_1)

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



// FUNCTION 1481d5e46 FUN_1481d5e46 body=59 status=ok
// SIG undefined FUN_1481d5e46(void)

undefined8 FUN_1481d5e46(longlong *param_1)

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



// FUNCTION 1481d5f2c FUN_1481d5f2c body=70 status=ok
// SIG undefined FUN_1481d5f2c(void)

undefined8 FUN_1481d5f2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1481d6054(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481d5f9a FUN_1481d5f9a body=59 status=ok
// SIG undefined FUN_1481d5f9a(void)

undefined8 FUN_1481d5f9a(longlong *param_1)

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



// FUNCTION 1481d5fe0 FUN_1481d5fe0 body=38 status=ok
// SIG undefined FUN_1481d5fe0(void)

void FUN_1481d5fe0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1481d6054 FUN_1481d6054 body=89 status=ok
// SIG undefined FUN_1481d6054(void)

undefined8 * FUN_1481d6054(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481d60ae(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d60ae FUN_1481d60ae body=115 status=ok
// SIG undefined FUN_1481d60ae(void)

void FUN_1481d60ae(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481d621c FUN_1481d621c body=59 status=ok
// SIG undefined FUN_1481d621c(void)

undefined8 FUN_1481d621c(longlong *param_1)

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



// FUNCTION 1481d62f2 FUN_1481d62f2 body=86 status=ok
// SIG undefined FUN_1481d62f2(void)

undefined1 FUN_1481d62f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x10);
    puVar3 = (undefined8 *)(param_2 + 0x10);
    for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x80;
    param_3 = param_3 + 0x80;
  }
  return 1;
}



// FUNCTION 1481d6370 FUN_1481d6370 body=59 status=ok
// SIG undefined FUN_1481d6370(void)

undefined8 FUN_1481d6370(longlong *param_1)

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



// FUNCTION 1481d63bc FUN_1481d63bc body=43 status=ok
// SIG undefined FUN_1481d63bc(void)

void FUN_1481d63bc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x10] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1481d6474 FUN_1481d6474 body=47 status=ok
// SIG undefined FUN_1481d6474(void)

void FUN_1481d6474(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481d64ba FUN_1481d64ba body=81 status=ok
// SIG undefined FUN_1481d64ba(void)

undefined8 FUN_1481d64ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405d56d0(param_2,param_3);
    FUN_1405d5728(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1481d6534 FUN_1481d6534 body=59 status=ok
// SIG undefined FUN_1481d6534(void)

undefined8 FUN_1481d6534(longlong *param_1)

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



// FUNCTION 1481d65d2 FUN_1481d65d2 body=51 status=ok
// SIG undefined FUN_1481d65d2(void)

void FUN_1481d65d2(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1481d667a FUN_1481d667a body=59 status=ok
// SIG undefined FUN_1481d667a(void)

undefined8 FUN_1481d667a(longlong *param_1)

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



// FUNCTION 1481d6796 FUN_1481d6796 body=59 status=ok
// SIG undefined FUN_1481d6796(void)

undefined8 FUN_1481d6796(longlong *param_1)

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



// FUNCTION 1481d6858 FUN_1481d6858 body=101 status=ok
// SIG undefined FUN_1481d6858(void)

undefined1 FUN_1481d6858(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1481d68e6 FUN_1481d68e6 body=59 status=ok
// SIG undefined FUN_1481d68e6(void)

undefined8 FUN_1481d68e6(longlong *param_1)

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



// FUNCTION 1481d69ec FUN_1481d69ec body=59 status=ok
// SIG undefined FUN_1481d69ec(void)

undefined8 FUN_1481d69ec(longlong *param_1)

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



// FUNCTION 1481d6adc FUN_1481d6adc body=54 status=ok
// SIG undefined FUN_1481d6adc(void)

undefined1 FUN_1481d6adc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481d6bee(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1481d6b3a FUN_1481d6b3a body=59 status=ok
// SIG undefined FUN_1481d6b3a(void)

undefined8 FUN_1481d6b3a(longlong *param_1)

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



// FUNCTION 1481d6b80 FUN_1481d6b80 body=32 status=ok
// SIG undefined FUN_1481d6b80(void)

void FUN_1481d6b80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1414f3614(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1481d6bee FUN_1481d6bee body=82 status=ok
// SIG undefined FUN_1481d6bee(void)

longlong FUN_1481d6bee(longlong param_1,longlong param_2)

{
  FUN_1481d6c40();
  FUN_1481d6c96(param_1 + 0x10,param_2 + 0x10);
  FUN_1481d6cf0(param_1 + 0x20,param_2 + 0x20);
  FUN_1481d6d4a(param_1 + 0x30,param_2 + 0x30);
  FUN_1481d6d9a(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1481d6c40 FUN_1481d6c40 body=85 status=ok
// SIG undefined FUN_1481d6c40(void)

undefined8 * FUN_1481d6c40(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481d6df2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x2c);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d6c96 FUN_1481d6c96 body=89 status=ok
// SIG undefined FUN_1481d6c96(void)

undefined8 * FUN_1481d6c96(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481d6e62(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d6cf0 FUN_1481d6cf0 body=89 status=ok
// SIG undefined FUN_1481d6cf0(void)

undefined8 * FUN_1481d6cf0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481d6ed6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d6d4a FUN_1481d6d4a body=79 status=ok
// SIG undefined FUN_1481d6d4a(void)

undefined8 * FUN_1481d6d4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481d6f4a(param_1,iVar1);
      FUN_1481d6fac(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1481d6d9a FUN_1481d6d9a body=88 status=ok
// SIG undefined FUN_1481d6d9a(void)

undefined8 * FUN_1481d6d9a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481d7008(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481d6df2 FUN_1481d6df2 body=111 status=ok
// SIG undefined FUN_1481d6df2(void)

void FUN_1481d6df2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
    iVar2 = (int)(uVar1 / 0x2c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x2c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481d6e62 FUN_1481d6e62 body=115 status=ok
// SIG undefined FUN_1481d6e62(void)

void FUN_1481d6e62(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481d6ed6 FUN_1481d6ed6 body=115 status=ok
// SIG undefined FUN_1481d6ed6(void)

void FUN_1481d6ed6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481d6f4a FUN_1481d6f4a body=98 status=ok
// SIG undefined FUN_1481d6f4a(void)

void FUN_1481d6f4a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1481d6fac FUN_1481d6fac body=92 status=ok
// SIG undefined FUN_1481d6fac(void)

void FUN_1481d6fac(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1481d7008 FUN_1481d7008 body=98 status=ok
// SIG undefined FUN_1481d7008(void)

void FUN_1481d7008(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481d706c FUN_1481d706c body=112 status=ok
// SIG undefined FUN_1481d706c(void)

void FUN_1481d706c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 6,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 6)) {
      uVar2 = uVar1 / 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,6,2);
  }
  return;
}



// FUNCTION 1481d70dc FUN_1481d70dc body=96 status=ok
// SIG undefined FUN_1481d70dc(void)

void FUN_1481d70dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 1481d713c FUN_1481d713c body=96 status=ok
// SIG undefined FUN_1481d713c(void)

void FUN_1481d713c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 1481d71a0 FUN_1481d71a0 body=132 status=ok
// SIG undefined FUN_1481d71a0(void)

void FUN_1481d71a0(longlong param_1,int param_2)

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



// FUNCTION 1481d7226 FUN_1481d7226 body=62 status=ok
// SIG undefined FUN_1481d7226(void)

void FUN_1481d7226(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481d7264(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1481d7264 FUN_1481d7264 body=93 status=ok
// SIG undefined FUN_1481d7264(void)

ulonglong FUN_1481d7264(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1481d72c2 FUN_1481d72c2 body=113 status=ok
// SIG undefined FUN_1481d72c2(void)

void FUN_1481d72c2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 1481d7334 FUN_1481d7334 body=96 status=ok
// SIG undefined FUN_1481d7334(void)

void FUN_1481d7334(longlong param_1,int param_2)

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



// FUNCTION 1481d7394 FUN_1481d7394 body=58 status=ok
// SIG undefined FUN_1481d7394(void)

undefined8 FUN_1481d7394(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(longlong *)(param_1 + lVar1) != *(longlong *)(param_2 + lVar1)) ||
          (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) ||
         (*(int *)(param_1 + 0xc + lVar1) != *(int *)(param_2 + 0xc + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1481d73ce FUN_1481d73ce body=62 status=ok
// SIG undefined FUN_1481d73ce(void)

void FUN_1481d73ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481d740c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1481d740c FUN_1481d740c body=93 status=ok
// SIG undefined FUN_1481d740c(void)

ulonglong FUN_1481d740c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1481d746a FUN_1481d746a body=147 status=ok
// SIG undefined FUN_1481d746a(void)

void FUN_1481d746a(longlong param_1,int param_2)

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



// FUNCTION 1481d74fe FUN_1481d74fe body=68 status=ok
// SIG undefined FUN_1481d74fe(void)

void FUN_1481d74fe(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1481d7542(param_1);
  return;
}



// FUNCTION 1481d7542 FUN_1481d7542 body=476 status=ok
// SIG undefined FUN_1481d7542(void)

void FUN_1481d7542(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1481d7720 FUN_1481d7720 body=90 status=ok
// SIG undefined FUN_1481d7720(void)

void FUN_1481d7720(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1481d777a();
  return;
}



// FUNCTION 1481d777a FUN_1481d777a body=114 status=ok
// SIG undefined FUN_1481d777a(void)

void FUN_1481d777a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1481d77ec FUN_1481d77ec body=344 status=ok
// SIG undefined FUN_1481d77ec(void)

undefined4 * FUN_1481d77ec(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481d7946(local_40);
  uVar1 = *(undefined8 *)*param_2;
  *local_38 = uVar1;
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar9 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1481d7a54(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb424b8 - DAT_14cb424e4;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb424f8)) {
      uVar9 = DAT_14cb424f8 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      puVar6 = DAT_14cb424f0;
      if (DAT_14cb424f0 == (undefined *)0x0) {
        puVar6 = &DAT_14cb424e8;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb424f8 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14cb424f0;
      if (DAT_14cb424f0 == (undefined *)0x0) {
        puVar6 = &DAT_14cb424e8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb424f8 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb424f8 = iVar8;
      FUN_1481d7542(&DAT_14cb424b0);
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d7946 FUN_1481d7946 body=269 status=ok
// SIG undefined FUN_1481d7946(void)

int * FUN_1481d7946(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb424e0;
  iVar4 = DAT_14cb424b8;
  if (DAT_14cb424e4 == 0) {
    iVar2 = DAT_14cb424b8 + 1;
    bVar7 = DAT_14cb424bc == DAT_14cb424b8;
    DAT_14cb424b8 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb424b0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb424c0,1);
    puVar3 = DAT_14cb424d0;
    if (DAT_14cb424d0 == (undefined *)0x0) {
      puVar3 = &DAT_14cb424c0;
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
    lVar6 = (longlong)DAT_14cb424e0;
    DAT_14cb424e0 = *(int *)(DAT_14cb424b0 + 4 + lVar6 * 0x20);
    DAT_14cb424e4 = DAT_14cb424e4 + -1;
    iVar4 = iVar2;
    if (DAT_14cb424e4 != 0) {
      *(undefined4 *)(DAT_14cb424b0 + (longlong)DAT_14cb424e0 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb424c0;
  if (DAT_14cb424d0 != (undefined *)0x0) {
    puVar3 = DAT_14cb424d0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb424b0;
  return param_1;
}



// FUNCTION 1481d7a54 FUN_1481d7a54 body=159 status=ok
// SIG undefined FUN_1481d7a54(void)

undefined8 FUN_1481d7a54(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  
  if ((DAT_14cb424b8 - DAT_14cb424e4 != 1) && (DAT_14cb424b8 != DAT_14cb424e4)) {
    puVar7 = &DAT_14cb424e8;
    if (DAT_14cb424f0 != (undefined *)0x0) {
      puVar7 = DAT_14cb424f0;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14cb424f8 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14cb424b0 + (longlong)iVar6 * 0x20);
        if (*(longlong *)(DAT_14cb424b0 + (longlong)iVar6 * 0x20) == *param_2) {
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1481d777a(&DAT_14cb424b0,*param_3);
          *param_3 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481d7af4 FUN_1481d7af4 body=204 status=ok
// SIG undefined FUN_1481d7af4(void)

void FUN_1481d7af4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1481d7b47;
    }
  }
  lVar2 = 0;
LAB_1481d7b47:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1481d7de8(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481d7bd6 FUN_1481d7bd6 body=75 status=ok
// SIG undefined FUN_1481d7bd6(void)

void FUN_1481d7bd6(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1481d7c22 FUN_1481d7c22 body=132 status=ok
// SIG undefined FUN_1481d7c22(void)

void FUN_1481d7c22(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1481d7de8 FUN_1481d7de8 body=450 status=ok
// SIG undefined FUN_1481d7de8(void)

void FUN_1481d7de8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1481d7f08:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1481d7f20;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1481d7f08;
LAB_1481d7f20:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 0x28);
          *(uint *)(param_3 + 0x28) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x2c) < iVar3 + 1U) {
            FUN_1481d7fac(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0x20);
          if (*(longlong *)(param_3 + 0x20) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481d7fac FUN_1481d7fac body=110 status=ok
// SIG undefined FUN_1481d7fac(void)

void FUN_1481d7fac(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1481d7c22(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481d801c FUN_1481d801c body=48 status=ok
// SIG undefined FUN_1481d801c(void)

void FUN_1481d801c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1481d804c FUN_1481d804c body=132 status=ok
// SIG undefined FUN_1481d804c(void)

void FUN_1481d804c(longlong param_1,int param_2)

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



// FUNCTION 1481d80d2 FUN_1481d80d2 body=62 status=ok
// SIG undefined FUN_1481d80d2(void)

void FUN_1481d80d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481d8110(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1481d8110 FUN_1481d8110 body=93 status=ok
// SIG undefined FUN_1481d8110(void)

ulonglong FUN_1481d8110(uint param_1,uint param_2)

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



// FUNCTION 1481d816e FUN_1481d816e body=56 status=ok
// SIG undefined FUN_1481d816e(void)

undefined8 * FUN_1481d816e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae0ead0;
  FUN_144725486();
  FUN_1464785b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481d81a6 FUN_1481d81a6 body=38 status=ok
// SIG undefined FUN_1481d81a6(void)

undefined8 FUN_1481d81a6(undefined8 param_1,int param_2)

{
  FUN_1464785b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


