// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405a650f FUN_1405a650f body=26 status=ok
// SIG undefined FUN_1405a650f(void)

void FUN_1405a650f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1405a652a FUN_1405a652a body=88 status=ok
// SIG undefined FUN_1405a652a(void)

undefined8 * FUN_1405a652a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405a6a5a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405a6582 FUN_1405a6582 body=93 status=ok
// SIG undefined FUN_1405a6582(void)

undefined8 * FUN_1405a6582(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400e1c6c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405a6b3e(param_1,iVar1);
      FUN_1405a67a4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1405a65e0 FUN_1405a65e0 body=146 status=ok
// SIG undefined FUN_1405a65e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405a65e0(ushort *param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  if (((short)uVar1 < 0) || (*(int *)(DAT_14cb7f870 + 0x3c8) <= (int)(short)uVar1)) {
    puVar2 = &DAT_14cb7ee80;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7ee90) {
      FUN_144b3d300(&DAT_14cb7ee90);
      if (DAT_14cb7ee90 == -1) {
        DAT_14cb7ee80 = 0;
        _DAT_14cb7ee88 = 0;
        atexit(FUN_143d66c5d);
        _Init_thread_footer(&DAT_14cb7ee90);
      }
    }
  }
  else {
    puVar2 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3c0));
  }
  return puVar2;
}



// FUNCTION 1405a6672 FUN_1405a6672 body=147 status=ok
// SIG undefined FUN_1405a6672(void)

undefined8 * FUN_1405a6672(longlong param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 2);
  if (((short)uVar1 < 0) || (*(int *)(DAT_14cb7f870 + 0x3d8) <= (int)(short)uVar1)) {
    puVar2 = &DAT_14cb7ee98;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7eea8) {
      FUN_144b3d300(&DAT_14cb7eea8);
      if (DAT_14cb7eea8 == -1) {
        DAT_14cb7ee98 = 0;
        uRam000000014cb7eea0 = 0;
        atexit((_func_5014 *)&LAB_143d66c8e);
        _Init_thread_footer(&DAT_14cb7eea8);
      }
    }
  }
  else {
    puVar2 = (undefined8 *)((ulonglong)uVar1 * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3d0));
  }
  return puVar2;
}



// FUNCTION 1405a6706 FUN_1405a6706 body=158 status=ok
// SIG undefined FUN_1405a6706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405a6706(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x3b8) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f950;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f968) {
      FUN_144b3d300(&DAT_14cb7f968);
      if (DAT_14cb7f968 == -1) {
        _DAT_14cb7f950 = 0;
        DAT_14cb7f958 = 0;
        _DAT_14cb7f960 = 0;
        atexit(FUN_143d6a75e);
        _Init_thread_footer(&DAT_14cb7f968);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)((uint)param_1 * 0x18) + *(longlong *)(DAT_14cb7f870 + 0x3b0))
    ;
  }
  return puVar1;
}



// FUNCTION 1405a67a4 FUN_1405a67a4 body=219 status=ok
// SIG undefined FUN_1405a67a4(void)

void FUN_1405a67a4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    do {
      puVar6[-5] = *param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *(undefined4 *)(param_2 + 2);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar6 + -0x1c) = uVar3;
      *(undefined4 *)(puVar6 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -0x14) = uVar5;
      puVar6[-2] = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar6 + -1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + -4) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + -2,iVar1,0);
        memcpy((void *)puVar6[-2],_Src,(longlong)iVar1 * 2);
      }
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 6);
      uVar2 = param_2[5];
      *(int *)(puVar6 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1405a690c(puVar6,iVar1,0);
        FUN_1405a687f(*puVar6,uVar2);
      }
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 7);
      puVar6[3] = param_2[8];
      param_2 = param_2 + 9;
      puVar6 = puVar6 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405a687f FUN_1405a687f body=140 status=ok
// SIG undefined FUN_1405a687f(void)

void FUN_1405a687f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined ***)(param_1 + lVar3) = &PTR_FUN_14b11c3c0;
      puVar1 = (undefined8 *)(param_1 + 8 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = 0;
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      uVar2 = FUN_14477b664(*(undefined8 *)(param_2 + 0x10 + lVar3));
      uVar2 = FUN_14477b664(uVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar3) = uVar2;
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
      *(undefined4 *)(param_1 + 0x20 + lVar3) = *(undefined4 *)(param_2 + 0x20 + lVar3);
      lVar3 = lVar3 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405a690c FUN_1405a690c body=334 status=ok
// SIG undefined FUN_1405a690c(void)

void FUN_1405a690c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405a697e;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1405a697e:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405a6a5a FUN_1405a6a5a body=228 status=ok
// SIG undefined FUN_1405a6a5a(void)

void FUN_1405a6a5a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405a6b3e FUN_1405a6b3e body=334 status=ok
// SIG undefined FUN_1405a6b3e(void)

void FUN_1405a6b3e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405a6bb0;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1405a6bb0:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405a6c8c FUN_1405a6c8c body=373 status=ok
// SIG undefined FUN_1405a6c8c(void)

void FUN_1405a6c8c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405a6d15;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405a6d15:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1405a6e02 FUN_1405a6e02 body=373 status=ok
// SIG undefined FUN_1405a6e02(void)

void FUN_1405a6e02(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x48;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405a6e8b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405a6e8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1405a6f78 FUN_1405a6f78 body=428 status=ok
// SIG undefined FUN_1405a6f78(void)

void FUN_1405a6f78(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140e9549c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1406fba42(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x50 + lVar2 + -0x4c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x14;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1405a7124 FUN_1405a7124 body=812 status=ok
// SIG undefined FUN_1405a7124(void)

void FUN_1405a7124(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar15,4);
    if (0 < (int)uVar15) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar15 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
    }
    iVar18 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar17 = local_50;
    plVar9 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_70 = plVar9;
        lVar14 = *param_1;
        lVar11 = *(longlong *)(lVar14 + 8 + (longlong)iVar8 * 0x50);
        local_74 = iVar17;
        if (lVar11 == 0) {
          lVar11 = FUN_1407ad36c();
        }
        puVar12 = (undefined8 *)(lVar14 + (longlong)iVar8 * 0x50);
        uVar3 = *puVar12;
        uVar6 = FUN_14477b664(lVar11);
        uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = uVar7 >> 0x10 ^ uVar7;
        uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar10 = (uint)uVar3 & 0xffff;
        uVar5 = uVar7 >> 0xd ^
                (((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) - uVar7;
        uVar10 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
        uVar13 = uVar10 >> 0xd ^ (uVar7 - uVar5) - uVar10;
        uVar5 = uVar13 >> 0xc ^ (uVar5 - uVar10) - uVar13;
        uVar7 = uVar5 << 0x10 ^ (uVar10 - uVar13) - uVar5;
        uVar10 = uVar7 >> 5 ^ (uVar13 - uVar5) - uVar7;
        uVar13 = uVar10 >> 3 ^ (uVar5 - uVar7) - uVar10;
        uVar5 = uVar13 << 10 ^ (uVar7 - uVar10) - uVar13;
        uVar6 = (longlong)(int)(uVar5 >> 0xf ^ uVar10 - (uVar13 + uVar5)) &
                (longlong)(int)param_1[9] - 1U;
        iVar17 = (int)uVar6;
        *(int *)((longlong)puVar12 + 0x4c) = iVar17;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar12 + 9) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8
        ;
        uVar15 = uVar15 & ~(uint)uVar16;
        plVar9 = (longlong *)local_70[2];
        if ((longlong *)local_70[2] == (longlong *)0x0) {
          plVar9 = local_70;
        }
        iVar2 = (int)local_70[3];
        lVar14 = (longlong)iVar18;
        uVar5 = *(uint *)((longlong)plVar9 + lVar14 * 4) & uVar15;
        iVar17 = local_74;
        if (uVar5 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar18) {
            iVar4 = iVar18;
          }
          if (iVar8 <= iVar18) break;
          lVar11 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar11 * 4 + lVar14 * 4 + 4);
            if (uVar5 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar4 - lVar14 == lVar11) goto LAB_1405a7413;
          }
          iVar18 = iVar18 + (int)lVar11 + 1;
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar6 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        plVar9 = local_70;
      } while (iVar8 < iVar2);
    }
  }
LAB_1405a7413:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a7458 FUN_1405a7458 body=57 status=ok
// SIG undefined FUN_1405a7458(void)

void FUN_1405a7458(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23130 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23130 = FUN_140002ddd(FUN_14643cc9b,uVar1,L"GpsTest_Distance");
  }
  return;
}



// FUNCTION 1405a7492 FUN_1405a7492 body=528 status=ok
// SIG undefined FUN_1405a7492(void)

void FUN_1405a7492(longlong param_1,uint *param_2,float param_3)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2[1] == 0) {
LAB_1405a7695:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar2 = *param_2;
    plVar3 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_2[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1405a7695;
      plVar3 = (longlong *)*puVar4;
    }
  }
  (**(code **)(*plVar3 + 0x628))(plVar3,&local_58);
  dVar5 = *(double *)(param_2 + 6);
  dVar1 = *(double *)(param_2 + 4);
  *(double *)(param_1 + 0x28) = *(double *)(param_2 + 2) + local_58;
  *(double *)(param_1 + 0x30) = dVar1 + local_50;
  *(double *)(param_1 + 0x38) = dVar5 + local_48;
  dVar5 = *(double *)(param_2 + 0xc);
  dVar1 = *(double *)(param_2 + 10);
  *(double *)(param_1 + 0x40) = local_58 + *(double *)(param_2 + 8);
  *(double *)(param_1 + 0x48) = local_50 + dVar1;
  *(double *)(param_1 + 0x50) = local_48 + dVar5;
  if (param_2[1] != 0) {
    uVar2 = *param_2;
    plVar3 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1405a75cb;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_2[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      plVar3 = (longlong *)*puVar4;
      goto LAB_1405a75cb;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1405a75cb:
  (**(code **)(*plVar3 + 0x328))(local_48 + dVar5,&local_70);
  dVar5 = (double)param_3;
  *(double *)(param_1 + 0x28) = *(double *)(param_1 + 0x28) - ABS(dVar5 * local_70);
  *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x30) - ABS(local_68 * dVar5);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x38) - ABS(local_60 * dVar5);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) + ABS(dVar5 * local_70);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x48) + ABS(local_68 * dVar5);
  *(double *)(param_1 + 0x50) = *(double *)(param_1 + 0x50) + ABS(local_60 * dVar5);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a76a4 FUN_1405a76a4 body=103 status=ok
// SIG undefined FUN_1405a76a4(void)

undefined8 * FUN_1405a76a4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + 0x3b0);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_1405a77a8(lVar1,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1405a770c FUN_1405a770c body=155 status=ok
// SIG undefined FUN_1405a770c(void)

bool FUN_1405a770c(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 3);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0x1c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if (((*(longlong *)(lVar4 + 0x30) != 0) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) != 0)) &&
         (cVar2 = (**(code **)(*param_1 + 0x58))(param_1), cVar2 != '\0')) {
        if (*(char *)(param_1[0xf] + 0x28) != '\0') {
          return true;
        }
        return 0 < (int)param_1[0xd];
      }
    }
  }
  return false;
}



// FUNCTION 1405a77a8 FUN_1405a77a8 body=418 status=ok
// SIG undefined FUN_1405a77a8(void)

longlong * FUN_1405a77a8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x688);
  if (lVar4 != 0) goto LAB_1405a77d2;
  plVar5 = (longlong *)FUN_14001cc68(0xc0);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b420580;
  plVar7 = plVar5 + 2;
  memset(plVar7,0,0xb0);
  FUN_14572380c(plVar7);
  local_38 = plVar7;
  local_30 = plVar5;
  FUN_14572387e(&local_38,plVar7);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x688) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x690);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x690) = 0;
LAB_1405a78ea:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001405a7917:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x688) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x690);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x0001405a7917;
      }
    }
    else {
      *(longlong **)(param_1 + 0x690) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_1405a78ea;
    }
  }
  plVar7 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x688);
  uVar6 = FUN_1447210f0(param_1);
  FUN_145723920(uVar3,uVar6,param_1);
  lVar4 = *(longlong *)(param_1 + 0x688);
LAB_1405a77d2:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x690);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a798a FUN_1405a798a body=364 status=ok
// SIG undefined FUN_1405a798a(void)

void FUN_1405a798a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
      (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0x3f0) != 0)) {
    uVar5 = FUN_14011c706(param_2);
    lVar6 = param_1 + 0x28;
    FUN_14485c47a(lVar6,uVar5);
    cVar4 = FUN_144729dda(lVar6);
    if (cVar4 != '\0') {
      iVar1 = *(int *)(param_2 + 0x578);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_2 + 0x570);
        lVar7 = 0;
        do {
          if ((*(int *)(lVar2 + 8 + lVar7) != 0) &&
             (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
            cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
            if (cVar4 != '\0') goto LAB_1405a7a8e;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar7);
      }
      local_58 = FUN_1460db2ba;
      local_50 = 0;
      FUN_145723bd6(local_48,param_1);
      FUN_141332804(param_2 + 0x570,&local_58,local_48);
      FUN_1449db362(local_48);
LAB_1405a7a8e:
      uVar5 = FUN_14103c0a0(param_2);
      FUN_14485c47a(param_1 + 0x30,uVar5);
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (lVar2 != 0) {
        lVar6 = FUN_14479d2ce(lVar6);
        FUN_14485c47a(lVar2 + 0x34,lVar6);
        if (lVar6 != 0) {
          FUN_14011c8a2(lVar6,lVar2);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a7af8 FUN_1405a7af8 body=468 status=ok
// SIG undefined FUN_1405a7af8(void)

byte FUN_1405a7af8(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    bVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1405a7bdf;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x24) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar7 = *puVar4;
      }
      else {
        uVar7 = 0;
      }
      plVar5 = (longlong *)FUN_1401b2ade(uVar7);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb61cd0 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1463b31ae;
          local_48 = &LAB_1486dca4f;
          local_50 = &LAB_1464f50a6;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
              DAT_14cb61cd0 + 0x30)) || (plVar5[0x73] == 0)) ||
           ((*(byte *)(plVar5[0x73] + 0x39a) & 8) == 0)) {
          bVar3 = 0;
        }
        else {
          lVar6 = FUN_144a7ba4c(plVar5);
          if (lVar6 == 0) {
            bVar3 = 1;
          }
          else {
            bVar3 = *(byte *)(lVar6 + 0x2b0);
          }
        }
        bVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
        bVar3 = bVar2 ^ 1 | bVar3;
        goto LAB_1405a7bdf;
      }
    }
  }
  bVar3 = 0;
LAB_1405a7bdf:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405a7cce FUN_1405a7cce body=2869 status=ok
// SIG undefined FUN_1405a7cce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405a7cce(longlong *param_1)

{
  longlong *plVar1;
  longlong **pplVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong *_Dst;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_114 [4];
  double local_110;
  longlong **pplStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar1 = param_1 + 0x3f;
  if ((int)param_1[0x40] != *(int *)((longlong)param_1 + 0x22c)) {
    plVar17 = param_1 + 0x46;
    if ((longlong *)param_1[0x47] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[0x47];
    }
    iVar19 = (int)param_1[0x48];
    iVar11 = iVar19 + 3;
    if (-1 < iVar19) {
      iVar11 = iVar19;
    }
    if ((int)param_1[0x40] - *(int *)((longlong)param_1 + 0x22c) < iVar11 >> 2) {
      pplVar2 = (longlong **)(param_1 + 0x41);
      local_110 = 2.12199579096527e-314;
      local_100 = 0xffffffff;
      uStack_f8 = 0;
      pplStack_108 = pplVar2;
      if ((int)param_1[0x44] == 0) {
        iVar19 = 0;
      }
      else {
        FUN_1449c0562(&local_110);
        iVar19 = (int)param_1[0x44];
      }
      uStack_180 = local_110;
      local_168 = CONCAT44(uStack_f4,uStack_f8);
      local_178._8_8_ = local_100;
      local_178._0_8_ = pplStack_108;
      auVar10 = local_178;
      local_178._12_4_ = (undefined4)((ulonglong)local_100 >> 0x20);
      iVar11 = local_178._12_4_;
      local_188 = plVar1;
      if ((local_178._12_4_ != iVar19) || (local_178 = auVar10, pplStack_108 != pplVar2)) {
        do {
          local_178 = auVar10;
          *(undefined4 *)
           ((longlong)plVar17 + (longlong)*(int *)(*local_188 + 0x84 + (longlong)iVar11 * 0x90) * 4)
               = 0xffffffff;
          local_178._8_4_ = local_178._8_4_ & ~uStack_180._4_4_;
          FUN_1449c0562(&uStack_180);
          iVar11 = local_178._12_4_;
          auVar10 = local_178;
        } while (local_188 != plVar1 ||
                 ((longlong **)local_178._0_8_ != pplVar2 || local_178._12_4_ != iVar19));
      }
    }
    else if (0 < iVar19) {
      lVar25 = 0;
      do {
        *(undefined4 *)((longlong)plVar17 + lVar25 * 4) = 0xffffffff;
        lVar25 = lVar25 + 1;
      } while (lVar25 < (int)param_1[0x48]);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)((longlong)param_1 + 0x204) < 0) {
      FUN_14074f60a(plVar1);
    }
    param_1[0x45] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  lVar25 = param_1[0x9d];
  lVar13 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if (lVar13 == 0) {
    iVar19 = 0;
  }
  else {
    lVar13 = (**(code **)(*param_1 + 0x3f8))(param_1);
    iVar19 = *(int *)(lVar13 + 0x1b0);
  }
  uVar18 = (int)lVar25 + iVar19;
  iVar11 = (int)param_1[0x40];
  if ((uint)(iVar11 - *(int *)((longlong)param_1 + 0x22c)) < uVar18) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar18);
    }
    uVar24 = uVar18 - iVar11;
    if (uVar24 != 0 && iVar11 <= (int)uVar18) {
      iVar22 = *(int *)((longlong)param_1 + 0x204);
      iVar4 = iVar11;
      if (iVar22 < (int)uVar18) {
        FUN_14074f60a(plVar1);
        iVar4 = (int)param_1[0x40];
        iVar22 = *(int *)((longlong)param_1 + 0x204);
      }
      *(uint *)(param_1 + 0x40) = iVar4 + uVar24;
      if ((uint)(iVar22 - iVar4) < uVar24) {
        FUN_146ceb2ee(plVar1);
      }
      if (iVar4 < (int)uVar18) {
        lVar13 = *plVar1;
        uVar16 = (ulonglong)uVar18;
        iVar22 = *(int *)((longlong)param_1 + 0x22c);
        iVar19 = (int)lVar25 + iVar19;
        puVar21 = (undefined4 *)(uVar16 * 0x90 + lVar13 + -0x8c);
        do {
          iVar19 = iVar19 + -1;
          if (iVar22 != 0) {
            *(int *)(lVar13 + (longlong)(int)param_1[0x45] * 0x90) = iVar19;
          }
          puVar21[-1] = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x22c) < 1) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (undefined4)param_1[0x45];
          }
          uVar16 = uVar16 - 1;
          *puVar21 = uVar12;
          *(int *)(param_1 + 0x45) = iVar19;
          iVar22 = *(int *)((longlong)param_1 + 0x22c) + 1;
          *(int *)((longlong)param_1 + 0x22c) = iVar22;
          puVar21 = puVar21 + -0x24;
        } while ((longlong)iVar4 < (longlong)uVar16);
      }
      if (iVar11 == 0) {
        plVar17 = param_1 + 0x41;
        *(uint *)(param_1 + 0x44) = uVar24;
        uVar23 = uVar24 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x224) + 0x1fU >> 5 < uVar23) {
          FUN_14499171c(plVar17,0,uVar23,4);
          *(uint *)((longlong)param_1 + 0x224) = uVar24 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[0x43];
        if ((longlong *)param_1[0x43] == (longlong *)0x0) {
          _Dst = plVar17;
        }
        if (uVar24 < 0x101) {
          uVar23 = uVar23 + (uVar23 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar23 << 2));
        iVar19 = (int)param_1[0x44];
        iVar11 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar11 = iVar19;
        }
        if (iVar19 % 0x20 != 0) {
          if ((longlong *)param_1[0x43] != (longlong *)0x0) {
            plVar17 = (longlong *)param_1[0x43];
          }
          bVar15 = -(char)(iVar19 % 0x20);
          *(uint *)((longlong)plVar17 + (longlong)(iVar11 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f))
               >> (bVar15 & 0x1f);
        }
      }
      else if (-1 < (int)uVar24) {
        uVar12 = FUN_144a54ea4(param_1 + 0x41,uVar24);
        FUN_1447c6044(param_1 + 0x41,uVar12,uVar24,0);
      }
    }
    if (uVar18 < 4) {
      iVar19 = 1;
    }
    else {
      uVar18 = (uVar18 | 1) + 0xe;
      iVar19 = 0x1f;
      if (uVar18 != 0) {
        for (; uVar18 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      iVar19 = 1 << ((byte)iVar19 & 0x1f);
    }
    if (((int)param_1[0x48] == 0) || ((int)param_1[0x48] < iVar19)) {
      *(int *)(param_1 + 0x48) = iVar19;
      FUN_1405a8a6a(plVar1);
    }
  }
  auVar10 = _DAT_1499387d0;
  if (0 < (int)param_1[0x9d]) {
    lVar25 = 0;
    dVar6 = (double)DAT_1499387d0;
    dVar7 = DAT_1499387d0._8_8_;
    do {
      lVar13 = *(longlong *)(param_1[0x9c] + lVar25 * 8);
      auVar3 = *(undefined1 (*) [16])(lVar13 + 0x50);
      auVar32 = divpd(auVar3,auVar10);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = *(double *)(lVar13 + 0x60);
      auVar33 = divpd(auVar33,auVar10);
      auVar32 = roundpd(auVar32,auVar32,3);
      auVar33 = roundpd(auVar33,auVar33,3);
      dVar29 = (auVar3._0_8_ - auVar32._0_8_ * dVar6) * 0.008726646259971648;
      dVar30 = (auVar3._8_8_ - auVar32._8_8_ * dVar7) * 0.008726646259971648;
      dVar8 = (*(double *)(lVar13 + 0x60) - auVar33._0_8_ * dVar6) * 0.008726646259971648;
      dVar9 = (0.0 - auVar33._8_8_ * dVar7) * 0.008726646259971648;
      dVar26 = sin(dVar29);
      dVar27 = sin(dVar30);
      dVar28 = sin(dVar8);
      sin(dVar9);
      dVar29 = cos(dVar29);
      dVar30 = cos(dVar30);
      dVar31 = cos(dVar8);
      cos(dVar9);
      dVar8 = dVar27 * dVar26 * dVar28 + dVar30 * dVar29 * dVar31;
      local_188 = (longlong *)(dVar26 * dVar27 * dVar31 - dVar29 * dVar30 * dVar28);
      uStack_180 = -(dVar26 * dVar30 * dVar31) - dVar29 * dVar27 * dVar28;
      local_178._8_4_ = SUB84(dVar8,0);
      local_178._0_8_ = -(dVar30 * dVar26 * dVar28) + dVar27 * dVar29 * dVar31;
      local_178._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_168 = *(undefined8 *)(lVar13 + 0x38);
      uStack_160 = *(undefined8 *)(lVar13 + 0x40);
      local_158 = *(undefined8 *)(lVar13 + 0x48);
      uStack_150 = 0;
      local_148 = *(undefined8 *)(lVar13 + 0x68);
      uStack_140 = *(undefined8 *)(lVar13 + 0x70);
      local_138 = *(undefined8 *)(lVar13 + 0x78);
      uStack_130 = 0;
      local_120 = (int)lVar25;
      local_128 = lVar13;
      lVar14 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar5 = *(longlong *)(lVar13 + 0x30);
      local_11c = 0xffffffff;
      if ((lVar5 != 0) && (*(int *)(lVar14 + 0x98) != *(int *)(lVar14 + 0xc4))) {
        uVar18 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar24 = (uint)lVar5 & 0xffff;
        lVar20 = lVar14 + 200;
        if (*(longlong *)(lVar14 + 0xd0) != 0) {
          lVar20 = *(longlong *)(lVar14 + 0xd0);
        }
        iVar19 = *(int *)(lVar20 + (ulonglong)
                                   (*(int *)(lVar14 + 0xd8) - 1U &
                                   (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar24)
                                   + (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar24 >> 4)) * 4);
        if (iVar19 != -1) {
          do {
            plVar17 = (longlong *)(*(longlong *)(lVar14 + 0x90) + (longlong)iVar19 * 0x14);
            if (*plVar17 == lVar5) {
              if ((plVar17 != (longlong *)0x0) && (plVar17 + 1 != (longlong *)0x0)) {
                local_11c = (undefined4)plVar17[1];
              }
              break;
            }
            iVar19 = *(int *)((longlong)plVar17 + 0xc);
          } while (iVar19 != -1);
        }
      }
      local_110 = (double)(lVar13 + 0x28);
      pplStack_108 = &local_188;
      FUN_1405a8804(plVar1,local_114,&local_110);
      lVar25 = lVar25 + 1;
    } while (lVar25 < (int)param_1[0x9d]);
  }
  lVar25 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if ((lVar25 != 0) &&
     (lVar25 = (**(code **)(*param_1 + 0x3f8))(param_1), auVar10 = _DAT_1499387d0,
     0 < *(int *)(lVar25 + 0x1b0))) {
    lVar25 = 0;
    dVar6 = (double)DAT_1499387d0;
    dVar7 = DAT_1499387d0._8_8_;
    do {
      lVar13 = (**(code **)(*param_1 + 0x3f8))(param_1);
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x1a8) + lVar25 * 8);
      if ((int)param_1[0x40] != *(int *)((longlong)param_1 + 0x22c)) {
        lVar5 = *(longlong *)(lVar13 + 0x28);
        uVar18 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar24 = (uint)lVar5 & 0xffff;
        plVar17 = (longlong *)param_1[0x47];
        if ((longlong *)param_1[0x47] == (longlong *)0x0) {
          plVar17 = param_1 + 0x46;
        }
        iVar19 = *(int *)((longlong)plVar17 +
                         (ulonglong)
                         ((int)param_1[0x48] - 1U &
                         (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar24) +
                         (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar24 >> 4)) * 4);
        if (iVar19 != -1) {
          do {
            if (*(longlong *)(*plVar1 + (longlong)iVar19 * 0x90) == lVar5) goto LAB_1405a856a;
            iVar19 = *(int *)((longlong)iVar19 * 0x90 + *plVar1 + 0x80);
          } while (iVar19 != -1);
        }
      }
      lVar5 = param_1[0x9d];
      auVar3 = *(undefined1 (*) [16])(lVar13 + 0x50);
      auVar32 = divpd(auVar3,auVar10);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = *(double *)(lVar13 + 0x60);
      auVar33 = divpd(auVar34,auVar10);
      auVar32 = roundpd(auVar32,auVar32,3);
      auVar33 = roundpd(auVar33,auVar33,3);
      dVar29 = (auVar3._0_8_ - auVar32._0_8_ * dVar6) * 0.008726646259971648;
      dVar30 = (auVar3._8_8_ - auVar32._8_8_ * dVar7) * 0.008726646259971648;
      dVar8 = (*(double *)(lVar13 + 0x60) - auVar33._0_8_ * dVar6) * 0.008726646259971648;
      dVar9 = (0.0 - auVar33._8_8_ * dVar7) * 0.008726646259971648;
      dVar26 = sin(dVar29);
      dVar27 = sin(dVar30);
      dVar28 = sin(dVar8);
      sin(dVar9);
      dVar29 = cos(dVar29);
      dVar30 = cos(dVar30);
      dVar31 = cos(dVar8);
      cos(dVar9);
      dVar8 = dVar27 * dVar26 * dVar28 + dVar30 * dVar29 * dVar31;
      local_188 = (longlong *)(dVar26 * dVar27 * dVar31 - dVar29 * dVar30 * dVar28);
      uStack_180 = -(dVar26 * dVar30 * dVar31) - dVar29 * dVar27 * dVar28;
      local_178._8_4_ = SUB84(dVar8,0);
      local_178._0_8_ = -(dVar30 * dVar26 * dVar28) + dVar27 * dVar29 * dVar31;
      local_178._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_168 = *(undefined8 *)(lVar13 + 0x38);
      uStack_160 = *(undefined8 *)(lVar13 + 0x40);
      local_158 = *(undefined8 *)(lVar13 + 0x48);
      uStack_150 = 0;
      local_148 = *(undefined8 *)(lVar13 + 0x68);
      uStack_140 = *(undefined8 *)(lVar13 + 0x70);
      local_138 = *(undefined8 *)(lVar13 + 0x78);
      uStack_130 = 0;
      local_128 = lVar13;
      local_120 = (int)lVar5 + (int)lVar25;
      lVar14 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar5 = *(longlong *)(lVar13 + 0x30);
      local_11c = 0xffffffff;
      if ((lVar5 != 0) && (*(int *)(lVar14 + 0x98) != *(int *)(lVar14 + 0xc4))) {
        uVar18 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar24 = (uint)lVar5 & 0xffff;
        lVar20 = lVar14 + 200;
        if (*(longlong *)(lVar14 + 0xd0) != 0) {
          lVar20 = *(longlong *)(lVar14 + 0xd0);
        }
        iVar19 = *(int *)(lVar20 + (ulonglong)
                                   (*(int *)(lVar14 + 0xd8) - 1U &
                                   (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar24)
                                   + (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar24 >> 4)) * 4);
        if (iVar19 != -1) {
          do {
            plVar17 = (longlong *)(*(longlong *)(lVar14 + 0x90) + (longlong)iVar19 * 0x14);
            if (*plVar17 == lVar5) {
              if ((plVar17 != (longlong *)0x0) && (plVar17 + 1 != (longlong *)0x0)) {
                local_11c = (undefined4)plVar17[1];
              }
              break;
            }
            iVar19 = *(int *)((longlong)plVar17 + 0xc);
          } while (iVar19 != -1);
        }
      }
      local_110 = (double)(lVar13 + 0x28);
      pplStack_108 = &local_188;
      FUN_1405a8804(plVar1,local_114,&local_110);
LAB_1405a856a:
      lVar25 = lVar25 + 1;
      lVar13 = (**(code **)(*param_1 + 0x3f8))(param_1);
    } while (lVar25 < *(int *)(lVar13 + 0x1b0));
  }
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a8804 FUN_1405a8804 body=613 status=ok
// SIG undefined FUN_1405a8804(void)

int * FUN_1405a8804(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_146ceb2ee(param_1,iVar14);
    }
    lVar13 = (longlong)iVar14;
    iVar11 = FUN_144a54ea4(param_1 + 2,1);
    plVar7 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar7 = param_1 + 2;
    }
    iVar6 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar6 = iVar11;
    }
    bVar4 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar13 = (longlong)iVar14;
    iVar11 = *(int *)(*param_1 + 4 + lVar13 * 0x90);
    *(int *)(param_1 + 6) = iVar11;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x90) = 0xffffffff;
    }
  }
  iVar11 = 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar6 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar6 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (void *)(*param_1 + lVar13 * 0x90);
  puVar9 = (undefined8 *)param_3[1];
  lVar3 = *(longlong *)*param_3;
  puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar13 * 0x90);
  puVar2[-2] = lVar3;
  puVar10 = puVar2;
  for (lVar13 = 0xe; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(puVar2 + 0xe) = 0xffffffff;
  uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
  uVar12 = (uint)lVar3 & 0xffff;
  uVar5 = ((uint)lVar3 << 0x10 | uVar12) + (int)((ulonglong)lVar3 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar12 != 0) && (uVar12 != 1)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar6 * 0x90);
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x90) == lVar3) {
          memmove(_Dst,_Src,0x80);
          FUN_147d1ef70(param_1,iVar14);
          goto LAB_1405a89c0;
        }
        iVar6 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar6 != -1);
    }
  }
  if (3 < uVar12) {
    uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar13 & 0x1f);
  }
  iVar6 = iVar14;
  if (((int)uVar12 < 1) || (iVar11 <= (int)param_1[9])) {
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x84) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x80) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_1405a8a6a(param_1);
  }
LAB_1405a89c0:
  *param_2 = iVar6;
  return param_2;
}



// FUNCTION 1405a8a6a FUN_1405a8a6a body=661 status=ok
// SIG undefined FUN_1405a8a6a(void)

void FUN_1405a8a6a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_1405a8aaf:
    uVar4 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_1405a8ba1;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar8) goto LAB_1405a8aaf;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar9 = (int)param_1[5];
  local_4c = 1;
  if (iVar9 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = local_48;
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar12 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar12 = iVar9 + -1;
      }
      uVar7 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar7;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar12 = 0;
      do {
        local_3c = iVar9;
        if (uVar10 == uVar7) goto LAB_1405a8b73;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar11[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
      local_50 = (int)uVar7;
      local_38 = iVar12;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar8 & uVar8;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
  }
LAB_1405a8b73:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar9) {
    do {
      lVar3 = *local_58;
      lVar6 = (longlong)local_3c * 0x90;
      uVar2 = *(undefined8 *)(lVar3 + lVar6);
      uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar4 = (uint)uVar2 & 0xffff;
      uVar10 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar4) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar10;
      *(int *)(lVar3 + 0x84 + lVar6) = iVar9;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x80 + lVar6) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1405a8ba1:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a8d00 FUN_1405a8d00 body=226 status=ok
// SIG undefined FUN_1405a8d00(void)

void FUN_1405a8d00(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405a8de2(param_1,param_2);
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



// FUNCTION 1405a8de2 FUN_1405a8de2 body=1365 status=ok
// SIG undefined FUN_1405a8de2(void)

void FUN_1405a8de2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141599ac8();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9fda30);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a9338 FUN_1405a9338 body=226 status=ok
// SIG undefined FUN_1405a9338(void)

void FUN_1405a9338(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405a941a(param_1,param_2);
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



// FUNCTION 1405a941a FUN_1405a941a body=1365 status=ok
// SIG undefined FUN_1405a941a(void)

void FUN_1405a941a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415965a6();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9fdab8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a9970 FUN_1405a9970 body=226 status=ok
// SIG undefined FUN_1405a9970(void)

void FUN_1405a9970(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405a9a52(param_1,param_2);
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



// FUNCTION 1405a9a52 FUN_1405a9a52 body=1365 status=ok
// SIG undefined FUN_1405a9a52(void)

void FUN_1405a9a52(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415968b0();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9fdbc8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405a9fa8 FUN_1405a9fa8 body=226 status=ok
// SIG undefined FUN_1405a9fa8(void)

void FUN_1405a9fa8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405aa08a(param_1,param_2);
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



// FUNCTION 1405aa08a FUN_1405aa08a body=1365 status=ok
// SIG undefined FUN_1405aa08a(void)

void FUN_1405aa08a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415a2bf0();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9fdcd8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405aa5e0 FUN_1405aa5e0 body=226 status=ok
// SIG undefined FUN_1405aa5e0(void)

void FUN_1405aa5e0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405aa6c2(param_1,param_2);
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



// FUNCTION 1405aa6c2 FUN_1405aa6c2 body=1365 status=ok
// SIG undefined FUN_1405aa6c2(void)

void FUN_1405aa6c2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157b592();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9feff8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405aac18 FUN_1405aac18 body=226 status=ok
// SIG undefined FUN_1405aac18(void)

void FUN_1405aac18(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405aacfa(param_1,param_2);
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



// FUNCTION 1405aacfa FUN_1405aacfa body=1365 status=ok
// SIG undefined FUN_1405aacfa(void)

void FUN_1405aacfa(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141591a5e();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ff2a0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ab250 FUN_1405ab250 body=226 status=ok
// SIG undefined FUN_1405ab250(void)

void FUN_1405ab250(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ab332(param_1,param_2);
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



// FUNCTION 1405ab332 FUN_1405ab332 body=1365 status=ok
// SIG undefined FUN_1405ab332(void)

void FUN_1405ab332(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141577b68();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ff218);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ab888 FUN_1405ab888 body=226 status=ok
// SIG undefined FUN_1405ab888(void)

void FUN_1405ab888(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ab96a(param_1,param_2);
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



// FUNCTION 1405ab96a FUN_1405ab96a body=1365 status=ok
// SIG undefined FUN_1405ab96a(void)

void FUN_1405ab96a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415726c2();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ff328);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405abec0 FUN_1405abec0 body=226 status=ok
// SIG undefined FUN_1405abec0(void)

void FUN_1405abec0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405abfa2(param_1,param_2);
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



// FUNCTION 1405abfa2 FUN_1405abfa2 body=1365 status=ok
// SIG undefined FUN_1405abfa2(void)

void FUN_1405abfa2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415a1830();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9ff5d0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ac4f8 FUN_1405ac4f8 body=226 status=ok
// SIG undefined FUN_1405ac4f8(void)

void FUN_1405ac4f8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ac5da(param_1,param_2);
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



// FUNCTION 1405ac5da FUN_1405ac5da body=1365 status=ok
// SIG undefined FUN_1405ac5da(void)

void FUN_1405ac5da(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141580138();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05e78);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405acb30 FUN_1405acb30 body=226 status=ok
// SIG undefined FUN_1405acb30(void)

void FUN_1405acb30(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405acc12(param_1,param_2);
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



// FUNCTION 1405acc12 FUN_1405acc12 body=1365 status=ok
// SIG undefined FUN_1405acc12(void)

void FUN_1405acc12(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14157b7b8();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca059b0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ad168 FUN_1405ad168 body=226 status=ok
// SIG undefined FUN_1405ad168(void)

void FUN_1405ad168(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ad24a(param_1,param_2);
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



// FUNCTION 1405ad24a FUN_1405ad24a body=1365 status=ok
// SIG undefined FUN_1405ad24a(void)

void FUN_1405ad24a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14159d3ac();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05a38);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ad7a0 FUN_1405ad7a0 body=226 status=ok
// SIG undefined FUN_1405ad7a0(void)

void FUN_1405ad7a0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ad882(param_1,param_2);
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



// FUNCTION 1405ad882 FUN_1405ad882 body=1365 status=ok
// SIG undefined FUN_1405ad882(void)

void FUN_1405ad882(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141591c84();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05ac0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405addd8 FUN_1405addd8 body=226 status=ok
// SIG undefined FUN_1405addd8(void)

void FUN_1405addd8(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405adeba(param_1,param_2);
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



// FUNCTION 1405adeba FUN_1405adeba body=1365 status=ok
// SIG undefined FUN_1405adeba(void)

void FUN_1405adeba(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_1415a5dc0();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05b48);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ae410 FUN_1405ae410 body=226 status=ok
// SIG undefined FUN_1405ae410(void)

void FUN_1405ae410(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1405ae4f2(param_1,param_2);
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



// FUNCTION 1405ae4f2 FUN_1405ae4f2 body=1365 status=ok
// SIG undefined FUN_1405ae4f2(void)

void FUN_1405ae4f2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141577fb4();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05c58);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405aea48 FUN_1405aea48 body=76 status=ok
// SIG undefined FUN_1405aea48(void)

void FUN_1405aea48(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_140feab3a(param_1,0);
  }
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_146e0eab4(param_1 + 0x10);
  return;
}



// FUNCTION 1405aea94 FUN_1405aea94 body=212 status=ok
// SIG undefined FUN_1405aea94(void)

longlong FUN_1405aea94(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = FUN_1405aecb8();
  if (cVar1 == '\0') {
    if (param_1[0x15] == 0) {
      lVar3 = 0;
      goto LAB_1405aeaf7;
    }
    local_30 = *(undefined8 *)(param_1[0x15] + 0x18);
    FUN_1400021e4(&local_30,&local_58);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xc00))(param_1);
    FUN_140002266(&local_58,&DAT_149e061aa,uVar2);
  }
  local_48 = local_58;
  uStack_40 = local_50;
  lVar3 = local_58;
LAB_1405aeaf7:
  FUN_1405aec00(param_2,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)((longlong)param_1 + 0x1804);
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405aeb6a FUN_1405aeb6a body=50 status=ok
// SIG undefined FUN_1405aeb6a(void)

void FUN_1405aeb6a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xbf0))();
  if ((cVar1 != '\0') && ((int)param_1[0x2fe] != 0)) {
    return;
  }
  FUN_1405aeb9c(param_1);
  return;
}



// FUNCTION 1405aeb9c FUN_1405aeb9c body=100 status=ok
// SIG undefined FUN_1405aeb9c(void)

uint FUN_1405aeb9c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x658);
  if (uVar2 == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & uVar2 != 0) == 0) goto LAB_1405aebb6;
  }
  else if (DAT_14c950c29 != 1) goto LAB_1405aebb6;
  FUN_1456cec3c(uVar2);
LAB_1405aebb6:
  uVar1 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}



// FUNCTION 1405aec00 FUN_1405aec00 body=183 status=ok
// SIG undefined FUN_1405aec00(void)

undefined8 FUN_1405aec00(undefined8 param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_149dfb77a;
  if (DAT_14cadbf00 != 0) {
    local_38 = DAT_14cadbef8;
  }
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  puVar1 = &DAT_149dfb77a;
  if (DAT_14cadbef0 != 0) {
    puVar1 = DAT_14cadbee8;
  }
  FUN_140002266(&local_30,L"%s%s%s",puVar1,puVar2);
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405aecb8 FUN_1405aecb8 body=185 status=ok
// SIG undefined FUN_1405aecb8(void)

undefined8 FUN_1405aecb8(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
    if (lVar5 == 0) goto LAB_1405aecda;
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
  }
  if ((*(byte *)(lVar5 + 0x152) & 0xfe) == 4) {
    return 0;
  }
LAB_1405aecda:
  lVar5 = DAT_14cb76198;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar4 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = CONCAT44(extraout_var,DVar3);
    uVar6 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar6 = 1;
  }
  if (*(char *)(lVar5 + uVar6) != '\x01') {
    return 0;
  }
  return CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(param_1 + 0x17fe));
}



// FUNCTION 1405aed8c FUN_1405aed8c body=29 status=ok
// SIG undefined FUN_1405aed8c(void)

undefined8 FUN_1405aed8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405aedc4 FUN_1405aedc4 body=29 status=ok
// SIG undefined FUN_1405aedc4(void)

undefined8 FUN_1405aedc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405aedfc FUN_1405aedfc body=29 status=ok
// SIG undefined FUN_1405aedfc(void)

undefined8 FUN_1405aedfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405aee34 FUN_1405aee34 body=29 status=ok
// SIG undefined FUN_1405aee34(void)

undefined8 FUN_1405aee34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405aee51 FUN_1405aee51 body=1187 status=ok
// SIG undefined FUN_1405aee51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405aee51(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_35;
  undefined1 local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((DAT_14c760558 == 0) || ((*(uint *)(param_3 + 0x60) & 0x100000) == 0)) ||
     (*(char *)(param_2 + 0x8fc) != '\x01')) goto LAB_1405af184;
  lVar1 = *param_4;
  *param_5 = 1;
  uVar9 = (int)DAT_14c76055c / 2;
  if (*(float *)(lVar1 + 0x2900) < 6.0) {
    uVar9 = DAT_14c76055c;
  }
  uVar5 = 8;
  if (uVar9 < 8) {
    uVar5 = uVar9;
  }
  uVar10 = (ulonglong)((uVar5 - 1) + (uint)(uVar5 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar12 = 1 << ((byte)lVar2 & 0x1f);
  *(int *)(param_5 + 4) = iVar12;
  fVar14 = *(float *)(lVar1 + 0x2900);
  if (4.0 <= fVar14) {
    fVar14 = 4.0;
  }
  if (fVar14 <= 0.5) {
    fVar14 = 0.5;
  }
  iVar11 = 0x10;
  if ((int)(SQRT(fVar14) * (float)_DAT_14c760560) < 0x10) {
    iVar11 = (int)(SQRT(fVar14) * (float)_DAT_14c760560);
  }
  if (iVar11 < 2) {
    iVar11 = 1;
  }
  *(int *)(param_5 + 8) = iVar11;
  lVar2 = (longlong)((int)((ulonglong)*(undefined8 *)(param_2 + 0xa24) >> 0x20) + iVar12 + -1) /
          (longlong)iVar12;
  uVar10 = (longlong)(iVar12 + (int)*(undefined8 *)(param_2 + 0xa24) + -1) / (longlong)iVar12;
  *(ulonglong *)(param_5 + 0xc) = (lVar2 << 0x20) + (uVar10 & 0xffffffff);
  *(ulonglong *)(param_5 + 0x14) = CONCAT44(iVar11 * (int)lVar2,(int)uVar10 * iVar11);
  local_78 = (*(int *)(DAT_14c9ecd08 + 4) == 0) << 4 | 10;
  local_70 = param_5;
  uVar6 = FUN_1405af2f5(param_1,param_2 + 0x838,L"Lumen.Radiosity.TraceRadianceAtlas");
  *(undefined8 *)(param_5 + 0x20) = uVar6;
  if ((DAT_14c760570 == 0) || (DAT_14c760574 <= 0.0)) {
LAB_1405af02a:
    param_5[1] = 0;
LAB_1405af02f:
    local_50 = DAT_14ca83a40;
    local_60 = DAT_14ca83a30;
    uStack_5c = DAT_14ca83a34;
    uStack_58 = DAT_14ca83a38;
    uStack_54 = DAT_14ca83a3c;
    local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_36 = 0;
    local_68 = &DAT_00020008;
    local_35 = 0x15;
    local_3c = 0x10001;
    local_38 = 0x101;
    local_48 = 0;
    local_33 = 0xff;
    local_44 = &DAT_100000001;
    uVar10 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar7 = uVar10 + 0x120;
    if (*(ulonglong *)(param_1 + 0x78) < uVar7) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
      uVar10 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar7 = uVar10 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar7;
    FUN_1456bbb8c(uVar10,L"Lumen.Radiosity.DummyTraceHitDistanceAtlas",&local_68,0);
    iVar12 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar12);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar10;
    *(int *)(uVar10 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca97070) {
      FUN_144b3d300(&DAT_14ca97070);
      if (DAT_14ca97070 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar8 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar8 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar8 + 0x68))(plVar8);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
    }
    lVar1 = DAT_14ca97068;
    bVar13 = true;
    cVar3 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar10 = 0;
        cVar3 = '\x02';
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar10 = (ulonglong)(bVar4 ^ 1);
        cVar3 = DAT_14ca96da8;
      }
      bVar13 = *(int *)(lVar1 + uVar10 * 4) != 0;
    }
    if ((!bVar13) || (cVar3 == '\0')) goto LAB_1405af02a;
    cVar3 = FUN_141767a62(uVar6);
    if (cVar3 == '\0') goto LAB_1405af02a;
    bVar13 = *(int *)(DAT_14c9f28e8 + 4) == 0;
    param_5[1] = !bVar13;
    if (bVar13) goto LAB_1405af02f;
    local_70 = param_5;
    local_78 = 0x15;
    uVar10 = FUN_1405af2f5(param_1,param_2 + 0x840,L"Lumen.Radiosity.TraceHitDistanceAtlas",
                           *(undefined8 *)(param_5 + 0x14));
  }
  *(ulonglong *)(param_5 + 0x28) = uVar10;
  local_70 = param_5;
  local_78 = 10;
  uVar6 = FUN_1405af2f5(param_1,param_2 + 0x848,L"Lumen.Radiosity.ProbeSHRedAtlas",
                        *(undefined8 *)(param_5 + 0xc));
  *(undefined8 *)(param_5 + 0x30) = uVar6;
  local_70 = param_5;
  local_78 = 10;
  uVar6 = FUN_1405af2f5(param_1,param_2 + 0x850,L"Lumen.Radiosity.ProbeSHGreenAtlas",
                        *(undefined8 *)(param_5 + 0xc));
  *(undefined8 *)(param_5 + 0x38) = uVar6;
  local_70 = param_5;
  local_78 = 10;
  uVar6 = FUN_1405af2f5(param_1,param_2 + 0x858,L"Lumen.Radiosity.ProbeSHBlueAtlas",
                        *(undefined8 *)(param_5 + 0xc));
  *(undefined8 *)(param_5 + 0x40) = uVar6;
LAB_1405af184:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405af2f5 FUN_1405af2f5 body=248 status=ok
// SIG undefined FUN_1405af2f5(void)

void FUN_1405af2f5(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined1 *param_6)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  char local_35;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    lVar1 = FUN_14473c272(param_1,param_2,0);
    if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x84) == (int)param_4)) &&
        (*(int *)(lVar1 + 0x88) == (int)((ulonglong)param_4 >> 0x20))) &&
       (*(char *)(lVar1 + 0x93) == param_5)) goto LAB_1405af355;
  }
  local_50 = DAT_14ca83a40;
  local_60 = DAT_14ca83a30;
  uStack_5c = DAT_14ca83a34;
  uStack_58 = DAT_14ca83a38;
  uStack_54 = DAT_14ca83a3c;
  local_68 = &DAT_00020008;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_48 = 0;
  local_3c = 0x10001;
  local_38 = 0x101;
  local_36 = 0;
  local_35 = param_5;
  local_34 = 0xff00;
  local_44 = param_4;
  FUN_14472bf7a(param_1,&local_68,param_3,0);
  *param_6 = 0;
LAB_1405af355:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405af3ee FUN_1405af3ee body=436 status=ok
// SIG undefined FUN_1405af3ee(void)

undefined8 FUN_1405af3ee(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    iVar3 = *(int *)(param_3 + 0xc);
    lVar8 = *(longlong *)(param_1 + 0x18);
    lVar9 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar7 = FUN_140059518(lVar8 + 8);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0xe0) == iVar3)) {
        if (lVar8 != 0) {
          lVar8 = FUN_1400f3ad8(lVar8 + 8);
          fVar10 = 0.1;
          if (lVar8 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x508);
            if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
              FUN_14689c22e(lVar8);
            }
            else if (lVar8 == 0) goto LAB_1405af4ef;
            local_68 = 0x3f8000003e4ccccd;
            local_60 = CONCAT35(local_60._5_3_,0x3f800000);
            local_50 = *(undefined8 *)(param_3 + 0x20);
            local_48 = *(undefined8 *)(param_3 + 0x28);
            local_40 = *(longlong *)(param_3 + 0x30);
            if (local_40 != 0) {
              LOCK();
              *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
              UNLOCK();
            }
            cVar5 = FUN_1405af7e2(lVar8,&local_50,&local_68);
            if (cVar5 == '\0') {
              fVar10 = 0.1;
            }
            else {
              fVar10 = (float)local_68;
            }
          }
LAB_1405af4ef:
          if (fVar10 < *(float *)(param_3 + 0x40)) {
            local_68 = *(undefined8 *)(param_3 + 0x20);
            local_60 = *(undefined8 *)(param_3 + 0x28);
            local_58 = *(longlong **)(param_3 + 0x30);
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            uVar6 = FUN_140230656(&local_68);
            FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),uVar6);
            plVar4 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_58)(local_58);
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
        }
        break;
      }
      lVar8 = lVar8 + 0x70;
      lVar9 = lVar9 + -0x70;
    } while (lVar9 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1405af5a4 FUN_1405af5a4 body=130 status=ok
// SIG undefined FUN_1405af5a4(void)

void FUN_1405af5a4(longlong param_1,int param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar2 = FUN_140059518(lVar3 + 8);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == param_2)) {
        if (lVar3 == 0) {
          return;
        }
        cVar1 = FUN_1405af626(lVar3);
        if ((*(char *)(lVar3 + 0x69) == param_3) && (*(char *)(lVar3 + 0x68) == cVar1)) {
          return;
        }
        *(char *)(lVar3 + 0x68) = cVar1;
        *(char *)(lVar3 + 0x69) = param_3;
        FUN_1405af9d0(param_1,lVar3);
        return;
      }
      lVar3 = lVar3 + 0x70;
      lVar4 = lVar4 + -0x70;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1405af626 FUN_1405af626 body=312 status=ok
// SIG undefined FUN_1405af626(void)

undefined4 FUN_1405af626(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140313804();
  }
  lVar3 = FUN_140059518(param_1 + 8);
  if ((lVar2 != 0) && (lVar3 != 0)) {
    if (DAT_14c9670a0 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
      FUN_14593912e(plVar4,1,1);
      DAT_14c9670a0 = plVar4;
    }
    local_34 = 0xffffffff;
    local_38 = 0xffffffff;
    (**(code **)(*DAT_14c9670a0 + 0xa0))
              (DAT_14c9670a0,*(undefined4 *)(lVar3 + 0xe0),&local_34,&local_38);
    FUN_1405af760(lVar2,local_50,local_38);
    if (local_48 == DAT_14cb92d88) {
      uVar1 = 0;
      goto LAB_1405af6fe;
    }
    if (local_48 == DAT_14cb92d90) {
      uVar1 = 2;
      goto LAB_1405af6fe;
    }
    if (local_48 == DAT_14cb92da8) {
      uVar1 = 8;
      goto LAB_1405af6fe;
    }
    uVar1 = 1;
    if (local_48 != DAT_14cb92d80) goto LAB_1405af6fe;
  }
  uVar1 = 1;
  if ((char)*(undefined4 *)(param_1 + 0x68) != -1) {
    uVar1 = *(undefined4 *)(param_1 + 0x68);
  }
LAB_1405af6fe:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405af760 FUN_1405af760 body=129 status=ok
// SIG undefined FUN_1405af760(void)

void FUN_1405af760(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar3 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x128);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0xe8) + (longlong)(int)uVar4 * 0x24);
        if (*puVar2 == param_3) {
          if ((puVar2 != (uint *)0x0) && (puVar2 = puVar2 + 1, puVar2 != (uint *)0x0))
          goto LAB_1405af7bf;
          break;
        }
        uVar4 = puVar2[7];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar2 = (uint *)&DAT_14cb0f118;
LAB_1405af7bf:
  param_2[2] = *(undefined8 *)(puVar2 + 4);
  uVar1 = *(undefined8 *)(puVar2 + 2);
  *param_2 = *(undefined8 *)puVar2;
  param_2[1] = uVar1;
  return;
}



// FUNCTION 1405af7e2 FUN_1405af7e2 body=493 status=ok
// SIG undefined FUN_1405af7e2(void)

bool FUN_1405af7e2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  longlong local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_1 + 0x1f8);
  iVar10 = *(int *)(param_1 + 0x224);
  if (iVar3 == iVar10) {
    if ((longlong)*(int *)(param_1 + 0x1b8) == 0) goto LAB_1405af8a6;
    lVar15 = (longlong)*(int *)(param_1 + 0x1b8) * 0x18;
    lVar14 = *(longlong *)(param_1 + 0x1b0) + 8;
    do {
      local_90 = *(undefined8 *)(lVar14 + -8);
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      cVar9 = FUN_1403e7f2a(&local_90);
      if (cVar9 != '\0') {
        local_78 = &local_90;
        local_70 = lVar14;
        FUN_14090b41a((longlong *)(param_1 + 0x1f0),local_64,&local_78,0);
      }
      plVar4 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      lVar14 = lVar14 + 0x18;
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != 0);
    iVar3 = *(int *)(param_1 + 0x1f8);
    iVar10 = *(int *)(param_1 + 0x224);
  }
  if (iVar3 != iVar10) {
    lVar15 = *param_2;
    uVar5 = (uint)((ulonglong)lVar15 >> 0x10);
    uVar12 = (uint)lVar15 & 0xffff;
    lVar14 = param_1 + 0x228;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x230);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x238) - 1U &
                               (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar12) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar10 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x1f0);
      do {
        lVar11 = lVar14 + (longlong)iVar10 * 0x30;
        if (*(longlong *)(lVar14 + (longlong)iVar10 * 0x30) == lVar15) goto LAB_1405af8a8;
        iVar10 = *(int *)(lVar11 + 0x28);
      } while (iVar10 != -1);
    }
  }
LAB_1405af8a6:
  lVar11 = 0;
LAB_1405af8a8:
  puVar13 = (undefined4 *)(lVar11 + 0x18);
  if (lVar11 == 0) {
    puVar13 = (undefined4 *)0x0;
  }
  if (puVar13 != (undefined4 *)0x0) {
    uVar6 = puVar13[1];
    uVar7 = puVar13[2];
    uVar8 = puVar13[3];
    *param_3 = *puVar13;
    param_3[1] = uVar6;
    param_3[2] = uVar7;
    param_3[3] = uVar8;
  }
  plVar4 = (longlong *)param_2[2];
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
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar13 != (undefined4 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405af9d0 FUN_1405af9d0 body=401 status=ok
// SIG undefined FUN_1405af9d0(void)

void FUN_1405af9d0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_2 + 0x68);
  cVar2 = *(char *)(param_2 + 0x69);
  lVar4 = FUN_1400f3ad8(param_2 + 8);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x430) != 0) {
      lVar5 = FUN_1449db7f2();
      lVar8 = *(longlong *)(lVar4 + 0x430);
      if ((((lVar8 != 0) && (lVar5 != 0)) && (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 != 0)) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (cVar2 == '\x01' &&
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        (**(code **)(*param_1 + 0x68))
                  (param_1,lVar8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
      }
    }
    local_48 = 0;
    uStack_40 = 0;
    uVar6 = FUN_14497e828(lVar4);
    lVar4 = FUN_140dbafcc(uVar6);
    if (lVar4 != 0) {
      uVar6 = FUN_140059518(param_2 + 8);
      FUN_1404963c2(lVar4,local_58,uVar6);
      lVar4 = FUN_1458cfed0(lVar4,local_58);
      if (lVar4 != 0) {
        FUN_1405b0040(lVar4,&local_48);
        lVar4 = FUN_140e63948(lVar4);
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar7 = &PTR_FUN_14b47b720;
          *(char *)(puVar7 + 1) = cVar2;
          FUN_14039144e(lVar4,puVar7);
        }
      }
      lVar4 = local_48;
      lVar8 = (longlong)(int)uStack_40;
      if (lVar8 != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(lVar4 + lVar5) != 0) {
            FUN_1405afb62(*(longlong *)(lVar4 + lVar5),
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar2) & 0xffffffff);
          }
          lVar5 = lVar5 + 8;
        } while (lVar8 * 8 != lVar5);
      }
      if (local_48 != 0) {
        FUN_1400020a8(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405afb62 FUN_1405afb62 body=169 status=ok
// SIG undefined FUN_1405afb62(void)

void FUN_1405afb62(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (param_2 == '\x01') {
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x220) = 0;
    }
    (**(code **)(*(longlong *)(DAT_14c98e618 + 0x148) + 0x80))(DAT_14c98e618 + 0x148);
    lVar1 = *(longlong *)(param_1 + 0x598);
    if (lVar1 != 0) {
      lVar2 = FUN_1407f492e(param_1);
      if ((lVar2 != 0) && (*(char *)(lVar1 + 0x34) != '\0')) {
        *(undefined1 *)(lVar1 + 0x34) = 0;
      }
    }
  }
  else {
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x220) = 1;
    }
    (**(code **)(*(longlong *)(DAT_14c98e618 + 0x148) + 0x80))(DAT_14c98e618 + 0x148);
  }
  FUN_1405afce0(param_1,*(undefined1 *)(param_1 + 0x5bd));
  FUN_1405afc0c(param_1,0);
  return;
}



// FUNCTION 1405afc0c FUN_1405afc0c body=210 status=ok
// SIG undefined FUN_1405afc0c(void)

void FUN_1405afc0c(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == '\0') &&
     ((*(char *)(param_1 + 0xcd) != '\0' || (*(char *)(param_1 + 0xce) != '\0')))) {
    *(undefined1 *)(param_1 + 0x5c3) = 1;
  }
  else if (*(longlong *)(param_1 + 0x598) != 0) {
    lVar2 = FUN_14101ba5c(*(longlong *)(param_1 + 0x598),param_1);
    if (lVar2 != 0) {
      bVar1 = *(char *)(lVar2 + 0x68) + 1;
      if (bVar1 < 0xc) {
        local_29 = (&DAT_14b47b270)[bVar1];
      }
      else {
        local_29 = 0;
      }
      local_30 = FUN_141580320(param_1,0);
      local_48 = lVar2 + 0x68;
      local_40 = &local_29;
      FUN_1418b784a(param_1,"Event_Input_Device_Changed",&local_30,lVar2 + 0x69);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405afce0 FUN_1405afce0 body=244 status=ok
// SIG undefined FUN_1405afce0(void)

void FUN_1405afce0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined1 local_3f [7];
  undefined8 local_38 [2];
  undefined1 local_28 [8];
  undefined8 local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x5c2) == '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0x40), plVar2 != (longlong *)0x0)) {
    *(char *)(param_1 + 0x5bd) = param_2;
    if (param_2 == '\0') {
      puVar5 = (undefined8 *)(local_3f + 7);
      local_40 = DAT_14c96b23a;
      puVar4 = &local_40;
    }
    else {
      puVar5 = local_20;
      local_28[0] = DAT_14c96b238;
      puVar4 = local_3f + 0x17;
    }
    puVar4[1] = 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    (**(code **)(*plVar2 + 0x1c0))();
    if (((*(int *)(param_1 + 0x388) != 0) && (uVar1 = *(uint *)(param_1 + 900), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x388))) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          uVar3 = *puVar5;
        }
        else {
          uVar3 = 0;
        }
        FUN_1405afdd6(uVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405afdd6 FUN_1405afdd6 body=616 status=ok
// SIG undefined FUN_1405afdd6(void)

void FUN_1405afdd6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[0x18];
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1417de738;
      local_40 = &LAB_145893408;
      local_48 = &LAB_1458cbbd2;
      local_58 = &LAB_147ba21f1;
      local_60 = &LAB_1463e9233;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x1000000c;
      local_80 = 8;
      local_88 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = param_1[0x18];
      if (lVar2 == 0) goto LAB_1405aff58;
    }
    if ((((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x10), lVar4 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      (**(code **)(*param_1 + 0x180))(param_1);
      lVar2 = FUN_140334a94(lVar2);
      if (lVar2 != 0) {
        if (*(int *)((longlong)param_1 + 0x164) == 0) {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
          if ((longlong)(int)param_1[9] == 0) {
            uVar6 = 0;
          }
          else {
            lVar4 = 0;
            uVar6 = 0;
            do {
              if ((uVar6 & 1) == 0) {
                uVar6 = (uint)*(byte *)(*(longlong *)(param_1[8] + lVar4) + 0x5bd);
              }
              else {
                uVar6 = 1;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)param_1[9] * 8 != lVar4);
          }
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
        }
        else {
          uVar6 = 1;
          if (*(int *)((longlong)param_1 + 0x164) != 1) {
            uVar6 = 0;
          }
        }
        if (((((*(int *)((longlong)param_1 + 0x3c) != 0) &&
              (uVar1 = *(uint *)(param_1 + 7), -1 < (int)uVar1)) &&
             (((int)uVar1 < DAT_14c9647dc &&
              ((plVar5 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x3c))))
              ))) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar5, lVar4 != 0))
        {
          puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar3 = &PTR_FUN_14b477890;
          *(byte *)(puVar3 + 1) = (byte)uVar6;
          FUN_14039144e(lVar4,puVar3);
        }
        if ((byte)uVar6 != ((byte)*(uint *)(lVar2 + 0x634) & 1)) {
          *(uint *)(lVar2 + 0x634) = *(uint *)(lVar2 + 0x634) & 0xfffffffe | uVar6;
        }
      }
    }
  }
LAB_1405aff58:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b0040 FUN_1405b0040 body=128 status=ok
// SIG undefined FUN_1405b0040(void)

void FUN_1405b0040(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + lVar5);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_145723d82(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405b00b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  return;
}



// FUNCTION 1405b00c0 FUN_1405b00c0 body=217 status=ok
// SIG undefined FUN_1405b00c0(void)

undefined8 FUN_1405b00c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  float local_50;
  char local_4c;
  float local_48;
  char local_44;
  ulonglong local_40;
  
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar2 = (float)param_3;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    if (0.0 < *(float *)(param_1 + 0x118)) {
      uVar1 = FUN_1405b046e(param_2);
      uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
      fVar2 = (float)uVar1 / *(float *)(param_1 + 0x118);
    }
    else {
      FUN_1405b0300(&local_48,param_1 + 0x48);
      if (local_44 == '\0') {
        FUN_1405b019a(&local_50,param_1 + 0x48);
        if (local_4c == '\x01') {
          if (0.0 < local_50) {
            uVar1 = FUN_1405b046e(param_2);
            uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
            fVar2 = (float)uVar1 / local_50;
          }
        }
      }
      else {
        uVar3 = 0;
        fVar2 = local_48;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT44(uVar3,fVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b019a FUN_1405b019a body=357 status=ok
// SIG undefined FUN_1405b019a(void)

undefined4 * FUN_1405b019a(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8cc90 >> 0x10);
    uVar8 = (uint)DAT_14cb8cc90 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar9 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8cc90 >> 0x20) + ((uint)DAT_14cb8cc90 << 0x10 | uVar8)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar9 * 0x38) == DAT_14cb8cc90) {
          uVar4 = 0;
          if ((lVar1 != 0) && (puVar6 = (undefined4 *)(lVar1 + 8), puVar6 != (undefined4 *)0x0)) {
            if (*(char *)(lVar1 + 0x28) == '\x03') {
              uVar10 = *puVar6;
            }
            else {
              puVar7 = &local_58;
              FUN_1400b56fe(puVar7,puVar6,CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
              uVar10 = 0;
              if (local_38 != 0) {
                uVar10 = local_58;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_40) {
                  puVar7 = (undefined4 *)CONCAT44(uStack_54,local_58);
                }
                (*pcVar2)(puVar7);
              }
              if (0x18 < local_40) {
                FUN_1400020a8(CONCAT44(uStack_54,local_58));
              }
            }
            *param_1 = uVar10;
            uVar4 = 1;
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x30);
        uVar4 = 0;
      } while (iVar9 != -1);
      goto LAB_1405b01c1;
    }
  }
  uVar4 = 0;
LAB_1405b01c1:
  *(undefined1 *)(param_1 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405b0300 FUN_1405b0300 body=364 status=ok
// SIG undefined FUN_1405b0300(void)

undefined4 * FUN_1405b0300(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8cc88 >> 0x10);
    uVar8 = (uint)DAT_14cb8cc88 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar9 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8cc88 >> 0x20) + ((uint)DAT_14cb8cc88 << 0x10 | uVar8)
                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar9 * 0x38) == DAT_14cb8cc88) {
          uVar4 = 0;
          if ((lVar1 != 0) && (puVar6 = (undefined4 *)(lVar1 + 8), puVar6 != (undefined4 *)0x0)) {
            if (*(char *)(lVar1 + 0x28) == '\x03') {
              uVar10 = *puVar6;
            }
            else {
              puVar7 = &local_58;
              FUN_1400b56fe(puVar7,puVar6,CONCAT71((int7)((ulonglong)lVar1 >> 8),3));
              uVar10 = local_58;
              if (local_38 == 0) {
                uVar10 = 0x3f800000;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (0x18 < local_40) {
                  puVar7 = (undefined4 *)CONCAT44(uStack_54,local_58);
                }
                (*pcVar2)(puVar7);
              }
              if (0x18 < local_40) {
                FUN_1400020a8(CONCAT44(uStack_54,local_58));
              }
            }
            *param_1 = uVar10;
            uVar4 = 1;
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x30);
        uVar4 = 0;
      } while (iVar9 != -1);
      goto LAB_1405b0327;
    }
  }
  uVar4 = 0;
LAB_1405b0327:
  *(undefined1 *)(param_1 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405b046e FUN_1405b046e body=72 status=ok
// SIG undefined FUN_1405b046e(void)

ulonglong FUN_1405b046e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1405b04b6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0xcc);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405b04a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1);
  return uVar2;
}



// FUNCTION 1405b04b6 FUN_1405b04b6 body=228 status=ok
// SIG undefined FUN_1405b04b6(void)

longlong FUN_1405b04b6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf3e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4ec;
    local_38 = &LAB_14785cebb;
    local_40 = &LAB_140aecc79;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/Engine",L"BlendSpace",&DAT_14cabf3e0,&DAT_14785ceba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf3e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b05c4 FUN_1405b05c4 body=40 status=ok
// SIG undefined FUN_1405b05c4(void)

undefined8 FUN_1405b05c4(undefined8 param_1,int param_2)

{
  FUN_1405b05ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405b05ec FUN_1405b05ec body=182 status=ok
// SIG undefined FUN_1405b05ec(void)

void FUN_1405b05ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8f9960;
  FUN_1405b087a(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b06a2(param_1);
  return;
}



// FUNCTION 1405b06a2 FUN_1405b06a2 body=472 status=ok
// SIG undefined FUN_1405b06a2(void)

void FUN_1405b06a2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b491670;
  FUN_14060ff25(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b08b0(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 0x18);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405b087a FUN_1405b087a body=54 status=ok
// SIG undefined FUN_1405b087a(void)

void FUN_1405b087a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405b08b0 FUN_1405b08b0 body=58 status=ok
// SIG undefined FUN_1405b08b0(void)

void FUN_1405b08b0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x58);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405b08ea FUN_1405b08ea body=599 status=ok
// SIG undefined FUN_1405b08ea(void)

void FUN_1405b08ea(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  
  iVar2 = (int)param_1[0x2d];
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x2c];
    if ((uint *)param_1[0x2c] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x2a);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar11 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar11 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar11 == uVar14) goto LAB_1405b099a;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = param_1[0x28];
      lVar13 = (longlong)iVar4;
      fVar15 = *(float *)(lVar9 + 8 + lVar13 * 0x14) - param_2;
      *(float *)(lVar9 + 8 + lVar13 * 0x14) = fVar15;
      if (fVar15 <= 0.0) {
        (**(code **)(*param_1 + 0x2a8))(param_1,lVar9 + lVar13 * 0x14);
      }
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar5 = (uint *)param_1[0x2c];
      if ((uint *)param_1[0x2c] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x2a);
      }
      iVar3 = (int)param_1[0x2d];
      iVar4 = (int)uVar14;
      lVar9 = (longlong)iVar4;
      uVar8 = puVar5[lVar9] & uVar12;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar13 = 0;
          do {
            uVar8 = puVar5[lVar9 + lVar13 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1405b0a8b;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar9 != lVar13);
          uVar12 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1405b0a8b:
        uVar11 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_1405b099a:
  if ((longlong)(int)param_1[0x33] != 0) {
    lVar9 = param_1[0x32];
    lVar13 = (longlong)(int)param_1[0x33] << 3;
    do {
      FUN_1405b161a(param_1 + 0x28,lVar9);
      lVar9 = lVar9 + 8;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (*(int *)((longlong)param_1 + 0x19c) < 0) {
    FUN_1403de8ba(param_1 + 0x32,0);
  }
  FUN_1405b0b42(param_1,param_2);
  return;
}



// FUNCTION 1405b0b42 FUN_1405b0b42 body=79 status=ok
// SIG undefined FUN_1405b0b42(void)

void FUN_1405b0b42(longlong param_1)

{
  FUN_1405b0b92();
  if (*(int *)(param_1 + 0x128) == 0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  FUN_1405b0d7a(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x128) = 0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001405b0b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x80));
  return;
}



// FUNCTION 1405b0b92 FUN_1405b0b92 body=286 status=ok
// SIG undefined FUN_1405b0b92(void)

void FUN_1405b0b92(longlong *param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  SRWLock = (PSRWLOCK)(param_1 + 7);
  AcquireSRWLockShared(SRWLock);
  lVar6 = param_1[6];
  ReleaseSRWLockShared(SRWLock);
  if ((longlong)(int)lVar6 < 1) {
    return;
  }
  plVar1 = param_1 + 5;
  lVar8 = 0;
  do {
    AcquireSRWLockShared(SRWLock);
    lVar3 = *(longlong *)(*plVar1 + lVar8 * 8);
    ReleaseSRWLockShared(SRWLock);
    if (lVar3 != 0) {
      (**(code **)(*param_1 + 0x2c0))(param_1,lVar3);
    }
    lVar8 = lVar8 + 1;
  } while ((int)lVar6 != lVar8);
  AcquireSRWLockExclusive(SRWLock);
  iVar2 = (int)param_1[6];
  if (0 < (longlong)iVar2) {
    iVar10 = -iVar2;
    uVar9 = (longlong)iVar2;
    do {
      puVar4 = *(undefined8 **)(*plVar1 + -8 + uVar9 * 8);
      if (puVar4 == (undefined8 *)0x0) {
LAB_1405b0c4d:
        uVar7 = *(uint *)(param_1 + 6);
        if (uVar9 != uVar7) {
          memmove((void *)(param_1[5] + uVar9 * 8 + -8),(void *)(param_1[5] + uVar9 * 8),
                  (longlong)(int)(uVar7 + iVar10) << 3);
          uVar7 = *(uint *)(param_1 + 6);
        }
        *(uint *)(param_1 + 6) = uVar7 - 1;
        FUN_1405b0cec(plVar1);
      }
      else if (*(char *)(puVar4 + 1) == '\x01') {
        (**(code **)*puVar4)(puVar4,1);
        goto LAB_1405b0c4d;
      }
      iVar10 = iVar10 + 1;
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405b0c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1405b0cb0 FUN_1405b0cb0 body=29 status=ok
// SIG undefined FUN_1405b0cb0(void)

undefined8 FUN_1405b0cb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405b0cce FUN_1405b0cce body=29 status=ok
// SIG undefined FUN_1405b0cce(void)

undefined8 FUN_1405b0cce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405b0cec FUN_1405b0cec body=142 status=ok
// SIG undefined FUN_1405b0cec(void)

void FUN_1405b0cec(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1405b0d7a FUN_1405b0d7a body=388 status=ok
// SIG undefined FUN_1405b0d7a(void)

void FUN_1405b0d7a(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  SRWLock = (PSRWLOCK)(param_1 + 200);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0xb0);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 < 1) {
    if (*(int *)(param_1 + 0x68) < 1) goto LAB_1405b0e53;
    AcquireSRWLockShared(SRWLock);
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    FUN_1403de7ba(local_88 + 4,&DAT_14caa8558);
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_1403de7ba(local_88,param_1 + 0x60);
  }
  else {
    AcquireSRWLockShared(SRWLock);
    FUN_1405b0f00();
    FUN_1405b0f00();
  }
  ReleaseSRWLockShared(SRWLock);
  local_98 = 0;
  FUN_1405b0f7a(param_1,param_1 + 0x40,local_88 + 4,local_88);
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[6] != 0) {
    FUN_1400020a8();
  }
  if (local_88[4] != 0) {
    FUN_1400020a8();
  }
LAB_1405b0e53:
  AcquireSRWLockExclusive(SRWLock);
  FUN_1403de7ba(param_1 + 0x88,param_1 + 0x40);
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b0f00 FUN_1405b0f00 body=121 status=ok
// SIG undefined FUN_1405b0f00(void)

undefined8 *
FUN_1405b0f00(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = 0;
    do {
      if ((longlong)(int)param_4[1] != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*param_4 + lVar2) == *(longlong *)(uVar3 * 8 + *param_3))
          goto LAB_1405b0f62;
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)param_4[1] * 8 != lVar2);
      }
      FUN_140608954(param_2);
LAB_1405b0f62:
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return param_2;
}



// FUNCTION 1405b0f7a FUN_1405b0f7a body=1695 status=ok
// SIG undefined FUN_1405b0f7a(void)

ulonglong FUN_1405b0f7a(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       char param_5)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128 [2];
  longlong local_118;
  longlong local_108 [2];
  longlong local_f8;
  longlong local_e8 [13];
  int local_80;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x20);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_130 = param_2;
    FUN_1403de7ba(&local_68,plVar1);
    uVar17 = FUN_143271da0(&local_68,param_4);
    uVar2 = *(uint *)(param_3 + 1);
    if ((ulonglong)uVar2 != 0) {
      lVar11 = 0;
      do {
        lVar13 = *param_3;
        lVar6 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar13 + lVar11);
        uVar17 = extraout_XMM0_Da;
        if (lVar6 != 0) {
          FUN_140608954(&local_68,lVar13 + lVar11);
          uVar17 = FUN_143271da0(&local_68,lVar6 + 0x88);
        }
        lVar11 = lVar11 + 8;
      } while ((ulonglong)uVar2 << 3 != lVar11);
    }
    uVar17 = FUN_1405b0f00(uVar17,local_e8 + 0xc,&local_68,plVar1);
    FUN_1405b0f00(uVar17,local_e8 + 8,plVar1,&local_68);
    FUN_14094f414(local_e8 + 0xc,local_e8 + 8);
    if (local_e8[10] != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_130;
    if (local_e8[8] != 0) {
      FUN_1400020a8();
    }
    if (0 < local_80) {
      FUN_1403de7ba(plVar1,&local_68);
      bVar16 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar16) {
        FUN_1403de8ba(&local_68,0);
      }
      bVar16 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar16) {
        FUN_1403de8ba(&local_58,0);
      }
    }
    uVar17 = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    uVar2 = *(uint *)(lVar11 + 0x28);
    if ((ulonglong)uVar2 != 0) {
      uVar12 = 0;
      do {
        plVar14 = (longlong *)(uVar12 * 8 + *plVar1);
        lVar11 = (**(code **)(*param_1 + 0x2c8))(param_1,plVar14);
        uVar17 = extraout_XMM0_Da_00;
        if (lVar11 != 0) {
          FUN_14094f414(local_e8 + 4,lVar11 + 0x28);
          uVar17 = FUN_14094f414(local_e8,lVar11 + 0x48);
          lVar13 = *plVar14;
          if ((lVar13 != 0) && ((longlong)local_80 != 0)) {
            lVar6 = 0;
            do {
              if (*(longlong *)(local_e8[0xc] + lVar6) == lVar13) {
                if ((longlong)(int)param_1[0x1f] != 0) {
                  plVar7 = (longlong *)param_1[0x1e];
                  plVar14 = plVar7 + (int)param_1[0x1f];
                  do {
                    if (*(int *)(lVar11 + 0x30) != 0) {
                      lVar13 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar11 + 0x28) + lVar13) == *plVar7)
                        goto LAB_1405b11f9;
                        lVar13 = lVar13 + 8;
                      } while ((longlong)*(int *)(lVar11 + 0x30) << 3 != lVar13);
                    }
                    plVar7 = plVar7 + 1;
                  } while (plVar7 != plVar14);
                }
                break;
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)local_80 * 8 != lVar6);
          }
        }
LAB_1405b11f9:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar2);
    }
    local_80 = 0;
    if (local_7c < 0) {
      uVar17 = FUN_1403de8ba(local_e8 + 0xc,0);
    }
    local_70 = 0;
    if (local_6c < 0) {
      uVar17 = FUN_1403de8ba(&local_78,0);
    }
    lVar11 = 0;
    if ((local_e8[5] & 0xffffffffU) != 0) {
      lVar11 = (local_e8[5] & 0xffffffffU) << 3;
      lVar13 = 0;
      do {
        lVar6 = local_e8[4] + lVar13;
        cVar4 = FUN_1410a8654(lVar6,local_e8);
        uVar17 = extraout_XMM0_Da_01;
        if (cVar4 == '\0') {
          uVar17 = FUN_140608954(local_e8 + 8,lVar6);
        }
        lVar13 = lVar13 + 8;
      } while (lVar11 != lVar13);
    }
    lVar13 = local_130;
    uVar17 = FUN_1405b0f00(uVar17,local_108,local_e8 + 8,local_130);
    FUN_1405b0f00(uVar17,local_128,lVar13,local_e8 + 8);
    FUN_14094f414(local_108,local_128);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_128[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1403de7ba(param_1 + 0x1a,local_108);
    if ((param_5 == '\0') && ((int)param_1[0x1b] < 1)) {
      uVar12 = 0;
    }
    else {
      FUN_1403de7ba(lVar13,local_e8 + 8);
      bVar16 = local_e8[9] < 0;
      local_e8[9] = local_e8[9] & 0xffffffff00000000;
      if (bVar16) {
        FUN_1403de8ba(local_e8 + 8,0);
      }
      bVar16 = local_e8[0xb] < 0;
      local_e8[0xb] = local_e8[0xb] & 0xffffffff00000000;
      if (bVar16) {
        FUN_1403de8ba(local_e8 + 10,0);
      }
      iVar5 = *(int *)((longlong)param_1 + 0x124);
      *(int *)((longlong)param_1 + 0x124) = iVar5 + 1;
      uVar8 = (ulonglong)(int)param_1[0x23];
      if ((longlong)uVar8 < 1) {
        *(int *)((longlong)param_1 + 0x124) = iVar5;
        uVar12 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
      }
      else {
        plVar1 = param_1 + 0x22;
        bVar16 = false;
        do {
          uVar12 = uVar8 * 0x10 - 8;
          uVar15 = uVar8;
          while (((*(int *)(*plVar1 + uVar12) != 0 &&
                  (plVar14 = *(longlong **)(*plVar1 + -8 + uVar12), plVar14 != (longlong *)0x0)) &&
                 (cVar4 = (**(code **)(*plVar14 + 0x60))
                                    (plVar14,lVar13,CONCAT31((int3)(uVar2 >> 8),param_5)),
                 cVar4 != '\0'))) {
            uVar12 = uVar12 - 0x10;
            bVar3 = uVar15 < 2;
            uVar15 = uVar15 - 1;
            if (bVar3) {
              iVar5 = *(int *)((longlong)param_1 + 0x124) + -1;
              *(int *)((longlong)param_1 + 0x124) = iVar5;
              uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
              if (bVar16) goto LAB_1405b14fa;
              goto LAB_1405b13f0;
            }
          }
          uVar8 = uVar15 - 1;
          bVar16 = true;
        } while (1 < uVar15);
        iVar5 = *(int *)((longlong)param_1 + 0x124) + -1;
        *(int *)((longlong)param_1 + 0x124) = iVar5;
LAB_1405b14fa:
        uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
        if (iVar5 < 1) {
          iVar5 = (int)param_1[0x23];
          iVar9 = iVar5;
          if (0 < iVar5) {
            iVar10 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                  (plVar14 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                  plVar14 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar14 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar1,iVar10);
                FUN_14005b248(plVar1);
              }
              else {
                iVar10 = iVar10 + 1;
              }
              iVar9 = (int)param_1[0x23];
            } while (iVar10 < iVar9);
          }
          iVar10 = 2;
          if (2 < iVar9 * 2) {
            iVar10 = iVar9 * 2;
          }
          *(int *)(param_1 + 0x24) = iVar10;
          if ((iVar10 < iVar5) && (*(int *)((longlong)param_1 + 0x11c) != iVar9)) {
            FUN_14045812c(plVar1);
          }
        }
      }
    }
LAB_1405b13f0:
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[6] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[4] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[10] != 0) {
      FUN_1400020a8();
    }
    if (local_e8[8] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_e8[0xc] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1405b161a FUN_1405b161a body=210 status=ok
// SIG undefined FUN_1405b161a(void)

undefined8 FUN_1405b161a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)(((uint)lVar3 << 0x10 | uVar8) + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*plVar1 == lVar3) {
          iVar5 = *(int *)((longlong)plVar6 + (longlong)(int)plVar1[2] * 4);
          if (iVar5 == iVar2) {
            piVar7 = (int *)((longlong)plVar6 + (longlong)(int)plVar1[2] * 4);
          }
          else {
            do {
              piVar7 = (int *)(*param_1 + (longlong)iVar5 * 0x14 + 0xc);
              iVar5 = *piVar7;
            } while (iVar5 != iVar2);
          }
          *piVar7 = *(int *)((longlong)plVar1 + 0xc);
          FUN_1405b16ec(param_1,iVar2,1);
          return 1;
        }
        iVar2 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1405b16ec FUN_1405b16ec body=138 status=ok
// SIG undefined FUN_1405b16ec(void)

void FUN_1405b16ec(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405b1776 FUN_1405b1776 body=232 status=ok
// SIG undefined FUN_1405b1776(void)

void FUN_1405b1776(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x180);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x188) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 0x14) == lVar1) {
          iVar5 = *(int *)(param_1 + 0x198);
          *(uint *)(param_1 + 0x198) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x19c) < iVar5 + 1U) {
            FUN_1403de658((longlong *)(param_1 + 400),iVar5);
          }
          *(longlong *)(*(longlong *)(param_1 + 400) + (longlong)iVar5 * 8) = *param_2;
          break;
        }
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 0x14 + 0xc);
      } while (iVar5 != -1);
    }
  }
  FUN_1405b185e(param_1,param_2);
  return;
}



// FUNCTION 1405b185e FUN_1405b185e body=91 status=ok
// SIG undefined FUN_1405b185e(void)

void FUN_1405b185e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  iVar1 = FUN_1405b18ba(param_1 + 0xa8,param_2);
  if (0 < iVar1) {
    FUN_1401fa756(param_1 + 0xa8);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x128) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001405b18b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 200));
  return;
}



// FUNCTION 1405b18ba FUN_1405b18ba body=122 status=ok
// SIG undefined FUN_1405b18ba(void)

undefined8 FUN_1405b18ba(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return 0;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1405b1942 FUN_1405b1942 body=31 status=ok
// SIG undefined FUN_1405b1942(void)

undefined8 FUN_1405b1942(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405b1962 FUN_1405b1962 body=52 status=ok
// SIG undefined FUN_1405b1962(void)

void FUN_1405b1962(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_1405b1996();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)(param_1 + 0xb0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001405b1993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1405b1996 FUN_1405b1996 body=129 status=ok
// SIG undefined FUN_1405b1996(void)

undefined4 FUN_1405b1996(longlong *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x18] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x270))(param_1,param_1[0x17]);
    if ((char)uVar1 == '\0') {
      FUN_14572541c(param_1);
      if (((char)param_1[0x1b] == '\0') && ((*(byte *)(param_1 + 0x14) & 0x20) == 0)) {
        *(undefined1 *)(param_1 + 0x1b) = 0;
      }
    }
    param_1[0x18] = 0;
    if (param_1[0x19] < 0) {
      FUN_140d2d4a8(param_1 + 0x17,0);
    }
  }
  return uVar1;
}



// FUNCTION 1405b1a32 FUN_1405b1a32 body=57 status=ok
// SIG undefined FUN_1405b1a32(void)

void FUN_1405b1a32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25788 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25788 = FUN_140002ddd(FUN_141819041,uVar1,L"WwiseSwitchDef");
  }
  return;
}



// FUNCTION 1405b1a6c FUN_1405b1a6c body=1686 status=ok
// SIG undefined FUN_1405b1a6c(void)

void FUN_1405b1a6c(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
  float fVar18;
  float fVar19;
  undefined1 auStack_198 [44];
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_162;
  undefined1 local_161;
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined1 **local_140;
  undefined4 local_138;
  longlong *local_130;
  undefined8 **local_128;
  float local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  float local_dc;
  float local_d8;
  undefined1 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_af;
  double local_a8;
  double local_a0;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar11 = FUN_14477dc2a();
  FUN_14477dadc(uVar11,param_2);
  if (param_1[0x1e] != 0) {
    lVar12 = (**(code **)(*param_1 + 0x200))(param_1);
    if (lVar12 != 0) {
      FUN_14486b2ec(param_1[0x1e] + 0x8e8,(longlong)param_1 + 0xe4,lVar12);
    }
  }
  plVar13 = (longlong *)(**(code **)(*param_1 + 0x198))(param_1);
  if ((plVar13 == (longlong *)0x0) || (plVar13[8] == 0)) goto LAB_1405b20a0;
  (**(code **)(*param_1 + 0x1a0))(param_1,&local_a8);
  if ((longlong *)param_1[0xd] != plVar13) {
    cVar8 = (**(code **)(*param_1 + 0x1c0))(param_1);
    FUN_1448d844e(param_1[10],(int)param_1[0xb]);
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
      FUN_1405b2360(param_1 + 10,0);
    }
    if (cVar8 != '\0') {
      fVar16 = (float)(**(code **)(*param_1 + 0x1a8))(param_1);
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x2c) = fVar16;
      fVar16 = (float)(**(code **)(*param_1 + 0x1a8))(param_1);
      if ((fVar16 == 0.0) && (!NAN(fVar16))) {
        fVar16 = (float)(**(code **)(*param_1 + 0x1b0))(param_1);
        if (fVar16 < 0.0) {
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
        }
      }
    }
    lVar12 = (**(code **)(*param_1 + 0x198))(param_1);
    if (lVar12 != 0) {
      uVar11 = (**(code **)(*param_1 + 0x198))(param_1);
      FUN_1405b2104(uVar11,param_1 + 8,2);
    }
  }
  fVar16 = (float)(**(code **)(*param_1 + 0x1b0))(param_1);
  fVar17 = 0.0;
  if (param_1[0x1f] == 0) {
LAB_1405b1dfb:
    local_168 = 0;
    local_16c = 0;
  }
  else {
    if (0 < (longlong)(int)param_1[0xb]) {
      lVar12 = param_1[10];
      lVar14 = 0;
      do {
        iVar4 = *(int *)(lVar12 + lVar14);
        if (((-1 < (longlong)iVar4) && (iVar4 < (int)plVar13[0x23])) &&
           (lVar5 = *(longlong *)(plVar13[0x22] + (longlong)iVar4 * 0x28), lVar5 != 0)) {
          fVar18 = *(float *)(lVar5 + 0xb0) * *(float *)(lVar12 + 0x20 + lVar14);
          uVar15 = -(uint)(fVar18 != 0.0);
          fVar19 = *(float *)(lVar12 + 0x10 + lVar14);
          if (1.0 <= fVar19) {
            fVar19 = 1.0;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          fVar17 = fVar17 + fVar19 * (float)(~uVar15 & 0x3f800000 | (uint)ABS(fVar18) & uVar15) *
                                     *(float *)(lVar5 + 0x1f8);
        }
        lVar14 = lVar14 + 0x60;
      } while ((longlong)(int)param_1[0xb] * 0x60 != lVar14);
    }
    fVar19 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 < fVar16) * 4);
    fVar18 = *(float *)(param_1[0x1f] + 0x8c8);
    *(char *)(param_1 + 0x20) = (char)param_1[0x13];
    if ((char)param_1[0x13] == '\x01') {
      if ((char)param_1[0x1b] == '\x01') {
        if (*(char *)((longlong)param_1 + 0xd9) == '\x02') {
          if ((double)*(float *)(plVar13 + 0x30) <= local_a0) {
            fVar2 = *(float *)((longlong)plVar13 + 0x184);
            dVar3 = local_a0;
            goto LAB_1405b1d46;
          }
        }
        else if ((*(char *)((longlong)param_1 + 0xd9) == '\x01') &&
                ((double)*(float *)(plVar13 + 0x2c) <= local_a8)) {
          fVar2 = *(float *)((longlong)plVar13 + 0x164);
          dVar3 = local_a8;
LAB_1405b1d46:
          if (dVar3 <= (double)fVar2) {
            *(undefined1 *)(param_1 + 0x20) = 0;
            goto LAB_1405b1dae;
          }
        }
      }
      if (fVar17 <= 0.0) goto LAB_1405b1dfb;
      fVar19 = fVar19 * (fVar18 / fVar17);
      fVar16 = fVar19;
      if (2.0 <= fVar19) {
        fVar16 = 2.0;
      }
      fVar17 = fVar16;
      if (fVar16 <= 0.0) {
        fVar17 = 0.0;
      }
      *(float *)(param_1 + 0x1a) = fVar17;
      fVar16 = (float)(~-(uint)(0.0 < fVar16) & 0x3f800000 |
                      (uint)(fVar19 / fVar16) & -(uint)(0.0 < fVar16));
      local_16c = 1;
      local_168 = 0;
    }
    else {
LAB_1405b1dae:
      if (*(float *)((longlong)param_1 + 0xdc) <= 0.0) {
        if ((0.0 < fVar17) && ((char)param_1[0x1c] == '\x01')) {
          fVar16 = fVar16 * (fVar18 / fVar17);
        }
        goto LAB_1405b1dfb;
      }
      uVar11 = FUN_1405b2250(plVar13);
      fVar16 = fVar19 * (extraout_XMM0_Da / *(float *)((longlong)param_1 + 0xdc));
      local_168 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      local_16c = 0;
    }
  }
  fVar17 = (float)(**(code **)(*plVar13 + 0x2b0))(plVar13);
  fVar19 = (fVar17 * 3.0) / *(float *)(param_2 + 5);
  fVar17 = 1.0;
  if (1.0 <= fVar19) {
    fVar17 = fVar19;
  }
  if (fVar17 < ABS(fVar16)) {
    fVar16 = (float)(-(uint)(0.0 < fVar16) & 0x3f800000 |
                    ~-(uint)(0.0 < fVar16) & -(uint)(fVar16 < 0.0) & 0xbf800000) * fVar17;
  }
  local_90 = &local_78;
  local_78 = (undefined1 *)0x0;
  local_80 = &local_90;
  local_140 = &local_88;
  local_88 = &LAB_1474d978e;
  local_128 = &local_140;
  local_130 = (longlong *)&LAB_144b1e5de;
  local_160 = plVar13;
  FUN_14015e554(param_2[1] + 0x148,DAT_14caccb08,&local_130);
  local_148 = local_78;
  local_150 = param_1 + 3;
  local_158 = (longlong)param_1 + 0x2c;
  uVar10 = *(undefined4 *)(param_2 + 4);
  local_161 = (**(code **)(*param_1 + 0x1d8))(param_1);
  local_162 = (**(code **)(*param_1 + 0x1d0))(param_1);
  uVar9 = (**(code **)(*param_1 + 0x120))(param_1);
  local_f0 = param_1 + 8;
  local_e8 = param_1 + 10;
  local_114 = 0;
  local_110 = 0x100;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = (longlong *)0x0;
  local_c0 = 0;
  local_bc = 0;
  local_b4 = 0;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(local_160);
  }
  plVar13 = local_160;
  local_130 = local_160;
  local_dc = (float)local_a8;
  local_d8 = (float)local_a0;
  local_d4 = local_162;
  local_128 = (undefined8 **)local_158;
  local_c8 = local_150;
  local_114._0_2_ = CONCAT11(local_161,uVar9);
  local_118 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_d0 = param_1 + 6;
  local_b0 = (undefined1)local_16c;
  local_af = (undefined1)local_168;
  local_120 = fVar16;
  local_11c = uVar10;
  uVar9 = (**(code **)(*param_1 + 0x168))(param_1);
  uVar10 = (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x158))(param_1,&local_78);
  ppuVar7 = local_80;
  local_88 = local_78;
  local_80._6_2_ = SUB82(ppuVar7,6);
  local_80._0_6_ = (uint6)CONCAT14(uVar9,uVar10);
  local_140 = (undefined1 **)*param_2;
  local_138 = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_14486b6e0(local_148,&local_130);
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(plVar13);
  }
  plVar6 = local_f8;
  param_1[0xd] = (longlong)plVar13;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_f8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1405b20a0:
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b2104 FUN_1405b2104 body=331 status=ok
// SIG undefined FUN_1405b2104(void)

void FUN_1405b2104(longlong param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 != (longlong *)0x0) {
    FUN_1405b2442(param_2,param_3,1);
    if (param_3 != 0) {
      lVar9 = 0x28;
      lVar8 = 0;
      do {
        lVar7 = *param_2;
        bVar6 = *(byte *)(param_1 + 0x16d + lVar8 * 2);
        uVar1 = *(undefined4 *)(param_1 + 0x9c + lVar8);
        uVar2 = *(undefined4 *)(param_1 + 0x160 + lVar8 * 2);
        uVar3 = *(undefined4 *)(param_1 + 0x164 + lVar8 * 2);
        uVar4 = *(undefined4 *)(param_1 + 0x94 + lVar8);
        uVar5 = *(undefined4 *)(param_1 + 0x98 + lVar8);
        *(uint *)(lVar7 + -0x24 + lVar9) = (uint)*(byte *)(param_1 + 0xa0 + lVar8);
        *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
        if (*(int *)(lVar7 + 0xc + lVar9) != 0) {
          FUN_1401e1376(lVar9 + lVar7,0);
        }
        *(undefined4 *)(lVar7 + -0x20 + lVar9) = 0;
        *(undefined4 *)(lVar7 + -0x1c + lVar9) = uVar4;
        *(undefined4 *)(lVar7 + -0x18 + lVar9) = uVar5;
        *(undefined4 *)(lVar7 + -0x14 + lVar9) = uVar2;
        *(undefined4 *)(lVar7 + -0x10 + lVar9) = uVar3;
        *(undefined4 *)(lVar7 + -0xc + lVar9) = uVar1;
        *(byte *)(lVar7 + -8 + lVar9) = bVar6 ^ 1;
        *(undefined4 *)(lVar7 + -4 + lVar9) = 0;
        *(undefined4 *)(lVar7 + -0x28 + lVar9) = 0;
        lVar8 = lVar8 + 0x10;
        lVar9 = lVar9 + 0x38;
      } while ((ulonglong)param_3 << 4 != lVar8);
    }
  }
  return;
}



// FUNCTION 1405b2250 FUN_1405b2250 body=272 status=ok
// SIG undefined FUN_1405b2250(void)

float FUN_1405b2250(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = (int)param_2[1];
  if (iVar4 < 1) {
    fVar10 = 0.0;
  }
  else {
    lVar3 = *param_2;
    lVar5 = 0;
    lVar6 = 0;
    fVar10 = 0.0;
    do {
      iVar1 = *(int *)(lVar3 + lVar5);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x118))) &&
         (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x110) + (longlong)iVar1 * 0x28),
         plVar2 != (longlong *)0x0)) {
        fVar11 = *(float *)(plVar2 + 0x16) * *(float *)(lVar3 + 0x20 + lVar5);
        fVar8 = (float)(**(code **)(*plVar2 + 0x2b0))();
        uVar7 = -(uint)(fVar11 != 0.0);
        lVar3 = *param_2;
        fVar9 = *(float *)(lVar3 + 0x10 + lVar5);
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar10 = fVar10 + fVar9 * (fVar8 / (float)(~uVar7 & 0x3f800000 | (uint)ABS(fVar11) & uVar7))
        ;
        iVar4 = (int)param_2[1];
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x60;
    } while (lVar6 < iVar4);
  }
  return fVar10;
}



// FUNCTION 1405b2360 FUN_1405b2360 body=226 status=ok
// SIG undefined FUN_1405b2360(void)

void FUN_1405b2360(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 1405b2442 FUN_1405b2442 body=154 status=ok
// SIG undefined FUN_1405b2442(void)

void FUN_1405b2442(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1405b24dc(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1 + 0x28);
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14794aeec(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_14794af48(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405b24dc FUN_1405b24dc body=366 status=ok
// SIG undefined FUN_1405b24dc(void)

void FUN_1405b24dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1405b2561;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1405b2561:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 1405b264a FUN_1405b264a body=331 status=ok
// SIG undefined FUN_1405b264a(void)

undefined8 FUN_1405b264a(longlong *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1[10];
  *param_2 = *(undefined2 *)(lVar3 + 0xd8);
  puVar1 = (undefined4 *)(param_2 + 2);
  if ((undefined2 *)(lVar3 + 0xd8) == param_2) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar3 + 0xe8);
    uVar7 = *(undefined8 *)(lVar3 + 0xf8);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(param_2 + 0x10) = uVar7;
  }
  else {
    if (*(char *)(lVar3 + 0xe0) == '\x01') {
      *puVar1 = *(undefined4 *)(lVar3 + 0xdc);
      uVar8 = 1;
LAB_1405b278e:
      *(undefined1 *)(param_2 + 4) = uVar8;
    }
    else if (*(char *)(param_2 + 4) != '\0') {
      uVar8 = 0;
      goto LAB_1405b278e;
    }
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar3 + 0xe8);
    uVar4 = *(undefined4 *)(lVar3 + 0xf4);
    uVar5 = *(undefined4 *)(lVar3 + 0xf8);
    uVar6 = *(undefined4 *)(lVar3 + 0xfc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar3 + 0xf0);
    *(undefined4 *)(param_2 + 0xe) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    *(undefined4 *)(param_2 + 0x12) = uVar6;
    iVar2 = *(int *)(lVar3 + 0x108);
    _Src = *(void **)(lVar3 + 0x100);
    *(int *)(param_2 + 0x18) = iVar2;
    if (iVar2 == 0 && *(int *)(param_2 + 0x1a) == 0) {
      *(undefined4 *)(param_2 + 0x1a) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 0x14,iVar2);
      if (iVar2 != 0) {
        memcpy(*(void **)(param_2 + 0x14),_Src,(longlong)iVar2 * 2);
      }
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_40);
  if (&local_40 != puVar1) {
    if ((local_3c & 1) == 0) {
      if (*(char *)(param_2 + 4) != '\x01') goto LAB_1405b2731;
      uVar8 = 0;
    }
    else {
      *puVar1 = local_40;
      uVar8 = 1;
    }
    *(undefined1 *)(param_2 + 4) = uVar8;
  }
LAB_1405b2731:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b27b2 FUN_1405b27b2 body=76 status=ok
// SIG undefined FUN_1405b27b2(void)

float * FUN_1405b27b2(longlong param_1,float *param_2)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0xa8) < 1) {
    uVar1 = 0;
  }
  else {
    fVar2 = (float)FUN_140296320();
    fVar3 = *(float *)(param_1 + 0x78) - (fVar2 - **(float **)(param_1 + 0xa0));
    fVar2 = 0.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    *param_2 = fVar2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1405b27fe FUN_1405b27fe body=185 status=ok
// SIG undefined FUN_1405b27fe(void)

void FUN_1405b27fe(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x400000000;
  (**(code **)(*param_1 + 0xd8))(param_1,local_70,param_4);
  puVar1 = local_50;
  if (local_50 == (undefined1 *)0x0) {
    puVar1 = local_70;
  }
  lVar2 = (longlong)(int)local_48;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_1405b28b8(*(undefined8 *)(puVar1 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b28b8 FUN_1405b28b8 body=560 status=ok
// SIG undefined FUN_1405b28b8(void)

void FUN_1405b28b8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x400000000;
  local_100 = param_2;
  FUN_1405b2cf0(param_1,local_a0,1);
  puVar4 = local_80;
  if (local_80 == (undefined1 *)0x0) {
    puVar4 = local_a0;
  }
  lVar5 = (longlong)(int)local_78;
  if (lVar5 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(puVar4 + lVar3);
      if (lVar1 != 0) {
        if (DAT_14caec470 == 0) {
          local_f8 = FUN_1417df956;
          local_110 = FUN_14081d0ea;
          local_118 = &LAB_1463eaa20;
          local_128 = &LAB_147bbd9ea;
          local_130 = FUN_1401cf6d7;
          local_138 = L"Engine";
          local_140 = 0;
          local_148 = 0x10000000;
          local_150 = 8;
          local_158 = (code **)CONCAT44(local_158._4_4_,0x330);
          local_120 = &local_f8;
          FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
        }
        if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
          uVar2 = FUN_1405b2aea(param_1 + 0x120,*(undefined8 *)(lVar1 + 0x110),&local_100,0);
          local_f8 = (code *)((ulonglong)local_f8 & 0xffffffffffffff00);
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_158 = &local_f8;
          FUN_140042bb4(lVar1,uVar2,param_3);
        }
      }
      lVar3 = lVar3 + 8;
    } while (lVar5 * 8 != lVar3);
  }
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b2aea FUN_1405b2aea body=319 status=ok
// SIG undefined FUN_1405b2aea(void)

longlong FUN_1405b2aea(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_40 = param_2;
  plVar4 = (longlong *)FUN_1405b2c2a(param_1,uVar2 >> 0x10 ^ uVar2);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    plVar5 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar6 = *plVar4 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*plVar4 + (longlong)iVar3 * 0x20) == lVar1) {
          if (lVar6 != 0) goto LAB_1405b2bc9;
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_38 = FUN_1405b2e32(param_2,param_3,param_4);
  local_40 = param_3;
  FUN_1405b302c(plVar4,&local_2c,&local_40,0);
  lVar6 = (longlong)local_2c * 0x20 + *plVar4;
LAB_1405b2bc9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6 + 8;
}



// FUNCTION 1405b2c2a FUN_1405b2c2a body=197 status=ok
// SIG undefined FUN_1405b2c2a(void)

longlong FUN_1405b2c2a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1405b2cd2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1405b373e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1405b2cd2:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1405b2cf0 FUN_1405b2cf0 body=151 status=ok
// SIG undefined FUN_1405b2cf0(void)

void FUN_1405b2cf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x48) != 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    FUN_1405b2d88(param_1,*(longlong *)(param_1 + 0x48),param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
LAB_1405b2d5e:
        FUN_1405b2d88();
        bVar4 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_1405b2d5e;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1405b2d88 FUN_1405b2d88 body=170 status=ok
// SIG undefined FUN_1405b2d88(void)

void FUN_1405b2d88(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_2 + 0x7b0))(param_2);
  if (0 < iVar2) {
    iVar5 = (int)param_2[0xc5] - iVar2;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    if ((int)param_2[0xc5] <= iVar2) {
      iVar5 = 0;
    }
    do {
      if (param_4 == '\0') {
        lVar3 = (**(code **)(*param_2 + 0x610))(param_2,iVar5);
      }
      else {
        lVar3 = (**(code **)(*param_2 + 0x668))();
      }
      if (lVar3 != 0) {
        iVar1 = *(int *)(param_3 + 0x28);
        *(uint *)(param_3 + 0x28) = iVar1 + 1U;
        if (*(uint *)(param_3 + 0x2c) < iVar1 + 1U) {
          FUN_1488ca468(param_3,iVar1);
        }
        lVar4 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar4 = param_3;
        }
        *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar3;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 1405b2e32 FUN_1405b2e32 body=504 status=ok
// SIG undefined FUN_1405b2e32(void)

undefined * FUN_1405b2e32(longlong *param_1,longlong *param_2,byte param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = (**(code **)(*param_1 + 0x2d0))();
  plVar5 = &DAT_14caea250;
  if (param_3 < 9) {
    plVar5 = (longlong *)((ulonglong)((uint)param_3 * 0x50) + lVar3);
  }
  iVar2 = (int)plVar5[5];
  if (iVar2 == 0) {
    uVar7 = 1;
    uVar10 = 0;
    iVar13 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar12 = (uint *)(plVar5 + 2);
    }
    uVar8 = *puVar12;
    if (uVar8 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar7 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar7 = uVar10;
      }
      puVar4 = &DAT_14cb85760;
      iVar11 = 0;
      do {
        if (uVar7 == uVar10) goto LAB_1405b2fd3;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar12[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar7 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar7 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar13 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar13) {
      iVar13 = iVar2;
    }
  }
  puVar4 = &DAT_14cb85760;
  if (iVar13 != iVar2) {
    iVar9 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar9 = iVar2 + -1;
    }
    iVar9 = iVar9 >> 5;
    uVar8 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar5 + (longlong)iVar13 * 0x18) == *param_2) {
        puVar4 = (undefined *)(*plVar5 + (longlong)iVar13 * 0x18);
        break;
      }
      uVar8 = uVar8 & ~(uint)uVar7;
      puVar12 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar12 = (uint *)(plVar5 + 2);
      }
      iVar13 = (int)uVar10;
      lVar3 = (longlong)iVar13;
      uVar14 = puVar12[lVar3] & uVar8;
      if (uVar14 == 0) {
        iVar6 = iVar9;
        if (iVar9 < iVar13) {
          iVar6 = iVar13;
        }
        if (iVar9 <= iVar13) break;
        lVar15 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar3 + lVar15 + 1];
          if (uVar14 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar6 - lVar3 == lVar15) goto LAB_1405b2fd3;
        }
        uVar10 = (ulonglong)(iVar13 + (int)lVar15 + 1);
        uVar8 = 0xffffffff;
      }
      uVar7 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar7 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar2);
  }
LAB_1405b2fd3:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b302c FUN_1405b302c body=1553 status=ok
// SIG undefined FUN_1405b302c(void)

int * FUN_1405b302c(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  byte bVar14;
  uint *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1405b363e(param_1,iVar23);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar11 = iVar27 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar25 = iVar27 + 1;
    iVar18 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar18 = iVar27;
    }
    if (iVar18 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar25;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar27) {
        if (iVar27 + 0x20U < 0xa0) {
          iVar25 = 0x80;
          iVar11 = iVar27;
        }
        else {
          uVar29 = iVar27 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar29) {
              uVar24 = uVar29;
            }
          }
          else {
            uVar24 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar17 = FUN_144a3809e(uVar24 << 2,0);
          iVar11 = (int)(uVar17 >> 2);
          iVar25 = -0x20;
          if ((int)uVar29 <= iVar11) {
            iVar25 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar25;
        FUN_1446efbd8(plVar16,iVar11);
        iVar25 = (int)param_1[5] + 1;
      }
      iVar11 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar11 = iVar25;
      }
      *(int *)(param_1 + 5) = iVar25;
      if (iVar25 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar16;
        }
        bVar14 = -(char)(iVar25 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar11 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar27 & 0x1f;
    puVar3 = (uint *)((longlong)plVar16 + (longlong)(iVar18 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar20 = (longlong)iVar23;
    iVar27 = *(int *)(*param_1 + 4 + lVar20 * 0x20);
    *(int *)(param_1 + 6) = iVar27;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar27 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar15 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar15 = puVar3;
  }
  iVar27 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar27 = iVar23;
  }
  puVar15[iVar27 >> 5] = puVar15[iVar27 >> 5] | 1 << ((byte)iVar23 & 0x1f);
  lVar26 = *param_1;
  lVar20 = lVar20 * 0x20;
  puVar1 = (undefined4 *)(lVar26 + lVar20);
  puVar4 = (undefined4 *)param_3[1];
  lVar5 = *(longlong *)*param_3;
  *(longlong *)(lVar26 + lVar20) = lVar5;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  puVar2 = (undefined4 *)(lVar26 + 8 + lVar20);
  *puVar2 = *puVar4;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  *(undefined4 *)(lVar26 + 0x18 + lVar20) = 0xffffffff;
  uVar29 = (uint)((ulonglong)lVar5 >> 0x10);
  uVar24 = (uint)lVar5 & 0xffff;
  uVar29 = ((uint)lVar5 << 0x10 | uVar24) + (int)((ulonglong)lVar5 >> 0x20) +
           (uVar29 << 0x13 | uVar29 & 0xffff) + (uVar24 >> 4);
  cVar13 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar27 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar29) * 4);
    if (iVar27 == -1) {
      cVar13 = '\0';
    }
    else {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar27 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar27 * 0x20) == lVar5) {
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          uVar9 = puVar1[2];
          uVar10 = puVar1[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *puVar2 = uVar7;
          puVar2[1] = uVar8;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          FUN_1488ef91a(param_1,iVar23);
          cVar13 = '\x01';
          iVar23 = iVar27;
          break;
        }
        iVar27 = puVar2[6];
        cVar13 = '\0';
      } while (iVar27 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar13;
  }
  if (cVar13 != '\0') goto LAB_1405b3221;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar24 = 1;
  if (3 < uVar12) {
    uVar17 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar20 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar24 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar24 <= (int)param_1[9])) {
    uVar29 = (int)param_1[9] - 1U & uVar29;
    puVar1[7] = uVar29;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    puVar1[6] = *(undefined4 *)
                 ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4) =
         iVar23;
    goto LAB_1405b3221;
  }
  *(uint *)(param_1 + 9) = uVar24;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar24 = *(uint *)(param_1 + 9);
  }
  plVar21 = param_1 + 7;
  if (uVar24 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_1405b3260:
    uVar29 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar21;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar29) * 4) =
           0xffffffff;
      uVar29 = uVar29 + 1;
    } while (uVar24 != uVar29);
  }
  else {
    if (uVar24 == 0) goto LAB_1405b3221;
    FUN_1446efa72(plVar16,0,uVar24,4);
    if (0 < (int)uVar24) goto LAB_1405b3260;
  }
  iVar27 = (int)param_1[5];
  if (iVar27 == 0) {
    uVar17 = 0;
    uVar22 = 1;
    iVar25 = 0;
    iVar11 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar3;
    }
    uVar29 = *puVar15;
    if (uVar29 == 0) {
      iVar11 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar11 = iVar27 + -1;
      }
      uVar17 = 0;
      uVar22 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar22 = uVar17;
      }
      iVar11 = 0;
      do {
        if (uVar22 == uVar17) goto LAB_1405b3221;
        iVar11 = iVar11 + 0x20;
        uVar29 = puVar15[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar17 = 0;
      iVar11 = 0;
    }
    uVar22 = (ulonglong)(-uVar29 & uVar29);
    uVar28 = uVar22 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar25 = (iVar11 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar25) {
      iVar25 = iVar27;
    }
  }
  if (iVar25 < iVar27) {
    uVar29 = 0xffffffff;
    do {
      lVar20 = *param_1;
      lVar26 = (longlong)iVar25 * 0x20;
      uVar6 = *(undefined8 *)(lVar20 + lVar26);
      uVar24 = (uint)((ulonglong)uVar6 >> 0x10);
      uVar12 = (uint)uVar6 & 0xffff;
      uVar28 = (longlong)
               (int)(((uint)uVar6 << 0x10 | uVar12) + (int)((ulonglong)uVar6 >> 0x20) +
                     (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar12 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar27 = (int)uVar28;
      *(int *)(lVar20 + 0x1c + lVar26) = iVar27;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar21;
      }
      *(undefined4 *)(lVar20 + 0x18 + lVar26) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar28) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar21;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar27 & (longlong)(int)param_1[9] - 1U) * 4) = iVar25
      ;
      uVar29 = ~(uint)uVar22 & uVar29;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar3;
      }
      iVar27 = (int)param_1[5];
      iVar25 = (int)uVar17;
      lVar20 = (longlong)iVar25;
      uVar24 = puVar15[lVar20] & uVar29;
      if (uVar24 == 0) {
        iVar18 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar18 = iVar27 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar25) {
          iVar19 = iVar25;
        }
        if (iVar18 <= iVar25) break;
        lVar26 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar24 = puVar15[lVar20 + lVar26 + 1];
          if (uVar24 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar19 - lVar20 == lVar26) goto LAB_1405b3221;
        }
        uVar17 = (ulonglong)(iVar25 + (int)lVar26 + 1);
        uVar29 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar24 & uVar24);
      uVar28 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar25 = (iVar11 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar25 < iVar27);
  }
LAB_1405b3221:
  *param_2 = iVar23;
  return param_2;
}



// FUNCTION 1405b363e FUN_1405b363e body=255 status=ok
// SIG undefined FUN_1405b363e(void)

void FUN_1405b363e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1405b373e FUN_1405b373e body=1744 status=ok
// SIG undefined FUN_1405b373e(void)

int * FUN_1405b373e(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_14488f93c(param_1,iVar16);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar2 = iVar19 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar9 = iVar19 + 1;
    iVar12 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar12 = iVar19;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar2 = iVar19;
        }
        else {
          uVar11 = iVar19 + 0x20U >> 5;
          local_a0 = (ulonglong)uVar11;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar3 = 4;
            if (4 < uVar11) {
              uVar3 = uVar11;
            }
          }
          else {
            uVar3 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar3 << 2,0);
          iVar2 = (int)(uVar7 >> 2);
          iVar9 = -0x20;
          if ((int)local_a0 <= iVar2) {
            iVar9 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar14,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar4 = (longlong)iVar16;
    iVar19 = *(int *)(*param_1 + 4 + lVar4 * 0x60);
    *(int *)(param_1 + 6) = iVar19;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x60) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar1;
  }
  iVar19 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar19 = iVar16;
  }
  puVar10[iVar19 >> 5] = puVar10[iVar19 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  plVar14 = (longlong *)(*param_1 + lVar4 * 0x60);
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70 = 0x8000000000;
  puVar5 = (undefined8 *)(lVar4 * 0x60 + *param_1);
  *puVar5 = *(undefined8 *)*param_4;
  puVar5[5] = 0;
  cVar18 = '\0';
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  if (puVar5 + 1 != &local_98) {
    *(undefined4 *)(plVar14 + 3) = 0;
    *(undefined4 *)((longlong)plVar14 + 0x1c) = 0;
    *(undefined4 *)(plVar14 + 4) = 0;
    *(undefined4 *)((longlong)plVar14 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar14 + 0x34) = 0x80;
    uStack_70 = 0;
    *(undefined4 *)((longlong)plVar14 + 0x3c) = 0;
  }
  uStack_90 = 0;
  local_68 = 0xffffffff;
  local_78 = 0;
  local_98 = 0;
  *(undefined4 *)(plVar14 + 8) = 0;
  plVar14[9] = 0;
  local_58 = 0;
  *(undefined4 *)(plVar14 + 10) = 0;
  uStack_50 = 0;
  FUN_1405b3e10();
  *(undefined4 *)(plVar14 + 0xb) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar19 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar19 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar19 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar19 * 0x60) == *plVar14) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_1405b3e10((longlong)_Dst + 8);
            memmove(_Dst,plVar14,0x58);
            FUN_1488ef8a0(param_1,iVar16);
            cVar18 = '\x01';
            break;
          }
          iVar19 = *(int *)((longlong)_Dst + 0x58);
          cVar18 = '\0';
        } while (iVar19 != -1);
        goto LAB_1405b3953;
      }
    }
    cVar18 = '\0';
  }
LAB_1405b3953:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar18;
  }
  if (cVar18 != '\0') goto LAB_1405b3be1;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar11 = 1;
  if (3 < uVar3) {
    uVar7 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar3 < 1) || ((int)uVar11 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar14 + 0x5c) = param_3;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 0xb) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar16;
    goto LAB_1405b3be1;
  }
  *(uint *)(param_1 + 9) = uVar11;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar11 = *(uint *)(param_1 + 9);
  }
  plVar6 = param_1 + 7;
  if (uVar11 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_1405b39b9:
    uVar3 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar6;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar11 != uVar3);
  }
  else {
    if (uVar11 == 0) goto LAB_1405b3be1;
    FUN_1446efa72(plVar14,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_1405b39b9;
  }
  iVar19 = (int)param_1[5];
  if (iVar19 == 0) {
    uVar7 = 0;
    uVar15 = 1;
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar11 = *puVar10;
    if (uVar11 == 0) {
      iVar2 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar2 = iVar19 + -1;
      }
      uVar7 = 0;
      uVar15 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar15 = uVar7;
      }
      iVar9 = 0;
      do {
        if (uVar15 == uVar7) goto LAB_1405b3be1;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar10[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar7 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar20 = uVar15 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar2) {
      iVar2 = iVar19;
    }
  }
  if (iVar2 < iVar19) {
    uVar11 = 0xffffffff;
    do {
      lVar4 = *param_1;
      lVar17 = (longlong)iVar2 * 0x60;
      uVar3 = ((uint)(*(ulonglong *)(lVar4 + lVar17) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar4 + lVar17) >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar20 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar19 = (int)uVar20;
      *(int *)(lVar4 + 0x5c + lVar17) = iVar19;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar6;
      }
      *(undefined4 *)(lVar4 + 0x58 + lVar17) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar20) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar6;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar19 & (longlong)(int)param_1[9] - 1U) * 4) = iVar2;
      uVar11 = ~(uint)uVar15 & uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar19 = (int)param_1[5];
      iVar2 = (int)uVar7;
      lVar4 = (longlong)iVar2;
      uVar3 = puVar10[lVar4] & uVar11;
      if (uVar3 == 0) {
        iVar12 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar12 = iVar19 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar2) {
          iVar13 = iVar2;
        }
        if (iVar12 <= iVar2) break;
        lVar17 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar10[lVar4 + lVar17 + 1];
          if (uVar3 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar13 - lVar4 == lVar17) goto LAB_1405b3be1;
        }
        uVar7 = (ulonglong)(iVar2 + (int)lVar17 + 1);
        uVar11 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar20 = uVar15 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar19);
  }
LAB_1405b3be1:
  *param_2 = iVar16;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b3e10 FUN_1405b3e10 body=55 status=ok
// SIG undefined FUN_1405b3e10(void)

void FUN_1405b3e10(longlong *param_1)

{
  FUN_1405b3e48(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405b3e48 FUN_1405b3e48 body=121 status=ok
// SIG undefined FUN_1405b3e48(void)

void FUN_1405b3e48(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 1405b3ec2 FUN_1405b3ec2 body=215 status=ok
// SIG undefined FUN_1405b3ec2(void)

void FUN_1405b3ec2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1405b406a FUN_1405b406a body=864 status=ok
// SIG undefined FUN_1405b406a(void)

void FUN_1405b406a(longlong *param_1,char *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  int local_120;
  char *local_118;
  int local_110;
  longlong local_108 [2];
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined2 local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1405b49c0(param_1,0);
  }
  *(undefined1 *)(param_1 + 2) = 3;
  if (param_2 == (char *)0x0) goto LAB_1405b4349;
  sVar4 = strlen(param_2);
  iVar3 = (int)sVar4;
  if (iVar3 < 1) {
LAB_1405b43a5:
    if (iVar3 == 0) goto LAB_1405b4349;
  }
  else if (*param_2 == '=') {
    param_2 = param_2 + 1;
    iVar3 = iVar3 + -1;
    goto LAB_1405b43a5;
  }
  local_a8[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xffff;
  local_118 = param_2;
  local_110 = iVar3;
  FUN_1405b449e(local_108);
  if ((int)uStack_b8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_b8 & 0xffffffff);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < (int)uStack_b8) {
    FUN_1405b49c0(param_1);
  }
  lVar8 = local_c0;
  if ((int)uStack_b8 != 0) {
    lVar11 = (longlong)(int)uStack_b8;
    lVar9 = 0;
    do {
      iVar3 = (int)param_1[1];
      lVar12 = (longlong)iVar3;
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1470e3518(param_1,iVar3);
      }
      lVar5 = *param_1;
      *(undefined2 *)(lVar5 + lVar12 * 0x14) = 0;
      *(undefined8 *)(lVar5 + 4 + lVar12 * 0x14) = 0;
      *(undefined8 *)(lVar5 + 0xc + lVar12 * 0x14) = 0xffffffff00000000;
      uVar10 = *(int *)(lVar8 + 0x18 + lVar9) + 1;
      uVar7 = 0xf;
      if (uVar10 < 0x14) {
        uVar7 = (&DAT_14a1c8898)[uVar10];
      }
      puVar1 = (undefined1 *)(lVar5 + lVar12 * 0x14);
      *puVar1 = uVar7;
      puVar1[1] = *(undefined1 *)(lVar8 + 4 + lVar9);
      FUN_1405b4428(&local_128,*(undefined4 *)(lVar8 + 0x10 + lVar9),
                    *(undefined8 *)(lVar8 + 8 + lVar9));
      cVar2 = FUN_1405b43cc(&local_128);
      if (cVar2 == '\0') {
        pwVar6 = L"";
        if (local_120 != 0) {
          pwVar6 = local_128;
        }
        FUN_1446f470e(&local_68,pwVar6,1);
        lVar5 = local_68;
        if (local_68 == DAT_14c9a6778) {
          lVar5 = 0;
        }
        fVar13 = 1.0;
        lVar12 = 0;
        if (local_68 != DAT_14c9a6770) {
          fVar13 = 0.0;
          lVar12 = lVar5;
        }
      }
      else {
        pwVar6 = L"";
        if (local_120 != 0) {
          pwVar6 = local_128;
        }
        dVar14 = _wtof(pwVar6);
        fVar13 = (float)dVar14;
        lVar12 = 0;
      }
      *(longlong *)(puVar1 + 4) = lVar12;
      *(float *)(puVar1 + 0xc) = fVar13;
      if (local_128 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      *(undefined2 *)(puVar1 + 0x10) = *(undefined2 *)(lVar8 + 0x1c + lVar9);
      *(undefined2 *)(puVar1 + 0x12) = *(undefined2 *)(lVar8 + 0x1e + lVar9);
      lVar9 = lVar9 + 0x20;
    } while (lVar11 * 0x20 != lVar9);
  }
  *(undefined1 *)(param_1 + 2) = 3;
  iVar3 = *(uint *)(param_1 + 1) + 1;
  lVar8 = (ulonglong)*(uint *)(param_1 + 1) * 0x14 + -0x13;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 1) goto LAB_1405b4307;
    if (*(char *)(*param_1 + lVar8) != '\0') {
      cVar2 = '\x01';
      goto LAB_1405b4304;
    }
    cVar2 = *(char *)(*param_1 + -1 + lVar8);
    lVar8 = lVar8 + -0x14;
  } while (cVar2 == '\0');
  cVar2 = (7 < (byte)(cVar2 - 7U)) * '\x02' + '\x01';
LAB_1405b4304:
  *(char *)(param_1 + 2) = cVar2;
LAB_1405b4307:
  FUN_1405b4658(local_a8);
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
LAB_1405b4349:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b43cc FUN_1405b43cc body=91 status=ok
// SIG undefined FUN_1405b43cc(void)

undefined8 FUN_1405b43cc(undefined8 *param_1)

{
  ushort uVar1;
  wint_t _C;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  ushort *puVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 1) < 2) {
LAB_1405b4413:
    uVar5 = 0;
  }
  else {
    puVar6 = (ushort *)*param_1;
    uVar1 = *puVar6;
    uVar4 = (ulonglong)uVar1;
    if ((uVar1 == 0x2d) || (uVar1 == 0x2b)) {
      puVar6 = puVar6 + 1;
    }
    bVar7 = false;
    for (; _C = *puVar6, _C != 0; puVar6 = puVar6 + 1) {
      if (_C == 0x2e) {
        bVar2 = true;
        if (bVar7) goto LAB_1405b4413;
      }
      else {
        iVar3 = iswdigit(_C);
        uVar4 = CONCAT44(extraout_var,iVar3);
        bVar2 = bVar7;
        if (iVar3 == 0) goto LAB_1405b4413;
      }
      bVar7 = bVar2;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 1405b4428 FUN_1405b4428 body=117 status=ok
// SIG undefined FUN_1405b4428(void)

longlong * FUN_1405b4428(longlong *param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_3 != (char *)0x0) && (0 < (int)param_2)) && (*param_3 != '\0')) {
    FUN_1446f8c06(param_1,param_2 + 1);
    lVar1 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar1 + param_2 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar1) <= param_2) {
      FUN_144a2dbb8(param_1);
    }
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      *(short *)(lVar1 + uVar2 * 2) = (short)param_3[uVar2];
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    *(undefined2 *)(lVar1 + (ulonglong)param_2 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1405b449e FUN_1405b449e body=76 status=ok
// SIG undefined FUN_1405b449e(void)

undefined2 FUN_1405b449e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  lVar5 = FUN_1405b44ea(uVar1,param_1 + 0x78,param_2);
  *(longlong *)(param_1 + 0x88) = lVar5;
  if (lVar5 == 0) {
    FUN_1405b4b74(param_1);
  }
  else {
    *(short *)(param_1 + 0x90) = (short)*param_2 - (short)*(undefined4 *)(param_1 + 0x68);
  }
  return *(undefined2 *)(param_1 + 0x58);
}



// FUNCTION 1405b44ea FUN_1405b44ea body=365 status=ok
// SIG undefined FUN_1405b44ea(void)

char * FUN_1405b44ea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined1 local_78 [8];
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0xffffffff;
  local_78[0] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  pcVar5 = (char *)FUN_1449ea99e(param_1,local_80,param_3,*(int *)(param_2 + 8) == 0);
  if (pcVar5 == (char *)0x0) {
    do {
      if ((local_68 < 1) && (pcVar5 = "Value Not Found", (int)uStack_58 < 1)) break;
      FUN_1405b4740(param_2,local_80);
      if (*(int *)(param_3 + 1) < 1) {
LAB_1405b4608:
        FUN_1405b4658(local_78);
        pcVar5 = (char *)0x0;
        goto LAB_1405b4624;
      }
      pcVar5 = (char *)*param_3;
      iVar3 = *(int *)(param_3 + 1);
      while( true ) {
        iVar4 = iVar3 + -1;
        pcVar6 = pcVar5 + 1;
        cVar1 = *pcVar5;
        if (cVar1 == ')') {
          *param_3 = pcVar6;
          *(int *)(param_3 + 1) = iVar4;
          pcVar5 = (char *)0x0;
          goto LAB_1405b461c;
        }
        if ((cVar1 != ' ') && (cVar1 != '\t')) break;
        *param_3 = pcVar6;
        *(int *)(param_3 + 1) = iVar4;
        bVar2 = iVar3 < 2;
        pcVar5 = pcVar6;
        iVar3 = iVar4;
        if (bVar2) goto LAB_1405b4608;
      }
      FUN_1405b4658(local_78);
      local_80[0] = 0xffffffff;
      local_78[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      pcVar5 = (char *)FUN_1449ea99e(param_1,local_80,param_3,*(int *)(param_2 + 8) == 0);
    } while (pcVar5 == (char *)0x0);
  }
LAB_1405b461c:
  FUN_1405b4658(local_78);
LAB_1405b4624:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1405b4658 FUN_1405b4658 body=136 status=ok
// SIG undefined FUN_1405b4658(void)

void FUN_1405b4658(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1405b4658(lVar3 + 8);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1405b46e0((longlong *)(param_1 + 0x18),0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1405b46e0 FUN_1405b46e0 body=96 status=ok
// SIG undefined FUN_1405b46e0(void)

void FUN_1405b46e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 1405b4740 FUN_1405b4740 body=285 status=ok
// SIG undefined FUN_1405b4740(void)

void FUN_1405b4740(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  
  iVar6 = *param_2;
  cVar8 = (char)param_2[2];
  while ((((iVar6 == -1 && (cVar8 == '\0')) && (param_2[6] == 0)) && (param_2[10] == 1))) {
    param_2 = (int *)**(undefined8 **)(param_2 + 8);
    iVar6 = *param_2;
    cVar8 = (char)param_2[2];
  }
  piVar5 = (int *)FUN_14001cc68(0x30,0x10);
  piVar5[8] = 0;
  piVar5[9] = 0;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  *piVar5 = iVar6;
  *(char *)(piVar5 + 2) = cVar8;
  iVar6 = param_2[5];
  iVar1 = param_2[6];
  iVar4 = param_2[7];
  piVar5[4] = param_2[4];
  piVar5[5] = iVar6;
  piVar5[6] = iVar1;
  piVar5[7] = iVar4;
  iVar6 = param_2[10];
  if ((longlong)iVar6 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar7);
      iVar1 = piVar5[10];
      piVar5[10] = iVar1 + 1U;
      if ((uint)piVar5[0xb] < iVar1 + 1U) {
        FUN_1405b485e(piVar5 + 8,iVar1);
      }
      *(undefined8 *)(*(longlong *)(piVar5 + 8) + (longlong)iVar1 * 8) = uVar3;
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
  }
  param_2[10] = 0;
  if (param_2[0xb] != 0) {
    FUN_1405b46e0(param_2 + 8,0);
  }
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_1405b485e(param_1,iVar6);
  }
  *(int **)(*param_1 + (longlong)iVar6 * 8) = piVar5;
  return;
}



// FUNCTION 1405b485e FUN_1405b485e body=353 status=ok
// SIG undefined FUN_1405b485e(void)

void FUN_1405b485e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b48e3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405b48e3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405b49c0 FUN_1405b49c0 body=337 status=ok
// SIG undefined FUN_1405b49c0(void)

void FUN_1405b49c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x666) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1405b4a2d;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1405b4a2d:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x14)) {
      uVar3 = uVar4 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
  }
  return;
}



// FUNCTION 1405b4b12 FUN_1405b4b12 body=97 status=ok
// SIG undefined FUN_1405b4b12(void)

uint FUN_1405b4b12(undefined8 *param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  ulonglong _Size;
  
  sVar3 = strlen(param_2);
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  _Size = uVar1;
  if (sVar3 < uVar1) {
    _Size = sVar3;
  }
  uVar2 = memcmp(param_1,param_2,_Size);
  uVar4 = 0xffffffff;
  if (sVar3 <= uVar1) {
    uVar4 = (uint)(sVar3 < uVar1);
  }
  if (uVar2 == 0) {
    uVar2 = uVar4;
  }
  return uVar2;
}



// FUNCTION 1405b4b74 FUN_1405b4b74 body=1898 status=ok
// SIG undefined FUN_1405b4b74(void)

void FUN_1405b4b74(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  longlong *plVar14;
  short sVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint *puVar22;
  int iVar23;
  short sVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_398 [32];
  longlong *local_378;
  undefined2 local_36c;
  undefined2 local_36a;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  FUN_1405b537c(param_1,param_1 + 0x78,0,0);
  plVar14 = (longlong *)(param_1 + 0x48);
  iVar19 = (int)*(short *)(param_1 + 0x58);
  iVar23 = *(int *)(param_1 + 0x50);
  if (iVar23 < iVar19) {
    *(int *)(param_1 + 0x50) = iVar19;
    if ((uint)(*(int *)(param_1 + 0x54) - iVar23) < (uint)(iVar19 - iVar23)) {
      FUN_1405b551c(plVar14,iVar23);
    }
    FUN_1405b5348((longlong)iVar23 * 0x20 + *plVar14,iVar19 - iVar23);
  }
  else {
    if (*(short *)(param_1 + 0x58) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if (iVar19 < iVar23) {
      *(int *)(param_1 + 0x50) = iVar19;
      FUN_1470b686e(plVar14);
    }
  }
  FUN_1405b54a2(param_1,(int)*(short *)(param_1 + 0x10),1);
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar19 = (int)*(short *)(param_1 + 0x28);
  iVar23 = *(int *)(param_1 + 0x20);
  if (iVar23 < iVar19) {
    *(int *)(param_1 + 0x20) = iVar19;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar23) < (uint)(iVar19 - iVar23)) {
      FUN_1405b561c(plVar1,iVar23);
    }
    FUN_1405b52e0((longlong)iVar23 * 0x10 + *plVar1,iVar19 - iVar23);
  }
  else {
    if (*(short *)(param_1 + 0x28) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if (iVar19 < iVar23) {
      *(int *)(param_1 + 0x20) = iVar19;
      FUN_1470b690a(plVar1);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x30);
  iVar19 = (int)*(short *)(param_1 + 0x40);
  iVar23 = *(int *)(param_1 + 0x38);
  if (iVar23 < iVar19) {
    *(int *)(param_1 + 0x38) = iVar19;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar23) < (uint)(iVar19 - iVar23)) {
      FUN_1405b588e(plVar2,iVar23);
    }
    FUN_1405b5301((longlong)iVar23 * 0xc + *plVar2,iVar19 - iVar23);
  }
  else {
    if (*(short *)(param_1 + 0x40) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    if (iVar19 < iVar23) {
      *(int *)(param_1 + 0x38) = iVar19;
      FUN_1470b69a6(plVar2);
    }
  }
  local_36a = 0xffff;
  local_36c = 0xffff;
  FUN_1405b5a00(param_1);
  iVar23 = *(int *)(param_1 + 0x50);
  if (1 < (longlong)iVar23) {
    lVar4 = *plVar14;
    memset(local_358,0,0x2f0);
    local_360 = (longlong)iVar23 * 0x20 + lVar4 + -0x20;
    local_368 = lVar4;
    fVar32 = logf((float)iVar23);
    local_358[0] = (int)(longlong)(fVar32 + fVar32);
    plVar14 = &local_368;
    do {
      puVar17 = (uint *)*plVar14;
      puVar16 = (uint *)plVar14[1];
      iVar23 = (int)plVar14[2];
      iVar19 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar17) >> 5);
      uVar25 = iVar19 + 1;
      puVar20 = puVar17;
      puVar22 = puVar16;
      puVar30 = puVar17;
      if (iVar23 != 0) {
LAB_1405b4d35:
        if (8 < (int)uVar25) {
          uVar21 = (ulonglong)(uVar25 >> 1);
          uVar5 = *(undefined8 *)(puVar20 + uVar21 * 8);
          uVar6 = *(undefined8 *)(puVar20 + uVar21 * 8 + 2);
          uVar7 = *(undefined8 *)(puVar20 + uVar21 * 8 + 4);
          uVar8 = *(undefined8 *)(puVar20 + uVar21 * 8 + 4 + 2);
          uVar9 = *(undefined8 *)puVar20;
          uVar10 = *(undefined8 *)(puVar20 + 2);
          uVar11 = *(undefined8 *)(puVar20 + 6);
          *(undefined8 *)(puVar20 + uVar21 * 8 + 4) = *(undefined8 *)(puVar20 + 4);
          *(undefined8 *)(puVar20 + uVar21 * 8 + 4 + 2) = uVar11;
          *(undefined8 *)(puVar20 + uVar21 * 8) = uVar9;
          *(undefined8 *)(puVar20 + uVar21 * 8 + 2) = uVar10;
          *(undefined8 *)(puVar20 + 4) = uVar7;
          *(undefined8 *)(puVar20 + 6) = uVar8;
          *(undefined8 *)puVar20 = uVar5;
          *(undefined8 *)(puVar20 + 2) = uVar6;
          puVar27 = puVar22 + 8;
          puVar17 = puVar20;
          do {
            puVar12 = puVar17 + 8;
            puVar13 = puVar17 + 8;
            do {
              puVar17 = puVar13;
              puVar28 = puVar12;
              if (puVar22 < puVar17) break;
              puVar12 = puVar28 + 8;
              puVar13 = puVar17 + 8;
            } while ((short)(ushort)*puVar17 <= (short)(ushort)*puVar20);
            puVar12 = puVar27 + -0x10;
            do {
              puVar13 = puVar27;
              puVar29 = puVar12;
              puVar27 = puVar13 + -8;
              if (puVar27 <= puVar20) break;
              puVar12 = puVar29 + -8;
            } while ((short)(ushort)*puVar20 <= (short)(ushort)*puVar27);
            if (puVar27 < puVar17) goto code_r0x0001405b4df2;
            uVar5 = *(undefined8 *)puVar17;
            uVar6 = *(undefined8 *)(puVar17 + 2);
            uVar7 = *(undefined8 *)(puVar17 + 4);
            uVar8 = *(undefined8 *)(puVar17 + 6);
            uVar9 = *(undefined8 *)puVar27;
            uVar10 = *(undefined8 *)(puVar13 + -6);
            uVar11 = *(undefined8 *)(puVar13 + -2);
            *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar13 + -4);
            *(undefined8 *)(puVar17 + 6) = uVar11;
            *(undefined8 *)puVar17 = uVar9;
            *(undefined8 *)(puVar17 + 2) = uVar10;
            *(undefined8 *)(puVar13 + -4) = uVar7;
            *(undefined8 *)(puVar13 + -2) = uVar8;
            *(undefined8 *)puVar27 = uVar5;
            *(undefined8 *)(puVar13 + -6) = uVar6;
          } while( true );
        }
        if (puVar20 < puVar22) {
          do {
            puVar17 = puVar20;
            if (puVar20 + 8 <= puVar22) {
              uVar25 = (uint)(ushort)*puVar20;
              puVar16 = puVar20 + 8;
              do {
                sVar24 = (short)uVar25;
                sVar15 = (short)*puVar16;
                if (sVar24 <= sVar15) {
                  uVar25 = *puVar16;
                }
                if (sVar24 < sVar15) {
                  puVar17 = puVar16;
                }
                puVar16 = puVar16 + 8;
              } while (puVar16 <= puVar22);
            }
            local_68 = *(undefined8 *)puVar17;
            uStack_60 = *(undefined8 *)(puVar17 + 2);
            local_58 = *(undefined8 *)(puVar17 + 4);
            uStack_50 = *(undefined8 *)(puVar17 + 6);
            uVar8 = local_68;
            uVar9 = uStack_60;
            uVar5 = *(undefined8 *)puVar22;
            uVar6 = *(undefined8 *)(puVar22 + 2);
            uVar7 = *(undefined8 *)(puVar22 + 6);
            *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar22 + 4);
            *(undefined8 *)(puVar17 + 6) = uVar7;
            *(undefined8 *)puVar17 = uVar5;
            *(undefined8 *)(puVar17 + 2) = uVar6;
            local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
            uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
            *(undefined8 *)(puVar22 + 4) = local_58;
            *(undefined8 *)(puVar22 + 6) = uStack_50;
            *puVar22 = (uint)local_68;
            puVar22[1] = local_68._4_4_;
            puVar22[2] = (uint)uStack_60;
            puVar22[3] = uStack_60._4_4_;
            puVar22 = puVar22 + -8;
            local_68 = uVar8;
            uStack_60 = uVar9;
          } while (puVar20 < puVar22);
        }
        goto LAB_1405b4f25;
      }
LAB_1405b4ff2:
      if (uVar25 != 0) {
        iVar23 = (iVar19 - (iVar19 + -1 >> 0x1f)) + -1 >> 1;
        iVar19 = iVar23;
joined_r0x0001405b501a:
        do {
          iVar26 = iVar23 * 2 + 1;
          if (iVar26 < (int)uVar25) {
            iVar18 = iVar23 * 2 + 2;
            if ((iVar18 < (int)uVar25) &&
               ((short)(ushort)puVar17[(longlong)iVar26 * 8] <=
                (short)(ushort)puVar17[(longlong)iVar18 * 8])) {
              iVar26 = iVar18;
            }
            if ((short)(ushort)puVar17[(longlong)iVar23 * 8] <
                (short)(ushort)puVar17[(longlong)iVar26 * 8]) {
              puVar16 = puVar17 + (longlong)iVar23 * 8;
              puVar22 = puVar17 + (longlong)iVar26 * 8;
              local_68 = *(undefined8 *)puVar16;
              uStack_60 = *(undefined8 *)(puVar16 + 2);
              local_58 = *(undefined8 *)(puVar16 + 4);
              uStack_50 = *(undefined8 *)(puVar16 + 6);
              uVar8 = local_68;
              uVar9 = uStack_60;
              uVar5 = *(undefined8 *)puVar22;
              uVar6 = *(undefined8 *)(puVar22 + 2);
              uVar7 = *(undefined8 *)(puVar22 + 6);
              *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar22 + 4);
              *(undefined8 *)(puVar16 + 6) = uVar7;
              *(undefined8 *)puVar16 = uVar5;
              *(undefined8 *)(puVar16 + 2) = uVar6;
              local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(puVar22 + 4) = local_58;
              *(undefined8 *)(puVar22 + 6) = uStack_50;
              *puVar22 = (uint)local_68;
              puVar22[1] = local_68._4_4_;
              puVar22[2] = (uint)uStack_60;
              puVar22[3] = uStack_60._4_4_;
              iVar23 = iVar26;
              local_68 = uVar8;
              uStack_60 = uVar9;
              goto joined_r0x0001405b501a;
            }
          }
          bVar31 = iVar19 != 0;
          iVar23 = iVar19 + -1;
          iVar19 = iVar23;
        } while (bVar31);
        if (1 < (int)uVar25) {
          uVar21 = (ulonglong)uVar25 - 1;
          local_68 = *(undefined8 *)puVar17;
          uStack_60 = *(undefined8 *)(puVar17 + 2);
          local_58 = *(undefined8 *)(puVar17 + 4);
          uStack_50 = *(undefined8 *)(puVar17 + 6);
          uVar8 = local_68;
          uVar9 = uStack_60;
          uVar5 = *(undefined8 *)(puVar17 + uVar21 * 8);
          uVar6 = *(undefined8 *)(puVar17 + uVar21 * 8 + 2);
          uVar7 = *(undefined8 *)(puVar17 + uVar21 * 8 + 4 + 2);
          *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar17 + uVar21 * 8 + 4);
          *(undefined8 *)(puVar17 + 6) = uVar7;
          *(undefined8 *)puVar17 = uVar5;
          *(undefined8 *)(puVar17 + 2) = uVar6;
          local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
          *(undefined8 *)(puVar17 + uVar21 * 8 + 4) = local_58;
          *(undefined8 *)(puVar17 + uVar21 * 8 + 4 + 2) = uStack_50;
          puVar22 = puVar17 + uVar21 * 8;
          *puVar22 = (uint)local_68;
          puVar22[1] = local_68._4_4_;
          puVar22[2] = (uint)uStack_60;
          puVar22[3] = uStack_60._4_4_;
          local_68 = uVar8;
          uStack_60 = uVar9;
          if (uVar25 != 2) {
            do {
              iVar23 = 0;
              iVar26 = 1;
              iVar19 = 0;
              do {
                iVar23 = iVar23 + 2;
                iVar18 = iVar26;
                if (((longlong)iVar23 < (longlong)uVar21) &&
                   ((short)(ushort)puVar17[(longlong)iVar26 * 8] <=
                    (short)(ushort)puVar17[(longlong)iVar23 * 8])) {
                  iVar18 = iVar23;
                }
                if ((short)(ushort)puVar17[(longlong)iVar18 * 8] <=
                    (short)(ushort)puVar17[(longlong)iVar19 * 8]) break;
                puVar16 = puVar17 + (longlong)iVar19 * 8;
                puVar22 = puVar17 + (longlong)iVar18 * 8;
                uVar5 = *(undefined8 *)puVar16;
                uVar6 = *(undefined8 *)(puVar16 + 2);
                uVar7 = *(undefined8 *)(puVar16 + 4);
                uVar8 = *(undefined8 *)(puVar16 + 6);
                uVar9 = *(undefined8 *)puVar22;
                uVar10 = *(undefined8 *)(puVar22 + 2);
                uVar11 = *(undefined8 *)(puVar22 + 6);
                *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar22 + 4);
                *(undefined8 *)(puVar16 + 6) = uVar11;
                *(undefined8 *)puVar16 = uVar9;
                *(undefined8 *)(puVar16 + 2) = uVar10;
                *(undefined8 *)(puVar22 + 4) = uVar7;
                *(undefined8 *)(puVar22 + 6) = uVar8;
                *(undefined8 *)puVar22 = uVar5;
                *(undefined8 *)(puVar22 + 2) = uVar6;
                iVar23 = iVar18 * 2;
                iVar26 = iVar18 * 2 + 1;
                iVar19 = iVar18;
              } while ((longlong)iVar26 < (longlong)uVar21);
              uVar3 = uVar21 - 1;
              local_68 = *(undefined8 *)puVar17;
              uStack_60 = *(undefined8 *)(puVar17 + 2);
              local_58 = *(undefined8 *)(puVar17 + 4);
              uStack_50 = *(undefined8 *)(puVar17 + 6);
              uVar8 = local_68;
              uVar9 = uStack_60;
              uVar5 = *(undefined8 *)(puVar17 + uVar3 * 8);
              uVar6 = *(undefined8 *)(puVar17 + uVar3 * 8 + 2);
              uVar7 = *(undefined8 *)(puVar17 + uVar3 * 8 + 4 + 2);
              *(undefined8 *)(puVar17 + 4) = *(undefined8 *)(puVar17 + uVar3 * 8 + 4);
              *(undefined8 *)(puVar17 + 6) = uVar7;
              *(undefined8 *)puVar17 = uVar5;
              *(undefined8 *)(puVar17 + 2) = uVar6;
              local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
              *(undefined8 *)(puVar17 + uVar3 * 8 + 4) = local_58;
              *(undefined8 *)(puVar17 + uVar3 * 8 + 4 + 2) = uStack_50;
              puVar22 = puVar17 + uVar3 * 8;
              *puVar22 = (uint)local_68;
              puVar22[1] = local_68._4_4_;
              puVar22[2] = (uint)uStack_60;
              puVar22[3] = uStack_60._4_4_;
              bVar31 = 2 < uVar21;
              uVar21 = uVar3;
              local_68 = uVar8;
              uStack_60 = uVar9;
            } while (bVar31);
          }
        }
      }
LAB_1405b4f25:
      plVar14 = plVar14 + -3;
    } while (&local_368 <= plVar14);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1405b5318(plVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1405b5472(plVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001405b4df2:
  local_68 = *(undefined8 *)puVar20;
  uStack_60 = *(undefined8 *)(puVar20 + 2);
  local_58 = *(undefined8 *)(puVar20 + 4);
  uStack_50 = *(undefined8 *)(puVar20 + 6);
  uVar8 = local_68;
  uVar9 = uStack_60;
  uVar5 = *(undefined8 *)puVar27;
  uVar6 = *(undefined8 *)(puVar13 + -6);
  uVar7 = *(undefined8 *)(puVar13 + -2);
  *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(puVar13 + -4);
  *(undefined8 *)(puVar20 + 6) = uVar7;
  *(undefined8 *)puVar20 = uVar5;
  *(undefined8 *)(puVar20 + 2) = uVar6;
  local_68._4_4_ = (uint)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (uint)((ulonglong)uStack_60 >> 0x20);
  *(undefined8 *)(puVar13 + -4) = local_58;
  *(undefined8 *)(puVar13 + -2) = uStack_50;
  *puVar27 = (uint)local_68;
  puVar13[-7] = local_68._4_4_;
  puVar13[-6] = (uint)uStack_60;
  puVar13[-5] = uStack_60._4_4_;
  iVar23 = iVar23 + -1;
  local_378 = plVar2;
  local_68 = uVar8;
  uStack_60 = uVar9;
  if ((longlong)puVar29 - (longlong)puVar30 < (longlong)puVar16 - (longlong)puVar28) {
    if (puVar17 < puVar22) {
      *plVar14 = (longlong)puVar17;
      plVar14[1] = (longlong)puVar22;
      *(int *)(plVar14 + 2) = iVar23;
      plVar14 = plVar14 + 3;
    }
    puVar17 = puVar20;
    puVar22 = puVar13 + -0x10;
    puVar28 = puVar20;
    puVar16 = puVar29;
    if (puVar27 <= puVar20 + 8) goto LAB_1405b4f25;
  }
  else {
    if (puVar20 + 8 < puVar27) {
      *plVar14 = (longlong)puVar20;
      plVar14[1] = (longlong)(puVar13 + -0x10);
      *(int *)(plVar14 + 2) = iVar23;
      plVar14 = plVar14 + 3;
    }
    puVar16 = puVar22;
    if (puVar22 <= puVar17) goto LAB_1405b4f25;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar28) >> 5);
  uVar25 = iVar19 + 1;
  puVar20 = puVar17;
  puVar30 = puVar28;
  if (iVar23 == 0) goto LAB_1405b4ff2;
  goto LAB_1405b4d35;
}



// FUNCTION 1405b52e0 FUN_1405b52e0 body=33 status=ok
// SIG undefined FUN_1405b52e0(void)

void FUN_1405b52e0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined2 *)(param_1 + 1) = 0xffff;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1405b5301 FUN_1405b5301 body=22 status=ok
// SIG undefined FUN_1405b5301(void)

void FUN_1405b5301(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 1405b5318 FUN_1405b5318 body=48 status=ok
// SIG undefined FUN_1405b5318(void)

void FUN_1405b5318(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1405b5348 FUN_1405b5348 body=52 status=ok
// SIG undefined FUN_1405b5348(void)

void FUN_1405b5348(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined2 *)((longlong)param_1 + 6) = 0xffff;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    *(undefined8 *)(param_1 + 6) = 0xffffffffffffffff;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1405b537c FUN_1405b537c body=245 status=ok
// SIG undefined FUN_1405b537c(void)

void FUN_1405b537c(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  
  if (0 < (int)param_2[1]) {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      lVar7 = 0;
      do {
        piVar2 = *(int **)(lVar1 + lVar7);
        if (piVar2 != (int *)0x0) {
          if ((*piVar2 != -1) && (param_4 = param_4 + 1, *piVar2 != 0x13)) {
            *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 1;
          }
          if (piVar2[6] < 1) {
            param_3 = param_3 + (uint)(0 < piVar2[10]);
          }
          else {
            *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 1;
            param_3 = param_3 + 1;
            if (0 < piVar2[6]) {
              *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
            }
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar7);
    }
    sVar4 = (short)*(undefined4 *)(param_1 + 0x28);
    sVar6 = (short)param_3;
    if ((short)param_3 <= sVar4) {
      sVar6 = sVar4;
    }
    sVar5 = (short)*(undefined4 *)(param_1 + 0x40);
    sVar4 = (short)param_4;
    if ((short)param_4 <= sVar5) {
      sVar4 = sVar5;
    }
    *(short *)(param_1 + 0x28) = sVar6;
    *(short *)(param_1 + 0x40) = sVar4;
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      lVar7 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar7) != 0) {
          FUN_1405b537c(param_1,*(longlong *)(lVar1 + lVar7) + 0x20,param_3,param_4);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 1405b5472 FUN_1405b5472 body=48 status=ok
// SIG undefined FUN_1405b5472(void)

void FUN_1405b5472(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1405b54a2 FUN_1405b54a2 body=120 status=ok
// SIG undefined FUN_1405b54a2(void)

void FUN_1405b54a2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1405b572a(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb447a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405b551c FUN_1405b551c body=255 status=ok
// SIG undefined FUN_1405b551c(void)

void FUN_1405b551c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1405b561c FUN_1405b561c body=269 status=ok
// SIG undefined FUN_1405b561c(void)

void FUN_1405b561c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1405b572a FUN_1405b572a body=354 status=ok
// SIG undefined FUN_1405b572a(void)

void FUN_1405b572a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b57ae;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1405b57ae:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 1)) {
    uVar7 = uVar5 >> 1 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,2,2);
  return;
}



// FUNCTION 1405b588e FUN_1405b588e body=370 status=ok
// SIG undefined FUN_1405b588e(void)

void FUN_1405b588e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b5917;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1405b5917:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1405b5a00 FUN_1405b5a00 body=1289 status=ok
// SIG undefined FUN_1405b5a00(void)

void FUN_1405b5a00(longlong *param_1,longlong *param_2,short *param_3,undefined2 *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  uint uVar8;
  short *psVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  longlong lVar18;
  ushort uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  short *local_88;
  longlong local_80;
  longlong local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_3 = -1;
  *param_4 = 0xffff;
  uVar12 = *(ushort *)((longlong)param_1 + 0x12);
  local_a0 = (ulonglong)uVar12;
  *(ushort *)((longlong)param_1 + 0x12) = uVar12 + 1;
  local_80 = (longlong)(short)uVar12;
  *(undefined2 *)(*param_1 + local_80 * 2) = 0xffff;
  if ((longlong)(int)param_2[1] == 0) {
    sVar6 = 0;
    sVar5 = 0;
  }
  else {
    lVar18 = 0;
    sVar5 = 0;
    sVar6 = 0;
    do {
      piVar2 = *(int **)(*param_2 + lVar18);
      if (piVar2 != (int *)0x0) {
        uVar12 = 1;
        if (piVar2[6] < 1) {
          uVar12 = (ushort)(0 < piVar2[10]);
        }
        sVar5 = sVar5 + (ushort)(*piVar2 != -1);
        sVar6 = sVar6 + uVar12;
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar18);
  }
  uVar12 = *(ushort *)((longlong)param_1 + 0x42);
  uVar21 = (uint)uVar12;
  uVar14 = *(ushort *)((longlong)param_1 + 0x2a);
  uVar8 = (uint)uVar14;
  sVar5 = sVar5 + uVar12;
  *(short *)((longlong)param_1 + 0x42) = sVar5;
  *(ushort *)((longlong)param_1 + 0x2a) = sVar6 + uVar14;
  lVar18 = param_2[1];
  local_88 = param_3;
  local_70 = param_4;
  uVar19 = uVar12;
  if ((longlong)(int)lVar18 != 0) {
    lVar11 = *param_2;
    lVar13 = 0;
    uVar15 = (uint)uVar12;
    do {
      piVar2 = *(int **)(lVar11 + lVar13);
      if (piVar2 != (int *)0x0) {
        if (*piVar2 != -1) {
          lVar3 = param_1[6];
          sVar5 = (short)uVar15;
          lVar10 = (longlong)sVar5;
          uVar15 = uVar15 + 1;
          *(int *)(lVar3 + 4 + lVar10 * 0xc) = *piVar2;
          *(short *)(lVar3 + lVar10 * 0xc) = sVar5 + -1;
          *(ushort *)(lVar3 + 2 + lVar10 * 0xc) = uVar14 - 1;
          *(ushort *)(lVar3 + 8 + lVar10 * 0xc) = uVar14;
          *(short *)(lVar3 + 10 + lVar10 * 0xc) = (short)uVar15;
        }
        local_68 = CONCAT62(local_68._2_6_,0xffff);
        local_4a = 0xffff;
        if (0 < piVar2[10]) {
          local_a8 = uVar8;
          FUN_1405b5a00(param_1,piVar2 + 8,&local_68,&local_4a);
          uVar8 = local_a8;
        }
        if (piVar2[6] < 1) {
          if (-1 < (short)local_68) {
            lVar3 = param_1[3];
            lVar10 = (longlong)(short)uVar14 * 0x10;
            uVar14 = uVar14 + 1;
            *(int **)(lVar3 + 8 + lVar10) = piVar2;
            *(undefined4 *)(lVar3 + 2 + lVar10) = 0xffffffff;
            *(short *)(lVar3 + lVar10) = (short)local_68;
          }
        }
        else {
          lVar3 = param_1[3];
          lVar10 = (longlong)(short)uVar14 * 0x10;
          uVar14 = uVar14 + 1;
          *(int **)(lVar3 + 8 + lVar10) = piVar2;
          *(short *)(lVar3 + 2 + lVar10) = (short)local_68;
          *(undefined2 *)(lVar3 + 4 + lVar10) = local_4a;
          *(undefined2 *)(lVar3 + lVar10) = 0xffff;
        }
      }
      uVar19 = (ushort)uVar15;
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar18 * 8 != lVar13);
    sVar5 = *(short *)((longlong)param_1 + 0x42);
  }
  if ((short)uVar12 < sVar5) {
    if ((short)uVar12 < (short)uVar19) {
      local_78 = (longlong)(short)uVar12;
      local_98 = (longlong)(short)uVar19;
      lVar18 = local_98 - local_78;
      local_90 = local_78 * 0xc;
      local_a8 = uVar8;
      local_a4 = (uint)uVar12;
      while( true ) {
        uVar4 = local_a0;
        psVar9 = (short *)(param_1[6] + local_90);
        iVar16 = 0x14;
        psVar17 = (short *)0x0;
        lVar11 = lVar18;
        do {
          iVar1 = *(int *)(psVar9 + 2);
          if ((((longlong)iVar1 != -1) && (iVar1 <= iVar16)) &&
             (iVar1 = *(int *)(&DAT_14a1846e0 + (longlong)iVar1 * 8), bVar23 = iVar1 != iVar16,
             iVar16 = iVar1, bVar23)) {
            psVar17 = psVar9;
          }
          psVar9 = psVar9 + 6;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar8 = local_a8;
        uVar21 = local_a4;
        if (psVar17 == (short *)0x0) goto LAB_1405b5d9e;
        if (iVar16 == 0x13) break;
        lVar11 = param_1[3];
        lVar22 = (longlong)psVar17[1] * 0x10;
        FUN_1405b5f0a(param_1,(longlong)psVar17[1],local_a0 & 0xffffffff);
        lVar13 = param_1[3];
        lVar20 = (longlong)psVar17[4] * 0x10;
        FUN_1405b5f0a(param_1,(longlong)psVar17[4],uVar4 & 0xffffffff);
        lVar3 = param_1[9];
        lVar10 = (longlong)*(short *)((longlong)param_1 + 0x5a) * 0x20;
        *(short *)(lVar3 + lVar10) = *(short *)((longlong)param_1 + 0x5a);
        *(short *)(lVar3 + 2 + lVar10) = (short)uVar4;
        *(undefined2 *)(*param_1 + local_80 * 2) = *(undefined2 *)((longlong)param_1 + 0x5a);
        *(undefined4 *)(lVar3 + 0x18 + lVar10) = *(undefined4 *)(psVar17 + 2);
        *(undefined2 *)(lVar3 + 0x1c + lVar10) = *(undefined2 *)(lVar11 + lVar22);
        *(undefined2 *)(lVar3 + 0x1e + lVar10) = *(undefined2 *)(lVar13 + lVar20);
        psVar17[2] = -1;
        psVar17[3] = -1;
        uVar7 = *(undefined2 *)((longlong)param_1 + 0x5a);
        *(undefined2 *)(lVar11 + lVar22) = uVar7;
        *(undefined2 *)(lVar13 + lVar20) = uVar7;
        *(short *)((longlong)param_1 + 0x5a) = *(short *)((longlong)param_1 + 0x5a) + 1;
        sVar5 = *psVar17;
        if (sVar5 < (short)local_a4) {
          sVar6 = psVar17[5];
        }
        else {
          lVar11 = param_1[6];
          *(short *)(lVar11 + 8 + (longlong)sVar5 * 0xc) = psVar17[1];
          sVar6 = psVar17[5];
          *(short *)(lVar11 + 10 + (longlong)sVar5 * 0xc) = sVar6;
        }
        if (sVar6 < *(short *)((longlong)param_1 + 0x42)) {
          lVar11 = param_1[6];
          *(short *)(lVar11 + 2 + (longlong)sVar6 * 0xc) = psVar17[1];
          *(short *)(lVar11 + (longlong)sVar6 * 0xc) = *psVar17;
        }
      }
      local_68 = 0;
      uStack_60 = 0;
      local_98 = local_98 - local_78;
      lVar18 = local_78 * 0xc + 8;
      do {
        lVar11 = param_1[6];
        if (*(int *)(lVar11 + -4 + lVar18) == 0x13) {
          if ((int)uStack_60 < 1) {
            uVar7 = FUN_1405b5f0a(param_1,*(undefined2 *)(lVar11 + -6 + lVar18),local_a0);
            uVar4 = uStack_60;
            lVar13 = (longlong)(int)uStack_60;
            uVar8 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
            if (uStack_60._4_4_ < uVar8) {
              FUN_1405b572a(&local_68,uVar4 & 0xffffffff);
            }
            *(undefined2 *)(local_68 + lVar13 * 2) = uVar7;
          }
          uVar7 = FUN_1405b5f0a(param_1,*(undefined2 *)(lVar11 + lVar18),local_a0);
          uVar4 = uStack_60;
          lVar11 = (longlong)(int)uStack_60;
          uVar8 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar8);
          if (uStack_60._4_4_ < uVar8) {
            FUN_1405b572a(&local_68,uVar4 & 0xffffffff);
          }
          *(undefined2 *)(local_68 + lVar11 * 2) = uVar7;
        }
        lVar18 = lVar18 + 0xc;
        local_98 = local_98 + -1;
      } while (local_98 != 0);
      FUN_1470b1b2e(param_1,&local_68,local_88,local_70);
      uVar8 = local_a8;
      uVar21 = local_a4;
      if (local_68 != 0) {
        FUN_1400020a8();
        uVar8 = local_a8;
        uVar21 = local_a4;
      }
    }
  }
  else if ((short)uVar8 < (short)uVar14) {
    iVar16 = (int)(short)uVar14 - (int)(short)uVar8;
    uVar15 = uVar8;
    do {
      FUN_1405b5f0a(param_1,uVar15,local_a0);
      uVar15 = uVar15 + 1;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
LAB_1405b5d9e:
  if ((*local_88 == -1) && (sVar5 = *(short *)(*param_1 + local_80 * 2), sVar5 != -1)) {
    *local_88 = sVar5;
  }
  *(short *)((longlong)param_1 + 0x42) = (short)uVar21;
  *(short *)((longlong)param_1 + 0x2a) = (short)uVar8;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b5f0a FUN_1405b5f0a body=145 status=ok
// SIG undefined FUN_1405b5f0a(void)

short FUN_1405b5f0a(longlong *param_1,short param_2,short param_3)

{
  short *psVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  short sVar5;
  longlong lVar6;
  
  psVar1 = (short *)(param_1[3] + (longlong)param_2 * 0x10);
  sVar5 = *(short *)(param_1[3] + (longlong)param_2 * 0x10);
  if (sVar5 < 0) {
    lVar3 = param_1[9];
    sVar5 = *(short *)((longlong)param_1 + 0x5a);
    lVar6 = (longlong)sVar5 * 0x20;
    *(short *)(lVar3 + lVar6) = sVar5;
    *psVar1 = sVar5;
    *(short *)(lVar3 + 2 + lVar6) = param_3;
    *(undefined1 *)(lVar3 + 4 + lVar6) = *(undefined1 *)(*(longlong *)(psVar1 + 4) + 8);
    uVar4 = *(undefined8 *)(*(longlong *)(psVar1 + 4) + 0x18);
    puVar2 = (undefined8 *)(lVar3 + 8 + lVar6);
    *puVar2 = *(undefined8 *)(*(longlong *)(psVar1 + 4) + 0x10);
    puVar2[1] = uVar4;
    *(short *)(lVar3 + 6 + lVar6) =
         (short)*(undefined4 *)(lVar3 + 8 + lVar6) - (short)(int)param_1[0xd];
    *(short *)(lVar3 + 0x1c + lVar6) = psVar1[1];
    *(short *)(lVar3 + 0x1e + lVar6) = psVar1[2];
    *(short *)((longlong)param_1 + 0x5a) = *(short *)((longlong)param_1 + 0x5a) + 1;
    sVar5 = *psVar1;
  }
  *(short *)(*param_1 + (longlong)param_3 * 2) = sVar5;
  return *psVar1;
}



// FUNCTION 1405b5f9b FUN_1405b5f9b body=198 status=ok
// SIG undefined FUN_1405b5f9b(void)

void FUN_1405b5f9b(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  ulonglong _Size;
  ulonglong uVar4;
  undefined8 *_Dst;
  longlong lVar5;
  
  uVar4 = 0;
  _Size = (ulonglong)*(uint *)(param_1 + 1);
  if ((int)*(uint *)(param_1 + 1) < 1) {
    _Size = uVar4;
  }
  _Src = (void *)*param_1;
  do {
    if (_Size == uVar4) goto LAB_1405b5feb;
    bVar1 = *(byte *)((longlong)_Src + uVar4);
    if ((((bVar1 != 0x5f) && (bVar1 != 0x2e)) && (9 < (byte)(bVar1 - 0x30))) &&
       (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) {
      _Size = uVar4 & 0xffffffff;
      goto LAB_1405b5feb;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  _Size = 4;
LAB_1405b5feb:
  if ((ulonglong)param_2[3] < _Size) {
    FUN_1401d7f46(param_2,_Size);
  }
  else {
    _Dst = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      _Dst = (undefined8 *)*param_2;
    }
    param_2[2] = _Size;
    memmove(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
  }
  lVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (lVar2 != 0) {
    lVar5 = 0;
    do {
      iVar3 = tolower((int)*(char *)((longlong)param_2 + lVar5));
      *(char *)((longlong)param_2 + lVar5) = (char)iVar3;
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
  return;
}



// FUNCTION 1405b6062 FUN_1405b6062 body=85 status=ok
// SIG undefined FUN_1405b6062(void)

void FUN_1405b6062(longlong param_1,int param_2)

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
  FUN_1405b60b8();
  return;
}



// FUNCTION 1405b60b8 FUN_1405b60b8 body=449 status=ok
// SIG undefined FUN_1405b60b8(void)

void FUN_1405b60b8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xd20);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1405b61d2:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1405b620f:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xd20;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1405b6110;
LAB_1405b6105:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1405b6110:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x14) goto code_r0x0001405b6139;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x68,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x348 + 0x1a;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1405b618f:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1405b620f;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1405b61d2;
code_r0x0001405b6139:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x67U & 0xfffffffffffffff0);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1405b618f;
    }
  }
  goto LAB_1405b6105;
}



// FUNCTION 1405b62ce FUN_1405b62ce body=125 status=ok
// SIG undefined FUN_1405b62ce(void)

void FUN_1405b62ce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1405b634c();
  lVar5 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar4);
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar3 != '\0') {
        (**(code **)(*plVar2 + 0x110))(plVar2,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1405b634c FUN_1405b634c body=106 status=ok
// SIG undefined FUN_1405b634c(void)

void FUN_1405b634c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x68) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar1) != 0)) {
        FUN_14388787c(param_1 + 0x68,param_1,param_2,param_3);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x70) * 0x10 != lVar1);
  }
  *(char *)(param_1 + 0xb6) = (char)param_3;
  *(undefined1 *)(param_1 + 0xb7) = 1;
  return;
}



// FUNCTION 1405b63b6 FUN_1405b63b6 body=309 status=ok
// SIG undefined FUN_1405b63b6(void)

void FUN_1405b63b6(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    cVar5 = FUN_1405b64ec();
    if (*(char *)(param_1 + 0x41) == cVar5) {
      if (*(char *)(param_1 + 0x43) == '\x01') {
        *(undefined1 *)(param_1 + 0x43) = 0;
      }
      if (*(char *)(param_1 + 0x50) == '\x01') {
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x50) == '\0') {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    else {
      dVar10 = *(double *)(param_1 + 0x48) - (double)param_2;
      *(double *)(param_1 + 0x48) = dVar10;
      if (dVar10 <= 0.0) {
        *(char *)(param_1 + 0x41) = cVar5;
        *(undefined1 *)(param_1 + 0x50) = 0;
        iVar1 = *(int *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x6c) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x60);
        if (0 < (longlong)uVar6) {
          bVar7 = false;
          do {
            lVar8 = uVar6 * 0x10 + -8;
            uVar9 = uVar6;
            while (((lVar2 = *(longlong *)(param_1 + 0x58), *(int *)(lVar2 + lVar8) != 0 &&
                    (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar3 + 0x60))(), cVar5 != '\0'))) {
              lVar8 = lVar8 + -0x10;
              bVar4 = uVar9 < 2;
              uVar9 = uVar9 - 1;
              if (bVar4) {
                *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
                if (!bVar7) {
                  return;
                }
                goto LAB_1405b64c0;
              }
            }
            uVar6 = uVar9 - 1;
            bVar7 = true;
          } while (1 < uVar9);
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
LAB_1405b64c0:
          FUN_14474d06a((longlong *)(param_1 + 0x58),0);
          return;
        }
        *(int *)(param_1 + 0x6c) = iVar1;
      }
    }
  }
  return;
}



// FUNCTION 1405b64ec FUN_1405b64ec body=141 status=ok
// SIG undefined FUN_1405b64ec(void)

bool FUN_1405b64ec(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  double dVar3;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1405b657a();
  if (plVar2 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    (**(code **)(*plVar2 + 0x328))(plVar2,&local_30);
    dVar3 = SQRT(local_30 * local_30 + local_28 * local_28);
    if (*(char *)(param_1 + 0x41) == '\x01') {
      bVar1 = *(double *)(param_1 + 0x30) <= dVar3;
    }
    else {
      bVar1 = *(double *)(param_1 + 0x28) <= dVar3 && dVar3 != *(double *)(param_1 + 0x28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b657a FUN_1405b657a body=89 status=ok
// SIG undefined FUN_1405b657a(void)

undefined8 FUN_1405b657a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001405b65cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1405b65da FUN_1405b65da body=1882 status=ok
// SIG undefined FUN_1405b65da(void)

void FUN_1405b65da(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  byte bVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_54 [4];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)param_1[1];
  if ((*(char *)*param_1 != '\0') || (cVar7 = FUN_14361bc72(plVar4), cVar7 != '\0')) {
    lVar20 = *plVar4;
    if (plVar4[6] != 0) {
      local_68 = 0;
      uStack_60 = 0;
      iVar2 = *(int *)(lVar20 + 0x10);
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar2 != 0) {
        FUN_140718530(&local_68);
        puVar15 = (undefined8 *)*plVar4;
        puVar16 = (undefined8 *)puVar15[1];
        if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
          puVar16 = puVar15;
        }
        if ((longlong)*(int *)(puVar15 + 2) != 0) {
          puVar15 = puVar16 + *(int *)(puVar15 + 2);
          do {
            uVar17 = uStack_60;
            puVar5 = (uint *)*puVar16;
            lVar20 = *(longlong *)(puVar5 + 0x4e);
            if (lVar20 != 0) {
              lVar19 = (longlong)(int)uStack_60;
              uVar11 = (int)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar11);
              if (uStack_60._4_4_ < uVar11) {
                FUN_140711e5c(&local_68,uVar17 & 0xffffffff);
                lVar20 = *(longlong *)(puVar5 + 0x4e);
              }
              *(longlong *)(local_68 + lVar19 * 8) = lVar20;
              lVar20 = *(longlong *)(puVar5 + 0x4e);
              uVar11 = *(uint *)(*(longlong *)(lVar20 + 0x40) + 0x88);
              uVar8 = puVar5[0x51];
              if ((((((uVar8 == 0) || (uVar3 = puVar5[0x50], (int)uVar3 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar3)) ||
                   ((plVar13 = (longlong *)
                               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                    plVar13 == (longlong *)0x0 || (*(uint *)(plVar13 + 2) != uVar8)))) ||
                  ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar19 = *plVar13, lVar19 == 0))
              {
LAB_1405b677a:
                pcVar18 = (char *)((longlong)puVar5 + 0x17);
LAB_1405b677e:
                if (*pcVar18 != '\x01') {
                  uVar8 = puVar5[0x51];
                  if (uVar8 != 0) goto LAB_1405b67a2;
                  goto LAB_1405b6829;
                }
LAB_1405b6785:
                if (0 < (int)uVar11) goto LAB_1405b6839;
              }
              else {
                if ((*(longlong *)(lVar19 + 0xa8) == 0) ||
                   ((*(byte *)(*(longlong *)(lVar19 + 0xa8) + 0x65) & 1) != 0)) {
                  if (DAT_14cad2858 == 0) {
                    local_50 = FUN_144a7958c;
                    local_80 = FUN_14081d0ea;
                    local_88 = &LAB_146395584;
                    local_90 = &local_50;
                    local_98 = &LAB_147a0ba80;
                    local_a0 = &LAB_14575ccce;
                    local_a8 = L"Engine";
                    local_b0 = 0x40000000000;
                    local_b8 = 0x10000004;
                    local_c0 = 0x10;
                    local_c8 = 0x1180;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                  FUN_1463bcebe);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cad2858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
                  goto LAB_1405b677a;
                  pcVar18 = (char *)(lVar19 + 0x427);
                  goto LAB_1405b677e;
                }
LAB_1405b67a2:
                uVar3 = puVar5[0x50];
                if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
                    (plVar13 = (longlong *)
                               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                    plVar13 == (longlong *)0x0)) ||
                   (((*(uint *)(plVar13 + 2) != uVar8 ||
                     ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
                    (lVar19 = *plVar13, lVar19 == 0)))) {
LAB_1405b6829:
                  pcVar18 = (char *)((longlong)puVar5 + 0x17);
                }
                else {
                  if ((*(longlong *)(lVar19 + 0xa8) != 0) &&
                     ((*(byte *)(*(longlong *)(lVar19 + 0xa8) + 0x65) & 1) == 0))
                  goto LAB_1405b6785;
                  if (DAT_14cad2858 == 0) {
                    local_50 = FUN_144a7958c;
                    local_80 = FUN_14081d0ea;
                    local_88 = &LAB_146395584;
                    local_90 = &local_50;
                    local_98 = &LAB_147a0ba80;
                    local_a0 = &LAB_14575ccce;
                    local_a8 = L"Engine";
                    local_b0 = 0x40000000000;
                    local_b8 = 0x10000004;
                    local_c0 = 0x10;
                    local_c8 = 0x1180;
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                  FUN_1463bcebe);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cad2858 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30))
                  goto LAB_1405b6829;
                  pcVar18 = (char *)(lVar19 + 0x427);
                }
                if ((0 < (int)uVar11) && (*pcVar18 == '\0')) {
LAB_1405b6839:
                  uVar17 = 0;
                  do {
                    lVar19 = *(longlong *)(*(longlong *)(lVar20 + 0x40) + 0x80);
                    lVar10 = *(longlong *)(lVar20 + 0x40) + 0x78;
                    if (lVar19 != 0) {
                      lVar10 = lVar19;
                    }
                    lVar19 = *(longlong *)(lVar10 + uVar17 * 8);
                    if ((*(byte *)(lVar19 + 0x79) & 1) != 0) {
                      uVar8 = *(uint *)(lVar19 + 0xc);
                      lVar10 = *(longlong *)(lVar19 + 0x48);
                      *(byte *)(lVar19 + 0x79) = *(byte *)(lVar19 + 0x79) & 0xfe;
                      *(uint *)(lVar19 + 0xc) = uVar8 | 1;
                      if ((lVar10 != 0 && uVar8 == 0) && (*(longlong *)(lVar10 + 8) != 0)) {
                        FUN_144821112(*(longlong *)(lVar10 + 8) + 0x70,lVar10,
                                      *(uint *)(lVar19 + 8) >> 3);
                      }
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar11 != uVar17);
                }
              }
              if ((((puVar5[1] != 0) && (uVar8 = *puVar5, -1 < (int)uVar8)) &&
                  ((int)uVar8 < DAT_14c9647dc)) &&
                 (((plVar13 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                   plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar5[1])) &&
                  (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
                   ((0 < (int)uVar11 && (lVar19 = *plVar13, lVar19 != 0)))))))) {
                uVar17 = 0;
                do {
                  lVar10 = DAT_14c997cc0;
                  if (DAT_14c997cc0 == 0) {
                    plVar13 = (longlong *)FUN_145a62958();
                    lVar10 = plVar13[0x22];
                    if (lVar10 == 0) {
                      local_70 = plVar13;
                      (**(code **)(*plVar13 + 1000))();
                      lVar10 = local_70[0x22];
                    }
                  }
                  bVar1 = *(byte *)(lVar19 + 0x31);
                  bVar12 = *(byte *)(lVar10 + 0x75);
                  if (bVar1 != 0) {
                    bVar12 = bVar1;
                  }
                  if (4 < bVar12) {
                    bVar12 = 0;
                  }
                  lVar10 = *(longlong *)(*(longlong *)(lVar20 + 0x40) + 0x80);
                  lVar9 = *(longlong *)(lVar20 + 0x40) + 0x78;
                  if (lVar10 != 0) {
                    lVar9 = lVar10;
                  }
                  if (*(byte *)(*(longlong *)(lVar9 + uVar17 * 8) + 0x78) != bVar12) {
                    FUN_1429b8506();
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar11 != uVar17);
              }
            }
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar15);
        }
      }
      FUN_142a2e6cc(plVar4[6],&local_68,1);
      lVar20 = *plVar4;
      lVar19 = *(longlong *)(lVar20 + 8);
      if (*(longlong *)(lVar20 + 8) == 0) {
        lVar19 = lVar20;
      }
      iVar2 = *(int *)(lVar20 + 0x10);
      if ((longlong)iVar2 != 0) {
        lVar20 = 0;
        do {
          lVar10 = *(longlong *)(lVar19 + lVar20);
          if (*(longlong *)(lVar10 + 0x138) != 0) {
            if ((*(int *)(lVar10 + 0x144) == 0) ||
               (uVar11 = *(uint *)(lVar10 + 0x140), (int)uVar11 < 0)) {
LAB_1405b6c83:
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              if ((int)uVar11 < DAT_14c9647dc) {
                puVar15 = (undefined8 *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                if (((puVar15 == (undefined8 *)0x0) ||
                    (*(int *)(puVar15 + 2) != *(int *)(lVar10 + 0x144))) ||
                   ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_1405b6c83;
                uVar14 = *puVar15;
              }
            }
            FUN_14075bef6(plVar4[6],uVar14);
          }
          if (((((*(byte *)(lVar10 + 0x3b) & 0x20) != 0) && (*(int *)(lVar10 + 0x144) != 0)) &&
              ((uVar11 = *(uint *)(lVar10 + 0x140), -1 < (int)uVar11 &&
               (((int)uVar11 < DAT_14c9647dc &&
                (plVar13 = (longlong *)
                           ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                plVar13 != (longlong *)0x0)))))) &&
             (((int)plVar13[2] == *(int *)(lVar10 + 0x144) &&
              (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
               (pcVar6 = (code *)*plVar13, pcVar6 != (code *)0x0)))))) {
            lVar10 = *(longlong *)(pcVar6 + 0xb0);
            if (lVar10 == 0) {
              lVar10 = FUN_1448abda6(pcVar6);
            }
            local_50 = pcVar6;
            FUN_1409e9912(*(longlong *)(lVar10 + 0x260) + 0xc0,local_54,&local_50,0);
          }
          lVar20 = lVar20 + 8;
        } while ((longlong)iVar2 * 8 != lVar20);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar20 = *plVar4;
    }
    lVar19 = *(longlong *)(lVar20 + 8);
    if (*(longlong *)(lVar20 + 8) == 0) {
      lVar19 = lVar20;
    }
    iVar2 = *(int *)(lVar20 + 0x10);
    if ((longlong)iVar2 != 0) {
      lVar20 = 0;
      do {
        FUN_1436056b4(*(undefined8 *)(lVar19 + lVar20));
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar2 * 8 != lVar20);
    }
    if ((*(char *)((longlong)plVar4 + 0x39) == '\0') &&
       (iVar2 = *(int *)(*plVar4 + 0x10), 0 < (longlong)iVar2)) {
      lVar20 = 0;
      do {
        lVar19 = *(longlong *)(*plVar4 + 8);
        if (lVar19 == 0) {
          lVar19 = *plVar4;
        }
        FUN_14034aa52(*(undefined8 *)(lVar19 + lVar20 * 8));
        lVar20 = lVar20 + 1;
      } while (iVar2 != lVar20);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b6d36 FUN_1405b6d36 body=44 status=ok
// SIG undefined FUN_1405b6d36(void)

void FUN_1405b6d36(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1405b6d62(param_2);
  return;
}



// FUNCTION 1405b6d62 FUN_1405b6d62 body=55 status=ok
// SIG undefined FUN_1405b6d62(void)

void FUN_1405b6d62(longlong *param_1)

{
  FUN_1405b6d9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405b6d9a FUN_1405b6d9a body=519 status=ok
// SIG undefined FUN_1405b6d9a(void)

void FUN_1405b6d9a(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1405b6dcd;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x48) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1405b6dcd;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1405b6dcd:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1405b6fa2 FUN_1405b6fa2 body=257 status=ok
// SIG undefined FUN_1405b6fa2(void)

void FUN_1405b6fa2(undefined4 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *param_3;
  if (*(longlong *)(param_1 + 4) != lVar5) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(longlong *)(param_1 + 4) = lVar5;
  if (*(longlong *)(param_1 + 6) != param_3[1]) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  uVar4 = FUN_14477b664();
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(longlong *)(param_1 + 8) = param_3[2];
  FUN_1405b70a4(param_1 + 10,param_3 + 3);
  *(longlong *)(param_1 + 0xe) = param_3[5];
  puVar7 = (undefined8 *)(param_1 + 0x10);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x28] = 0;
  if (param_1[0x48] != 2) {
    FUN_1446efa72(param_1 + 0x46,0,2,0x10);
    param_1[0x48] = 2;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x46);
  *puVar7 = &PTR_LAB_14b3f01a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar7[2] = lVar6;
  *puVar7 = &PTR_FUN_14b3f0280;
  puVar7[3] = param_1;
  return;
}



// FUNCTION 1405b70a4 FUN_1405b70a4 body=89 status=ok
// SIG undefined FUN_1405b70a4(void)

undefined8 * FUN_1405b70a4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1405b70fe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405b70fe FUN_1405b70fe body=334 status=ok
// SIG undefined FUN_1405b70fe(void)

void FUN_1405b70fe(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b7170;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1405b7170:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405b724c FUN_1405b724c body=21 status=ok
// SIG undefined FUN_1405b724c(void)

undefined8 FUN_1405b724c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1405b7262 FUN_1405b7262 body=75 status=ok
// SIG undefined FUN_1405b7262(void)

void FUN_1405b7262(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
      (**(code **)(*plVar3 + 0x40))(plVar3,param_3);
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1405b72ae FUN_1405b72ae body=43 status=ok
// SIG undefined FUN_1405b72ae(void)

void FUN_1405b72ae(longlong param_1,undefined8 param_2)

{
  FUN_140323a4e();
  FUN_1405b72da(param_1,*(longlong *)(param_1 + 0x48) + 0x1e8,param_2);
  return;
}



// FUNCTION 1405b72da FUN_1405b72da body=2104 status=ok
// SIG undefined FUN_1405b72da(void)

void FUN_1405b72da(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  undefined8 *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88;
  int local_80;
  uint local_70;
  int iStack_6c;
  longlong *plStack_68;
  uint local_60;
  undefined4 uStack_5c;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar17 = param_1[8];
  local_f0 = param_3;
  if (lVar17 == 0) {
    lVar14 = 0;
    param_1 = (longlong *)0x0;
LAB_1405b79e3:
    local_98 = (longlong *)0x0;
    bVar4 = true;
    plStack_a0 = param_1;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_1405b78e8:
      lVar14 = 0;
    }
    else {
      uVar15 = *(uint *)(lVar17 + 0x48);
      lVar14 = 0;
      if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
        plVar19 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
        if ((plVar19 == (longlong *)0x0) ||
           (((int)plVar19[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_1405b78e8;
        lVar14 = *plVar19;
      }
    }
    plVar19 = *(longlong **)(lVar17 + 0x118);
    if (plVar19 == (longlong *)0x0) goto LAB_1405b79e3;
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    LOCK();
    *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
    UNLOCK();
    bVar4 = false;
    plStack_a0 = param_1;
    local_98 = plVar19;
  }
  plVar19 = local_98;
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,3);
  local_80 = 0;
  local_90._0_4_ = 0;
  if (lVar14 == 0) {
    iVar8 = 0;
    uVar15 = (uint)local_90;
  }
  else {
    uVar15 = *(uint *)(lVar14 + 0xc);
    local_90 = (ulonglong)uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar8 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar8 = *(int *)(lVar17 + 0x10);
      bVar21 = iVar8 == 0;
      if (bVar21) {
        *(int *)(lVar17 + 0x10) = iVar16;
        iVar8 = 0;
      }
      UNLOCK();
      uVar15 = (uint)local_90;
      if (bVar21) {
        iVar8 = iVar16;
      }
    }
  }
  local_90._0_4_ = uVar15;
  local_90 = CONCAT44(iVar8,(uint)local_90);
  local_88 = 2;
  if (local_80 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_80 + -1,1);
    local_80 = 0;
  }
  if (!bVar4) {
    LOCK();
    piVar2 = (int *)((longlong)plVar19 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
  }
  FUN_1447c3578(param_2,&local_70,&local_a8);
  lVar17 = DAT_14c9a3da0;
  if ((longlong)local_80 != 0) {
    lVar14 = (longlong)local_80 + -1;
    lVar18 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
    if (*(longlong *)(lVar17 + lVar18) != 0) {
      FUN_1400020a8();
    }
    lVar17 = DAT_14c9a3da0;
    iVar8 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar17 + lVar18) = 0xffffffff;
    iVar16 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar16 = DAT_14c9a3dd0;
    }
    *(int *)(lVar17 + 4 + lVar18) = iVar16;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    bVar6 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar16 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_80 = 0;
  }
  if (((char)local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_98 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  local_c0 = 0;
  local_c8 = 0;
  if (local_50 == 0xc) {
    plVar19 = plStack_68;
    iVar8 = iStack_6c;
    uVar15 = local_60;
    bVar6 = (byte)uStack_5c;
    uVar20 = local_70;
LAB_1405b75e2:
    FUN_1405b7b14(&local_70,&local_a8);
    if ((((iVar8 != 0 && plVar19 != (longlong *)0x0) && (-1 < (int)uVar20)) &&
        ((int)uVar20 < DAT_14c9647dc)) &&
       (((lVar17 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8), lVar17 != 0 &&
         (*(int *)(lVar17 + 0x10) == iVar8)) && ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)))) {
      if (*(code **)(*plVar19 + 0x30) == (code *)&LAB_14493be02) {
        plVar19 = plVar19 + 0x4b;
      }
      else {
        plVar19 = (longlong *)(**(code **)(*plVar19 + 0x30))(plVar19);
      }
      if (((-1 < (int)uVar15) &&
          (uVar9 = (ulonglong)((bVar6 & 1) << 4),
          (int)uVar15 < *(int *)((longlong)plVar19 + uVar9 + 0x80))) &&
         ((lVar17 = (ulonglong)uVar15 * 0x30 + *(longlong *)((longlong)plVar19 + uVar9 + 0x78),
          lVar17 != 0 && (cVar7 = FUN_1449d5ff4(lVar17), cVar7 != '\0')))) {
        if (*(int *)(lVar17 + 8) != 0) {
          uVar15 = *(uint *)(lVar17 + 4);
          if (-1 < (int)uVar15) {
            lVar14 = 0;
            if ((int)uVar15 < DAT_14c9647dc) {
              plVar19 = (longlong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
              if (((plVar19 == (longlong *)0x0) || ((int)plVar19[2] != *(int *)(lVar17 + 8))) ||
                 ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) {
                lVar14 = 0;
              }
              else {
                lVar14 = *plVar19;
              }
            }
            goto LAB_1405b774c;
          }
        }
        lVar14 = 0;
        goto LAB_1405b774c;
      }
    }
    FUN_1405b801a(&local_70,&local_e8,&DAT_14cb23ae0);
    puVar10 = local_f0;
    *local_f0 = 1;
    *(undefined8 **)(local_f0 + 8) = local_e8;
    *(longlong **)(local_f0 + 0x10) = plStack_e0;
    *(longlong **)(local_f0 + 0x18) = local_d8;
    local_b8 = 0;
    uStack_b0 = 0;
    cVar7 = FUN_140076fba(&local_b8,0);
    if (cVar7 == '\0') {
      uStack_b0 = 0;
    }
    *(undefined8 *)(puVar10 + 0x30) = local_b8;
    *(undefined8 *)(puVar10 + 0x38) = uStack_b0;
  }
  else {
    FUN_1400b56fe(&local_a8,&local_70,0xc);
    bVar5 = local_88;
    if (local_88 == 0) {
      plVar19 = (longlong *)0x0;
      iVar8 = 0;
      uVar15 = 0xffffffff;
      bVar6 = 0;
      uVar20 = 0;
    }
    else {
      plVar19 = plStack_a0;
      iVar8 = local_a8._4_4_;
      uVar15 = (uint)local_98;
      bVar6 = local_98._4_1_;
      uVar20 = (uint)local_a8;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar13 = &local_a8;
      if (0x18 < (ushort)local_90) {
        puVar13 = local_a8;
      }
      (*pcVar3)(puVar13);
    }
    if (0x18 < (ushort)local_90) {
      FUN_1400020a8(local_a8);
    }
    if (bVar5 != 0) goto LAB_1405b75e2;
    if (local_50 == 0xe) {
      cVar7 = FUN_14032392e(&local_70,&local_c0);
      if ((cVar7 == '\0') || (puVar10 = local_f0, local_c0 == 0)) goto LAB_1405b7751;
LAB_1405b7742:
      FUN_1405b7e72(puVar10);
      goto LAB_1405b7751;
    }
    bVar6 = FUN_14024b086(&local_70,&local_c8);
    puVar10 = local_f0;
    lVar14 = local_c8;
    if ((local_c8 != 0 & bVar6) != 1) {
      bVar6 = FUN_14032392e(&local_70,&local_c0);
      if ((local_c0 != 0 & bVar6) != 1) {
        if (local_50 == 4) {
          local_d8 = (longlong *)CONCAT44(uStack_5c,local_60);
          local_e8 = (undefined8 *)CONCAT44(iStack_6c,local_70);
          plStack_e0 = plStack_68;
        }
        else {
          FUN_1400b56fe(&local_a8,&local_70,4);
          bVar6 = local_88;
          if (local_88 != 0) {
            local_d8 = local_98;
            local_e8 = local_a8;
            plStack_e0 = plStack_a0;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
          if (pcVar3 != (code *)0x0) {
            puVar13 = &local_a8;
            if (0x18 < (ushort)local_90) {
              puVar13 = local_a8;
            }
            (*pcVar3)(puVar13);
          }
          if (0x18 < (ushort)local_90) {
            FUN_1400020a8(local_a8);
          }
          if (bVar6 == 0) goto LAB_1405b7751;
        }
        *puVar10 = 1;
        *(undefined8 **)(puVar10 + 8) = local_e8;
        *(longlong **)(puVar10 + 0x10) = plStack_e0;
        *(longlong **)(puVar10 + 0x18) = local_d8;
        local_a8 = (undefined8 *)0x0;
        plStack_a0 = (longlong *)0x0;
        cVar7 = FUN_140076fba(&local_a8,0);
        if (cVar7 == '\0') {
          plStack_a0 = (longlong *)0x0;
        }
        *(undefined8 **)(puVar10 + 0x30) = local_a8;
        *(longlong **)(puVar10 + 0x38) = plStack_a0;
        goto LAB_1405b7751;
      }
      goto LAB_1405b7742;
    }
LAB_1405b774c:
    FUN_1405b7be4(local_f0,lVar14);
  }
LAB_1405b7751:
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar3 != (code *)0x0) {
    puVar11 = &local_70;
    if (0x18 < local_58) {
      puVar11 = (uint *)CONCAT44(iStack_6c,local_70);
    }
    (*pcVar3)(puVar11);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(CONCAT44(iStack_6c,local_70));
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b7b14 FUN_1405b7b14 body=207 status=ok
// SIG undefined FUN_1405b7b14(void)

undefined4 * FUN_1405b7b14(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\f') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0xc);
  pppuVar5 = (undefined8 ***)&DAT_14ac8d9e8;
  if (local_20 != 0) {
    pppuVar5 = local_40;
  }
  *(undefined8 ***)(param_2 + 4) = pppuVar5[2];
  uVar2 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uVar3 = *(undefined4 *)(pppuVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  *param_2 = *(undefined4 *)pppuVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405b7be4 FUN_1405b7be4 body=224 status=ok
// SIG undefined FUN_1405b7be4(void)

void FUN_1405b7be4(undefined1 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  local_28 = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x20) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x24) = iVar2;
  FUN_1405b7cc6(&local_38,&local_28);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b7cc6 FUN_1405b7cc6 body=198 status=ok
// SIG undefined FUN_1405b7cc6(void)

uint * FUN_1405b7cc6(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_1405b7d8c();
    lVar4 = FUN_144718840(lVar4,uVar3);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            *(uint *)(lVar4 + 0x10) = uVar5;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar6) {
            uVar2 = uVar5;
          }
        }
      }
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 1405b7d8c FUN_1405b7d8c body=228 status=ok
// SIG undefined FUN_1405b7d8c(void)

longlong FUN_1405b7d8c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1c760 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e398d5;
    local_40 = FUN_146421547;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavGoal",&DAT_14cb1c760,&DAT_147e398d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b7e72 FUN_1405b7e72 body=224 status=ok
// SIG undefined FUN_1405b7e72(void)

void FUN_1405b7e72(undefined1 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 2;
  local_28 = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_1405b7f54(&local_38,&local_28);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b7f54 FUN_1405b7f54 body=198 status=ok
// SIG undefined FUN_1405b7f54(void)

uint * FUN_1405b7f54(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_1405b7d8c();
    lVar4 = FUN_144718840(lVar4,uVar3);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x10);
        if (*(uint *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
          }
          LOCK();
          uVar2 = *(uint *)(lVar4 + 0x10);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            *(uint *)(lVar4 + 0x10) = uVar5;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar6) {
            uVar2 = uVar5;
          }
        }
      }
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 1405b801a FUN_1405b801a body=207 status=ok
// SIG undefined FUN_1405b801a(void)

undefined4 * FUN_1405b801a(undefined4 *param_1,undefined4 *param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x04') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_48,param_1,4);
  if (local_28 != 0) {
    param_3 = local_48;
  }
  *(undefined8 ***)(param_2 + 4) = param_3[2];
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_48;
    if (0x18 < local_30) {
      pppuVar5 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b80ec FUN_1405b80ec body=12 status=ok
// SIG undefined FUN_1405b80ec(void)

void FUN_1405b80ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001405b80f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1405b80f8 FUN_1405b80f8 body=31 status=ok
// SIG undefined FUN_1405b80f8(void)

undefined8 FUN_1405b80f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405b8118 FUN_1405b8118 body=115 status=ok
// SIG undefined FUN_1405b8118(void)

undefined4 FUN_1405b8118(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar3 = FUN_1449ec78a(param_1 + 0x540);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  piVar4 = (int *)FUN_1405b818c(param_1 + 0x550,
                                ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),param_2 + 0x28);
  *piVar4 = *piVar4 + 1;
  *(byte *)(param_1 + 0x334) = *(byte *)(param_1 + 0x334) & 0xfe;
  return uVar3;
}



// FUNCTION 1405b818c FUN_1405b818c body=189 status=ok
// SIG undefined FUN_1405b818c(void)

longlong * FUN_1405b818c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1405b822c;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1405b8678(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_1405b822c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 3;
}



// FUNCTION 1405b824a FUN_1405b824a body=274 status=ok
// SIG undefined FUN_1405b824a(void)

undefined8 * FUN_1405b824a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b83fc(param_1,iVar1,0);
    FUN_1405b835c(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405b853a(param_1 + 2,iVar1,0);
    FUN_1405b83ac(param_1[2],uVar2,iVar1);
  }
  lVar3 = param_2[4];
  param_1[4] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  lVar3 = param_2[7];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  lVar3 = param_2[9];
  param_1[9] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1405b835c FUN_1405b835c body=80 status=ok
// SIG undefined FUN_1405b835c(void)

void FUN_1405b835c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1405b83ac FUN_1405b83ac body=80 status=ok
// SIG undefined FUN_1405b83ac(void)

void FUN_1405b83ac(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1405b83fc FUN_1405b83fc body=317 status=ok
// SIG undefined FUN_1405b83fc(void)

void FUN_1405b83fc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b846a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1405b846a:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405b853a FUN_1405b853a body=317 status=ok
// SIG undefined FUN_1405b853a(void)

void FUN_1405b853a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405b85a8;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1405b85a8:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405b8678 FUN_1405b8678 body=895 status=ok
// SIG undefined FUN_1405b8678(void)

int * FUN_1405b8678(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_140549c28(param_1,iVar22);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar12 = iVar20 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar17 = iVar20 + 1;
    iVar23 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar23 = iVar20;
    }
    if (iVar23 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar12 = iVar20;
        }
        else {
          uVar13 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar13) {
              uVar18 = uVar13;
            }
          }
          else {
            uVar18 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar19 = FUN_144a3809e(uVar18 << 2,0);
          iVar12 = (int)(uVar19 >> 2);
          iVar17 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar17 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar21,iVar12);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar12 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar12 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar21;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar12 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar20 & 0x1f;
    puVar3 = (uint *)((longlong)plVar21 + (longlong)(iVar23 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar14 = (longlong)iVar22;
    iVar20 = *(int *)(*param_1 + 4 + lVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar20;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x28) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar20 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar20 = iVar22;
  }
  puVar3 = (uint *)((longlong)plVar21 + (longlong)(iVar20 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar22 & 0x1f);
  plVar21 = (longlong *)(*param_1 + lVar14 * 0x28);
  param_4 = (longlong *)*param_4;
  *plVar21 = *param_4;
  plVar21[1] = param_4[1];
  lVar14 = param_4[2];
  plVar21[2] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar21 + 3) = 0;
  *(undefined4 *)(plVar21 + 4) = 0xffffffff;
  cVar11 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar20 == -1) {
      cVar11 = '\0';
    }
    else {
      do {
        plVar15 = (longlong *)(*param_1 + (longlong)iVar20 * 0x28);
        if (*plVar15 == *plVar21) {
          plVar4 = (longlong *)plVar15[2];
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
          lVar14 = *plVar21;
          uVar5 = *(undefined4 *)((longlong)plVar21 + 4);
          lVar9 = plVar21[1];
          uVar6 = *(undefined4 *)((longlong)plVar21 + 0xc);
          uVar7 = *(undefined4 *)((longlong)plVar21 + 0x14);
          lVar10 = plVar21[3];
          uVar8 = *(undefined4 *)((longlong)plVar21 + 0x1c);
          *(int *)(plVar15 + 2) = (int)plVar21[2];
          *(undefined4 *)((longlong)plVar15 + 0x14) = uVar7;
          *(int *)(plVar15 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar8;
          *(int *)plVar15 = (int)lVar14;
          *(undefined4 *)((longlong)plVar15 + 4) = uVar5;
          *(int *)(plVar15 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar15 + 0xc) = uVar6;
          FUN_147fa3090(param_1,iVar22);
          cVar11 = '\x01';
          break;
        }
        iVar20 = (int)plVar15[4];
        cVar11 = '\0';
      } while (iVar20 != -1);
    }
  }
  if (param_5 != (char *)0x0) {
    *param_5 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar20 = 1;
    }
    else {
      uVar19 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar20 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)plVar21 + 0x24) = param_3;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(undefined4 *)(plVar21 + 4) =
           *(undefined4 *)
            ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = param_1 + 7;
      }
      *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar20;
      FUN_1405b8b0c(param_1);
    }
  }
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 1405b89f8 FUN_1405b89f8 body=275 status=ok
// SIG undefined FUN_1405b89f8(void)

void FUN_1405b89f8(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1405b8b0c FUN_1405b8b0c body=594 status=ok
// SIG undefined FUN_1405b8b0c(void)

void FUN_1405b8b0c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x28);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x24 + lVar13 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x20 + lVar13 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1405b8d15;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1405b8d15:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b8d60 FUN_1405b8d60 body=3043 status=ok
// SIG undefined FUN_1405b8d60(void)

void FUN_1405b8d60(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  byte *pbVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  float fVar24;
  float fVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 auStack_5d8 [32];
  double *local_5b8;
  double local_5a8 [3];
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  double local_550;
  undefined4 local_548;
  uint uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  longlong local_528;
  longlong lStack_520;
  uint local_518;
  undefined8 local_514;
  undefined4 local_50c;
  undefined1 local_508;
  undefined1 local_507;
  double local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  uint uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  byte local_4c0;
  undefined7 uStack_4bf;
  float local_440;
  char local_420;
  longlong local_418;
  longlong lStack_410;
  uint local_408;
  undefined8 local_404;
  undefined4 local_3fc;
  undefined1 local_3f8;
  undefined1 local_3f7;
  longlong *local_218;
  undefined8 local_210;
  undefined1 local_200 [256];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  uVar13 = *(uint *)(param_1 + 0x70);
  if ((longlong)(int)uVar13 < 1) {
    local_3f7 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
    local_3fc = *(undefined4 *)(param_1 + 0x58);
    lVar20 = *param_2;
    lStack_410 = param_2[1];
    local_404 = 0x3f80000000000000;
    local_3f8 = 0;
    uVar13 = (uint)lStack_410;
    uVar22 = 0;
    local_418 = lVar20;
    if ((uint)lStack_410 == 0) {
LAB_1405b980f:
      local_408 = uVar22;
      if (uVar22 < (uint)lStack_410) {
        do {
          uVar22 = local_408;
          FUN_1402d7d58(&local_418,*(undefined1 *)(param_1 + 0x94));
          local_408 = uVar22 + 1;
          if ((local_408 < uVar13) &&
             ((*(byte *)(lVar20 + 0x34 + (longlong)(int)local_408 * 0x38) & 1) != 0)) {
            uVar22 = uVar22 + 2;
            do {
              local_408 = uVar13;
              if (uVar13 == uVar22) break;
              lVar19 = (longlong)(int)uVar22;
              local_408 = uVar22;
              uVar22 = uVar22 + 1;
            } while ((*(byte *)(lVar20 + 0x34 + lVar19 * 0x38) & 1) != 0);
          }
        } while (local_408 < uVar13);
      }
    }
    else {
      do {
        if ((*(byte *)(lVar20 + 0x34 + (longlong)(int)uVar22 * 0x38) & 1) == 0) goto LAB_1405b980f;
        uVar22 = uVar22 + 1;
      } while ((uint)lStack_410 != uVar22);
    }
    goto LAB_1405b8f83;
  }
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x2000000000;
  if (uVar13 < 0x21) {
    puVar23 = *(uint **)(param_1 + 0x68);
    puVar21 = puVar23 + (longlong)(int)uVar13 * 2;
LAB_1405b8e26:
    do {
      uVar26 = local_f8;
      if (((((puVar23[1] != 0) && (uVar13 = *puVar23, -1 < (int)uVar13)) &&
           ((int)uVar13 < DAT_14c9647dc)) &&
          ((plVar18 = (longlong *)
                      ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
           plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == puVar23[1])))) &&
         (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar20 = *plVar18, lVar20 != 0)))) {
        lVar19 = (longlong)(int)local_f8;
        uVar13 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,uVar13);
        if (local_f8._4_4_ < uVar13) {
          FUN_148d474cc(local_200,uVar26 & 0xffffffff);
        }
        puVar14 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar14 = local_200;
        }
        *(longlong *)(puVar14 + lVar19 * 8) = lVar20;
      }
      puVar23 = puVar23 + 2;
    } while (puVar23 != puVar21);
  }
  else {
    FUN_148d473ea(local_200);
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      puVar23 = *(uint **)(param_1 + 0x68);
      puVar21 = puVar23 + (longlong)*(int *)(param_1 + 0x70) * 2;
      goto LAB_1405b8e26;
    }
  }
  if ((int)local_f8 < 1) {
    local_3f7 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
    local_3fc = *(undefined4 *)(param_1 + 0x58);
    lVar20 = *param_2;
    lStack_410 = param_2[1];
    local_404 = 0x3f80000000000000;
    local_3f8 = 0;
    uVar13 = (uint)lStack_410;
    uVar22 = 0;
    local_418 = lVar20;
    if ((uint)lStack_410 == 0) {
LAB_1405b9891:
      local_408 = uVar22;
      if (uVar22 < (uint)lStack_410) {
        do {
          uVar22 = local_408;
          FUN_1402d7d58(&local_418,*(undefined1 *)(param_1 + 0x94));
          local_408 = uVar22 + 1;
          if ((local_408 < uVar13) &&
             ((*(byte *)(lVar20 + 0x34 + (longlong)(int)local_408 * 0x38) & 1) != 0)) {
            uVar22 = uVar22 + 2;
            do {
              local_408 = uVar13;
              if (uVar13 == uVar22) break;
              lVar19 = (longlong)(int)uVar22;
              local_408 = uVar22;
              uVar22 = uVar22 + 1;
            } while ((*(byte *)(lVar20 + 0x34 + lVar19 * 0x38) & 1) != 0);
          }
        } while (local_408 < uVar13);
      }
    }
    else {
      do {
        if ((*(byte *)(lVar20 + 0x34 + (longlong)(int)uVar22 * 0x38) & 1) == 0) goto LAB_1405b9891;
        uVar22 = uVar22 + 1;
      } while ((uint)lStack_410 != uVar22);
    }
  }
  else {
    FUN_1405f939e(param_1);
    local_218 = (longlong *)0x0;
    local_210 = 0x2000000000;
    FUN_1405b99ae(&local_418,local_f8 & 0xffffffff);
    local_507 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
    local_50c = *(undefined4 *)(param_1 + 0x58);
    lVar20 = *param_2;
    lStack_520 = param_2[1];
    local_514 = 0x3f80000000000000;
    local_508 = 0;
    uVar13 = 0;
    local_528 = lVar20;
    if ((uint)lStack_520 == 0) {
LAB_1405b9007:
      local_518 = uVar13;
      if (uVar13 < (uint)lStack_520) {
        do {
          uVar13 = local_518;
          lVar19 = (longlong)(int)local_518 * 0x38;
          puVar17 = (undefined4 *)(lVar20 + lVar19);
          if (*(char *)(lVar20 + 0x20 + lVar19) == '\x04') {
            local_538 = *(undefined8 *)(puVar17 + 4);
            local_548 = *puVar17;
            uStack_544 = puVar17[1];
            uStack_540 = puVar17[2];
            uStack_53c = puVar17[3];
LAB_1405b9084:
            if (0 < (int)local_f8) {
              lVar19 = 0;
              do {
                puVar14 = local_100;
                if (local_100 == (undefined1 *)0x0) {
                  puVar14 = local_200;
                }
                plVar18 = *(longlong **)(puVar14 + lVar19 * 8);
                lVar15 = FUN_140b94ea6(plVar18);
                if (lVar15 != 0) {
                  local_4f8._0_5_ = (uint5)local_4f8._0_4_;
                  local_5b8 = &local_4f8;
                  (**(code **)(*plVar18 + 0xa80))
                            (plVar18,&local_4e0,&local_548,*(undefined4 *)(param_1 + 0x60));
                  if ((0.0 < local_440) && (local_420 == '\0')) {
                    fVar24 = (float)FUN_1405b9a48(plVar18);
                    local_550 = (double)(fVar24 * -0.5) + (double)CONCAT71(uStack_4bf,local_4c0);
                    local_560 = local_4d0;
                    uStack_55c = uStack_4cc;
                    uStack_558 = uStack_4c8;
                    uStack_554 = uStack_4c4;
                    if ((char)uStack_4d8 == '\x01') {
                      uVar26 = (ulonglong)uStack_4dc;
                    }
                    else {
                      uVar26 = FUN_1408b98e8(plVar18,&local_560);
                    }
                    FUN_140703b8c(lVar15,&local_578,uVar26,1);
                    dVar9 = local_550 - local_568;
                    dVar10 = (double)CONCAT44(uStack_554,uStack_558) - local_570;
                    dVar7 = (double)CONCAT44(uStack_55c,local_560) - local_578;
                    FUN_1407541d8(lVar15,&local_590,uVar26,1);
                    dVar5 = local_590 * local_590 + local_588 * local_588;
                    if ((dVar5 != 1.0) || (NAN(dVar5))) {
                      if (dVar5 < 9.99999993922529e-09) {
                        uVar27 = (undefined4)DAT_14c8464f0;
                        uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                        dVar8 = DAT_14c8464e8;
                        dVar5 = DAT_14c8464e0;
                      }
                      else {
                        dVar8 = local_588 * (1.0 / SQRT(dVar5));
                        dVar5 = local_590 * (1.0 / SQRT(dVar5));
                        uVar27 = 0;
                        uVar29 = 0;
                      }
                    }
                    else {
                      uVar6 = -(ulonglong)(local_580 == 0.0) & (ulonglong)local_580;
                      uVar27 = (undefined4)uVar6;
                      uVar29 = (undefined4)(uVar6 >> 0x20);
                      dVar8 = local_588;
                      dVar5 = local_590;
                    }
                    fVar24 = (float)((dVar5 * DAT_14c8462c8 - DAT_14c8462c0 * dVar8) * dVar9 +
                                    (DAT_14c8462d0 * dVar8 -
                                    DAT_14c8462c8 * (double)CONCAT44(uVar29,uVar27)) * dVar7 +
                                    (DAT_14c8462c0 * (double)CONCAT44(uVar29,uVar27) -
                                    DAT_14c8462d0 * dVar5) * dVar10);
                    cVar12 = (**(code **)(*plVar18 + 0xa40))(plVar18);
                    if (cVar12 != '\x01') {
                      if (cVar12 != '\0') {
                        plVar16 = local_218;
                        if (local_218 == (longlong *)0x0) {
                          plVar16 = &local_418;
                        }
                        pdVar1 = (double *)(plVar16 + lVar19 * 2);
                        if ((longlong)(int)plVar16[lVar19 * 2 + 1] == 0) {
                          (**(code **)(*plVar18 + 0xa28))(plVar18,&local_4f8,1);
                          if (pdVar1 != &local_4f8) {
                            if (*pdVar1 != 0.0) {
                              FUN_1400020a8();
                            }
                            *pdVar1 = local_4f8;
                            local_4f8 = 0.0;
                            *(undefined4 *)(pdVar1 + 1) = (undefined4)local_4f0;
                            *(undefined4 *)((longlong)pdVar1 + 0xc) = local_4f0._4_4_;
                            local_4f0 = 0.0;
                          }
                          if (local_4f8 != 0.0) {
                            FUN_1400020a8();
                          }
                          if ((longlong)*(int *)(pdVar1 + 1) == 0) goto LAB_1405b90fb;
                          plVar18 = (longlong *)*pdVar1;
                          plVar16 = plVar18 + *(int *)(pdVar1 + 1);
                        }
                        else {
                          plVar18 = (longlong *)*pdVar1;
                          plVar16 = plVar18 + (int)plVar16[lVar19 * 2 + 1];
                        }
                        do {
                          plVar3 = (longlong *)*plVar18;
                          if ((plVar3 != (longlong *)0x0) &&
                             ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)) {
                            cVar12 = (**(code **)(*plVar3 + 0x7c0))
                                               (plVar3,&local_548,local_5a8,&local_4f8);
                            if ((cVar12 != '\0') &&
                               (dVar5 = (double)CONCAT44(uStack_544,local_548) - local_4f8,
                               dVar7 = (double)CONCAT44(uStack_53c,uStack_540) - local_4f0,
                               (float)(dVar7 * dVar7 + dVar5 * dVar5) <= 1.0)) goto LAB_1405b9464;
                          }
                          plVar18 = plVar18 + 1;
                        } while (plVar18 != plVar16);
                        goto LAB_1405b90fb;
                      }
                      if (((float)uVar26 <= 0.0) ||
                         ((float)(*(int *)(lVar15 + 0x628) + -1) <= (float)uVar26)) {
                        fVar28 = ABS((float)((double)CONCAT44(uVar29,uVar27) * dVar9 +
                                            dVar5 * dVar7 + dVar10 * dVar8));
                      }
                      else {
                        fVar28 = 0.0;
                      }
                      local_4f8 = 1.0;
                      local_4f0 = 1.0;
                      local_4e8 = 0x3ff0000000000000;
                      FUN_140703ce0(lVar15 + 0x650,local_5a8,uVar26,&local_4f8);
                      fVar25 = 0.0;
                      if (0.0 <= ABS(fVar24) - (float)local_5a8[0]) {
                        fVar25 = ABS(fVar24) - (float)local_5a8[0];
                      }
                      fVar24 = SQRT(fVar25 * fVar25 + fVar28 * fVar28);
                    }
                    if (fVar24 <= 0.0) {
LAB_1405b9464:
                      cVar12 = '\x01';
                      goto LAB_1405b9377;
                    }
                  }
                }
LAB_1405b90fb:
                lVar19 = lVar19 + 1;
              } while (lVar19 < (int)local_f8);
            }
            cVar12 = '\0';
LAB_1405b9377:
            FUN_1402d7d58(&local_528,cVar12 != *(char *)(param_1 + 0x94));
          }
          else {
            FUN_1400b56fe(&local_4e0,puVar17,4);
            bVar11 = local_4c0;
            if (local_4c0 != 0) {
              local_538 = CONCAT44(uStack_4cc,local_4d0);
              local_548 = local_4e0;
              uStack_544 = uStack_4dc;
              uStack_540 = uStack_4d8;
              uStack_53c = uStack_4d4;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)(((uint)local_4c0 * 8 + (uint)local_4c0) * 0x20));
            if (pcVar4 != (code *)0x0) {
              puVar17 = &local_4e0;
              if (0x18 < (ushort)uStack_4c8) {
                puVar17 = (undefined4 *)CONCAT44(uStack_4dc,local_4e0);
              }
              (*pcVar4)(puVar17);
            }
            if (0x18 < (ushort)uStack_4c8) {
              FUN_1400020a8(CONCAT44(uStack_4dc,local_4e0));
            }
            if (bVar11 != 0) goto LAB_1405b9084;
            pbVar2 = (byte *)(lVar20 + 0x34 + lVar19);
            *pbVar2 = *pbVar2 | 1;
          }
          local_518 = uVar13 + 1;
          if ((local_518 < (uint)lStack_520) &&
             (lVar20 = local_528,
             (*(byte *)(local_528 + 0x34 + (longlong)(int)local_518 * 0x38) & 1) != 0)) {
            uVar13 = uVar13 + 2;
            do {
              local_518 = (uint)lStack_520;
              if ((uint)lStack_520 == uVar13) break;
              lVar19 = (longlong)(int)uVar13;
              local_518 = uVar13;
              uVar13 = uVar13 + 1;
            } while ((*(byte *)(local_528 + 0x34 + lVar19 * 0x38) & 1) != 0);
          }
        } while (local_518 < (uint)lStack_520);
      }
    }
    else {
      do {
        if ((*(byte *)(lVar20 + 0x34 + (longlong)(int)uVar13 * 0x38) & 1) == 0) goto LAB_1405b9007;
        uVar13 = uVar13 + 1;
      } while ((uint)lStack_520 != uVar13);
    }
    FUN_1405b9944(&local_418);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405b8f83:
  if ((local_f0 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405b9944 FUN_1405b9944 body=61 status=ok
// SIG undefined FUN_1405b9944(void)

void FUN_1405b9944(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar1 = param_1;
  }
  FUN_1405b9981(lVar1,*(undefined4 *)(param_1 + 0x208));
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405b9981 FUN_1405b9981 body=45 status=ok
// SIG undefined FUN_1405b9981(void)

void FUN_1405b9981(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1405b99ae FUN_1405b99ae body=153 status=ok
// SIG undefined FUN_1405b99ae(void)

void FUN_1405b99ae(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x208) = param_2;
    if ((uint)(*(int *)(param_1 + 0x20c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148d47544(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148d4764a(param_1,param_2,iVar1 - param_2);
    FUN_148d476ba(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405b9a48 FUN_1405b9a48 body=331 status=ok
// SIG undefined FUN_1405b9a48(void)

void FUN_1405b9a48(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_1405b9b94();
  fVar4 = 0.0;
  if (cVar2 == '\0') goto LAB_1405b9a72;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
LAB_1405b9b8d:
    plVar3 = (longlong *)0x0;
  }
  else {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cb46ec8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) != DAT_14cb46ec8 + 0x30)) goto LAB_1405b9b8d;
    plVar3 = *(longlong **)(lVar1 + 0x3b8);
  }
  fVar4 = (float)(**(code **)(*plVar3 + 0x2a0))();
LAB_1405b9a72:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar4 + *(float *)(param_1 + 0x62c));
}



// FUNCTION 1405b9b94 FUN_1405b9b94 body=378 status=ok
// SIG undefined FUN_1405b9b94(void)

bool FUN_1405b9b94(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = (**(code **)(*param_1 + 0xa18))();
  if ((cVar2 != '\0') && (lVar3 = param_1[0x15], lVar3 != 0)) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    iVar1 = *(int *)(DAT_14cb46ec8 + 0x38);
    if (((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
         DAT_14cb46ec8 + 0x30)) && (*(longlong *)(lVar3 + 0x3b8) != 0)) {
      lVar3 = param_1[0x15];
      if (((lVar3 == 0) || (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1)) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
          DAT_14cb46ec8 + 0x30)) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(lVar3 + 0x3b8);
      }
      lVar3 = (**(code **)(*plVar4 + 0x2a8))();
      bVar5 = lVar3 != 0;
      goto LAB_1405b9c02;
    }
  }
  bVar5 = false;
LAB_1405b9c02:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405b9d10 FUN_1405b9d10 body=66 status=ok
// SIG undefined FUN_1405b9d10(void)

ulonglong FUN_1405b9d10(longlong *param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0xa40))();
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)(*param_1 + 0xa40))(param_1);
    if (cVar1 != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0xa40))(param_1);
      uVar2 = CONCAT71(uVar3,cVar1 == '\x03');
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1405b9d5a FUN_1405b9d5a body=63 status=ok
// SIG undefined FUN_1405b9d5a(void)

longlong FUN_1405b9d5a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1405b9d9a FUN_1405b9d9a body=1566 status=ok
// SIG undefined FUN_1405b9d9a(void)

undefined8 FUN_1405b9d9a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_178 [40];
  longlong local_150;
  ulonglong local_148;
  longlong lStack_140;
  code *local_138;
  longlong *plStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)(param_2 + 0xec) == '\0') {
    plVar10 = (longlong *)(param_2 + 0x88);
    lVar9 = param_2 + 0x98;
    local_148 = 0x100000000;
    local_138 = (code *)0xffffffff;
    plStack_130 = (longlong *)((ulonglong)plStack_130 & 0xffffffff00000000);
    iVar11 = 0;
    lStack_140 = lVar9;
    if (*(int *)(param_2 + 0xb0) != 0) {
      FUN_1449c0562(&local_148);
      iVar11 = *(int *)(param_2 + 0xb0);
    }
    uStack_e0 = local_138;
    uVar8 = uStack_e0;
    local_d8 = plStack_130;
    uStack_f0 = local_148;
    local_e8 = lStack_140;
    uStack_e0._4_4_ = (int)((ulonglong)local_138 >> 0x20);
    iVar7 = uStack_e0._4_4_;
    local_f8 = plVar10;
    if ((uStack_e0._4_4_ != iVar11) || (uStack_e0 = uVar8, lStack_140 != lVar9)) {
      do {
        uStack_e0 = uVar8;
        if (*(longlong *)(*local_f8 + 0x18 + (longlong)iVar7 * 0x40) != 0) {
          lVar12 = *local_f8 + (longlong)iVar7 * 0x40 + 8;
          cVar6 = FUN_144904448(lVar12);
          if (cVar6 != '\0') {
            FUN_14072d42a(lVar12,0);
          }
        }
        uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
        FUN_1449c0562(&uStack_f0);
        iVar7 = uStack_e0._4_4_;
        uVar8 = uStack_e0;
      } while (((uStack_e0._4_4_ != iVar11) || (local_e8 != lVar9)) || (local_f8 != plVar10));
    }
    iVar11 = *(int *)(param_2 + 0xd0);
    if (iVar11 < 2) {
      lVar12 = param_2 + 0xc0;
      if (*(longlong *)(param_2 + 200) != 0) {
        lVar12 = *(longlong *)(param_2 + 200);
      }
      iVar7 = iVar11 + 3;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      if (*(int *)(param_2 + 0x90) - *(int *)(param_2 + 0xbc) < iVar7 >> 2) {
        local_148 = 0x100000000;
        local_138 = (code *)0xffffffff;
        plStack_130 = (longlong *)((ulonglong)plStack_130 & 0xffffffff00000000);
        if (*(int *)(param_2 + 0xb0) == 0) {
          iVar11 = 0;
          lStack_140 = lVar9;
        }
        else {
          lStack_140 = lVar9;
          FUN_1449c0562(&local_148);
          iVar11 = *(int *)(param_2 + 0xb0);
        }
        local_d8 = plStack_130;
        uStack_f0 = local_148;
        local_e8 = lStack_140;
        uStack_e0 = local_138;
        uVar8 = uStack_e0;
        uStack_e0._4_4_ = (int)((ulonglong)local_138 >> 0x20);
        iVar7 = uStack_e0._4_4_;
        local_f8 = plVar10;
        if ((uStack_e0._4_4_ != iVar11) || (uStack_e0 = local_138, lStack_140 != lVar9)) {
          do {
            uStack_e0 = uVar8;
            *(undefined4 *)
             (lVar12 + (longlong)*(int *)(*local_f8 + 0x3c + (longlong)iVar7 * 0x40) * 4) =
                 0xffffffff;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
            FUN_1449c0562(&uStack_f0);
            iVar7 = uStack_e0._4_4_;
            uVar8 = uStack_e0;
          } while (local_f8 != plVar10 || (local_e8 != lVar9 || uStack_e0._4_4_ != iVar11));
        }
      }
      else if (iVar11 == 1) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar12 + lVar9 * 4) = 0xffffffff;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(param_2 + 0xd0));
      }
      FUN_1405ba3ba(plVar10);
    }
    else {
      FUN_1405ba3ba(plVar10);
      *(undefined4 *)(param_2 + 0xd0) = 1;
      FUN_14599f354(plVar10);
    }
  }
  local_148 = local_148 & 0xffffffff00000000;
  local_138 = (code *)0x0;
  local_128 = (longlong *)0x0;
  lVar9 = **(longlong **)(param_2 + 0x78);
  if (lVar9 != 0) {
    do {
      uVar5 = uStack_100;
      uVar4 = local_108;
      uVar3 = uStack_110;
      lVar12 = local_118;
      local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(lVar9 + 0x10));
      pcVar1 = *(code **)(lVar9 + 0x20);
      plVar10 = *(longlong **)(lVar9 + 0x28);
      plVar2 = *(longlong **)(lVar9 + 0x30);
      uVar8 = *(undefined8 *)(lVar9 + 0x38);
      local_108 = *(undefined8 *)(lVar9 + 0x50);
      uStack_100 = *(undefined8 *)(lVar9 + 0x58);
      local_118 = *(longlong *)(lVar9 + 0x40);
      uStack_110 = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar9 + 0x50) = uVar4;
      *(undefined8 *)(lVar9 + 0x58) = uVar5;
      *(longlong *)(lVar9 + 0x40) = lVar12;
      *(undefined8 *)(lVar9 + 0x48) = uVar3;
      *(longlong **)(lVar9 + 0x30) = local_128;
      *(undefined8 *)(lVar9 + 0x38) = uStack_120;
      *(code **)(lVar9 + 0x20) = local_138;
      *(longlong **)(lVar9 + 0x28) = plStack_130;
      lVar12 = *(longlong *)(param_2 + 0x78);
      *(longlong *)(param_2 + 0x78) = lVar9;
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      local_a8 = *(longlong *)(lVar9 + 0x20);
      uStack_a0 = *(undefined8 *)(lVar9 + 0x28);
      local_98 = *(longlong **)(lVar9 + 0x30);
      uStack_90 = *(undefined8 *)(lVar9 + 0x38);
      local_88 = *(longlong *)(lVar9 + 0x40);
      uStack_80 = *(undefined8 *)(lVar9 + 0x48);
      local_78 = *(undefined8 *)(lVar9 + 0x50);
      uStack_70 = *(undefined8 *)(lVar9 + 0x58);
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined8 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      local_b8 = local_78;
      uStack_b0 = uStack_70;
      local_c8 = local_88;
      uStack_c0 = uStack_80;
      local_d8 = local_98;
      uStack_d0 = uStack_90;
      local_e8 = local_a8;
      uStack_e0 = uStack_a0;
      local_138 = pcVar1;
      plStack_130 = plVar10;
      local_128 = plVar2;
      uStack_120 = uVar8;
      if (local_a8 != 0) {
        plVar10 = local_d8;
        if (local_98 == (longlong *)0x0) {
          plVar10 = &local_c8;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if (lVar12 != 0) {
        if (*(longlong *)(lVar12 + 0x20) != 0) {
          plVar10 = (longlong *)(lVar12 + 0x40);
          if (*(longlong **)(lVar12 + 0x30) != (longlong *)0x0) {
            plVar10 = *(longlong **)(lVar12 + 0x30);
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        FUN_1400020a8(lVar12);
      }
      pcVar1 = local_138;
      if ((0 < (int)(uint)local_148) && (*(int *)(param_2 + 0x90) != *(int *)(param_2 + 0xbc))) {
        lVar9 = *(longlong *)(param_2 + 200);
        if (*(longlong *)(param_2 + 200) == 0) {
          lVar9 = param_2 + 0xc0;
        }
        iVar11 = *(int *)(lVar9 + (ulonglong)
                                  (*(int *)(param_2 + 0xd0) + 0x7fffffffU & (uint)local_148) * 4);
        if (iVar11 != -1) {
          do {
            lVar9 = *(longlong *)(param_2 + 0x88) + (longlong)iVar11 * 0x40;
            if (*(uint *)(*(longlong *)(param_2 + 0x88) + (longlong)iVar11 * 0x40) ==
                (uint)local_148) {
              if (lVar9 != 0) {
                local_a8 = 0;
                if ((lVar9 + 8 != 0) && (local_a8 = lVar9 + 8, *(longlong *)(lVar9 + 0x18) == 0)) {
                  local_a8 = 0;
                }
                goto LAB_1405ba178;
              }
              break;
            }
            iVar11 = *(int *)(lVar9 + 0x38);
          } while (iVar11 != -1);
        }
      }
      local_a8 = 0;
LAB_1405ba178:
      local_f8 = param_3;
      plVar10 = local_128;
      if (local_128 == (longlong *)0x0) {
        plVar10 = &local_118;
      }
      local_150 = param_2;
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar1)(uVar8,&local_150,&local_a8,&local_f8);
      lVar9 = **(longlong **)(param_2 + 0x78);
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(int *)(param_2 + 0x6c) != 0) {
    FUN_1447a8aa0(param_2 + 0x60,0);
  }
  if (local_138 != (code *)0x0) {
    plVar10 = &local_118;
    if (local_128 != (longlong *)0x0) {
      plVar10 = local_128;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1405ba3ba FUN_1405ba3ba body=349 status=ok
// SIG undefined FUN_1405ba3ba(void)

void FUN_1405ba3ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *local_68;
      *(undefined8 *)(lVar2 + 8 + (longlong)iStack_4c * 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iStack_4c * 0x40) = 0xffffffffffffffff;
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 1405ba518 FUN_1405ba518 body=54 status=ok
// SIG undefined FUN_1405ba518(void)

undefined8
FUN_1405ba518(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  if (*(char *)(param_1 + 0x422c) == '\x01') {
    param_4 = *(undefined4 *)(param_1 + 0x45cc);
  }
  FUN_1405ba54e(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1405ba54e FUN_1405ba54e body=270 status=ok
// SIG undefined FUN_1405ba54e(void)

double * FUN_1405ba54e(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  double dVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar5 = (float)param_4;
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') goto LAB_1405ba584;
    plVar4 = param_1 + 0x642;
  }
  else {
    plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar3 = FUN_140153468(plVar4);
  if (lVar3 != 0) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') goto LAB_1405ba584;
      plVar4 = param_1 + 0x642;
    }
    else {
      plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    lVar3 = FUN_140153468(plVar4);
    if ((lVar3 != 0) && (*(char *)((longlong)plVar4 + 500) == '\x01')) {
      fVar5 = *(float *)(plVar4 + 0x3e);
      uVar7 = 0;
    }
  }
LAB_1405ba584:
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar5 = (float)(**(code **)(*param_1 + 0x798))(param_1,param_3,CONCAT44(uVar7,fVar5),param_5);
  }
  dVar6 = (double)fVar5;
  dVar1 = param_5[2];
  dVar2 = param_5[1];
  *param_2 = dVar6 * *param_5;
  param_2[1] = dVar2 * dVar6;
  param_2[2] = dVar1 * dVar6;
  return param_2;
}



// FUNCTION 1405ba65c FUN_1405ba65c body=252 status=ok
// SIG undefined FUN_1405ba65c(void)

undefined8 FUN_1405ba65c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  
  fVar3 = (float)param_3;
  uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
  if ((0.0 < *(float *)(param_1 + 0x314)) &&
     (dVar6 = *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x240) +
              *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x230) +
              *(double *)(param_1 + 0x238) * *(double *)(param_1 + 0x130),
     dVar2 = *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x240) * dVar6,
     dVar1 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x238) * dVar6,
     dVar6 = *(double *)(param_1 + 0x128) - dVar6 * *(double *)(param_1 + 0x230),
     dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1 <
     (double)(*(float *)(param_1 + 0x318) * *(float *)(param_1 + 0x318)))) {
    fVar5 = *(float *)(param_1 + 0x314) * fVar3;
    uVar4 = 0;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
  }
  return CONCAT44(uVar4,fVar3);
}



// FUNCTION 1405ba758 FUN_1405ba758 body=138 status=ok
// SIG undefined FUN_1405ba758(void)

void FUN_1405ba758(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1405ba846(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba77af0;
  *(undefined1 *)(puVar1 + 0x79) = 1;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0;
  if ((*(uint *)(puVar1 + 1) & 0x10) == 0) {
    lVar2 = puVar1[0x75];
    if (-1 < (char)*(byte *)(lVar2 + 0x9e)) {
      *(byte *)(lVar2 + 0x9e) = *(byte *)(lVar2 + 0x9e) | 0x80;
      FUN_140381836(lVar2,0);
    }
    *(undefined1 *)(lVar2 + 0x2eb) = 0;
    FUN_140a18d12(lVar2 + 0x410,1,1);
    FUN_1405ba7e2(lVar2);
    *(byte *)((longlong)puVar1 + 0x39c) = *(byte *)((longlong)puVar1 + 0x39c) | 2;
  }
  return;
}



// FUNCTION 1405ba7e2 FUN_1405ba7e2 body=99 status=ok
// SIG undefined FUN_1405ba7e2(void)

void FUN_1405ba7e2(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x628);
    if (lVar1 == 0) {
      lVar1 = FUN_14099beef(param_1);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x628) = lVar1;
    }
    *(undefined1 *)(lVar1 + 0x31) = 2;
    FUN_14282b7b8(param_1);
    return;
  }
  return;
}



// FUNCTION 1405ba846 FUN_1405ba846 body=236 status=ok
// SIG undefined FUN_1405ba846(void)

undefined8 * FUN_1405ba846(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba9de();
  *param_1 = &PTR_FUN_14aafbd00;
  *(byte *)(param_1[0x75] + 0x2de) = *(byte *)(param_1[0x75] + 0x2de) | 4;
  *(byte *)(param_1[0x75] + 0x2de) = *(byte *)(param_1[0x75] + 0x2de) | 8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f458) {
    FUN_144b3d300(&DAT_14cb0f458);
    if (DAT_14cb0f458 == -1) {
      FUN_1446f470e(&DAT_14cb0f450,L"OverlapAll",1);
      _Init_thread_footer(&DAT_14cb0f458);
    }
  }
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cb0f450,1);
  plVar1 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) | 8;
    (**(code **)(*plVar1 + 0x958))();
  }
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  return param_1;
}



// FUNCTION 1405ba932 FUN_1405ba932 body=171 status=ok
// SIG undefined FUN_1405ba932(void)

void FUN_1405ba932(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xef | param_2 << 4;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (0xfffffffeffffffff < uVar1) {
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 1;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
    return;
  }
  plVar5 = (longlong *)0x0;
  if (DAT_14c9980d8 != 0) {
    plVar5 = DAT_14c9980d0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405ba9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0);
  return;
}



// FUNCTION 1405ba9de FUN_1405ba9de body=347 status=ok
// SIG undefined FUN_1405ba9de(void)

undefined8 * FUN_1405ba9de(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a5cfba0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  FUN_1446f470e(&local_20,L"BrushComponent0",1);
  uVar1 = FUN_1405babea();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x75] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 0;
  plVar3 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar3 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar3 + 0x2d3) = *(byte *)((longlong)plVar3 + 0x2d3) & 0xf7;
    (**(code **)(*plVar3 + 0x958))();
    plVar3 = (longlong *)param_1[0x75];
  }
  if ((char)*(byte *)((longlong)plVar3 + 0x9e) < '\0') {
    *(byte *)((longlong)plVar3 + 0x9e) = *(byte *)((longlong)plVar3 + 0x9e) & 0x7f;
    FUN_140381836(plVar3,0);
    plVar3 = (longlong *)param_1[0x75];
  }
  if (DAT_14c950c29 == '\x01') {
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c();
      plVar3 = (longlong *)param_1[0x75];
    }
  }
  param_1[0x39] = plVar3;
  FUN_1405bab3a(param_1,1);
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) & 0xf7;
  FUN_1403121a6(param_1,0);
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bab3a FUN_1405bab3a body=176 status=ok
// SIG undefined FUN_1405bab3a(void)

void FUN_1405bab3a(longlong param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0x7f | param_2 << 7;
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001405babe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,1);
    return;
  }
  uVar6 = (uint)uVar1;
  if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
    puVar3 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar3 = DAT_14c998080;
    }
    if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
      lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
      puVar4 = *(uint **)(lVar2 + 0x18);
      if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
        puVar4 = (uint *)(lVar2 + 8);
      }
      *puVar4 = *puVar4 | 2;
      *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 1405babea FUN_1405babea body=228 status=ok
// SIG undefined FUN_1405babea(void)

longlong FUN_1405babea(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad0628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1479bf3e5;
    local_40 = FUN_1417bbb2c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x630;
    FUN_14081cfa3(L"/Script/Engine",L"BrushComponent",&DAT_14cad0628,&DAT_1479bf3e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad0628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bacee FUN_1405bacee body=68 status=ok
// SIG undefined FUN_1405bacee(void)

undefined8 FUN_1405bacee(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0xf;
  FUN_1405bad34();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bad34 FUN_1405bad34 body=165 status=ok
// SIG undefined FUN_1405bad34(void)

longlong FUN_1405bad34(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = (longlong)*(int *)(param_1 + 0x18) << 4;
    do {
      local_58 = param_4;
      FUN_147559c0e(lVar2,&local_48,param_3,0);
      if (local_40 != '\x01') {
        *(undefined1 *)(param_2 + 8) = 0;
        goto LAB_1405bad71;
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
      param_3 = local_48;
    } while (lVar1 != 0);
  }
  FUN_1400a24f6(param_2,param_3,param_1);
  *(undefined1 *)(param_2 + 8) = 1;
LAB_1405bad71:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405badf6 FUN_1405badf6 body=1729 status=ok
// SIG undefined FUN_1405badf6(void)

void FUN_1405badf6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_2f8 [40];
  longlong local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8 [12];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248 [12];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 local_180 [9];
  undefined8 local_138 [12];
  undefined8 local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
      (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x17c))) ||
     (cVar3 = FUN_1405bb4f2(), cVar3 != '\0')) goto LAB_1405bb176;
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x17c);
  if (*(char *)(param_1 + 0x180) != '\0') {
    if (*(char *)(param_1 + 0x180) == '\x01') {
      lVar6 = (longlong)*(int *)(param_1 + 0x178);
      if (((-1 < lVar6) && (*(int *)(param_1 + 0x178) < *(int *)(param_1 + 0x40))) &&
         ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar6 * 0x18) == '\0' &&
          (lVar6 = *(longlong *)(param_1 + 0x38) + lVar6 * 0x18, *(longlong *)(lVar6 + 8) != 0)))) {
        local_2c8 = 0;
        uStack_2c0 = 0;
        puVar5 = &DAT_14c846480;
        puVar10 = local_2b8;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        local_258 = 0;
        uStack_250 = 0;
        puVar5 = &DAT_14c846480;
        puVar10 = local_248;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        local_188 = 0;
        local_198 = 0;
        lStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        puVar5 = &DAT_14c964b40;
        puVar10 = local_180;
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar5 = &DAT_14c846480;
        puVar10 = local_138;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        local_a8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        lStack_c0 = 0;
        local_d8 = 0;
        lStack_d0 = 0;
        local_a0 = 0x3ecccccd42c80000;
        local_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        lVar8 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1447210f0();
        }
        local_80 = *(undefined8 *)(lVar8 + 0x48);
        uVar4 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x50));
        uStack_78 = FUN_14477b664(uVar4);
        local_70 = *(undefined8 *)(lVar8 + 0x58);
        uVar4 = *(undefined8 *)(lVar6 + 8);
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1447210f0();
        }
        FUN_1414141fa(uVar4,&local_2c8);
        *(undefined1 *)(lVar6 + 0x10) = 1;
        FUN_1414133b8(param_1,lVar6,&local_2c8);
        FUN_1414136a2(param_1,&local_2c8,param_1 + 0x178);
        FUN_1405bd7e2(&local_2c8);
      }
    }
    goto LAB_1405bb176;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x32b8);
  if (lVar6 == 0) goto LAB_1405bb176;
  lVar8 = *(longlong *)(param_1 + 0x2f8);
  if (lVar8 == 0) {
    uVar4 = FUN_1405bb4b8();
    lVar8 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2f8) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x2f0);
  if (*(longlong *)(param_1 + 0x300) == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_1405bb176;
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x300) = 0;
      goto LAB_1405bb176;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar8 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x300) = lVar8;
    if (lVar8 == 0) goto LAB_1405bb176;
  }
  local_2c8 = 0;
  uStack_2c0 = 0;
  puVar5 = &DAT_14c846480;
  puVar10 = local_2b8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  local_258 = 0;
  uStack_250 = 0;
  puVar5 = &DAT_14c846480;
  puVar10 = local_248;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  local_188 = 0;
  local_198 = 0;
  lStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  lVar8 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x28);
  puVar5 = &DAT_14c964b40;
  puVar10 = local_180;
  for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar10 = local_138;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar10 = puVar10 + 1;
  }
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_a0 = 0x3ecccccd42c80000;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (lVar8 != 0) {
    FUN_1447210f0(lVar8);
  }
  local_80 = *(undefined8 *)(lVar7 + 0x48);
  uVar4 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x50));
  uStack_78 = FUN_14477b664(uVar4);
  local_70 = *(undefined8 *)(lVar7 + 0x58);
  lVar8 = *(longlong *)(param_1 + 0x2f8);
  if (lVar8 == 0) {
    uVar4 = FUN_1405bb4b8();
    lVar8 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2f8) = lVar8;
  }
  lVar7 = *(longlong *)(param_1 + 0x300);
  if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x300) = lVar7;
  }
  if (local_c8 == 0) {
    uVar4 = FUN_1405bb4b8();
    local_c8 = FUN_14477b664(uVar4);
  }
  lVar8 = FUN_1405bb4b8();
  uVar4 = FUN_1405bb4b8();
  FUN_1402d1bfa(&local_2d0,uVar4,lVar7);
  if (lStack_d0 != local_2d0) {
    lStack_c0 = 0;
  }
  lStack_d0 = local_2d0;
  lVar9 = FUN_1405bb4b8();
  if (lVar8 == 0) {
LAB_1405bb08c:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_1405bb08c;
  if (local_c8 != lVar9) {
    lStack_c0 = 0;
  }
  uVar4 = FUN_14477b664(lVar9);
  local_c8 = FUN_14477b664(uVar4);
  if ((local_c8 != 0) && (lStack_d0 != 0)) {
    lStack_c0 = lVar7;
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x178);
  if ((((-1 < lVar8) && (*(int *)(param_1 + 0x178) < *(int *)(param_1 + 0x40))) &&
      (*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar8 * 0x18) == '\0')) &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar8 * 0x18 + 8), lVar8 != 0)) {
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puVar5 = (undefined8 *)(lVar8 + 0x18);
    if (*(char *)(lVar8 + 0x20) != '\0') {
      puVar5 = (undefined8 *)(lVar8 + 0x24);
    }
    local_2c8 = *puVar5;
    if (*(char *)(lVar8 + 0x1d8) == '\x01') {
      uStack_68 = *(undefined8 *)(lVar8 + 0x1e0);
      uVar4 = FUN_14477b664(*(undefined8 *)(lVar8 + 0x1e8));
      local_60 = FUN_14477b664(uVar4);
      uStack_58 = *(undefined8 *)(lVar8 + 0x1f0);
    }
  }
  FUN_1405bb6fa(param_1,lVar6,&local_2c8,param_1 + 0x178);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (lStack_190 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
LAB_1405bb176:
  if ((local_40 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405bb4b8 FUN_1405bb4b8 body=57 status=ok
// SIG undefined FUN_1405bb4b8(void)

void FUN_1405bb4b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb699a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb699a0 = FUN_140002ddd(FUN_14185c509,uVar1,L"ImpactEffectDef");
  }
  return;
}



// FUNCTION 1405bb4f2 FUN_1405bb4f2 body=519 status=ok
// SIG undefined FUN_1405bb4f2(void)

ulonglong FUN_1405bb4f2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  undefined7 uVar9;
  
  lVar6 = DAT_14cb7d850;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if (*(char *)(lVar6 + uVar7) == '\0') {
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x1f0), lVar6 != 0)) {
      if (DAT_14cb5e538 == 0) {
        local_50 = &local_38;
        local_38 = &LAB_1417c5d06;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1417ad04a;
        local_58 = &LAB_1486a7af7;
        local_60 = &LAB_1464e1631;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x1000000c;
        local_80 = 8;
        local_88 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      }
      lVar3 = DAT_14cb7d850;
      if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) {
        iVar1 = *(int *)(lVar2 + 0xc60);
        if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
          uVar7 = 0;
        }
        else if (iVar1 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        if (*(char *)(lVar3 + uVar7) == '\0') {
          uVar8 = CONCAT71(uVar9,*(undefined1 *)(lVar6 + 0x408));
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bb6fa FUN_1405bb6fa body=1963 status=ok
// SIG undefined FUN_1405bb6fa(void)

void FUN_1405bb6fa(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_268 [32];
  double *local_248;
  longlong *local_240;
  uint local_238;
  undefined4 local_230;
  longlong *local_228;
  undefined8 *local_220;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  uint local_168;
  longlong local_158;
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(longlong *)(param_1 + 0x20) == 0) || ((*(byte *)(param_1 + 0x2d8) & 8) == 0))
  goto LAB_1405bbc60;
  lVar9 = *(longlong *)(param_3 + 0x200);
  if (lVar9 == 0) {
    uVar7 = FUN_1405bb4b8();
    lVar9 = FUN_14477b664(uVar7);
    *(longlong *)(param_3 + 0x200) = lVar9;
  }
  plVar6 = (longlong *)(param_3 + 0x1f8);
  if (*(longlong *)(param_3 + 0x208) == 0) {
    if ((lVar9 == 0) || (*plVar6 == 0)) goto LAB_1405bbc60;
    plVar13 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar4 == '\0')) {
      *(undefined8 *)(param_3 + 0x208) = 0;
      goto LAB_1405bbc60;
    }
    uVar7 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar9 = FUN_144aff482(uVar7,plVar6);
    *(longlong *)(param_3 + 0x208) = lVar9;
    if (lVar9 == 0) goto LAB_1405bbc60;
  }
  lVar9 = *(longlong *)(param_2 + 0xb0);
  if (((lVar9 == 0) && (lVar9 = FUN_1448abda6(param_2), lVar9 == 0)) ||
     (FUN_1407f7f84(&local_1a8,lVar9), plStack_1a0 == (longlong *)0x0)) goto LAB_1405bbc60;
  iVar5 = (int)plStack_1a0[1];
  do {
    if (iVar5 == 0) {
      plVar13 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)plStack_1a0[1];
    bVar14 = iVar5 == iVar3;
    if (bVar14) {
      *(int *)(plStack_1a0 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar13 = plStack_1a0;
  } while (!bVar14);
  LOCK();
  piVar1 = (int *)((longlong)plStack_1a0 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plStack_1a0 + 0x10))();
  }
  if (plVar13 == (longlong *)0x0) goto LAB_1405bbc60;
  local_210 = local_1a8;
  if (local_1a8 != 0) {
    lVar9 = *(longlong *)(param_3 + 0x200);
    if (lVar9 == 0) {
      uVar7 = FUN_1405bb4b8();
      lVar9 = FUN_14477b664(uVar7);
      *(longlong *)(param_3 + 0x200) = lVar9;
    }
    lVar10 = *(longlong *)(param_3 + 0x208);
    if (lVar10 == 0) {
      if ((lVar9 != 0) && (*plVar6 != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          *(undefined8 *)(param_3 + 0x208) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar7,plVar6);
          *(longlong *)(param_3 + 0x208) = lVar10;
          if (lVar10 != 0) goto LAB_1405bb824;
        }
      }
    }
    else {
LAB_1405bb824:
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      plStack_1a0 = (longlong *)0x0;
      local_168 = 0xc0;
      local_158 = 0;
      local_148 = (longlong *)0x0;
      local_118 = 0;
      local_108 = (longlong *)0x0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0x3ff0000000000000;
      local_b8 = 0x3ff0000000000000;
      local_b0 = 0x3ff0000000000000;
      local_a8 = 0x3f80000000000000;
      local_a0 = 0.0;
      plVar6 = (longlong *)FUN_1405bbf8c(param_3);
      lVar9 = plVar6[1];
      if (lVar9 == 0) {
        uVar7 = FUN_1405bc036();
        lVar9 = FUN_14477b664(uVar7);
        plVar6[1] = lVar9;
      }
      lVar8 = plVar6[2];
      if (((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) && (*plVar6 != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar8 = FUN_144aff482(uVar7,plVar6);
        }
        plVar6[2] = lVar8;
      }
      FUN_1405bc06f(&local_1a8,lVar8,1,1);
      local_a0 = (float)SQRT(*(double *)(param_4 + 0x50) * *(double *)(param_4 + 0x50) +
                             *(double *)(param_4 + 0x40) * *(double *)(param_4 + 0x40) +
                             *(double *)(param_4 + 0x48) * *(double *)(param_4 + 0x48));
      if (*(char *)(param_4 + 9) == '\x01') {
        local_168 = local_168 | 0xc;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1b0);
        if (lVar9 != 0) {
          local_238 = 0;
          local_248 = (double *)((ulonglong)local_248 & 0xffffffffffffff00);
          local_240 = &local_1a8;
          FUN_1408f2522(local_210,lVar10,lVar9,param_4 + 0x60);
        }
        local_168 = local_168 & 0xfffffff3;
      }
      lVar8 = FUN_1405bbea6();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      pdVar11 = (double *)(lVar9 + 0x68);
      pdVar12 = (double *)(lVar9 + 0x58);
      if (lVar9 == 0) {
        pdVar11 = (double *)&DAT_14c8463f0;
      }
      dVar18 = *pdVar11;
      uVar15 = SUB84(dVar18,0);
      uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
      dVar17 = pdVar11[1];
      fVar19 = *(float *)(param_4 + 0x58);
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      if (lVar9 == 0) {
        pdVar12 = (double *)&DAT_14c8463f0;
      }
      if (dVar17 == 0.0 && dVar18 == 0.0) {
        uVar15 = (undefined4)DAT_14cb81448;
        uVar16 = (undefined4)((ulonglong)DAT_14cb81448 >> 0x20);
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      if (dVar17 == 0.0 && dVar18 == 0.0) {
        dVar17 = DAT_14cb81450;
      }
      local_168 = local_168 | 1;
      dVar18 = (double)(float)((dVar17 - (double)CONCAT44(uVar16,uVar15)) * (double)fVar19 +
                              (double)CONCAT44(uVar16,uVar15));
      local_1b0 = DAT_14c846300 * dVar18 + *(double *)(param_4 + 0x20);
      local_1b8 = DAT_14c8462f8 * dVar18 + *(double *)(param_4 + 0x18);
      local_1c0 = dVar18 * DAT_14c8462f0 + *(double *)(param_4 + 0x10);
      local_248 = &local_1c0;
      local_220 = &local_1d8;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffffff00);
      local_238 = local_238 & 0xffffff00;
      local_230 = 0;
      local_228 = &local_1a8;
      FUN_1405bc592(local_210,lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1b0),
                    param_4 + 0x10);
      dVar18 = *pdVar12;
      uVar15 = SUB84(dVar18,0);
      uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
      fVar19 = *(float *)(param_4 + 0x58);
      if (1.0 <= fVar19) {
        fVar19 = 1.0;
      }
      bVar14 = pdVar12[1] == 0.0 && dVar18 == 0.0;
      if (bVar14) {
        uVar15 = (undefined4)DAT_14cb81448;
        uVar16 = (undefined4)((ulonglong)DAT_14cb81448 >> 0x20);
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      dVar18 = pdVar12[1];
      if (bVar14) {
        dVar18 = DAT_14cb81450;
      }
      dVar18 = (double)(float)((dVar18 - (double)CONCAT44(uVar16,uVar15)) * (double)fVar19 +
                              (double)CONCAT44(uVar16,uVar15));
      local_1e0 = *(double *)(param_4 + 0x38) * dVar18 + *(double *)(param_4 + 0x20);
      local_1e8 = *(double *)(param_4 + 0x30) * dVar18 + *(double *)(param_4 + 0x18);
      local_1f0 = dVar18 * *(double *)(param_4 + 0x28) + *(double *)(param_4 + 0x10);
      local_248 = &local_1f0;
      local_220 = &local_208;
      local_208 = 0;
      uStack_200 = 0;
      local_230 = 0;
      local_238 = local_238 & 0xffffff00;
      local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffffff00);
      local_228 = &local_1a8;
      FUN_1405bc592(local_210,lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x1b0),
                    param_4 + 0x10);
      if (local_118 != 0) {
        plVar6 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar6 = local_f8;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_158 != 0) {
        plVar6 = local_148;
        if (local_148 == (longlong *)0x0) {
          plVar6 = local_138;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  LOCK();
  plVar6 = plVar13 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_1405bbc60:
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405bbea6 FUN_1405bbea6 body=228 status=ok
// SIG undefined FUN_1405bbea6(void)

longlong FUN_1405bbea6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5f628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1486b3969;
    local_40 = FUN_1464e6977;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGoreSettings",&DAT_14cb5f628,&DAT_1486b3968);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bbf8c FUN_1405bbf8c body=169 status=ok
// SIG undefined FUN_1405bbf8c(void)

longlong * FUN_1405bbf8c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x268);
  if (lVar4 == 0) {
    uVar3 = FUN_1405bc036();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x268) = lVar4;
  }
  plVar5 = (longlong *)(param_1 + 0x260);
  if (*(longlong *)(param_1 + 0x270) == 0) {
    if ((*plVar5 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x270) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,plVar5);
        *(longlong *)(param_1 + 0x270) = lVar4;
        if (lVar4 != 0) {
          return plVar5;
        }
      }
    }
    plVar5 = (longlong *)(param_1 + 0x248);
  }
  return plVar5;
}



// FUNCTION 1405bc036 FUN_1405bc036 body=57 status=ok
// SIG undefined FUN_1405bc036(void)

void FUN_1405bc036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60588 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60588 = FUN_140002ddd(FUN_1464ec9c6,uVar1,L"GbxMaterialParameterDef");
  }
  return;
}



// FUNCTION 1405bc06f FUN_1405bc06f body=944 status=ok
// SIG undefined FUN_1405bc06f(void)

void FUN_1405bc06f(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_138 [46];
  char local_10a;
  char local_109;
  longlong *local_108;
  longlong local_100;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10a = param_3;
  local_109 = param_4;
  if (((param_2 != 0) && (param_3 != '\0' || param_4 != '\0')) &&
     ((longlong)*(int *)(param_2 + 0x88) != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x80);
    local_108 = param_1 + 2;
    local_100 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
    lVar11 = 0;
    do {
      uVar8 = uStack_c8;
      uVar7 = uStack_cc;
      uVar9 = local_f0;
      cVar3 = *(char *)(lVar5 + 0x20 + lVar11);
      local_f0._0_4_ = (undefined4)DAT_14c8464e0;
      local_f0._4_4_ = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uStack_cc = (undefined4)DAT_14c8464e8;
      uStack_c8 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      if (cVar3 == '\x01') {
        uVar17 = *(undefined4 *)(lVar5 + 0x24 + lVar11);
        uVar16 = *(undefined4 *)(lVar5 + 0x28 + lVar11);
        uVar15 = *(undefined4 *)(lVar5 + 0x2c + lVar11);
        uVar14 = *(undefined4 *)(lVar5 + 0x30 + lVar11);
        uVar10 = *(undefined8 *)(lVar5 + lVar11);
LAB_1405bc17e:
        uVar12 = 3;
        uVar18 = 0;
LAB_1405bc185:
        uStack_d0 = local_f0._4_4_;
        uStack_d4 = (undefined4)local_f0;
        local_d8 = uStack_f4;
        local_e0 = DAT_14c8464f0;
        uStack_e8 = DAT_14c8464e8;
        local_f0 = DAT_14c8464e0;
        uStack_c4 = local_e0;
        if (local_10a != '\0') {
          iVar4 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar4 + 1U) {
            FUN_1405bc420(local_108,iVar4);
          }
          lVar6 = *local_108;
          lVar13 = (longlong)iVar4 * 0x58;
          *(undefined8 *)(lVar6 + lVar13) = uVar10;
          *(undefined1 *)(lVar6 + 8 + lVar13) = uVar12;
          *(undefined1 *)(lVar6 + 9 + lVar13) = 0;
          *(undefined4 *)(lVar6 + 0xc + lVar13) = 0;
          *(undefined4 *)(lVar6 + 0x10 + lVar13) = uVar18;
          puVar1 = (undefined8 *)(lVar6 + 0x14 + lVar13);
          *puVar1 = CONCAT44(uStack_d4,local_d8);
          puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
          puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar13);
          *puVar2 = uStack_cc;
          puVar2[1] = uStack_c8;
          puVar2[2] = (undefined4)uStack_c4;
          puVar2[3] = uStack_c4._4_4_;
          *(undefined4 *)(lVar6 + 0x30 + lVar13) = uVar17;
          *(undefined4 *)(lVar6 + 0x34 + lVar13) = uVar16;
          *(undefined4 *)(lVar6 + 0x38 + lVar13) = uVar15;
          *(undefined4 *)(lVar6 + 0x3c + lVar13) = uVar14;
          puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar6 + 0x50 + lVar13) = 0;
          FUN_14477b664(0);
          uVar9 = FUN_14477b664();
          *(undefined8 *)(lVar6 + 0x48 + lVar13) = uVar9;
          *(undefined8 *)(lVar6 + 0x50 + lVar13) = 0;
        }
        uVar9 = local_f0;
        uVar7 = uStack_cc;
        uVar8 = uStack_c8;
        if (local_109 != '\0') {
          iVar4 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
            FUN_1405bc420(param_1,iVar4);
          }
          lVar6 = *param_1;
          lVar13 = (longlong)iVar4 * 0x58;
          *(undefined8 *)(lVar6 + lVar13) = uVar10;
          *(undefined1 *)(lVar6 + 8 + lVar13) = uVar12;
          *(undefined1 *)(lVar6 + 9 + lVar13) = 0;
          *(undefined4 *)(lVar6 + 0xc + lVar13) = 0;
          *(undefined4 *)(lVar6 + 0x10 + lVar13) = uVar18;
          puVar1 = (undefined8 *)(lVar6 + 0x14 + lVar13);
          *puVar1 = CONCAT44(uStack_d4,local_d8);
          puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
          puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar13);
          *puVar2 = uStack_cc;
          puVar2[1] = uStack_c8;
          puVar2[2] = (undefined4)uStack_c4;
          puVar2[3] = uStack_c4._4_4_;
          *(undefined4 *)(lVar6 + 0x30 + lVar13) = uVar17;
          *(undefined4 *)(lVar6 + 0x34 + lVar13) = uVar16;
          *(undefined4 *)(lVar6 + 0x38 + lVar13) = uVar15;
          *(undefined4 *)(lVar6 + 0x3c + lVar13) = uVar14;
          puVar1 = (undefined8 *)(lVar6 + 0x40 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar6 + 0x50 + lVar13) = 0;
          FUN_14477b664(0);
          uVar9 = FUN_14477b664();
          *(undefined8 *)(lVar6 + 0x48 + lVar13) = uVar9;
          *(undefined8 *)(lVar6 + 0x50 + lVar13) = 0;
          uVar9 = local_f0;
          uVar7 = uStack_cc;
          uVar8 = uStack_c8;
        }
      }
      else {
        if (cVar3 == '\x02') {
          uVar18 = *(undefined4 *)(lVar5 + 0x34 + lVar11);
          uVar10 = *(undefined8 *)(lVar5 + lVar11);
          uVar12 = 1;
          uVar14 = 0;
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0;
          goto LAB_1405bc185;
        }
        if (cVar3 == '\x03') {
          uVar17 = *(undefined4 *)(lVar5 + 0x40 + lVar11);
          uVar16 = *(undefined4 *)(lVar5 + 0x44 + lVar11);
          uVar15 = *(undefined4 *)(lVar5 + 0x48 + lVar11);
          uVar14 = *(undefined4 *)(lVar5 + 0x4c + lVar11);
          uVar10 = *(undefined8 *)(lVar5 + lVar11);
          goto LAB_1405bc17e;
        }
      }
      uStack_c8 = uVar8;
      uStack_cc = uVar7;
      local_f0 = uVar9;
      lVar11 = lVar11 + 0x90;
    } while (local_100 != lVar11);
  }
  if ((local_b0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405bc420 FUN_1405bc420 body=369 status=ok
// SIG undefined FUN_1405bc420(void)

void FUN_1405bc420(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x58;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405bc4a5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405bc4a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1405bc592 FUN_1405bc592 body=2337 status=ok
// SIG undefined FUN_1405bc592(void)

void FUN_1405bc592(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9,longlong *param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_3f8 [32];
  undefined8 *local_3d8;
  undefined4 local_3d0;
  undefined8 *local_3c8;
  undefined1 *local_3c0;
  undefined8 **local_3b8;
  undefined4 local_3b0;
  longlong local_3a0;
  undefined8 *local_398;
  int local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined **local_378;
  undefined2 local_370;
  longlong local_368;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  undefined4 local_318;
  longlong local_308;
  longlong *local_2f8;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  longlong *local_2b8;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined8 uStack_254;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined8 *local_218;
  int local_210;
  longlong local_208;
  undefined1 local_200;
  undefined **local_1f8;
  undefined2 local_1f0;
  longlong local_1e8;
  longlong local_1d8 [2];
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1a8;
  longlong local_188;
  longlong *local_178;
  longlong local_168 [4];
  longlong local_148;
  longlong *local_138;
  longlong local_128 [12];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (((param_2 == 0) || (param_3 == 0)) || (local_3a0 = FUN_1447210f0(param_3), local_3a0 == 0)) {
    if ((int)param_10[1] != 0) {
      plVar4 = (longlong *)*param_10;
      if (plVar4 == (longlong *)0x0) goto LAB_1405bcc7d;
      (**(code **)(*plVar4 + 0x60))(plVar4,0);
    }
  }
  else {
    local_a4 = 0;
    local_c0 = 0;
    local_a0 = 0x101;
    local_78 = 0;
    local_70 = 0x800000000;
    local_58 = 0;
    local_4c = 4;
    local_ac = 0;
    local_b7 = 1;
    local_a8 = 0;
    local_b4 = 0x1000000;
    local_b0 = 1;
    local_68 = *(undefined4 *)(param_3 + 0xc);
    local_50 = 1;
    local_b5 = 1;
    local_b8 = 1;
    local_c8 = DAT_14cb78c70;
    local_1f8 = &PTR_LAB_149e668b0;
    local_1f0 = 0;
    FUN_1405bceb4(&local_1f8);
    local_1f8 = &PTR_FUN_14b3fa890;
    local_1e8 = param_3;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_3);
    }
    FUN_1405bd0f8(local_1d8,param_9);
    local_380 = param_7;
    local_378 = &PTR_LAB_149e668b0;
    local_370 = 0;
    local_388 = param_1;
    FUN_1405bceb4(&local_378);
    local_378 = &PTR_FUN_14b3fa890;
    local_368 = local_1e8;
    if ((local_1e8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1405bd0f8(&local_358,local_1d8);
    local_248 = *param_5;
    uStack_240 = param_5[1];
    local_238 = param_5[2];
    uStack_230 = *param_4;
    uStack_22c = param_4[1];
    uStack_228 = param_4[2];
    uStack_224 = param_4[3];
    uStack_220 = *(undefined8 *)(param_4 + 4);
    local_218 = (undefined8 *)0x0;
    local_210 = 0;
    FUN_1405bcfbc(&local_218,param_10);
    local_200 = param_6;
    local_398 = (undefined8 *)0x0;
    local_390 = 0;
    local_208 = param_2;
    FUN_1446efa72(&local_398,0,0x1b,0x10);
    puVar3 = local_398;
    local_390 = 0x1b;
    *local_398 = &PTR_LAB_14a78e0f0;
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
    local_398[2] = lVar2;
    *local_398 = &PTR_FUN_14b3fb960;
    local_398[4] = local_388;
    *(undefined1 *)(local_398 + 5) = local_380;
    local_398[6] = &PTR_LAB_149e668b0;
    *(undefined2 *)(local_398 + 7) = 0;
    FUN_1405bceb4(local_398 + 6);
    puVar3[6] = &PTR_FUN_14b3fa890;
    puVar3[8] = local_368;
    if ((local_368 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar3[10] = local_358;
    local_358 = 0;
    *(undefined4 *)(puVar3 + 0xb) = (undefined4)local_350;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = local_350._4_4_;
    local_350 = 0;
    puVar3[0xc] = local_348;
    local_348 = 0;
    *(undefined4 *)(puVar3 + 0xd) = (undefined4)local_340;
    *(undefined4 *)((longlong)puVar3 + 0x6c) = local_340._4_4_;
    local_340 = 0;
    puVar3[0xe] = local_338;
    local_338 = 0;
    *(undefined4 *)(puVar3 + 0xf) = (undefined4)local_330;
    *(undefined4 *)((longlong)puVar3 + 0x7c) = local_330._4_4_;
    local_330 = 0;
    puVar3[0x10] = local_328;
    local_328 = 0;
    *(undefined4 *)(puVar3 + 0x11) = (undefined4)local_320;
    *(undefined4 *)((longlong)puVar3 + 0x8c) = local_320._4_4_;
    local_320 = 0;
    *(undefined4 *)(puVar3 + 0x12) = local_318;
    puVar3[0x14] = local_308;
    puVar3[0x16] = local_2f8;
    local_2f8 = (longlong *)0x0;
    puVar3[0x1a] = local_2d8;
    puVar3[0x1b] = uStack_2d0;
    puVar3[0x18] = local_2e8;
    puVar3[0x19] = uStack_2e0;
    if (local_308 != 0) {
      local_308 = 0;
    }
    puVar3[0x1c] = local_2c8;
    puVar3[0x1e] = local_2b8;
    local_2b8 = (longlong *)0x0;
    puVar3[0x22] = local_298;
    puVar3[0x23] = uStack_290;
    puVar3[0x20] = local_2a8;
    puVar3[0x21] = uStack_2a0;
    if (local_2c8 != 0) {
      local_2c8 = 0;
    }
    *(ulonglong *)((longlong)puVar3 + 0x14c) = CONCAT44(uStack_258,local_25c);
    *(undefined8 *)((longlong)puVar3 + 0x154) = uStack_254;
    puVar3[0x28] = uStack_268;
    puVar3[0x29] = CONCAT44(local_25c,uStack_260);
    puVar3[0x26] = local_278;
    puVar3[0x27] = uStack_270;
    puVar3[0x24] = local_288;
    puVar3[0x25] = uStack_280;
    *(undefined4 *)(puVar3 + 0x2c) = (undefined4)local_248;
    *(undefined4 *)((longlong)puVar3 + 0x164) = local_248._4_4_;
    *(undefined4 *)(puVar3 + 0x2d) = (undefined4)uStack_240;
    *(undefined4 *)((longlong)puVar3 + 0x16c) = uStack_240._4_4_;
    *(undefined4 *)(puVar3 + 0x2e) = (undefined4)local_238;
    *(undefined4 *)((longlong)puVar3 + 0x174) = local_238._4_4_;
    *(undefined4 *)(puVar3 + 0x2f) = uStack_230;
    *(undefined4 *)((longlong)puVar3 + 0x17c) = uStack_22c;
    *(undefined4 *)(puVar3 + 0x30) = uStack_228;
    *(undefined4 *)((longlong)puVar3 + 0x184) = uStack_224;
    *(undefined4 *)(puVar3 + 0x31) = (undefined4)uStack_220;
    *(undefined4 *)((longlong)puVar3 + 0x18c) = uStack_220._4_4_;
    puVar3[0x32] = 0;
    *(undefined4 *)(puVar3 + 0x33) = 0;
    FUN_1405bcfbc(puVar3 + 0x32,&local_218);
    *(undefined1 *)(puVar3 + 0x35) = local_200;
    puVar3[0x34] = local_208;
    if (local_210 == 0) {
LAB_1405bcaa5:
      if (local_218 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_218 != (undefined8 *)0x0) {
      (**(code **)*local_218)(local_218,0);
      FUN_1446efa72(&local_218,0,0,0x10);
      local_210 = 0;
      goto LAB_1405bcaa5;
    }
    local_378 = &PTR_FUN_14b3fa890;
    if (local_2c8 != 0) {
      plVar4 = local_2b8;
      if (local_2b8 == (longlong *)0x0) {
        plVar4 = &local_2a8;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_308 != 0) {
      plVar4 = local_2f8;
      if (local_2f8 == (longlong *)0x0) {
        plVar4 = &local_2e8;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_328 != 0) {
      FUN_1400020a8();
    }
    if (local_338 != 0) {
      FUN_1400020a8();
    }
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    if (local_358 != 0) {
      FUN_1400020a8();
    }
    local_378 = &PTR_LAB_149e668b0;
    if ((DAT_14c948580 != 0) && (local_370._1_1_ == '\x01')) {
      FUN_14019e20a(DAT_14c948580,&local_378);
    }
    local_3c0 = &DAT_14cad0f10;
    local_3c8 = &local_c8;
    local_3d0 = param_8;
    local_3d8 = param_5;
    local_3b0 = 0;
    local_3b8 = &local_398;
    FUN_1447de878(local_3a0,&local_388,1,param_4);
    if (local_390 == 0) {
LAB_1405bcba4:
      if (local_398 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_398 != (undefined8 *)0x0) {
      (**(code **)*local_398)(local_398,0);
      FUN_1446efa72(&local_398,0,0,0x10);
      local_390 = 0;
      goto LAB_1405bcba4;
    }
    local_1f8 = &PTR_FUN_14b3fa890;
    if (local_148 != 0) {
      if (local_138 == (longlong *)0x0) {
        local_138 = local_128;
      }
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_188 != 0) {
      if (local_178 == (longlong *)0x0) {
        local_178 = local_168;
      }
      (**(code **)(*local_178 + 0x10))();
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
    local_1f8 = &PTR_LAB_149e668b0;
    if ((DAT_14c948580 != 0) && (local_1f0._1_1_ == '\x01')) {
      FUN_14019e20a(DAT_14c948580,&local_1f8);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  puVar3 = (undefined8 *)*param_10;
  if ((int)param_10[1] != 0) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_1405bcc7d;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_10,0,0,0x10);
    *(undefined4 *)(param_10 + 1) = 0;
    puVar3 = (undefined8 *)*param_10;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405bcc7d:
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405bceb4 FUN_1405bceb4 body=53 status=ok
// SIG undefined FUN_1405bceb4(void)

void FUN_1405bceb4(longlong param_1)

{
  if ((DAT_14c872bd8 == '\0') && (*(char *)(param_1 + 9) == '\0')) {
    FUN_1405bceea();
    FUN_1405bcf46(DAT_14c948580,param_1);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}



// FUNCTION 1405bceea FUN_1405bceea body=91 status=ok
// SIG undefined FUN_1405bceea(void)

void FUN_1405bceea(void)

{
  uint uVar1;
  longlong lVar2;
  
  if (DAT_14c948580 != 0) {
    return;
  }
  DAT_14c948580 = FUN_145723e91(DAT_14c951640);
  uVar1 = *(uint *)(DAT_14c948580 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  return;
}



// FUNCTION 1405bcf46 FUN_1405bcf46 body=117 status=ok
// SIG undefined FUN_1405bcf46(void)

void FUN_1405bcf46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_1 + 0x28) + (ulonglong)*(byte *)(param_2 + 8) * 0x10;
  iVar2 = *(int *)(lVar1 + 0x30);
  *(uint *)(lVar1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x34) < iVar2 + 1U) {
    FUN_1405bd82c((longlong *)(lVar1 + 0x28),iVar2);
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x28) + (longlong)iVar2 * 8) = param_2;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001405bcf9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1405bcfbc FUN_1405bcfbc body=314 status=ok
// SIG undefined FUN_1405bcfbc(void)

void FUN_1405bcfbc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1405bd049;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1405bd022:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1405bd022;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1405bd049;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405bd049:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bd0f8 FUN_1405bd0f8 body=490 status=ok
// SIG undefined FUN_1405bd0f8(void)

undefined8 * FUN_1405bd0f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405bd402(param_1,iVar1,0);
    FUN_1405bd2e2(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1405bd402(param_1 + 2,iVar1,0);
    FUN_1405bd2e2(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1405bd694(param_1 + 4,iVar1,0);
    FUN_1405bd624(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1405bd54c(param_1 + 6,iVar1,0);
    FUN_1405bd383(param_1[6],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar3 = param_2[10];
  param_1[10] = lVar3;
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    puVar8 = param_2 + 0xe;
    if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_2[0xc];
    }
    (**(code **)*puVar8)(puVar8,param_1 + 0xc);
  }
  lVar3 = param_2[0x12];
  param_1[0x12] = lVar3;
  param_1[0x14] = 0;
  if (lVar3 != 0) {
    puVar8 = param_2 + 0x16;
    if ((undefined8 *)param_2[0x14] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_2[0x14];
    }
    (**(code **)*puVar8)(puVar8,param_1 + 0x14);
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x104);
  *(undefined8 *)((longlong)param_1 + 0xfc) = *(undefined8 *)((longlong)param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 0x104) = uVar2;
  uVar2 = param_2[0x1a];
  uVar4 = param_2[0x1b];
  uVar5 = param_2[0x1c];
  uVar6 = param_2[0x1d];
  uVar7 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar7;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar6;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar4;
  return param_1;
}



// FUNCTION 1405bd2e2 FUN_1405bd2e2 body=161 status=ok
// SIG undefined FUN_1405bd2e2(void)

void FUN_1405bd2e2(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  
  if (param_3 != 0) {
    lVar20 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar20);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar20);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar20);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x30 + lVar20);
      uVar16 = puVar1[1];
      uVar17 = puVar1[2];
      uVar18 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + 0x30 + lVar20);
      *puVar2 = *puVar1;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      puVar1 = (undefined4 *)(param_1 + 0x20 + lVar20);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      puVar1 = (undefined4 *)(param_1 + 0x10 + lVar20);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar1 = (undefined4 *)(param_1 + lVar20);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      puVar3 = (undefined8 *)(param_1 + 0x40 + lVar20);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(param_1 + 0x50 + lVar20) = 0;
      *(undefined8 *)(param_1 + 0x40 + lVar20) = *(undefined8 *)(param_2 + 0x40 + lVar20);
      uVar19 = FUN_14477b664(*(undefined8 *)(param_2 + 0x48 + lVar20));
      uVar19 = FUN_14477b664(uVar19);
      *(undefined8 *)(param_1 + 0x48 + lVar20) = uVar19;
      *(undefined8 *)(param_1 + 0x50 + lVar20) = *(undefined8 *)(param_2 + 0x50 + lVar20);
      lVar20 = lVar20 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405bd383 FUN_1405bd383 body=126 status=ok
// SIG undefined FUN_1405bd383(void)

void FUN_1405bd383(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      *(undefined4 *)(param_1 + 0x18 + lVar2) = *(undefined4 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405bd402 FUN_1405bd402 body=330 status=ok
// SIG undefined FUN_1405bd402(void)

void FUN_1405bd402(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405bd470;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1405bd470:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405bd54c FUN_1405bd54c body=216 status=ok
// SIG undefined FUN_1405bd54c(void)

void FUN_1405bd54c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405bd624 FUN_1405bd624 body=112 status=ok
// SIG undefined FUN_1405bd624(void)

void FUN_1405bd624(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405bd694 FUN_1405bd694 body=334 status=ok
// SIG undefined FUN_1405bd694(void)

void FUN_1405bd694(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405bd706;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1405bd706:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405bd7e2 FUN_1405bd7e2 body=74 status=ok
// SIG undefined FUN_1405bd7e2(void)

void FUN_1405bd7e2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405bd82c FUN_1405bd82c body=353 status=ok
// SIG undefined FUN_1405bd82c(void)

void FUN_1405bd82c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405bd8b3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405bd8b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405bd99b FUN_1405bd99b body=449 status=ok
// SIG undefined FUN_1405bd99b(void)

void FUN_1405bd99b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_68 [35];
  undefined1 local_45;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447be468(param_1,&local_44,&local_45);
  uVar4 = DAT_14c9c7c90;
  uVar3 = DAT_14c9c4540;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1405bda0e;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1405bda0e:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x12 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x12 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_1405bda8a;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1405bda8a:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x13;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x90;
  *(undefined4 *)(puVar5 + 1) =
       *(undefined4 *)(&DAT_14ca11f94 + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x1d1d;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = (int)param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a204b90;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x84) = local_44;
  *(undefined1 *)(puVar5 + 0x11) = local_45;
  *(undefined4 *)((longlong)puVar5 + 0x89) = 1;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bdb5e FUN_1405bdb5e body=756 status=ok
// SIG undefined FUN_1405bdb5e(void)

void FUN_1405bdb5e(float *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  param_1[0xc] = *(float *)(param_2 + 0x2b50);
  param_1[4] = *(float *)(param_2 + 0x2980);
  fVar6 = *(float *)(param_2 + 0x2b4c);
  if (10.0 <= fVar6) {
    fVar6 = 10.0;
  }
  if (fVar6 <= 0.1) {
    fVar6 = 0.1;
  }
  param_1[0xd] = fVar6;
  param_1[2] = (float)(*(int *)(param_2 + 0x4e0) - *(int *)(param_2 + 0x4d8)) /
               (float)(*(int *)(param_2 + 0x4e4) - *(int *)(param_2 + 0x4dc));
  atan(1.0 / *(double *)(param_2 + 0x830));
  dVar4 = atan(1.0 / *(double *)(param_2 + 0x858));
  fVar8 = *(float *)(param_2 + 0x2b48) * 0.1;
  *param_1 = fVar8;
  fVar8 = fVar8 / (param_1[2] / param_1[0xd]);
  param_1[1] = fVar8;
  fVar6 = tanf((float)dVar4);
  param_1[3] = (1.0 / fVar6) * fVar8 * 0.5;
  cVar5 = FUN_1449ecfd0();
  if (((cVar5 != '\0') && (*(float *)(&DAT_00002b84 + param_2) == 0.0)) &&
     (!NAN(*(float *)(&DAT_00002b84 + param_2)))) {
    dVar4 = atan(1.0 / *(double *)(param_2 + 0x628));
    fVar6 = param_1[1];
    fVar8 = tanf((float)dVar4);
    param_1[3] = (1.0 / fVar8) * fVar6 * 0.5;
  }
  param_1[10] = -*(float *)(DAT_14ca25340 + 4);
  fVar6 = *(float *)(DAT_14ca25358 + 4);
  param_1[0xb] = fVar6;
  param_1[0xb] = fVar6 * *(float *)(&DAT_00002b84 + param_2);
  fVar6 = *(float *)(param_2 + 0x2b58) / 1920.0;
  param_1[0xe] = fVar6 + fVar6;
  param_1[0xf] = 1.0 / (*(float *)(param_2 + 0x2b54) * 100000.0);
  if ((param_1[4] <= 0.0) || (fVar6 = param_1[0xc], fVar6 <= 0.0)) {
    param_1[5] = 0.0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
  }
  else {
    fVar8 = param_1[3];
    fVar7 = param_1[2] / ((*param_1 / param_1[1]) * param_1[0xd]);
    if (fVar7 <= 1.0) {
      fVar7 = 1.0;
    }
    fVar8 = (fVar7 * ((((fVar8 * fVar8) / (param_1[4] * (fVar6 - fVar8))) * 0.5) / param_1[1])) /
            param_1[2];
    param_1[5] = fVar8;
    if (0.0 < *(float *)(param_2 + 0x3084)) {
      fVar8 = (1.0 - fVar6 / *(float *)(param_2 + 0x3084)) * fVar8;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      param_1[7] = fVar8;
      cVar5 = *(char *)(param_2 + 0x3080);
      *(char *)(param_1 + 6) = cVar5;
      if ((cVar5 == '\x01') && (lVar3 = *(longlong *)(param_2 + 0x3088), lVar3 != 0)) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        *(longlong *)(param_1 + 8) = lVar3;
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) != 1) {
          return;
        }
        FUN_144a54812();
        return;
      }
    }
    else {
      param_1[7] = 0.0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    param_1[8] = 0.0;
    param_1[9] = 0.0;
  }
  return;
}



// FUNCTION 1405bde52 FUN_1405bde52 body=752 status=ok
// SIG undefined FUN_1405bde52(void)

void FUN_1405bde52(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_91;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0xe0) == DAT_14cafb350) {
    piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar6 = *piVar2;
    if (iVar6 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar6 = *piVar2;
    }
    *piVar2 = 0x40000002;
    local_a8 = 0;
    uStack_a0 = 0;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      FUN_1405be624(lVar8,&local_90,param_1 + 0xb0);
      FUN_1405be162(&local_a8,&local_90);
      FUN_1405be1b2(CONCAT71(uStack_8f,local_90),local_88);
      if (CONCAT71(uStack_8f,local_90) != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1405be4a9(&local_90,&local_a8);
    FUN_1405be1ea(&DAT_14cafb2e8,param_1 + 0xb0,&local_90,*(undefined4 *)(param_1 + 0xe0));
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (*plVar3 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *plVar3 = 0;
    }
    if (0 < (longlong)local_48) {
      puVar7 = &local_90;
      if (local_50 != (undefined1 *)0x0) {
        puVar7 = local_50;
      }
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + 0xd8);
        local_b0 = *(longlong *)(puVar7 + lVar8 + 8);
        if (local_b0 != 0) {
          LOCK();
          *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
          UNLOCK();
        }
        FUN_14002c244(uVar4,&local_b0);
        lVar8 = lVar8 + 0x10;
      } while ((longlong)local_48 * 0x10 != lVar8);
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_91 = 1;
    FUN_1447439e4();
    FUN_140231422(&local_90);
    FUN_1405be1b2(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    *piVar2 = iVar6;
  }
  else {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0xd8) + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_90 = 1;
    FUN_1447439e4();
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (*plVar3 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *plVar3 = 0;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0xd8);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405be162 FUN_1405be162 body=80 status=ok
// SIG undefined FUN_1405be162(void)

longlong * FUN_1405be162(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1405be1b2(*param_1,(int)param_1[1]);
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



// FUNCTION 1405be1b2 FUN_1405be1b2 body=55 status=ok
// SIG undefined FUN_1405be1b2(void)

void FUN_1405be1b2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x110);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405be1ea FUN_1405be1ea body=343 status=ok
// SIG undefined FUN_1405be1ea(void)

void FUN_1405be1ea(PSRWLOCK param_1,int *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  PVOID pvVar3;
  undefined8 *puVar4;
  uint uVar5;
  PSRWLOCK pRVar6;
  longlong lVar7;
  int iVar8;
  PVOID pvVar9;
  longlong lVar10;
  
  AcquireSRWLockExclusive(param_1);
  if (*(int *)&param_1[0xd].Ptr == param_4) {
    if (*(int *)&param_1[4].Ptr != *(int *)((longlong)&param_1[9].Ptr + 4)) {
      uVar5 = FUN_14490dc6d(param_2);
      pRVar6 = param_1 + 10;
      if (param_1[0xb].Ptr != (PSRWLOCK)0x0) {
        pRVar6 = param_1[0xb].Ptr;
      }
      iVar8 = *(int *)((longlong)&pRVar6->Ptr +
                      (ulonglong)(*(int *)&param_1[0xc].Ptr - 1U & uVar5) * 4);
      if (iVar8 != -1) {
        pvVar3 = param_1[3].Ptr;
        do {
          lVar10 = (longlong)iVar8 * 0x98;
          if ((((*(int *)((longlong)pvVar3 + lVar10) == *param_2) &&
               (pvVar9 = (PVOID)((longlong)pvVar3 + lVar10),
               *(longlong *)((longlong)pvVar9 + 8) == *(longlong *)(param_2 + 2))) &&
              (*(longlong *)((longlong)pvVar9 + 0x10) == *(longlong *)(param_2 + 4))) &&
             ((*(longlong *)((longlong)pvVar9 + 0x18) == *(longlong *)(param_2 + 6) &&
              (*(longlong *)((longlong)pvVar9 + 0x20) == *(longlong *)(param_2 + 8)))))
          goto LAB_1405be29c;
          iVar8 = *(int *)((longlong)pvVar3 + lVar10 + 0x90);
        } while (iVar8 != -1);
      }
    }
    pvVar9 = (PVOID)0x0;
LAB_1405be29c:
    lVar10 = (longlong)pvVar9 + 0x28;
    if (pvVar9 == (PVOID)0x0) {
      lVar10 = 0;
    }
    lVar1 = lVar10 + 0x10;
    if (lVar1 != param_3) {
      lVar7 = *(longlong *)(lVar10 + 0x50);
      if (*(longlong *)(lVar10 + 0x50) == 0) {
        lVar7 = lVar1;
      }
      FUN_140231456(lVar7,*(undefined4 *)(lVar10 + 0x58));
      lVar7 = *(longlong *)(param_3 + 0x40);
      if (*(longlong *)(param_3 + 0x40) == 0) {
        lVar7 = param_3;
      }
      FUN_1405be342(lVar1,lVar7,*(undefined4 *)(param_3 + 0x48),*(undefined4 *)(lVar10 + 0x5c));
    }
    *(byte *)(lVar10 + 4) = *(int *)(lVar10 + 0x58) == 0 | 2;
    if ((*(int *)(lVar10 + 0x58) == 0) &&
       (puVar4 = *(undefined8 **)(lVar10 + 8), puVar4 != (undefined8 *)0x0)) {
      *(undefined8 *)(lVar10 + 8) = 0;
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    if (*(char *)(lVar10 + 0x60) != '\0') {
      FUN_1402d01fc(lVar10,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001405be31a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 1405be342 FUN_1405be342 body=131 status=ok
// SIG undefined FUN_1405be342(void)

void FUN_1405be342(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 4;
    return;
  }
  FUN_1405be3c6(param_1,param_3,param_4);
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(lVar3 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405be3c6 FUN_1405be3c6 body=227 status=ok
// SIG undefined FUN_1405be3c6(void)

void FUN_1405be3c6(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 != 0) && (iVar4 = 4, 4 < param_2)) {
    uVar2 = (longlong)(int)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)(int)param_2 & 0xfffffffffffffff]
                          ];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1407217e2(param_1,0,iVar4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 1405be4a9 FUN_1405be4a9 body=377 status=ok
// SIG undefined FUN_1405be4a9(void)

longlong FUN_1405be4a9(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined8 local_60;
  byte local_58 [8];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x400000000;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar5 = 0;
    do {
      if (*(char *)(lVar3 + lVar5) == '\x01') {
        local_68 = *(int *)(lVar3 + 0x120 + lVar5) * 2 >> 1;
        local_60 = 0;
        FUN_14365dc8c(&DAT_14cafb3d0,*(undefined8 *)(lVar3 + 8 + lVar5),&LAB_147cbd90e,0);
        local_68 = local_68 & 0xffffff00;
        FUN_14053ef1e(DAT_14ca811d0,local_58,*(undefined8 *)(lVar3 + 8 + lVar5));
LAB_1405be5b4:
        if (((local_58[0] & 3) != 0) && (*(char *)(lVar3 + 1 + lVar5) == '\x01')) {
          FUN_144a24164(param_1,local_58);
        }
        if (local_50 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_50 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_50)(local_50,1);
          }
        }
      }
      else if (*(char *)(lVar3 + lVar5) == '\0') {
        local_60 = *(undefined8 *)(lVar3 + 0x128 + lVar5);
        local_68 = *(int *)(lVar3 + 0x120 + lVar5) * 2 >> 1;
        lVar2 = lVar3 + 8 + lVar5;
        FUN_14365db56(&DAT_14cafb3d0,lVar2,&LAB_147cbd8ea);
        FUN_1400fced6(DAT_14ca811c8,local_58,lVar2);
        goto LAB_1405be5b4;
      }
      lVar5 = lVar5 + 0x130;
    } while ((longlong)(int)lVar4 * 0x130 - lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405be624 FUN_1405be624 body=1026 status=ok
// SIG undefined FUN_1405be624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405be624(longlong param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uStack_238;
  undefined1 auStack_234 [4];
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_224 [4];
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 *local_210;
  undefined4 uStack_208;
  undefined1 auStack_204 [4];
  undefined8 *local_200;
  undefined8 local_1f8;
  int local_1f0;
  undefined8 local_1ec;
  undefined1 local_1e4 [8];
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined8 local_154;
  undefined2 local_14c;
  undefined2 local_148;
  undefined8 local_144;
  undefined2 local_13c;
  uint local_58;
  undefined1 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&uStack_238;
  local_200 = param_2;
  FUN_14365ec8a(*(undefined8 *)(param_3 + 2),0xffffffff);
  lVar10 = *(longlong *)(param_1 + 0x28);
  if (lVar10 != 0) {
    uVar3 = *(uint *)(lVar10 + 0x68);
    uVar9 = *(ulonglong *)(lVar10 + 0x60);
    uVar7 = lVar10 + 0x60 + ((longlong)uVar9 >> 0x18);
    uVar14 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar14 = uVar9;
    }
    if ((int)uVar3 < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar11 = uVar3;
      do {
        uVar1 = (uVar11 >> 1) + uVar16;
        puVar2 = (ulonglong *)(uVar14 + (ulonglong)uVar1 * 8);
        uVar15 = *puVar2;
        uVar13 = ((longlong)uVar15 >> 0x18) + (longlong)puVar2;
        if ((uVar15 & 1) == 0) {
          uVar13 = uVar15;
        }
        if (*(ulonglong *)(uVar13 + 0x60) < *(ulonglong *)(*(longlong *)(param_3 + 4) + 0x20)) {
          uVar16 = uVar1 + (uVar11 & 1);
        }
        bVar4 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar4);
    }
    if ((int)uVar16 < (int)uVar3) {
      uVar13 = (ulonglong)uVar16;
      puVar2 = (ulonglong *)(uVar14 + uVar13 * 8);
      uVar14 = *puVar2;
      uVar15 = ((longlong)uVar14 >> 0x18) + (longlong)puVar2;
      if ((uVar14 & 1) == 0) {
        uVar15 = uVar14;
      }
      if (*(ulonglong *)(uVar15 + 0x60) <= *(ulonglong *)(*(longlong *)(param_3 + 4) + 0x20)) {
        if ((uVar9 & 1) == 0) {
          uVar7 = uVar9;
        }
        uVar9 = *(ulonglong *)(uVar7 + uVar13 * 8);
        if ((uVar9 & 1) != 0) {
          uVar9 = ((longlong)uVar9 >> 0x18) + uVar7 + uVar13 * 8;
        }
        if (uVar9 != 0) {
          local_1f8 = param_3 + 4;
          local_1ec = DAT_14c967818;
          local_1e4 = (undefined1  [8])0x0;
          uStack_1dc = 0;
          local_1d4 = 0;
          local_1f0 = *param_3;
          local_1d0 = 0x200000007;
          local_1c8 = 3;
          local_1c4 = 0;
          local_1c0 = DAT_14c967818;
          local_1b8 = DAT_14c967818;
          local_1b0 = &DAT_100000002;
          local_1a8 = 1;
          local_1a4 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_190 = 0;
          uStack_188 = 0;
          local_180 = _DAT_14ca83a30;
          uStack_178 = _DAT_14ca83a38;
          local_170 = DAT_14ca83a40;
          local_16c = DAT_14ca850b0;
          uStack_168 = _DAT_14ca850b4;
          uStack_164 = _DAT_14ca850b8;
          uStack_160 = uRam000000014ca850bc;
          local_15c = DAT_14ca850c0;
          local_158 = 0x9b;
          local_14c = 0;
          local_154 = 0;
          local_148 = 0x9b;
          local_13c = 0;
          local_144 = 0;
          lVar10 = 0x100;
          do {
            *(undefined4 *)((longlong)&uStack_238 + lVar10) = 0xffffffff;
            auStack_234[lVar10] = 0;
            *(undefined8 *)((longlong)&uStack_230 + lVar10) = 0;
            *(undefined4 *)((longlong)&uStack_228 + lVar10) = 0xffffffff;
            auStack_224[lVar10] = 0;
            *(undefined8 *)((longlong)&uStack_220 + lVar10) = 0;
            *(undefined4 *)((longlong)&local_218 + lVar10) = 0xffffffff;
            *(undefined1 *)((longlong)&local_218 + lVar10 + 4) = 0;
            *(undefined8 *)((longlong)&local_210 + lVar10) = 0;
            *(undefined4 *)((longlong)&uStack_208 + lVar10) = 0xffffffff;
            auStack_204[lVar10] = 0;
            *(undefined8 *)((longlong)&local_200 + lVar10) = 0;
            *(undefined4 *)((longlong)&local_1f8 + lVar10) = 0xffffffff;
            *(undefined1 *)((longlong)&local_1f8 + lVar10 + 4) = 0;
            *(undefined8 *)((longlong)&local_1f0 + lVar10) = 0;
            *(undefined4 *)((longlong)&local_1ec + lVar10 + 4) = 0xffffffff;
            local_1e4[lVar10] = 0;
            *(undefined8 *)(local_1e4 + lVar10 + 4) = 0;
            *(undefined4 *)((longlong)&uStack_1dc + lVar10 + 4) = 0xffffffff;
            *(undefined1 *)((longlong)&local_1d4 + lVar10) = 0;
            *(undefined8 *)((longlong)&local_1d0 + lVar10) = 0;
            lVar10 = lVar10 + 0x70;
          } while (lVar10 != 0x1e0);
          local_58 = local_58 & 0xfffffe00 | 4;
          local_54 = 0;
          FUN_1400521a2(&local_1d0,&local_1f0);
          uVar7 = (ulonglong)(2 < *param_3);
          *local_200 = 0;
          local_200[1] = 0;
          FUN_1417e1d8e(local_200,0x20);
          if (0 < (int)(&DAT_14c9c0cec)[uVar7]) {
            puVar12 = (undefined8 *)(&DAT_14cafe430 + uVar7 * 0x540);
            uVar9 = 0;
            do {
              if (((code *)*puVar12 != (code *)0x0) &&
                 (plVar8 = (longlong *)(*(code *)*puVar12)(*param_3), plVar8 != (longlong *)0x0)) {
                FUN_14365ec8a(*(undefined8 *)(param_3 + 2),uVar9 & 0xffffffff);
                cVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
                if ((((*(byte *)((longlong)param_3 + 0x26) & 1) == 0) !=
                     (byte)(cVar5 - 0x2aU) < 0x10) ||
                   (((cVar6 = (**(code **)(**(longlong **)(param_3 + 2) + 0x400))(), cVar6 != '\0'
                     || (cVar6 = (**(code **)(**(longlong **)(param_3 + 2) + 0x110))(), cVar5 == '9'
                        )) || (cVar6 != '\0')))) {
                  local_210 = local_200;
                  local_218 = param_3 + 8;
                  (**(code **)(*plVar8 + 8))
                            (plVar8,&local_1d0,*(undefined8 *)(param_3 + 2),local_1f8);
                }
                (**(code **)*plVar8)(plVar8,1);
              }
              uVar9 = uVar9 + 1;
              puVar12 = puVar12 + 2;
            } while ((longlong)uVar9 < (longlong)(int)(&DAT_14c9c0cec)[uVar7]);
          }
          if ((local_48 ^ (ulonglong)&uStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return local_200;
        }
      }
    }
  }
  *local_200 = 0;
  local_200[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&uStack_238);
}



// FUNCTION 1405bea2c FUN_1405bea2c body=747 status=ok
// SIG undefined FUN_1405bea2c(void)

void FUN_1405bea2c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14cb0d2b0 == 0) || (lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), lVar8 == 0)) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      FUN_1405015fa();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14480f766(lVar8 + 0x2e8);
    lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
  }
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_50[2] = lVar6;
  *local_50 = (longlong)&PTR_FUN_14b5a8cb0;
  local_50[3] = param_1 + -8;
  local_50[4] = (longlong)FUN_1405015fa;
  *(undefined4 *)(local_50 + 5) = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) {
        uVar10 = 0;
        goto LAB_1405bebf3;
      }
      uVar10 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1405bebdd;
    }
    uVar10 = 0;
  }
  else {
    plVar1 = (longlong *)(lVar8 + 0x2e8);
    if (*(int *)(lVar8 + 0x2fc) < 1) {
      iVar2 = *(int *)(lVar8 + 0x2f0);
      iVar5 = *(int *)(lVar8 + 0x2f8) + -1;
      *(int *)(lVar8 + 0x2f8) = iVar5;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
        if (0 < iVar2) {
          iVar7 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar7 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar7);
              FUN_14005b248(plVar1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = *(int *)(lVar8 + 0x2f0);
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(lVar8 + 0x2f8) = iVar7;
        if ((iVar7 < iVar2) && (*(int *)(lVar8 + 0x2f4) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar10 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar10 = local_40;
    }
    iVar2 = *(int *)(lVar8 + 0x2f0);
    *(uint *)(lVar8 + 0x2f0) = iVar2 + 1U;
    if (*(uint *)(lVar8 + 0x2f4) < iVar2 + 1U) {
      FUN_1447a71f6(plVar1,iVar2);
    }
    lVar8 = *plVar1;
    lVar9 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar8 + lVar9) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
    *(longlong **)(lVar8 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar9) = local_48;
LAB_1405bebdd:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1405bebf3:
  *(undefined8 *)(param_1 + 8) = uVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1405bed36 FUN_1405bed36 body=451 status=ok
// SIG undefined FUN_1405bed36(void)

void FUN_1405bed36(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar3 = DAT_14c9c0860;
  cVar6 = FUN_140e8f6da();
  uVar5 = DAT_14c9cdb68;
  uVar10 = DAT_14c9c0ee8;
  uVar4 = DAT_14c9c0878;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar8 = (uint *)*puVar1;
  if (puVar8 != (uint *)0x0) goto LAB_1405bedab;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar8 = (uint *)*puVar1;
LAB_1405bedab:
    puVar7 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar9 = puVar8[0x12];
    if (puVar7 + 0x18 <= puVar8 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
      LOCK();
      uVar2 = *puVar8;
      *puVar8 = *puVar8 + uVar9 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar9) != 0xffffffff) break;
      puVar8 = (uint *)*puVar1;
      *puVar8 = 0xffffffff;
      *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar1 = puVar8;
      puVar7 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
      uVar9 = 0;
      if (puVar7 + 0x18 <= puVar8 + 0x4000) {
        uVar9 = 1;
        goto LAB_1405bee27;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_1405bee27:
  *(undefined8 **)(puVar8 + 0x10) = puVar7 + 0x19;
  puVar8[0x12] = uVar9;
  *(int *)(puVar7 + -1) = ((int)puVar7 + -8) - (int)puVar8;
  if (cVar6 != '\0') {
    uVar10 = uVar5;
  }
  *(undefined4 *)((longlong)puVar7 + -4) = 0xc0;
  *(undefined4 *)(puVar7 + 1) = (&DAT_14ca11f48)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar7 + 2) = 0xa0a;
  puVar7[3] = param_2;
  *(int *)(puVar7 + 4) = param_1;
  puVar7[5] = param_3;
  puVar7[6] = param_4;
  *(undefined1 *)(puVar7 + 7) = 0x3a;
  *puVar7 = &PTR_FUN_14a20dd70;
  puVar7[8] = uVar10;
  puVar7[9] = uVar3;
  *(undefined4 *)(puVar7 + 10) = 0x11;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 1;
  puVar7[0x10] = uVar10;
  puVar7[0x11] = uVar4;
  *(undefined4 *)(puVar7 + 0x12) = 0x11;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  *(undefined4 *)(puVar7 + 0x17) = 1;
  return;
}



// FUNCTION 1405beefa FUN_1405beefa body=3240 status=ok
// SIG undefined FUN_1405beefa(void)

void FUN_1405beefa(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = -1;
  if (0 < (longlong)*(int *)(param_1 + 0x410)) {
    lVar8 = 0;
    do {
      lVar11 = lVar8;
      if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar11 * 8) == param_3) break;
      lVar8 = lVar11 + 1;
      lVar11 = -1;
    } while (*(int *)(param_1 + 0x410) != lVar8);
  }
  lVar8 = param_1 + 0xe38;
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xe58);
  }
  lVar11 = (longlong)(int)lVar11 * 0x20;
  if ((*(int *)(lVar8 + 0xc + lVar11) == 2 || *(int *)(lVar8 + lVar11) == 2) && (DAT_14c760804 != 0)
     ) {
    lVar5 = *(longlong *)(param_3 + 0x13ad8);
    if (lVar5 == 0) {
      uVar6 = *(uint *)(param_3 + 0x1de0);
      if (uVar6 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
          }
        }
      }
      if (*(longlong *)(param_3 + 0x3108) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(*(longlong *)(param_3 + 0x3108) + 0x24);
      }
      lVar5 = FUN_140c6b718(*(undefined8 *)(param_1 + 8),uVar7,iVar10);
    }
    if (*(int *)(DAT_14ca03278 + 4) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = 0 < DAT_14ca031e8 | *(byte *)(param_1 + 0xe4);
    }
    if (*(int *)(lVar8 + 0xc + lVar11) == 2) {
      bVar15 = *(int *)(DAT_14c9f3c90 + 4) != 0;
    }
    else {
      bVar15 = false;
    }
    if (((bVar2 & 1) != 0 || bVar15) && (DAT_14c9fb870 == 0)) {
      iVar10 = 0x100;
      if (DAT_14c7607a8 < 0x100) {
        iVar10 = DAT_14c7607a8;
      }
      if (iVar10 < 2) {
        iVar10 = 1;
      }
      uVar3 = (ulonglong)(iVar10 - 1) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
      *(int *)(param_4 + 4) =
           ((iVar10 + (int)*(undefined8 *)(param_1 + 0x260) + -1) / iVar10) *
           (((int)((ulonglong)*(undefined8 *)(param_1 + 0x260) >> 0x20) + iVar10 + -1) / iVar10);
      local_50 = 0;
      uVar6 = 4;
      if (DAT_14ca84e48 < 4) {
        uVar6 = DAT_14ca84e48;
      }
      local_60 = uVar6 + (uVar6 == 0);
      local_5c = 0x1010900000001;
      plVar1 = (longlong *)(param_2 + 0x70);
      uVar14 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar3 = uVar14 + 0x150;
      local_70 = plVar1;
      if (*(ulonglong *)(param_2 + 0x78) < uVar3) {
        FUN_140023dd8(plVar1,0x160);
        uVar14 = *plVar1 + 0xfU & 0xfffffffffffffff0;
        uVar3 = uVar14 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar3;
      FUN_1456bd266(uVar14,L"Lumen.FeedbackAllocator",&local_60,0);
      iVar10 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar10 + 1U) {
        FUN_144737178(param_2 + 0x188,iVar10);
      }
      plVar1 = local_70;
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar10 * 8) = uVar14;
      *(int *)(uVar14 + 0x7c) = *(int *)(param_2 + 400) + -1;
      if ((*(byte *)(uVar14 + 0x68) & 0x80) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x1c;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      local_68 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar14 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 1;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined1 *)(puVar13 + 6) = uVar9;
      *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
      puVar13[7] = uVar14;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      *param_4 = puVar13;
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x50);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar14 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 3;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *puVar13 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar13 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
      puVar13[7] = 0;
      puVar13[8] = uVar14;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[1] = puVar13;
      uVar6 = 8;
      if (DAT_14ca84e48 < 8) {
        uVar6 = DAT_14ca84e48;
      }
      local_60 = uVar6 + (uVar6 == 0);
      uVar6 = DAT_14ca84e48;
      if (*(uint *)(param_4 + 4) < DAT_14ca84e48) {
        uVar6 = *(uint *)(param_4 + 4);
      }
      local_50 = 0;
      local_5c = CONCAT44(0x10109,uVar6 + (uVar6 == 0));
      uVar12 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar3 = uVar12 + 0x150;
      if (*(ulonglong *)(param_2 + 0x78) < uVar3) {
        FUN_140023dd8(local_70,0x160);
        uVar12 = *plVar1 + 0xfU & 0xfffffffffffffff0;
        uVar3 = uVar12 + 0x150;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar3;
      FUN_1456bd266(uVar12,L"Lumen.Feedback",&local_60,0);
      iVar10 = *(int *)(param_2 + 400);
      *(uint *)(param_2 + 400) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x194) < iVar10 + 1U) {
        FUN_144737178(param_2 + 0x188,iVar10);
      }
      plVar1 = local_70;
      *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar10 * 8) = uVar12;
      *(int *)(uVar12 + 0x7c) = *(int *)(param_2 + 400) + -1;
      if ((*(byte *)(uVar12 + 0x68) & 0x80) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x1c;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar12 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 1;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined1 *)(puVar13 + 6) = uVar9;
      *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
      puVar13[7] = uVar12;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[2] = puVar13;
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x50);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar12 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 3;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *puVar13 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar13 + 5) = 0x44;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
      puVar13[7] = 0;
      puVar13[8] = uVar12;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[3] = puVar13;
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar14 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 0;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar13 + 6) = 0x1c;
      *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
      puVar13[7] = uVar14;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      FUN_1405bfba3(param_2,puVar13,0,2);
      plVar1 = local_70;
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(uVar12 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 0;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined2 *)(puVar13 + 6) = 0x44;
      *(undefined1 *)((longlong)puVar13 + 0x32) = 0;
      puVar13[7] = uVar12;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      FUN_1405bfba3(param_2,puVar13,0,2);
    }
    if ((*(longlong *)(lVar5 + 0x7d8) != 0) && (*(longlong *)(lVar5 + 0x7e0) != 0)) {
      uVar9 = 0;
      lVar11 = FUN_144735dd8(param_2,lVar5 + 0x7d8,0);
      if ((*(byte *)(lVar11 + 0x68) & 0x80) != 0) {
        uVar9 = 0x1c;
      }
      plVar1 = (longlong *)(param_2 + 0x70);
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 9;
      local_70 = plVar1;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(plVar1,0x50);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 9;
      }
      local_68 = param_2 + 0x198;
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(lVar11 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 3;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *puVar13 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar13 + 5) = uVar9;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
      puVar13[7] = 0;
      puVar13[8] = lVar11;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[0x1a] = puVar13;
      if ((*(byte *)(lVar11 + 0x68) & 0x80) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x1c;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(lVar11 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 1;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined1 *)(puVar13 + 6) = uVar9;
      *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
      puVar13[7] = lVar11;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[0x19] = puVar13;
      uVar9 = 0;
      lVar11 = FUN_144735dd8(param_2,lVar5 + 0x7e0,0);
      plVar1 = local_70;
      if ((*(byte *)(lVar11 + 0x68) & 0x80) != 0) {
        uVar9 = 0x1c;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x50);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(lVar11 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 3;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *puVar13 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar13 + 5) = uVar9;
      *(undefined8 *)((longlong)puVar13 + 0x2c) = 0xffffffff00000000;
      puVar13[7] = 0;
      puVar13[8] = lVar11;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      plVar1 = local_70;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[0x1c] = puVar13;
      if ((*(byte *)(lVar11 + 0x68) & 0x80) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x1c;
      }
      puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar13 + 8;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8(local_70,0x48);
        puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar13 + 8;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar13[1] = *(undefined8 *)(lVar11 + 8);
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 3) = 2;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar13 + 5) = 1;
      *puVar13 = &PTR_FUN_14a1fb3e8;
      *(undefined1 *)(puVar13 + 6) = uVar9;
      *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
      puVar13[7] = lVar11;
      iVar10 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar10 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar10 + 1U) {
        FUN_1447568fc(local_68,iVar10);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar10 * 8) = puVar13;
      *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_4[0x1b] = puVar13;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405bfba3 FUN_1405bfba3 body=1013 status=ok
// SIG undefined FUN_1405bfba3(void)

void FUN_1405bfba3(longlong param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 4;
  local_6c = param_3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x30);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14a38bd80;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  puVar5[2] = param_2;
  local_68 = puVar4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96228) && (FUN_144b3d300(&DAT_14ca96228), DAT_14ca96228 == -1)) {
    FUN_145fdded6(&local_60);
    local_80 = 0;
    local_90 = 0;
    local_b0 = "Unknown";
    local_c0 = 0;
    uStack_b8 = 0;
    local_c8 = L"FClearBufferUAVParameters";
    local_88 = 0;
    local_a0 = 0x10;
    local_a8 = 399;
    local_98 = &local_60;
    FUN_140b49562(&DAT_14ca961a8,0,1);
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_14321c836);
    _Init_thread_footer(&DAT_14ca96228);
  }
  FUN_140069376(param_1);
  local_60 = puVar4;
  if ((param_4 & 4) == 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1d8);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3a;
    }
    *puVar1 = (ulonglong)puVar4;
    local_58 = DAT_14ca961f0;
    if (DAT_14ca961f0 != 0) {
      LOCK();
      *(int *)(DAT_14ca961f0 + 8) = *(int *)(DAT_14ca961f0 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca961a8;
    local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,2);
    FUN_140068f1a(puVar5);
    *puVar5 = &PTR_FUN_14a38bdb0;
    puVar5[0x37] = &local_68;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = local_6c;
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3b;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_58 = DAT_14ca961f0;
    if (DAT_14ca961f0 != 0) {
      LOCK();
      *(int *)(DAT_14ca961f0 + 8) = *(int *)(DAT_14ca961f0 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca961a8;
    local_c8 = (wchar_t *)CONCAT71(local_c8._1_7_,2);
    FUN_140068f1a(puVar5);
    puVar5[0x37] = &local_68;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = local_6c;
    *puVar5 = &PTR_FUN_14a38bd90;
    *(undefined4 *)(puVar5 + 0x3a) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405bffa6 FUN_1405bffa6 body=452 status=ok
// SIG undefined FUN_1405bffa6(void)

void FUN_1405bffa6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_68 [35];
  undefined1 local_45;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447be468(param_1,&local_44,&local_45);
  uVar4 = DAT_14c9c4540;
  uVar3 = DAT_14c9c0ea0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1405c0019;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1405c0019:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x12 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x12 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_1405c0095;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1405c0095:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x13;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x90;
  *(undefined4 *)(puVar5 + 1) =
       *(undefined4 *)(&DAT_14ca11f24 + (ulonglong)(2 < (int)param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x101;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = (int)param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a204b90;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x84) = local_44;
  *(undefined1 *)(puVar5 + 0x11) = local_45;
  *(undefined4 *)((longlong)puVar5 + 0x89) = 0x10000;
  puVar5[8] = uVar4;
  puVar5[9] = uVar3;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


