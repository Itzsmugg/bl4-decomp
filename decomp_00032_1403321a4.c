// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403321a4 FUN_1403321a4 body=118 status=ok
// SIG undefined FUN_1403321a4(void)

void FUN_1403321a4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140333052(param_1,iVar1);
    }
    FUN_14033221b((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1403323c6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14033221b FUN_14033221b body=1 status=ok
// SIG undefined FUN_14033221b(void)

void FUN_14033221b(void)

{
  return;
}



// FUNCTION 14033221c FUN_14033221c body=119 status=ok
// SIG undefined FUN_14033221c(void)

void FUN_14033221c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456fe37e(param_1,iVar1);
    }
    FUN_140333970((longlong)iVar1 * 0x88 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_141122360(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140332294 FUN_140332294 body=136 status=ok
// SIG undefined FUN_140332294(void)

void FUN_140332294(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140332d3e(param_1,iVar1);
    }
    FUN_14033231d((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_140332506(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_140332446(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14033231d FUN_14033231d body=41 status=ok
// SIG undefined FUN_14033231d(void)

void FUN_14033231d(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0xc) = 0;
    param_1[2] = 0xffffffffffffffff;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 140332346 FUN_140332346 body=64 status=ok
// SIG undefined FUN_140332346(void)

void FUN_140332346(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140332820(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 140332386 FUN_140332386 body=64 status=ok
// SIG undefined FUN_140332386(void)

void FUN_140332386(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140332b68(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 1403323c6 FUN_1403323c6 body=64 status=ok
// SIG undefined FUN_1403323c6(void)

void FUN_1403323c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14033290a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,4);
  }
  return;
}



// FUNCTION 140332406 FUN_140332406 body=64 status=ok
// SIG undefined FUN_140332406(void)

void FUN_140332406(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140332a1a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x2c,4);
  }
  return;
}



// FUNCTION 140332446 FUN_140332446 body=64 status=ok
// SIG undefined FUN_140332446(void)

void FUN_140332446(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1403325a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 140332486 FUN_140332486 body=64 status=ok
// SIG undefined FUN_140332486(void)

void FUN_140332486(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140332742(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,0x10);
  }
  return;
}



// FUNCTION 1403324c6 FUN_1403324c6 body=64 status=ok
// SIG undefined FUN_1403324c6(void)

void FUN_1403324c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140332674(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 140332506 FUN_140332506 body=97 status=ok
// SIG undefined FUN_140332506(void)

void FUN_140332506(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x20 + *param_1);
  FUN_140332567(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 140332567 FUN_140332567 body=62 status=ok
// SIG undefined FUN_140332567(void)

void FUN_140332567(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1403325a6 FUN_1403325a6 body=206 status=ok
// SIG undefined FUN_1403325a6(void)

ulonglong FUN_1403325a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x400) {
            uVar1 = (ulonglong)
                    (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 140332674 FUN_140332674 body=206 status=ok
// SIG undefined FUN_140332674(void)

ulonglong FUN_140332674(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x40;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x200) {
            uVar1 = (ulonglong)
                    (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
        }
      }
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 140332742 FUN_140332742 body=222 status=ok
// SIG undefined FUN_140332742(void)

ulonglong FUN_140332742(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x70)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x70;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x125) {
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
        }
      }
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 140332820 FUN_140332820 body=233 status=ok
// SIG undefined FUN_140332820(void)

ulonglong FUN_140332820(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x30)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x30;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x2ab) {
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
        }
      }
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 14033290a FUN_14033290a body=233 status=ok
// SIG undefined FUN_14033290a(void)

ulonglong FUN_14033290a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x30)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = (ulonglong)param_2 * 0x30;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (param_2 < 0x2ab) {
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
        }
      }
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 1403329f3 FUN_1403329f3 body=19 status=ok
// SIG undefined FUN_1403329f3(void)

void FUN_1403329f3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 140332a06 FUN_140332a06 body=19 status=ok
// SIG undefined FUN_140332a06(void)

void FUN_140332a06(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 140332a1a FUN_140332a1a body=333 status=ok
// SIG undefined FUN_140332a1a(void)

ulonglong FUN_140332a1a(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x2c)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 0x2c;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0x2e9) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x3ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140332ab3;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x3ffffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
        }
      }
LAB_140332ab3:
      uVar3 = uVar3 / 0x2c;
    }
  }
  return uVar3;
}



// FUNCTION 140332b68 FUN_140332b68 body=341 status=ok
// SIG undefined FUN_140332b68(void)

ulonglong FUN_140332b68(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x18)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar4 = (ulonglong)param_2;
    }
    else {
      uVar4 = (ulonglong)param_2 * 0x18;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar3 = uVar4 + 0xf;
          if (param_2 < 0x555) {
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
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140332c09;
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
LAB_140332c09:
      uVar4 = uVar4 / 0x18;
    }
  }
  return uVar4;
}



// FUNCTION 140332cbe FUN_140332cbe body=63 status=ok
// SIG undefined FUN_140332cbe(void)

void FUN_140332cbe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140333276(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 140332cfe FUN_140332cfe body=63 status=ok
// SIG undefined FUN_140332cfe(void)

void FUN_140332cfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1403332d4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 140332d3e FUN_140332d3e body=255 status=ok
// SIG undefined FUN_140332d3e(void)

void FUN_140332d3e(longlong param_1,int param_2)

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



// FUNCTION 140332e3e FUN_140332e3e body=255 status=ok
// SIG undefined FUN_140332e3e(void)

void FUN_140332e3e(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140332f3e FUN_140332f3e body=275 status=ok
// SIG undefined FUN_140332f3e(void)

void FUN_140332f3e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140333052 FUN_140333052 body=275 status=ok
// SIG undefined FUN_140333052(void)

void FUN_140333052(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
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



// FUNCTION 140333166 FUN_140333166 body=271 status=ok
// SIG undefined FUN_140333166(void)

void FUN_140333166(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140333276 FUN_140333276 body=93 status=ok
// SIG undefined FUN_140333276(void)

ulonglong FUN_140333276(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
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



// FUNCTION 1403332d4 FUN_1403332d4 body=93 status=ok
// SIG undefined FUN_1403332d4(void)

ulonglong FUN_1403332d4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
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



// FUNCTION 140333332 FUN_140333332 body=373 status=ok
// SIG undefined FUN_140333332(void)

void FUN_140333332(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403333bd;
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
LAB_1403333bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1403334a8 FUN_1403334a8 body=369 status=ok
// SIG undefined FUN_1403334a8(void)

void FUN_1403334a8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x2c;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14033352f;
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
LAB_14033352f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x2c)) {
    uVar7 = uVar5 / 0x2c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x2c,4);
  return;
}



// FUNCTION 14033361a FUN_14033361a body=278 status=ok
// SIG undefined FUN_14033361a(void)

void FUN_14033361a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x310;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x310)) {
      uVar5 = uVar4 / 0x310 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x310,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140333732 FUN_140333732 body=269 status=ok
// SIG undefined FUN_140333732(void)

void FUN_140333732(longlong param_1,int param_2)

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



// FUNCTION 140333840 FUN_140333840 body=269 status=ok
// SIG undefined FUN_140333840(void)

void FUN_140333840(longlong param_1,int param_2)

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



// FUNCTION 14033394e FUN_14033394e body=34 status=ok
// SIG undefined FUN_14033394e(void)

void FUN_14033394e(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14c8464e8;
  uVar2 = DAT_14c8464e0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c8464e0 = uVar2;
    DAT_14c8464e8 = uVar1;
    param_1[2] = DAT_14c8464f0;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    param_1 = param_1 + 3;
    uVar1 = DAT_14c8464e8;
    uVar2 = DAT_14c8464e0;
  }
  DAT_14c8464e0 = uVar2;
  DAT_14c8464e8 = uVar1;
  return;
}



// FUNCTION 140333970 FUN_140333970 body=76 status=ok
// SIG undefined FUN_140333970(void)

void FUN_140333970(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x10) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1403339bc FUN_1403339bc body=269 status=ok
// SIG undefined FUN_1403339bc(void)

void FUN_1403339bc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_140333aca(param_2,param_1 + 8);
  piVar1 = *(int **)plVar2[1];
  if ((int *)((undefined8 *)plVar2[1])[1] < piVar1 + 1) {
    local_34 = (uint)*(byte *)(param_1 + 0x24);
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_34,4);
    if (1 < local_34) {
      FUN_14572541c(plVar2);
    }
    *(bool *)(param_1 + 0x24) = local_34 != 0;
  }
  else {
    *(bool *)(param_1 + 0x24) = *piVar1 != 0;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  lVar3 = 0x28;
  do {
    FUN_140333b28(plVar2,param_1 + lVar3);
    lVar3 = lVar3 + 0x38;
  } while (lVar3 != 0xd0);
  FUN_140077068(plVar2,param_1 + 0xd0);
  local_40 = 0;
  local_48 = 1;
  FUN_140430222(param_1 + 0xe0,param_2,param_3,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140333aca FUN_140333aca body=94 status=ok
// SIG undefined FUN_140333aca(void)

longlong * FUN_140333aca(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1447712aa();
  plVar3 = (longlong *)FUN_1447712aa(uVar2,param_2 + 0xc);
  puVar1 = *(undefined1 **)plVar3[1];
  if ((undefined1 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x170))(plVar3,(undefined1 *)(param_2 + 0x18),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x18) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
  }
  return plVar3;
}



// FUNCTION 140333b28 FUN_140333b28 body=464 status=ok
// SIG undefined FUN_140333b28(void)

undefined8 FUN_140333b28(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  plVar2 = (longlong *)FUN_140333cf8();
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  uVar3 = FUN_1447712aa(plVar2,param_2 + 0x10);
  plVar2 = (longlong *)FUN_1447712aa(uVar3,param_2 + 0x1c);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_2 + 0x28),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_2 + 0x2c),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      FUN_14572512c(plVar2);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 0x34);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar4,4);
    }
    else {
      FUN_14572512c(plVar2,puVar4);
    }
  }
  else {
    *puVar4 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  return param_1;
}



// FUNCTION 140333cf8 FUN_140333cf8 body=246 status=ok
// SIG undefined FUN_140333cf8(void)

longlong * FUN_140333cf8(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140333dee FUN_140333dee body=103 status=ok
// SIG undefined FUN_140333dee(void)

void FUN_140333dee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b40b600;
  if (*(char *)(param_1 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140333e55(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140333e92(param_1);
  return;
}



// FUNCTION 140333e55 FUN_140333e55 body=60 status=ok
// SIG undefined FUN_140333e55(void)

void FUN_140333e55(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x40);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(longlong *)(pcVar1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      pcVar1 = pcVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140333e92 FUN_140333e92 body=187 status=ok
// SIG undefined FUN_140333e92(void)

void FUN_140333e92(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3f6470;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x17];
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
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_1 + 9);
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140333f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140333f4e FUN_140333f4e body=55 status=ok
// SIG undefined FUN_140333f4e(void)

void FUN_140333f4e(longlong *param_1)

{
  FUN_140333f86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140333f86 FUN_140333f86 body=607 status=ok
// SIG undefined FUN_140333f86(void)

void FUN_140333f86(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar16 = 0;
    uVar15 = 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar16) goto LAB_140333fbb;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar10 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = *param_1 + (longlong)iVar7 * 0x38;
      puVar17 = (undefined8 *)(lVar14 + 8);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar14 + 0x28) * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar9 = puVar17;
        if (0x18 < *(ushort *)(lVar14 + 0x20)) {
          puVar9 = (undefined8 *)*puVar17;
        }
        (*pcVar3)(puVar9);
      }
      if (0x18 < *(ushort *)(lVar14 + 0x20)) {
        FUN_1400020a8(*puVar17);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar4 = puVar8[lVar14] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar8[lVar14 + lVar11 + 1];
          if (uVar4 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar14 == lVar11) goto LAB_140333fbb;
        }
        uVar16 = (ulonglong)(iVar7 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar10 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_140333fbb:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar4 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403341f2 FUN_1403341f2 body=31 status=ok
// SIG undefined FUN_1403341f2(void)

undefined8 FUN_1403341f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14033421e FUN_14033421e body=54 status=ok
// SIG undefined FUN_14033421e(void)

void FUN_14033421e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  FUN_140334254(param_1,*(undefined8 *)(*param_2 + 0x6a0));
  return;
}



// FUNCTION 140334254 FUN_140334254 body=134 status=ok
// SIG undefined FUN_140334254(void)

void FUN_140334254(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xf0))();
  if (lVar1 != 0) {
    FUN_14109122c(lVar1,param_2,param_1 + 6,param_1 + 8);
    return;
  }
  if (*(int *)((longlong)param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN_1447d6d9c(param_1 + 6,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (-1 < *(int *)((longlong)param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 9) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1401017f4(param_1 + 8,0);
  return;
}



// FUNCTION 1403342da FUN_1403342da body=86 status=ok
// SIG undefined FUN_1403342da(void)

undefined8 FUN_1403342da(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ushort uVar1;
  char cVar2;
  
  if ((*(char *)(param_1 + 0xd4) == '\x01') &&
     (cVar2 = FUN_140334330(param_1 + -0xa0), cVar2 != '\0')) {
    *param_3 = *(undefined4 *)(param_1 + 0xd8);
    param_3[1] = *(undefined4 *)(param_1 + 0xdc);
    uVar1 = *(ushort *)(param_1 + 0xa8);
    *(ushort *)(param_3 + 2) = *(ushort *)(param_3 + 2) | uVar1;
    return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 140334330 FUN_140334330 body=183 status=ok
// SIG undefined FUN_140334330(void)

ulonglong FUN_140334330(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1403343e8(param_1 + 0x150,param_2 + 0x130);
  if (cVar1 != '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(int *)(param_1 + 0x170) == 7) goto LAB_1403343c1;
    lVar3 = FUN_14485cccc(param_2 + 0xe0);
    if (lVar3 == 0) goto LAB_1403343c1;
    uVar4 = FUN_1447210f0(lVar3);
    local_40 = *(undefined8 *)(param_2 + 8);
    local_38 = *(undefined2 *)(param_2 + 0x10);
    local_30 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = FUN_1403346e6(&local_40,lVar3,uVar4);
    if ((*(uint *)(param_1 + 0x170) >> (uVar2 & 0x1f) & 1) != 0) goto LAB_1403343c1;
  }
  uVar5 = 0;
LAB_1403343c1:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403343e8 FUN_1403343e8 body=295 status=ok
// SIG undefined FUN_1403343e8(void)

byte FUN_1403343e8(undefined1 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 4) == 0) {
    bVar1 = 1;
    goto LAB_14033448a;
  }
  if ((int)param_2[7] < 1) {
LAB_1403344b1:
    bVar1 = 0;
  }
  else {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2;
    }
    if ((*plVar3 == 0) || (0xfffffffd < (int)plVar3[1] - 1U)) goto LAB_1403344b1;
    if ((longlong)*(int *)(param_1 + 0x10) == 0) {
      bVar1 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x18;
      do {
        lVar6 = lVar6 + -0x18;
        bVar1 = FUN_140334510(param_2,lVar5,*param_1);
        if (bVar1 != 0) break;
        lVar5 = lVar5 + 0x18;
      } while (lVar6 != 0);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14b3f6170;
      local_78[0] = &LAB_143cfdcc0;
      local_50 = *(longlong *)(param_1 + 0x18);
      bVar2 = FUN_1402d0c8a(param_2,local_78);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar4 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar4 = &local_58;
        }
        (*(code *)(*pppuVar4)[2])();
      }
      bVar1 = bVar1 | bVar2;
    }
  }
  bVar1 = *(int *)(param_1 + 4) != 1 ^ bVar1;
LAB_14033448a:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140334510 FUN_140334510 body=328 status=ok
// SIG undefined FUN_140334510(void)

undefined8 FUN_140334510(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar2 = *(byte *)(param_1 + 0x38);
  local_58 = param_2;
  if ((ulonglong)bVar2 != 0) {
    uVar8 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = param_1;
      }
      plVar1 = (longlong *)(lVar4 + uVar8 * 0x18);
      if (param_3 == '\0') {
        lVar4 = FUN_14033465a();
        if (lVar4 != 0) {
          lVar3 = *local_58;
          puVar7 = *(undefined4 **)(lVar4 + 8);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar6 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar6);
            DAT_14c947fe0 = lVar6;
          }
          FUN_140045924(DAT_14c947fe0,&local_50,puVar7,1);
          if (lVar3 == local_50) goto LAB_14033462f;
          if ((longlong)*(int *)(lVar4 + 0xe0) != 0) {
            lVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0xd8) + lVar6) == lVar3) goto LAB_14033462f;
              lVar6 = lVar6 + 8;
            } while ((longlong)*(int *)(lVar4 + 0xe0) * 8 != lVar6);
          }
        }
      }
      else if ((*plVar1 == *local_58) && ((int)plVar1[1] == (int)local_58[1])) {
LAB_14033462f:
        uVar5 = 1;
        goto LAB_1403345ed;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != bVar2);
  }
  uVar5 = 0;
LAB_1403345ed:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033465a FUN_14033465a body=138 status=ok
// SIG undefined FUN_14033465a(void)

longlong FUN_14033465a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb77dc0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77dc0,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403346e6 FUN_1403346e6 body=301 status=ok
// SIG undefined FUN_1403346e6(void)

undefined4 FUN_1403346e6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  short local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140154c96(&local_48);
  lVar3 = *param_1;
  uVar6 = 1;
  if (((lVar3 != 0) && ((((short)param_1[1] < 0 || (param_1[2] != 0)) && (local_48 != 0)))) &&
     ((local_40 < 0 || (local_38 != 0)))) {
    plVar4 = *(longlong **)(lVar3 + 0x18);
    plVar5 = *(longlong **)(lVar3 + 0x20);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if (plVar4 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1,&local_48,param_3);
    }
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
    if (plVar4 == (longlong *)0x0) {
      uVar6 = FUN_1449029b8(*param_1,local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140334814 FUN_140334814 body=204 status=ok
// SIG undefined FUN_140334814(void)

void FUN_140334814(longlong *param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x10))();
    if (lVar1 != 0) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_30 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      FUN_140334d8a(lVar1 + 0x4f0,&local_30);
      (**(code **)(*param_1 + 0xa8))(param_1,param_3,1);
    }
    if ((*param_3 & 4) != 0) {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x330))(plVar2,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140334902 FUN_140334902 body=400 status=ok
// SIG undefined FUN_140334902(void)

longlong FUN_140334902(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) {
      uVar2 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))((longlong *)(param_1 + -0x30));
      lVar3 = FUN_140334a94(lVar3,uVar2);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x508) != 0)) {
        lVar4 = FUN_140334ca4();
        lVar3 = *(longlong *)(lVar3 + 0x508);
        if (lVar3 != 0) {
          lVar5 = 0;
          if ((lVar4 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_1403349cd;
          if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) {
            lVar5 = 0;
            if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30) {
              lVar5 = lVar3;
            }
            goto LAB_1403349cd;
          }
        }
      }
    }
  }
  lVar5 = 0;
LAB_1403349cd:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140334a94 FUN_140334a94 body=526 status=ok
// SIG undefined FUN_140334a94(void)

longlong FUN_140334a94(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
  }
  else {
    iVar4 = *(int *)(param_2 + 0x238);
    if (iVar4 < 1) {
      lVar7 = 0;
    }
    else {
      lVar9 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(param_2 + 0x230) + 4 + lVar9 * 8);
        if ((((iVar1 != 0) &&
             (uVar2 = *(uint *)(*(longlong *)(param_2 + 0x230) + lVar9 * 8), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)) &&
            (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar7 = *plVar8, lVar7 != 0)))))) {
          lVar5 = *(longlong *)(lVar7 + 0x430);
          if (lVar5 == 0) {
LAB_140334c80:
            lVar6 = 0;
          }
          else {
            if (DAT_14cae9568 == 0) {
              local_50 = &local_38;
              local_38 = FUN_1417de738;
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
              lVar5 = *(longlong *)(lVar7 + 0x430);
              if (lVar5 == 0) goto LAB_140334c80;
            }
            if (DAT_14cae9568 == 0) goto LAB_140334c80;
            lVar3 = *(longlong *)(lVar5 + 0x10);
            lVar6 = 0;
            if (lVar3 != 0) {
              if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_140334c80;
              lVar6 = lVar5;
              if (*(longlong *)
                   (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
                  DAT_14cae9568 + 0x30) {
                lVar6 = 0;
              }
            }
          }
          if (lVar6 == param_1) break;
          iVar4 = *(int *)(param_2 + 0x238);
        }
        lVar9 = lVar9 + 1;
        lVar7 = 0;
      } while ((int)lVar9 < iVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 140334ca4 FUN_140334ca4 body=228 status=ok
// SIG undefined FUN_140334ca4(void)

longlong FUN_140334ca4(void)

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
  if (DAT_14cb27160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14640b4da;
    local_38 = &LAB_147f9df9b;
    local_40 = &LAB_14644cc1e;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x848;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedPlayerInput",&DAT_14cb27160,&DAT_147f9df9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140334d8a FUN_140334d8a body=321 status=ok
// SIG undefined FUN_140334d8a(void)

undefined8 FUN_140334d8a(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_140334ecc(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[2];
        puVar7 = puVar8 + 2;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 140334ecc FUN_140334ecc body=91 status=ok
// SIG undefined FUN_140334ecc(void)

void FUN_140334ecc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140334f28(param_1,param_2,1);
  return;
}



// FUNCTION 140334f28 FUN_140334f28 body=136 status=ok
// SIG undefined FUN_140334f28(void)

void FUN_140334f28(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140334fb0 FUN_140334fb0 body=325 status=ok
// SIG undefined FUN_140334fb0(void)

void FUN_140334fb0(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == (longlong *)0x0) {
    param_4 = (longlong *)(param_3 + *(int *)(param_1 + 0x44));
  }
  local_40 = *param_2;
  local_38 = param_2[1];
  FUN_1403350f6(param_4,&local_40);
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar4 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar2 = *param_4;
        _Dst = (uint *)(lVar2 + lVar4 * 0x10);
        if (((((*(longlong *)(lVar2 + 8 + lVar4 * 0x10) != 0) && (_Dst[1] != 0)) &&
             (uVar1 = *_Dst, -1 < (int)uVar1)) &&
            (((int)uVar1 < DAT_14c9647dc &&
             (plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar7 + 2) == _Dst[1] &&
            (((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0 && (*plVar7 != 0)))))) break;
        iVar6 = ~(uint)lVar4 + iVar3;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar6) * 0x10),(longlong)iVar6 << 4);
          iVar3 = (int)param_4[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_4 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar4) goto LAB_1403350ec;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
    if (bVar5) {
LAB_1403350ec:
      FUN_1400bbcfc(param_4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403350f6 FUN_1403350f6 body=100 status=ok
// SIG undefined FUN_1403350f6(void)

int FUN_1403350f6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14033515a();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_140335274(param_1,iVar2);
    }
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar1 + lVar3) = 0;
    ((undefined8 *)(lVar1 + lVar3))[1] = 0;
    *(undefined8 *)(lVar1 + lVar3) = *param_2;
    *(undefined8 *)(lVar1 + 8 + lVar3) = param_2[1];
  }
  return iVar2;
}



// FUNCTION 14033515a FUN_14033515a body=281 status=ok
// SIG undefined FUN_14033515a(void)

int FUN_14033515a(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  
  if ((longlong)(int)param_1[1] != 0) {
    uVar3 = *param_2;
    iVar5 = 0;
    uVar6 = (uint)uVar3;
    puVar4 = (ulonglong *)(*param_1 + 8);
    do {
      uVar1 = (uint)puVar4[-1];
      iVar2 = *(int *)((longlong)puVar4 + -4);
      iVar7 = (int)(uVar3 >> 0x20);
      if (((iVar2 == iVar7 && uVar1 == uVar6) ||
          ((((((iVar2 == 0 || ((int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
             ((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0 ||
              (*(int *)(lVar9 + 0x10) != iVar2)))) || ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) &&
           ((((DAT_14c9647dc <= (int)uVar6 || (int)uVar6 < 0) || uVar3 >> 0x20 == 0 ||
             (lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar3 >> 0xd) & 0x3fff8)),
             lVar9 == 0)) ||
            ((*(int *)(lVar9 + 0x10) != iVar7 || ((*(uint *)(lVar9 + 8) & 0x10200000) != 0))))))))
         && (*puVar4 == param_2[1])) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      puVar8 = puVar4 + 1;
      puVar4 = puVar4 + 2;
    } while (puVar8 != (ulonglong *)((longlong)(int)param_1[1] * 0x10 + *param_1));
  }
  return -1;
}



// FUNCTION 140335274 FUN_140335274 body=269 status=ok
// SIG undefined FUN_140335274(void)

void FUN_140335274(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140335382 FUN_140335382 body=1377 status=ok
// SIG undefined FUN_140335382(void)

void FUN_140335382(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined7 uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar19 = *(longlong *)(param_1 + 0xb0), lVar19 != 0 ||
       (lVar19 = FUN_1448abda6(param_1), lVar19 != 0)))) &&
     ((((*(byte *)(lVar19 + 0x152) == 1 || (*(byte *)(lVar19 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar19 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar16 = *(byte *)(param_1 + 0x1fc);
    iVar17 = *(int *)(*(longlong *)(lVar19 + 0x178) + 0x3e4);
    if (iVar17 < 0) {
      iVar17 = FUN_141348de4();
    }
    if (iVar17 < (int)(uint)bVar16) goto LAB_140335606;
  }
  if ((DAT_14cb0cbf8 < (int)(uint)*(byte *)(param_1 + 0x1fc)) ||
     ((*(byte *)(param_1 + 0x1f8) & 0x20) == 0)) goto LAB_140335606;
  if ((((*(byte *)(param_1 + 0x1fc) != 0) && (DAT_14c76152c != '\0')) &&
      ((lVar19 = *(longlong *)(param_1 + 0xb0), lVar19 != 0 ||
       (lVar19 = FUN_1448abda6(param_1), lVar19 != 0)))) &&
     (((*(byte *)(lVar19 + 0x152) == 1 || (*(byte *)(lVar19 + 0x152) - 5 < 2)) &&
      ((*(longlong *)(lVar19 + 0x178) != 0 && (DAT_14c76152c == '\x01')))))) {
    bVar16 = *(byte *)(param_1 + 0x1fc);
    iVar17 = *(int *)(*(longlong *)(lVar19 + 0x178) + 0x3e4);
    if (iVar17 < 0) {
      iVar17 = FUN_141348de4();
    }
    if (iVar17 < (int)(uint)bVar16) goto LAB_140335606;
  }
  if ((((DAT_14cb0cbf8 < (int)(uint)*(byte *)(param_1 + 0x1fc)) ||
       (cVar15 = FUN_140041326(param_1), cVar15 == '\0')) || ((*(byte *)(param_1 + 0x9c) & 1) == 0))
     || ((*(longlong *)(param_1 + 0x20) != 0 &&
         ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) != 0)))) goto LAB_140335606;
  puVar18 = (undefined1 *)FUN_14001cc68(0x110,0x10);
  *puVar18 = 0;
  FUN_140335938(puVar18 + 0x10,param_1);
  bVar16 = *(byte *)(param_1 + 0x348);
  puVar18[0xd8] = bVar16 & 1;
  puVar18[0xd9] = bVar16 >> 1 & 1;
  uVar14 = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(puVar18 + 0xb8) = *(undefined8 *)(param_1 + 0x328);
  *(undefined8 *)(puVar18 + 0xc0) = uVar14;
  *(undefined4 *)(puVar18 + 200) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(puVar18 + 0xcc) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(puVar18 + 0xd0) = *(undefined4 *)(param_1 + 0x344);
  *(undefined4 *)(puVar18 + 0xd4) = *(undefined4 *)(param_1 + 700);
  *(undefined2 *)(puVar18 + 0xda) = *(undefined2 *)(param_1 + 0x358);
  uVar3 = *(undefined4 *)(param_1 + 0x360);
  uVar4 = *(undefined4 *)(param_1 + 0x364);
  uVar5 = *(undefined4 *)(param_1 + 0x368);
  uVar6 = *(undefined4 *)(param_1 + 0x36c);
  uVar7 = *(undefined4 *)(param_1 + 0x370);
  uVar8 = *(undefined4 *)(param_1 + 0x374);
  uVar9 = *(undefined4 *)(param_1 + 0x378);
  uVar10 = *(undefined4 *)(param_1 + 0x37c);
  uVar11 = *(undefined4 *)(param_1 + 900);
  uVar12 = *(undefined4 *)(param_1 + 0x388);
  uVar13 = *(undefined4 *)(param_1 + 0x38c);
  *(undefined4 *)(puVar18 + 0x100) = *(undefined4 *)(param_1 + 0x380);
  *(undefined4 *)(puVar18 + 0x104) = uVar11;
  *(undefined4 *)(puVar18 + 0x108) = uVar12;
  *(undefined4 *)(puVar18 + 0x10c) = uVar13;
  *(undefined4 *)(puVar18 + 0xf0) = uVar7;
  *(undefined4 *)(puVar18 + 0xf4) = uVar8;
  *(undefined4 *)(puVar18 + 0xf8) = uVar9;
  *(undefined4 *)(puVar18 + 0xfc) = uVar10;
  *(undefined4 *)(puVar18 + 0xe0) = uVar3;
  *(undefined4 *)(puVar18 + 0xe4) = uVar4;
  *(undefined4 *)(puVar18 + 0xe8) = uVar5;
  *(undefined4 *)(puVar18 + 0xec) = uVar6;
  *(undefined1 **)(param_1 + 0x350) = puVar18;
  lVar19 = *(longlong *)(param_1 + 0xb0);
  if (lVar19 == 0) {
    lVar19 = FUN_1448abda6(param_1);
  }
  plVar1 = *(longlong **)(lVar19 + 0x218);
  lVar19 = *(longlong *)(param_1 + 0xa8);
  if (lVar19 == 0) {
LAB_1403355b3:
    bVar23 = false;
    uVar21 = 0;
  }
  else {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_38;
      local_38 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar20 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar19 = *(longlong *)(lVar19 + 0x20);
    if (lVar19 == 0) goto LAB_1403355b3;
    iVar17 = *(int *)(lVar20 + 0x38);
    lVar20 = lVar20 + 0x30;
    do {
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar17) ||
         (lVar22 = lVar19,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar17 * 8) !=
         lVar20)) {
        lVar22 = 0;
      }
    } while ((lVar22 == 0) && (lVar19 = *(longlong *)(lVar19 + 0x20), lVar19 != 0));
    if (((lVar22 == 0) || (*(longlong *)(lVar22 + 0xc0) == 0)) ||
       (((lVar19 = FUN_1403358e4(), lVar19 == 0 || (*(longlong *)(lVar19 + 0x220) == 0)) &&
        (*(longlong *)(lVar22 + 0x220) == 0)))) goto LAB_1403355b3;
    local_38 = *(code **)(param_1 + 0x390);
    uStack_30 = *(undefined4 *)(param_1 + 0x398);
    uStack_2c = *(undefined4 *)(param_1 + 0x39c);
    lVar19 = FUN_147ba5fb4();
    bVar23 = lVar19 != 0;
    uVar21 = (undefined7)((ulonglong)lVar20 >> 8);
  }
  lVar19 = *(longlong *)(param_1 + 0xb0);
  if (lVar19 == 0) {
    lVar19 = FUN_1448abda6(param_1);
    if (lVar19 != 0) {
      lVar19 = *(longlong *)(param_1 + 0xb0);
      if (lVar19 == 0) {
        lVar19 = FUN_1448abda6(param_1);
      }
      goto LAB_1403355c5;
    }
    bVar16 = 1;
  }
  else {
LAB_1403355c5:
    plVar2 = *(longlong **)(lVar19 + 0x218);
    cVar15 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar15 == '\0') {
      bVar16 = (**(code **)(*plVar2 + 0x110))(plVar2);
      bVar16 = bVar16 ^ 1;
    }
    else {
      bVar16 = 0;
    }
    bVar16 = bVar23 | bVar16;
  }
  (**(code **)(*plVar1 + 0x2b0))
            (plVar1,*(undefined8 *)(param_1 + 0x350),CONCAT71(uVar21,bVar16) & 0xffffffff);
LAB_140335606:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403358e4 FUN_1403358e4 body=83 status=ok
// SIG undefined FUN_1403358e4(void)

longlong FUN_1403358e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x243) & 1) == 0)) {
    if (0 < (longlong)*(int *)(param_1 + 0x198)) {
      lVar2 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + lVar2 * 8);
        if ((~*(byte *)(lVar1 + 0x240) & 0x21) == 0) {
          return lVar1;
        }
        lVar2 = lVar2 + 1;
      } while (*(int *)(param_1 + 0x198) != lVar2);
    }
  }
  else if ((*(byte *)(lVar2 + 0x240) & 1) != 0) {
    return lVar2;
  }
  return 0;
}



// FUNCTION 140335938 FUN_140335938 body=1131 status=ok
// SIG undefined FUN_140335938(void)

longlong FUN_140335938(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar4 = *(float *)(param_2 + 0x2ac);
  *(float *)(param_1 + 0x18) = fVar4;
  fVar8 = 0.1;
  if (0.1 <= *(float *)(param_2 + 0x2b4)) {
    fVar8 = *(float *)(param_2 + 0x2b4);
  }
  *(float *)(param_1 + 0x1c) = fVar8 + fVar4;
  bVar3 = *(byte *)(param_2 + 0x2b3);
  uVar1 = (&DAT_14c758c60)[*(byte *)(param_2 + 0x2b1)];
  uVar2 = (&DAT_14c758c60)[*(byte *)(param_2 + 0x2b0)];
  *(undefined4 *)(param_1 + 0x94) = (&DAT_14c758c60)[*(byte *)(param_2 + 0x2b2)];
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(float *)(param_1 + 0xa0) = (float)bVar3 * 0.003921569;
  fVar4 = *(float *)(param_2 + 0x2b8);
  if (100.0 <= fVar4) {
    fVar4 = 100.0;
  }
  fVar8 = 0.0;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar4;
  fVar4 = *(float *)(param_2 + 0x2c0);
  fVar5 = *(float *)(param_2 + 0x2d0) * fVar4;
  fVar6 = *(float *)(param_2 + 0x2cc) * fVar4;
  fVar7 = *(float *)(param_2 + 0x2c8) * fVar4;
  fVar4 = fVar4 * *(float *)(param_2 + 0x2c4);
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1e+38 <= fVar7) {
    fVar7 = 1e+38;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1e+38 <= fVar6) {
    fVar6 = 1e+38;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (1e+38 <= fVar5) {
    fVar5 = 1e+38;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x24) = fVar4;
  *(float *)(param_1 + 0x28) = fVar7;
  *(float *)(param_1 + 0x2c) = fVar6;
  *(float *)(param_1 + 0x30) = fVar5;
  local_78 = *(undefined4 *)(param_1 + 0x24);
  uStack_74 = *(undefined4 *)(param_1 + 0x28);
  uStack_70 = *(undefined4 *)(param_1 + 0x2c);
  uStack_6c = *(undefined4 *)(param_1 + 0x30);
  FUN_140335da4(&local_60);
  *(undefined8 *)(param_1 + 0x24) = local_60;
  *(undefined8 *)(param_1 + 0x2c) = uStack_58;
  *(float *)(param_1 + 0x34) = -1.0 / *(float *)(param_2 + 0x2d4);
  fVar4 = *(float *)(param_2 + 0x2d8);
  fVar5 = *(float *)(param_2 + 0x2e8) * fVar4;
  fVar6 = *(float *)(param_2 + 0x2e4) * fVar4;
  fVar7 = *(float *)(param_2 + 0x2e0) * fVar4;
  fVar4 = fVar4 * *(float *)(param_2 + 0x2dc);
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1e+38 <= fVar7) {
    fVar7 = 1e+38;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1e+38 <= fVar6) {
    fVar6 = 1e+38;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (1e+38 <= fVar5) {
    fVar5 = 1e+38;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x38) = fVar4;
  *(float *)(param_1 + 0x3c) = fVar7;
  *(float *)(param_1 + 0x40) = fVar6;
  *(float *)(param_1 + 0x44) = fVar5;
  local_88 = *(undefined4 *)(param_1 + 0x38);
  uStack_84 = *(undefined4 *)(param_1 + 0x3c);
  uStack_80 = *(undefined4 *)(param_1 + 0x40);
  uStack_7c = *(undefined4 *)(param_1 + 0x44);
  FUN_140335da4(&local_60);
  *(undefined8 *)(param_1 + 0x38) = local_60;
  *(undefined8 *)(param_1 + 0x40) = uStack_58;
  fVar4 = *(float *)(param_2 + 0x2ec);
  fVar5 = *(float *)(param_2 + 0x2fc) * fVar4;
  fVar6 = *(float *)(param_2 + 0x2f8) * fVar4;
  fVar7 = *(float *)(param_2 + 0x2f4) * fVar4;
  fVar4 = fVar4 * *(float *)(param_2 + 0x2f0);
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1e+38 <= fVar7) {
    fVar7 = 1e+38;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1e+38 <= fVar6) {
    fVar6 = 1e+38;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (1e+38 <= fVar5) {
    fVar5 = 1e+38;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x58) = fVar4;
  *(float *)(param_1 + 0x5c) = fVar7;
  *(float *)(param_1 + 0x60) = fVar6;
  *(float *)(param_1 + 100) = fVar5;
  local_98 = *(undefined4 *)(param_1 + 0x58);
  uStack_94 = *(undefined4 *)(param_1 + 0x5c);
  uStack_90 = *(undefined4 *)(param_1 + 0x60);
  uStack_8c = *(undefined4 *)(param_1 + 100);
  FUN_140335da4(&local_60);
  *(undefined8 *)(param_1 + 0x58) = local_60;
  *(undefined8 *)(param_1 + 0x60) = uStack_58;
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x300);
  *(float *)(param_1 + 0x68) = -1.0 / *(float *)(param_2 + 0x304);
  fVar4 = *(float *)(param_2 + 0x308);
  fVar5 = *(float *)(param_2 + 0x318) * fVar4;
  fVar6 = *(float *)(param_2 + 0x314) * fVar4;
  fVar7 = *(float *)(param_2 + 0x310) * fVar4;
  fVar4 = fVar4 * *(float *)(param_2 + 0x30c);
  if (1e+38 <= fVar4) {
    fVar4 = 1e+38;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (1e+38 <= fVar7) {
    fVar7 = 1e+38;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (1e+38 <= fVar6) {
    fVar6 = 1e+38;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (1e+38 <= fVar5) {
    fVar5 = 1e+38;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x70) = fVar4;
  *(float *)(param_1 + 0x74) = fVar7;
  *(float *)(param_1 + 0x78) = fVar6;
  *(float *)(param_1 + 0x7c) = fVar5;
  local_a8 = *(undefined4 *)(param_1 + 0x70);
  uStack_a4 = *(undefined4 *)(param_1 + 0x74);
  uStack_a0 = *(undefined4 *)(param_1 + 0x78);
  uStack_9c = *(undefined4 *)(param_1 + 0x7c);
  FUN_140335da4(&local_60);
  *(undefined8 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x78) = uStack_58;
  if ((*(float *)(param_2 + 0x324) <= 0.0) || (fVar4 = *(float *)(param_2 + 800), fVar4 <= 0.0)) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    fVar8 = *(float *)(param_2 + 0x31c);
    fVar5 = fVar4 / *(float *)(param_2 + 0x324);
    *(float *)(param_1 + 0x80) = fVar8;
    *(float *)(param_1 + 0x88) = fVar5;
    fVar8 = fVar8 * fVar5;
    *(float *)(param_1 + 0x90) = -fVar5;
    *(float *)(param_1 + 0x84) = fVar4 - fVar8;
    fVar8 = fVar8 + fVar4;
  }
  *(float *)(param_1 + 0x8c) = fVar8;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x340);
  FUN_140335f22(param_1,param_2 + 0x240,*(undefined1 *)(param_2 + 0x2a8));
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140335da4 FUN_140335da4 body=380 status=ok
// SIG undefined FUN_140335da4(void)

float * FUN_140335da4(float *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_14029dc1a();
  if (*(char *)(lVar4 + 0x140) == '\x01') {
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    fVar8 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = fVar6;
    param_1[2] = fVar7;
    param_1[3] = fVar8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
  }
  fVar6 = expf(-param_2[2]);
  fVar7 = expf(-param_2[1]);
  fVar8 = expf(-*param_2);
  local_88 = CONCAT44(fVar7,fVar8);
  uStack_80 = CONCAT44(0x3f800000,fVar6);
  uVar5 = FUN_1467a8060();
  FUN_1467a80dc(uVar5,&local_98,&local_88);
  local_88 = local_98;
  uStack_80 = uStack_90;
  uVar5 = uStack_80;
  uStack_80._0_4_ = (float)uStack_90;
  dVar1 = 1e-05;
  if (1e-05 <= (double)(float)uStack_80) {
    dVar1 = (double)(float)uStack_80;
  }
  uStack_80 = uVar5;
  dVar1 = log(dVar1);
  dVar2 = 1e-05;
  if (1e-05 <= (double)local_88._4_4_) {
    dVar2 = (double)local_88._4_4_;
  }
  dVar2 = log(dVar2);
  dVar3 = 1e-05;
  if (1e-05 <= (double)(float)local_88) {
    dVar3 = (double)(float)local_88;
  }
  dVar3 = log(dVar3);
  *param_1 = -(float)dVar3;
  param_1[1] = -(float)dVar2;
  param_1[2] = -(float)dVar1;
  param_1[3] = 1.0;
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140335f22 FUN_140335f22 body=160 status=ok
// SIG undefined FUN_140335f22(void)

void FUN_140335f22(double *param_1,longlong param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  if (param_3 == '\0') {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = (double)-*(float *)(param_1 + 3);
    return;
  }
  if (param_3 == '\x01') {
    dVar1 = *(double *)(param_2 + 0x30);
    dVar2 = *(double *)(param_2 + 0x28);
    *param_1 = *(double *)(param_2 + 0x20) * 9.999999747378752e-06 + 0.0;
    param_1[1] = dVar2 * 9.999999747378752e-06 + 0.0;
    param_1[2] = dVar1 * 9.999999747378752e-06 - (double)*(float *)(param_1 + 3);
  }
  else if (param_3 == '\x02') {
    dVar1 = *(double *)(param_2 + 0x30);
    dVar2 = *(double *)(param_2 + 0x28);
    *param_1 = *(double *)(param_2 + 0x20) * 9.999999747378752e-06;
    param_1[1] = dVar2 * 9.999999747378752e-06;
    param_1[2] = dVar1 * 9.999999747378752e-06;
    return;
  }
  return;
}



// FUNCTION 140335fc2 FUN_140335fc2 body=93 status=ok
// SIG undefined FUN_140335fc2(void)

void FUN_140335fc2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
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
    FUN_140336020();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140336020 FUN_140336020 body=469 status=ok
// SIG undefined FUN_140336020(void)

void FUN_140336020(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140336150:
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
LAB_14033618d:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14033608a;
LAB_14033607f:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14033608a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001403360b7;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14033610d:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14033618d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140336150;
code_r0x0001403360b7:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14033610d;
    }
  }
  goto LAB_14033607f;
}



// FUNCTION 1403361f6 FUN_1403361f6 body=114 status=ok
// SIG undefined FUN_1403361f6(void)

undefined8 * FUN_1403361f6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_149f5fd00;
  puVar2[2] = uVar4;
  puVar2[3] = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar1;
  return puVar2;
}



// FUNCTION 140336268 FUN_140336268 body=53 status=ok
// SIG undefined FUN_140336268(void)

void FUN_140336268(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_149f613b0;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  return;
}



// FUNCTION 14033629e FUN_14033629e body=80 status=ok
// SIG undefined FUN_14033629e(void)

void FUN_14033629e(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  uVar1 = FUN_1403363fe();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1403362f0(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403362f0 FUN_1403362f0 body=270 status=ok
// SIG undefined FUN_1403362f0(void)

ulonglong FUN_1403362f0(longlong param_1,uint param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar2 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x418);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar5 * 0x60,
            *(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar5 * 0x60) != param_2) {
        iVar5 = *(int *)(lVar2 + 0x58);
        if (iVar5 == -1) {
          return 0;
        }
      }
      if ((longlong *)(lVar2 + 8) == (longlong *)0x0 || lVar2 == 0) {
        return 0;
      }
      if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
        uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = lVar2 + 0x40;
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x48);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x50) - 1U & (uVar3 >> 0x10 ^ uVar3))
                                 * 4);
        if (iVar5 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)iVar5 * 0x18);
            if (*puVar1 == param_3) {
              if (puVar1 == (ulonglong *)0x0) {
                return 0;
              }
              return puVar1[1];
            }
            iVar5 = (int)puVar1[2];
          } while (iVar5 != -1);
          return 0;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1403363fe FUN_1403363fe body=423 status=ok
// SIG undefined FUN_1403363fe(void)

longlong FUN_1403363fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_2;
  if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    lVar10 = param_1 + 0x2c8;
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x2d0);
    }
    iVar7 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x2d8) - 1U &
                              (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar7 * 0x18);
        if (*plVar1 == lVar4) {
          if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
             (lVar10 = plVar1[1], lVar10 != 0)) goto LAB_1403364c0;
          break;
        }
        iVar7 = (int)plVar1[2];
      } while (iVar7 != -1);
    }
  }
  if (*(int *)(param_1 + 0xa8) < 1) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar9);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        puVar2 = *(undefined4 **)(lVar5 + 8);
        puVar11 = &DAT_14c9485f0;
        if (puVar2 != (undefined4 *)0x0) {
          puVar11 = puVar2;
        }
        if (DAT_14c947fe0 == 0) {
          lVar4 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar4);
          DAT_14c947fe0 = lVar4;
        }
        FUN_140045924(DAT_14c947fe0,&local_50,puVar11,1);
        lVar4 = *param_2;
        lVar5 = local_50;
      }
      if (lVar5 == lVar4) {
        lVar10 = lVar9 + *(longlong *)(param_1 + 0xa0);
        break;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (lVar8 < *(int *)(param_1 + 0xa8));
  }
LAB_1403364c0:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1403365a6 FUN_1403365a6 body=222 status=ok
// SIG undefined FUN_1403365a6(void)

ulonglong FUN_1403365a6(longlong param_1,uint *param_2,uint *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong unaff_R15;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    uVar1 = param_5 + 3 & 0xfffffffc;
    uVar2 = param_4 + 3 & 0xfffffffc;
    if (*(char *)(param_1 + 0x15) == '\0') {
      uVar1 = param_5;
      uVar2 = param_4;
    }
    iVar3 = FUN_14033672e(param_1,0,uVar2,uVar1,0);
    if (iVar3 == -1) {
      unaff_R15 = 0;
      iVar3 = FUN_14033672e(param_1,0,uVar2,uVar1,1);
      if (iVar3 == -1) goto LAB_14033666c;
    }
    lVar5 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
    }
    lVar4 = (longlong)iVar3;
    *(undefined1 *)(lVar5 + 0x10 + lVar4 * 0x14) = 1;
    *param_2 = (uint)*(ushort *)(lVar5 + 8 + lVar4 * 0x14);
    *param_3 = (uint)*(ushort *)(lVar5 + 10 + lVar4 * 0x14);
    FUN_140336684(param_1,uVar2 + *(ushort *)(lVar5 + 8 + lVar4 * 0x14),
                  uVar1 + *(ushort *)(lVar5 + 10 + lVar4 * 0x14));
  }
  unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),1);
LAB_14033666c:
  return unaff_R15 & 0xffffffff;
}



// FUNCTION 140336684 FUN_140336684 body=170 status=ok
// SIG undefined FUN_140336684(void)

void FUN_140336684(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x14) == '\x01') {
    uVar1 = (ulonglong)((param_2 - 1) + (uint)(param_2 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar4 <= *(uint *)(param_1 + 8)) {
      uVar4 = *(uint *)(param_1 + 8);
    }
    uVar1 = (ulonglong)((param_3 - 1) + (uint)(param_3 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = 1 << ((byte)lVar2 & 0x1f);
    if (uVar5 <= *(uint *)(param_1 + 0xc)) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar5;
    if (*(int *)(param_1 + 0x10) == 1) {
      if (uVar4 < uVar5 * 2) {
        uVar4 = uVar5 * 2;
      }
      *(uint *)(param_1 + 8) = uVar4;
      uVar3 = uVar4 >> 1;
      if (uVar4 >> 1 <= uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) != 2) {
        return;
      }
      if (uVar4 < uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)(param_1 + 8) = uVar4;
      uVar3 = uVar4;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) < param_2) {
      uVar4 = param_2;
    }
    *(uint *)(param_1 + 8) = uVar4;
    uVar3 = *(uint *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0xc) < param_3) {
      uVar3 = param_3;
    }
  }
  *(uint *)(param_1 + 0xc) = uVar3;
  return;
}



// FUNCTION 14033672e FUN_14033672e body=930 status=ok
// SIG undefined FUN_14033672e(void)

ulonglong FUN_14033672e(longlong param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  
  uVar13 = (ulonglong)param_2;
  lVar1 = param_1 + 0x18;
  while( true ) {
    while( true ) {
      lVar17 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar17 = lVar1;
      }
      lVar3 = (longlong)(int)uVar13;
      piVar2 = (int *)(lVar17 + lVar3 * 0x14);
      if (*piVar2 == -1) break;
      uVar13 = (ulonglong)(uint)piVar2[1];
      uVar4 = FUN_14033672e(param_1,*piVar2,param_3,param_4,param_5);
      if ((int)uVar4 != -1) {
        return uVar4;
      }
    }
    if ((char)piVar2[4] != '\0') {
      return 0xffffffff;
    }
    uVar11 = *(ushort *)(lVar17 + 0xc + lVar3 * 0x14);
    if (uVar11 < param_3) {
      return 0xffffffff;
    }
    uVar12 = *(ushort *)(lVar17 + 0xe + lVar3 * 0x14);
    if (uVar12 < param_4) break;
    uVar7 = *(ushort *)(lVar17 + 8 + lVar3 * 0x14);
    uVar10 = *(ushort *)(lVar17 + 10 + lVar3 * 0x14);
    uVar14 = uVar7 + param_3;
    if (param_5 == '\0') {
      if (*(uint *)(param_1 + 8) < uVar14) {
        return 0xffffffff;
      }
      uVar14 = uVar10 + param_4;
      bVar18 = uVar14 < *(uint *)(param_1 + 0xc);
      bVar19 = uVar14 == *(uint *)(param_1 + 0xc);
    }
    else {
      uVar8 = uVar10 + param_4;
      if (*(char *)(param_1 + 0x14) == '\x01') {
        uVar4 = (ulonglong)((uVar14 - 1) + (uint)(uVar14 == 0)) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar16 = 1 << ((byte)lVar17 & 0x1f);
        uVar4 = (ulonglong)((uVar8 - 1) + (uint)(uVar8 == 0)) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar9 = 1 << ((byte)lVar17 & 0x1f);
        uVar14 = uVar16;
        if (*(int *)(param_1 + 0x10) == 1) {
          uVar14 = 2 << ((byte)lVar17 & 0x1f);
          if (uVar14 <= uVar16) {
            uVar14 = uVar16;
          }
          uVar8 = uVar14 >> 1;
          if (uVar14 >> 1 <= uVar9) {
            uVar8 = uVar9;
          }
        }
        else {
          uVar8 = uVar9;
          if ((*(int *)(param_1 + 0x10) == 2) && (uVar8 = uVar16, uVar16 < uVar9)) {
            uVar14 = uVar9;
            uVar8 = uVar9;
          }
        }
      }
      if (0x4000 < uVar14) {
        return 0xffffffff;
      }
      bVar18 = uVar8 < 0x4000;
      bVar19 = uVar8 == 0x4000;
    }
    if (!bVar18 && !bVar19) {
      return 0xffffffff;
    }
    if (uVar12 == param_4 && uVar11 == param_3) {
      return uVar13;
    }
    iVar15 = *(int *)(param_1 + 0x88);
    lVar17 = (longlong)iVar15;
    uVar14 = iVar15 + 1;
    *piVar2 = iVar15;
    *(uint *)(param_1 + 0x88) = uVar14;
    if (uVar12 - param_4 < uVar11 - param_3) {
      if (*(uint *)(param_1 + 0x8c) < uVar14) {
        FUN_147310a24(lVar1,iVar15);
      }
      lVar5 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar5 = lVar1;
      }
      *(undefined8 *)(lVar5 + lVar17 * 0x14) = 0xffffffffffffffff;
      *(ushort *)(lVar5 + 8 + lVar17 * 0x14) = uVar7;
      *(ushort *)(lVar5 + 10 + lVar17 * 0x14) = uVar10;
      sVar6 = (short)param_3;
      *(short *)(lVar5 + 0xc + lVar17 * 0x14) = sVar6;
      *(ushort *)(lVar5 + 0xe + lVar17 * 0x14) = uVar12;
      *(undefined1 *)(lVar5 + 0x10 + lVar17 * 0x14) = 0;
      lVar17 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar17 = lVar1;
      }
      iVar15 = *(int *)(param_1 + 0x88);
      *(int *)(lVar17 + 4 + lVar3 * 0x14) = iVar15;
      uVar11 = uVar11 - sVar6;
      uVar7 = uVar7 + sVar6;
    }
    else {
      if (*(uint *)(param_1 + 0x8c) < uVar14) {
        FUN_147310a24(lVar1,iVar15);
      }
      lVar5 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar5 = lVar1;
      }
      *(undefined8 *)(lVar5 + lVar17 * 0x14) = 0xffffffffffffffff;
      *(ushort *)(lVar5 + 8 + lVar17 * 0x14) = uVar7;
      *(ushort *)(lVar5 + 10 + lVar17 * 0x14) = uVar10;
      *(ushort *)(lVar5 + 0xc + lVar17 * 0x14) = uVar11;
      sVar6 = (short)param_4;
      *(short *)(lVar5 + 0xe + lVar17 * 0x14) = sVar6;
      *(undefined1 *)(lVar5 + 0x10 + lVar17 * 0x14) = 0;
      lVar17 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar17 = lVar1;
      }
      iVar15 = *(int *)(param_1 + 0x88);
      *(int *)(lVar17 + 4 + lVar3 * 0x14) = iVar15;
      uVar12 = uVar12 - sVar6;
      uVar10 = uVar10 + sVar6;
    }
    *(uint *)(param_1 + 0x88) = iVar15 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar15 + 1U) {
      FUN_147310a24(lVar1,iVar15);
    }
    lVar17 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar17 = lVar1;
    }
    lVar5 = (longlong)iVar15;
    *(undefined8 *)(lVar17 + lVar5 * 0x14) = 0xffffffffffffffff;
    *(ushort *)(lVar17 + 8 + lVar5 * 0x14) = uVar7;
    *(ushort *)(lVar17 + 10 + lVar5 * 0x14) = uVar10;
    *(ushort *)(lVar17 + 0xc + lVar5 * 0x14) = uVar11;
    *(ushort *)(lVar17 + 0xe + lVar5 * 0x14) = uVar12;
    *(undefined1 *)(lVar17 + 0x10 + lVar5 * 0x14) = 0;
    lVar17 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar17 = lVar1;
    }
    uVar13 = (ulonglong)*(uint *)(lVar17 + lVar3 * 0x14);
  }
  return 0xffffffff;
}



// FUNCTION 140336ad0 FUN_140336ad0 body=487 status=ok
// SIG undefined FUN_140336ad0(void)

void FUN_140336ad0(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (*(int *)(param_2 + 0x18) != -1) {
    if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x1c))) &&
        (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))) {
      piVar1 = (int *)(*plVar7 + 0x70);
      *piVar1 = *piVar1 + -1;
    }
    iVar5 = *(int *)(param_1 + 0x528);
    if ((longlong)iVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x520);
      iVar8 = 1;
      lVar10 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar10) == param_2) {
          if (iVar8 != 0) {
            iVar8 = iVar5 - iVar8;
            if (iVar8 != 0) {
              iVar9 = 1;
              if (iVar8 < 1) {
                iVar9 = iVar8;
              }
              memmove((void *)(lVar4 + (lVar6 >> 0x20) * 8),
                      (void *)(lVar4 + (longlong)(iVar5 - iVar9) * 8),(longlong)iVar9 << 3);
              iVar5 = *(int *)(param_1 + 0x528);
            }
            *(int *)(param_1 + 0x528) = iVar5 + -1;
            FUN_1403370e4(param_1 + 0x520);
          }
          break;
        }
        lVar6 = lVar6 + 0x100000000;
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar5 << 3 != lVar10);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x4fc);
      *piVar1 = *piVar1 + -1;
    }
    if ((byte)(*(char *)(param_2 + 8) - 3U) < 2) {
      FUN_1403373b6(param_1,0);
      FUN_140336cb8(param_2,0);
    }
    puVar3 = *(undefined8 **)(param_2 + 0x7a0);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0x7a0) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)(param_2 + 0x7a8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0x7a8) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (*(undefined8 **)(param_2 + 0x7b0) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x7b0) = 0;
      *(undefined8 *)(param_2 + 0x7b0) = 0;
    }
    if (*(char *)(param_2 + 8) != '\0') {
      FUN_144962840(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140336cb8 FUN_140336cb8 body=930 status=ok
// SIG undefined FUN_140336cb8(void)

void FUN_140336cb8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  LARGE_INTEGER *pLVar9;
  longlong *plVar10;
  longlong *plVar11;
  LARGE_INTEGER LVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  LARGE_INTEGER local_78 [4];
  LARGE_INTEGER *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(local_78);
  plVar2 = (longlong *)(param_1 + 0x7a0);
  if ((*(longlong *)(param_1 + 0x7a0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x7a0) + 0xa0) & 1) != 0)) {
    bVar6 = false;
  }
  else {
    if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar3 = *(uint *)(param_1 + 0x48), -1 < (int)uVar3))
         && ((int)uVar3 < DAT_14c9647dc)) &&
        ((plVar10 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x4c))))) &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
      FUN_140288b94();
    }
    LVar12.QuadPart = -1;
    bVar5 = true;
    if (((*(longlong *)(param_1 + 0x30) == 0) || (DAT_14caf6068 < 1)) ||
       (((DAT_14c7616fc & 1) == 0 || (lVar8 = FUN_14005c7aa(), lVar8 == 0)))) {
      lVar8 = 0;
    }
    else {
      QueryPerformanceCounter(local_78);
      bVar5 = false;
      LVar12 = local_78[0];
    }
    if (DAT_14cb43854 < 1) {
      FUN_14009fd82(DAT_14c82b500,plVar2,0x101);
    }
    else {
      auVar13._0_8_ = (double)DAT_14cb43854 * 10.0 + 0.5;
      auVar13._8_8_ = 0;
      auVar13 = roundpd(auVar13,auVar13,1);
      local_80 = (undefined8 *)*plVar2;
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = *(int *)(local_80 + 1) + 1;
        UNLOCK();
      }
      local_58 = (LARGE_INTEGER *)0x0;
      local_50 = 1;
      FUN_144727e94(local_78,1,0);
      pLVar9 = local_58;
      if (local_58 == (LARGE_INTEGER *)0x0) {
        pLVar9 = local_78;
      }
      FUN_144727e6e(pLVar9,&local_80,1);
      iVar7 = FUN_1467a7b7a(local_78,(longlong)auVar13._0_8_);
      pLVar9 = local_58;
      if (local_58 == (LARGE_INTEGER *)0x0) {
        pLVar9 = local_78;
      }
      FUN_144717c65(pLVar9,local_50);
      if (local_58 != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_80 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_80)(local_80,1);
        }
      }
      if (iVar7 == -1) {
        FUN_1481f547a(param_1);
      }
    }
    bVar6 = true;
    if ((LVar12.QuadPart != -1) && (QueryPerformanceCounter(local_78), !bVar5)) {
      *(longlong *)(lVar8 + 0x30) =
           *(longlong *)(lVar8 + 0x30) + (local_78[0].QuadPart - (longlong)LVar12);
    }
  }
  plVar10 = (longlong *)(param_1 + 0x7a8);
  if ((*(longlong *)(param_1 + 0x7a8) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x7a8) + 0xa0) & 1) != 0)) {
    if (!bVar6) goto LAB_140336f21;
  }
  else {
    if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar3 = *(uint *)(param_1 + 0x48), -1 < (int)uVar3))
        && ((int)uVar3 < DAT_14c9647dc)) &&
       (((plVar11 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x4c))) &&
        (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))) {
      FUN_140288b94();
    }
    if (((*(longlong *)(param_1 + 0x30) == 0) || (DAT_14caf6068 < 1)) ||
       (((DAT_14c7616fc & 1) == 0 || (lVar8 = FUN_14005c7aa(), lVar8 == 0)))) {
      FUN_14009fd82(DAT_14c82b500,plVar10,0x101);
    }
    else {
      QueryPerformanceCounter(local_78);
      LVar12 = local_78[0];
      FUN_14009fd82(DAT_14c82b500,plVar10,0x101);
      if (LVar12.QuadPart != -1) {
        QueryPerformanceCounter(local_78);
        *(longlong *)(lVar8 + 0x30) =
             *(longlong *)(lVar8 + 0x30) + (local_78[0].QuadPart - (longlong)LVar12);
      }
    }
  }
  QueryPerformanceCounter(local_78);
LAB_140336f21:
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    *plVar2 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)*plVar10;
  if (puVar4 != (undefined8 *)0x0) {
    *plVar10 = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14033705c FUN_14033705c body=136 status=ok
// SIG undefined FUN_14033705c(void)

void FUN_14033705c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  param_1 = param_1 + (ulonglong)*(byte *)(param_2 + 8) * 0x10;
  plVar4 = (longlong *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = ~uVar1 + iVar2;
  if (iVar3 != 0) {
    iVar5 = 1;
    if (iVar3 < 1) {
      iVar5 = iVar3;
    }
    memmove((void *)(*plVar4 + (longlong)(int)uVar1 * 8),
            (void *)(*plVar4 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
    iVar2 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar2 + -1;
  FUN_1403370e4(plVar4);
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x40))) {
    *(uint *)(*(longlong *)(*plVar4 + (ulonglong)uVar1 * 8) + 0x18) = uVar1;
  }
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 1403370e4 FUN_1403370e4 body=367 status=ok
// SIG undefined FUN_1403370e4(void)

void FUN_1403370e4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403371ae;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1403371ae:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 140337254 FUN_140337254 body=353 status=ok
// SIG undefined FUN_140337254(void)

void FUN_140337254(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403372d9;
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
LAB_1403372d9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1403373b6 FUN_1403373b6 body=362 status=ok
// SIG undefined FUN_1403373b6(void)

void FUN_1403373b6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 local_60 [32];
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    plVar2 = (longlong *)(param_1 + 0x538);
    if ((*(byte *)(*(longlong *)(param_1 + 0x538) + 0xa0) & 1) == 0) {
      if (DAT_14cb43854 < 1) {
        FUN_14009fd82(DAT_14c82b500,plVar2,0x101);
      }
      else {
        auVar6._0_8_ = (double)DAT_14cb43854 * 10.0 + 0.5;
        auVar6._8_8_ = 0;
        auVar6 = roundpd(auVar6,auVar6,1);
        local_68 = (undefined8 *)*plVar2;
        if (local_68 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
          UNLOCK();
        }
        local_40 = (undefined1 *)0x0;
        local_38 = 1;
        FUN_144727e94(local_60,1,0);
        puVar5 = local_40;
        if (local_40 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        FUN_144727e6e(puVar5,&local_68,1);
        iVar4 = FUN_1467a7b7a(local_60,(longlong)auVar6._0_8_);
        puVar5 = local_40;
        if (local_40 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        FUN_144717c65(puVar5,local_38);
        if (local_40 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_68 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_68)(local_68,1);
          }
        }
        if (iVar4 == -1) {
          FUN_1481f689c(param_1);
        }
      }
    }
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      *plVar2 = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140337522 FUN_140337522 body=408 status=ok
// SIG undefined FUN_140337522(void)

void FUN_140337522(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  undefined4 local_70;
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (lVar6 == 0) goto LAB_14033758a;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar6 + 0x1c);
    if (2 < iVar1) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_68.QuadPart = 0x20100000001;
        uStack_60 = 0x30100000101;
        local_58 = DAT_14c7585c8;
        local_54 = DAT_14c7585c8 | 0x200;
        local_50 = DAT_14c7585c8 | 0x100;
        local_4c = DAT_14c7585c8 | 0x300;
        local_48 = 0;
        uStack_44 = 0x200;
        uStack_40 = 0x100;
        uStack_3c = 0x300;
        if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar1 - 3) * 4) == bVar4)
        goto LAB_1403376ae;
      }
    }
    QueryPerformanceCounter(&local_68);
    uStack_60 = 0xffffffffffffffff;
    FUN_140056092(lVar6,&local_68);
  }
  else {
LAB_1403376ae:
    FUN_140082318(lVar6);
  }
LAB_14033758a:
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  local_68.QuadPart = 0;
  uStack_60 = 0;
  FUN_144775d28(&local_68,1);
  uVar3 = uStack_60;
  lVar6 = (longlong)(int)uStack_60;
  uVar5 = (int)uStack_60 + 1;
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
  if (uStack_60._4_4_ < uVar5) {
    FUN_14741464c(&local_68,uVar3 & 0xffffffff);
  }
  *(undefined8 *)(local_68.QuadPart + lVar6 * 8) = uVar2;
  local_78.s = local_68.s;
  local_70 = (int)uStack_60;
  FUN_14007658c(&DAT_14ca850c8,&local_78,0);
  if (local_68.QuadPart != 0) {
    FUN_1400020a8();
  }
  FUN_1403376bc(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403376bc FUN_1403376bc body=157 status=ok
// SIG undefined FUN_1403376bc(void)

void FUN_1403376bc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x4d) == '\x01') {
    FUN_1472da16e(*(longlong *)(param_1 + 0x38) + 600,param_2);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0x3090) == 1) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (DAT_14ca4c9cc == 0) {
      if (*(int *)(lVar1 + 0x2a0) != -1) {
        FUN_144725486(lVar1 + 0x298);
      }
    }
    else if (*(int *)(lVar1 + 0x2a0) == -1) {
      FUN_14006bf18(lVar1 + 0x298,param_2);
    }
  }
  if ((*(char *)(param_1 + 0x4d) == '\x01') && (*(char *)(param_1 + 0x4c) == '\x01')) {
    FUN_1472d9f76(*(longlong *)(param_1 + 0x38) + 600,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x4c8));
    return;
  }
  return;
}



// FUNCTION 14033775a FUN_14033775a body=401 status=ok
// SIG undefined FUN_14033775a(void)

void FUN_14033775a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x20) << 5;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    do {
      FUN_1461182c0(DAT_14c98e618,&local_48,puVar7);
      *puVar7 = local_48;
      puVar7[1] = uStack_44;
      puVar7[2] = uStack_40;
      puVar7[3] = uStack_3c;
      puVar7 = puVar7 + 8;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  uVar4 = FUN_1403378ec(param_1 + 0x28);
  if ((int)uVar4 != 0) {
    do {
      lVar5 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + (uVar4 >> 0xe & 0x3ffff) * 8) + 8 +
               (ulonglong)((uint)uVar4 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar4 & 0xffffffff);
      if (lVar5 == 0) break;
      FUN_146a1e072(param_1,local_58,lVar5);
      plVar6 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_1469b2018(lVar5);
      FUN_1400020a8(lVar5);
      uVar4 = FUN_1403378ec(param_1 + 0x28);
    } while ((int)uVar4 != 0);
  }
  uVar4 = (ulonglong)*(int *)(param_1 + 0x20);
  if (0 < (longlong)uVar4) {
    plVar6 = (longlong *)(param_1 + 0x18);
    lVar5 = uVar4 << 5;
    do {
      lVar5 = lVar5 + -0x20;
      FUN_146a1d778(*plVar6 + lVar5);
      if (*(int *)(*plVar6 + 8 + lVar5) == 0) {
        FUN_146a4788a(plVar6,(int)uVar4 + -1);
        FUN_146a478f0(plVar6);
      }
      else {
        FUN_146a1d830(*plVar6 + lVar5);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403378ec FUN_1403378ec body=268 status=ok
// SIG undefined FUN_1403378ec(void)

uint FUN_1403378ec(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = *param_1;
  uVar5 = (uint)uVar2;
  while( true ) {
    if ((uVar2 & 0x3ffffff) == 0) {
      return 0;
    }
    uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    uVar6 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)((uVar5 & 0x3ffffff) >> 0xe) * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + uVar6 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    uVar2 = *param_1;
    uVar5 = (uint)uVar2;
  }
  *(undefined4 *)(lVar3 + uVar6 * 0x18 + 0x10) = 0;
  return uVar5 & 0x3ffffff;
}



// FUNCTION 1403379f8 FUN_1403379f8 body=722 status=ok
// SIG undefined FUN_1403379f8(void)

undefined8 * FUN_1403379f8(undefined8 *param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  iVar8 = (int)param_3[1];
  if (iVar8 < 0) {
LAB_140337c6b:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    plVar1 = param_1 + 1;
    FUN_140337ccc(plVar1);
    iVar8 = (int)param_3[1];
    local_68 = 0;
    uStack_60 = 0;
    if (iVar8 < 0) goto LAB_140337c6b;
    if (iVar8 != 0) {
      FUN_140337ccc(&local_68);
      lVar4 = param_3[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_3;
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar9);
          if (lVar3 != 0) {
            if (DAT_14cad3688 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144b223ce;
              local_90 = FUN_14081d0ea;
              local_98 = &LAB_1417963e0;
              local_a8 = &LAB_147a2f4c9;
              local_b0 = &LAB_1400ea6f8;
              local_b8 = L"Engine";
              local_c0 = 0x200000000000;
              local_c8 = 0x10000004;
              local_d0 = 0x10;
              local_d8 = 0x720;
              FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
            }
            if ((((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) &&
                (*(longlong *)(lVar3 + 0x5a8) != 0)) &&
               ((param_4 == 0 ||
                (((*(byte *)(lVar3 + 0x9d) & 1) != 0 &&
                 (cVar6 = FUN_1417be526(lVar3), cVar6 != '\0')))))) {
              iVar8 = *(int *)(param_1 + 2);
              *(uint *)(param_1 + 2) = iVar8 + 1U;
              if (*(uint *)((longlong)param_1 + 0x14) < iVar8 + 1U) {
                FUN_140c43e06(plVar1,iVar8);
              }
              uVar5 = uStack_60;
              *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar3;
              *(byte *)(lVar3 + 0x2d3) = *(byte *)(lVar3 + 0x2d3) | 2;
              if ((*(byte *)(lVar3 + 0x9c) & 2) != 0) {
                lVar10 = (longlong)(int)uStack_60;
                uVar7 = (int)uStack_60 + 1;
                uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
                if (uStack_60._4_4_ < uVar7) {
                  FUN_140c43e06(&local_68,uVar5 & 0xffffffff);
                }
                *(longlong *)(local_68 + lVar10 * 8) = lVar3;
              }
            }
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar9);
      }
    }
    if ((int)uStack_60 != 0) {
      local_78 = local_68;
      local_70 = (int)uStack_60;
      (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1);
      if (param_4 == 0) {
        local_88 = local_68;
        local_80 = (int)uStack_60;
        (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1);
      }
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140337ccc FUN_140337ccc body=315 status=ok
// SIG undefined FUN_140337ccc(void)

void FUN_140337ccc(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140337d36;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140337d36:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 140337e08 FUN_140337e08 body=60 status=ok
// SIG undefined FUN_140337e08(void)

void FUN_140337e08(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_140337e44(lVar1 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar1 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar1 + 0x51) != cVar2;
  return;
}



// FUNCTION 140337e44 FUN_140337e44 body=139 status=ok
// SIG undefined FUN_140337e44(void)

undefined1 FUN_140337e44(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0xac) != -1) {
    uVar1 = *param_3;
    goto LAB_140337e78;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar2 = FUN_140337ed0(param_2,*(undefined8 *)(param_1 + 8),&local_19);
LAB_140337ead:
    puVar3 = &local_19;
    if (cVar2 == '\0') goto LAB_140337e73;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      cVar2 = FUN_147f537f6(param_2,*(undefined8 *)(param_1 + 8),&local_19);
      goto LAB_140337ead;
    }
LAB_140337e73:
    puVar3 = param_3;
  }
  uVar1 = *puVar3;
LAB_140337e78:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140337ed0 FUN_140337ed0 body=1277 status=ok
// SIG undefined FUN_140337ed0(void)

/* WARNING: Removing unreachable block (ram,0x0001403381f7) */
/* WARNING: Removing unreachable block (ram,0x000140338215) */

bool FUN_140337ed0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined *puVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  char local_b8 [8];
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined1 local_98;
  int local_90 [2];
  int local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  int local_60;
  undefined4 uStack_5c;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar4 * 0x48);
        if (*plVar6 == param_2) goto LAB_140337f66;
        iVar4 = (int)plVar6[8];
      } while (iVar4 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140337f66:
  plVar13 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  if (plVar13 == (longlong *)0x0) goto LAB_14033802f;
  cVar1 = (char)param_1[0x20];
  if (cVar1 == '\x01') {
    if (param_1[0x21] == 0) goto LAB_140337f9c;
    local_b8[0] = '\x02';
    uVar5 = *(uint *)(param_1[0x21] + 0xc);
    local_b0 = (ulonglong)uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar4 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar4 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar4 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar4 = 0;
      }
      UNLOCK();
      uVar5 = (uint)local_b0;
      if (bVar17) {
        iVar4 = iVar12;
      }
    }
    local_b0._0_4_ = uVar5;
    local_b0 = CONCAT44(iVar4,(uint)local_b0);
LAB_1403380bd:
    local_90[0] = 0;
    if ((int)param_1[0x25] != 0) {
      uVar7 = FUN_1448174c4(local_90);
      FUN_1400e08b0(uVar7,DAT_14c9a3da0 + (longlong)(int)param_1[0x25] * 0x10 + -0x10);
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (((((*(int *)((longlong)param_1 + 0x10c) == 0) ||
            (uVar5 = *(uint *)(param_1 + 0x21), (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
          || ((lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar16 == 0
              || (*(int *)(lVar16 + 0x10) != *(int *)((longlong)param_1 + 0x10c))))) ||
         ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_140337f9c;
      local_b8[0] = '\x02';
      local_b0 = param_1[0x21];
      goto LAB_1403380bd;
    }
    if (((cVar1 == '\x03') && (lVar16 = param_1[0x21], lVar16 != 0)) &&
       ((plVar6 = (longlong *)param_1[0x22], plVar6 != (longlong *)0x0 && (0 < (int)plVar6[1])))) {
      local_b8[0] = '\x03';
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      local_a0 = param_1[0x23];
      local_98 = (undefined1)param_1[0x24];
      local_b0 = lVar16;
      local_a8 = plVar6;
      goto LAB_1403380bd;
    }
LAB_140337f9c:
    uVar7 = FUN_14030ac4c(param_1);
    local_b8[0] = '\0';
    local_90[0] = 0;
    FUN_1456bb102(local_b8,uVar7);
  }
  piVar11 = &local_88;
  FUN_1447c3578(plVar13,piVar11,local_b8);
  if (local_68 == 1) {
    bVar17 = local_88 != 0;
    uVar5 = 1;
  }
  else {
    piVar15 = &local_60;
    FUN_1400b56fe(piVar15,&local_88,1);
    bVar17 = local_60 != 0;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_48) {
        piVar15 = (int *)CONCAT44(uStack_5c,local_60);
      }
      (*pcVar2)(piVar15);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(CONCAT44(uStack_5c,local_60));
    }
    bVar17 = local_40 != 0 && bVar17;
    uVar5 = (uint)local_68;
  }
  *param_3 = bVar17;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_70) {
      piVar11 = (int *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar2)(piVar11);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  lVar16 = DAT_14c9a3da0;
  if ((longlong)local_90[0] != 0) {
    lVar14 = (longlong)local_90[0] + -1;
    lVar10 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar16 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar16 = DAT_14c9a3da0;
    iVar4 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar4;
    }
    *(undefined4 *)(lVar16 + lVar10) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar16 + 4 + lVar10) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar12 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar12 = iVar4;
    }
    bVar3 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar4;
    *(uint *)(puVar9 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_90[0] = 0;
  }
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar11 = (int *)((longlong)local_a8 + 0xc);
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (*piVar11 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
LAB_14033802f:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return plVar13 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403383ce FUN_1403383ce body=199 status=ok
// SIG undefined FUN_1403383ce(void)

ulonglong FUN_1403383ce(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong unaff_RBX;
  
  cVar2 = (**(code **)(*param_1 + 0x700))();
  if (cVar2 == '\0') {
    if ((int)param_1[0xce0] == 0) {
LAB_140338438:
      cVar2 = FUN_140338496(param_1 + 0xc1d,0);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if ((cVar2 != '\0') ||
         ((0 < (int)param_1[0xc32] && ((*(byte *)(param_1[0xc31] + 0x68) & 2) != 0))))
      goto LAB_14033847c;
    }
LAB_140338462:
    if (*(char *)((longlong)param_1 + 0x73eb) != '\x01') {
      uVar3 = FUN_14033855a(param_1 + 0x111a);
      unaff_RBX = (ulonglong)uVar3;
      goto LAB_14033847c;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x670c) == 0) {
      plVar1 = param_1 + 0x76c;
      cVar2 = (**(code **)(param_1[0x76c] + 0x50))(plVar1);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if ((cVar2 != '\0') || (cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1), cVar2 != '\0'))
      goto LAB_14033847c;
    }
    if ((int)param_1[0xce0] != 0) goto LAB_140338462;
    if (((int)param_1[0xc32] < 1) || ((*(byte *)(param_1[0xc31] + 0x60) & 1) == 0))
    goto LAB_140338438;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_14033847c:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 140338496 FUN_140338496 body=196 status=ok
// SIG undefined FUN_140338496(void)

byte FUN_140338496(longlong param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0xa8) < 1) {
    bVar3 = 0;
  }
  else {
    lVar4 = 0x20;
    lVar5 = 0;
    bVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + lVar4);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
LAB_1403384e0:
        bVar2 = *(byte *)(lVar1 + 0xbd8);
        if ((((int)(uint)bVar2 < *(int *)(lVar1 + 0xbf0)) &&
            (*(longlong *)
              (*(longlong *)(lVar1 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) !=
             0)) && ((*(uint *)(*(longlong *)(lVar1 + 0xbe8) +
                               (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8) >> (param_2 & 0x1f) &
                     1) != 0)) {
          bVar2 = FUN_1402273fc(lVar1);
          bVar3 = bVar3 | bVar2;
        }
      }
      else if (lVar1 != 0) goto LAB_1403384e0;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x170;
    } while (lVar5 < *(int *)(param_1 + 0xa8));
  }
  return bVar3 & 1;
}



// FUNCTION 14033855a FUN_14033855a body=161 status=ok
// SIG undefined FUN_14033855a(void)

undefined1 FUN_14033855a(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_140338614();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140338614();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      lVar5 = 0;
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      goto LAB_1403385b6;
    }
  }
  lVar5 = 0;
LAB_1403385b6:
  if ((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong **)(param_1 + 0x40) == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
    uVar1 = 0;
    if ((lVar5 != 0) && (lVar6 != 0)) {
      if (*(char *)(lVar5 + 0x18) == '\0') {
        uVar1 = *(undefined1 *)(lVar6 + 0x4a0);
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



// FUNCTION 140338614 FUN_140338614 body=228 status=ok
// SIG undefined FUN_140338614(void)

longlong FUN_140338614(void)

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
  if (DAT_14cb9fcb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b87c25;
    local_40 = FUN_1465a7174;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"Carrier",&DAT_14cb9fcb0,&DAT_148b87c24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fcb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403386fa FUN_1403386fa body=235 status=ok
// SIG undefined FUN_1403386fa(void)

void FUN_1403386fa(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  float local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14033983a(*(undefined8 *)(param_1 + 0x58));
  if (param_3[2] != 0) {
    uVar1 = FUN_1403387e6(*(longlong *)(param_1 + 0x40) + 0xdb0,param_2);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_68 = (float)exp2f(*(uint *)(DAT_14ca5bad0 + 4) ^ 0x80000000);
    local_68 = local_68 * DAT_14cb01098;
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 1000);
    local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x3f0);
    local_60 = uVar1;
    uVar2 = FUN_144962c38(uVar2,param_2);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14033889c(*(longlong *)(param_1 + 0x70),param_2,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403387e6 FUN_1403387e6 body=182 status=ok
// SIG undefined FUN_1403387e6(void)

undefined8 * FUN_1403387e6(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(*param_1 + 0x60) == '\x01') {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 6;
    if (*(undefined8 **)(param_2 + 0x78) < puVar2) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x40);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar2 = puVar3 + 6;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar2;
    *puVar3 = &PTR_FUN_14a2f0fd8;
    puVar3[1] = param_1;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    iVar1 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar1 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar1);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar1 * 8) = puVar3;
    puVar3 = puVar3 + 1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 14033889c FUN_14033889c body=1602 status=ok
// SIG undefined FUN_14033889c(void)

void FUN_14033889c(undefined8 *param_1,longlong param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong local_88;
  undefined8 **local_80;
  ulonglong *local_78;
  longlong local_70;
  int local_68;
  undefined1 local_5c [12];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 2) == 0) goto LAB_140338c15;
  lVar11 = *(longlong *)*param_1;
  uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  param_3 = param_3 & *(byte *)(lVar11 + 0x495);
  if ((*(longlong *)(lVar11 + 0x308) == 0) ||
     (puVar12 = *(undefined8 **)(lVar11 + 0x300), puVar12 == (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
    if (param_3 == 0) {
      FUN_144740518();
    }
    uVar10 = 0;
  }
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar13 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
    uVar10 = uVar10 & 0xffffffff;
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar13 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar7;
  *puVar13 = &PTR_FUN_14a2f0fe0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  iVar5 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
  local_8c = (uint)uVar10;
  if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar5);
    uVar10 = (ulonglong)local_8c;
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar13;
  param_1[3] = puVar13 + 1;
  if ((char)uVar10 == '\0') {
    LOCK();
    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
    UNLOCK();
  }
  local_80 = &local_50;
  local_78 = &local_48;
  local_50 = puVar12;
  FUN_140338ee0(&local_70);
  if (param_3 == 0) {
    if (local_68 != 0) {
      FUN_142972845(&local_70,0x7fffffffffffffff);
    }
LAB_140338d87:
    FUN_1449ee2a2(local_5c,1,0x40000010);
    FUN_142fd9172(param_1);
    FUN_1449ee22a(local_5c);
LAB_140338dac:
    puVar13 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    if (bVar2 == 0) {
      if ((longlong)local_68 != 0) {
        lVar11 = 0;
        do {
          if ((*(longlong *)(local_70 + lVar11) != 0) &&
             ((*(byte *)(*(longlong *)(local_70 + lVar11) + 0xa0) & 1) == 0)) goto LAB_1403389cb;
          lVar11 = lVar11 + 8;
        } while ((longlong)local_68 * 8 != lVar11);
      }
      goto LAB_140338d87;
    }
LAB_1403389cb:
    puVar7 = TlsGetValue(DAT_14c896140);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar7);
    }
    puVar13 = (undefined8 *)puVar7[1];
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = (undefined8 *)*puVar7;
      if (puVar13 == (undefined8 *)0x0) {
        uVar6 = FUN_14470efbc(&DAT_14c896180);
        if (uVar6 == 0) {
          puVar7[1] = 0;
        }
        else {
          puVar13 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar6 >> 0xe) * 8) + 8 +
                     (ulonglong)(uVar6 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar6);
          puVar7[1] = puVar13;
          if (puVar13 != (undefined8 *)0x0) goto LAB_140338ce8;
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar7[1] = puVar13;
        iVar5 = 0xff;
        do {
          puVar9 = puVar13 + 0x20;
          *puVar13 = puVar9;
          iVar5 = iVar5 + -1;
          puVar13 = puVar9;
        } while (iVar5 != 0);
        *puVar9 = 0;
        puVar13 = (undefined8 *)puVar7[1];
      }
      else {
        puVar7[1] = puVar13;
        *puVar7 = 0;
      }
LAB_140338ce8:
      *(undefined4 *)(puVar7 + 2) = 0x100;
      iVar5 = 0xff;
    }
    else {
      iVar5 = *(int *)(puVar7 + 2) + -1;
    }
    puVar7[1] = *puVar13;
    *(int *)(puVar7 + 2) = iVar5;
    *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
    puVar13[1] = &DAT_100000002;
    puVar13[2] = 0;
    *(undefined4 *)(puVar13 + 3) = 0;
    *(undefined4 *)(puVar13 + 4) = 0xffffffff;
    puVar13[6] = 0;
    puVar13[7] = 0x100000000;
    *(undefined1 *)(puVar13 + 8) = 1;
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0xe800000000000020;
    puVar13[0x12] = 0;
    puVar13[0x13] = 0x100000000;
    *(undefined2 *)(puVar13 + 0x14) = 0;
    LOCK();
    bVar15 = *(char *)(puVar13 + 8) == '\x01';
    if (bVar15) {
      *(char *)(puVar13 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar15) {
      FUN_14008cdb0(puVar13 + 8);
    }
    *puVar13 = &PTR_FUN_14a2f0ff8;
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    iVar5 = 0;
    if (lVar11 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar11 + 0x30);
    }
    puVar13[0xf] = uVar8;
    puVar13[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar13 + 0x1c) = bVar2 ^ 1;
    puVar13[0x15] = param_1;
    *puVar13 = &PTR_FUN_14a2f0fe8;
    LOCK();
    *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + local_68;
    UNLOCK();
    lVar11 = (longlong)local_68;
    if (lVar11 != 0) {
      lVar14 = 0;
      iVar5 = 0;
      local_88 = local_70;
      do {
        lVar3 = *(longlong *)(local_88 + lVar14);
        if (lVar3 == 0) {
          iVar5 = iVar5 + 1;
        }
        else {
          cVar4 = FUN_1456bb142(lVar3 + 0x88,puVar13);
          if (cVar4 == '\0') {
            iVar5 = iVar5 + 1;
          }
          else {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            FUN_1456bb1d4(puVar13 + 5,lVar3);
          }
        }
        lVar14 = lVar14 + 8;
      } while (lVar11 * 8 != lVar14);
    }
    LOCK();
    *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) - iVar5;
    UNLOCK();
    local_5c[0] = 1;
    FUN_1447439e4(puVar13);
    if (puVar13 == (undefined8 *)0x0) goto LAB_140338dac;
    iVar5 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar5 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar5 * 8) = puVar13;
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)param_1[4];
  param_1[4] = puVar13;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  FUN_14473400f(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
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
  if ((char)local_8c == '\0') {
    LOCK();
    piVar1 = (int *)(puVar12 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
LAB_140338c15:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140338ee0 FUN_140338ee0 body=82 status=ok
// SIG undefined FUN_140338ee0(void)

undefined8 * FUN_140338ee0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 3;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140338f54(param_1,uVar2 & 0xffffffff);
    FUN_140338f32(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 140338f32 FUN_140338f32 body=33 status=ok
// SIG undefined FUN_140338f32(void)

void FUN_140338f32(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 140338f54 FUN_140338f54 body=306 status=ok
// SIG undefined FUN_140338f54(void)

void FUN_140338f54(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140338fb6;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140338fb6:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140339086 FUN_140339086 body=1971 status=ok
// SIG undefined FUN_140339086(void)

undefined8 *
FUN_140339086(longlong param_1,int param_2,int param_3,longlong *param_4,longlong param_5,
             char param_6)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong uStack_120;
  ulonglong local_110;
  undefined8 *local_108;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 *local_b8 [2];
  longlong local_a8;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar18 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar18 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar18 = &PTR_FUN_14a2a0e78;
  puVar7 = puVar18 + 1;
  *(int *)(puVar18 + 1) = param_2;
  *(int *)((longlong)puVar18 + 0xc) = param_2 * param_3;
  *(int *)(puVar18 + 2) = param_3;
  puVar18[3] = 0;
  puVar18[4] = 0;
  puVar18[5] = 0;
  iVar6 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar6);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar18;
  local_a8 = *param_4;
  local_98 = (longlong *)param_4[2];
  param_4[2] = 0;
  local_c8 = param_4[6];
  lStack_c0 = param_4[7];
  local_d8 = param_4[4];
  lStack_d0 = param_4[5];
  if (local_a8 != 0) {
    *param_4 = 0;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_e8 = (longlong *)0x0;
  local_88 = (undefined4)param_4[4];
  uStack_84 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_80 = (undefined4)param_4[5];
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0x2c);
  local_78 = (undefined4)param_4[6];
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_70 = (undefined4)param_4[7];
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0x3c);
  local_f8 = local_a8;
  if (local_a8 != 0) {
    local_f8 = 0;
  }
  local_108 = puVar7;
  local_b8[0] = puVar7;
  if ((param_6 == '\0') || (*(char *)(param_1 + 0x520) == '\0')) {
    FUN_142e66c22(local_b8);
  }
  else {
    puVar8 = TlsGetValue(DAT_14c896140);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar8);
    }
    puVar10 = (undefined8 *)puVar8[1];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*puVar8;
      if (puVar10 == (undefined8 *)0x0) {
        uVar15 = (uint)DAT_14c896180;
        uVar4 = DAT_14c896180;
        while (DAT_14c896180 = uVar4, local_110 = uVar4, (uVar4 & 0x3ffffff) != 0) {
          local_138 = (uVar4 & 0xfffffffffc000000) + 0x4000000;
          if (local_138 >> 0x1a < uVar4 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar3 = (ulonglong)((uVar15 & 0x3ffffff) >> 0xe);
          uVar19 = (ulonglong)((uint)uVar4 & 0x3fff);
          local_138 = local_138 & 0xfffffffffc000000 |
                      (ulonglong)
                      *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar3 * 8) + 0x10 + uVar19 * 0x18);
          LOCK();
          bVar20 = local_110 == DAT_14c896180;
          uVar4 = local_138;
          if (!bVar20) {
            uVar4 = DAT_14c896180;
          }
          DAT_14c896180 = uVar4;
          UNLOCK();
          if (bVar20) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar3 * 8) + uVar19 * 0x18 + 0x10) = 0;
            puVar10 = *(undefined8 **)
                       (*(longlong *)(&DAT_14c833b00 + uVar3 * 8) + 8 +
                       (ulonglong)(uVar15 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar15 & 0x3ffffff);
            puVar8[1] = puVar10;
            if (puVar10 == (undefined8 *)0x0) goto LAB_14033961e;
            goto LAB_1403394f1;
          }
          uVar15 = (uint)DAT_14c896180;
          uVar4 = DAT_14c896180;
        }
        puVar8[1] = 0;
LAB_14033961e:
        puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar8[1] = puVar10;
        iVar6 = 0xff;
        puVar11 = puVar10;
        do {
          puVar9 = puVar11 + 0x20;
          *puVar11 = puVar9;
          iVar6 = iVar6 + -1;
          puVar11 = puVar9;
        } while (iVar6 != 0);
      }
      else {
        puVar8[1] = puVar10;
        puVar9 = puVar8;
      }
      *puVar9 = 0;
LAB_1403394f1:
      *(undefined4 *)(puVar8 + 2) = 0x100;
      iVar6 = 0xff;
    }
    else {
      iVar6 = *(int *)(puVar8 + 2) + -1;
    }
    puVar8[1] = *puVar10;
    *(int *)(puVar8 + 2) = iVar6;
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar20 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar20) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar20) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14a2a0e90;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar17 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar17 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar17 + 0x30);
    }
    puVar10[0xf] = uVar13;
    puVar10[0x10] = 0xc8000052888b0000;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
    puVar10[0x16] = local_b8[0];
    puVar10[0x18] = local_a8;
    puVar10[0x1a] = local_98;
    local_98 = (longlong *)0x0;
    *(undefined4 *)(puVar10 + 0x1e) = local_78;
    *(undefined4 *)((longlong)puVar10 + 0xf4) = uStack_74;
    *(undefined4 *)(puVar10 + 0x1f) = uStack_70;
    *(undefined4 *)((longlong)puVar10 + 0xfc) = uStack_6c;
    *(undefined4 *)(puVar10 + 0x1c) = local_88;
    *(undefined4 *)((longlong)puVar10 + 0xe4) = uStack_84;
    *(undefined4 *)(puVar10 + 0x1d) = uStack_80;
    *(undefined4 *)((longlong)puVar10 + 0xec) = uStack_7c;
    if (local_a8 != 0) {
      local_a8 = 0;
    }
    *puVar10 = &PTR_FUN_14a2a0e80;
    if (param_5 == 0) {
      LOCK();
      *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + (int)uStack_120;
      UNLOCK();
      lVar17 = (longlong)(int)uStack_120;
      iVar6 = 0;
      if (lVar17 != 0) {
        lVar16 = 0;
        iVar6 = 0;
        lVar12 = local_128;
        do {
          lVar2 = *(longlong *)(lVar12 + lVar16);
          if (lVar2 == 0) {
            iVar6 = iVar6 + 1;
          }
          else {
            local_130 = lVar12;
            cVar5 = FUN_1456bb142(lVar2 + 0x88,puVar10);
            if (cVar5 == '\0') {
              iVar6 = iVar6 + 1;
              lVar12 = local_130;
            }
            else {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
              FUN_1456bb1d4(puVar10 + 5,lVar2);
              lVar12 = local_130;
            }
          }
          lVar16 = lVar16 + 8;
        } while (lVar17 * 8 != lVar16);
      }
      LOCK();
      *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) - iVar6;
      UNLOCK();
    }
    else {
      LOCK();
      *(longlong *)(param_5 + 8) = *(longlong *)(param_5 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + 1;
      UNLOCK();
      puVar10[2] = param_5;
      FUN_144a23fbc(puVar10,&local_128,1);
      FUN_144a23f14((ulonglong)puVar10[0x10] >> 0x3b & 0xffffffffffffff07,
                    *(undefined4 *)((longlong)puVar10 + 0x1c));
    }
    local_110 = CONCAT71(local_110._1_7_,1);
    FUN_1447439e4(puVar10);
    if (puVar10 != (undefined8 *)0x0) {
      iVar6 = *(int *)(param_1 + 0x508);
      *(uint *)(param_1 + 0x508) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x50c) < iVar6 + 1U) {
        FUN_1401d03aa((longlong *)(param_1 + 0x500),iVar6);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x500) + (longlong)iVar6 * 8) = puVar10;
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
      goto LAB_140339453;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_140339453:
  if (local_a8 != 0) {
    plVar14 = (longlong *)&local_88;
    if (local_98 != (longlong *)0x0) {
      plVar14 = local_98;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  FUN_14473400f(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  puVar8 = (undefined8 *)puVar18[5];
  puVar18[5] = puVar10;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if (local_f8 != 0) {
    plVar14 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar14 = &local_d8;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033983a FUN_14033983a body=3284 status=ok
// SIG undefined FUN_14033983a(void)

void FUN_14033983a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined4 uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  bool bVar30;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  int local_d4;
  longlong *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  void *local_b8;
  ulonglong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  uint *local_88;
  longlong local_80;
  undefined1 local_71;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)((longlong)param_1 + 0x204) == '\x01') {
    lVar7 = *param_1;
    local_94 = *(int *)(*(longlong *)(lVar7 + 0x210) + 0x5674);
    local_98 = *(int *)(DAT_14ca66a28 + 4);
    puVar16 = (uint *)(lVar7 + 0x178);
    iVar19 = *(int *)(lVar7 + 400);
    local_e0 = param_2;
    if (iVar19 == 0) {
      uVar25 = 1;
      uVar17 = 0;
      iVar12 = 0;
      iVar21 = 0;
    }
    else {
      puVar10 = *(uint **)(lVar7 + 0x188);
      if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
        puVar10 = puVar16;
      }
      uVar27 = *puVar10;
      if (uVar27 == 0) {
        iVar21 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar21 = iVar19 + -1;
        }
        uVar17 = 0;
        uVar25 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar25 = uVar17;
        }
        iVar21 = 0;
        do {
          if (uVar25 == uVar17) goto LAB_140339cd2;
          iVar21 = iVar21 + 0x20;
          uVar27 = puVar10[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar17 = 0;
        iVar21 = 0;
      }
      uVar25 = (ulonglong)(-uVar27 & uVar27);
      uVar26 = uVar25 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar12 = (iVar21 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar12) {
        iVar12 = iVar19;
      }
    }
    if (iVar12 < iVar19) {
      plVar11 = (longlong *)(lVar7 + 0x168);
      local_a8 = param_1 + 0x3a;
      uVar27 = 0xffffffff;
      local_d0 = plVar11;
      do {
        piVar2 = *(int **)(*plVar11 + 8 + (longlong)iVar12 * 0x20);
        plVar3 = *(longlong **)(*plVar11 + 0x10 + (longlong)iVar12 * 0x20);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (*(char *)((longlong)piVar2 + 0x12) == '\0') {
          if (local_98 < local_94 - piVar2[5]) {
            FUN_1407cb556();
            plVar11 = local_d0;
          }
          else {
            uVar22 = piVar2[0x10];
            if (*(uint *)(*(longlong *)(piVar2 + 0xe) + 0xbc0) < 0x2000) {
              uVar5 = *(uint *)((longlong)param_1 + 0x1e4);
              if (uVar5 + uVar22 < 0x2001) {
                *(uint *)((longlong)param_1 + 0x1e4) = uVar5 + uVar22;
              }
              else {
                uVar5 = 0xffffffff;
              }
            }
            else {
              uVar5 = *(uint *)(param_1 + 0x3c);
              *(uint *)(param_1 + 0x3c) = uVar5 + uVar22;
            }
            if (0 < (int)uVar22) {
              local_90 = (ulonglong)uVar5;
              puVar14 = (ulonglong *)0x0;
              local_d4 = iVar21;
              local_c0 = (ulonglong *)(ulonglong)uVar22;
              local_88 = puVar16;
              local_80 = lVar7;
              do {
                local_a0 = (longlong)puVar14 * 0x1980;
                local_c8 = (undefined8 *)(local_90 + (longlong)puVar14);
                lVar7 = *(longlong *)(piVar2 + 0xe) + local_a0;
                local_b8 = (void *)(*(longlong *)(piVar2 + 0xe) + local_a0);
                uVar22 = *(uint *)(lVar7 + 0xbc0);
                uVar26 = (ulonglong)uVar22;
                local_b0 = puVar14;
                memcpy(local_b8,(void *)(lVar7 + 0xbd0),0xba0);
                *(undefined4 *)(lVar7 + 0xba0) = *(undefined4 *)(lVar7 + 6000);
                *(undefined4 *)(lVar7 + 0xba4) = *(undefined4 *)(lVar7 + 0x1774);
                *(undefined4 *)(lVar7 + 0xba8) = *(undefined4 *)(lVar7 + 0x1778);
                *(undefined4 *)(lVar7 + 0xbac) = *(undefined4 *)(lVar7 + 0x177c);
                *(undefined4 *)(lVar7 + 0xbb0) = *(undefined4 *)(lVar7 + 0x1780);
                plVar11 = local_d0;
                puVar18 = local_c0;
                puVar8 = local_c8;
                iVar21 = local_d4;
                if (((uVar26 != 0xffffffff) && (-1 < *piVar2)) &&
                   (0x1fff < (uint)local_c8 != uVar22 < 0x2000)) {
                  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(uVar26);
                  }
                  if (*(int *)((longlong)param_1 + 0x1dc) < (int)uVar22) {
                    FUN_14019fe82(local_a8,uVar22);
                    plVar11 = local_d0;
                    puVar18 = local_c0;
                    puVar8 = local_c8;
                    iVar21 = local_d4;
                  }
                  while (iVar19 = (int)param_1[0x3b], iVar19 <= (int)uVar22) {
                    *(uint *)(param_1 + 0x3b) = iVar19 + 1U;
                    if (*(uint *)((longlong)param_1 + 0x1dc) < iVar19 + 1U) {
                      FUN_14019fe90(local_a8,iVar19);
                      plVar11 = local_d0;
                      puVar18 = local_c0;
                      puVar8 = local_c8;
                      iVar21 = local_d4;
                    }
                    lVar7 = param_1[0x3a];
                    *(undefined4 *)(lVar7 + (longlong)iVar19 * 0x10) = 0xffffffff;
                    *(undefined8 *)(lVar7 + 4 + (longlong)iVar19 * 0x10) = 0;
                  }
                  *(int *)(*local_a8 + uVar26 * 0x10) = (int)puVar8;
                  *(undefined8 *)(*local_a8 + 4 + uVar26 * 0x10) = 0;
                }
                *(int *)((longlong)local_b8 + 0xbc0) = (int)puVar8;
                puVar16 = (uint *)(*(longlong *)(piVar2 + 0xe) + 0x18a0 + local_a0);
                *puVar16 = *puVar16 | 4;
                puVar14 = (ulonglong *)((longlong)local_b0 + 1);
                puVar16 = local_88;
                lVar7 = local_80;
              } while (puVar14 != puVar18);
            }
          }
        }
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
            plVar11 = local_d0;
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar11 = local_d0;
            }
          }
        }
        uVar27 = uVar27 & ~(uint)uVar25;
        puVar10 = *(uint **)(lVar7 + 0x188);
        if (*(uint **)(lVar7 + 0x188) == (uint *)0x0) {
          puVar10 = puVar16;
        }
        iVar19 = *(int *)(lVar7 + 400);
        iVar12 = (int)uVar17;
        lVar20 = (longlong)iVar12;
        uVar22 = puVar10[lVar20] & uVar27;
        if (uVar22 == 0) {
          iVar23 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar23 = iVar19 + -1;
          }
          iVar23 = iVar23 >> 5;
          iVar24 = iVar23;
          if (iVar23 < iVar12) {
            iVar24 = iVar12;
          }
          if (iVar23 <= iVar12) break;
          lVar13 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar22 = puVar10[lVar20 + lVar13 + 1];
            if (uVar22 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar24 - lVar20 == lVar13) goto LAB_140339cd2;
          }
          uVar17 = (ulonglong)(iVar12 + (int)lVar13 + 1);
          uVar27 = 0xffffffff;
        }
        uVar25 = (ulonglong)(-uVar22 & uVar22);
        uVar26 = uVar25 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar12 = (iVar21 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar19);
    }
LAB_140339cd2:
    puVar14 = *(ulonglong **)(local_e0 + 0x18);
    uVar27 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_a0 = CONCAT44(local_a0._4_4_,*(uint *)((longlong)puVar14 + 0x17c));
    if (*(uint *)((longlong)puVar14 + 0x17c) != uVar27) {
      *(uint *)((longlong)puVar14 + 0x17c) = uVar27;
      puVar6 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 3;
      if ((undefined8 *)puVar14[1] < puVar8) {
        FUN_140023dd8(puVar14,0x20);
        puVar6 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar6 + 3;
      }
      *puVar14 = (ulonglong)puVar8;
      *(int *)(puVar14 + 0xc) = (int)puVar14[0xc] + 1;
      *(undefined8 **)puVar14[6] = puVar6;
      puVar14[6] = (ulonglong)(puVar6 + 1);
      uVar15 = *(undefined4 *)((longlong)puVar14 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar15;
    }
    puVar18 = (ulonglong *)(local_e0 + 0x70);
    puVar6 = (undefined8 *)(*(longlong *)(local_e0 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar6 + 10;
    if (*(undefined8 **)(local_e0 + 0x78) < puVar8) {
      FUN_140023dd8(puVar18,0x60);
      puVar6 = (undefined8 *)(*puVar18 + 0xf & 0xfffffffffffffff0);
      puVar8 = puVar6 + 10;
    }
    *(undefined8 **)(local_e0 + 0x70) = puVar8;
    *puVar6 = &PTR_FUN_14a328ea8;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 1;
    plVar11 = (longlong *)(local_e0 + 0x98);
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    iVar19 = *(int *)(local_e0 + 0xa0);
    *(uint *)(local_e0 + 0xa0) = iVar19 + 1U;
    if (*(uint *)(local_e0 + 0xa4) < iVar19 + 1U) {
      FUN_1448cfae8(plVar11,iVar19);
    }
    *(undefined8 **)(*plVar11 + (longlong)iVar19 * 8) = puVar6;
    iVar19 = (int)param_1[0x3e];
    if (iVar19 == 0) {
      uVar28 = 0;
    }
    else {
      iVar21 = 1;
      if (iVar19 < 1) {
        iVar21 = iVar19;
      }
      uVar28 = *(undefined8 *)(param_1[0x3d] + -8 + (longlong)iVar21 * 8);
    }
    FUN_144938434();
    cVar9 = '\x02';
    if (DAT_14ca642d9 != '\x03') {
      cVar9 = DAT_14ca642d9;
    }
    puVar6[2] = uVar28;
    *(char *)(puVar6 + 3) = cVar9;
    lVar7 = param_1[0x27];
    cVar9 = *(char *)(lVar7 + 0x68);
    puVar29 = (undefined8 *)(*(longlong *)(local_e0 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar29 + 8;
    if (*(undefined8 **)(local_e0 + 0x78) < puVar8) {
      FUN_140023dd8(puVar18,0x48);
      puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar29 + 8;
    }
    local_b8 = (void *)(local_e0 + 0x198);
    *(undefined8 **)(local_e0 + 0x70) = puVar8;
    puVar29[1] = *(undefined8 *)(lVar7 + 8);
    puVar29[2] = 0;
    *(undefined1 *)(puVar29 + 3) = 2;
    *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar29 + 5) = 0;
    *puVar29 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar29 + 6) = cVar9 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar29 + 0x31) = 0;
    puVar29[7] = lVar7;
    iVar19 = *(int *)(local_e0 + 0x1a0);
    *(uint *)(local_e0 + 0x1a0) = iVar19 + 1U;
    if (*(uint *)(local_e0 + 0x1a4) < iVar19 + 1U) {
      FUN_1447568fc(local_b8,iVar19);
    }
    lVar7 = local_e0;
    *(undefined8 **)(*(longlong *)(local_e0 + 0x198) + (longlong)iVar19 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x1c) = *(int *)(local_e0 + 0x1a0) + -1;
    puVar6[4] = puVar29;
    iVar19 = (int)param_1[0x3b];
    local_e8 = iVar19 == 0;
    if ((bool)local_e8) {
      local_f8 = &DAT_14a328eb0;
      local_f0 = 0x10;
      iVar19 = 1;
    }
    else {
      local_f0 = (ulonglong)(uint)(iVar19 << 4);
      local_f8 = (undefined *)param_1[0x3a];
    }
    lVar20 = FUN_144942e63(local_e0,L"Shadow.Virtual.NextVirtualShadowMapData",0x10,iVar19);
    cVar9 = *(char *)(lVar20 + 0x68);
    puVar29 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar29 + 9;
    if (*(undefined8 **)(lVar7 + 0x78) < puVar8) {
      FUN_140023dd8(puVar18,0x50);
      puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar29 + 9;
      lVar7 = local_e0;
    }
    *(undefined8 **)(lVar7 + 0x70) = puVar8;
    puVar29[1] = *(undefined8 *)(lVar20 + 8);
    bVar30 = false;
    puVar29[2] = 0;
    *(undefined1 *)(puVar29 + 3) = 3;
    *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
    *puVar29 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar29 + 5) = cVar9 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
    puVar29[7] = 0;
    puVar29[8] = lVar20;
    iVar19 = *(int *)(lVar7 + 0x1a0);
    *(uint *)(lVar7 + 0x1a0) = iVar19 + 1U;
    local_b0 = puVar18;
    if (*(uint *)(lVar7 + 0x1a4) < iVar19 + 1U) {
      FUN_1447568fc(local_b8,iVar19);
      lVar7 = local_e0;
    }
    local_c8 = puVar6 + 2;
    *(undefined8 **)(*(longlong *)(lVar7 + 0x198) + (longlong)iVar19 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x1c) = *(int *)(lVar7 + 0x1a0) + -1;
    puVar6[5] = puVar29;
    *(int *)(puVar6 + 6) = (int)param_1[0x3b];
    local_70 = *(undefined8 **)(*param_1 + 0x38);
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
      UNLOCK();
      if (local_70 != (undefined8 *)0x0) {
        lVar7 = FUN_144735dd8(lVar7,&local_70,0);
        puVar18 = local_b0;
        cVar9 = *(char *)(lVar7 + 0x68);
        puVar29 = (undefined8 *)(*(longlong *)(local_e0 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar29 + 9;
        if (*(undefined8 **)(local_e0 + 0x78) < puVar8) {
          FUN_140023dd8(local_b0,0x50);
          puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar29 + 9;
        }
        *(undefined8 **)(local_e0 + 0x70) = puVar8;
        puVar29[1] = *(undefined8 *)(lVar7 + 8);
        puVar29[2] = 0;
        *(undefined1 *)(puVar29 + 3) = 3;
        *(undefined8 *)((longlong)puVar29 + 0x1c) = 0xffffffffffffffff;
        *puVar29 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar29 + 5) = cVar9 >> 7 & 0x1c;
        *(undefined8 *)((longlong)puVar29 + 0x2c) = 0xffffffff00000000;
        puVar29[7] = 0;
        puVar29[8] = lVar7;
        iVar19 = *(int *)(local_e0 + 0x1a0);
        *(uint *)(local_e0 + 0x1a0) = iVar19 + 1U;
        if (*(uint *)(local_e0 + 0x1a4) < iVar19 + 1U) {
          FUN_1447568fc(local_b8,iVar19);
        }
        *(undefined8 **)(*(longlong *)(local_e0 + 0x198) + (longlong)iVar19 * 8) = puVar29;
        *(int *)((longlong)puVar29 + 0x1c) = *(int *)(local_e0 + 0x1a0) + -1;
        puVar6[7] = puVar29;
        bVar30 = local_70 != (undefined8 *)0x0;
        lVar7 = local_e0;
      }
    }
    iVar19 = *(int *)(DAT_14ca64400 + 4);
    bVar4 = DAT_14ca66970 != 0;
    puVar6[8] = param_1[0x33];
    uVar28 = *(undefined8 *)
              (&DAT_14ca8c1f0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x3f] + 8) * 2) * 8
              );
    FUN_141578e80();
    FUN_1448e935e(uVar28,&local_68,&DAT_14ca64df0,bVar30 + (bVar4 || iVar19 != 0) * '\x02');
    FUN_141578e80();
    lVar13 = lStack_60;
    puVar8 = local_68;
    lVar20 = param_1[3];
    FUN_141578fa2();
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    FUN_1448f70da(puVar8,&DAT_14ca67870,local_c8,&local_68);
    FUN_140069376(lVar7);
    puVar18 = local_b0;
    uVar15 = 2;
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar15 = 4;
    }
    puVar29 = (undefined8 *)(*(longlong *)(local_e0 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar29 + 0x3d;
    if (*(undefined8 **)(local_e0 + 0x78) < puVar6) {
      FUN_140023dd8(local_b0,0x1f0);
      puVar29 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar29 + 0x3d;
    }
    *local_b0 = (ulonglong)puVar6;
    local_68 = local_c8;
    lStack_60 = DAT_14ca678b8;
    if (DAT_14ca678b8 != 0) {
      LOCK();
      *(int *)(DAT_14ca678b8 + 8) = *(int *)(DAT_14ca678b8 + 8) + 1;
      UNLOCK();
    }
    local_58 = &DAT_14ca67870;
    local_f8 = (undefined *)CONCAT71(local_f8._1_7_,2);
    FUN_140068f1a(puVar29,&local_71,&local_68,uVar15);
    *puVar29 = &PTR_FUN_14a328ec0;
    puVar29[0x37] = &DAT_14ca67870;
    puVar29[0x38] = local_c8;
    puVar29[0x39] = puVar8;
    puVar29[0x3a] = lVar13;
    *(uint *)(puVar29 + 0x3b) = (int)lVar20 + 0xffU >> 8;
    *(undefined1 **)((longlong)puVar29 + 0x1dc) = &DAT_100000001;
    iVar19 = *(int *)(local_e0 + 0x170);
    *(uint *)(local_e0 + 0x170) = iVar19 + 1U;
    if (*(uint *)(local_e0 + 0x174) < iVar19 + 1U) {
      FUN_14470e57a(local_e0 + 0x168,iVar19);
    }
    *(undefined8 **)(*(longlong *)(local_e0 + 0x168) + (longlong)iVar19 * 8) = puVar29;
    *(int *)((longlong)puVar29 + 0x2c) = *(int *)(local_e0 + 0x170) + -1;
    FUN_140069100(local_e0,puVar29);
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_70 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_70)(local_70,1);
      }
    }
    if (*(int *)((longlong)puVar14 + 0x17c) != (int)local_a0) {
      *(int *)((longlong)puVar14 + 0x17c) = (int)local_a0;
      puVar6 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 3;
      if ((undefined8 *)puVar14[1] < puVar8) {
        FUN_140023dd8(puVar14,0x20);
        puVar6 = (undefined8 *)(*puVar14 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar6 + 3;
      }
      *puVar14 = (ulonglong)puVar8;
      *(int *)(puVar14 + 0xc) = (int)puVar14[0xc] + 1;
      *(undefined8 **)puVar14[6] = puVar6;
      puVar14[6] = (ulonglong)(puVar6 + 1);
      uVar15 = *(undefined4 *)((longlong)puVar14 + 0x17c);
      puVar6[1] = 0;
      *puVar6 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar6 + 2) = uVar15;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033a510 FUN_14033a510 body=72 status=ok
// SIG undefined FUN_14033a510(void)

void FUN_14033a510(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    FUN_14033a558(param_1 + 0x520,param_2);
    return;
  }
  return;
}



// FUNCTION 14033a558 FUN_14033a558 body=184 status=ok
// SIG undefined FUN_14033a558(void)

void FUN_14033a558(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
  }
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168),0,0);
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x150);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x158) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  return;
}



// FUNCTION 14033a610 FUN_14033a610 body=9 status=ok
// SIG undefined FUN_14033a610(void)

void FUN_14033a610(longlong param_1)

{
  FUN_14033a9b2(param_1 + 0x10);
  return;
}



// FUNCTION 14033a61a FUN_14033a61a body=173 status=ok
// SIG undefined FUN_14033a61a(void)

void FUN_14033a61a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((*plVar1 != -1) && (DAT_14cb259f8 != 0)) {
    FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
    plVar1 = (longlong *)*param_2;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
  if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
    FUN_140087e46(plVar1);
    if (*plVar1 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_14033a677;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
    }
  }
LAB_14033a677:
  *param_2 = 0;
  return;
}



// FUNCTION 14033a6c8 FUN_14033a6c8 body=151 status=ok
// SIG undefined FUN_14033a6c8(void)

void FUN_14033a6c8(undefined8 param_1,__uint64 *param_2)

{
  undefined1 auStack_48 [32];
  __uint64 *local_28;
  __uint64 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != (__uint64 *)0x0) && (*param_2 != 0xffffffffffffffff)) {
    FUN_14033a7c0(param_2);
    AK::SoundEngine::UnregisterGameObj(*param_2);
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    if (*(int *)((longlong)param_2 + 0x1c) != 0) {
      FUN_14033a760(param_2 + 2,0);
    }
    local_20 = &local_28;
    FUN_144964866(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033a760 FUN_14033a760 body=96 status=ok
// SIG undefined FUN_14033a760(void)

void FUN_14033a760(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14033a7c0 FUN_14033a7c0 body=190 status=ok
// SIG undefined FUN_14033a7c0(void)

void FUN_14033a7c0(__uint64 *param_1)

{
  __uint64 _Var1;
  undefined1 auStack_48 [40];
  __uint64 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  for (_Var1 = param_1[0x24]; _Var1 != 0; _Var1 = *(__uint64 *)(_Var1 + 0x30)) {
    if (*(char *)(_Var1 + 0x20) == '\x01') {
      local_20 = _Var1;
      FUN_14033ab0a();
    }
    else {
      if ((*(char *)(_Var1 + 0x21) != '\x01') && (DAT_14cb25ab0 == '\x01')) {
        AK::SoundEngine::StopPlayingID(*(uint *)(_Var1 + 8),0,4);
      }
      if (DAT_14cb26560 != 0) {
        FUN_14033a908();
      }
    }
  }
  if (DAT_14cb25ab0 == '\x01') {
    AK::SoundEngine::StopMIDIOnEvent(0,*param_1,0);
  }
  while (param_1[0x24] != 0) {
    FUN_140396cf6(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033a880 FUN_14033a880 body=135 status=ok
// SIG undefined FUN_14033a880(void)

void FUN_14033a880(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
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



// FUNCTION 14033a908 FUN_14033a908 body=169 status=ok
// SIG undefined FUN_14033a908(void)

void FUN_14033a908(longlong *param_1,void *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  AK::SoundEngine::CancelEventCallbackCookie(param_2);
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      if (*(void **)(lVar1 + 8 + lVar3) == param_2) {
        *(undefined8 *)(lVar1 + 8 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  lVar2 = param_1[3];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[2];
    lVar3 = 0;
    do {
      if (*(void **)(lVar1 + 8 + lVar3) == param_2) {
        *(undefined8 *)(lVar1 + 8 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014033a997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 14033a9b2 FUN_14033a9b2 body=183 status=ok
// SIG undefined FUN_14033a9b2(void)

void FUN_14033a9b2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x28,8);
  *local_68 = &PTR_LAB_14acb88b0;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar2;
  *(undefined4 *)(local_68 + 4) = uVar1;
  if (local_68 + 1 != (undefined8 *)0x0) {
    local_78[0] = FUN_1438abdf2;
  }
  FUN_1407461b0(1,local_78);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033aa6a FUN_14033aa6a body=159 status=ok
// SIG undefined FUN_14033aa6a(void)

void FUN_14033aa6a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 14033ab0a FUN_14033ab0a body=463 status=ok
// SIG undefined FUN_14033ab0a(void)

void FUN_14033ab0a(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  size_t _Size;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < DAT_14cb25a08) {
    uVar4 = 0;
    bVar5 = false;
LAB_14033ab43:
    lVar6 = uVar4 * 0x30;
    do {
      lVar3 = DAT_14cb25a00;
      local_68 = *(undefined8 *)(DAT_14cb25a00 + 0x10 + lVar6);
      plVar1 = (longlong *)(DAT_14cb25a00 + lVar6);
      local_78 = (undefined4)*plVar1;
      uStack_74 = *(undefined4 *)((longlong)plVar1 + 4);
      lVar2 = *plVar1;
      uStack_70 = (undefined4)plVar1[1];
      uStack_6c = *(undefined4 *)((longlong)plVar1 + 0xc);
      local_60 = *(longlong **)(DAT_14cb25a00 + 0x18 + lVar6);
      if (local_60 != (longlong *)0x0) {
        *(int *)(local_60 + 0x21) = (int)local_60[0x21] + 1;
      }
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar3 + lVar6 + 0x28);
      _Size = (size_t)local_50;
      _Src = *(void **)(lVar3 + lVar6 + 0x20);
      if (_Size == 0) {
        local_4c = 0;
        bVar7 = lVar2 == *param_1;
      }
      else {
        FUN_141819f54(&local_58,local_50);
        memcpy(local_58,_Src,_Size);
        bVar7 = CONCAT44(uStack_74,local_78) == *param_1;
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar1 = local_60;
      if (((local_60 != (longlong *)0x0) &&
          (*(int *)(local_60 + 0x21) = (int)local_60[0x21] + -1, (int)local_60[0x26] < 1)) &&
         (FUN_1400847bc(local_60 + 0x17,0), (int)plVar1[0x21] == 0)) {
        FUN_140087e46(plVar1);
        if (*plVar1 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14033abe0;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
        }
      }
LAB_14033abe0:
      if (!bVar7) goto LAB_14033ac94;
      FUN_14181a07e(uVar4 & 0xffffffff);
      bVar5 = true;
      if ((longlong)DAT_14cb25a08 <= (longlong)uVar4) goto LAB_14033acad;
    } while( true );
  }
LAB_14033acb2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14033ac94:
  uVar4 = uVar4 + 1;
  if ((longlong)DAT_14cb25a08 <= (longlong)uVar4) goto code_r0x00014033aca7;
  goto LAB_14033ab43;
code_r0x00014033aca7:
  if (bVar5) {
LAB_14033acad:
    FUN_141819ea8();
  }
  goto LAB_14033acb2;
}



// FUNCTION 14033acda FUN_14033acda body=190 status=ok
// SIG undefined FUN_14033acda(void)

void FUN_14033acda(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x10))();
  if ((*(int *)(param_1 + 0x2a8) != 0) && (*(int *)(param_1 + 0x5c) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  local_48 = 0;
  local_40 = 0xffffffff00000000;
  local_38 = 0;
  local_30 = 0xffffffff00000000;
  local_28 = 0;
  local_20 = 0xffffffff00000000;
  if (&local_48 != param_2 && param_2 != (undefined8 *)0x0) {
    FUN_14034a368(&local_48,param_2);
  }
  FUN_1462324c0(param_1,&local_48);
  FUN_145af6410(&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033ada8 FUN_14033ada8 body=74 status=ok
// SIG undefined FUN_14033ada8(void)

void FUN_14033ada8(longlong param_1)

{
  char cVar1;
  
  if (1 < *(int *)(param_1 + 8)) {
    cVar1 = FUN_144a38768(param_1,&DAT_149e065c6,1,1);
    if (cVar1 == '\0') {
      FUN_1400020e8(param_1,&DAT_149e065c6,1);
      return;
    }
  }
  return;
}



// FUNCTION 14033adf2 FUN_14033adf2 body=1993 status=ok
// SIG undefined FUN_14033adf2(void)

void FUN_14033adf2(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_408 [32];
  wchar_t *local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  wchar_t *local_3d0;
  wchar_t *local_3c8;
  code *local_3c0;
  undefined1 *local_3b8;
  code **local_3b0;
  code *local_3a8;
  code *local_3a0;
  longlong local_390;
  longlong *local_388;
  code *local_380;
  undefined1 local_378 [8];
  code *local_370;
  longlong *local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined2 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  longlong local_328;
  longlong *local_318;
  longlong local_308 [4];
  undefined8 local_2e8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_408;
  (**(code **)(*param_1 + 0x2c8))();
  if ((longlong)(int)param_1[0x41] != 0) {
    lVar12 = param_1[0x40];
    local_388 = param_1 + 0x18;
    lVar10 = (longlong)(int)param_1[0x41] * 0x28;
    do {
      FUN_14475cc44(lVar12);
      plVar3 = (longlong *)&DAT_149dfb77a;
      if ((int)local_360 != 0) {
        plVar3 = local_368;
      }
      if (DAT_14c949118 == 0) {
        local_380 = FUN_140631fbe;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar5;
        FUN_1446f470e(local_378,L"Class",1);
        local_3b0 = &local_380;
        local_3b8 = &LAB_146891e90;
        local_3c0 = (code *)&LAB_146273097;
        local_3d0 = L"Engine";
        local_3c8 = (wchar_t *)CONCAT44(local_3c8._4_4_,199);
        local_3d8 = 0x20;
        local_3e0._0_4_ = 0x10000000;
        local_3e8._0_4_ = 8;
        FUN_14574b4b2(lVar5);
        local_390 = DAT_14c951858;
        DAT_14c949118 = lVar5;
        if (DAT_14c951858 == 0) {
          local_370 = FUN_1449e2820;
          local_3a0 = FUN_14081d0ea;
          local_3a8 = FUN_14081d0ea;
          local_3b0 = &local_370;
          local_3b8 = &LAB_1468c5283;
          local_3c0 = FUN_142809da0;
          local_3c8 = L"Engine";
          local_3d0 = (wchar_t *)0x400000000;
          local_3d8 = CONCAT44(local_3d8._4_4_,0x10000000);
          local_3e0._0_4_ = 8;
          local_3e8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = DAT_14c949118;
        local_390 = DAT_14c951858;
        uVar6 = FUN_1449e2fb2();
        local_3e8 = L"Class";
        FUN_14574b446(uVar6,lVar5,local_390,L"/Script/CoreUObject");
      }
      local_3d0 = (wchar_t *)0x0;
      local_3e0 = 0;
      local_3d8 = CONCAT71(local_3d8._1_7_,1);
      local_3e8 = (wchar_t *)((ulonglong)local_3e8 & 0xffffffff00000000);
      plVar3 = (longlong *)FUN_1412ecd05(DAT_14c949118,0,plVar3,0);
      if (local_368 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (plVar3 != (longlong *)0x0) {
        lVar5 = plVar3[0x22];
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 1000))(plVar3);
          lVar5 = plVar3[0x22];
          if (lVar5 == 0) goto LAB_14033af21;
        }
        lVar4 = FUN_141415544();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(longlong *)(lVar5 + 0x80) != 0)) {
          FUN_14058b40c(param_1);
          local_318 = (longlong *)0x0;
          local_2e8 = 0;
          local_358 = 0;
          uStack_350 = 0;
          local_348 = 0;
          local_328 = 0;
          local_330 = 0;
          local_340 = 0;
          uStack_338 = 0;
          local_368 = plVar3;
          local_360 = param_1;
          lVar5 = FUN_1402710dd(&local_368);
          if (local_328 != 0) {
            plVar3 = local_318;
            if (local_318 == (longlong *)0x0) {
              plVar3 = local_308;
            }
            (**(code **)(*plVar3 + 0x10))();
          }
          if (lVar5 != 0) {
            if (*(longlong *)(lVar12 + 0x20) != 0) {
              *(longlong *)(lVar5 + 0x78) = *(longlong *)(lVar12 + 0x20);
            }
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar5);
            }
            lVar4 = param_1[0x19];
            uVar21 = (int)lVar4 + 1;
            *(uint *)(param_1 + 0x19) = uVar21;
            if (*(uint *)((longlong)param_1 + 0xcc) < uVar21) {
              FUN_146563776(local_388);
            }
            *(longlong *)(*local_388 + (longlong)(int)lVar4 * 8) = lVar5;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_14033af21:
      lVar12 = lVar12 + 0x28;
      lVar10 = lVar10 + -0x28;
    } while (lVar10 != 0);
  }
  iVar17 = (int)param_1[0x19];
  if (1 < (longlong)iVar17) {
    plVar3 = (longlong *)param_1[0x18];
    memset(&local_358,0,0x2f0);
    local_360 = plVar3 + (longlong)iVar17 + -1;
    local_368 = plVar3;
    fVar27 = logf((float)iVar17);
    local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar27 + fVar27));
    pplVar7 = &local_368;
    do {
      plVar8 = *pplVar7;
      plVar13 = pplVar7[1];
      iVar17 = *(int *)(pplVar7 + 2);
      iVar14 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar8) >> 3);
      uVar22 = (ulonglong)(iVar14 + 1);
      plVar9 = plVar8;
      plVar11 = plVar8;
      plVar3 = plVar13;
      if (iVar17 != 0) {
LAB_14033b27a:
        if (8 < (int)(uint)uVar22) {
          uVar21 = (uint)uVar22 >> 1;
          lVar12 = plVar11[uVar21];
          plVar11[uVar21] = *plVar11;
          *plVar11 = lVar12;
          plVar23 = plVar3 + 1;
          plVar8 = plVar11;
          do {
            plVar2 = plVar8 + 1;
            plVar16 = plVar8 + 1;
            do {
              plVar8 = plVar16;
              plVar25 = plVar2;
              if (plVar3 < plVar8) break;
              plVar2 = plVar25 + 1;
              plVar16 = plVar8 + 1;
            } while (*(float *)(*plVar8 + 0xe4) < *(float *)(*plVar11 + 0xe4) ||
                     *(float *)(*plVar8 + 0xe4) == *(float *)(*plVar11 + 0xe4));
            plVar2 = plVar23 + -2;
            do {
              plVar16 = plVar23;
              plVar24 = plVar2;
              plVar23 = plVar16 + -1;
              if (plVar23 <= plVar11) break;
              plVar2 = plVar24 + -1;
            } while (*(float *)(*plVar11 + 0xe4) < *(float *)(*plVar23 + 0xe4) ||
                     *(float *)(*plVar11 + 0xe4) == *(float *)(*plVar23 + 0xe4));
            if (plVar23 < plVar8) goto LAB_14033b320;
            lVar12 = *plVar8;
            *plVar8 = *plVar23;
            *plVar23 = lVar12;
          } while( true );
        }
        if (plVar11 < plVar3) {
          do {
            plVar8 = plVar11;
            if (plVar11 + 1 <= plVar3) {
              lVar12 = *plVar11;
              plVar13 = plVar11 + 1;
              do {
                fVar27 = *(float *)(*plVar13 + 0xe4);
                lVar10 = *plVar13;
                plVar9 = plVar13;
                if (fVar27 < *(float *)(lVar12 + 0xe4) || fVar27 == *(float *)(lVar12 + 0xe4)) {
                  lVar10 = lVar12;
                  plVar9 = plVar8;
                }
                plVar8 = plVar9;
                plVar13 = plVar13 + 1;
                lVar12 = lVar10;
              } while (plVar13 <= plVar3);
            }
            lVar12 = *plVar8;
            *plVar8 = *plVar3;
            *plVar3 = lVar12;
            plVar3 = plVar3 + -1;
          } while (plVar11 < plVar3);
        }
        goto LAB_14033b579;
      }
LAB_14033b3b3:
      iVar17 = (int)uVar22;
      if (iVar17 != 0) {
        iVar14 = (iVar14 - (iVar14 + -1 >> 0x1f)) + -1 >> 1;
        iVar20 = iVar14;
joined_r0x00014033b3da:
        do {
          iVar19 = iVar14 * 2 + 1;
          if (iVar19 < iVar17) {
            iVar18 = iVar14 * 2 + 2;
            if ((iVar18 < iVar17) &&
               (*(float *)(plVar8[iVar19] + 0xe4) < *(float *)(plVar8[iVar18] + 0xe4) ||
                *(float *)(plVar8[iVar19] + 0xe4) == *(float *)(plVar8[iVar18] + 0xe4))) {
              iVar19 = iVar18;
            }
            lVar12 = plVar8[iVar14];
            fVar27 = *(float *)(plVar8[iVar19] + 0xe4);
            pfVar1 = (float *)(lVar12 + 0xe4);
            if (*pfVar1 <= fVar27 && fVar27 != *pfVar1) {
              plVar8[iVar14] = plVar8[iVar19];
              plVar8[iVar19] = lVar12;
              iVar14 = iVar19;
              goto joined_r0x00014033b3da;
            }
          }
          bVar26 = iVar20 != 0;
          iVar14 = iVar20 + -1;
          iVar20 = iVar14;
        } while (bVar26);
        if (1 < iVar17) {
          lVar12 = *plVar8;
          *plVar8 = plVar8[uVar22 - 1];
          plVar8[uVar22 - 1] = lVar12;
          if (iVar17 != 2) {
            do {
              uVar15 = uVar22 - 1;
              iVar17 = 0;
              iVar20 = 1;
              iVar14 = 0;
              do {
                iVar17 = iVar17 + 2;
                iVar19 = iVar20;
                if (((longlong)iVar17 < (longlong)uVar15) &&
                   (*(float *)(plVar8[iVar20] + 0xe4) < *(float *)(plVar8[iVar17] + 0xe4) ||
                    *(float *)(plVar8[iVar20] + 0xe4) == *(float *)(plVar8[iVar17] + 0xe4))) {
                  iVar19 = iVar17;
                }
                lVar12 = plVar8[iVar14];
                fVar27 = *(float *)(plVar8[iVar19] + 0xe4);
                pfVar1 = (float *)(lVar12 + 0xe4);
                if (fVar27 < *pfVar1 || fVar27 == *pfVar1) break;
                plVar8[iVar14] = plVar8[iVar19];
                plVar8[iVar19] = lVar12;
                iVar17 = iVar19 * 2;
                iVar20 = iVar19 * 2 + 1;
                iVar14 = iVar19;
              } while ((longlong)iVar20 < (longlong)uVar15);
              lVar12 = *plVar8;
              *plVar8 = plVar8[uVar22 - 2];
              plVar8[uVar22 - 2] = lVar12;
              uVar22 = uVar15;
            } while (2 < uVar15);
          }
        }
      }
LAB_14033b579:
      pplVar7 = pplVar7 + -3;
    } while (&local_368 <= pplVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14033b320:
  lVar12 = *plVar11;
  *plVar11 = *plVar23;
  *plVar23 = lVar12;
  iVar17 = iVar17 + -1;
  plVar16 = plVar16 + -2;
  if ((longlong)plVar24 - (longlong)plVar9 < (longlong)plVar13 - (longlong)plVar25) {
    if (plVar8 < plVar3) {
      *pplVar7 = plVar8;
      pplVar7[1] = plVar3;
      *(int *)(pplVar7 + 2) = iVar17;
      pplVar7 = pplVar7 + 3;
    }
    plVar8 = plVar11;
    plVar13 = plVar24;
    if (plVar23 <= plVar11 + 1) goto LAB_14033b579;
  }
  else {
    if (plVar11 + 1 < plVar23) {
      *pplVar7 = plVar11;
      pplVar7[1] = plVar16;
      *(int *)(pplVar7 + 2) = iVar17;
      pplVar7 = pplVar7 + 3;
    }
    plVar11 = plVar25;
    plVar16 = plVar3;
    plVar13 = plVar3;
    if (plVar3 <= plVar8) goto LAB_14033b579;
  }
  iVar14 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar11) >> 3);
  uVar22 = (ulonglong)(iVar14 + 1);
  plVar9 = plVar11;
  plVar11 = plVar8;
  plVar3 = plVar16;
  if (iVar17 == 0) goto LAB_14033b3b3;
  goto LAB_14033b27a;
}



// FUNCTION 14033b5bc FUN_14033b5bc body=2103 status=ok
// SIG undefined FUN_14033b5bc(void)

void FUN_14033b5bc(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined1 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined2 *local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b0;
  int local_a8;
  undefined1 local_9c [4];
  undefined2 *local_98;
  undefined2 **ppuStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_145700ed2((longlong *)(param_1 + 0x2d8));
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(&local_b0,&DAT_14c846b20);
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  puVar7 = local_b0;
  if (local_a8 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_108 = 0;
  local_f0 = (longlong *)(param_1 + 0x2d8);
  cVar2 = FUN_14063337c(puVar7,L"-NexusDevLayer=",&local_c8,1);
  plVar12 = (longlong *)0x0;
  plVar18 = (longlong *)0x0;
  if (cVar2 != '\0') {
    puVar7 = &DAT_149dfb77a;
    if ((int)uStack_c0 != 0) {
      puVar7 = local_c8;
    }
    FUN_140002266(&local_98,L"dev_%ls",puVar7);
    puVar7 = &DAT_149dfb77a;
    if ((int)ppuStack_90 != 0) {
      puVar7 = local_98;
    }
    FUN_1446f470e(&local_d8,puVar7,1);
    plVar12 = (longlong *)((ulonglong)local_d8 >> 0x20);
    plVar18 = local_d8;
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_f8 = (longlong *)(param_1 + 0x2c8);
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  uVar17 = (ulonglong)*(uint *)(param_1 + 0x2d0);
  if (0 < (int)*(uint *)(param_1 + 0x2d0)) {
    lVar11 = 0;
    do {
      puVar7 = (undefined2 *)(*local_f8 + lVar11 * 0x60);
      uVar13 = (ulonglong)plVar18 & 0xffffffff;
      uVar17 = *(ulonglong *)(*local_f8 + lVar11 * 0x60);
      plVar18 = (longlong *)((ulonglong)plVar18 & 0xffffffff);
      if (uVar17 == (uVar13 | (longlong)plVar12 << 0x20)) {
        plVar12 = (longlong *)0x0;
        plVar18 = (longlong *)0x0;
      }
      local_98 = puVar7;
      if ((param_2 != (longlong *)0x0) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
        uVar16 = (uint)(uVar17 >> 0x10);
        uVar10 = (uint)uVar17 & 0xffff;
        plVar4 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar4 = param_2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)(uVar17 >> 0x20) + ((uint)uVar17 << 0x10 | uVar10) +
                        (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            puVar5 = (ulonglong *)(*param_2 + (longlong)iVar3 * 0x14);
            if (*puVar5 == uVar17) {
              if ((puVar5 != (ulonglong *)0x0) && (puVar5 + 1 != (ulonglong *)0x0)) {
                cVar2 = (char)puVar5[1];
                if (cVar2 == '\x01') {
                  *(undefined1 *)(puVar7 + 6) = 1;
                  FUN_145700f16(&local_d8);
                }
                else if (cVar2 == '\x02') {
                  *(undefined1 *)(puVar7 + 6) = 0;
                }
                else if (cVar2 == '\x03') {
                  *(undefined1 *)(puVar7 + 6) = 0;
                  *(undefined1 *)(puVar7 + 0x1a) = 1;
                }
              }
              break;
            }
            iVar3 = *(int *)((longlong)puVar5 + 0xc);
          } while (iVar3 != -1);
        }
      }
      *(undefined1 *)((longlong)puVar7 + 0x35) = *(undefined1 *)(puVar7 + 6);
      lVar11 = lVar11 + 1;
      uVar17 = (ulonglong)*(int *)(param_1 + 0x2d0);
    } while (lVar11 < (longlong)uVar17);
    if ((longlong)(int)uStack_d0 != 0) {
      plVar4 = local_d8;
      do {
        iVar3 = *(int *)(param_1 + 0x2d0);
        if ((longlong)iVar3 != 0) {
          lVar11 = *(longlong *)(param_1 + 0x2c8);
          lVar15 = 0;
          do {
            if (((*(int *)(lVar11 + 8 + lVar15) == (int)((longlong *)*plVar4)[1]) &&
                (*(longlong *)(lVar11 + lVar15) != *(longlong *)*plVar4)) &&
               (*(char *)(lVar11 + 0x34 + lVar15) == '\0')) {
              *(undefined1 *)(lVar11 + 0xc + lVar15) = 0;
              *(undefined1 *)(lVar11 + 0x35 + lVar15) = 0;
            }
            lVar15 = lVar15 + 0x60;
          } while ((longlong)iVar3 * 0x60 != lVar15);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != local_d8 + (int)uStack_d0);
      uVar17 = (ulonglong)*(uint *)(param_1 + 0x2d0);
    }
  }
  uVar16 = (uint)uVar17;
  uVar13 = (ulonglong)plVar18 & 0xffffffff | (longlong)plVar12 << 0x20;
  if (uVar13 != 0) {
    iVar3 = 1000;
    if (0 < (int)uVar16) {
      iVar3 = *(int *)(*local_f8 + -0x58 + (uVar17 & 0xffffffff) * 0x60) + 100;
    }
    puVar5 = (ulonglong *)FUN_1470a01ee(local_f8);
    *puVar5 = uVar13;
    *(int *)(puVar5 + 1) = iVar3;
    *(undefined1 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined2 *)((longlong)puVar5 + 0x34) = 0x100;
    uVar6 = 1;
    if ((param_2 != (longlong *)0x0) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
      uVar16 = (uint)((ulonglong)plVar18 >> 0x10);
      uVar10 = (uint)plVar18 & 0xffff;
      plVar4 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_2[8];
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (uint)plVar18 * 0x10000 + (int)plVar12 + uVar10 +
                      (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          puVar1 = (ulonglong *)(*param_2 + (longlong)iVar3 * 0x14);
          if (*puVar1 == uVar13) {
            if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) break;
            cVar2 = (char)puVar1[1];
            if (cVar2 == '\x03') {
              *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
              *(undefined1 *)((longlong)puVar5 + 0x34) = 1;
            }
            else {
              if (cVar2 != '\x02') break;
              *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
            }
            uVar6 = 0;
            break;
          }
          iVar3 = *(int *)((longlong)puVar1 + 0xc);
        } while (iVar3 != -1);
      }
    }
    *(undefined1 *)((longlong)puVar5 + 0x35) = uVar6;
    uVar16 = *(uint *)(param_1 + 0x2d0);
  }
  plVar18 = local_f0;
  if (0 < (int)uVar16) {
    lVar11 = 0;
    lVar15 = 0;
    do {
      lVar8 = *local_f8;
      local_e0 = (undefined2 *)(lVar8 + lVar11);
      *(undefined4 *)(lVar8 + 0x40 + lVar11) = *(undefined4 *)(lVar8 + 8 + lVar11);
      *(int *)(lVar8 + 0x30 + lVar11) = (int)lVar15;
      if (*(int *)(local_e0 + 4) < 1) {
        *(undefined1 *)((longlong)local_e0 + 0xd) = 0;
      }
      local_98 = local_e0;
      ppuStack_90 = &local_e0;
      FUN_145700c0c(plVar18,local_9c,&local_98);
      lVar15 = lVar15 + 1;
      uVar16 = *(uint *)(param_1 + 0x2d0);
      lVar11 = lVar11 + 0x60;
    } while (lVar15 < (int)uVar16);
    if (0 < (int)uVar16) {
      lVar11 = 0;
      do {
        lVar15 = *local_f8;
        lVar8 = lVar11 * 0x60;
        *(undefined4 *)(lVar15 + 0x40 + lVar8) = *(undefined4 *)(lVar15 + 8 + lVar8);
        FUN_1400021e4(lVar15 + lVar8,&local_98);
        uVar17 = (longlong)(int)ppuStack_90 * 2;
        do {
          if (uVar17 == 0) goto LAB_14033b9f6;
          uVar13 = uVar17 - 2;
          lVar9 = uVar17 - 2;
          uVar17 = uVar13;
        } while (*(short *)((longlong)local_98 + lVar9) != 0x2e);
        iVar3 = (int)(uVar13 >> 1);
        if (iVar3 != -1) {
          iVar14 = (int)ppuStack_90 + -1;
          if ((int)ppuStack_90 == 0) {
            iVar14 = 0;
          }
          if (iVar14 <= iVar3) {
            iVar3 = iVar14;
          }
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          FUN_14496493a(&local_98,iVar3,iVar14 - iVar3,1);
          puVar7 = &DAT_149dfb77a;
          if ((int)ppuStack_90 != 0) {
            puVar7 = local_98;
          }
          FUN_1446f470e(&local_e8,puVar7,1);
          if (*(int *)(param_1 + 0x2e0) != *(int *)(param_1 + 0x30c)) {
            uVar16 = (uint)((ulonglong)local_e8 >> 0x10);
            uVar10 = (uint)local_e8 & 0xffff;
            lVar9 = *(longlong *)(param_1 + 0x318);
            if (*(longlong *)(param_1 + 0x318) == 0) {
              lVar9 = param_1 + 0x310;
            }
            iVar3 = *(int *)(lVar9 + (ulonglong)
                                     (*(int *)(param_1 + 800) - 1U &
                                     (int)((ulonglong)local_e8 >> 0x20) +
                                     ((uint)local_e8 << 0x10 | uVar10) +
                                     (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar3 != -1) {
              do {
                plVar18 = (longlong *)(*local_f0 + (longlong)iVar3 * 0x18);
                if (*plVar18 == local_e8) {
                  if ((plVar18 != (longlong *)0x0) && (plVar18 + 1 != (longlong *)0x0)) {
                    *(longlong *)(lVar15 + lVar8 + 0x48) = plVar18[1];
                  }
                  break;
                }
                iVar3 = (int)plVar18[2];
              } while (iVar3 != -1);
            }
          }
        }
LAB_14033b9f6:
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + 1;
        uVar16 = *(uint *)(param_1 + 0x2d0);
      } while (lVar11 < (int)uVar16);
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (undefined2 *)0x0;
  ppuStack_90 = (undefined2 **)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (uVar16 != 0) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar16);
    }
    FUN_145701f50(&local_98,uVar16);
    if (uVar16 < 4) {
      iVar3 = 1;
    }
    else {
      uVar16 = (uVar16 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_14087068c();
    }
  }
  iVar3 = *(int *)(param_1 + 0x2d0);
  if (-1 < iVar3) {
    lVar11 = param_1 + 0x388;
    *(undefined4 *)(param_1 + 0x390) = 0;
    if (*(int *)(param_1 + 0x394) != iVar3) {
      FUN_145700f82(lVar11);
      iVar3 = *(int *)(param_1 + 0x2d0);
      if (iVar3 < 0) goto LAB_14033bbcc;
      if (*(int *)(param_1 + 0x394) < iVar3) {
        FUN_145700f82(lVar11);
        iVar3 = *(int *)(param_1 + 0x2d0);
      }
    }
    if (0 < iVar3) {
      lVar15 = 0;
      lVar8 = 0;
      do {
        FUN_14033bfd8(*(longlong *)(param_1 + 0x2c8) + lVar15,lVar11,&local_98);
        lVar8 = lVar8 + 1;
        lVar15 = lVar15 + 0x60;
      } while (lVar8 < *(int *)(param_1 + 0x2d0));
    }
    FUN_1457013a2(lVar11);
    FUN_14570107c(param_1);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14087e9d8(&local_98);
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14033bbcc:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 14033bdf4 FUN_14033bdf4 body=482 status=ok
// SIG undefined FUN_14033bdf4(void)

void FUN_14033bdf4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 14033bfd8 FUN_14033bfd8 body=2926 status=ok
// SIG undefined FUN_14033bfd8(void)

void FUN_14033bfd8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  wchar_t wVar2;
  void *pvVar3;
  longlong lVar4;
  wchar_t ****ppppwVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  wchar_t *****_Str1;
  undefined1 *puVar16;
  wchar_t *****pppppwVar17;
  byte bVar18;
  wchar_t wVar19;
  wchar_t *pwVar20;
  uint uVar21;
  wchar_t *pwVar22;
  short sVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  longlong *local_178;
  wchar_t *local_170;
  wchar_t *local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  longlong local_150;
  wchar_t local_142;
  wchar_t ***local_140;
  wchar_t local_138;
  undefined6 uStack_136;
  wchar_t *local_128;
  ulonglong uStack_120;
  wchar_t ****local_118;
  wchar_t *pwStack_110;
  longlong local_108 [2];
  wchar_t *local_f8;
  ulonglong uStack_f0;
  wchar_t *local_e8;
  ulonglong uStack_e0;
  wchar_t ****local_d8;
  wchar_t *pwStack_d0;
  undefined1 local_bc [4];
  wchar_t ****local_b8;
  wchar_t *pwStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  FUN_1403de9f2(param_1 + 0x10,&local_e8,&DAT_149e06196,1);
  uVar13 = 0;
  if ((longlong)(int)uStack_e0 != 0) {
    local_170 = local_e8 + (longlong)(int)uStack_e0 * 8;
    local_168 = (wchar_t *)(param_3 + 7);
    pwVar20 = local_e8;
    do {
      local_d8 = (wchar_t ****)0x0;
      pwStack_d0 = (wchar_t *)0x0;
      puVar8 = *(undefined2 **)pwVar20;
      iVar7 = *(int *)(pwVar20 + 4);
      uVar13 = (longlong)iVar7 * 2;
      do {
        bVar18 = 1;
        if (uVar13 == 0) goto LAB_14033c35c;
        uVar14 = uVar13 - 2;
        lVar4 = uVar13 - 2;
        uVar13 = uVar14;
      } while (*(short *)((longlong)puVar8 + lVar4) != 0x28);
      uVar24 = (uint)(uVar14 >> 1);
      if (uVar24 != 0xffffffff) {
        if (iVar7 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        uVar13 = 0;
        uVar21 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar21 = 0;
        }
        uVar12 = uVar21;
        if ((int)uVar24 < (int)uVar21) {
          uVar12 = uVar24;
        }
        uVar14 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar14 = uVar13;
        }
        FUN_14006620a(&local_b8,puVar8 + uVar14,uVar21 - (int)uVar14);
        FUN_1400b22c2(&local_f8,L"rInvalid resolution in tiff: zero or negative.");
        pwVar22 = local_f8;
        if ((int)uStack_f0 == 0) {
          pwVar22 = L"";
        }
        if (pwVar22 != (wchar_t *)0x0) {
          sVar9 = wcslen(pwVar22);
          local_180 = 0xffffffff;
          local_188 = 0;
          iVar7 = FUN_1447ee042(&local_b8,pwVar22,sVar9 & 0xffffffff,0);
          uVar13 = (ulonglong)(iVar7 != -1);
        }
        if (local_f8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400b22c2(&local_f8,&DAT_149e512b0);
        pwVar22 = local_f8;
        if ((int)uStack_f0 == 0) {
          pwVar22 = L"";
        }
        if (pwVar22 == (wchar_t *)0x0) {
          bVar25 = false;
        }
        else {
          sVar9 = wcslen(pwVar22);
          local_180 = 0xffffffff;
          local_188 = 0;
          iVar7 = FUN_1447ee042(&local_b8,pwVar22,sVar9 & 0xffffffff,0);
          bVar25 = iVar7 != -1;
        }
        if (local_f8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar21 = *(int *)(pwVar20 + 4) - 1;
        if (*(int *)(pwVar20 + 4) == 0) {
          uVar21 = 0;
        }
        if ((int)uVar21 <= (int)uVar24) {
          uVar24 = uVar21;
        }
        if ((int)uVar24 < 1) {
          uVar24 = 0;
        }
        FUN_14496493a(pwVar20,uVar24,uVar21 - uVar24,1);
        if ((wchar_t *****)local_b8 != (wchar_t *****)0x0) {
          FUN_1400020a8();
        }
        bVar18 = bVar25 | (byte)uVar13 ^ 1;
      }
LAB_14033c35c:
      local_f8 = (wchar_t *)0x0;
      uStack_f0 = 0;
      FUN_1403de9f2(pwVar20,&local_f8);
      if ((longlong)(int)uStack_f0 != 0) {
        local_160 = local_f8 + (longlong)(int)uStack_f0 * 8;
        wVar19 = L'\xffff';
        sVar23 = 0;
        pwVar22 = local_f8;
        local_158 = pwVar20;
        local_150 = param_1;
        do {
          local_178 = (longlong *)CONCAT62(local_178._2_6_,wVar19);
          FUN_14033cb48(pwVar22);
          iVar7 = (int)pwStack_d0;
          if ((int)pwStack_d0 < 2) {
            local_b8 = (wchar_t ****)0x0;
            uVar24 = *(uint *)(pwVar22 + 4);
            pvVar3 = *(void **)pwVar22;
            pwStack_b0 = (wchar_t *)CONCAT44(pwStack_b0._4_4_,uVar24);
            if ((longlong)(int)uVar24 == 0) {
              pwStack_b0 = (wchar_t *)(ulonglong)uVar24;
              pwVar20 = local_158;
            }
            else {
              FUN_1446dd670(&local_b8,uVar24,0);
              memcpy(local_b8,pvVar3,(longlong)(int)uVar24 * 2);
              pwVar20 = local_158;
            }
          }
          else {
            FUN_1449b8608(local_108,&local_d8,&DAT_149e0635c);
            FUN_144a7dea0(&local_b8,local_108);
          }
          if ((wchar_t *****)local_d8 != (wchar_t *****)0x0) {
            FUN_1400020a8();
          }
          local_d8 = local_b8;
          local_b8 = (wchar_t ****)0x0;
          iVar6 = (int)pwStack_b0;
          pwStack_d0 = pwStack_b0;
          pwStack_b0 = (wchar_t *)0x0;
          if ((1 < iVar7) && (local_108[0] != 0)) {
            FUN_1400020a8();
            iVar6 = (int)pwStack_d0;
          }
          pppppwVar17 = (wchar_t *****)local_d8;
          if (iVar6 == 0) {
            pppppwVar17 = (wchar_t *****)&DAT_149dfb77a;
          }
          FUN_1446f470e(&local_118,pppppwVar17,1);
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            uVar24 = (uint)((ulonglong)local_118 >> 0x10);
            uVar21 = (uint)local_118 & 0xffff;
            pwVar15 = (wchar_t *)param_3[8];
            if ((wchar_t *)param_3[8] == (wchar_t *)0x0) {
              pwVar15 = local_168;
            }
            iVar7 = *(int *)(pwVar15 +
                            (ulonglong)
                            ((int)param_3[9] - 1U &
                            (int)((ulonglong)local_118 >> 0x20) + ((uint)local_118 << 0x10 | uVar21)
                            + (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar21 >> 4)) * 2);
            if (iVar7 != -1) {
              do {
                puVar10 = (undefined8 *)(*param_3 + (longlong)iVar7 * 0x14);
                if ((wchar_t *****)*puVar10 == (wchar_t *****)local_118) {
                  if (((wchar_t *)(puVar10 + 1) != (wchar_t *)0x0 && puVar10 != (undefined8 *)0x0)
                     && (wVar19 = *(wchar_t *)(puVar10 + 1), L'\xffff' < wVar19))
                  goto LAB_14033c5d9;
                  break;
                }
                iVar7 = *(int *)((longlong)puVar10 + 0xc);
              } while (iVar7 != -1);
            }
          }
          local_138 = *(wchar_t *)(param_2 + 1);
          puVar10 = (undefined8 *)FUN_145701140(param_2);
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(pwVar22 + 4) != 0) {
            puVar8 = *(undefined2 **)pwVar22;
          }
          FUN_1446f470e(&local_b8,puVar8,1);
          *puVar10 = local_b8;
          puVar10[1] = local_118;
          *(short *)((longlong)puVar10 + 0x14) = sVar23;
          *(undefined2 *)((longlong)puVar10 + 0x16) = local_178._0_2_;
          local_b8 = (wchar_t ****)&local_118;
          pwStack_b0 = &local_138;
          FUN_1457011a6(param_3,&local_128);
          wVar19 = local_138;
LAB_14033c5d9:
          sVar23 = sVar23 + 1;
          pwVar22 = pwVar22 + 8;
        } while (pwVar22 != local_160);
        param_1 = local_150;
        if (L'\xffff' < wVar19) {
          *(byte *)(*param_2 + 0x12 + (ulonglong)(ushort)wVar19 * 0x1c) = bVar18;
        }
      }
      FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
      if (local_f8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((wchar_t *****)local_d8 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      pwVar20 = pwVar20 + 8;
    } while (pwVar20 != local_170);
    uVar13 = uStack_e0 & 0xffffffff;
  }
  FUN_1447a1747(local_e8,uVar13);
  uVar13 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_1408be2c4(&local_e8,0);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = (wchar_t ****)0x0;
  pwStack_b0 = (wchar_t *)0x0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_f8 = (wchar_t *)0x0;
  uStack_f0 = 0;
  FUN_1403de9f2(param_1 + 0x20,&local_f8,&DAT_149e06196,1);
  if ((longlong)(int)uStack_f0 != 0) {
    pwVar22 = local_f8 + (longlong)(int)uStack_f0 * 8;
    local_178 = (longlong *)(param_1 + 0x50);
    pwVar20 = local_f8;
    do {
      local_118 = (wchar_t ****)0x0;
      pwStack_110 = (wchar_t *)0x0;
      local_128 = (wchar_t *)0x0;
      uStack_120 = 0;
      FUN_1403de9f2(pwVar20,&local_128,&DAT_149e0635c,1);
      if ((longlong)(int)uStack_120 != 0) {
        local_160 = local_128 + (longlong)(int)uStack_120 * 8;
        wVar19 = L'\xffff';
        sVar23 = 0;
        pwVar15 = local_128;
        local_170 = pwVar22;
        local_168 = pwVar20;
        do {
          FUN_14033cb48(pwVar15);
          FUN_140056680(&local_d8,&DAT_149e060b2);
          ppppwVar5 = local_d8;
          pppppwVar17 = (wchar_t *****)local_d8;
          if ((int)pwStack_d0 == 0) {
            pppppwVar17 = (wchar_t *****)&DAT_149dfb77a;
          }
          _Str1 = (wchar_t *****)&DAT_149dfb77a;
          if (*(int *)(pwVar15 + 4) != 0) {
            _Str1 = *(wchar_t ******)pwVar15;
          }
          iVar7 = wcscmp((wchar_t *)_Str1,(wchar_t *)pppppwVar17);
          if ((wchar_t *****)ppppwVar5 != (wchar_t *****)0x0) {
            FUN_1400020a8(ppppwVar5);
          }
          if (iVar7 == 0) {
            uVar11 = 1;
            goto LAB_14033ca9c;
          }
          iVar7 = (int)pwStack_110;
          if ((int)pwStack_110 < 2) {
            local_d8 = (wchar_t ****)0x0;
            uVar24 = *(uint *)(pwVar15 + 4);
            pvVar3 = *(void **)pwVar15;
            pwStack_d0 = (wchar_t *)CONCAT44(pwStack_d0._4_4_,uVar24);
            if ((longlong)(int)uVar24 == 0) {
              pwStack_d0 = (wchar_t *)(ulonglong)uVar24;
            }
            else {
              FUN_1446dd670(&local_d8,uVar24,0);
              memcpy(local_d8,pvVar3,(longlong)(int)uVar24 * 2);
            }
          }
          else {
            FUN_1449b8608(&local_138,&local_118,&DAT_149e0635c);
            FUN_144a7dea0(&local_d8,&local_138);
          }
          if ((wchar_t *****)local_118 != (wchar_t *****)0x0) {
            FUN_1400020a8();
          }
          local_118 = local_d8;
          local_d8 = (wchar_t ****)0x0;
          iVar6 = (int)pwStack_d0;
          pwStack_110 = pwStack_d0;
          pwStack_d0 = (wchar_t *)0x0;
          if ((1 < iVar7) && (CONCAT62(uStack_136,local_138) != 0)) {
            FUN_1400020a8();
            iVar6 = (int)pwStack_110;
          }
          pppppwVar17 = (wchar_t *****)local_118;
          if (iVar6 == 0) {
            pppppwVar17 = (wchar_t *****)&DAT_149dfb77a;
          }
          FUN_1446f470e(&local_140,pppppwVar17,1);
          if ((int)pwStack_b0 != local_84) {
            uVar24 = (uint)((ulonglong)local_140 >> 0x10);
            uVar21 = (uint)local_140 & 0xffff;
            puVar16 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar16 = local_80;
            }
            iVar7 = *(int *)(puVar16 +
                            (ulonglong)
                            (local_70 - 1U &
                            (int)((ulonglong)local_140 >> 0x20) + ((uint)local_140 << 0x10 | uVar21)
                            + (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar21 >> 4)) * 4);
            while (iVar7 != -1) {
              plVar1 = (longlong *)((longlong)local_b8 + (longlong)iVar7 * 0x14);
              if ((wchar_t ****)*plVar1 == (wchar_t ****)local_140) {
                if (((wchar_t *)(plVar1 + 1) != (wchar_t *)0x0 && plVar1 != (longlong *)0x0) &&
                   (wVar2 = *(wchar_t *)(plVar1 + 1), L'\xffff' < wVar2)) goto LAB_14033ca28;
                break;
              }
              iVar7 = *(int *)((longlong)plVar1 + 0xc);
            }
          }
          local_142 = *(wchar_t *)(param_1 + 0x58);
          puVar10 = (undefined8 *)FUN_145701140(local_178);
          pppppwVar17 = (wchar_t *****)&DAT_149dfb77a;
          if (*(int *)(pwVar15 + 4) != 0) {
            pppppwVar17 = *(wchar_t ******)pwVar15;
          }
          FUN_1446f470e(&local_d8,pppppwVar17,1);
          *puVar10 = local_d8;
          puVar10[1] = local_140;
          *(short *)((longlong)puVar10 + 0x14) = sVar23;
          *(wchar_t *)((longlong)puVar10 + 0x16) = wVar19;
          *(undefined1 *)(puVar10 + 2) = 1;
          local_d8 = &local_140;
          pwStack_d0 = &local_142;
          FUN_1457011a6(&local_b8,local_bc,&local_d8,0);
          wVar2 = local_142;
LAB_14033ca28:
          wVar19 = wVar2;
          sVar23 = sVar23 + 1;
          pwVar15 = pwVar15 + 8;
        } while (pwVar15 != local_160);
        uVar11 = 0;
LAB_14033ca9c:
        pwVar20 = local_168;
        pwVar22 = local_170;
        if (L'\xffff' < wVar19) {
          lVar4 = *local_178;
          *(undefined1 *)(lVar4 + 0x10 + (ulonglong)(ushort)wVar19 * 0x1c) = 0;
          *(undefined1 *)(lVar4 + 0x11 + (ulonglong)(ushort)wVar19 * 0x1c) = uVar11;
        }
      }
      FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
      if (local_128 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((wchar_t *****)local_118 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      pwVar20 = pwVar20 + 8;
    } while (pwVar20 != pwVar22);
  }
  FUN_1457013a2(param_1 + 0x50);
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14087e9d8(&local_b8);
  FUN_1447a1747(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14033cb48 FUN_14033cb48 body=26 status=ok
// SIG undefined FUN_14033cb48(void)

void FUN_14033cb48(undefined8 param_1)

{
  FUN_140ded26a();
  FUN_140ded312(param_1);
  return;
}



// FUNCTION 14033cb62 FUN_14033cb62 body=10789 status=ok
// SIG undefined FUN_14033cb62(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14033cb62(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined2 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  ushort *puVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  int *piVar21;
  longlong lVar22;
  ulonglong *puVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  byte bVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  int *piVar30;
  longlong lVar31;
  int *piVar32;
  ulonglong uVar33;
  longlong *plVar34;
  undefined1 *puVar35;
  undefined2 *puVar36;
  undefined8 *puVar37;
  undefined8 *******pppppppuVar38;
  ulonglong uVar39;
  undefined8 *puVar40;
  code *pcVar41;
  longlong *plVar42;
  int iVar43;
  undefined8 *puVar44;
  undefined4 *puVar45;
  undefined8 *puVar46;
  code *pcVar47;
  undefined4 *puVar48;
  uint uVar49;
  uint uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  undefined8 *puVar54;
  undefined8 *puVar55;
  int iVar56;
  int iVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  int iVar61;
  bool bVar62;
  float fVar63;
  undefined1 auStack_ae8 [32];
  wchar_t *local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  wchar_t *local_ab0;
  wchar_t *local_aa8;
  code *local_aa0;
  undefined1 *local_a98;
  int *local_a90;
  code *local_a88;
  code *local_a80;
  longlong local_a78;
  longlong *local_a70;
  ulonglong local_a68;
  ulonglong local_a60;
  longlong local_a58;
  longlong local_a50;
  longlong local_a48;
  longlong *local_a40;
  ulonglong local_a38;
  longlong *local_a30;
  longlong local_a28;
  longlong local_a20;
  longlong *local_a18;
  longlong *local_a10;
  ulonglong local_a08;
  longlong local_a00;
  code *local_9f8;
  ulonglong uStack_9f0;
  ushort local_9e8;
  undefined2 uStack_9e6;
  int iStack_9e4;
  int local_9e0;
  undefined4 uStack_9dc;
  undefined4 uStack_9d8;
  undefined8 local_9d0;
  ushort *local_9c8;
  undefined1 local_9bc [4];
  longlong local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_998;
  undefined4 local_990;
  undefined8 local_98c;
  int local_984;
  undefined1 local_980 [8];
  undefined1 *local_978;
  int local_970;
  undefined8 local_968;
  int aiStack_960 [4];
  int *local_950;
  undefined8 uStack_948;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 *******local_900 [3];
  ulonglong local_8e8;
  undefined8 *******local_8e0 [3];
  ulonglong local_8c8;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined1 *local_888;
  int *piStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  longlong local_858;
  longlong *local_848;
  longlong local_838 [4];
  undefined8 local_818;
  undefined1 local_78 [8];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  local_9f8 = (code *)0x0;
  uStack_9f0 = 0;
  local_998 = 0;
  local_990 = 0;
  local_9b8 = 0;
  uStack_9b0 = 0;
  local_98c = 0xffffffff00000080;
  local_984 = 0;
  local_978 = (undefined1 *)0x0;
  local_970 = 0;
  local_a78 = param_1;
  if (DAT_14c9a1ab8 != (longlong *)0x0) {
    plVar42 = DAT_14c9a1ab8;
    do {
      if (((code *)plVar42[1] != (code *)0x0) && (lVar20 = (*(code *)plVar42[1])(), lVar20 != 0)) {
        FUN_1400bbfc4(&local_898,lVar20);
        local_9e8 = (ushort)uStack_9f0;
        uStack_9e6 = (undefined2)(uStack_9f0 >> 0x10);
        FUN_14475cc44(&local_898,&local_968);
        puVar36 = &DAT_149dfb77a;
        if (aiStack_960[0] != 0) {
          puVar36 = (undefined2 *)
                    CONCAT44(local_968._4_4_,CONCAT22(local_968._2_2_,(undefined2)local_968));
        }
        FUN_1446f470e(&local_9d0,puVar36,1);
        uStack_930 = &local_9e8;
        local_938 = &local_9d0;
        FUN_14147c052(&local_9b8,&local_9e0,&local_938,0);
        if (CONCAT44(local_968._4_4_,CONCAT22(local_968._2_2_,(undefined2)local_968)) != 0) {
          FUN_1400020a8();
        }
        piVar21 = (int *)FUN_140d5d112(&local_9f8);
        puVar35 = local_888;
        *(longlong *)(piVar21 + 10) = lVar20;
        *piVar21 = (int)local_898;
        piVar21[1] = local_898._4_4_;
        piVar21[2] = (int)uStack_890;
        piVar21[3] = uStack_890._4_4_;
        if (piVar21 != (int *)&local_898) {
          iVar56 = (int)piStack_880;
          lVar20 = (longlong)(int)piStack_880;
          piVar21[6] = (int)piStack_880;
          if ((int)piStack_880 == 0 && piVar21[7] == 0) {
            piVar21[7] = 0;
          }
          else {
            FUN_1446dd670(piVar21 + 4);
            if (iVar56 != 0) {
              memcpy(*(void **)(piVar21 + 4),puVar35,lVar20 * 2);
            }
          }
        }
        *(undefined1 *)(piVar21 + 9) = *(undefined1 *)((longlong)plVar42 + 0x14);
        piVar21[8] = (int)plVar42[2];
        *(undefined2 *)((longlong)piVar21 + 0x25) = 0;
        if (local_888 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar42 = (longlong *)*plVar42;
    } while (plVar42 != (longlong *)0x0);
  }
  if ((longlong)*(int *)(local_a78 + 0x248) != 0) {
    puVar48 = *(undefined4 **)(local_a78 + 0x240);
    puVar45 = puVar48 + (longlong)*(int *)(local_a78 + 0x248) * 0xc;
    do {
      FUN_14475cc44(puVar48,&local_938);
      puVar28 = (undefined8 *)&DAT_149dfb77a;
      if ((int)uStack_930 != 0) {
        puVar28 = local_938;
      }
      FUN_1446f470e(&local_9e8,puVar28,1);
      if ((int)uStack_9b0 != local_984) {
        lVar20 = CONCAT44(iStack_9e4,CONCAT22(uStack_9e6,local_9e8));
        uVar27 = (uint)((ulonglong)lVar20 >> 0x10);
        puVar35 = local_978;
        if (local_978 == (undefined1 *)0x0) {
          puVar35 = local_980;
        }
        iVar56 = *(int *)(puVar35 +
                         (ulonglong)
                         (local_970 - 1U &
                         iStack_9e4 + (CONCAT22(uStack_9e6,local_9e8) << 0x10 | (uint)local_9e8) +
                         (uVar27 << 0x13 | uVar27 & 0xffff) + (uint)(local_9e8 >> 4)) * 4);
        while (iVar56 != -1) {
          plVar42 = (longlong *)(local_9b8 + (longlong)iVar56 * 0x14);
          if (*plVar42 == lVar20) {
            if (plVar42 + 1 != (longlong *)0x0 && plVar42 != (longlong *)0x0) {
              lVar20 = (longlong)(int)plVar42[1];
              *(undefined4 *)(local_9f8 + (lVar20 * 0x18 + 0x10) * 2) = puVar48[8];
              local_9f8[(lVar20 * 0x18 + 0x13) * 2] = (code)0x1;
              goto LAB_14033f27e;
            }
            break;
          }
          iVar56 = *(int *)((longlong)plVar42 + 0xc);
        }
      }
      local_9d0 = (int *)CONCAT44(local_9d0._4_4_,(int)uStack_9f0);
      uStack_890 = (code *)&local_9d0;
      local_898 = (code *)&local_9e8;
      FUN_1410952c6(&local_9b8,&local_968,&local_898,0);
      puVar24 = (undefined4 *)FUN_140d5d112(&local_9f8);
      uVar4 = puVar48[1];
      uVar5 = puVar48[2];
      uVar6 = puVar48[3];
      *puVar24 = *puVar48;
      puVar24[1] = uVar4;
      puVar24[2] = uVar5;
      puVar24[3] = uVar6;
      if (puVar24 != puVar48) {
        iVar56 = puVar48[6];
        _Src = *(void **)(puVar48 + 4);
        puVar24[6] = iVar56;
        if (iVar56 == 0 && puVar24[7] == 0) {
          puVar24[7] = 0;
        }
        else {
          FUN_1446dd670(puVar24 + 4,iVar56);
          if (iVar56 != 0) {
            memcpy(*(void **)(puVar24 + 4),_Src,(longlong)iVar56 * 2);
          }
        }
      }
      uVar4 = puVar48[9];
      uVar5 = puVar48[10];
      uVar6 = puVar48[0xb];
      puVar24[8] = puVar48[8];
      puVar24[9] = uVar4;
      puVar24[10] = uVar5;
      puVar24[0xb] = uVar6;
      *(undefined1 *)((longlong)puVar24 + 0x25) = 1;
      puVar28 = (undefined8 *)&DAT_149dfb77a;
      if ((int)uStack_930 != 0) {
        puVar28 = local_938;
      }
      if (DAT_14c949118 == 0) {
        local_9e0 = 0x40631fbe;
        uStack_9dc = 1;
        lVar20 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar20;
        FUN_1446f470e(&local_9d0,L"Class",1);
        local_a90 = &local_9e0;
        local_a98 = &LAB_146891e90;
        local_aa0 = (code *)&LAB_146273097;
        local_ab0 = L"Engine";
        local_aa8 = (wchar_t *)CONCAT44(local_aa8._4_4_,199);
        local_ab8 = 0x20;
        local_ac0._0_4_ = 0x10000000;
        local_ac8._0_4_ = 8;
        FUN_14574b4b2(lVar20);
        DAT_14c949118 = lVar20;
        if (DAT_14c951858 == 0) {
          local_898 = FUN_1449e2820;
          local_a80 = FUN_14081d0ea;
          local_a88 = FUN_14081d0ea;
          local_a90 = (int *)&local_898;
          local_a98 = &LAB_1468c5283;
          local_aa0 = FUN_142809da0;
          local_aa8 = L"Engine";
          local_ab0 = (wchar_t *)0x400000000;
          local_ab8 = CONCAT44(local_ab8._4_4_,0x10000000);
          local_ac0._0_4_ = 8;
          local_ac8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar31 = DAT_14c951858;
        lVar20 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_968._0_2_ = 0xb2a2;
          local_968._2_2_ = 0x427d;
          local_968._4_4_ = 1;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_a70 = (longlong *)DAT_14c948f88;
          FUN_1446f470e(&local_898,L"Struct",1);
          local_a90 = (int *)&local_968;
          local_a98 = &LAB_146891313;
          local_aa0 = FUN_146272f63;
          local_ab0 = L"Engine";
          local_aa8 = (wchar_t *)CONCAT44(local_aa8._4_4_,199);
          local_ab8 = 8;
          local_ac0._0_4_ = 0x10000020;
          local_ac8 = (wchar_t *)CONCAT44(local_ac8._4_4_,8);
          FUN_14574b4b2(local_a70);
          DAT_14c948f88 = (longlong)local_a70;
          local_a70 = (longlong *)FUN_1446f8646();
          local_a58 = DAT_14c948f88;
          uVar25 = FUN_1400163b0();
          local_ac8 = L"Struct";
          FUN_14574b446(uVar25,local_a58,local_a70,L"/Script/CoreUObject");
        }
        local_ac8 = L"Class";
        FUN_14574b446(DAT_14c948f88,lVar20,lVar31);
      }
      local_ab0 = (wchar_t *)0x0;
      local_ac0 = 0;
      local_ab8 = CONCAT71(local_ab8._1_7_,1);
      local_ac8 = (wchar_t *)((ulonglong)local_ac8 & 0xffffffff00000000);
      uVar25 = FUN_1412ecd05(DAT_14c949118,local_a78,puVar28);
      *(undefined8 *)(puVar24 + 10) = uVar25;
LAB_14033f27e:
      if (local_938 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      puVar48 = puVar48 + 0xc;
    } while (puVar48 != puVar45);
  }
  FUN_140171a5c(&local_9b8);
  pcVar47 = local_9f8;
  iVar56 = (int)uStack_9f0;
  lVar20 = (longlong)(int)uStack_9f0;
  if (1 < lVar20) {
    memset(&local_888,0,0x2f0);
    local_898 = pcVar47;
    uStack_890 = pcVar47 + (lVar20 * 0x18 + -0x18) * 2;
    fVar63 = logf((float)iVar56);
    local_888 = (undefined1 *)CONCAT44(local_888._4_4_,(int)(longlong)(fVar63 + fVar63));
    puVar28 = &local_898;
    do {
      puVar37 = (undefined8 *)*puVar28;
      puVar44 = (undefined8 *)puVar28[1];
      iVar56 = *(int *)(puVar28 + 2);
      iVar61 = (int)((ulonglong)((longlong)puVar44 - (longlong)puVar37) >> 4) * -0x55555555;
      uVar27 = iVar61 + 1;
      puVar46 = puVar37;
      puVar40 = puVar37;
      puVar54 = puVar44;
      if (iVar56 != 0) {
LAB_14033ce2a:
        if (8 < (int)uVar27) {
          uVar51 = (ulonglong)(uVar27 >> 1);
          uVar25 = puVar40[uVar51 * 6];
          uVar7 = (puVar40 + uVar51 * 6)[1];
          uVar8 = puVar40[uVar51 * 6 + 2];
          uVar9 = (puVar40 + uVar51 * 6 + 2)[1];
          uVar10 = puVar40[uVar51 * 6 + 4];
          uVar11 = (puVar40 + uVar51 * 6 + 4)[1];
          uVar12 = *puVar40;
          uVar13 = puVar40[1];
          uVar14 = puVar40[2];
          uVar15 = puVar40[3];
          uVar16 = puVar40[5];
          puVar40[uVar51 * 6 + 4] = puVar40[4];
          (puVar40 + uVar51 * 6 + 4)[1] = uVar16;
          puVar40[uVar51 * 6 + 2] = uVar14;
          (puVar40 + uVar51 * 6 + 2)[1] = uVar15;
          puVar40[uVar51 * 6] = uVar12;
          (puVar40 + uVar51 * 6)[1] = uVar13;
          puVar40[4] = uVar10;
          puVar40[5] = uVar11;
          puVar40[2] = uVar8;
          puVar40[3] = uVar9;
          *puVar40 = uVar25;
          puVar40[1] = uVar7;
          puVar58 = puVar54 + 6;
          puVar37 = puVar40;
          do {
            puVar18 = puVar37 + 6;
            puVar55 = puVar37 + 6;
            do {
              puVar37 = puVar55;
              puVar60 = puVar18;
              if (puVar54 < puVar37) break;
              puVar18 = puVar60 + 6;
              puVar55 = puVar37 + 6;
            } while (*(float *)(puVar37 + 4) < *(float *)(puVar40 + 4) ||
                     *(float *)(puVar37 + 4) == *(float *)(puVar40 + 4));
            puVar18 = puVar58 + -0xc;
            do {
              puVar55 = puVar58;
              puVar59 = puVar18;
              puVar58 = puVar55 + -6;
              if (puVar58 <= puVar40) break;
              puVar18 = puVar59 + -6;
            } while (*(float *)(puVar40 + 4) < *(float *)(puVar55 + -2) ||
                     *(float *)(puVar40 + 4) == *(float *)(puVar55 + -2));
            if (puVar58 < puVar37) goto LAB_14033cf74;
            uVar25 = *puVar37;
            uVar7 = puVar37[1];
            uVar8 = puVar37[2];
            uVar9 = puVar37[3];
            uVar10 = puVar37[4];
            uVar11 = puVar37[5];
            uVar12 = *puVar58;
            uVar13 = puVar55[-5];
            uVar14 = puVar55[-4];
            uVar15 = puVar55[-3];
            uVar16 = puVar55[-1];
            puVar37[4] = puVar55[-2];
            puVar37[5] = uVar16;
            puVar37[2] = uVar14;
            puVar37[3] = uVar15;
            *puVar37 = uVar12;
            puVar37[1] = uVar13;
            puVar55[-2] = uVar10;
            puVar55[-1] = uVar11;
            puVar55[-4] = uVar8;
            puVar55[-3] = uVar9;
            *puVar58 = uVar25;
            puVar55[-5] = uVar7;
          } while( true );
        }
        for (; puVar44 = puVar40, puVar37 = puVar40, puVar40 < puVar54;
            puVar54 = (undefined8 *)((longlong)puVar54 + 0xffffffffffffffd0)) {
          while (puVar46 = puVar44, puVar37 = puVar37 + 6, puVar37 <= puVar54) {
            puVar44 = puVar37;
            if (*(float *)(puVar37 + 4) < *(float *)(puVar46 + 4) ||
                *(float *)(puVar37 + 4) == *(float *)(puVar46 + 4)) {
              puVar44 = puVar46;
            }
          }
          local_938 = (longlong *)*puVar46;
          uStack_930 = (ushort *)puVar46[1];
          local_928 = puVar46[2];
          uStack_920 = puVar46[3];
          local_918 = puVar46[4];
          uStack_910 = puVar46[5];
          puVar37 = local_938;
          puVar17 = uStack_930;
          uVar25 = *puVar54;
          uVar7 = *(undefined8 *)((longlong)puVar54 + 8);
          uVar8 = *(undefined8 *)((longlong)puVar54 + 0x10);
          uVar9 = *(undefined8 *)((longlong)puVar54 + 0x18);
          uVar10 = *(undefined8 *)((longlong)puVar54 + 0x28);
          puVar46[4] = *(undefined8 *)((longlong)puVar54 + 0x20);
          puVar46[5] = uVar10;
          puVar46[2] = uVar8;
          puVar46[3] = uVar9;
          *puVar46 = uVar25;
          puVar46[1] = uVar7;
          local_938._4_4_ = (undefined4)((ulonglong)local_938 >> 0x20);
          uStack_930._4_4_ = (undefined4)((ulonglong)uStack_930 >> 0x20);
          *(undefined8 *)((longlong)puVar54 + 0x20) = local_918;
          *(undefined8 *)((longlong)puVar54 + 0x28) = uStack_910;
          *(undefined8 *)((longlong)puVar54 + 0x10) = local_928;
          *(undefined8 *)((longlong)puVar54 + 0x18) = uStack_920;
          *(undefined4 *)puVar54 = (undefined4)local_938;
          *(undefined4 *)((longlong)puVar54 + 4) = local_938._4_4_;
          *(int *)((longlong)puVar54 + 8) = (int)uStack_930;
          *(undefined4 *)((longlong)puVar54 + 0xc) = uStack_930._4_4_;
          local_938 = puVar37;
          uStack_930 = puVar17;
        }
        goto LAB_14033d436;
      }
LAB_14033d06d:
      if (uVar27 != 0) {
        iVar56 = (iVar61 - (iVar61 + -1 >> 0x1f)) + -1 >> 1;
        iVar61 = iVar56;
joined_r0x00014033d094:
        do {
          iVar57 = iVar56 * 2 + 1;
          if (iVar57 < (int)uVar27) {
            iVar43 = iVar56 * 2 + 2;
            if ((iVar43 < (int)uVar27) &&
               (*(float *)(puVar37 + (longlong)iVar57 * 6 + 4) <
                *(float *)(puVar37 + (longlong)iVar43 * 6 + 4) ||
                *(float *)(puVar37 + (longlong)iVar57 * 6 + 4) ==
                *(float *)(puVar37 + (longlong)iVar43 * 6 + 4))) {
              iVar57 = iVar43;
            }
            if (*(float *)(puVar37 + (longlong)iVar56 * 6 + 4) <=
                *(float *)(puVar37 + (longlong)iVar57 * 6 + 4) &&
                *(float *)(puVar37 + (longlong)iVar57 * 6 + 4) !=
                *(float *)(puVar37 + (longlong)iVar56 * 6 + 4)) {
              puVar44 = puVar37 + (longlong)iVar56 * 6;
              puVar40 = puVar37 + (longlong)iVar57 * 6;
              local_938 = (longlong *)*puVar44;
              uStack_930 = (ushort *)puVar44[1];
              local_928 = puVar44[2];
              uStack_920 = puVar44[3];
              local_918 = puVar44[4];
              uStack_910 = puVar44[5];
              puVar54 = local_938;
              puVar17 = uStack_930;
              uVar25 = *puVar40;
              uVar7 = puVar40[1];
              uVar8 = puVar40[2];
              uVar9 = puVar40[3];
              uVar10 = puVar40[5];
              puVar44[4] = puVar40[4];
              puVar44[5] = uVar10;
              puVar44[2] = uVar8;
              puVar44[3] = uVar9;
              *puVar44 = uVar25;
              puVar44[1] = uVar7;
              local_938._4_4_ = (undefined4)((ulonglong)local_938 >> 0x20);
              uStack_930._4_4_ = (undefined4)((ulonglong)uStack_930 >> 0x20);
              puVar40[4] = local_918;
              puVar40[5] = uStack_910;
              puVar40[2] = local_928;
              puVar40[3] = uStack_920;
              *(undefined4 *)puVar40 = (undefined4)local_938;
              *(undefined4 *)((longlong)puVar40 + 4) = local_938._4_4_;
              *(int *)(puVar40 + 1) = (int)uStack_930;
              *(undefined4 *)((longlong)puVar40 + 0xc) = uStack_930._4_4_;
              iVar56 = iVar57;
              local_938 = puVar54;
              uStack_930 = puVar17;
              goto joined_r0x00014033d094;
            }
          }
          bVar62 = iVar61 != 0;
          iVar56 = iVar61 + -1;
          iVar61 = iVar56;
        } while (bVar62);
        if (1 < (int)uVar27) {
          uVar51 = (ulonglong)uVar27 - 1;
          local_938 = (longlong *)*puVar37;
          uStack_930 = (ushort *)puVar37[1];
          local_928 = puVar37[2];
          uStack_920 = puVar37[3];
          local_918 = puVar37[4];
          uStack_910 = puVar37[5];
          puVar44 = local_938;
          puVar17 = uStack_930;
          uVar25 = puVar37[uVar51 * 6];
          uVar7 = (puVar37 + uVar51 * 6)[1];
          uVar8 = puVar37[uVar51 * 6 + 2];
          uVar9 = (puVar37 + uVar51 * 6 + 2)[1];
          uVar10 = (puVar37 + uVar51 * 6 + 4)[1];
          puVar37[4] = puVar37[uVar51 * 6 + 4];
          puVar37[5] = uVar10;
          puVar37[2] = uVar8;
          puVar37[3] = uVar9;
          *puVar37 = uVar25;
          puVar37[1] = uVar7;
          local_938._4_4_ = (undefined4)((ulonglong)local_938 >> 0x20);
          uStack_930._4_4_ = (undefined4)((ulonglong)uStack_930 >> 0x20);
          puVar37[uVar51 * 6 + 4] = local_918;
          (puVar37 + uVar51 * 6 + 4)[1] = uStack_910;
          puVar37[uVar51 * 6 + 2] = local_928;
          (puVar37 + uVar51 * 6 + 2)[1] = uStack_920;
          puVar54 = puVar37 + uVar51 * 6;
          *(undefined4 *)puVar54 = (undefined4)local_938;
          *(undefined4 *)((longlong)puVar54 + 4) = local_938._4_4_;
          *(int *)(puVar54 + 1) = (int)uStack_930;
          *(undefined4 *)((longlong)puVar54 + 0xc) = uStack_930._4_4_;
          local_938 = puVar44;
          uStack_930 = puVar17;
          if (uVar27 != 2) {
            do {
              iVar56 = 0;
              iVar57 = 1;
              iVar61 = 0;
              do {
                iVar56 = iVar56 + 2;
                iVar43 = iVar57;
                if (((longlong)iVar56 < (longlong)uVar51) &&
                   (*(float *)(puVar37 + (longlong)iVar57 * 6 + 4) <
                    *(float *)(puVar37 + (longlong)iVar56 * 6 + 4) ||
                    *(float *)(puVar37 + (longlong)iVar57 * 6 + 4) ==
                    *(float *)(puVar37 + (longlong)iVar56 * 6 + 4))) {
                  iVar43 = iVar56;
                }
                if (*(float *)(puVar37 + (longlong)iVar43 * 6 + 4) <
                    *(float *)(puVar37 + (longlong)iVar61 * 6 + 4) ||
                    *(float *)(puVar37 + (longlong)iVar43 * 6 + 4) ==
                    *(float *)(puVar37 + (longlong)iVar61 * 6 + 4)) break;
                puVar44 = puVar37 + (longlong)iVar61 * 6;
                puVar54 = puVar37 + (longlong)iVar43 * 6;
                uVar25 = *puVar44;
                uVar7 = puVar44[1];
                uVar8 = puVar44[2];
                uVar9 = puVar44[3];
                uVar10 = puVar44[4];
                uVar11 = puVar44[5];
                uVar12 = *puVar54;
                uVar13 = puVar54[1];
                uVar14 = puVar54[2];
                uVar15 = puVar54[3];
                uVar16 = puVar54[5];
                puVar44[4] = puVar54[4];
                puVar44[5] = uVar16;
                puVar44[2] = uVar14;
                puVar44[3] = uVar15;
                *puVar44 = uVar12;
                puVar44[1] = uVar13;
                puVar54[4] = uVar10;
                puVar54[5] = uVar11;
                puVar54[2] = uVar8;
                puVar54[3] = uVar9;
                *puVar54 = uVar25;
                puVar54[1] = uVar7;
                iVar56 = iVar43 * 2;
                iVar57 = iVar43 * 2 + 1;
                iVar61 = iVar43;
              } while ((longlong)iVar57 < (longlong)uVar51);
              uVar29 = uVar51 - 1;
              local_938 = (longlong *)*puVar37;
              uStack_930 = (ushort *)puVar37[1];
              local_928 = puVar37[2];
              uStack_920 = puVar37[3];
              local_918 = puVar37[4];
              uStack_910 = puVar37[5];
              puVar44 = local_938;
              puVar17 = uStack_930;
              uVar25 = puVar37[uVar29 * 6];
              uVar7 = (puVar37 + uVar29 * 6)[1];
              uVar8 = puVar37[uVar29 * 6 + 2];
              uVar9 = (puVar37 + uVar29 * 6 + 2)[1];
              uVar10 = (puVar37 + uVar29 * 6 + 4)[1];
              puVar37[4] = puVar37[uVar29 * 6 + 4];
              puVar37[5] = uVar10;
              puVar37[2] = uVar8;
              puVar37[3] = uVar9;
              *puVar37 = uVar25;
              puVar37[1] = uVar7;
              local_938._4_4_ = (undefined4)((ulonglong)local_938 >> 0x20);
              uStack_930._4_4_ = (undefined4)((ulonglong)uStack_930 >> 0x20);
              puVar37[uVar29 * 6 + 4] = local_918;
              (puVar37 + uVar29 * 6 + 4)[1] = uStack_910;
              puVar37[uVar29 * 6 + 2] = local_928;
              (puVar37 + uVar29 * 6 + 2)[1] = uStack_920;
              puVar54 = puVar37 + uVar29 * 6;
              *(undefined4 *)puVar54 = (undefined4)local_938;
              *(undefined4 *)((longlong)puVar54 + 4) = local_938._4_4_;
              *(int *)(puVar54 + 1) = (int)uStack_930;
              *(undefined4 *)((longlong)puVar54 + 0xc) = uStack_930._4_4_;
              bVar62 = 2 < uVar51;
              uVar51 = uVar29;
              local_938 = puVar44;
              uStack_930 = puVar17;
            } while (bVar62);
          }
        }
      }
LAB_14033d436:
      puVar28 = puVar28 + -3;
    } while (&local_898 <= puVar28);
  }
  lVar20 = local_a78;
  plVar42 = (longlong *)(local_a78 + 0xe8);
  FUN_145835ed8(plVar42);
  plVar34 = (longlong *)(lVar20 + 200);
  *(undefined4 *)(lVar20 + 0xd0) = 0;
  if ((*(int *)(lVar20 + 0xd4) != 0) && (FUN_145836094(plVar34), *(int *)(lVar20 + 0xd4) < 0)) {
    FUN_145836094(plVar34);
  }
  plVar1 = (longlong *)(lVar20 + 0xd8);
  local_a10 = plVar34;
  FUN_1411d20e3(*(undefined8 *)(lVar20 + 0xd8),*(undefined4 *)(lVar20 + 0xe0));
  *(undefined4 *)(lVar20 + 0xe0) = 0;
  if ((*(int *)(lVar20 + 0xe4) != 0) && (FUN_1458360c4(plVar1), *(int *)(lVar20 + 0xe4) < 0)) {
    FUN_1458360c4(plVar1);
  }
  uVar51 = lVar20 + 0x1e8;
  local_a18 = plVar1;
  FUN_145835f9e(uVar51);
  local_968._0_2_ = 0xfff2;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1e40;
  local_938 = (longlong *)DAT_14c9a1e38;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff8;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1e58;
  local_938 = (longlong *)DAT_14c9a1e50;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff3;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1e70;
  local_938 = (longlong *)DAT_14c9a1e68;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff9;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1e88;
  local_938 = (longlong *)DAT_14c9a1e80;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff7;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1ea0;
  local_938 = (longlong *)DAT_14c9a1e98;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff4;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1eb8;
  local_938 = (longlong *)DAT_14c9a1eb0;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff5;
  local_968._4_4_ = 0;
  uStack_930._0_4_ = DAT_14c9a1ed0;
  local_938 = (longlong *)DAT_14c9a1ec8;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  local_968._0_2_ = 0xfff6;
  local_968._4_4_ = 0;
  uStack_930 = (ushort *)CONCAT44(uStack_930._4_4_,DAT_14c9a1ee8);
  local_938 = DAT_14c9a1ee0;
  local_898 = (code *)&local_938;
  uStack_890 = (code *)&local_968;
  FUN_1462a356c(uVar51,&local_9d0,&local_898);
  if ((longlong)(int)uStack_9f0 != 0) {
    pcVar41 = local_9f8 + (longlong)(int)uStack_9f0 * 0x30;
    local_a30 = (longlong *)(local_a78 + 0x140);
    local_a20 = local_a78 + 0x178;
    local_a00 = local_a78 + 400;
    local_a48 = local_a78 + 0x150;
    local_a50 = local_a78 + 0xf8;
    local_a28 = local_a78 + 0x120;
    pcVar47 = local_9f8;
    do {
      if (((pcVar47[0x24] == (code)0x1) &&
          (plVar34 = *(longlong **)(pcVar47 + 0x28), plVar34 != (longlong *)0x0)) &&
         (0.0 < *(float *)(pcVar47 + 0x20) || *(float *)(pcVar47 + 0x20) == 0.0)) {
        lVar20 = plVar34[0x22];
        if (lVar20 == 0) {
          (**(code **)(*plVar34 + 1000))(plVar34);
          lVar20 = plVar34[0x22];
          if (lVar20 == 0) goto LAB_14033d7f6;
        }
        lVar22 = FUN_141318d36();
        lVar31 = local_a78;
        if (((*(int *)(lVar22 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar22 + 0x38) * 8) == lVar22 + 0x30)) &&
           ((*(int *)(lVar20 + 0xb0) != 0 && (*(longlong *)(lVar20 + 0xb8) != 0)))) {
          uVar3 = *(undefined2 *)(local_a78 + 0xd0);
          local_a68 = uVar51;
          FUN_14058b40c(local_a78,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                       );
          local_848 = (longlong *)0x0;
          local_818 = 0;
          local_888 = (undefined1 *)0x0;
          piStack_880 = (int *)0x0;
          local_878 = local_878 & 0xffffffffffff0000;
          local_858 = 0;
          uStack_890 = (code *)lVar31;
          local_860 = 0;
          local_870 = 0;
          uStack_868 = 0;
          local_898 = (code *)plVar34;
          local_a70 = (longlong *)FUN_1402710dd(&local_898);
          if (local_858 != 0) {
            plVar34 = local_848;
            if (local_848 == (longlong *)0x0) {
              plVar34 = local_838;
            }
            (**(code **)(*plVar34 + 0x10))();
          }
          local_a58 = CONCAT62(local_a58._2_6_,uVar3);
          FUN_14118d888(local_a70,lVar31,uVar3,uVar3);
          local_a40 = plVar42;
          if (*(int *)(lVar31 + 0x174) == 0) {
            uVar27 = *(uint *)(lVar31 + 0x148);
            uVar29 = (ulonglong)uVar27;
            *(uint *)(lVar31 + 0x148) = uVar27 + 1;
            if (*(uint *)(lVar31 + 0x14c) == uVar27) {
              FUN_144869a3c(local_a30,uVar27);
            }
            uVar51 = local_a68;
            iVar56 = *(int *)(lVar31 + 0x168);
            if (iVar56 == 0) {
              iVar61 = -1;
            }
            else {
              iVar61 = iVar56 + 0x1e;
              if (-1 < iVar56 + -1) {
                iVar61 = iVar56 + -1;
              }
              iVar61 = iVar61 >> 5;
            }
            iVar57 = iVar56 + 1;
            iVar43 = iVar56 + 0x1f;
            if (-1 < iVar56) {
              iVar43 = iVar56;
            }
            lVar20 = local_a78;
            if (iVar43 >> 5 == iVar61) {
              *(int *)(local_a78 + 0x168) = iVar57;
            }
            else {
              if (*(int *)(local_a78 + 0x16c) <= iVar56) {
                local_a60 = uVar29;
                iVar61 = iVar56;
                if (iVar56 + 0x20U < 0xa0) {
                  iVar57 = 0x80;
                }
                else {
                  uVar27 = iVar56 + 0x20U >> 5;
                  if (*(int *)(local_a78 + 0x16c) + 0x1fU < 0xa0) {
                    uVar49 = 4;
                    if (4 < uVar27) {
                      uVar49 = uVar27;
                    }
                  }
                  else {
                    uVar49 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                  }
                  uVar29 = (ulonglong)(uVar49 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar50 = (uint)(uVar29 + 0xf);
                      if (uVar49 < 0x1ffd) {
                        uVar29 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar50 >> 4]];
                      }
                      else {
                        uVar33 = uVar29 + 0xf & 0xfffffffffffffff0;
                        if (uVar33 < 0x7ff1) {
                          bVar26 = (&DAT_14c841e00)[uVar50 >> 4];
                          uVar39 = 0x32;
                          if (0x32 < bVar26) {
                            uVar39 = (ulonglong)bVar26;
                          }
                          uVar52 = 0x32 - (ulonglong)bVar26;
                          do {
                            uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar52 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar52 & 0xffffffff] & 0xf) == 0)
                            goto LAB_14033ea04;
                            lVar20 = uVar39 + 1 + uVar52;
                            uVar52 = uVar52 - 1;
                          } while (lVar20 != 0x33);
                        }
                        uVar29 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar29 = 0x10;
                        }
                        uVar29 = -uVar29 & (uVar33 + uVar29) - 1;
                      }
                    }
                    else {
                      uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                      iVar61 = *(int *)(local_a78 + 0x168);
                    }
                  }
LAB_14033ea04:
                  iVar19 = (int)(uVar29 >> 2);
                  iVar57 = iVar19 << 5;
                  if (iVar19 < (int)uVar27) {
                    iVar57 = -0x20;
                  }
                }
                lVar20 = local_a78;
                *(int *)(local_a78 + 0x16c) = iVar57;
                FUN_1446efbd8(local_a48,iVar61);
                iVar57 = *(int *)(lVar20 + 0x168) + 1;
                uVar29 = local_a60;
              }
              iVar61 = iVar57 + 0x1f;
              if (-1 < iVar57) {
                iVar61 = iVar57;
              }
              *(int *)(lVar20 + 0x168) = iVar57;
              if (iVar57 % 0x20 != 0) {
                lVar31 = *(longlong *)(lVar20 + 0x160);
                if (*(longlong *)(lVar20 + 0x160) == 0) {
                  lVar31 = local_a48;
                }
                bVar26 = -(char)(iVar57 % 0x20);
                *(uint *)(lVar31 + (longlong)(iVar61 >> 5) * 4) =
                     (uint)(*(int *)(lVar31 + (longlong)(iVar61 >> 5) * 4) << (bVar26 & 0x1f)) >>
                     (bVar26 & 0x1f);
              }
            }
            lVar22 = (longlong)(int)uVar29;
            lVar31 = *(longlong *)(lVar20 + 0x160);
            if (*(longlong *)(lVar20 + 0x160) == 0) {
              lVar31 = local_a48;
            }
            bVar26 = (byte)iVar56 & 0x1f;
            puVar2 = (uint *)(lVar31 + (longlong)(iVar43 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          }
          else {
            uVar29 = (ulonglong)*(uint *)(lVar31 + 0x170);
            lVar22 = (longlong)(int)*(uint *)(lVar31 + 0x170);
            iVar56 = *(int *)(*(longlong *)(lVar31 + 0x140) + 4 + lVar22 * 0x10);
            *(int *)(lVar31 + 0x170) = iVar56;
            iVar61 = *(int *)(lVar31 + 0x174) + -1;
            *(int *)(lVar31 + 0x174) = iVar61;
            lVar20 = local_a78;
            uVar51 = local_a68;
            if (iVar61 != 0) {
              *(undefined4 *)(*(longlong *)(lVar31 + 0x140) + (longlong)iVar56 * 0x10) = 0xffffffff;
            }
          }
          plVar42 = local_a40;
          iVar56 = (int)uVar29;
          lVar31 = *(longlong *)(lVar20 + 0x160);
          if (*(longlong *)(lVar20 + 0x160) == 0) {
            lVar31 = local_a48;
          }
          iVar61 = iVar56 + 0x1f;
          if (-1 < iVar56) {
            iVar61 = iVar56;
          }
          puVar2 = (uint *)(lVar31 + (longlong)(iVar61 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar29 & 0x1f);
          lVar31 = *(longlong *)(lVar20 + 0x140);
          lVar22 = lVar22 * 0x10;
          puVar28 = (undefined8 *)(lVar31 + lVar22);
          uVar27 = *(uint *)(local_a70 + 0x16);
          *(uint *)(lVar31 + lVar22) = uVar27;
          *(ushort *)(lVar31 + 4 + lVar22) = (ushort)local_a58;
          *(undefined4 *)(lVar31 + 8 + lVar22) = 0xffffffff;
          uVar49 = *(int *)(lVar20 + 0x148) - *(int *)(lVar20 + 0x174);
          if ((uVar49 != 0) && (uVar49 != 1)) {
            lVar31 = *(longlong *)(lVar20 + 0x180);
            if (*(longlong *)(lVar20 + 0x180) == 0) {
              lVar31 = local_a20;
            }
            iVar61 = *(int *)(lVar31 + (ulonglong)(*(int *)(lVar20 + 0x188) - 1U & uVar27) * 4);
            if (iVar61 != -1) {
              do {
                puVar54 = (undefined8 *)(*local_a30 + (longlong)iVar61 * 0x10);
                if (*(uint *)(*local_a30 + (longlong)iVar61 * 0x10) == uVar27) {
                  *puVar54 = *puVar28;
                  FUN_1470a3ad0(local_a30,uVar29 & 0xffffffff);
                  goto LAB_14033dac7;
                }
                iVar61 = *(int *)(puVar54 + 1);
              } while (iVar61 != -1);
            }
          }
          if (uVar49 < 4) {
            iVar61 = 1;
          }
          else {
            uVar29 = (ulonglong)(uVar49 & 0xfffffffe) + 0xf;
            lVar31 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            iVar61 = 1 << ((byte)lVar31 & 0x1f);
          }
          if (((int)uVar49 < 1) || (iVar61 <= *(int *)(lVar20 + 0x188))) {
            uVar27 = *(int *)(lVar20 + 0x188) - 1U & uVar27;
            *(uint *)((longlong)puVar28 + 0xc) = uVar27;
            lVar31 = *(longlong *)(lVar20 + 0x180);
            if (*(longlong *)(lVar20 + 0x180) == 0) {
              lVar31 = local_a20;
            }
            *(undefined4 *)(puVar28 + 1) =
                 *(undefined4 *)
                  (lVar31 + ((longlong)*(int *)(lVar20 + 0x188) - 1U & (longlong)(int)uVar27) * 4);
            lVar31 = *(longlong *)(lVar20 + 0x180);
            if (*(longlong *)(lVar20 + 0x180) == 0) {
              lVar31 = local_a20;
            }
            *(int *)(lVar31 + ((longlong)*(int *)(lVar20 + 0x188) - 1U & (longlong)(int)uVar27) * 4)
                 = iVar56;
          }
          else {
            *(int *)(lVar20 + 0x188) = iVar61;
            FUN_14173907e(local_a30);
          }
LAB_14033dac7:
          local_898 = (code *)0x0;
          uStack_890 = (code *)0x0;
          local_888 = (undefined1 *)((ulonglong)local_888 & 0xffffffff00000000);
          piStack_880 = (int *)0x0;
          local_878 = 0;
          FUN_1446ddda2(&local_898,local_a70[0x17],0);
          iVar56 = *(int *)(lVar20 + 0x138);
          if ((longlong)iVar56 == -1) {
            local_a60 = CONCAT44(local_a60._4_4_,(int)local_898);
            if ((((int)local_898 != 0) && (local_898._4_4_ != 0)) &&
               (puVar23 = &DAT_14c948028, (int)local_898 != DAT_14c948000)) goto LAB_14033dbd4;
LAB_14033e787:
            local_a60 = CONCAT44(local_a60._4_4_,(int)DAT_14c948618);
            puVar23 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
          }
          else {
            if ((((int)local_898 == 0) || (local_898._4_4_ == 0)) ||
               ((int)local_898 == DAT_14c948000)) goto LAB_14033e787;
            piVar21 = (int *)&uStack_890;
            if (0 < local_878._4_4_) {
              piVar21 = piStack_880;
            }
            if (1 < local_898._4_4_) {
              piVar21 = piStack_880;
            }
            if (local_898._4_4_ == 1 && 0 < iVar56) {
              piVar32 = piStack_880;
              if (local_878._4_4_ < 1) {
                piVar32 = (int *)&uStack_890;
              }
              puVar23 = (ulonglong *)((longlong)piVar32 + 4);
              bVar62 = *(int *)(lVar20 + 0x13c) != 1;
              if (bVar62) {
                piVar21 = (int *)&DAT_14c948618;
              }
              local_a60 = CONCAT44(local_a60._4_4_,*piVar21);
              if (bVar62) {
                puVar23 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
              }
            }
            else {
              if (local_898._4_4_ <= iVar56) goto LAB_14033e787;
              puVar48 = (undefined4 *)((longlong)piVar21 + (longlong)iVar56 * 0xc);
              puVar23 = (ulonglong *)(puVar48 + 1);
              local_a60 = CONCAT44(local_a60._4_4_,*puVar48);
            }
          }
LAB_14033dbd4:
          uVar29 = *puVar23;
          if (*(int *)(lVar20 + 0x11c) == 0) {
            uVar27 = *(uint *)(lVar20 + 0xf0);
            uVar33 = (ulonglong)uVar27;
            *(uint *)(lVar20 + 0xf0) = uVar27 + 1;
            if (*(uint *)(lVar20 + 0xf4) == uVar27) {
              FUN_1403951a8(plVar42,uVar27);
            }
            iVar56 = *(int *)(lVar20 + 0x110);
            if (iVar56 == 0) {
              iVar61 = -1;
            }
            else {
              iVar61 = iVar56 + 0x1e;
              if (-1 < iVar56 + -1) {
                iVar61 = iVar56 + -1;
              }
              iVar61 = iVar61 >> 5;
            }
            iVar57 = iVar56 + 1;
            iVar43 = iVar56 + 0x1f;
            if (-1 < iVar56) {
              iVar43 = iVar56;
            }
            lVar31 = local_a78;
            local_a38 = uVar29;
            if (iVar43 >> 5 == iVar61) {
              *(int *)(local_a78 + 0x110) = iVar57;
            }
            else {
              if (*(int *)(local_a78 + 0x114) <= iVar56) {
                local_a08 = uVar33;
                iVar61 = iVar56;
                if (iVar56 + 0x20U < 0xa0) {
                  iVar57 = 0x80;
                }
                else {
                  uVar27 = iVar56 + 0x20U >> 5;
                  if (*(int *)(local_a78 + 0x114) + 0x1fU < 0xa0) {
                    uVar49 = 4;
                    if (4 < uVar27) {
                      uVar49 = uVar27;
                    }
                  }
                  else {
                    uVar49 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                  }
                  uVar29 = (ulonglong)(uVar49 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar50 = (uint)(uVar29 + 0xf);
                      if (uVar49 < 0x1ffd) {
                        uVar29 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar50 >> 4]];
                      }
                      else {
                        uVar33 = uVar29 + 0xf & 0xfffffffffffffff0;
                        uVar51 = local_a68;
                        if (uVar33 < 0x7ff1) {
                          bVar26 = (&DAT_14c841e00)[uVar50 >> 4];
                          uVar39 = 0x32;
                          if (0x32 < bVar26) {
                            uVar39 = (ulonglong)bVar26;
                          }
                          uVar52 = 0x32 - (ulonglong)bVar26;
                          do {
                            uVar29 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar52 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar52 & 0xffffffff] & 0xf) == 0)
                            goto LAB_14033eab4;
                            lVar20 = uVar39 + 1 + uVar52;
                            uVar52 = uVar52 - 1;
                          } while (lVar20 != 0x33);
                        }
                        uVar29 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar29 = 0x10;
                        }
                        uVar29 = -uVar29 & (uVar33 + uVar29) - 1;
                      }
                    }
                    else {
                      local_a68 = (ulonglong)uVar27;
                      uVar29 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar29,0);
                      uVar27 = (uint)local_a68;
                      iVar61 = *(int *)(local_a78 + 0x110);
                    }
                  }
LAB_14033eab4:
                  iVar19 = (int)(uVar29 >> 2);
                  iVar57 = iVar19 << 5;
                  if (iVar19 < (int)uVar27) {
                    iVar57 = -0x20;
                  }
                }
                lVar31 = local_a78;
                *(int *)(local_a78 + 0x114) = iVar57;
                FUN_1446efbd8(local_a50,iVar61);
                iVar57 = *(int *)(lVar31 + 0x110) + 1;
                uVar33 = local_a08;
              }
              iVar61 = iVar57 + 0x1f;
              if (-1 < iVar57) {
                iVar61 = iVar57;
              }
              *(int *)(lVar31 + 0x110) = iVar57;
              if (iVar57 % 0x20 != 0) {
                lVar20 = *(longlong *)(lVar31 + 0x108);
                if (*(longlong *)(lVar31 + 0x108) == 0) {
                  lVar20 = local_a50;
                }
                bVar26 = -(char)(iVar57 % 0x20);
                *(uint *)(lVar20 + (longlong)(iVar61 >> 5) * 4) =
                     (uint)(*(int *)(lVar20 + (longlong)(iVar61 >> 5) * 4) << (bVar26 & 0x1f)) >>
                     (bVar26 & 0x1f);
              }
            }
            lVar22 = (longlong)(int)uVar33;
            lVar20 = *(longlong *)(lVar31 + 0x108);
            if (*(longlong *)(lVar31 + 0x108) == 0) {
              lVar20 = local_a50;
            }
            bVar26 = (byte)iVar56 & 0x1f;
            puVar2 = (uint *)(lVar20 + (longlong)(iVar43 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
            uVar29 = local_a38;
          }
          else {
            uVar33 = (ulonglong)*(uint *)(lVar20 + 0x118);
            lVar22 = (longlong)(int)*(uint *)(lVar20 + 0x118);
            iVar56 = *(int *)(*(longlong *)(lVar20 + 0xe8) + 4 + lVar22 * 0x18);
            *(int *)(lVar20 + 0x118) = iVar56;
            iVar61 = *(int *)(lVar20 + 0x11c) + -1;
            *(int *)(lVar20 + 0x11c) = iVar61;
            lVar31 = local_a78;
            uVar51 = local_a68;
            if (iVar61 != 0) {
              *(undefined4 *)(*(longlong *)(lVar20 + 0xe8) + (longlong)iVar56 * 0x18) = 0xffffffff;
            }
          }
          iVar56 = (int)uVar33;
          lVar20 = *(longlong *)(lVar31 + 0x108);
          if (*(longlong *)(lVar31 + 0x108) == 0) {
            lVar20 = local_a50;
          }
          iVar61 = iVar56 + 0x1f;
          if (-1 < iVar56) {
            iVar61 = iVar56;
          }
          puVar2 = (uint *)(lVar20 + (longlong)(iVar61 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar33 & 0x1f);
          lVar20 = *(longlong *)(lVar31 + 0xe8);
          *(uint *)(lVar20 + lVar22 * 0x18) = (uint)local_a60;
          *(ulonglong *)(lVar20 + 4 + lVar22 * 0x18) = uVar29;
          *(ushort *)(lVar20 + 0xc + lVar22 * 0x18) = (ushort)local_a58;
          *(undefined4 *)(lVar20 + 0x10 + lVar22 * 0x18) = 0xffffffff;
          local_a38 = uVar29 >> 0x20;
          uVar49 = (uint)(uVar29 >> 0x20);
          uVar27 = (uint)local_a60;
          if (local_a38 != 0) {
            uVar50 = uVar49 >> 0xd ^ (uint)local_a60 - uVar49;
            uVar27 = uVar50 << 8 ^ (-0x61c88647 - uVar50) - uVar49;
            uVar53 = uVar27 >> 0xd ^ (uVar49 - uVar50) - uVar27;
            uVar50 = uVar53 >> 0xc ^ (uVar50 - uVar27) - uVar53;
            uVar27 = uVar50 << 0x10 ^ (uVar27 - uVar53) - uVar50;
            uVar53 = uVar27 >> 5 ^ (uVar53 - uVar50) - uVar27;
            uVar50 = uVar53 >> 3 ^ (uVar50 - uVar27) - uVar53;
            uVar27 = uVar50 << 10 ^ (uVar27 - uVar53) - uVar50;
            uVar27 = uVar27 >> 0xf ^ uVar53 - (uVar50 + uVar27);
          }
          puVar48 = (undefined4 *)(lVar20 + lVar22 * 0x18);
          uVar50 = *(int *)(lVar31 + 0xf0) - *(int *)(lVar31 + 0x11c);
          if ((uVar50 != 0) && (uVar50 != 1)) {
            lVar20 = *(longlong *)(lVar31 + 0x128);
            if (*(longlong *)(lVar31 + 0x128) == 0) {
              lVar20 = local_a28;
            }
            iVar61 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar31 + 0x130) - 1U & uVar27) * 4);
            if (iVar61 != -1) {
              lVar20 = *local_a40;
              do {
                lVar22 = (longlong)iVar61;
                if ((*(uint *)(lVar20 + lVar22 * 0x18) == (uint)local_a60) &&
                   (puVar45 = (undefined4 *)(lVar20 + lVar22 * 0x18), puVar45[2] == uVar49)) {
                  uVar4 = puVar48[1];
                  uVar5 = puVar48[2];
                  uVar6 = puVar48[3];
                  *puVar45 = *puVar48;
                  puVar45[1] = uVar4;
                  puVar45[2] = uVar5;
                  puVar45[3] = uVar6;
                  FUN_1470a3b42(local_a40,uVar33 & 0xffffffff);
                  goto LAB_14033dd8d;
                }
                iVar61 = *(int *)(lVar20 + 0x10 + lVar22 * 0x18);
              } while (iVar61 != -1);
            }
          }
          if (uVar50 < 4) {
            iVar61 = 1;
          }
          else {
            uVar29 = (ulonglong)(uVar50 & 0xfffffffe) + 0xf;
            lVar20 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar61 = 1 << ((byte)lVar20 & 0x1f);
          }
          if (((int)uVar50 < 1) || (iVar61 <= *(int *)(lVar31 + 0x130))) {
            uVar27 = *(int *)(lVar31 + 0x130) - 1U & uVar27;
            puVar48[5] = uVar27;
            lVar20 = *(longlong *)(lVar31 + 0x128);
            if (*(longlong *)(lVar31 + 0x128) == 0) {
              lVar20 = local_a28;
            }
            puVar48[4] = *(undefined4 *)
                          (lVar20 + ((longlong)*(int *)(lVar31 + 0x130) - 1U & (longlong)(int)uVar27
                                    ) * 4);
            lVar20 = *(longlong *)(lVar31 + 0x128);
            if (*(longlong *)(lVar31 + 0x128) == 0) {
              lVar20 = local_a28;
            }
            *(int *)(lVar20 + ((longlong)*(int *)(lVar31 + 0x130) - 1U & (longlong)(int)uVar27) * 4)
                 = iVar56;
          }
          else {
            *(int *)(lVar31 + 0x130) = iVar61;
            FUN_1411d2144(local_a40);
          }
LAB_14033dd8d:
          if (piStack_880 != (int *)0x0) {
            FUN_1400020a8();
          }
          if ((*(char *)((longlong)local_a70 + 0xc9) == '\x01') &&
             (lVar20 = (**(code **)(*local_a70 + 800))(local_a70), lVar20 != 0)) {
            local_938 = local_a70;
            if ((local_a70 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
            }
            lVar20 = (**(code **)(*local_a70 + 800))();
            local_968._0_2_ = (undefined2)lVar20;
            local_968._2_2_ = (undefined2)((ulonglong)lVar20 >> 0x10);
            local_968._4_4_ = (int)((ulonglong)lVar20 >> 0x20);
            if ((lVar20 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar20);
            }
            local_898 = (code *)&local_968;
            uStack_890 = (code *)&local_938;
            FUN_145c38480(local_a00,&local_9d0,&local_898);
          }
          iVar56 = *(int *)(lVar31 + 0xe0);
          *(uint *)(lVar31 + 0xe0) = iVar56 + 1U;
          if (*(uint *)(lVar31 + 0xe4) < iVar56 + 1U) {
            FUN_1462a36ba(local_a18,iVar56);
          }
          piVar21 = (int *)((longlong)iVar56 * 0x98 + *local_a18);
          FUN_141738df6(piVar21,local_a70[0x17],local_a70[0x18]);
          plVar42 = local_a40;
          if ((local_a70 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          iVar56 = *(int *)(local_a78 + 0xd0);
          *(uint *)(local_a78 + 0xd0) = iVar56 + 1U;
          if (*(uint *)(local_a78 + 0xd4) < iVar56 + 1U) {
            FUN_1462a374e(local_a10,iVar56);
          }
          *(longlong **)(*local_a10 + (longlong)iVar56 * 8) = local_a70;
          if ((local_a70 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          lVar20 = local_a78;
          local_9d0 = (int *)CONCAT62(local_9d0._2_6_,(ushort)local_a58);
          local_9d0 = (int *)((ulonglong)local_9d0 & 0xffffffff);
          plVar34 = (longlong *)(piVar21 + 0xe);
          if (0xf < *(ulonglong *)(piVar21 + 0x14)) {
            plVar34 = (longlong *)*plVar34;
          }
          local_898 = (code *)0x0;
          uStack_890 = (code *)0x0;
          local_888 = (undefined1 *)((ulonglong)local_888 & 0xffffffff00000000);
          piStack_880 = (int *)0x0;
          local_878 = 0;
          FUN_1446ddda2(&local_898,plVar34,0);
          iVar56 = *(int *)(lVar20 + 0x238);
          if ((longlong)iVar56 == -1) {
            if ((((int)local_898 != 0) && (local_898._4_4_ != 0)) &&
               (piVar30 = (int *)&DAT_14c948028, iVar56 = (int)local_898,
               (int)local_898 != DAT_14c948000)) goto LAB_14033df8f;
LAB_14033e7a0:
            piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
            iVar56 = (int)DAT_14c948618;
          }
          else {
            if ((((int)local_898 == 0) || (local_898._4_4_ == 0)) ||
               ((int)local_898 == DAT_14c948000)) goto LAB_14033e7a0;
            piVar32 = (int *)&uStack_890;
            if (0 < local_878._4_4_) {
              piVar32 = piStack_880;
            }
            if (1 < local_898._4_4_) {
              piVar32 = piStack_880;
            }
            if (local_898._4_4_ == 1 && 0 < iVar56) {
              piVar30 = piStack_880 + 1;
              if (local_878._4_4_ < 1) {
                piVar30 = (int *)((longlong)&uStack_890 + 4);
              }
              bVar62 = *(int *)(lVar20 + 0x23c) != 1;
              if (bVar62) {
                piVar32 = (int *)&DAT_14c948618;
              }
              iVar56 = *piVar32;
              if (bVar62) {
                piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
              }
            }
            else {
              if (local_898._4_4_ <= iVar56) goto LAB_14033e7a0;
              piVar30 = piVar32 + (longlong)iVar56 * 3 + 1;
              iVar56 = piVar32[(longlong)iVar56 * 3];
            }
          }
LAB_14033df8f:
          local_968._0_2_ = (undefined2)iVar56;
          local_968._2_2_ = (undefined2)((uint)iVar56 >> 0x10);
          local_968._4_4_ = (int)*(undefined8 *)piVar30;
          aiStack_960[0] = (int)((ulonglong)*(undefined8 *)piVar30 >> 0x20);
          uStack_930 = (ushort *)&local_9d0;
          local_938 = &local_968;
          FUN_140ce9c76(uVar51,&local_9e0,&local_938);
          if (piStack_880 != (int *)0x0) {
            FUN_1400020a8();
          }
          local_9d0 = (int *)CONCAT62(local_9d0._2_6_,(ushort)local_a58);
          local_9d0 = (int *)CONCAT44(2,(undefined4)local_9d0);
          plVar34 = (longlong *)(piVar21 + 0x16);
          if (0xf < *(ulonglong *)(piVar21 + 0x1c)) {
            plVar34 = (longlong *)*plVar34;
          }
          local_898 = (code *)0x0;
          uStack_890 = (code *)0x0;
          local_888 = (undefined1 *)((ulonglong)local_888 & 0xffffffff00000000);
          piStack_880 = (int *)0x0;
          local_878 = 0;
          FUN_1446ddda2(&local_898,plVar34,0);
          iVar56 = *(int *)(lVar20 + 0x238);
          if ((longlong)iVar56 == -1) {
            if ((((int)local_898 != 0) && (local_898._4_4_ != 0)) &&
               (piVar30 = (int *)&DAT_14c948028, iVar56 = (int)local_898,
               (int)local_898 != DAT_14c948000)) goto LAB_14033e0f2;
LAB_14033e7b2:
            piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
            iVar56 = (int)DAT_14c948618;
          }
          else {
            if ((((int)local_898 == 0) || (local_898._4_4_ == 0)) ||
               ((int)local_898 == DAT_14c948000)) goto LAB_14033e7b2;
            piVar32 = (int *)&uStack_890;
            if (0 < local_878._4_4_) {
              piVar32 = piStack_880;
            }
            if (1 < local_898._4_4_) {
              piVar32 = piStack_880;
            }
            if (local_898._4_4_ == 1 && 0 < iVar56) {
              piVar30 = piStack_880 + 1;
              if (local_878._4_4_ < 1) {
                piVar30 = (int *)((longlong)&uStack_890 + 4);
              }
              bVar62 = *(int *)(lVar20 + 0x23c) != 1;
              if (bVar62) {
                piVar32 = (int *)&DAT_14c948618;
              }
              iVar56 = *piVar32;
              if (bVar62) {
                piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
              }
            }
            else {
              if (local_898._4_4_ <= iVar56) goto LAB_14033e7b2;
              piVar30 = piVar32 + (longlong)iVar56 * 3 + 1;
              iVar56 = piVar32[(longlong)iVar56 * 3];
            }
          }
LAB_14033e0f2:
          local_968._0_2_ = (undefined2)iVar56;
          local_968._2_2_ = (undefined2)((uint)iVar56 >> 0x10);
          local_968._4_4_ = (int)*(undefined8 *)piVar30;
          aiStack_960[0] = (int)((ulonglong)*(undefined8 *)piVar30 >> 0x20);
          uStack_930 = (ushort *)&local_9d0;
          local_938 = &local_968;
          FUN_140ce9c76(uVar51,&local_9e0,&local_938);
          if (piStack_880 != (int *)0x0) {
            FUN_1400020a8();
          }
          if ((longlong)*(int *)(lVar20 + 600) != 0) {
            lVar31 = *(longlong *)(lVar20 + 0x250);
            lVar22 = (longlong)*(int *)(lVar20 + 600) * 0x60;
            do {
              if (*(int *)(lVar31 + 0x30) == *piVar21) {
                if (lVar31 != 0) {
                  piStack_880 = (int *)((ulonglong)piStack_880 & 0xffffffffffffff00);
                  local_898 = (code *)&local_878;
                  local_888 = local_78;
                  uStack_890 = local_898;
                  FUN_1400b2424(lVar31,&local_898,1);
                  *uStack_890 = (code)0x0;
                  FUN_141738df6(&local_938,local_898,0);
                  local_9e8 = (ushort)local_a58;
                  iStack_9e4 = 0;
                  pppppppuVar38 = local_900;
                  if (0xf < local_8e8) {
                    pppppppuVar38 = local_900[0];
                  }
                  local_968._0_2_ = 0;
                  local_968._2_2_ = 0;
                  local_968._4_4_ = 0;
                  aiStack_960[0] = 0;
                  aiStack_960[1] = 0;
                  aiStack_960[2] = 0;
                  local_950 = (int *)0x0;
                  uStack_948 = 0;
                  FUN_1446ddda2(&local_968,pppppppuVar38,0);
                  iVar56 = *(int *)(lVar20 + 0x238);
                  local_9e0 = CONCAT22(local_968._2_2_,(undefined2)local_968);
                  if ((longlong)iVar56 == -1) {
                    if (((local_9e0 != 0) && (local_968._4_4_ != 0)) &&
                       (piVar30 = (int *)&DAT_14c948028, local_9e0 != DAT_14c948000))
                    goto LAB_14033e3c6;
LAB_14033e94b:
                    piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
                    local_9e0 = (int)DAT_14c948618;
                  }
                  else {
                    if (((local_9e0 == 0) || (local_968._4_4_ == 0)) || (local_9e0 == DAT_14c948000)
                       ) goto LAB_14033e94b;
                    piVar32 = aiStack_960;
                    if (0 < uStack_948._4_4_) {
                      piVar32 = local_950;
                    }
                    if (1 < local_968._4_4_) {
                      piVar32 = local_950;
                    }
                    if (local_968._4_4_ == 1 && 0 < iVar56) {
                      piVar30 = local_950;
                      if (uStack_948._4_4_ < 1) {
                        piVar30 = aiStack_960;
                      }
                      piVar30 = piVar30 + 1;
                      bVar62 = *(int *)(lVar20 + 0x23c) != 1;
                      if (bVar62) {
                        piVar32 = (int *)&DAT_14c948618;
                      }
                      local_9e0 = *piVar32;
                      if (bVar62) {
                        piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
                      }
                    }
                    else {
                      if (local_968._4_4_ <= iVar56) goto LAB_14033e94b;
                      piVar30 = piVar32 + (longlong)iVar56 * 3 + 1;
                      local_9e0 = piVar32[(longlong)iVar56 * 3];
                    }
                  }
LAB_14033e3c6:
                  uStack_9dc = (undefined4)*(undefined8 *)piVar30;
                  uStack_9d8 = (undefined4)((ulonglong)*(undefined8 *)piVar30 >> 0x20);
                  local_9d0 = &local_9e0;
                  local_9c8 = &local_9e8;
                  FUN_140ce9c76(uVar51,local_9bc,&local_9d0);
                  if (local_950 != (int *)0x0) {
                    FUN_1400020a8();
                  }
                  local_9e8 = (ushort)local_a58;
                  iStack_9e4 = 2;
                  pppppppuVar38 = local_8e0;
                  if (0xf < local_8c8) {
                    pppppppuVar38 = local_8e0[0];
                  }
                  local_968._0_2_ = 0;
                  local_968._2_2_ = 0;
                  local_968._4_4_ = 0;
                  aiStack_960[0] = 0;
                  aiStack_960[1] = 0;
                  aiStack_960[2] = 0;
                  local_950 = (int *)0x0;
                  uStack_948 = 0;
                  FUN_1446ddda2(&local_968,pppppppuVar38,0);
                  iVar56 = *(int *)(lVar20 + 0x238);
                  local_9e0 = CONCAT22(local_968._2_2_,(undefined2)local_968);
                  if ((longlong)iVar56 == -1) {
                    if (((local_9e0 != 0) && (local_968._4_4_ != 0)) &&
                       (piVar30 = (int *)&DAT_14c948028, local_9e0 != DAT_14c948000))
                    goto LAB_14033e53d;
LAB_14033e95d:
                    piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
                    local_9e0 = (int)DAT_14c948618;
                  }
                  else {
                    if (((local_9e0 == 0) || (local_968._4_4_ == 0)) || (local_9e0 == DAT_14c948000)
                       ) goto LAB_14033e95d;
                    piVar32 = aiStack_960;
                    if (0 < uStack_948._4_4_) {
                      piVar32 = local_950;
                    }
                    if (1 < local_968._4_4_) {
                      piVar32 = local_950;
                    }
                    if (local_968._4_4_ == 1 && 0 < iVar56) {
                      piVar30 = local_950;
                      if (uStack_948._4_4_ < 1) {
                        piVar30 = aiStack_960;
                      }
                      piVar30 = piVar30 + 1;
                      bVar62 = *(int *)(lVar20 + 0x23c) != 1;
                      if (bVar62) {
                        piVar32 = (int *)&DAT_14c948618;
                      }
                      local_9e0 = *piVar32;
                      if (bVar62) {
                        piVar30 = (int *)((longlong)&DAT_14c948618 + 4);
                      }
                    }
                    else {
                      if (local_968._4_4_ <= iVar56) goto LAB_14033e95d;
                      piVar30 = piVar32 + (longlong)iVar56 * 3 + 1;
                      local_9e0 = piVar32[(longlong)iVar56 * 3];
                    }
                  }
LAB_14033e53d:
                  uStack_9dc = (undefined4)*(undefined8 *)piVar30;
                  uStack_9d8 = (undefined4)((ulonglong)*(undefined8 *)piVar30 >> 0x20);
                  local_9d0 = &local_9e0;
                  local_9c8 = &local_9e8;
                  FUN_140ce9c76(uVar51,local_9bc,&local_9d0);
                  if (local_950 != (int *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_141738632(&local_938);
                  if ((char)piStack_880 == '\x01') {
                    FUN_1400020a8(local_898);
                  }
                }
                break;
              }
              lVar31 = lVar31 + 0x60;
              lVar22 = lVar22 + -0x60;
            } while (lVar22 != 0);
          }
          local_9d0 = (int *)CONCAT62(local_9d0._2_6_,(ushort)local_a58);
          local_9d0 = (int *)CONCAT44(1,(undefined4)local_9d0);
          plVar34 = (longlong *)(piVar21 + 0x1e);
          if (0xf < *(ulonglong *)(piVar21 + 0x24)) {
            plVar34 = (longlong *)*plVar34;
          }
          local_898 = (code *)0x0;
          uStack_890 = (code *)0x0;
          local_888 = (undefined1 *)((ulonglong)local_888 & 0xffffffff00000000);
          piStack_880 = (int *)0x0;
          local_878 = 0;
          FUN_1446ddda2(&local_898,plVar34,0);
          iVar56 = *(int *)(lVar20 + 0x238);
          if ((longlong)iVar56 == -1) {
            if ((((int)local_898 != 0) && (local_898._4_4_ != 0)) &&
               (piVar32 = (int *)&DAT_14c948028, iVar56 = (int)local_898,
               (int)local_898 != DAT_14c948000)) goto LAB_14033e6c6;
LAB_14033e7c4:
            piVar32 = (int *)((longlong)&DAT_14c948618 + 4);
            iVar56 = (int)DAT_14c948618;
          }
          else {
            if ((((int)local_898 == 0) || (local_898._4_4_ == 0)) ||
               ((int)local_898 == DAT_14c948000)) goto LAB_14033e7c4;
            piVar21 = (int *)&uStack_890;
            if (0 < local_878._4_4_) {
              piVar21 = piStack_880;
            }
            if (1 < local_898._4_4_) {
              piVar21 = piStack_880;
            }
            if (local_898._4_4_ == 1 && 0 < iVar56) {
              piVar32 = piStack_880 + 1;
              if (local_878._4_4_ < 1) {
                piVar32 = (int *)((longlong)&uStack_890 + 4);
              }
              bVar62 = *(int *)(lVar20 + 0x23c) != 1;
              if (bVar62) {
                piVar21 = (int *)&DAT_14c948618;
              }
              iVar56 = *piVar21;
              if (bVar62) {
                piVar32 = (int *)((longlong)&DAT_14c948618 + 4);
              }
            }
            else {
              if (local_898._4_4_ <= iVar56) goto LAB_14033e7c4;
              piVar32 = piVar21 + (longlong)iVar56 * 3 + 1;
              iVar56 = piVar21[(longlong)iVar56 * 3];
            }
          }
LAB_14033e6c6:
          local_968._0_2_ = (undefined2)iVar56;
          local_968._2_2_ = (undefined2)((uint)iVar56 >> 0x10);
          local_968._4_4_ = (int)*(undefined8 *)piVar32;
          aiStack_960[0] = (int)((ulonglong)*(undefined8 *)piVar32 >> 0x20);
          uStack_930 = (ushort *)&local_9d0;
          local_938 = &local_968;
          FUN_140ce9c76(uVar51,&local_9e0,&local_938);
          if (piStack_880 != (int *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_14033d7f6:
      pcVar47 = pcVar47 + 0x30;
    } while (pcVar47 != pcVar41);
  }
  local_970 = 0;
  if (local_978 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_9b8);
  FUN_142b146c8(local_9f8,uStack_9f0 & 0xffffffff);
  if (local_9f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_ae8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14033cf74:
  local_938 = (longlong *)*puVar40;
  uStack_930 = (ushort *)puVar40[1];
  local_928 = puVar40[2];
  uStack_920 = puVar40[3];
  local_918 = puVar40[4];
  uStack_910 = puVar40[5];
  puVar18 = local_938;
  puVar17 = uStack_930;
  uVar25 = *puVar58;
  uVar7 = puVar55[-5];
  uVar8 = puVar55[-4];
  uVar9 = puVar55[-3];
  uVar10 = puVar55[-1];
  puVar40[4] = puVar55[-2];
  puVar40[5] = uVar10;
  puVar40[2] = uVar8;
  puVar40[3] = uVar9;
  *puVar40 = uVar25;
  puVar40[1] = uVar7;
  local_938._4_4_ = (undefined4)((ulonglong)local_938 >> 0x20);
  uStack_930._4_4_ = (undefined4)((ulonglong)uStack_930 >> 0x20);
  puVar55[-2] = local_918;
  puVar55[-1] = uStack_910;
  puVar55[-4] = local_928;
  puVar55[-3] = uStack_920;
  *(undefined4 *)puVar58 = (undefined4)local_938;
  *(undefined4 *)((longlong)puVar55 + -0x2c) = local_938._4_4_;
  *(int *)(puVar55 + -5) = (int)uStack_930;
  *(undefined4 *)((longlong)puVar55 + -0x24) = uStack_930._4_4_;
  iVar56 = iVar56 + -1;
  puVar55 = puVar55 + -0xc;
  local_938 = puVar18;
  uStack_930 = puVar17;
  if ((longlong)puVar59 - (longlong)puVar46 < (longlong)puVar44 - (longlong)puVar60) {
    if (puVar37 < puVar54) {
      *puVar28 = puVar37;
      puVar28[1] = puVar54;
      *(int *)(puVar28 + 2) = iVar56;
      puVar28 = puVar28 + 3;
    }
    puVar37 = puVar40;
    puVar44 = puVar59;
    if (puVar58 <= puVar40 + 6) goto LAB_14033d436;
  }
  else {
    if (puVar40 + 6 < puVar58) {
      *puVar28 = puVar40;
      puVar28[1] = puVar55;
      *(int *)(puVar28 + 2) = iVar56;
      puVar28 = puVar28 + 3;
    }
    puVar40 = puVar60;
    puVar55 = puVar54;
    puVar44 = puVar54;
    if (puVar54 <= puVar37) goto LAB_14033d436;
  }
  iVar61 = (int)((ulonglong)((longlong)puVar44 - (longlong)puVar40) >> 4) * -0x55555555;
  uVar27 = iVar61 + 1;
  puVar46 = puVar40;
  puVar40 = puVar37;
  puVar54 = puVar55;
  if (iVar56 == 0) goto LAB_14033d06d;
  goto LAB_14033ce2a;
}



// FUNCTION 14033f58e FUN_14033f58e body=1046 status=ok
// SIG undefined FUN_14033f58e(void)

void FUN_14033f58e(longlong param_1,float *param_2,undefined8 param_3,float param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(char *)(param_1 + 0x2c8) == '\0') {
    *(float *)(param_1 + 0x2cc) = param_4 + *(float *)(param_1 + 0x2cc);
    return;
  }
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  lVar6 = FUN_141545d8e(*(undefined8 *)(param_1 + 0x238));
  if (((lVar6 == 0) || (*(longlong *)(param_1 + 0x228) != 0)) ||
     (cVar5 = FUN_140432338(lVar6), cVar5 == '\0')) goto LAB_14033f5e5;
  lVar7 = FUN_14001cc68(0x40,0x10);
  FUN_1456bc184(lVar7,lVar6,param_1 + 0x1e0);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b457550;
  plVar8[2] = lVar7;
  *(longlong *)(param_1 + 0x228) = lVar7;
  plVar10 = *(longlong **)(param_1 + 0x230);
  if (plVar8 == plVar10) {
    if (plVar8 == (longlong *)0x0) goto LAB_14033f5e5;
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_14033f5e5;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
    plVar10 = plVar8;
  }
  else {
    *(longlong **)(param_1 + 0x230) = plVar8;
    if (plVar10 == (longlong *)0x0) goto LAB_14033f5e5;
    LOCK();
    plVar8 = plVar10 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14033f5e5;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar9 = *piVar1;
    UNLOCK();
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_14033f5e5:
  *(undefined1 *)(param_1 + 0x26e) = 1;
  fVar15 = DAT_14cb912e0;
  fVar16 = *param_2 * *(float *)(param_1 + 0x264);
  iVar9 = (int)((ulonglong)(longlong)ROUND(fVar16 + fVar16 + 0.5) >> 1);
  fVar16 = param_2[1] * *(float *)(param_1 + 0x264);
  iVar12 = (int)((ulonglong)(longlong)ROUND(fVar16 + fVar16 + 0.5) >> 1);
  if (0.0 < DAT_14cb912e0) {
    *(float *)(param_1 + 0x2c4) = DAT_14cb912e0;
    if ((0 < iVar9) && (0 < iVar12)) {
      fVar16 = 1.0;
      if (0 < DAT_14cb912e4) {
        fVar17 = (float)DAT_14cb912e4 / ((float)iVar9 * fVar15);
        fVar16 = 1.0;
        if (fVar17 <= 1.0) {
          fVar16 = fVar17;
        }
      }
      fVar17 = 1.0;
      if (0 < DAT_14cb912e8) {
        fVar18 = (float)DAT_14cb912e8 / ((float)iVar12 * fVar15);
        fVar17 = 1.0;
        if (fVar18 <= 1.0) {
          fVar17 = fVar18;
        }
      }
      if (fVar17 <= fVar16) {
        fVar16 = fVar17;
      }
      fVar15 = fVar15 * fVar16;
      *(float *)(param_1 + 0x2c4) = fVar15;
    }
    iVar9 = (int)((float)iVar9 * fVar15);
    iVar12 = (int)((float)iVar12 * fVar15);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c4) = 0x3f800000;
  }
  lVar6 = *(longlong *)(param_1 + 0x238);
  lVar7 = *(longlong *)(lVar6 + 8);
  bVar13 = true;
  if (iVar9 == *(int *)(param_1 + 600)) {
    bVar13 = iVar12 != *(int *)(param_1 + 0x25c);
  }
  if (lVar7 == 0) {
    bVar4 = true;
    bVar11 = 0;
  }
  else {
    if (*(longlong *)(lVar6 + 0x140) == 0) {
      bVar14 = true;
      bVar4 = false;
    }
    else {
      bVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x140) + 0x68) == 0;
      bVar4 = !bVar14;
    }
    if (((0 < iVar9) && (bVar14 || bVar13)) && (0 < iVar12)) {
      *(int *)(param_1 + 600) = iVar9;
      *(int *)(param_1 + 0x25c) = iVar12;
      FUN_145d6c266();
      *(undefined1 *)(param_1 + 0x26d) = 1;
      lVar6 = *(longlong *)(param_1 + 0x238);
    }
    bVar11 = *(byte *)(lVar6 + 0x16c);
  }
  pbVar2 = (byte *)(param_1 + 0x26d);
  *pbVar2 = *pbVar2 | bVar11;
  if ((((*pbVar2 != 0) && (lVar7 != 0)) && (bVar4 || bVar11 != 0)) &&
     (*(char *)(param_1 + 0x2b6) == '\0')) {
    *(undefined1 *)(lVar6 + 0x16c) = 0;
    if ((*(longlong *)(lVar6 + 0x140) != 0) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x140) + 0x68) != 0)) {
      FUN_1406483f2(*(undefined8 *)(param_1 + 0x228));
    }
    *(undefined1 *)(param_1 + 0x26d) = 0;
  }
  if (((lVar7 != 0) && (bVar11 == 1)) &&
     (plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0x20), plVar10 != (longlong *)0x0))
  {
    (**(code **)(*plVar10 + 0x568))(plVar10,0);
  }
  if (*(char *)(param_1 + 0x2b7) == '\x01') {
    FUN_1415c8144(*(undefined8 *)(param_1 + 0x238));
    FUN_140163244(param_1,2);
    *(undefined1 *)(param_1 + 0x2b7) = 0;
  }
  else if ((((*(int *)(param_1 + 0x254) != 0) &&
            (uVar3 = *(uint *)(param_1 + 0x250), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
          && (((plVar10 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x254))) &&
              (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar6 = *plVar10, lVar6 != 0)))))) {
    lVar7 = FUN_141419e42();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) && (*(char *)(lVar6 + 0x2f8) == '\x01')) {
      FUN_1415c8144(*(undefined8 *)(param_1 + 0x238));
      return;
    }
  }
  return;
}



// FUNCTION 14033f9a4 FUN_14033f9a4 body=648 status=ok
// SIG undefined FUN_14033f9a4(void)

char * FUN_14033f9a4(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x1d1) == '\x01') {
    *param_2 = '\x01';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if (*(longlong *)(param_1 + -0x90) == 0) {
LAB_14033fb4f:
    iVar9 = 1;
  }
  else {
    plVar3 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
    if ((local_48 == (int)DAT_14c967818) && (local_44 == DAT_14c967818._4_4_)) goto LAB_14033fb4f;
    uVar7 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x100))(plVar3);
    uVar8 = (**(code **)(*(longlong *)(param_1 + -0xc0) + 0x108))(plVar3);
    iVar9 = (**(code **)(**(longlong **)(param_1 + -0x90) + 0xb8))
                      (*(longlong **)(param_1 + -0x90),plVar3,uVar7,uVar8);
  }
  if (((DAT_14cb0d2b0 != 0) &&
      (lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0xc20), iVar9 != 0 && lVar4 != 0)) &&
     (plVar3 = *(longlong **)(lVar4 + 0x118), plVar3 != (longlong *)0x0)) {
    iVar10 = (int)plVar3[1];
    do {
      if (iVar10 == 0) goto LAB_14033fa7c;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar10 == iVar6;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar10 + 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      UNLOCK();
    } while (!bVar11);
    plVar5 = *(longlong **)(lVar4 + 0x110);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x90))(plVar5,param_2,param_3,param_4);
      if (*param_2 != '\0') {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        goto LAB_14033fa91;
      }
      plVar5 = *(longlong **)(param_2 + 0x30);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = *(longlong **)(param_2 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_14033fa7c:
  *param_2 = '\x01';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = '\0';
  param_2[0x27] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  *(int *)(param_2 + 0x38) = iVar9;
LAB_14033fa91:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14033fc42 FUN_14033fc42 body=14 status=ok
// SIG undefined FUN_14033fc42(void)

void FUN_14033fc42(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14033fc50();
    return;
  }
  return;
}



// FUNCTION 14033fc50 FUN_14033fc50 body=449 status=ok
// SIG undefined FUN_14033fc50(void)

void FUN_14033fc50(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0xd978);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14033fd6a:
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
LAB_14033fda7:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xd978;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14033fca8;
LAB_14033fc9d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14033fca8:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 == 1) goto code_r0x00014033fcd1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x365e + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14033fd27:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14033fda7;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14033fd6a;
code_r0x00014033fcd1:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + 0xd978);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14033fd27;
    }
  }
  goto LAB_14033fc9d;
}



// FUNCTION 14033fe12 FUN_14033fe12 body=343 status=ok
// SIG undefined FUN_14033fe12(void)

uint FUN_14033fe12(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if (0 < (int)*(uint *)(param_1 + 0x1150)) {
    uVar6 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(param_1 + 0x1148) + uVar6 * 8);
      if (*pcVar1 == '\x01') {
        lVar2 = *(longlong *)(pcVar1 + 0x360);
        fVar10 = 0.0;
        if ((lVar2 == 0) || (plVar3 = *(longlong **)(lVar2 + 0x38), plVar3 == (longlong *)0x0))
        goto LAB_14033fee0;
        if (*(code **)(*plVar3 + 0x3c0) == (code *)&LAB_1448ff5f6) {
          bVar7 = plVar3[0x1e] == 0;
        }
        else {
          bVar7 = (**(code **)(*plVar3 + 0x3c0))(plVar3);
        }
        if (((~bVar7 | DAT_14c86a9f0) & 1) != 0) {
          if (*(code **)(*plVar3 + 0x3c0) == (code *)&LAB_1448ff5f6) {
            cVar8 = plVar3[0x1e] == 0;
          }
          else {
            cVar8 = (**(code **)(*plVar3 + 0x3c0))(plVar3);
          }
          fVar10 = 0.0;
          if (((cVar8 == '\0') || ((DAT_14c86a9f0 & 1) == 0)) ||
             ((*(byte *)((longlong)plVar3 + 0x9c) & 1) == 0)) goto LAB_14033fee0;
        }
        iVar5 = 1000;
        if ((int)plVar3[0x14] < 1000) {
          iVar5 = (int)plVar3[0x14];
        }
        iVar4 = 1;
        if (1 < iVar5) {
          iVar4 = iVar5;
        }
        fVar10 = (float)iVar4;
        goto LAB_14033fee0;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(param_1 + 0x1150) != uVar6);
    fVar10 = 0.0;
  }
LAB_14033fee0:
  fVar9 = (float)FUN_14033ff6a(param_1,param_2,param_3);
  return (uint)fVar9 & -(uint)(fVar9 != 0.0) | ~-(uint)(fVar9 != 0.0) & (uint)fVar10;
}



// FUNCTION 14033ff6a FUN_14033ff6a body=685 status=ok
// SIG undefined FUN_14033ff6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14033ff6a(longlong *param_1,float param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  float fVar11;
  
  fVar11 = 0.0;
  if ((param_3 != '\0') && (cVar6 = (**(code **)(*param_1 + 0x318))(), cVar6 != '\0')) {
    fVar11 = 1.0 / *(float *)(param_1 + 0x211);
    if ((*(char *)((longlong)param_1 + 0xc4c) != '\x02') && (fVar11 <= *(float *)(param_1 + 0x18a)))
    {
      fVar11 = *(float *)(param_1 + 0x18a);
    }
    if ((*(char *)((longlong)param_1 + 0xc54) != '\x02') && (*(float *)(param_1 + 0x18b) <= fVar11))
    {
      fVar11 = *(float *)(param_1 + 0x18b);
    }
  }
  lVar4 = DAT_14cb0cfa8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar10 = 0;
  }
  else if (iVar2 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar10 = 1;
  }
  lVar5 = DAT_14cb0cfc0;
  piVar1 = (int *)(lVar3 + 0xc60);
  if (*(int *)(lVar4 + uVar10 * 4) != 0) {
    DAT_14cb0cfe0 = param_2 + DAT_14cb0cfe0;
    iVar2 = *piVar1;
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar10 = 1;
    }
    if ((float)*(int *)(lVar5 + uVar10 * 4) / 1000.0 + 1.0 < DAT_14cb0cfe0) {
      FUN_14000f986();
      DAT_14cb0cfe0 = 0.0;
    }
  }
  lVar3 = DAT_14cb0cfd8;
  iVar2 = *piVar1;
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar10 = 0;
  }
  else if (iVar2 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar10 = 1;
  }
  lVar4 = DAT_14cb0cf90;
  if (*(int *)(lVar3 + uVar10 * 4) == 0) {
    iVar2 = *piVar1;
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar10 = 1;
    }
    lVar3 = DAT_14cb0cf90;
    if (0.0 < *(float *)(lVar4 + uVar10 * 4)) {
      iVar2 = *piVar1;
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar10 = 0;
      }
      else if (iVar2 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar10 = 1;
      }
      fVar11 = *(float *)(lVar3 + uVar10 * 4);
    }
  }
  else {
    uVar7 = rand();
    fVar11 = ((float)(uVar7 & 0x7fff) / 32767.0) * 10.0 + -5.0 + _DAT_14c761e38;
    if (32.0 <= fVar11) {
      fVar11 = 32.0;
    }
    _DAT_14c761e38 = fVar11;
    if (fVar11 <= 8.0) {
      fVar11 = 8.0;
      _DAT_14c761e38 = fVar11;
    }
  }
  return fVar11;
}



// FUNCTION 140340218 FUN_140340218 body=181 status=ok
// SIG undefined FUN_140340218(void)

longlong * FUN_140340218(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1403402f8(0,&local_40);
  FUN_1403402ce(param_2,local_38);
  lVar2 = local_40;
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1402e69d2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)local_38 * 0x10 != lVar3);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403402ce FUN_1403402ce body=42 status=ok
// SIG undefined FUN_1403402ce(void)

void FUN_1403402ce(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1401adc10();
    return;
  }
  return;
}



// FUNCTION 1403402f8 FUN_1403402f8 body=1796 status=ok
// SIG undefined FUN_1403402f8(void)

longlong * FUN_1403402f8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined1 auStack_f8 [32];
  undefined4 local_a8;
  undefined1 local_a4;
  uint local_a0;
  uint uStack_9c;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar17 = param_1[1];
  if ((longlong)(int)lVar17 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    iVar16 = 0;
  }
  else {
    lVar12 = *param_1;
    lVar22 = 0;
    do {
      uVar21 = *(uint *)(lVar12 + lVar22);
      uStack_9c = *(uint *)(lVar12 + 4 + lVar22);
      local_a0 = uStack_9c;
      if ((int)uVar21 < (int)uStack_9c) {
        local_a0 = uVar21;
      }
      if ((int)uStack_9c < (int)uVar21) {
        uStack_9c = uVar21;
      }
      uVar4 = FUN_140340bda(&local_98,
                            ((uint)(CONCAT44(uStack_9c,local_a0) >> 2) & 0x3fffffff) + 0x9e3779b9 +
                            local_a0 * 0x40 + uStack_9c ^ local_a0,&local_a0);
      local_a8 = *(undefined4 *)(lVar12 + 8 + lVar22);
      local_a4 = *(int *)(lVar12 + 4 + lVar22) < *(int *)(lVar12 + lVar22);
      FUN_1403409fe(uVar4,&local_a8);
      uVar21 = *(uint *)(lVar12 + 4 + lVar22);
      uStack_9c = *(uint *)(lVar12 + 8 + lVar22);
      local_a0 = uStack_9c;
      if ((int)uVar21 < (int)uStack_9c) {
        local_a0 = uVar21;
      }
      if ((int)uStack_9c < (int)uVar21) {
        uStack_9c = uVar21;
      }
      uVar4 = FUN_140340bda(&local_98,
                            ((uint)(CONCAT44(uStack_9c,local_a0) >> 2) & 0x3fffffff) + 0x9e3779b9 +
                            local_a0 * 0x40 + uStack_9c ^ local_a0,&local_a0);
      local_a8 = *(undefined4 *)(lVar12 + lVar22);
      local_a4 = *(int *)(lVar12 + 8 + lVar22) < *(int *)(lVar12 + 4 + lVar22);
      FUN_1403409fe(uVar4,&local_a8);
      uStack_9c = *(uint *)(lVar12 + lVar22);
      uVar21 = *(uint *)(lVar12 + 8 + lVar22);
      local_a0 = uStack_9c;
      if ((int)uVar21 < (int)uStack_9c) {
        local_a0 = uVar21;
      }
      if ((int)uStack_9c < (int)uVar21) {
        uStack_9c = uVar21;
      }
      uVar4 = FUN_140340bda(&local_98,
                            ((uint)(CONCAT44(uStack_9c,local_a0) >> 2) & 0x3fffffff) + 0x9e3779b9 +
                            local_a0 * 0x40 + uStack_9c ^ local_a0,&local_a0);
      local_a8 = *(undefined4 *)(lVar12 + 4 + lVar22);
      local_a4 = *(int *)(lVar12 + lVar22) < *(int *)(lVar12 + 8 + lVar22);
      FUN_1403409fe(uVar4,&local_a8);
      iVar7 = local_70;
      lVar22 = lVar22 + 0xc;
    } while ((longlong)(int)lVar17 * 0xc != lVar22);
    *param_2 = 0;
    param_2[1] = 0;
    if (local_70 == 0) {
      iVar16 = 0;
    }
    else {
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      uVar21 = *puVar5;
      iVar16 = local_70;
      if (uVar21 == 0) {
        iVar24 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar24 = local_70 + -1;
        }
        uVar20 = 0;
        uVar14 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar14 = uVar20;
        }
        iVar24 = 0;
        do {
          if (uVar14 == uVar20) goto LAB_140340758;
          iVar24 = iVar24 + 0x20;
          uVar21 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar20 = 0;
        iVar24 = 0;
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21);
      uVar14 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar8 < local_70) {
        uVar21 = 0xffffffff;
        puVar5 = local_78;
        do {
          iVar10 = *(int *)(local_98 + 0x10 + (longlong)iVar8 * 0x20);
          if (0 < iVar10) {
            puVar23 = (undefined4 *)(local_98 + (longlong)iVar8 * 0x20);
            lVar12 = 1;
            lVar17 = 0;
            do {
              lVar13 = lVar17 + 1;
              lVar6 = (longlong)iVar10;
              lVar22 = lVar12;
              if (lVar13 < lVar6) {
                do {
                  lVar6 = *(longlong *)(puVar23 + 2);
                  cVar1 = *(char *)(lVar6 + 4 + lVar22 * 8);
                  if (*(char *)(lVar6 + 4 + lVar17 * 8) == '\0') {
                    if (cVar1 == '\0') goto LAB_140340987;
                    iVar16 = *(int *)(lVar6 + lVar22 * 8);
                    iVar8 = *(int *)(lVar6 + lVar17 * 8);
                  }
                  else if (cVar1 == '\0') {
                    iVar16 = *(int *)(lVar6 + lVar17 * 8);
                    iVar8 = *(int *)(lVar6 + lVar22 * 8);
                  }
                  else {
LAB_140340987:
                    iVar10 = *(int *)(lVar6 + lVar17 * 8);
                    iVar8 = *(int *)(lVar6 + lVar22 * 8);
                    iVar16 = iVar8;
                    if (iVar8 < iVar10) {
                      iVar16 = iVar10;
                    }
                    if (iVar10 < iVar8) {
                      iVar8 = iVar10;
                    }
                  }
                  uVar2 = *puVar23;
                  uVar3 = puVar23[1];
                  iVar10 = (int)param_2[1];
                  *(uint *)(param_2 + 1) = iVar10 + 1U;
                  if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
                    FUN_1403412ae(param_2,iVar10);
                  }
                  lVar6 = *param_2;
                  lVar15 = (longlong)iVar10 * 0x10;
                  *(undefined4 *)(lVar6 + lVar15) = uVar2;
                  *(undefined4 *)(lVar6 + 4 + lVar15) = uVar3;
                  *(int *)(lVar6 + 8 + lVar15) = iVar8;
                  *(int *)(lVar6 + 0xc + lVar15) = iVar16;
                  lVar22 = lVar22 + 1;
                  iVar10 = puVar23[4];
                } while ((int)lVar22 < iVar10);
                lVar6 = (longlong)iVar10;
              }
              lVar12 = lVar12 + 1;
              puVar5 = local_78;
              lVar17 = lVar13;
              iVar16 = local_70;
            } while (lVar13 < lVar6);
          }
          uVar21 = uVar21 & ~(uint)uVar19;
          puVar18 = puVar5;
          if (puVar5 == (uint *)0x0) {
            puVar18 = local_88;
          }
          iVar8 = (int)uVar20;
          lVar17 = (longlong)iVar8;
          uVar9 = puVar18[lVar17] & uVar21;
          if (uVar9 == 0) {
            iVar10 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar10 = iVar16 + -1;
            }
            iVar10 = iVar10 >> 5;
            iVar24 = iVar24 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar8) {
              iVar11 = iVar8;
            }
            if (iVar8 < iVar10) {
              lVar12 = 0;
              do {
                uVar9 = puVar18[lVar17 + lVar12 + 1];
                if (uVar9 != 0) {
                  uVar20 = (ulonglong)(iVar8 + (int)lVar12 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_1403406eb;
                }
                iVar24 = iVar24 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar11 - lVar17 != lVar12);
              uVar21 = 0xffffffff;
              iVar8 = iVar11;
            }
            uVar20 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar16;
          }
          else {
LAB_1403406eb:
            uVar19 = (ulonglong)(-uVar9 & uVar9);
            uVar14 = uVar19 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar8 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar8) {
              iVar8 = iVar16;
            }
          }
        } while (iVar8 != iVar7);
      }
    }
  }
LAB_140340758:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
    iVar16 = local_70;
  }
  if (iVar16 == 0) {
    uVar20 = 0;
    uVar14 = 1;
    iVar7 = 0;
    iVar24 = 0;
  }
  else {
    puVar5 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar21 = *puVar5;
    if (uVar21 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar20 = 0;
      uVar14 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar14 = uVar20;
      }
      iVar24 = 0;
      do {
        if (uVar14 == uVar20) goto LAB_1403408b2;
        iVar24 = iVar24 + 0x20;
        uVar21 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar20 = 0;
      iVar24 = 0;
    }
    uVar14 = (ulonglong)(-uVar21 & uVar21);
    uVar19 = uVar14 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar7 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar21 = 0xffffffff;
    do {
      if (*(longlong *)(local_98 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar16 = local_70;
      }
      uVar21 = uVar21 & ~(uint)uVar14;
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar7 = (int)uVar20;
      lVar17 = (longlong)iVar7;
      uVar9 = puVar5[lVar17] & uVar21;
      if (uVar9 == 0) {
        iVar8 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar8 = iVar16 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar8;
        if (iVar8 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar8 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar24 = iVar24 + 0x20;
          uVar9 = puVar5[lVar17 + lVar12 + 1];
          if (uVar9 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar17 == lVar12) goto LAB_1403408b2;
        }
        uVar20 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar21 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar9 & uVar9);
      uVar19 = uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar7 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
LAB_1403408b2:
  uVar20 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar20 != 0) {
    FUN_1446f4a44(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403409fe FUN_1403409fe body=122 status=ok
// SIG undefined FUN_1403409fe(void)

void FUN_1403409fe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(int *)(lVar3 + uVar4) == *param_2) &&
         (*(char *)(lVar3 + 4 + uVar4) == (char)param_2[1])) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      lVar1 = lVar3 + uVar4;
      uVar4 = uVar4 + 8;
    } while (lVar1 + 8 != lVar3 + lVar5 * 8);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140340a78(param_1,iVar2);
    lVar3 = *param_1;
  }
  *(undefined8 *)(lVar3 + lVar5 * 8) = *(undefined8 *)param_2;
  return;
}



// FUNCTION 140340a78 FUN_140340a78 body=353 status=ok
// SIG undefined FUN_140340a78(void)

void FUN_140340a78(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140340afd;
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
LAB_140340afd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140340bda FUN_140340bda body=1748 status=ok
// SIG undefined FUN_140340bda(void)

longlong FUN_140340bda(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  
  iVar24 = (int)param_1[1];
  iVar27 = *(int *)((longlong)param_1 + 0x34);
  if (iVar24 != iVar27) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar15 = *param_1 + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          if (lVar15 != 0) goto LAB_140340de5;
          break;
        }
        iVar10 = *(int *)(lVar15 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (iVar27 == 0) {
    *(int *)(param_1 + 1) = iVar24 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar24) {
      FUN_1447711aa(param_1,iVar24);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar10 = iVar27 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar17 = iVar27 + 1;
    iVar20 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar20 = iVar27;
    }
    if (iVar20 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar27) {
        iVar10 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar23 = iVar27 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar23) {
              uVar11 = uVar23;
            }
          }
          else {
            uVar11 = uVar23 + (uVar23 * 3 >> 3) + 0x10;
          }
          uVar19 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar12 = (uint)(uVar19 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar19 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar12 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar12 >> 4];
                  uVar28 = 0x32;
                  if (0x32 < bVar16) {
                    uVar28 = (ulonglong)bVar16;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_14034112d;
                    lVar15 = uVar28 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar15 != 0x33);
                }
                uVar19 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar19 = (ulonglong)DAT_14c841df8;
                }
                uVar19 = -uVar19 & (uVar22 + uVar19) - 1;
              }
            }
            else {
              uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_14034112d:
          iVar13 = (int)(uVar19 >> 2);
          iVar17 = -0x20;
          if ((int)uVar23 <= iVar13) {
            iVar17 = iVar13 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar14,iVar10);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar10 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar10 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar14;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar10 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar24;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar27 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar24 = (int)param_1[6];
    lVar15 = (longlong)iVar24;
    iVar10 = *(int *)(*param_1 + 4 + lVar15 * 0x20);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar27 + -1;
    if (iVar27 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar1;
  }
  iVar27 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar27 = iVar24;
  }
  puVar18[iVar27 >> 5] = puVar18[iVar27 >> 5] | 1 << ((byte)iVar24 & 0x1f);
  uVar23 = 1;
  lVar26 = *param_1;
  lVar15 = lVar15 * 0x20;
  puVar2 = (undefined4 *)(lVar26 + lVar15);
  lVar5 = *param_3;
  *(longlong *)(lVar26 + lVar15) = lVar5;
  puVar4 = (undefined8 *)(lVar26 + 8 + lVar15);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar26 + 0x18 + lVar15) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar11 != 0) && (uVar11 != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar27 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar27 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar27 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar27 * 0x20) == lVar5) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_146e374ac(param_1,iVar24);
          goto LAB_140340dc5;
        }
        iVar27 = puVar3[6];
      } while (iVar27 != -1);
    }
  }
  if (3 < uVar11) {
    uVar19 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar23 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar11 < 1) || ((int)uVar23 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar24;
    goto LAB_140340dc5;
  }
  *(uint *)(param_1 + 9) = uVar23;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar23 = *(uint *)(param_1 + 9);
  }
  plVar21 = param_1 + 7;
  if (uVar23 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_140340e93:
    uVar11 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar21;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4) =
           0xffffffff;
      uVar11 = uVar11 + 1;
    } while (uVar23 != uVar11);
  }
  else {
    if (uVar23 == 0) goto LAB_140340dc5;
    FUN_1446efa72(plVar14,0,uVar23,4);
    if (0 < (int)uVar23) goto LAB_140340e93;
  }
  iVar27 = (int)param_1[5];
  if (iVar27 == 0) {
    uVar19 = 0;
    uVar22 = 1;
    iVar10 = 0;
    iVar17 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar23 = *puVar18;
    if (uVar23 == 0) {
      iVar10 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar10 = iVar27 + -1;
      }
      uVar19 = 0;
      uVar22 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar22 = uVar19;
      }
      iVar17 = 0;
      do {
        if (uVar22 == uVar19) goto LAB_140340dc5;
        iVar17 = iVar17 + 0x20;
        uVar23 = puVar18[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar19 = 0;
      iVar17 = 0;
    }
    uVar22 = (ulonglong)(-uVar23 & uVar23);
    uVar28 = uVar22 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar10) {
      iVar10 = iVar27;
    }
  }
  if (iVar10 < iVar27) {
    uVar23 = 0xffffffff;
    do {
      lVar15 = *param_1;
      lVar26 = (longlong)iVar10 * 0x20;
      uVar11 = (uint)*(undefined8 *)(lVar15 + lVar26);
      uVar28 = (longlong)
               (int)((uVar11 >> 2) +
                     uVar11 * 0x40 + (int)((ulonglong)*(undefined8 *)(lVar15 + lVar26) >> 0x20) +
                     0x9e3779b9 ^ uVar11) & (longlong)(int)param_1[9] - 1U;
      iVar27 = (int)uVar28;
      *(int *)(lVar15 + 0x1c + lVar26) = iVar27;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar21;
      }
      *(undefined4 *)(lVar15 + 0x18 + lVar26) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar28) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar21;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar27 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
      ;
      uVar23 = ~(uint)uVar22 & uVar23;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar27 = (int)param_1[5];
      iVar10 = (int)uVar19;
      lVar15 = (longlong)iVar10;
      uVar11 = puVar18[lVar15] & uVar23;
      if (uVar11 == 0) {
        iVar20 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar20 = iVar27 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar13 = iVar20;
        if (iVar20 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar20 <= iVar10) break;
        lVar26 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar11 = puVar18[lVar15 + lVar26 + 1];
          if (uVar11 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar13 - lVar15 == lVar26) goto LAB_140340dc5;
        }
        uVar19 = (ulonglong)(iVar10 + (int)lVar26 + 1);
        uVar23 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar11 & uVar11);
      uVar28 = uVar22 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar27);
  }
LAB_140340dc5:
  lVar15 = *param_1 + (longlong)iVar24 * 0x20;
LAB_140340de5:
  return lVar15 + 8;
}



// FUNCTION 1403412ae FUN_1403412ae body=269 status=ok
// SIG undefined FUN_1403412ae(void)

void FUN_1403412ae(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1403413c2 FUN_1403413c2 body=1010 status=ok
// SIG undefined FUN_1403413c2(void)

void FUN_1403413c2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [72];
  undefined1 local_178 [88];
  undefined1 local_120 [72];
  longlong local_d8 [2];
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined8 uStack_97;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(char *)((longlong)param_1 + 0x252) == '\x01') && (param_1[0x45] == 0)) goto LAB_140341607;
  local_d8[0] = *param_2;
  local_d8[1] = 0;
  local_c8 = 1;
  local_c4 = 0xffffffffffffffff;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  local_40 = (char)param_2[0x13];
  lVar4 = *(longlong *)(local_d8[0] + 0x6a0);
  uVar1 = *(uint *)(lVar4 + 8);
  local_a8 = lVar4;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar5 = 0;
  iVar3 = 0;
  if (uVar1 != 0) {
    FUN_144717690(&local_b8,uVar1);
    iVar5 = (int)uStack_b0;
    iVar3 = uStack_b0._4_4_;
  }
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar5 + uVar1);
  if ((uint)(iVar3 - iVar5) < uVar1) {
    FUN_1406600da(&local_b8);
  }
  local_88 = lVar4 + 0xb0;
  local_c4 = *(undefined8 *)((longlong)param_2 + 0x14);
  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
    if (local_40 == '\x01') {
      FUN_1433edd58(&local_b8);
    }
    else {
      FUN_1448859f0(&local_b8,local_a8);
    }
  }
  else {
    local_c4 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),(int)param_1[0xd]);
    (**(code **)(*(longlong *)param_1[0xc] + 0x28))();
  }
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  if (((cVar2 == '\0') || (*(float *)((longlong)param_1 + 0x23c) <= 1e-05)) ||
     (lVar4 = (**(code **)(*param_1 + 0x108))(param_1), lVar4 == 0)) {
LAB_140341582:
    FUN_140341844(param_2,local_d8);
  }
  else {
    if (0.99999 <= *(float *)((longlong)param_1 + 0x23c)) {
      FUN_140341aca(param_1,local_d8);
      goto LAB_140341582;
    }
    FUN_144ade07e(local_178,local_d8,0);
    FUN_140341844(local_178,local_d8);
    FUN_140341aca(param_1,local_178);
    FUN_144ade07e(local_218,local_178,0);
    FUN_140341844(local_218,local_178);
    FUN_1433cebfc(local_1f8,&local_b8);
    FUN_14092124e(local_1e0,&uStack_a0);
    FUN_140341844(param_2,local_d8);
    FUN_140921370(&lStack_80,local_1c0);
    local_230 = param_2 + 4;
    local_228 = param_2 + 7;
    local_220 = param_2 + 0xb;
    local_248 = local_1f8;
    local_240 = local_1e0;
    local_238 = local_1c0;
    FUN_1447167be(&local_230,&local_248,*(undefined4 *)((longlong)param_1 + 0x23c),1);
    FUN_1447166b4(local_1c0);
    FUN_1447166b4(local_120);
  }
  if (lStack_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_60,local_58 & 0xffffffff);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_70,local_68 & 0xffffffff);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_80,local_78 & 0xffffffff);
  if (lStack_80 != 0) {
    FUN_1400020a8();
  }
LAB_140341607:
  if ((local_38 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403417b6 FUN_1403417b6 body=101 status=ok
// SIG undefined FUN_1403417b6(void)

byte FUN_1403417b6(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = (**(code **)(*DAT_14cc068f0 + 0xb0))();
  if ((iVar2 == 0) && ((*(char *)((longlong)param_1 + 0x252) != '\x01' || (param_1[0x45] != 0)))) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x108))(param_1);
    bVar1 = (byte)param_1;
    if (plVar3 != (longlong *)0x0) {
      bVar1 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
    }
    bVar1 = plVar3 != (longlong *)0x0 & bVar1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



// FUNCTION 140341824 FUN_140341824 body=31 status=ok
// SIG undefined FUN_140341824(void)

bool FUN_140341824(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_14cc05740 + 0xb0))();
  return iVar1 != 1;
}



// FUNCTION 140341844 FUN_140341844 body=269 status=ok
// SIG undefined FUN_140341844(void)

longlong * FUN_140341844(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*param_1 != *param_2) {
    FUN_1447ce2ce(param_1);
  }
  if (param_1 == param_2) {
    param_1[6] = param_2[6];
  }
  else {
    iVar1 = (int)param_2[5];
    pvVar2 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_14470ea6a(param_1 + 4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x60);
      }
    }
    param_1[6] = param_2[6];
    iVar1 = (int)param_2[8];
    pvVar2 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      FUN_14471726c(param_1 + 7,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 << 4);
      }
    }
  }
  *(char *)(param_1 + 9) = (char)param_2[9];
  param_1[10] = param_2[10];
  FUN_140341952(param_1 + 0xb,param_2 + 0xb);
  *(char *)(param_1 + 0x13) = (char)param_2[0x13];
  return param_1;
}



// FUNCTION 140341952 FUN_140341952 body=282 status=ok
// SIG undefined FUN_140341952(void)

undefined8 * FUN_140341952(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  if (param_1 == param_2) {
    FUN_140341a6c(param_1 + 4,param_2 + 4);
  }
  else {
    FUN_144716727(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145741460(param_1,iVar1);
      FUN_1457414c2(*param_1,uVar2,iVar1);
    }
    FUN_144716758(param_1[2],*(undefined4 *)(param_1 + 3));
    iVar1 = *(int *)(param_2 + 3);
    uVar2 = param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1474d487e(param_1 + 2,iVar1);
      FUN_1474d48e0(param_1[2],uVar2,iVar1);
    }
    FUN_140341a6c(param_1 + 4,param_2 + 4);
    iVar1 = *(int *)(param_2 + 7);
    _Src = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1474d4b9c(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[6],_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140341a6c FUN_140341a6c body=93 status=ok
// SIG undefined FUN_140341a6c(void)

undefined8 * FUN_140341a6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144716785(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145741538(param_1,iVar1);
      FUN_14574159a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140341aca FUN_140341aca body=875 status=ok
// SIG undefined FUN_140341aca(void)

void FUN_140341aca(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *_Str;
  undefined1 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong **ppuVar13;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  LPCRITICAL_SECTION local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong *local_68;
  undefined8 uStack_60;
  ulonglong *local_50;
  ulonglong local_48;
  size_t sVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x108))();
  if (plVar6 != (longlong *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(plVar6 + 0x4a);
    EnterCriticalSection(lpCriticalSection);
    plVar6[0xb3] = param_2 + 0x58;
    lVar1 = plVar6[0x5f];
    if (lVar1 == 0) {
      plVar6[0xb3] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if (((*(char *)((longlong)param_1 + 0x252) == '\x01') && (param_1[0x45] != 0)) &&
       (*(int *)(param_1[0x45] + 0xf8) != *(int *)(lVar1 + 0xa8))) {
      local_68 = (ulonglong *)0x0;
      uStack_60 = 0;
      FUN_1491ddccc(lVar1);
      FUN_140811358(param_1,plVar6,*(undefined8 *)(param_2 + 0x30));
      local_78 = param_1[0x45];
      local_70 = param_1[0x46];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      FUN_1491ddccc(lVar1,&local_78);
    }
    (**(code **)(*param_1 + 0x120))(param_1,plVar6,param_2);
    if ((char)param_1[0x47] == '\x01') {
      uVar9 = *(undefined1 *)((longlong)plVar6 + 0x7ca);
      *(undefined1 *)((longlong)plVar6 + 0x7ca) = 1;
      lVar1 = param_1[0x49];
      if ((longlong)(int)lVar1 == 0) {
        if ((char)param_1[0x4a] == '\x01') {
          if ((longlong)DAT_14cc07488 < 0) {
            _Str = (ulonglong *)(DAT_14cc07488 & 0x7fffffffffffffff);
            if (DAT_14cc07494 == '\x01') {
              ppuVar13 = &local_68;
              FUN_1446f470e(ppuVar13,_Str,1);
            }
            else {
              local_68 = _Str;
              if (_Str == (ulonglong *)0x0) {
                uVar5 = 0;
              }
              else {
                sVar8 = strlen((char *)_Str);
                uVar5 = (undefined4)sVar8;
              }
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
              ppuVar13 = &local_50;
              FUN_14001c09c(ppuVar13,&local_68,1);
            }
            uVar7 = (ulonglong)*(uint *)ppuVar13;
            uVar11 = (ulonglong)DAT_14cc07490 << 0x20;
            DAT_14cc07488 = uVar7;
          }
          else {
            uVar7 = (ulonglong)DAT_14cc07490 << 0x20;
            uVar11 = DAT_14cc07488 & 0xffffffff;
          }
          local_68 = (ulonglong *)0x0;
          uStack_60 = CONCAT44(uStack_60._4_4_,1);
          FUN_1401b309e(&local_68,1,0);
          *local_68 = uVar11 | uVar7;
          FUN_1406fa324(plVar6 + 0x31,&local_68);
          if (local_68 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          *(undefined1 *)(param_1 + 0x4a) = 0;
        }
      }
      else {
        local_68 = (ulonglong *)0x0;
        uStack_60 = 0;
        lVar2 = param_1[0x48];
        lVar10 = 0;
        local_89 = uVar9;
        local_88 = lpCriticalSection;
        local_80 = param_2;
        do {
          uVar11 = uStack_60;
          uVar7 = *(ulonglong *)(lVar2 + lVar10);
          lVar12 = (longlong)(int)uStack_60;
          uVar4 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
          if (uStack_60._4_4_ < uVar4) {
            FUN_1446f84a2(&local_68,uVar11 & 0xffffffff);
          }
          local_68[lVar12] = uVar7;
          lVar10 = lVar10 + 8;
        } while ((longlong)(int)lVar1 * 8 != lVar10);
        FUN_1406fa324(plVar6 + 0x31,&local_68);
        *(undefined1 *)(param_1 + 0x4a) = 1;
        param_2 = local_80;
        lpCriticalSection = local_88;
        uVar9 = local_89;
        if (local_68 != (ulonglong *)0x0) {
          FUN_1400020a8();
          param_2 = local_80;
          lpCriticalSection = local_88;
          uVar9 = local_89;
        }
      }
      cVar3 = (**(code **)(*plVar6 + 0x478))(plVar6);
      if (cVar3 != '\0') {
        if (*(int *)((longlong)plVar6 + 0x8b4) < 0) {
          *(undefined4 *)(plVar6 + 0x116) = 0;
          FUN_1491c1950(plVar6 + 0x115,0);
        }
        else {
          *(undefined4 *)(plVar6 + 0x116) = 0;
        }
      }
      FUN_140ec6c7c(param_1,plVar6);
      (**(code **)(*plVar6 + 0x2c0))(plVar6);
      *(undefined1 *)((longlong)plVar6 + 0x7ca) = uVar9;
    }
    (**(code **)(*param_1 + 0x128))(param_1,plVar6,param_2);
    plVar6[0xb3] = 0;
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140341e50 FUN_140341e50 body=330 status=ok
// SIG undefined FUN_140341e50(void)

void FUN_140341e50(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140341ebe;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_140341ebe:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140341f9a FUN_140341f9a body=192 status=ok
// SIG undefined FUN_140341f9a(void)

undefined8 * FUN_140341f9a(longlong param_1,char param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14034205c((undefined8 *)(param_1 + 8));
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 != (undefined8 *)0x0 || param_2 != '\x01') goto LAB_140341fd2;
  ppuVar1 = (undefined8 **)(param_1 + 0x30);
  FUN_14570217c(&local_28,*(undefined8 *)(param_1 + 8));
  if (ppuVar1 == &local_28) {
LAB_140342045:
    if (local_28 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_28 + 1);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
  }
  else {
    puVar3 = *ppuVar1;
    *ppuVar1 = local_28;
    local_28 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
        goto LAB_140342045;
      }
    }
  }
  puVar3 = *ppuVar1;
LAB_140341fd2:
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034205c FUN_14034205c body=151 status=ok
// SIG undefined FUN_14034205c(void)

void FUN_14034205c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [96];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14034219a(param_1 + 8);
  local_20 = 0;
  local_18 = 0xc00000000;
  FUN_140342128();
  if (*(int *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,local_80);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403420f4 FUN_1403420f4 body=52 status=ok
// SIG undefined FUN_1403420f4(void)

void FUN_1403420f4(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x30);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000140342125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 140342128 FUN_140342128 body=113 status=ok
// SIG undefined FUN_140342128(void)

void FUN_140342128(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x180)) {
    lVar1 = 0;
    do {
      FUN_1403422d4(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x178) + lVar1 * 4),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x180));
  }
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) < 0) {
    FUN_14481578e(param_1 + 0x178,0);
    return;
  }
  return;
}



// FUNCTION 14034219a FUN_14034219a body=183 status=ok
// SIG undefined FUN_14034219a(void)

void FUN_14034219a(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = param_1[1];
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x48) == 1;
  if (bVar2) {
    *(int *)(lVar1 + 0x48) = 2;
  }
  UNLOCK();
  if (bVar2) {
    FUN_1448b65ca(lVar1 + 0x10,0);
    *(undefined4 *)(lVar1 + 0x48) = 3;
  }
  lVar1 = *param_1;
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x38) == 1;
  if (bVar2) {
    *(int *)(lVar1 + 0x38) = 2;
  }
  UNLOCK();
  if (bVar2) {
    FUN_140402426(lVar1 + 0x10,0);
    *(undefined4 *)(lVar1 + 0x38) = 3;
  }
  lVar1 = param_1[1];
  if (*(int *)(lVar1 + 0x48) != 0) {
    while (*(int *)(lVar1 + 0x48) != 3) {
      FUN_14000f986(0);
    }
    FUN_140342252(lVar1 + 0x10);
  }
  *(undefined4 *)(lVar1 + 0x48) = 0;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x38) != 0) {
    while (*(int *)(lVar1 + 0x38) != 3) {
      FUN_14000f986(0);
    }
    FUN_140342472(lVar1 + 0x10);
  }
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



// FUNCTION 140342252 FUN_140342252 body=129 status=ok
// SIG undefined FUN_140342252(void)

void FUN_140342252(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_1;
  }
  (**(code **)(*plVar3 + 0x58))
            (plVar3,*(undefined4 *)(param_1 + 6),*(undefined4 *)((longlong)param_1 + 0x34),
             param_1 + 3,*(undefined4 *)(param_1 + 2),*(undefined4 *)((longlong)param_1 + 0x14));
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[5] = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < *(int *)((longlong)param_1 + 0x24)) {
    return;
  }
  FUN_14481578e(param_1 + 3,0);
  return;
}



// FUNCTION 1403422d4 FUN_1403422d4 body=412 status=ok
// SIG undefined FUN_1403422d4(void)

void FUN_1403422d4(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98;
  int local_90;
  uint local_8c;
  undefined1 local_88 [48];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_8c = (uint)param_2;
  local_58 = (undefined1 *)0x0;
  local_50 = 0xc00000000;
  if (local_8c != 0xffffffff) {
    do {
      local_90 = -1;
      local_98 = 0;
      local_a8 = &local_98;
      FUN_1449e7404(param_1,param_2,&local_8c,&local_90);
      uVar2 = local_50;
      iVar1 = local_90;
      if (local_90 != -1) {
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_88;
        }
        lVar6 = (longlong)(int)local_50;
        if (lVar6 != 0) {
          uVar5 = 0;
          do {
            if (*(int *)(puVar3 + uVar5) == local_90) {
              if ((int)(~uVar5 >> 2) != 0) goto LAB_1403423d4;
              break;
            }
            uVar5 = uVar5 + 4;
          } while (lVar6 * 4 - uVar5 != 0);
        }
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          FUN_146beb88a(local_88,uVar2 & 0xffffffff);
        }
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_88;
        }
        *(int *)(puVar3 + lVar6 * 4) = iVar1;
      }
LAB_1403423d4:
      if ((param_3 != 0) && (local_98 != 0)) {
        FUN_1449e7388(param_3,&local_98);
      }
      param_2 = (ulonglong)local_8c;
    } while (local_8c != 0xffffffff);
    if (0 < (int)local_50) {
      lVar6 = 0;
      do {
        puVar3 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar3 = local_88;
        }
        FUN_1405a20f0(param_1,*(undefined4 *)(puVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)local_50);
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140342472 FUN_140342472 body=146 status=ok
// SIG undefined FUN_140342472(void)

void FUN_140342472(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_1;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1[2]);
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[3] = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[4] = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403424e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140342504 FUN_140342504 body=326 status=ok
// SIG undefined FUN_140342504(void)

void FUN_140342504(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  if ((int)uVar5 < *(int *)(param_1 + 0x1c)) {
    do {
      if (((-1 < (int)uVar5) &&
          (lVar1 = *(longlong *)(param_1 + 0x10), (int)uVar5 < *(int *)(lVar1 + 0x140))) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x138) + (ulonglong)uVar5 * 8), lVar2 != 0)) {
        lVar3 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar2 + 0x3d4) < 0) &&
           ((lVar4 = *(longlong *)(lVar2 + 0xb0), lVar4 != 0 ||
            (lVar4 = FUN_1448abda6(lVar2), lVar4 != 0)))) {
          fVar6 = (float)*(double *)(lVar4 + 0x6d0);
        }
        else {
          fVar6 = *(float *)(lVar2 + 0x3c8);
        }
        lVar4 = (ulonglong)(uVar5 >> 2) * 0x150;
        *(float *)(lVar3 + lVar4 + 0x140 + (ulonglong)(uVar5 & 3) * 4) = fVar6;
        lVar3 = *(longlong *)(lVar2 + 0x5b8);
        if (lVar3 != 0) {
          dVar7 = *(double *)(lVar2 + 0x170) - *(double *)(lVar3 + 0x170);
          dVar8 = *(double *)(lVar2 + 0x168) - *(double *)(lVar3 + 0x168);
          dVar9 = *(double *)(lVar2 + 0x160) - *(double *)(lVar3 + 0x160);
          fVar6 = (float)(SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8) +
                         (double)((float)*(double *)(lVar3 + 400) + *(float *)(lVar3 + 0x2c0)));
          *(float *)(lVar4 + *(longlong *)(lVar1 + 0x10) + 0x130 + (ulonglong)(uVar5 & 3) * 4) =
               fVar6 * fVar6;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}



// FUNCTION 14034264a FUN_14034264a body=1022 status=ok
// SIG undefined FUN_14034264a(void)

void FUN_14034264a(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  int local_c8;
  longlong *local_c0;
  int local_b8;
  uint local_b4;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1400979ba(&local_c0,*param_1);
  if (local_a4 < *(int *)(local_b0 + 0x18)) {
    lVar10 = local_b0;
    do {
      uVar3 = *(undefined8 *)(*local_c0 + (longlong)local_a4 * 0x18);
      iVar7 = *(int *)(*local_c0 + 0xc + (longlong)local_a4 * 0x18);
      if ((iVar7 == 0x16) || (iVar7 == 0x11)) {
        bVar11 = (longlong)uStack_90 < 0;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if (bVar11) {
          FUN_14482f6fa(&local_98,0);
        }
        FUN_144b2b08a(&local_d0,*param_1,uVar3);
        if (local_c8 != -1) {
          lVar10 = *(longlong *)(local_d0 + 0x20);
          do {
            uVar1 = uStack_90;
            uVar2 = *(undefined4 *)
                     (*(longlong *)(lVar10 + (longlong)(local_c8 / 0x199) * 8) + 0x14 +
                     (longlong)(local_c8 % 0x199) * 0x28);
            lVar10 = (longlong)(int)uStack_90;
            uVar5 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
            if (uStack_90._4_4_ < uVar5) {
              FUN_14475e4ac(&local_98,uVar1 & 0xffffffff);
            }
            *(undefined4 *)(local_98 + lVar10 * 4) = uVar2;
            lVar10 = *(longlong *)(local_d0 + 0x20);
            local_c8 = *(int *)(*(longlong *)(lVar10 + (longlong)(local_c8 / 0x199) * 8) + 0x20 +
                               (longlong)(local_c8 % 0x199) * 0x28);
          } while (local_c8 != -1);
        }
        FUN_147166345(local_98,uStack_90 & 0xffffffff);
        fVar14 = (float)(int)uStack_90 * 0.2;
        fVar14 = *(float *)(local_98 + (longlong)((int)ROUND(fVar14 + fVar14 + -0.5) >> 1) * 4);
        fVar12 = (float)(int)uStack_90 * 0.8;
        fVar12 = *(float *)(local_98 + (longlong)((int)ROUND(fVar12 + fVar12 + -0.5) >> 1) * 4);
        FUN_144b2b08a(&local_d0,*param_1,uVar3);
        lVar10 = local_b0;
        if (local_c8 != -1) {
          lVar4 = *(longlong *)(local_d0 + 0x20);
          do {
            lVar4 = *(longlong *)(lVar4 + (longlong)(local_c8 / 0x199) * 8);
            fVar13 = *(float *)(lVar4 + 0x14 + (ulonglong)(uint)(local_c8 % 0x199) * 0x28);
            if (fVar12 <= fVar13) {
              fVar13 = fVar12;
            }
            if (fVar13 <= fVar14) {
              fVar13 = fVar14;
            }
            *(float *)(lVar4 + 0x14 + (ulonglong)(uint)(local_c8 % 0x199) * 0x28) = fVar13;
            lVar4 = *(longlong *)(local_d0 + 0x20);
            local_c8 = *(int *)(*(longlong *)(lVar4 + (longlong)(local_c8 / 0x199) * 8) + 0x20 +
                               (longlong)(local_c8 % 0x199) * 0x28);
          } while (local_c8 != -1);
        }
      }
      local_a8 = ~local_b4 & local_a8;
      lVar4 = *(longlong *)(lVar10 + 0x10);
      if (*(longlong *)(lVar10 + 0x10) == 0) {
        lVar4 = lVar10;
      }
      local_a4 = *(int *)(lVar10 + 0x18);
      lVar8 = (longlong)local_b8;
      uVar5 = local_a8 & *(uint *)(lVar4 + lVar8 * 4);
      if (uVar5 == 0) {
        iVar7 = local_a4 + 0x1e;
        if (-1 < local_a4 + -1) {
          iVar7 = local_a4 + -1;
        }
        iVar6 = iVar7 >> 5;
        if (iVar7 >> 5 < local_b8) {
          iVar6 = local_b8;
        }
        iVar7 = local_b8 + 1;
        lVar9 = 0;
        do {
          local_b8 = iVar7 + (int)lVar9;
          local_a0 = local_a0 + 0x20;
          if (iVar6 - lVar8 == lVar9) goto LAB_1403427ba;
          uVar5 = *(uint *)(lVar4 + lVar8 * 4 + 4 + lVar9 * 4);
          local_a8 = 0xffffffff;
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
      }
      local_b4 = -uVar5 & uVar5;
      uVar1 = (ulonglong)local_b4 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar7 = (local_a0 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      if (iVar7 < local_a4) {
        local_a4 = iVar7;
      }
LAB_1403427ba:
    } while (local_a4 < *(int *)(lVar10 + 0x18));
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140342a4a FUN_140342a4a body=622 status=ok
// SIG undefined FUN_140342a4a(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_140342a4a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  longlong local_60;
  undefined4 local_50;
  longlong local_48 [3];
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(byte *)(param_1 + 0x29) & 1) == 0) || ((*(byte *)(param_1 + 0x2b) & 2) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x148))(*(longlong **)(param_1 + 0x90),param_2);
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 8);
    lVar7 = FUN_140342cba();
    if (*(ulonglong *)(lVar7 + 8) == 0) {
      bVar9 = lVar6 != 0;
      if (lVar6 != lVar7 && bVar9) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar9 = lVar6 != 0;
          if (lVar6 == lVar7) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar9 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0;
    }
    lVar6 = 0;
    if (bVar9) {
      lVar6 = lVar5;
    }
  }
  local_48[2] = 0;
  uStack_30 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1449651a4(local_48,lVar6);
  FUN_140342d53(param_1,local_48);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_140342b20;
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  lVar5 = FUN_140342cba();
  if (local_48[0] != 0) {
    cVar4 = FUN_144729dda(local_48 + 1);
    lVar6 = local_48[0];
    lVar7 = local_48[0];
    if ((cVar4 == '\0') && ((int)uStack_30 != 0)) goto LAB_140342ad8;
    goto LAB_140342b11;
  }
  if ((int)uStack_30 == 0) {
LAB_140342c72:
    lVar6 = 0;
    lVar7 = local_48[0];
  }
  else {
LAB_140342ad8:
    lVar6 = FUN_14007daa4(local_48,uVar2,0);
    if (lVar6 == 0) {
LAB_140342c6a:
      if (local_48[0] != 0) {
        local_48[0] = 0;
        local_48[1] = 0;
      }
      goto LAB_140342c72;
    }
    lVar8 = *(longlong *)(lVar6 + 8);
    lVar7 = lVar6;
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar8 != 0;
      if (lVar8 != lVar5 && bVar9) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar9 = lVar8 != 0;
          if (lVar8 == lVar5) break;
        } while (lVar8 != 0);
      }
      if (!bVar9) goto LAB_140342c6a;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_140342c6a;
  }
LAB_140342b11:
  local_48[0] = lVar7;
  *param_2 = lVar6;
  if ((lVar6 == 0) && ((int)uStack_30 != 0)) {
    puVar3 = *(undefined4 **)(param_1 + 0xa8);
    FUN_1403433de(local_70,0,local_48);
    local_50 = *puVar3;
    iVar1 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
      FUN_14034358e((longlong *)(param_1 + 0x98),iVar1);
    }
    lVar5 = *(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 0x28;
    FUN_1403434b6(lVar5,local_70);
    *(undefined4 *)(lVar5 + 0x20) = local_50;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140342b20:
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140342cba FUN_140342cba body=153 status=ok
// SIG undefined FUN_140342cba(void)

undefined * FUN_140342cba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9497a0) {
    FUN_144b3d300(&DAT_14c9497a0);
    if (DAT_14c9497a0 == -1) {
      FUN_14000176a(&DAT_14c949750,L"FField",1,0,1,0,0,&LAB_14689b12e);
      atexit(FUN_1427e1adf);
      _Init_thread_footer(&DAT_14c9497a0);
    }
  }
  return &DAT_14c949750;
}



// FUNCTION 140342d53 FUN_140342d53 body=1674 status=ok
// SIG undefined FUN_140342d53(void)

longlong * FUN_140342d53(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e31250);
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    if (((((*(int *)((longlong)param_2 + 0xc) == 0) ||
          (uVar1 = *(uint *)(param_2 + 1), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_2 + 0xc))))) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (local_48[2] = *plVar6, local_48[2] == 0)))) {
LAB_1403430ee:
      local_48[0] = 0;
      local_48[1] = 0;
      local_50 = 0;
      FUN_140219018(param_1,local_48);
      (**(code **)(*param_1 + 0x150))(param_1,&local_50);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x2b) & 0x20) != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) && (FUN_144b3d300(), DAT_14c951a88 == -1)) {
          FUN_140342cba();
          local_60 = FUN_1468c7f1e;
          local_68 = &DAT_14c949750;
          local_70 = 0;
          local_78 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer();
        }
        lVar8 = *param_2;
        if (lVar8 == 0) {
          if ((int)param_2[3] != 0) goto LAB_140343032;
        }
        else {
          if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_140343026:
            bVar9 = false;
          }
          else {
            uVar1 = *(uint *)(param_2 + 1);
            bVar9 = false;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)((longlong)param_2 + 0xc)))
              goto LAB_140343026;
              bVar9 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
            }
          }
          if ((!bVar9) && ((int)param_2[3] != 0)) {
LAB_140343032:
            lVar8 = FUN_14007daa4(param_2,0,0);
            if (lVar8 == 0) {
LAB_14034318a:
              if (*param_2 != 0) {
                *param_2 = 0;
                param_2[1] = 0;
              }
              goto LAB_140342f30;
            }
            puVar3 = *(undefined **)(lVar8 + 8);
            if (DAT_14c951a40 == 0) {
              bVar9 = puVar3 != (undefined *)0x0;
              if (puVar3 != &DAT_14c951a38 && bVar9) {
                do {
                  puVar3 = *(undefined **)(puVar3 + 0x30);
                  bVar9 = puVar3 != (undefined *)0x0;
                  if (puVar3 == &DAT_14c951a38) break;
                } while (puVar3 != (undefined *)0x0);
              }
              if (!bVar9) goto LAB_14034318a;
            }
            else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951a40) == 0) goto LAB_14034318a;
            *param_2 = lVar8;
          }
          puVar3 = *(undefined **)(lVar8 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            FUN_140342cba();
            local_60 = FUN_1468c7f1e;
            local_68 = &DAT_14c949750;
            local_70 = 0;
            local_78 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          if (DAT_14c951a40 == 0) {
            bVar9 = puVar3 != (undefined *)0x0;
            if (puVar3 != &DAT_14c951a38 && bVar9) {
              do {
                puVar3 = *(undefined **)(puVar3 + 0x30);
                bVar9 = puVar3 != (undefined *)0x0;
                if (puVar3 == &DAT_14c951a38) break;
              } while (puVar3 != (undefined *)0x0);
            }
            if (bVar9) goto LAB_1403430e4;
          }
          else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951a40) != 0) {
LAB_1403430e4:
            if ((*(byte *)(lVar8 + 0x3c) & 8) != 0) goto LAB_1403430ee;
          }
        }
      }
LAB_140342f30:
      FUN_140219018(param_1,param_2 + 2);
      (**(code **)(*param_1 + 0x150))(param_1,local_48 + 2);
    }
    goto LAB_14034312c;
  }
  plVar6 = param_2 + 2;
  FUN_140219018(param_1,plVar6);
  if ((((int)param_2[3] == 1) && (*(longlong *)*plVar6 == 0)) &&
     (*(undefined4 *)(param_2 + 3) = 0, *(int *)((longlong)param_2 + 0x1c) != 0)) {
    FUN_1402191ca(plVar6,0);
  }
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3cbb8);
  if ((iVar2 < 0x21) && (iVar2 = FUN_1448332aa(param_1,&DAT_149e31250), iVar2 < 0x1e)) {
    if ((int)param_2[3] == 0) {
      param_2[1] = 0;
    }
    else {
      lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
      if (lVar8 == 0) {
        lVar8 = FUN_1456c2db2(param_2,0,0);
      }
      else {
        iVar2 = *(int *)(lVar8 + 0x98);
        lVar8 = FUN_1456c2db2(param_2,0,0);
        if (lVar8 == 0 && iVar2 == 1) {
          lVar8 = FUN_14689b444(param_2);
        }
      }
      if (lVar8 == 0) {
        *(undefined4 *)(param_2 + 1) = 0;
        iVar2 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar8 + 0xc);
        *(uint *)(param_2 + 1) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar2 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar2 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar2;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar2 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar2 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar2 = iVar7;
          }
        }
      }
      *(int *)((longlong)param_2 + 0xc) = iVar2;
    }
  }
  else {
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
LAB_14034319f:
      local_48[0] = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 1);
      local_48[0] = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar4 == (longlong *)0x0) ||
           (((int)plVar4[2] != *(int *)((longlong)param_2 + 0xc) ||
            ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) goto LAB_14034319f;
        local_48[0] = *plVar4;
      }
    }
    (**(code **)(*param_1 + 0x150))(param_1,local_48);
    if (local_48[0] == 0) {
      param_2[1] = 0;
    }
    else {
      uVar1 = *(uint *)(local_48[0] + 0xc);
      *(uint *)(param_2 + 1) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar2 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar2 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar2 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar2 = iVar7;
        }
      }
      *(int *)((longlong)param_2 + 0xc) = iVar2;
      if (local_48[0] != 0) goto LAB_140343010;
    }
    *(undefined4 *)(param_2 + 3) = 0;
    if (*(int *)((longlong)param_2 + 0x1c) != 0) {
      FUN_1402191ca(plVar6,0);
    }
  }
LAB_140343010:
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    *param_2 = 0;
  }
LAB_14034312c:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403433de FUN_1403433de body=215 status=ok
// SIG undefined FUN_1403433de(void)

longlong * FUN_1403433de(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = FUN_140342cba();
  if (*param_3 == 0) {
    if ((int)param_3[3] != 0) goto LAB_140343409;
  }
  else {
    cVar1 = FUN_144729dda(param_3 + 1);
    if ((cVar1 != '\0') || ((int)param_3[3] == 0)) {
      lVar3 = *param_3;
      goto LAB_140343423;
    }
LAB_140343409:
    lVar3 = FUN_14007daa4(param_3,0,0);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (bVar5) goto LAB_140343474;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_140343474:
        *param_3 = lVar3;
        goto LAB_140343423;
      }
    }
    if (*param_3 != 0) {
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  lVar3 = 0;
LAB_140343423:
  *param_1 = lVar3;
  param_1[1] = param_3[1];
  FUN_1406fa324(param_1 + 2,param_3 + 2);
  return param_1;
}



// FUNCTION 1403434b6 FUN_1403434b6 body=215 status=ok
// SIG undefined FUN_1403434b6(void)

longlong * FUN_1403434b6(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = FUN_140342cba();
  if (*param_2 == 0) {
    if ((int)param_2[3] != 0) goto LAB_1403434e1;
  }
  else {
    cVar1 = FUN_144729dda(param_2 + 1);
    if ((cVar1 != '\0') || ((int)param_2[3] == 0)) {
      lVar3 = *param_2;
      goto LAB_1403434fb;
    }
LAB_1403434e1:
    lVar3 = FUN_14007daa4(param_2,0,0);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (bVar5) goto LAB_14034354c;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_14034354c:
        *param_2 = lVar3;
        goto LAB_1403434fb;
      }
    }
    if (*param_2 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  lVar3 = 0;
LAB_1403434fb:
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14034358e FUN_14034358e body=373 status=ok
// SIG undefined FUN_14034358e(void)

void FUN_14034358e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140343617;
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
LAB_140343617:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140343704 FUN_140343704 body=1652 status=ok
// SIG undefined FUN_140343704(void)

undefined8 FUN_140343704(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_98 [40];
  char local_70 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar9 = FUN_140343d7a();
  if (lVar9 != 0) {
    if (*(char *)(lVar4 + 0x210) == '\x01') {
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (lVar9 == 0) {
        lVar13 = 0;
        local_68 = 0;
LAB_140343c2e:
        local_60 = (longlong *)0x0;
        bVar6 = true;
      }
      else {
        if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_140343a5d:
          lVar13 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar9 + 0x48);
          lVar13 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               (((int)plVar14[2] != *(int *)(lVar9 + 0x4c) ||
                ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140343a5d;
            lVar13 = *plVar14;
          }
        }
        plVar14 = *(longlong **)(lVar9 + 0x118);
        local_68 = param_1;
        if (plVar14 == (longlong *)0x0) goto LAB_140343c2e;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar14 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        bVar6 = false;
        local_60 = plVar14;
      }
      plVar14 = local_60;
      local_48 = 0;
      local_70[0] = '\x03';
      local_58._0_4_ = 0;
      if (lVar13 == 0) {
        iVar8 = 0;
        uVar3 = (uint)local_58;
      }
      else {
        uVar3 = *(uint *)(lVar13 + 0xc);
        local_58 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar8 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar8 = *(int *)(lVar9 + 0x10);
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(lVar9 + 0x10) = iVar12;
            iVar8 = 0;
          }
          UNLOCK();
          uVar3 = (uint)local_58;
          if (bVar16) {
            iVar8 = iVar12;
          }
        }
      }
      local_58._0_4_ = uVar3;
      local_58 = CONCAT44(iVar8,(uint)local_58);
      local_50 = 2;
      if (local_48 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
        local_48 = 0;
      }
      if (!bVar6) {
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      cVar7 = FUN_140343ed8(lVar4 + 400,local_70);
      lVar9 = DAT_14c9a3da0;
      if ((longlong)local_48 != 0) {
        lVar13 = (longlong)local_48 + -1;
        lVar15 = lVar13 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
        if (*(longlong *)(lVar9 + lVar15) != 0) {
          FUN_1400020a8();
        }
        lVar9 = DAT_14c9a3da0;
        iVar8 = (int)lVar13;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
        }
        *(undefined4 *)(lVar9 + lVar15) = 0xffffffff;
        iVar12 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar12 = DAT_14c9a3dd0;
        }
        *(int *)(lVar9 + 4 + lVar15) = iVar12;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar12 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar12 = iVar8;
        }
        bVar5 = (byte)lVar13 & 0x1f;
        DAT_14c9a3dd0 = iVar8;
        *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_48 = 0;
      }
      if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (cVar7 != '\0') {
        uVar10 = 1;
        goto LAB_14034389d;
      }
    }
    if (*(char *)(lVar4 + 0x298) == '\x01') {
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (lVar9 == 0) {
        lVar13 = 0;
        param_1 = 0;
LAB_140343cbd:
        local_60 = (longlong *)0x0;
        bVar6 = true;
        local_68 = param_1;
      }
      else {
        if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_140343b1d:
          lVar13 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar9 + 0x48);
          lVar13 = 0;
          if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               (((int)plVar14[2] != *(int *)(lVar9 + 0x4c) ||
                ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140343b1d;
            lVar13 = *plVar14;
          }
        }
        plVar14 = *(longlong **)(lVar9 + 0x118);
        if (plVar14 == (longlong *)0x0) goto LAB_140343cbd;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar14 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        bVar6 = false;
        local_68 = param_1;
        local_60 = plVar14;
      }
      plVar14 = local_60;
      local_48 = 0;
      local_70[0] = '\x03';
      local_58._0_4_ = 0;
      if (lVar13 == 0) {
        iVar8 = 0;
        uVar3 = (uint)local_58;
      }
      else {
        uVar3 = *(uint *)(lVar13 + 0xc);
        local_58 = (ulonglong)uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar8 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar8 = *(int *)(lVar9 + 0x10);
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(lVar9 + 0x10) = iVar12;
            iVar8 = 0;
          }
          UNLOCK();
          uVar3 = (uint)local_58;
          if (bVar16) {
            iVar8 = iVar12;
          }
        }
      }
      local_58._0_4_ = uVar3;
      local_58 = CONCAT44(iVar8,(uint)local_58);
      local_50 = 2;
      if (local_48 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
        local_48 = 0;
      }
      if (!bVar6) {
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      cVar7 = FUN_140343ed8(lVar4 + 0x218,local_70);
      lVar4 = DAT_14c9a3da0;
      if ((longlong)local_48 != 0) {
        lVar9 = (longlong)local_48 + -1;
        lVar13 = lVar9 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
        if (*(longlong *)(lVar4 + lVar13) != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        iVar8 = (int)lVar9;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
        }
        *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
        iVar12 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar12 = DAT_14c9a3dd0;
        }
        *(int *)(lVar4 + 4 + lVar13) = iVar12;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar11 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar11 = DAT_14c9a3dc0;
        }
        iVar12 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar12 = iVar8;
        }
        bVar5 = (byte)lVar9 & 0x1f;
        DAT_14c9a3dd0 = iVar8;
        *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
             *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
             (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_48 = 0;
      }
      if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      if (cVar7 != '\0') {
        uVar10 = 2;
        goto LAB_14034389d;
      }
    }
  }
  uVar10 = 0;
LAB_14034389d:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140343d7a FUN_140343d7a body=349 status=ok
// SIG undefined FUN_140343d7a(void)

longlong FUN_140343d7a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (((((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(lVar3 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0)))) &&
     (((int)plVar2[2] == *(int *)(lVar3 + 0x4c) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140343e14;
  }
  lVar3 = 0;
LAB_140343e14:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140343ed8 FUN_140343ed8 body=746 status=ok
// SIG undefined FUN_140343ed8(void)

ulonglong FUN_140343ed8(longlong param_1,char *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  int local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  char local_88 [16];
  longlong *local_78;
  int local_60;
  int local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88[0] = '\0';
  local_60 = 0;
  if (*(int *)(param_1 + 0x38) == 1) {
    piVar8 = &local_58;
    FUN_1447c3578(param_1 + 0x40,piVar8,param_2);
    lVar4 = FUN_14070d842(piVar8);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        piVar8 = (int *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(piVar8);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    if (lVar4 == 0) {
      uVar10 = 0;
      goto LAB_140343f72;
    }
    param_2 = local_88;
    FUN_1456bb102(param_2,lVar4);
  }
  piVar8 = &local_b0;
  FUN_1447c3578(param_1,piVar8,param_2);
  if (local_90 == 1) {
    bVar13 = local_b0 != 0;
    uVar3 = 1;
  }
  else {
    piVar9 = &local_58;
    FUN_1400b56fe(piVar9,&local_b0,1);
    bVar13 = local_58 != 0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        piVar9 = (int *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(piVar9);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    bVar13 = local_38 != 0 && bVar13;
    uVar3 = (uint)local_90;
  }
  uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),(bool)*(char *)(param_1 + 0x78) != bVar13);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_98) {
      piVar8 = (int *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar1)(piVar8);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
LAB_140343f72:
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_60 != 0) {
    lVar12 = (longlong)local_60 + -1;
    lVar7 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar4 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar4 + lVar7) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar7) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar5 = iVar11;
    }
    bVar2 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_60 = 0;
  }
  if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
    LOCK();
    piVar8 = (int *)((longlong)local_78 + 0xc);
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (*piVar8 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140344206 FUN_140344206 body=479 status=ok
// SIG undefined FUN_140344206(void)

bool FUN_140344206(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  float local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  code *local_78;
  longlong *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  code *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar3 = FUN_1414fb80c();
    if (lVar3 != 0) {
      lVar4 = FUN_1447210f0(lVar3);
      if ((lVar4 != 0) && (*(longlong *)(lVar3 + 0x398) != 0)) {
        local_38 = 0;
        uStack_30 = 0;
        cVar2 = FUN_1417c9516();
        if (cVar2 != '\0') {
          local_40 = &local_b8;
          local_b8 = local_38;
          uStack_b0 = uStack_30;
          local_48 = FUN_143eeb60e;
          local_58 = "client_gbx_env";
          local_50 = "";
          local_68 = "bifrost_ue4_performance";
          local_60 = "";
          bifrost::telemetry::raiseEvent(*(undefined8 *)(param_1 + 0x50));
        }
        local_a0 = *(longlong *)(lVar3 + 0x3d0);
        if (local_a0 == 0) {
          local_a0 = *(longlong *)(lVar3 + 0x7a0);
        }
        local_98 = *(undefined8 *)(lVar3 + 0x608);
        local_90 = *(undefined4 *)(*(longlong *)(lVar3 + 0x398) + 0x3d8);
        uStack_b0 = *(undefined8 *)(param_1 + 0x40);
        local_a8 = *(float *)(param_1 + 0x48) / (float)*(int *)(param_1 + 0x4c);
        local_70 = &local_b8;
        local_8c = (undefined4)local_38;
        uStack_88 = local_38._4_4_;
        uStack_84 = (undefined4)uStack_30;
        uStack_80 = uStack_30._4_4_;
        local_78 = FUN_143eeb9b4;
        local_c8 = "client_heartbeat";
        local_c0 = "";
        local_d8 = "bifrost_ue4_performance";
        local_d0 = "";
        local_b8 = lVar4;
        bifrost::telemetry::raiseEvent(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x40) = 0xff7fffff7f7fffff;
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403443e6 FUN_1403443e6 body=1201 status=ok
// SIG undefined FUN_1403443e6(void)

void FUN_1403443e6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  double *pdVar14;
  double dVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar16 = *(longlong *)(param_1 + -0x3908);
  if (lVar16 == 0) {
    pdVar14 = (double *)&DAT_14c8464e0;
    uVar21 = (undefined4)DAT_14c8464f0;
    uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
    uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
    pdVar14 = (double *)(lVar16 + 0x260);
  }
  fVar3 = *(float *)(param_1 + -0x3734);
  plVar2 = (longlong *)(param_1 + -0x3ad0);
  dVar15 = pdVar14[1];
  *(double *)(param_2 + 0x50) = *pdVar14 + 0.0;
  *(double *)(param_2 + 0x58) = dVar15 + 0.0;
  *(double *)(param_2 + 0x60) = (double)fVar3 + (double)CONCAT44(uVar22,uVar21);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(param_2 + 0x5c);
  dVar15 = *(double *)(param_2 + 0x60);
  *(double *)(param_2 + 0xd8) = dVar15;
  lVar16 = *(longlong *)(param_1 + -0x3908);
  if (lVar16 == 0) {
    local_58 = DAT_14c846508;
    local_68 = (undefined4)DAT_14c8464f8;
    uStack_64 = DAT_14c8464f8._4_4_;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
    dVar7 = *(double *)(lVar16 + 0x240);
    dVar8 = *(double *)(lVar16 + 0x248);
    dVar9 = *(double *)(lVar16 + 0x250);
    dVar10 = *(double *)(lVar16 + 600);
    pdVar14 = *(double **)(lVar16 + 0x228);
    lVar19 = param_1;
    local_88 = dVar7;
    uStack_80 = dVar8;
    local_78 = dVar9;
    dStack_70 = dVar10;
    if (pdVar14 == (double *)0x0) {
      lVar19 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar15 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar15;
      dVar15 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar15;
      dVar15 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar14[5] = dVar15;
      dVar15 = DAT_14c846508;
      pdVar14[6] = DAT_14c846508;
      *(double **)(lVar16 + 0x228) = pdVar14;
    }
    auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar14[1]);
    auVar5._0_8_ = -(ulonglong)(dVar7 != *pdVar14);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar14[1]) >> 0x20);
    iVar13 = movmskpd(SUB84(dVar15,0),auVar5);
    auVar6._8_4_ = (int)-(ulonglong)(dVar10 != pdVar14[3]);
    auVar6._0_8_ = -(ulonglong)(dVar9 != pdVar14[2]);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar14[3]) >> 0x20);
    uVar17 = movmskpd((int)lVar19,auVar6);
    if ((uVar17 & 0x3fffffff) != 0 || iVar13 != 0) {
      pdVar14[2] = local_78;
      pdVar14[3] = dStack_70;
      *(undefined4 *)pdVar14 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar14 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar14[6] = local_58;
      pdVar14[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar14[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = pdVar14[6];
    local_68 = *(undefined4 *)(pdVar14 + 4);
    uStack_64 = *(undefined4 *)((longlong)pdVar14 + 0x24);
    uStack_60 = *(undefined4 *)(pdVar14 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar14 + 0x2c);
  }
  *(double *)(param_2 + 0xc0) = local_58;
  *(ulonglong *)(param_2 + 0xb0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_2 + 0xb8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0xbc);
  cVar12 = (**(code **)(*plVar2 + 0x798))(plVar2);
  if (cVar12 == '\0') {
    lVar16 = *(longlong *)(param_1 + -0x36a8);
    if ((lVar16 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar16);
    }
    *(longlong *)(param_2 + 0xf0) = lVar16;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x3b10);
    if (plVar4 == (longlong *)0x0) {
LAB_140344790:
      *(undefined8 *)(param_2 + 0xf0) = 0;
    }
    else {
      iVar13 = (int)plVar4[1];
      do {
        if (iVar13 == 0) goto LAB_140344790;
        LOCK();
        iVar11 = (int)plVar4[1];
        bVar20 = iVar13 == iVar11;
        if (bVar20) {
          *(int *)(plVar4 + 1) = iVar13 + 1;
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        UNLOCK();
      } while (!bVar20);
      lVar16 = *(longlong *)(param_1 + 0x3b08);
      if ((lVar16 == 0) || (*(int *)(lVar16 + 0x1fc) == 0)) {
LAB_140344763:
        lVar19 = 0;
      }
      else {
        uVar17 = *(uint *)(lVar16 + 0x1f8);
        lVar19 = 0;
        if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
          if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)(lVar16 + 0x1fc))) ||
             ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_140344763;
          lVar19 = *plVar18;
          if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar19);
          }
        }
      }
      *(longlong *)(param_2 + 0xf0) = lVar19;
      LOCK();
      plVar18 = plVar4 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
  }
  (**(code **)(*(longlong *)(param_1 + 0x140) + 0x10))(param_1 + 0x140,&local_88);
  *(undefined4 *)(param_2 + 0x108) = (undefined4)local_88;
  *(undefined4 *)(param_2 + 0x10c) = local_88._4_4_;
  *(undefined4 *)(param_2 + 0x110) = (undefined4)uStack_80;
  *(undefined4 *)(param_2 + 0x114) = uStack_80._4_4_;
  if (param_2 == 0) goto LAB_1403446ea;
  lVar16 = FUN_140344898();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8)
      != lVar16 + 0x30)) goto LAB_1403446ea;
  if (*(int *)(param_1 + 0x26c0) < 1) {
    *(undefined8 *)(param_2 + 0xa50) = 0;
  }
  else {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x26b8) + 0x20);
    if ((lVar16 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar16);
    }
    if ((lVar16 == 0) || ((DAT_14c950c29 & 1) == 0)) {
      *(longlong *)(param_2 + 0xa50) = lVar16;
      if (lVar16 == 0) goto LAB_1403446ab;
    }
    else {
      FUN_1456cec3c(lVar16);
      *(longlong *)(param_2 + 0xa50) = lVar16;
    }
    cVar12 = (**(code **)(*plVar2 + 0x798))(plVar2);
    if (cVar12 != '\0') {
      (**(code **)(**(longlong **)(param_2 + 0xa50) + 0x7f8))
                (*(longlong **)(param_2 + 0xa50),param_2);
    }
  }
LAB_1403446ab:
  plVar2 = *(longlong **)(param_1 + 0x3b10);
  if (plVar2 != (longlong *)0x0) {
    iVar13 = (int)plVar2[1];
    do {
      if (iVar13 == 0) goto LAB_1403446ea;
      LOCK();
      iVar11 = (int)plVar2[1];
      bVar20 = iVar13 == iVar11;
      if (bVar20) {
        *(int *)(plVar2 + 1) = iVar13 + 1;
        iVar11 = iVar13;
      }
      iVar13 = iVar11;
      UNLOCK();
    } while (!bVar20);
    if (*(longlong *)(param_1 + 0x3b08) != 0) {
      *(undefined1 *)(param_2 + 0x100) = *(undefined1 *)(*(longlong *)(param_1 + 0x3b08) + 0x3b0);
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_1403446ea:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140344898 FUN_140344898 body=228 status=ok
// SIG undefined FUN_140344898(void)

longlong FUN_140344898(void)

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
  if (DAT_14cba7738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b45b0;
    local_38 = &LAB_148bf6913;
    local_40 = &LAB_1459113f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xa60;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCameraModeInputs",&DAT_14cba7738,&DAT_148bf6912);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba7738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034497e FUN_14034497e body=429 status=ok
// SIG undefined FUN_14034497e(void)

undefined8 * FUN_14034497e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + -0x3850);
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      plVar3 = *(longlong **)(param_1 + -0x3850);
      if (plVar3 == (longlong *)0x0) goto LAB_140344b09;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar2 = plVar3[2], lVar2 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
          == DAT_14cbadd90 + 0x30 && ((*(byte *)(plVar3 + 0x84) & 2) != 0)) &&
        ((cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar1 != '\0' &&
         (lVar2 = FUN_14030d330(plVar3), lVar2 != 0)))))) {
      uVar4 = 0;
      if (*(int *)(lVar2 + 1000) != 1) {
        uVar4 = 0x3fc3333340000000;
      }
      *param_2 = 0;
      param_2[1] = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140344b09:
  FUN_14570227a(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140344b2c FUN_140344b2c body=207 status=ok
// SIG undefined FUN_140344b2c(void)

void FUN_140344b2c(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c967818;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar3 = 0;
  bVar2 = true;
  do {
    bVar4 = bVar2;
    plVar1 = *(longlong **)(param_1 + 0x40 + lVar3 * 8);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40 + lVar3 * 8) = 0;
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = *(longlong **)(param_1 + 0x50 + lVar3 * 8);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x50 + lVar3 * 8) = 0;
      (**(code **)(*plVar1 + 0x38))();
    }
    lVar3 = 1;
    bVar2 = false;
  } while (bVar4);
  return;
}



// FUNCTION 140344bfc FUN_140344bfc body=204 status=ok
// SIG undefined FUN_140344bfc(void)

undefined8 * FUN_140344bfc(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x628))(param_1,&local_98);
  local_28 = local_68;
  local_38 = local_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  local_48 = local_88;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  uStack_3c = uStack_7c;
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_60 = 0;
  FUN_144965670(*(undefined8 *)(*(longlong *)param_1[0x36] + 2000),&local_a8,&local_98);
  *param_2 = local_a8;
  *(undefined4 *)(param_2 + 1) = local_a0;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140344cca FUN_140344cca body=329 status=ok
// SIG undefined FUN_140344cca(void)

undefined4 *
FUN_140344cca(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140344eb4(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar6 = FUN_140344e14(param_1,uVar9,local_48);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar10 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_48 + 0x1c) = uVar9;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_14034509a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140344e14 FUN_140344e14 body=159 status=ok
// SIG undefined FUN_140344e14(void)

void FUN_140344e14(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147379a90((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_140344e7f;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_140344e7f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140344eb4 FUN_140344eb4 body=485 status=ok
// SIG undefined FUN_140344eb4(void)

int * FUN_140344eb4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14034509a FUN_14034509a body=563 status=ok
// SIG undefined FUN_14034509a(void)

void FUN_14034509a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140345288;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140345288:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403452ce FUN_1403452ce body=234 status=ok
// SIG undefined FUN_1403452ce(void)

void FUN_1403452ce(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997b44) {
    FUN_144b3d300(&DAT_14c997b44);
    if (DAT_14c997b44 == -1) {
      DAT_14c997b40 = 1.8446743e+19;
      _Init_thread_footer(&DAT_14c997b44);
    }
  }
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x40);
    if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
      *(uint *)(lVar1 + 0x198) =
           ~-(uint)(DAT_14c997b40 < param_2) & (uint)(param_2 * param_2) |
           -(uint)(DAT_14c997b40 < param_2) & 0x7f7fffff;
      *(byte *)(lVar1 + 0x94) = *(byte *)(lVar1 + 0x94) | 8;
      if ((*(longlong *)(lVar1 + 0x10) != 0) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8), lVar1 != 0)) {
        FUN_144a78688(lVar1 + 0x70);
        return;
      }
    }
    return;
  }
  return;
}



// FUNCTION 1403453ba FUN_1403453ba body=1253 status=ok
// SIG undefined FUN_1403453ba(void)

int FUN_1403453ba(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_f8 [40];
  LPCRITICAL_SECTION local_d0;
  longlong *local_c8;
  uint *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  undefined1 local_9c [4];
  longlong *local_98;
  int *piStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar13 = (longlong *)(param_1 + 0x2e8);
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x340);
  local_a8 = param_2;
  local_a0 = param_3;
  EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)(param_1 + 0x2f0);
  iVar5 = *(int *)(param_1 + 0x31c);
  if (iVar3 != iVar5) {
    lVar12 = param_1 + 800;
    if (*(longlong *)(param_1 + 0x328) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x328);
    }
    iVar17 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(param_1 + 0x330) - 1U &
                               (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar17 != -1) {
      do {
        plVar1 = (longlong *)(*plVar13 + (longlong)iVar17 * 0x18);
        if (*plVar1 == param_2) {
          if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
             (param_3 <= (int)plVar1[1])) goto LAB_1403454d2;
          break;
        }
        iVar17 = (int)plVar1[2];
      } while (iVar17 != -1);
    }
  }
  local_98 = &local_a8;
  piStack_90 = &local_a0;
  local_d0 = lpCriticalSection;
  FUN_140345db4(plVar13,&local_b8,&local_98,0);
  *(undefined1 *)(param_1 + 0x338) = 1;
  iVar3 = *(int *)(param_1 + 0x2f0);
  iVar5 = *(int *)(param_1 + 0x31c);
  uVar15 = iVar3 - iVar5;
  lpCriticalSection = local_d0;
  if (10 < (int)uVar15) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    piStack_90 = (int *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if (iVar3 != iVar5) {
      FUN_1403466e6(&local_98,uVar15);
      uVar15 = (uVar15 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
      if ((local_50 == 0) || (local_50 < iVar3)) {
        local_50 = iVar3;
        FUN_14034644e();
      }
    }
    iVar3 = *(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x31c);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if ((int)uStack_b0._4_4_ < iVar3) {
      FUN_1448f21ac();
    }
    iVar3 = *(int *)(param_1 + 0x310);
    if (iVar3 == 0) {
      uVar10 = 1;
      uVar16 = 0;
      iVar5 = 0;
      iVar17 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x2f8);
      }
      uVar15 = *puVar8;
      if (uVar15 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        uVar16 = 0;
        uVar10 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar10 = uVar16;
        }
        iVar17 = 0;
        do {
          if (uVar10 == uVar16) goto LAB_1403457b7;
          iVar17 = iVar17 + 0x20;
          uVar15 = puVar8[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar17 = 0;
      }
      uVar10 = (ulonglong)(-uVar15 & uVar15);
      uVar2 = uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 < iVar3) {
      uVar15 = 0xffffffff;
      local_c8 = plVar13;
      local_c0 = (uint *)(param_1 + 0x2f8);
      do {
        uVar2 = uStack_b0;
        lVar12 = *local_c8;
        lVar9 = (longlong)iVar5;
        if ((int)piStack_90 != local_64) {
          lVar14 = *(longlong *)(lVar12 + lVar9 * 0x18);
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_60;
          }
          for (iVar5 = *(int *)(puVar11 +
                               (ulonglong)
                               (local_50 - 1U &
                               (int)lVar14 + (int)((ulonglong)lVar14 >> 0x20) * 0x17) * 4);
              iVar5 != -1; iVar5 = (int)local_98[(longlong)iVar5 * 2 + 1]) {
            if (local_98[(longlong)iVar5 * 2] == lVar14) goto LAB_140345726;
          }
        }
        lVar14 = (longlong)(int)uStack_b0;
        uVar4 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
        if (uStack_b0._4_4_ < uVar4) {
          FUN_14479d316(&local_b8,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_b8 + lVar14 * 8) = *(undefined8 *)(lVar12 + lVar9 * 0x18);
        FUN_1403458a2(&local_98,local_9c,lVar9 * 0x18 + *(longlong *)(param_1 + 0x2e8),0);
        iVar3 = *(int *)(param_1 + 0x310);
LAB_140345726:
        uVar15 = uVar15 & ~(uint)uVar10;
        puVar8 = *(uint **)(param_1 + 0x308);
        if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
          puVar8 = local_c0;
        }
        iVar5 = (int)uVar16;
        lVar12 = (longlong)iVar5;
        uVar4 = puVar8[lVar12] & uVar15;
        plVar13 = local_c8;
        if (uVar4 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar6 <= iVar5) break;
          lVar9 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar4 = puVar8[lVar12 + lVar9 + 1];
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar12 == lVar9) goto LAB_1403457b7;
          }
          uVar16 = (ulonglong)(iVar5 + (int)lVar9 + 1);
          uVar15 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar3);
    }
LAB_1403457b7:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_98);
    iVar3 = (int)uStack_b0;
    if ((int)uStack_b0 < 1) {
      lVar12 = 0;
    }
    else {
      iVar5 = (int)uStack_b0 + -1;
      uVar15 = rand();
      iVar3 = (int)((float)iVar3 * ((float)(uVar15 & 0x7fff) / 32767.0));
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      lVar12 = (longlong)iVar5;
    }
    FUN_1403462ec(plVar13,*(undefined8 *)(local_b8 + lVar12 * 8));
    lpCriticalSection = local_d0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    iVar3 = *(int *)(param_1 + 0x2f0);
    iVar5 = *(int *)(param_1 + 0x31c);
  }
LAB_1403454d2:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3 - iVar5;
}



// FUNCTION 1403458a2 FUN_1403458a2 body=315 status=ok
// SIG undefined FUN_1403458a2(void)

undefined4 *
FUN_1403458a2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140345af6(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_1403459de(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14034644e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403459de FUN_1403459de body=142 status=ok
// SIG undefined FUN_1403459de(void)

void FUN_1403459de(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
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
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          FUN_140345a6c(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_140345a48;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_140345a48:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140345a6c FUN_140345a6c body=138 status=ok
// SIG undefined FUN_140345a6c(void)

void FUN_140345a6c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140345af6 FUN_140345af6 body=701 status=ok
// SIG undefined FUN_140345af6(void)

int * FUN_140345af6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140345cde;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_140345cde:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140345db4 FUN_140345db4 body=317 status=ok
// SIG undefined FUN_140345db4(void)

undefined4 *
FUN_140345db4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140345fc2(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_140345ef2(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_144a4495e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140345ef2 FUN_140345ef2 body=152 status=ok
// SIG undefined FUN_140345ef2(void)

void FUN_140345ef2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1403463c6((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_140345f5b;
    }
  }
  uVar5 = 0;
LAB_140345f5b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140345f8a FUN_140345f8a body=55 status=ok
// SIG undefined FUN_140345f8a(void)

void FUN_140345f8a(longlong *param_1)

{
  FUN_140346272(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140345fc2 FUN_140345fc2 body=688 status=ok
// SIG undefined FUN_140345fc2(void)

int * FUN_140345fc2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar7 = iVar8 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar7 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14034619d;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar10 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar7 = (int)param_1[5];
            }
          }
LAB_14034619d:
          iVar3 = (int)(uVar5 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar9 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar7);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140346272 FUN_140346272 body=121 status=ok
// SIG undefined FUN_140346272(void)

void FUN_140346272(longlong param_1,int param_2)

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



// FUNCTION 1403462ec FUN_1403462ec body=125 status=ok
// SIG undefined FUN_1403462ec(void)

undefined8 FUN_1403462ec(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14034636a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14034636a FUN_14034636a body=91 status=ok
// SIG undefined FUN_14034636a(void)

void FUN_14034636a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1403463c6(param_1,param_2,1);
  return;
}



// FUNCTION 1403463c6 FUN_1403463c6 body=136 status=ok
// SIG undefined FUN_1403463c6(void)

void FUN_1403463c6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14034644e FUN_14034644e body=664 status=ok
// SIG undefined FUN_14034644e(void)

void FUN_14034644e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1403464b2;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1403464b2:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)
               ((int)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20) * 0x17 +
               (int)*(undefined8 *)(lVar6 + lVar13)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1403466e6 FUN_1403466e6 body=442 status=ok
// SIG undefined FUN_1403466e6(void)

void FUN_1403466e6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x10 + lVar2 + -0xc);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1403468a0 FUN_1403468a0 body=108 status=ok
// SIG undefined FUN_1403468a0(void)

undefined4 * FUN_1403468a0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14034690e();
  FUN_14034690e();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca663e8,0);
  FUN_14034690e();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034690e FUN_14034690e body=289 status=ok
// SIG undefined FUN_14034690e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14034690e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66490) {
    FUN_144b3d300(&DAT_14ca66490);
    if (DAT_14ca66490 == -1) {
      FUN_140346a30();
      FUN_1457022c8();
      FUN_140db5666(&DAT_14ca663e8,0,&DAT_14ca66380,L"FOutputCommandInstanceListsCs",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapBuildPerPageDrawCommands.usf"
                    ,L"OutputCommandInstanceListsCs",5,1,FUN_14732c82a,FUN_14732c7ca,&LAB_14732c792,
                    &LAB_14732c78e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68398);
      _DAT_14ca663e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d82e4);
      _Init_thread_footer(&DAT_14ca66490);
    }
  }
  return &DAT_14ca663e8;
}



// FUNCTION 140346a30 FUN_140346a30 body=258 status=ok
// SIG undefined FUN_140346a30(void)

void FUN_140346a30(void)

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
              0x110) < DAT_14ca68418) {
    FUN_144b3d300(&DAT_14ca68418);
    if (DAT_14ca68418 == -1) {
      FUN_145702412(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xb24;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68398,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64dd);
      _Init_thread_footer(&DAT_14ca68418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140346b34 FUN_140346b34 body=879 status=ok
// SIG undefined FUN_140346b34(void)

longlong FUN_140346b34(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  FUN_140346ea4();
  if (param_1 == param_2) {
    uVar9 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar9;
    uVar9 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    uVar9 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = uVar9;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    uVar6 = *(undefined4 *)(param_2 + 0x6c);
    uVar7 = *(undefined4 *)(param_2 + 0x70);
    uVar8 = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(undefined4 *)(param_1 + 0x70) = uVar7;
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    puVar5 = *(undefined8 **)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    uVar6 = *(undefined4 *)(param_2 + 0x84);
    uVar7 = *(undefined4 *)(param_2 + 0x88);
    uVar8 = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = uVar6;
    *(undefined4 *)(param_1 + 0x88) = uVar7;
    *(undefined4 *)(param_1 + 0x8c) = uVar8;
    lVar4 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_2 + 0x98) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0xb8) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    uVar6 = *(undefined4 *)(param_2 + 0xcc);
    uVar7 = *(undefined4 *)(param_2 + 0xd0);
    uVar8 = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = uVar6;
    *(undefined4 *)(param_1 + 0xd0) = uVar7;
    *(undefined4 *)(param_1 + 0xd4) = uVar8;
    FUN_1447e76d0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined8 *)(param_2 + 0xe0) = 0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined8 *)(param_2 + 0xf0) = 0;
  }
  return param_1;
}



// FUNCTION 140346ea4 FUN_140346ea4 body=294 status=ok
// SIG undefined FUN_140346ea4(void)

undefined8 * FUN_140346ea4(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  return param_1;
}



// FUNCTION 140346fca FUN_140346fca body=85 status=ok
// SIG undefined FUN_140346fca(void)

undefined4 FUN_140346fca(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_140347020();
  if ((char)uVar2 != '\0') {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 0x2a0);
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    }
    FUN_140347182(param_1 + -0x70,param_2);
  }
  return uVar2;
}



// FUNCTION 140347020 FUN_140347020 body=353 status=ok
// SIG undefined FUN_140347020(void)

undefined8 FUN_140347020(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x60) == '\x01') && (**(longlong **)(param_1 + 0x48) != 0)) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    plVar1 = (longlong *)(param_1 + 0x50);
    cVar5 = FUN_146564172(param_1 + 0x40);
    if (cVar5 != '\0') {
      do {
        iVar2 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
          FUN_14009e818(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        lVar6 = (longlong)iVar2 * 0x10;
        *(undefined8 *)(lVar3 + lVar6) = 0;
        *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
        FUN_14009d848(lVar3 + lVar6,&local_40);
        cVar5 = FUN_146564172(param_1 + 0x40,&local_40);
      } while (cVar5 != '\0');
    }
    iVar2 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
      lVar6 = 0;
      do {
        if ((*(int *)(lVar3 + 8 + lVar6) != 0) &&
           (plVar4 = *(longlong **)(lVar3 + lVar6), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x60))();
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
    FUN_145c1c0ea(plVar1,0,0);
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_14034704f;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14034704f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140347182 FUN_140347182 body=361 status=ok
// SIG undefined FUN_140347182(void)

void FUN_140347182(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar3 = *(int *)(param_1 + 0x138);
  lVar4 = (longlong)iVar3;
  if (lVar4 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x130);
    iVar14 = 0;
    bVar6 = *(byte *)(*plVar1 + 0xc);
    iVar11 = 0;
    do {
      lVar8 = (longlong)iVar11;
      iVar7 = iVar11 + 1;
      if (iVar11 + 1 < iVar3) {
        iVar7 = iVar3;
      }
      plVar10 = plVar1 + lVar8 * 2 + 2;
      iVar13 = iVar11;
      lVar9 = lVar8;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar7;
        if (lVar4 <= lVar9) break;
        lVar2 = *plVar10;
        iVar13 = iVar13 + 1;
        plVar10 = plVar10 + 2;
        iVar12 = iVar13;
      } while ((bVar6 & 1) == *(byte *)(lVar2 + 0xc));
      iVar7 = iVar12 - iVar11;
      if ((bVar6 & 1) == 0) {
        if (iVar14 != iVar11) {
          memmove(plVar1 + (longlong)iVar14 * 2,plVar1 + lVar8 * 2,(longlong)iVar7 << 4);
        }
        iVar14 = iVar14 + iVar7;
      }
      else {
        FUN_1403472eb(plVar1 + lVar8 * 2,iVar7);
      }
      bVar6 = bVar6 ^ 1;
      iVar11 = iVar12;
    } while (lVar9 < lVar4);
    *(int *)(param_1 + 0x138) = iVar14;
  }
  if (0 < *(int *)(param_1 + 0x148)) {
    plVar1 = (longlong *)(param_1 + 0x140);
    uVar5 = 0;
    do {
      iVar3 = (int)uVar5;
      lVar4 = uVar5 * 0x18;
      *(float *)(*plVar1 + 0x10 + lVar4) = *(float *)(*plVar1 + 0x10 + lVar4) - param_2;
      if (*(float *)(*plVar1 + 0x10 + lVar4) <= 0.0) {
        FUN_148fa73fe(plVar1,uVar5);
        FUN_148fa7466(plVar1);
        iVar3 = iVar3 + -1;
      }
      uVar5 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < *(int *)(param_1 + 0x148));
  }
  return;
}



// FUNCTION 1403472eb FUN_1403472eb body=73 status=ok
// SIG undefined FUN_1403472eb(void)

void FUN_1403472eb(longlong param_1,int param_2)

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



// FUNCTION 140347334 FUN_140347334 body=143 status=ok
// SIG undefined FUN_140347334(void)

void FUN_140347334(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba3ed18;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar2 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140347376;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_140347376:
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403473d0 FUN_1403473d0 body=31 status=ok
// SIG undefined FUN_1403473d0(void)

undefined8 FUN_1403473d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403473f0 FUN_1403473f0 body=189 status=ok
// SIG undefined FUN_1403473f0(void)

void FUN_1403473f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  switchD_143c3d4dc::caseD_38();
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (plVar1 != (longlong *)0x0) {
    FUN_14484255c(param_2,0x98);
    FUN_140347a44(param_2,(longlong)(int)plVar1[1] * 0x298 +
                          (longlong)*(int *)((longlong)plVar1 + 0xc) * 8);
    if (0 < (int)plVar1[1]) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(*plVar1 + lVar3 * 8);
        FUN_14034761a(lVar2,param_2);
        if (*(longlong *)(lVar2 + 0x40) != 0) {
          FUN_1403474ae(*(longlong *)(lVar2 + 0x40),param_2);
        }
        if (*(longlong *)(lVar2 + 0x48) != 0) {
          FUN_14484255c(param_2,0x98);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)plVar1[1]);
    }
    if (plVar1[8] != 0) {
      FUN_14013605e(plVar1[8],param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1403474ae FUN_1403474ae body=72 status=ok
// SIG undefined FUN_1403474ae(void)

void FUN_1403474ae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14484255c(param_2,0x118);
  lVar1 = 0xa8;
  do {
    FUN_14484255c(param_2,0x38);
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xdc));
  return;
}



// FUNCTION 1403474f6 caseD_38 body=290 status=ok
// SIG undefined caseD_38(void)

void switchD_143c3d4dc::caseD_38(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined **local_e0 [5];
  byte local_b5;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_2 == 1) {
    FUN_144869430(local_e0);
    local_e0[0] = &PTR_FUN_149e8ed80;
    local_50 = 0;
    uStack_48 = 0;
    local_b5 = local_b5 | 0x28;
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0xd8))(param_1,local_e0);
    }
    FUN_14484255c(param_2,uStack_48);
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    FUN_14086ecde(param_1,&local_f8,0,0);
    lVar1 = local_f8;
    lVar2 = (longlong)(int)uStack_f0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar3) + 400))(*(longlong **)(lVar1 + lVar3),param_2);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_f8 != 0) {
      FUN_1400020a8(local_f8);
    }
    FUN_144a7fc42(local_e0);
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14034761a FUN_14034761a body=1064 status=ok
// SIG undefined FUN_14034761a(void)

void FUN_14034761a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = *(int *)(param_1 + 0x108);
  iVar3 = *(int *)(param_1 + 0x104);
  iVar1 = *(int *)(param_1 + 0x100);
  iVar2 = *(int *)(param_1 + 0x10c);
  FUN_1446f470e(local_40,L"TexcoordBuffer and TangentBuffer",1);
  lVar6 = param_2 + 0xa8;
  uVar8 = local_40._0_4_ & 0xffff;
  plVar4 = (longlong *)
           FUN_1400e5dc8(lVar6,(local_40._0_4_ << 0x10 | uVar8) + local_40._4_4_ +
                               (local_40._2_4_ << 0x13 | local_40._2_4_ & 0xffff) + (uVar8 >> 4),
                         local_40);
  *plVar4 = *plVar4 + (ulonglong)(uint)((iVar5 * iVar3 + iVar1) * iVar2);
  iVar5 = *(int *)(param_1 + 0x14c);
  iVar3 = *(int *)(param_1 + 0x148);
  FUN_1446f470e(local_40,L"PositionVertexBuffer",1);
  uVar8 = local_40._0_4_ & 0xffff;
  plVar4 = (longlong *)
           FUN_1400e5dc8(lVar6,(local_40._0_4_ << 0x10 | uVar8) + local_40._4_4_ +
                               (local_40._2_4_ << 0x13 | local_40._2_4_ & 0xffff) + (uVar8 >> 4),
                         local_40);
  *plVar4 = *plVar4 + (ulonglong)(uint)(iVar5 * iVar3);
  iVar5 = *(int *)(param_1 + 0x18c);
  iVar3 = *(int *)(param_1 + 0x188);
  FUN_1446f470e(local_40,L"ColorVertexBuffer",1);
  uVar8 = local_40._0_4_ & 0xffff;
  plVar4 = (longlong *)
           FUN_1400e5dc8(lVar6,(local_40._0_4_ << 0x10 | uVar8) + local_40._4_4_ +
                               (local_40._2_4_ << 0x13 | local_40._2_4_ & 0xffff) + (uVar8 >> 4),
                         local_40);
  *plVar4 = *plVar4 + (ulonglong)(uint)(iVar5 * iVar3);
  iVar5 = *(int *)(param_1 + 0x1d0);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x1c0);
    if (*(char *)(param_1 + 0x1d4) == '\0') {
      iVar5 = iVar5 / 2;
    }
    else {
      iVar3 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3 >> 2;
    }
  }
  bVar7 = *(char *)(param_1 + 0x1d4) + 1;
  FUN_1446f470e(local_40,L"IndexBuffer",1);
  uVar8 = local_40._0_4_ & 0xffff;
  plVar4 = (longlong *)
           FUN_1400e5dc8(lVar6,(local_40._0_4_ << 0x10 | uVar8) + local_40._4_4_ +
                               (local_40._2_4_ << 0x13 | local_40._2_4_ & 0xffff) + (uVar8 >> 4),
                         local_40);
  *plVar4 = *plVar4 + (longlong)(iVar5 << (bVar7 & 0x1f));
  iVar5 = *(int *)(param_1 + 0x210);
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x200);
    if (*(char *)(param_1 + 0x214) == '\x01') {
      iVar3 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      iVar5 = iVar3 >> 2;
    }
    else {
      iVar5 = iVar5 / 2;
    }
  }
  FUN_1446f470e(local_40,L"DepthOnlyIndexBuffer",1);
  uVar8 = local_40._0_4_ & 0xffff;
  plVar4 = (longlong *)
           FUN_1400e5dc8(lVar6,(local_40._0_4_ << 0x10 | uVar8) + local_40._4_4_ +
                               (local_40._2_4_ << 0x13 | local_40._2_4_ & 0xffff) + (uVar8 >> 4),
                         local_40);
  *plVar4 = *plVar4 + (longlong)(iVar5 << (bVar7 & 0x1f));
  lVar6 = *(longlong *)(param_1 + 0x218);
  if (lVar6 != 0) {
    iVar5 = *(int *)(lVar6 + 0x78);
    if (iVar5 < 0) {
      iVar3 = *(int *)(lVar6 + 0x68);
      if (*(char *)(lVar6 + 0x7c) == '\x01') {
        iVar5 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        iVar5 = iVar5 >> 2;
      }
      else {
        iVar5 = iVar3 / 2;
      }
    }
    FUN_1446f470e(local_40,L"ReversedDepthOnlyIndexBuffer",1);
    FUN_1400e5d6e(param_2,local_40,(longlong)(iVar5 << (bVar7 & 0x1f)));
    lVar6 = *(longlong *)(param_1 + 0x218);
    iVar5 = *(int *)(lVar6 + 0x38);
    if (iVar5 < 0) {
      iVar3 = *(int *)(lVar6 + 0x28);
      if (*(char *)(lVar6 + 0x3c) == '\x01') {
        iVar5 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        iVar5 = iVar5 >> 2;
      }
      else {
        iVar5 = iVar3 / 2;
      }
    }
    FUN_1446f470e(local_40,L"ReversedIndexBuffer",1);
    FUN_1400e5d6e(param_2,local_40,(longlong)(iVar5 << (bVar7 & 0x1f)));
    lVar6 = *(longlong *)(param_1 + 0x218);
    iVar5 = *(int *)(lVar6 + 0xb8);
    if (iVar5 < 0) {
      iVar3 = *(int *)(lVar6 + 0xa8);
      if (*(char *)(lVar6 + 0xbc) == '\x01') {
        iVar5 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        iVar5 = iVar5 >> 2;
      }
      else {
        iVar5 = iVar3 / 2;
      }
    }
    FUN_1446f470e(local_40,L"WireframeIndexBuffer",1);
    FUN_1400e5d6e(param_2,local_40,(longlong)(iVar5 << (bVar7 & 0x1f)));
  }
  lVar6 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0x3c)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x3c) * 0x1c;
  }
  FUN_140347a44(param_2,lVar6);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140347a44 FUN_140347a44 body=296 status=ok
// SIG undefined FUN_140347a44(void)

longlong FUN_140347a44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0xa8);
  FUN_1446f470e(&local_40,L"Untracked Memory",1);
  uVar3 = (uint)((ulonglong)local_40 >> 0x10);
  uVar6 = (uint)local_40 & 0xffff;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar5 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xf0) - 1U &
                             ((uint)local_40 << 0x10 | uVar6) + (int)((ulonglong)local_40 >> 0x20) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
        if (*plVar2 == local_40) {
          if (plVar2 != (longlong *)0x0) goto LAB_140347b09;
          break;
        }
        iVar4 = (int)plVar2[2];
      } while (iVar4 != -1);
    }
  }
  local_48 = 0;
  local_38 = &local_40;
  FUN_140136100(plVar1,&local_2c);
  plVar2 = (longlong *)(*plVar1 + (longlong)local_2c * 0x18);
LAB_140347b09:
  plVar2[1] = plVar2[1] + param_2;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140347b6d FUN_140347b6d body=582 status=ok
// SIG undefined FUN_140347b6d(void)

float * FUN_140347b6d(float *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar3 = FUN_140347e80(param_2);
  fVar8 = (float)exp2f(*(undefined4 *)(param_2 + 0x2a0c));
  fVar1 = *(float *)(param_4 + 0x10);
  fVar2 = *(float *)(param_4 + 0x14);
  fVar11 = *(float *)(param_2 + 0x29dc);
  fVar12 = *(float *)(param_2 + 0x29e0);
  if ((*(longlong *)(param_2 + 0x30d8) != 0) &&
     (fVar10 = *(float *)(*(longlong *)(param_2 + 0x30d8) + 0x674), 0.0 < fVar10)) {
    fVar9 = (float)FUN_140347db3();
    fVar10 = logf(fVar10 / fVar9);
    fVar10 = fVar10 * 1.442695 + 2.473931;
    if (*(longlong *)(param_2 + 0x29e8) != 0) {
      fVar9 = (float)FUN_1449e6cbc(*(longlong *)(param_2 + 0x29e8),fVar10);
      fVar11 = fVar11 * fVar9;
    }
    if (*(longlong *)(param_2 + 0x29f0) != 0) {
      fVar10 = (float)FUN_1449e6cbc(*(longlong *)(param_2 + 0x29f0),fVar10);
      fVar12 = fVar12 * fVar10;
    }
  }
  if (*(char *)(param_2 + 0x29d4) == '\x01') {
    fVar11 = (float)exp2f(-(fVar11 * -10.0 + 10.0));
    fVar12 = (float)exp2f(fVar12 * -10.0 + 10.0);
  }
  iVar5 = (int)param_3;
  iVar4 = iVar5 + 0x7e;
  if (-1 < iVar5 + 0x3f) {
    iVar4 = iVar5 + 0x3f;
  }
  iVar6 = (int)((ulonglong)param_3 >> 0x20);
  iVar7 = iVar6 + 0x7e;
  if (-1 < iVar6 + 0x3f) {
    iVar7 = iVar6 + 0x3f;
  }
  if (iVar3 == 2) {
    fVar8 = fVar8 / (fVar1 * fVar2);
  }
  *param_1 = fVar11;
  param_1[1] = fVar12;
  param_1[2] = *(float *)(param_2 + 0x2a00);
  param_1[3] = *(float *)(param_2 + 0x2a04);
  param_1[4] = fVar8;
  param_1[6] = ((float)iVar5 * 0.015625) / (float)(iVar4 >> 6);
  param_1[7] = ((float)iVar6 * 0.015625) / (float)(iVar7 >> 6);
  param_1[8] = *(float *)(param_2 + 0x29f8);
  param_1[9] = *(float *)(param_2 + 0x29fc);
  return param_1;
}



// FUNCTION 140347db3 FUN_140347db3 body=205 status=ok
// SIG undefined FUN_140347db3(void)

float FUN_140347db3(void)

{
  longlong *plVar1;
  float fVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27188) {
    FUN_144b3d300(&DAT_14ca27188);
    if (DAT_14ca27188 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"
                          ,1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14ca27180 = 0;
      }
      else {
        DAT_14ca27180 = (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer(&DAT_14ca27188);
    }
  }
  if (*(int *)(DAT_14ca27180 + 4) == 1) {
    fVar2 = *(float *)(DAT_14ca27088 + 4);
    if (fVar2 <= 0.01) {
      fVar2 = 0.01;
    }
    fVar2 = 0.78 / fVar2;
  }
  else {
    fVar2 = 1.0;
  }
  return fVar2;
}



// FUNCTION 140347e80 FUN_140347e80 body=398 status=ok
// SIG undefined FUN_140347e80(void)

uint FUN_140347e80(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x2546);
  uVar5 = (uint)bVar1;
  uVar4 = (uint)bVar1;
  if (uVar5 < 2) {
    if ((*(int *)(param_1 + 0x3090) < 2) && (uVar4 = uVar5, DAT_14c760e14 == 0)) {
      uVar4 = 2;
    }
  }
  else if (uVar5 != 2) {
    uVar4 = 2 - ((1 < *(int *)(param_1 + 0x3090) | DAT_14c760e14) & 1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca29f60) && (FUN_144b3d300(&DAT_14ca29f60), DAT_14ca29f60 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EyeAdaptationQuality",1);
    if (plVar3 == (longlong *)0x0) {
      DAT_14ca29f58 = 0;
    }
    else {
      DAT_14ca29f58 = (**(code **)(*plVar3 + 0x68))(plVar3);
    }
    _Init_thread_footer(&DAT_14ca29f60);
  }
  uVar5 = 1;
  if (*(int *)(DAT_14ca29f58 + 4) != 1) {
    uVar5 = uVar4;
  }
  if (uVar4 == 2) {
    uVar5 = uVar4;
  }
  iVar2 = *(int *)(DAT_14ca27040 + 4);
  if (iVar2 < 0) {
LAB_140347eef:
    uVar4 = uVar5;
    if (1 < uVar5) {
LAB_140347fc5:
      uVar4 = 2;
      goto LAB_140347f07;
    }
  }
  else if (iVar2 == 1) {
    uVar4 = 0;
  }
  else {
    if (iVar2 == 3) goto LAB_140347fc5;
    if (iVar2 != 2) goto LAB_140347eef;
    uVar4 = 1;
  }
  if ((*(int *)(param_1 + 0x3090) < 2) && (DAT_14c760e14 == 0)) {
    uVar4 = uVar5;
  }
LAB_140347f07:
  uVar5 = 2;
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x49) & 0x10) != 0) {
    uVar5 = uVar4;
  }
  return uVar5;
}



// FUNCTION 14034800e FUN_14034800e body=1093 status=ok
// SIG undefined FUN_14034800e(void)

void FUN_14034800e(longlong param_1,float *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong *plStack_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_54;
  int local_50;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x1ba) == '\0') {
    plVar2 = (longlong *)(param_1 + -0xc0);
    fVar14 = param_2[8] * (float)DAT_14c84635c + param_2[10] * DAT_14c84635c._4_4_ + param_2[0xc];
    fVar13 = (float)DAT_14c84635c * param_2[7] + DAT_14c84635c._4_4_ * param_2[9] + param_2[0xb];
    fVar16 = param_2[1] * param_2[2] + fVar14;
    fVar15 = param_2[2] * *param_2 + fVar13;
    local_90 = (ulonglong)(longlong)ROUND(fVar16 + fVar16 + 0.5) >> 1;
    iVar11 = (int)((ulonglong)(longlong)ROUND(fVar15 + fVar15 + 0.5) >> 1) -
             (int)((ulonglong)(longlong)ROUND(fVar13 + fVar13 + 0.5) >> 1);
    cVar7 = FUN_140348454();
    if (((*param_4 == 0) || (param_4[1] == 0)) || (*(int *)(param_4[1] + 8) < 1)) {
      bVar12 = *(char *)(param_1 + 0x1d2) != cVar7;
    }
    else {
      lVar3 = param_4[2];
      bVar12 = *(char *)(param_1 + 0x1d2) != cVar7;
      if (lVar3 != 0) {
        local_98 = (**(code **)(*plVar2 + 0x1d8))(plVar2);
        plVar4 = *(longlong **)(lVar3 + 0x510);
        plVar5 = *(longlong **)(lVar3 + 0x518);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_a0 = (**(code **)(*plVar4 + 0xc0))();
        local_78 = (double)*(float *)(lVar3 + 0x380);
        local_60 = (longlong *)(double)(*(float *)(lVar3 + 0x394) + *(float *)(lVar3 + 900));
        local_68 = (double)(*(float *)(lVar3 + 0x380) + *(float *)(lVar3 + 0x390));
        local_a8 = &local_68;
        local_70 = (double)*(float *)(lVar3 + 900);
        FUN_14034851f(&local_54,&local_50,&local_49);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        bVar12 = *(char *)(param_1 + 0x1d2) != local_49 ||
                 (*(int *)(param_1 + 0x234) != local_50 || *(int *)(param_1 + 0x238) != local_54);
      }
    }
    iVar10 = (int)local_90 - (int)((ulonglong)(longlong)ROUND(fVar14 + fVar14 + 0.5) >> 1);
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
    plVar2 = DAT_14c98e618;
    if ((((int)local_68 != iVar11) || (local_68._4_4_ != iVar10)) || (bVar12)) {
      plVar4 = *(longlong **)(param_1 + 0x188);
      if (plVar4 == (longlong *)0x0) {
LAB_140348305:
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
      }
      else {
        iVar8 = (int)plVar4[1];
        do {
          if (iVar8 == 0) goto LAB_140348305;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar12 = iVar8 == iVar6;
          if (bVar12) {
            *(int *)(plVar4 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar12);
        local_88 = *(undefined8 *)(param_1 + 0x180);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        plStack_80 = plVar4;
        (**(code **)(*plVar2 + 0x28))(plVar2,&local_68);
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (((local_68 != 0.0) && (*(float *)((longlong)local_68 + 0x398) == 0.0)) &&
         (!NAN(*(float *)((longlong)local_68 + 0x398)))) {
        plVar2 = *(longlong **)(param_1 + 0x188);
        cVar7 = DAT_000002c0;
        if (plVar2 != (longlong *)0x0) {
          iVar8 = (int)plVar2[1];
          do {
            cVar7 = DAT_000002c0;
            if (iVar8 == 0) goto joined_r0x0001403483c8;
            LOCK();
            iVar6 = (int)plVar2[1];
            bVar12 = iVar8 == iVar6;
            if (bVar12) {
              *(int *)(plVar2 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar12);
          cVar7 = *(char *)(*(longlong *)(param_1 + 0x180) + 0x2c0);
          LOCK();
          plVar4 = plVar2 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
joined_r0x0001403483c8:
        if (cVar7 != '\0') {
          fVar13 = 0.0;
          if (0.0 <= param_2[3]) {
            fVar13 = param_2[3];
          }
          *(int *)(param_1 + -0x28) = (int)(longlong)fVar13;
          fVar13 = 0.0;
          if (0.0 <= param_2[4]) {
            fVar13 = param_2[4];
          }
          *(int *)(param_1 + -0x24) = (int)(longlong)fVar13;
        }
        uVar9 = (**(code **)(**(longlong **)((longlong)local_68 + 0x510) + 0x68))();
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        iVar8 = 0;
        if (0 < iVar11) {
          iVar8 = iVar11;
        }
        (**(code **)(*(longlong *)(param_1 + -200) + 0x18))
                  ((longlong *)(param_1 + -200),iVar8,iVar10,uVar9);
      }
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140348454 FUN_140348454 body=83 status=ok
// SIG undefined FUN_140348454(void)

bool FUN_140348454(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = DAT_14ca95218;
  if (DAT_14ca84f23 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    bVar4 = *(int *)(lVar1 + uVar3 * 4) != 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 1403484a8 FUN_1403484a8 body=119 status=ok
// SIG undefined FUN_1403484a8(void)

ulonglong FUN_1403484a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x240) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x248), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (iVar5 == 0) {
        uVar6 = CONCAT71(uVar7,DAT_000002c4);
        goto LAB_1403484ef;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = CONCAT71(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x240) + 0x2c4));
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
LAB_1403484ef:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14034851f FUN_14034851f body=144 status=ok
// SIG undefined FUN_14034851f(void)

void FUN_14034851f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_7 != '\0') && (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x10))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x78))();
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_1,param_2,param_3);
        if (cVar1 != '\0') {
          return;
        }
      }
    }
  }
  FUN_1403485af(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1403485af FUN_1403485af body=934 status=ok
// SIG undefined FUN_1403485af(void)

void FUN_1403485af(int *param_1,int *param_2,char *param_3,double *param_4,double *param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  char cVar17;
  undefined8 *puVar18;
  double *pdVar19;
  undefined1 auStack_98 [40];
  double *local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  lVar10 = DAT_14ca95188;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  uVar16 = 0;
  if (iVar5 == 0x40000002) {
    iVar5 = 0x40000002;
  }
  else if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
    if (iVar5 == 1) {
      uVar6 = FUN_140ad26c0();
      local_70 = (double *)CONCAT44(local_70._4_4_,uVar6);
      DVar7 = GetCurrentThreadId();
      uVar12 = (ulonglong)((DWORD)local_70 != DVar7);
      iVar5 = *piVar1;
    }
    else {
      uVar12 = 1;
    }
    goto LAB_140348633;
  }
  uVar12 = 0;
LAB_140348633:
  lVar2 = DAT_14ca95170;
  iVar15 = *(int *)(lVar10 + uVar12 * 4);
  iVar11 = 9;
  if (iVar15 < 9) {
    iVar11 = iVar15;
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  iVar15 = 0x40000002;
  if (iVar5 != 0x40000002) {
    iVar15 = iVar5;
    if ((DAT_14c86a9f8 == '\x01') && (iVar5 != 2)) {
      if (iVar5 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar16 = (ulonglong)(DVar7 != DVar8);
        iVar15 = *piVar1;
      }
      else {
        uVar16 = 1;
      }
    }
    else {
      uVar16 = 0;
    }
  }
  lVar10 = DAT_14ca95218;
  iVar5 = *(int *)(lVar2 + uVar16 * 4);
  iVar9 = 4;
  if (iVar5 < 4) {
    iVar9 = iVar5;
  }
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  cVar17 = '\0';
  if (DAT_14ca84f23 == '\x01') {
    local_70 = param_4;
    if (iVar15 == 0x40000002) {
      iVar15 = 0x40000002;
      uVar16 = 0;
    }
    else {
      uVar16 = FUN_144a61b4f();
      uVar16 = (uVar16 ^ 1) & 0xff;
      iVar15 = *piVar1;
    }
    param_4 = local_70;
    cVar17 = DAT_14ca84f23;
    if (*(int *)(lVar10 + uVar16 * 4) == 0) {
      cVar17 = '\0';
    }
  }
  if (((iVar15 != 0x40000002) && (iVar15 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  *param_1 = iVar11;
  *param_2 = iVar9;
  *param_3 = cVar17;
  lVar10 = DAT_14ca95218;
  if (DAT_14ca84f23 == '\x01') {
    if (*piVar1 == 0x40000002) {
      uVar16 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar16 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar10 + uVar16 * 4) != 0) {
      local_58 = 0;
      uStack_50 = 0;
      (**(code **)(*DAT_14ca83900 + 0x2f0))(DAT_14ca83900,&local_58);
      pdVar13 = (double *)(uStack_50 & 0xffffffff);
      local_68 = local_58;
      local_70 = pdVar13;
      if (pdVar13 != (double *)0x0) {
        local_70._0_4_ = (DWORD)uStack_50;
        if ((int)(DWORD)local_70 < 1) {
          lVar10 = 0;
        }
        else {
          local_5c = (int)param_5[1];
          local_60 = (int)*param_5;
          puVar18 = (undefined8 *)(local_58 + 8);
          pdVar19 = (double *)0x0;
          iVar5 = 0;
          iVar15 = 0;
          do {
            iVar11 = (int)*puVar18;
            if (local_60 < iVar11) {
              iVar11 = local_60;
            }
            iVar14 = (int)puVar18[-1];
            iVar9 = (int)*param_4;
            if ((int)*param_4 < iVar14) {
              iVar9 = iVar14;
            }
            iVar11 = iVar11 - iVar9;
            if (iVar11 < 1) {
              iVar11 = 0;
            }
            iVar9 = (int)((ulonglong)*puVar18 >> 0x20);
            if (local_5c < iVar9) {
              iVar9 = local_5c;
            }
            iVar14 = (int)((ulonglong)puVar18[-1] >> 0x20);
            if (iVar14 <= (int)param_4[1]) {
              iVar14 = (int)param_4[1];
            }
            iVar9 = iVar9 - iVar14;
            if (iVar9 < 1) {
              iVar9 = 0;
            }
            iVar14 = iVar9 * iVar11;
            iVar3 = (int)pdVar19;
            if (iVar9 * iVar11 <= iVar5) {
              iVar14 = iVar5;
              iVar3 = iVar15;
            }
            iVar15 = iVar3;
            iVar5 = iVar14;
            pdVar19 = (double *)((longlong)pdVar19 + 1);
            puVar18 = (undefined8 *)((longlong)puVar18 + 0x14);
          } while (pdVar13 != pdVar19);
          lVar10 = (longlong)iVar15;
        }
        *param_3 = *(char *)(local_58 + 0x10 + lVar10 * 0x14);
        *param_1 = 0;
        *param_2 = 0;
        lVar10 = DAT_14ca951d0;
        if (*param_3 != '\0') {
          if (*piVar1 == 0x40000002) {
            uVar16 = 0;
          }
          else {
            bVar4 = FUN_144a61b4f();
            uVar16 = (ulonglong)(bVar4 ^ 1);
          }
          *param_1 = (*(int *)(lVar10 + uVar16 * 4) != 1000) + 3;
          *param_2 = 2;
        }
      }
      local_68 = local_58;
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140348956 FUN_140348956 body=95 status=ok
// SIG undefined FUN_140348956(void)

void FUN_140348956(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x388) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1403489ea(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x380);
    if (*(longlong *)(param_1 + 0x380) == 0) {
      lVar1 = param_1;
    }
    FUN_1403489b5(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x38c) = 0x10;
  return;
}



// FUNCTION 1403489b5 FUN_1403489b5 body=52 status=ok
// SIG undefined FUN_1403489b5(void)

void FUN_1403489b5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14023a504(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1403489ea FUN_1403489ea body=339 status=ok
// SIG undefined FUN_1403489ea(void)

void FUN_1403489ea(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = 0;
  if ((param_2 != 0) && (iVar8 = 0x10, 0x10 < param_2)) {
    uVar5 = (longlong)(int)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140348a78;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_140348a78:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_14023b334(param_1,0,iVar8,0x38);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0x38c) = param_3;
  return;
}



// FUNCTION 140348b3e FUN_140348b3e body=51 status=ok
// SIG undefined FUN_140348b3e(void)

void FUN_140348b3e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  FUN_140348b72(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 140348b72 FUN_140348b72 body=301 status=ok
// SIG undefined FUN_140348b72(void)

void FUN_140348b72(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60;
  undefined8 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 0x28);
  if (0 < iVar4) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      if (lVar6 < *(int *)(param_1 + 0x128)) {
        lVar5 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar5 = param_1 + 0x100;
        }
        if (0.0 < *(float *)(lVar5 + lVar7)) {
          lVar5 = *param_2;
          lVar2 = *(longlong *)(param_1 + 0x48);
          sVar1 = *(short *)(lVar2 + 8 + lVar7 * 4);
          if (((sVar1 == -1) || (*(longlong *)(lVar2 + lVar7 * 4) == -1)) ||
             (sVar1 != *(short *)(lVar5 + 0x5d8))) {
            *(undefined2 *)(lVar2 + 8 + lVar7 * 4) = *(undefined2 *)(lVar5 + 0x5d8);
            *(undefined8 *)(lVar2 + lVar7 * 4) = *(undefined8 *)(lVar5 + 0x5d0);
            *(undefined2 *)(lVar2 + 10 + lVar7 * 4) = *(undefined2 *)(lVar5 + 0x5da);
            local_70[1] = 0;
            local_60 = 1;
            local_5c = 0xffffffffffffffff;
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
            local_70[0] = lVar5;
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x18))(plVar3,local_70);
            }
            iVar4 = *(int *)(param_1 + 0x28);
          }
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 4;
    } while (lVar6 < iVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140348ca0 FUN_140348ca0 body=1464 status=ok
// SIG undefined FUN_140348ca0(void)

void FUN_140348ca0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x348))(param_1,(char)param_1[0x1c],0);
  bVar2 = FUN_1401f76a8(param_1);
  iVar4 = (uint)bVar2 * 8 + 0x12;
  plVar1 = param_1 + 0xed;
  FUN_1401fd43c(plVar1,iVar4);
  FUN_1401fd468(plVar1,iVar4);
  *(undefined4 *)(param_1 + 0xf1) = 0;
  FUN_144965dc8(plVar1,param_2,param_1 + 0x25,0);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x33,2);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x2c,1);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x3a,3);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x41,4);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x48,5);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x4f,6);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x56,7);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x79,0xc);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x80,0xd);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x87,0xe);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x9c,0x11);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x8e,0xf);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x95,0x10);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x5d,8);
  FUN_144965dc8(plVar1,param_2,param_1 + 100,9);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x6b,10);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x72,0xb);
  cVar3 = FUN_1401f76a8(param_1);
  if (cVar3 != '\0') {
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb4,0x12);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xbb,0x13);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xc2,0x14);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xc9,0x15);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xd0,0x16);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xd7,0x17);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xde,0x18);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xe5,0x19);
  }
  FUN_140349258(plVar1);
  plVar1 = param_1 + 0xf2;
  FUN_1401fd43c(plVar1,iVar4);
  FUN_1401fd468(plVar1,iVar4);
  *(undefined4 *)(param_1 + 0xf6) = 0;
  FUN_144965dc8(plVar1,param_2,param_1 + 0x25,0);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x33,2);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x2c,1);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x3a,3);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x41,4);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x48,5);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x4f,6);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x56,7);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x79,0xc);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x80,0xd);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x87,0xe);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x9c,0x11);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x8e,0xf);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x5d,8);
  FUN_144965dc8(plVar1,param_2,param_1 + 100,9);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x6b,10);
  FUN_144965dc8(plVar1,param_2,param_1 + 0x72,0xb);
  cVar3 = FUN_1401f76a8(param_1);
  if (cVar3 != '\0') {
    FUN_144965dc8(plVar1,param_2,param_1 + 0xb4,0x12);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xbb,0x13);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xc2,0x14);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xc9,0x15);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xd0,0x16);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xd7,0x17);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xde,0x18);
    FUN_144965dc8(plVar1,param_2,param_1 + 0xe5,0x19);
  }
  FUN_140349258(plVar1);
  return;
}



// FUNCTION 140349258 FUN_140349258 body=1501 status=ok
// SIG undefined FUN_140349258(void)

void FUN_140349258(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 *local_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = (void *)0x0;
  uVar12 = *(uint *)(param_1 + 1);
  _Src = (void *)*param_1;
  local_78 = CONCAT44(local_78._4_4_,uVar12);
  local_88 = param_1;
  if ((longlong)(int)uVar12 == 0) {
    local_78 = (ulonglong)uVar12;
  }
  else {
    FUN_1418359ca(&local_80,uVar12);
    memcpy(local_80,_Src,(longlong)(int)uVar12 << 3);
  }
  local_70 = *(undefined4 *)(param_1 + 4);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1403492f4;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1403492f9;
      goto LAB_14034936a;
    }
  }
  else {
LAB_1403492f4:
    if (iVar6 != 0x10) {
LAB_14034936a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1403492f9;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1403492f9;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140349528;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143ab8523);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140349528:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x19);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x19);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1403495a8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1403495a8:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ae0ed00;
        puVar16[0x15] = local_88;
        puVar16[0x16] = local_80;
        local_80 = (void *)0x0;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_78._4_4_;
        local_78 = 0;
        *(undefined4 *)(puVar16 + 0x18) = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_68[0] = (code *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14ae0ecb0;
        local_58[1] = (longlong)local_88;
        local_58[2] = (longlong)local_80;
        local_80 = (void *)0x0;
        *(undefined4 *)(local_58 + 3) = (undefined4)local_78;
        *(undefined4 *)((longlong)local_58 + 0x1c) = local_78._4_4_;
        local_78 = 0;
        *(undefined4 *)(local_58 + 4) = local_70;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = FUN_143ab8466;
        }
        local_98 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraFinalizeLayout",&DAT_14cb42c60);
        if (local_68[0] != (code *)0x0) {
          plVar13 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar13 = local_48;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_140349452;
    }
  }
LAB_1403492f9:
  puVar2 = local_88;
  if ((void **)(local_88 + 2) != &local_80) {
    if (local_88[2] != 0) {
      FUN_1400020a8();
    }
    puVar2[2] = local_80;
    local_80 = (void *)0x0;
    *(undefined4 *)(puVar2 + 3) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = local_78._4_4_;
    local_78 = 0;
  }
  *(undefined2 *)((longlong)puVar2 + 0x24) = (undefined2)local_70;
  *(undefined2 *)((longlong)puVar2 + 0x26) = local_70._2_2_;
LAB_140349452:
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140349836 FUN_140349836 body=549 status=ok
// SIG undefined FUN_140349836(void)

void FUN_140349836(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140349a5c();
  if (DAT_14cb3e268 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1481bbd47;
    local_70 = FUN_143a7bac5;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x70;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter",&DAT_14cb3e268,&DAT_1481bbd46);
  }
  lVar3 = DAT_14cb3e268;
  if (DAT_14c951858 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1468c5283;
    local_70 = FUN_142809da0;
    local_78 = L"Engine";
    local_80 = 0x400000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar3 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar2 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar3 + 0x30)) {
        lVar2 = 0;
      }
    } while ((lVar2 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    if (lVar2 != 0) {
      if ((longlong)*(int *)(param_1 + 0x558) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x550);
        lVar4 = (longlong)*(int *)(param_1 + 0x558) * 0x2c;
        do {
          FUN_140349dfc(lVar3,lVar2);
          lVar3 = lVar3 + 0x2c;
          lVar4 = lVar4 + -0x2c;
        } while (lVar4 != 0);
      }
      local_48 = (code *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_140349b00(param_1,&local_48,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140349a5c FUN_140349a5c body=163 status=ok
// SIG undefined FUN_140349a5c(void)

void FUN_140349a5c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140349be2(param_1,local_50);
  if (local_50[0] != 0) {
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      lVar3 = 0;
      do {
        FUN_144830e52(*(undefined8 *)(lVar2 + lVar3),local_50,param_2);
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    FUN_144830e52(param_1 + 0x60,local_50,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140349b00 FUN_140349b00 body=226 status=ok
// SIG undefined FUN_140349b00(void)

void FUN_140349b00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1449662d0(param_1 + 0x5a0,param_1 + 0x128,param_2,param_3);
  FUN_1449662d0(param_1 + 0x5d8,param_1 + 0x198,param_2,param_3);
  FUN_1449662d0(param_1 + 0x610,param_1 + 0x1d0,param_2,param_3);
  FUN_1449662d0(param_1 + 0x648,param_1 + 0x208,param_2,param_3);
  FUN_1449662d0(param_1 + 0x680,param_1 + 0x240,param_2,param_3);
  FUN_1449662d0(param_1 + 0x6b8,param_1 + 0x278,param_2,param_3);
  FUN_1449662d0(param_1 + 0x6f0,param_1 + 0x3c8,param_2,param_3);
  FUN_1449662d0(param_1 + 0x728,param_1 + 0x438,param_2,param_3);
  return;
}



// FUNCTION 140349be2 FUN_140349be2 body=537 status=ok
// SIG undefined FUN_140349be2(void)

longlong * FUN_140349be2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb3e268 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1481bbd47;
    local_50 = FUN_143a7bac5;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x70;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraEmitter",&DAT_14cb3e268,&DAT_1481bbd46);
  }
  lVar5 = DAT_14cb3e268;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
         (lVar7 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar5 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    if (lVar7 != 0) {
      *param_2 = lVar7;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      uVar2 = *(undefined4 *)(param_1 + 0x9c);
      uVar3 = *(undefined4 *)(param_1 + 0xa0);
      uVar4 = *(undefined4 *)(param_1 + 0xa4);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x98);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140349dfc FUN_140349dfc body=1170 status=ok
// SIG undefined FUN_140349dfc(void)

void FUN_140349dfc(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined4 local_e0 [2];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_90 [32];
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_148);
  }
  local_e0[0] = 1;
  local_d8 = 0;
  local_d0 = 0xffffffff00000000;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff00000000;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffff00000000;
  local_38 = 0;
  FUN_14034a2ca(local_e0,param_2 + 0x60);
  local_118 = *(undefined4 *)(param_1 + 0x10);
  local_120 = *(undefined8 *)(param_1 + 8);
  local_110 = 0;
  uStack_108 = 0;
  FUN_14034a447(&local_100,&local_120,local_e0);
  *(undefined4 *)(param_1 + 0x1c) = local_f8;
  *(undefined8 *)(param_1 + 0x14) = local_100;
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_14034a294(local_58);
  if (local_60._4_4_ != -1) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_68 = 0;
    local_60 = 0xffffffff00000000;
  }
  FUN_14034a294(local_90);
  if (local_98._4_4_ != -1) {
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    local_a0 = 0;
    local_98 = 0xffffffff00000000;
  }
  FUN_14034a294(local_c8);
  if ((local_d0._4_4_ != -1) && (local_d8 != 0)) {
    FUN_1400020a8();
  }
  piVar1 = (int *)(param_1 + 0x1c);
  uVar5 = FUN_144741050(piVar1);
  cVar3 = FUN_14487ac36(uVar5);
  if (cVar3 != '\0') {
    plVar10 = (longlong *)(param_1 + 0x14);
    if (*(int *)(param_2 + 0x50) == 0) {
      lVar8 = 0;
    }
    else if (*(char *)(param_2 + 0x40) == '\0') {
      lVar8 = *(longlong *)(param_2 + 0x48);
    }
    else {
      lVar8 = FUN_143a7c414(param_2,param_2 + 0x30);
    }
    lVar7 = *plVar10;
    puVar6 = (ulonglong *)FUN_144741050(piVar1);
    if (*(int *)(lVar8 + 0x1e0) != *(int *)(lVar8 + 0x20c)) {
      uVar4 = (uint)((ulonglong)lVar7 >> 0x10);
      uVar11 = (uint)lVar7 & 0xffff;
      uVar15 = (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar11) +
               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
      uVar2 = (ushort)puVar6[1];
      uVar4 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = (uint)(uVar2 >> 0xd) ^ (uVar4 >> 0x10 ^ uVar4) - (uint)uVar2;
      uVar11 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - (uint)uVar2;
      uVar13 = uVar11 >> 0xd ^ (uVar2 - uVar4) - uVar11;
      uVar4 = uVar13 >> 0xc ^ (uVar4 - uVar11) - uVar13;
      uVar11 = uVar4 << 0x10 ^ (uVar11 - uVar13) - uVar4;
      uVar13 = uVar11 >> 5 ^ (uVar13 - uVar4) - uVar11;
      uVar14 = uVar13 >> 3 ^ (uVar4 - uVar11) - uVar13;
      uVar4 = uVar14 << 10 ^ (uVar11 - uVar13) - uVar14;
      uVar4 = uVar4 >> 0xf ^ uVar13 - (uVar14 + uVar4);
      iVar9 = uVar4 - *(byte *)((longlong)puVar6 + 10);
      uVar11 = iVar9 * 0x100 ^ 0x9e3779b9 - uVar4;
      uVar13 = uVar11 >> 0xd ^ ((uint)*(byte *)((longlong)puVar6 + 10) - iVar9) - uVar11;
      uVar4 = uVar13 >> 0xc ^ (iVar9 - uVar11) - uVar13;
      uVar11 = uVar4 << 0x10 ^ (uVar11 - uVar13) - uVar4;
      uVar14 = uVar11 >> 5 ^ (uVar13 - uVar4) - uVar11;
      uVar13 = uVar14 >> 3 ^ (uVar4 - uVar11) - uVar14;
      uVar4 = uVar13 << 10 ^ (uVar11 - uVar14) - uVar13;
      uVar13 = uVar15 >> 0xd ^ (uVar4 >> 0xf ^ uVar14 - (uVar13 + uVar4)) - uVar15;
      uVar11 = uVar13 << 8 ^ (-0x61c88647 - uVar15) - uVar13;
      uVar4 = uVar11 >> 0xd ^ (uVar15 - uVar13) - uVar11;
      uVar14 = uVar4 >> 0xc ^ (uVar13 - uVar11) - uVar4;
      uVar13 = uVar14 << 0x10 ^ (uVar11 - uVar4) - uVar14;
      uVar11 = uVar13 >> 5 ^ (uVar4 - uVar14) - uVar13;
      uVar4 = uVar11 >> 3 ^ (uVar14 - uVar13) - uVar11;
      uVar13 = uVar4 << 10 ^ (uVar13 - uVar11) - uVar4;
      lVar7 = lVar8 + 0x210;
      if (*(longlong *)(lVar8 + 0x218) != 0) {
        lVar7 = *(longlong *)(lVar8 + 0x218);
      }
      iVar9 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(lVar8 + 0x220) - 1U &
                               (uVar13 >> 0xf ^ uVar11 - (uVar4 + uVar13))) * 4);
      if (iVar9 != -1) {
        lVar8 = *(longlong *)(lVar8 + 0x1d8);
        do {
          lVar12 = (longlong)iVar9 * 0x20;
          lVar7 = lVar8 + lVar12;
          if ((*(longlong *)(lVar8 + lVar12) == *plVar10) &&
             (*(int *)(lVar8 + 8 + lVar12) == *piVar1)) {
            if ((longlong *)(lVar7 + 0xc) != (longlong *)0x0 && lVar7 != 0) {
              *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar7 + 0x14);
              *plVar10 = *(longlong *)(lVar7 + 0xc);
            }
            break;
          }
          iVar9 = *(int *)(lVar7 + 0x18);
        } while (iVar9 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14034a294 FUN_14034a294 body=53 status=ok
// SIG undefined FUN_14034a294(void)

void FUN_14034a294(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14034a2ca FUN_14034a2ca body=156 status=ok
// SIG undefined FUN_14034a2ca(void)

longlong FUN_14034a2ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ac5dca(local_40,0,&DAT_14cb3aff8,param_2);
  if (local_40 != (longlong *)(param_1 + 0x18)) {
    FUN_14034a3cc((longlong *)(param_1 + 0x18),local_40);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (param_1 + 8 != param_2) {
    FUN_14034a368(param_1 + 8,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034a368 FUN_14034a368 body=100 status=ok
// SIG undefined FUN_14034a368(void)

longlong * FUN_14034a368(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
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
  return param_1;
}



// FUNCTION 14034a3cc FUN_14034a3cc body=123 status=ok
// SIG undefined FUN_14034a3cc(void)

longlong * FUN_14034a3cc(longlong *param_1,longlong *param_2)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return param_1;
}



// FUNCTION 14034a447 FUN_14034a447 body=1545 status=ok
// SIG undefined FUN_14034a447(void)

undefined8 * FUN_14034a447(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  void *pvVar1;
  longlong **pplVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ushort uVar19;
  longlong *plVar20;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined1 *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  code *local_398;
  longlong **pplStack_390;
  code *local_388;
  char local_380;
  undefined1 local_378 [256];
  undefined1 local_278 [256];
  longlong *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar8 = *(int *)(param_2 + 3);
  pvVar1 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar8,0);
    memcpy((void *)param_1[2],pvVar1,(longlong)iVar8);
  }
  local_168 = local_148;
  local_150 = '\0';
  local_158 = &local_48;
  local_160 = local_168;
  FUN_14005eb5c(param_2,&local_168);
  local_178 = (longlong *)0x0;
  local_170 = 0x1000000000;
  pplStack_390 = &local_3b0;
  local_398 = FUN_1439f3616;
  local_3a8 = local_168;
  uStack_3a0 = (undefined4)((ulonglong)((longlong)local_160 - (longlong)local_168) >> 1);
  local_3b0 = (longlong *)local_278;
  FUN_1401905f7(&local_3a8,
                CONCAT62((uint6)((ulonglong)((longlong)local_160 - (longlong)local_168) >> 0x11),
                         0x2e),&local_398,0);
  plVar10 = local_178;
  if (local_178 == (longlong *)0x0) {
    plVar10 = (longlong *)local_278;
  }
  local_3b0 = (longlong *)CONCAT44(local_3b0._4_4_,0xffffffff);
  iVar8 = DAT_14cb3afd0 - 1;
  if (DAT_14cb3afd0 == 0) {
    iVar8 = 0;
  }
  iVar5 = (int)plVar10[1];
  if ((iVar5 == iVar8) &&
     ((DAT_14cb3afd0 < 2 ||
      (iVar8 = wcsncmp((wchar_t *)*plVar10,DAT_14cb3afc8,(longlong)iVar8), iVar8 == 0)))) {
    FUN_1480d8601(param_3,local_278,&local_3b0);
    iVar8 = (int)local_3b0;
  }
  else {
    iVar8 = DAT_14cb3afe0 - 1;
    if (DAT_14cb3afe0 == 0) {
      iVar8 = 0;
    }
    if ((iVar5 == iVar8) &&
       (((iVar5 == 0 || (DAT_14cb3afe0 < 2)) ||
        (iVar8 = wcsncmp((wchar_t *)*plVar10,DAT_14cb3afd8,(longlong)iVar5), iVar8 == 0)))) {
      FUN_1480d8790(param_3,local_278);
      goto LAB_14034a70f;
    }
    if (*(char *)(param_3 + 0xa8) == '\x01') {
      uVar13 = *(uint *)(param_3 + 0x90);
      iVar8 = uVar13 - 1;
      if (uVar13 == 0) {
        iVar8 = 0;
      }
      if ((iVar5 == iVar8) &&
         ((uVar13 < 2 ||
          (iVar8 = wcsncmp((wchar_t *)*plVar10,*(wchar_t **)(param_3 + 0x88),(longlong)iVar5),
          iVar8 == 0)))) {
        iVar8 = *(int *)(param_3 + 0xa0) + -1;
        if (*(int *)(param_3 + 0xa0) == 0) {
          iVar8 = 0;
        }
        *plVar10 = *(longlong *)(param_3 + 0x98);
        *(int *)(plVar10 + 1) = iVar8;
      }
    }
    if (*(char *)(param_3 + 0x38) == '\x01') {
      plVar10 = local_178;
      if (local_178 == (longlong *)0x0) {
        plVar10 = (longlong *)local_278;
      }
      iVar8 = (int)plVar10[1];
      lVar9 = (longlong)iVar8;
      uVar13 = *(uint *)(param_3 + 0x20);
      iVar5 = uVar13 - 1;
      if (uVar13 == 0) {
        iVar5 = 0;
      }
      if (iVar8 != iVar5) goto LAB_14034a843;
      lVar6 = 0x30;
      lVar4 = 0x28;
      if ((iVar8 != 0) && (1 < uVar13)) {
        lVar17 = 0;
        while( true ) {
          uVar19 = *(ushort *)(*plVar10 + lVar17);
          uVar14 = (ulonglong)uVar19;
          uVar12 = *(ushort *)(*(longlong *)(param_3 + 0x18) + lVar17);
          if (uVar19 != uVar12) break;
          if (uVar19 == 0) goto LAB_14034a636;
LAB_14034a600:
          lVar9 = lVar9 + -1;
          if (lVar9 == 0) goto LAB_14034a636;
          lVar17 = lVar17 + 2;
        }
        if ((uVar12 | uVar19) < 0x80) {
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          uVar18 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar18]) goto LAB_14034a600;
        }
        if (uVar19 != uVar12) goto LAB_14034a843;
      }
LAB_14034a636:
      iVar8 = *(int *)(param_3 + lVar6) + -1;
      if (*(int *)(param_3 + lVar6) == 0) {
        iVar8 = 0;
      }
      *plVar10 = *(longlong *)(param_3 + lVar4);
      *(int *)(plVar10 + 1) = iVar8;
    }
    else {
LAB_14034a843:
      if (*(char *)(param_3 + 0x70) == '\x01') {
        plVar10 = local_178;
        if (local_178 == (longlong *)0x0) {
          plVar10 = (longlong *)local_278;
        }
        local_398 = (code *)*plVar10;
        pplStack_390 = (longlong **)plVar10[1];
        cVar3 = FUN_1480d87ff();
        if (cVar3 != '\0') {
          lVar6 = 0x68;
          lVar4 = 0x60;
          goto LAB_14034a636;
        }
      }
    }
    plVar10 = local_178;
    if ((2 < (int)local_170) && (*(char *)(param_3 + 0x70) == '\x01')) {
      plVar20 = local_178;
      if (local_178 == (longlong *)0x0) {
        plVar20 = (longlong *)local_278;
      }
      local_3a8 = (undefined1 *)plVar20[2];
      uStack_3a0 = (undefined4)plVar20[3];
      uStack_39c = *(undefined4 *)((longlong)plVar20 + 0x1c);
      cVar3 = FUN_1480d87ff(&local_3a8,param_3 + 0x50);
      if (cVar3 != '\0') {
        iVar8 = *(int *)(param_3 + 0x68) + -1;
        if (*(int *)(param_3 + 0x68) == 0) {
          iVar8 = 0;
        }
        plVar20[2] = *(longlong *)(param_3 + 0x60);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)local_278;
        }
        *(int *)(plVar10 + 3) = iVar8;
      }
    }
    plVar10 = local_178;
    if (local_178 == (longlong *)0x0) {
      plVar10 = (longlong *)local_278;
    }
    uVar13 = DAT_14cb3afc0 - 1;
    if (DAT_14cb3afc0 == 0) {
      uVar13 = 0;
    }
    uVar15 = *(uint *)(plVar10 + 1);
    if ((int)uVar13 < (int)*(uint *)(plVar10 + 1)) {
      uVar15 = uVar13;
    }
    uVar16 = 0;
    if (0 < (int)uVar15) {
      uVar16 = uVar15;
    }
    iVar8 = -1;
    if (uVar13 == uVar16) {
      if ((1 < DAT_14cb3afc0) && (0 < (int)uVar15)) {
        uVar14 = (ulonglong)uVar13;
        lVar9 = 0;
        while( true ) {
          uVar19 = *(ushort *)(DAT_14cb3afb8 + lVar9);
          uVar18 = (ulonglong)uVar19;
          uVar12 = *(ushort *)(*plVar10 + lVar9);
          if (uVar19 != uVar12) break;
          if (uVar19 == 0) goto LAB_14034a6fd;
LAB_14034a6cf:
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_14034a6fd;
          lVar9 = lVar9 + 2;
        }
        if ((uVar12 | uVar19) < 0x80) {
          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          uVar11 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar11]) goto LAB_14034a6cf;
        }
        if (uVar19 != uVar12) goto LAB_14034a702;
      }
LAB_14034a6fd:
      iVar8 = 1;
    }
LAB_14034a702:
    local_3b0 = (longlong *)CONCAT44(local_3b0._4_4_,iVar8);
  }
  if (iVar8 != -1) {
    FUN_1480d883c(param_3,&local_3b0,local_278);
  }
LAB_14034a70f:
  local_398 = (code *)local_378;
  local_380 = '\0';
  local_388 = (code *)local_278;
  plVar10 = (longlong *)local_278;
  if (local_178 != (longlong *)0x0) {
    plVar10 = local_178;
  }
  pplStack_390 = (longlong **)local_398;
  if ((longlong)(int)local_170 != 0) {
    plVar20 = plVar10 + (longlong)(int)local_170 * 2;
    bVar7 = true;
    do {
      if (!bVar7) {
        if (local_388 <= (code *)((longlong)pplStack_390 + 2)) {
          FUN_140213274(&local_398);
        }
        *(undefined2 *)pplStack_390 = 0x2e;
        pplStack_390 = (longlong **)((longlong)pplStack_390 + 2);
      }
      pvVar1 = (void *)*plVar10;
      lVar9 = plVar10[1];
      lVar4 = (longlong)(int)lVar9;
      if (local_388 <= (code *)((longlong)pplStack_390 + lVar4 * 2)) {
        FUN_140213274(&local_398);
      }
      pplVar2 = pplStack_390;
      if ((int)lVar9 != 0) {
        memcpy(pplStack_390,pvVar1,lVar4 * 2);
        pplStack_390 = (longlong **)((longlong)pplVar2 + lVar4 * 2);
      }
      plVar10 = plVar10 + 2;
      bVar7 = false;
    } while (plVar10 != plVar20);
  }
  *(undefined2 *)pplStack_390 = 0;
  FUN_1446f470e(&local_3b8,local_398,1);
  *param_1 = local_3b8;
  if (local_380 == '\x01') {
    FUN_1400020a8(local_398);
  }
  if (local_178 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_150 == '\x01') {
    FUN_1400020a8(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14034aa52 FUN_14034aa52 body=2056 status=ok
// SIG undefined FUN_14034aa52(void)

void FUN_14034aa52(code *param_1)

{
  code cVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  code **ppcStack_80;
  float *local_78;
  float local_64;
  float local_60;
  undefined1 local_59;
  code *local_58;
  code **ppcStack_50;
  float *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(uint *)(param_1 + 4) == 0) || (uVar10 = *(uint *)param_1, (int)uVar10 < 0))
  goto LAB_14034af25;
  if (DAT_14c9647dc <= (int)uVar10) goto LAB_14034af25;
  lVar9 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
  if (((lVar9 == 0) || (*(uint *)(lVar9 + 0x10) != *(uint *)(param_1 + 4))) ||
     ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_14034af25;
  if (((((*(uint *)(param_1 + 0x144) == 0) || (uVar10 = *(uint *)(param_1 + 0x140), (int)uVar10 < 0)
        ) || ((DAT_14c9647dc <= (int)uVar10 ||
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0 || (*(uint *)(plVar7 + 2) != *(uint *)(param_1 + 0x144)))))
             )) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || (lVar9 = *plVar7, lVar9 == 0)) {
LAB_14034ab5f:
    pcVar8 = param_1 + 0x17;
LAB_14034ab63:
    if (*pcVar8 == (code)0x1) goto LAB_14034af25;
  }
  else if ((*(longlong *)(lVar9 + 0xa8) == 0) ||
          ((*(byte *)(*(longlong *)(lVar9 + 0xa8) + 0x65) & 1) != 0)) {
    if (DAT_14cad2858 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_146395584;
      local_a8 = &LAB_147a0ba80;
      local_b0 = &LAB_14575ccce;
      local_b8 = L"Engine";
      local_c0 = 0x40000000000;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_14034ab5f;
    pcVar8 = (code *)(lVar9 + 0x427);
    goto LAB_14034ab63;
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40);
    if (lVar9 == 0) goto LAB_14034af25;
    if ((*(byte *)(lVar9 + 0x90) == 0) ||
       ((1 < *(byte *)(lVar9 + 0x90) && (*(char *)(lVar9 + 0x1ac) == '\x03')))) goto LAB_14034af25;
  }
  if (*(uint *)(param_1 + 4) == 0) {
LAB_14034af99:
    lVar9 = 0;
  }
  else {
    uVar10 = *(uint *)param_1;
    lVar9 = 0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != *(uint *)(param_1 + 4) ||
          ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_14034af99;
      lVar9 = *plVar7;
    }
  }
  lVar5 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar7 = (longlong *)FUN_145a62958();
    lVar5 = plVar7[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar5 = plVar7[0x22];
    }
  }
  pcVar8 = param_1 + 0x138;
  cVar3 = *(char *)(lVar5 + 0x75);
  if (*(char *)(lVar9 + 0x31) != '\0') {
    cVar3 = *(char *)(lVar9 + 0x31);
  }
  if (cVar3 != '\x03') {
    FUN_14034b25c(param_1);
    ppcStack_50 = &local_88;
    local_58 = FUN_1436220d4;
    local_88 = param_1;
    FUN_144966906(pcVar8,&local_58);
    if (((byte)param_1[0x3d] & 1) == 0) {
      if (DAT_14caf84d0 == (longlong *)0x0) {
        local_58 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_145a62952;
        local_a8 = &LAB_147c8cd45;
        local_b0 = &LAB_1461468ae;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10000006;
        local_d0 = 8;
        local_d8 = 0x218;
        local_a0 = &local_58;
        FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
      }
      plVar7 = DAT_14caf84d0;
      lVar9 = DAT_14caf84d0[0x22];
      if (lVar9 == 0) {
        (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
        lVar9 = plVar7[0x22];
      }
      pfVar4 = (float *)(lVar9 + 0x60);
    }
    else {
      pfVar4 = (float *)(param_1 + 0x128);
    }
    local_60 = *pfVar4 * 0.017453292;
    local_58 = (code *)&local_59;
    local_59 = (code)0x0;
    ppcStack_50 = (code **)&local_60;
    local_64 = local_60 * 57.295776;
    local_48 = &local_64;
    local_88 = FUN_143622422;
    ppcStack_80 = &local_58;
    FUN_144966906(pcVar8,&local_88);
    *(float *)(param_1 + 0x128) = local_64;
    if (((byte)param_1[0x3d] & 8) == 0) {
      uVar10 = 0xbf800000;
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x98);
    }
    ppcStack_80 = (code **)CONCAT44(ppcStack_80._4_4_,uVar10);
    local_58 = (code *)&LAB_1436224c0;
    local_88 = param_1;
    ppcStack_50 = &local_88;
    FUN_144966906(pcVar8,&local_58);
    local_88 = (code *)(CONCAT71(local_88._1_7_,param_1[0x3e]) & 0xffffffffffffff01);
    local_58 = (code *)&LAB_143622800;
    ppcStack_50 = &local_88;
    FUN_144966906(pcVar8,&local_58);
  }
  if (((*(uint *)(param_1 + 0x144) == 0) || (uVar10 = *(uint *)(param_1 + 0x140), (int)uVar10 < 0))
     || (DAT_14c9647dc <= (int)uVar10)) {
LAB_14034af7e:
    local_88 = (code *)0x0;
    ppcStack_80 = (code **)0x0;
    local_78 = (float *)0x0;
LAB_14034ae2f:
    bVar2 = false;
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != *(uint *)(param_1 + 0x144))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) goto LAB_14034af7e;
    plVar7 = *(longlong **)(*plVar7 + 0xa8);
    local_88 = (code *)0x0;
    ppcStack_80 = (code **)0x0;
    local_78 = (float *)0x0;
    if (plVar7 == (longlong *)0x0) goto LAB_14034ae2f;
    (**(code **)(*plVar7 + 0x328))(plVar7,&local_88);
    if ((double)local_78 * (double)local_78 +
        (double)local_88 * (double)local_88 + (double)ppcStack_80 * (double)ppcStack_80 <=
        9.99999905104687e-09) goto LAB_14034ae2f;
    bVar2 = true;
  }
  if (((((byte)param_1[8] & 1) != 0) && (*(uint *)(param_1 + 4) != 0)) &&
     ((uVar10 = *(uint *)param_1, -1 < (int)uVar10 && ((int)uVar10 < DAT_14c9647dc)))) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar10 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && (*(uint *)(plVar7 + 2) == *(uint *)(param_1 + 4))) &&
       ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar7;
      }
      else {
        lVar9 = 0;
      }
      lVar5 = DAT_14c997cc0;
      if (DAT_14c997cc0 == 0) {
        plVar7 = (longlong *)FUN_145a62958();
        lVar5 = plVar7[0x22];
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          lVar5 = plVar7[0x22];
        }
      }
      cVar3 = *(char *)(lVar5 + 0x75);
      if (*(char *)(lVar9 + 0x31) != '\0') {
        cVar3 = *(char *)(lVar9 + 0x31);
      }
      if ((cVar3 != '\x03') && (*(longlong *)pcVar8 != 0)) {
        local_48 = local_78;
        local_58 = local_88;
        ppcStack_50 = ppcStack_80;
        FUN_1402a3ce4(*(longlong *)pcVar8,&local_58,1);
      }
    }
  }
  if (param_1[0x39] == (code)0x1) {
    pcVar6 = (code *)&DAT_14c761710;
LAB_14034b1ea:
    uVar10 = *(uint *)pcVar6;
  }
  else {
    if (param_1[0x39] == (code)0x2) {
      pcVar6 = param_1 + 300;
      goto LAB_14034b1ea;
    }
    uVar10 = 0x3f800000;
  }
  FUN_1402a8a44(*(undefined8 *)(param_1 + 0x138),uVar10);
  cVar1 = param_1[0x13];
  uVar10 = *(uint *)(param_1 + 0x14);
  FUN_14017b994(*(undefined8 *)(param_1 + 0x138),(char)param_1[0x12] + (param_1[0x12] == (code)0x0))
  ;
  FUN_14017baa4(*(undefined8 *)(param_1 + 0x138),(char)cVar1 + (cVar1 == (code)0x0));
  FUN_14017bbb4(*(undefined8 *)(param_1 + 0x138),uVar10 + ((char)uVar10 == '\0') & 0xff);
  FUN_14034b5ee(param_1);
  lVar9 = *(longlong *)(param_1 + 0x138);
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((((*(longlong *)(lVar9 + 8) != 0) &&
            (*(longlong *)(*(longlong *)(lVar9 + 8) + 0x260) != 0)) &&
           (((lVar5 = *(longlong *)(lVar9 + 0x40), lVar5 == 0 || (*(byte *)(lVar5 + 0x90) == 0)) ||
            ((1 < *(byte *)(lVar5 + 0x90) &&
             ((*(char *)(lVar5 + 0x1ac) == '\x03' || (*(char *)(lVar5 + 0x1ac) != '\x02')))))))) &&
          (!bVar2 && ((byte)param_1[8] & 0x20) == 0)) {
    FUN_14034b5ba(pcVar8);
    lVar9 = *(longlong *)pcVar8;
  }
  lVar9 = *(longlong *)(lVar9 + 0x40);
  if ((lVar9 != 0) && (1 < *(byte *)(lVar9 + 0x90))) {
    *(undefined1 *)(lVar9 + 0x1c0) = 1;
  }
LAB_14034af25:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034b25c FUN_14034b25c body=170 status=ok
// SIG undefined FUN_14034b25c(void)

void FUN_14034b25c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfe;
  FUN_14034b308();
  if ((((*(longlong *)(param_1 + 0x138) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40), lVar1 != 0)) &&
      (*(byte *)(lVar1 + 0x90) != 0)) &&
     ((*(byte *)(lVar1 + 0x90) < 2 || (*(char *)(lVar1 + 0x1ac) != '\x03')))) {
    local_18 = &local_28;
    local_20 = FUN_143620606;
    local_28 = param_1;
    FUN_144966906(param_1 + 0x138);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_147c63dce(*(longlong *)(param_1 + 0x158) + 0x10,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034b308 FUN_14034b308 body=273 status=ok
// SIG undefined FUN_14034b308(void)

void FUN_14034b308(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x52);
  uVar7 = 0;
  if ((((param_1[1] == 0) || (uVar5 = *param_1, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
     || (((plVar6 = (longlong *)
                    ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])) ||
         ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar7 = 0;
    if (*plVar6 != 0) {
      uVar7 = *(uint *)(*plVar6 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar4 = (ulonglong)*(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar3 = *(uint *)(lVar8 + 0x10);
        bVar9 = uVar3 == 0;
        if (bVar9) {
          *(uint *)(lVar8 + 0x10) = uVar5;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar3 = uVar5;
        }
        uVar4 = (ulonglong)uVar3;
      }
    }
  }
  FUN_14034b41a(param_1,*(undefined8 *)(param_1 + 0x50),(ulonglong)uVar7 | uVar4 << 0x20,uVar1);
  return;
}



// FUNCTION 14034b41a FUN_14034b41a body=415 status=ok
// SIG undefined FUN_14034b41a(void)

longlong FUN_14034b41a(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar3;
  
  if ((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0x898) == 0)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    return *(longlong *)(param_1 + 0x120);
  }
  bVar1 = true;
  if (param_2 >> 0x20 == 0) {
LAB_14034b4d0:
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)0x0;
    uVar6 = (uint)param_2;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)));
      if ((plVar7 == (longlong *)0x0) ||
         ((((int)plVar7[2] != (int)(param_2 >> 0x20) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
          || (plVar5 = (longlong *)*plVar7, plVar5 == (longlong *)0x0)))) goto LAB_14034b4d0;
      if (plVar5[0xa6] != 0) {
        plVar2 = (longlong *)0x0;
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          plVar2 = plVar5;
        }
        plVar2 = plVar2 + 0xa6;
        goto LAB_14034b590;
      }
      bVar1 = false;
    }
  }
  if (((((param_3 >> 0x20 != 0) && (uVar6 = (uint)param_3, -1 < (int)uVar6)) &&
       (((int)uVar6 < DAT_14c9647dc &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == (int)(param_3 >> 0x20))))))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
     ((lVar4 = *plVar7, lVar4 != 0 && (*(longlong *)(lVar4 + 0xc0) != 0)))) {
    lVar3 = 0;
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar3 = lVar4;
    }
    plVar2 = (longlong *)(lVar3 + 0xc0);
    goto LAB_14034b590;
  }
  if (bVar1) {
LAB_14034b56d:
    if (param_4 != (longlong *)0x0) {
      lVar4 = (**(code **)(*param_4 + 0x18))(param_4);
LAB_14034b57b:
      if (lVar4 != 0) {
        return lVar4;
      }
    }
  }
  else {
    lVar4 = FUN_14081cebe();
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_14034b56d;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x610))(plVar5,0);
    if (plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar5 + 0x2f8))(plVar5);
      goto LAB_14034b57b;
    }
  }
  plVar2 = (longlong *)(DAT_14cb0d2b0 + 0x898);
LAB_14034b590:
  return *plVar2;
}



// FUNCTION 14034b5ba FUN_14034b5ba body=52 status=ok
// SIG undefined FUN_14034b5ba(void)

void FUN_14034b5ba(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x40);
  if (((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) &&
     ((*(char *)(lVar1 + 0x1ac) == '\x04' || (*(char *)(lVar1 + 0x1ac) == '\x01')))) {
    FUN_140cd4f30(*param_1,1,0,1);
    return;
  }
  return;
}



// FUNCTION 14034b5ee FUN_14034b5ee body=2326 status=ok
// SIG undefined FUN_14034b5ee(void)

void FUN_14034b5ee(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  char cVar4;
  char cVar5;
  double *pdVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  ulonglong *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1d8 [40];
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  code *local_170;
  ulonglong *local_168;
  code *local_158;
  double **ppdStack_150;
  undefined8 local_148;
  double local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double *local_d8;
  double dStack_d0;
  ulonglong *puStack_c8;
  code **local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1407a4724();
    lVar3 = *(longlong *)(param_1 + 0x100);
    FUN_1449db362(lVar3 + 0x38);
    FUN_1449db362(lVar3 + 0x28);
    FUN_1449db362(lVar3 + 0x18);
    FUN_1400020a8(lVar3);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  iVar2 = FUN_14034bf06(*(undefined1 *)(param_1 + 0x3a));
  if (iVar2 == 1) {
switchD_14034b7af_caseD_6:
    uVar8 = SUB84(DAT_14c8464e0,0);
    uVar9 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    dVar12 = DAT_14c8464e8;
    dVar10 = DAT_14c8464f0;
    goto LAB_14034b693;
  }
  switch(iVar2) {
  case 2:
    dVar12 = 0.0;
    uVar9 = 0x3ff00000;
    break;
  case 3:
    dVar12 = 1.0;
    uVar9 = 0;
    break;
  case 4:
    dVar10 = 1.0;
    uVar8 = 0;
    uVar9 = 0;
    dVar12 = 0.0;
    goto LAB_14034b693;
  case 5:
    uVar8 = (undefined4)*(undefined8 *)(param_1 + 0xb0);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xb0) >> 0x20);
    dVar12 = *(double *)(param_1 + 0xb8);
    dVar10 = *(double *)(param_1 + 0xc0);
    goto LAB_14034b693;
  default:
    goto switchD_14034b7af_caseD_6;
  }
  uVar8 = 0;
  dVar10 = 0.0;
LAB_14034b693:
  iVar2 = FUN_14034bf06(*(undefined1 *)(param_1 + 0x3a));
  if (((*(longlong *)(param_1 + 0x138) == 0) ||
      (((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40), lVar3 != 0 &&
        (*(byte *)(lVar3 + 0x90) != 0)) &&
       ((*(byte *)(lVar3 + 0x90) < 2 || (*(char *)(lVar3 + 0x1ac) != '\x03')))))) &&
     ((((9.999999747378752e-05 < ABS((double)CONCAT44(uVar9,uVar8)) ||
        (9.999999747378752e-05 < ABS(dVar12))) ||
       (9.999999747378752e-05 < ABS(dVar10) || iVar2 == 1)) &&
      ((iVar2 != 1 || (3 < *(byte *)(param_1 + 0x3c))))))) {
    _Dst = (void *)FUN_14001cc68(0x288);
    memset(_Dst,0,0x288);
    FUN_140396f9a(_Dst);
    *(void **)(param_1 + 0x100) = _Dst;
    *(byte *)((longlong)_Dst + 0x16c) = *(byte *)((longlong)_Dst + 0x16c) & 0xfe;
    *(byte *)((longlong)_Dst + 0x18c) = *(byte *)((longlong)_Dst + 0x18c) & 0xfe;
    *(byte *)((longlong)_Dst + 0x150) = *(byte *)((longlong)_Dst + 0x150) & 0xfe;
    local_c0 = &local_170;
    local_170 = (code *)((ulonglong)local_170 & 0xffffffffffffff00);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_d8 = local_138;
    pdVar6 = (double *)&DAT_14c846480;
    pdVar7 = local_d8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    ppdStack_150 = &local_d8;
    local_158 = FUN_1400d78f6;
    dStack_d0 = (double)param_1;
    puStack_c8 = &local_b8;
    FUN_1448e6002(param_1 + 0x138,&local_158);
    local_d8 = (double *)0x3ff0000000000000;
    dStack_d0 = 0.0;
    puStack_c8 = (ulonglong *)0x0;
    local_158 = (code *)0x0;
    ppdStack_150 = (double **)0x3ff0000000000000;
    local_148 = 0;
    local_b8 = *(ulonglong *)(param_1 + 0x100);
    local_168 = &local_b8;
    if (iVar2 != 1) {
      cVar5 = '\x02';
      cVar4 = '\x02';
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        cVar4 = (*(char *)(param_1 + 0x3a) != '\x05') * '\x02';
      }
      *(char *)(local_b8 + 0x178) = cVar4;
      local_170 = FUN_14362593a;
      FUN_147c687da(local_b8 + 8);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        cVar5 = (*(char *)(param_1 + 0x3a) != '\x05') * '\x02';
      }
      *(char *)(local_b8 + 0x179) = cVar5;
      local_170 = FUN_14362593a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(undefined1 *)(local_b8 + 0x194) = 0;
      local_170 = FUN_14362593a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      cVar4 = '\x02';
      if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
        cVar4 = (*(char *)(param_1 + 0x3a) != '\x05') * '\x02';
      }
      *(char *)(local_b8 + 0x158) = cVar4;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(undefined1 *)(local_b8 + 0x159) = 0;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(undefined1 *)(local_b8 + 0x15a) = 0;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      dVar13 = dVar10 * dVar10 +
               (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar9,uVar8) + dVar12 * dVar12;
      if (((dVar13 != 1.0) ||
          (puStack_c8 = (ulonglong *)dVar10, dStack_d0 = dVar12,
          local_d8 = (double *)CONCAT44(uVar9,uVar8), NAN(dVar13))) &&
         (puStack_c8 = (ulonglong *)DAT_14c8464f0, dStack_d0 = DAT_14c8464e8,
         local_d8 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar13)) {
        dVar13 = 1.0 / SQRT(dVar13);
        puStack_c8 = (ulonglong *)(dVar10 * dVar13);
        dStack_d0 = dVar12 * dVar13;
        local_d8 = (double *)((double)CONCAT44(uVar9,uVar8) * dVar13);
      }
      FUN_1467fc32a(&local_d8,&local_170,&local_158);
      uVar8 = (undefined4)local_148;
      uVar9 = (undefined4)((ulonglong)local_148 >> 0x20);
      puVar11 = puStack_c8;
    }
    else {
      *(byte *)(local_b8 + 0x194) = *(byte *)(param_1 + 0x3c) >> 4 & 2;
      local_170 = FUN_14362593a;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(byte *)(local_b8 + 0x179) = *(byte *)(param_1 + 0x3c) >> 5 & 2;
      local_170 = FUN_14362593a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(byte *)(local_b8 + 0x178) = *(byte *)(param_1 + 0x3c) >> 6 & 2;
      local_170 = FUN_14362593a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(byte *)(local_b8 + 0x158) = *(byte *)(param_1 + 0x3c) >> 1 & 2;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(byte *)(local_b8 + 0x159) = *(byte *)(param_1 + 0x3c) >> 2 & 2;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      local_b8 = *(ulonglong *)(param_1 + 0x100);
      *(byte *)(local_b8 + 0x15a) = *(byte *)(param_1 + 0x3c) >> 3 & 2;
      local_170 = (code *)&LAB_14362590a;
      local_168 = &local_b8;
      FUN_147c687da(local_b8 + 8,&local_170);
      uVar8 = 0;
      uVar9 = 0;
      puVar11 = (ulonglong *)0.0;
    }
    dVar10 = -local_138[0];
    local_138[1] = -local_138[1];
    local_138[2] = local_138[2] * -1.0;
    local_138[3] = local_138[3] * 1.0;
    dVar12 = dStack_d0 * dVar10 - (double)local_d8 * local_138[1];
    dVar13 = (double)puVar11 * local_138[1] - dStack_d0 * local_138[2];
    dVar14 = (double)local_d8 * local_138[2] - (double)puVar11 * dVar10;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    lVar3 = *(longlong *)(param_1 + 0x100);
    *(double *)(lVar3 + 0x80) =
         (dVar12 * local_138[1] - dVar14 * local_138[2]) + local_138[3] * dVar13 + (double)local_d8;
    *(double *)(lVar3 + 0x88) =
         local_138[0] * dVar12 + local_138[2] * dVar13 + local_138[3] * dVar14 + dStack_d0;
    *(double *)(lVar3 + 0x90) =
         dVar12 * local_138[3] + (double)puVar11 + (dVar14 * dVar10 - dVar13 * local_138[1]);
    dVar12 = (double)ppdStack_150 * dVar10 - local_138[1] * (double)local_158;
    dVar13 = (double)CONCAT44(uVar9,uVar8) * local_138[1] - local_138[2] * (double)ppdStack_150;
    dVar14 = (double)local_158 * local_138[2] - (double)CONCAT44(uVar9,uVar8) * dVar10;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    lVar3 = *(longlong *)(param_1 + 0x100);
    *(double *)(lVar3 + 0x98) =
         (dVar12 * local_138[1] - dVar14 * local_138[2]) + local_138[3] * dVar13 + (double)local_158
    ;
    *(double *)(lVar3 + 0xa0) =
         local_138[0] * dVar12 + local_138[2] * dVar13 +
         local_138[3] * dVar14 + (double)ppdStack_150;
    *(double *)(lVar3 + 0xa8) =
         dVar12 * local_138[3] + (double)CONCAT44(uVar9,uVar8) +
         (dVar14 * dVar10 - dVar13 * local_138[1]);
    lVar3 = *(longlong *)(param_1 + 0x100);
    *(ulonglong **)(lVar3 + 0xd8) = puStack_c8;
    *(double **)(lVar3 + 200) = local_d8;
    *(double *)(lVar3 + 0xd0) = dStack_d0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    *(undefined8 *)(lVar3 + 0xf0) = local_148;
    *(code **)(lVar3 + 0xe0) = local_158;
    *(double ***)(lVar3 + 0xe8) = ppdStack_150;
    lVar3 = *(longlong *)(param_1 + 0x100);
    *(undefined8 *)(lVar3 + 0xb0) = local_118;
    *(undefined8 *)(lVar3 + 0xb8) = uStack_110;
    *(undefined8 *)(lVar3 + 0xc0) = local_108;
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    FUN_14479d2ce(param_1 + 0x140);
    local_1b0 = &local_198;
    local_1a8 = &local_188;
    FUN_140aa2b96(uVar1,param_1,0,0x3f800000);
  }
  if ((local_b0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034bf06 FUN_14034bf06 body=322 status=ok
// SIG undefined FUN_14034bf06(void)

int FUN_14034bf06(int param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_145a62952;
      local_38 = &LAB_147c8cd45;
      local_40 = &LAB_1461468ae;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000006;
      local_60 = 8;
      local_68 = 0x218;
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar2 = DAT_14caf84d0;
    lVar3 = DAT_14caf84d0[0x22];
    if (lVar3 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar3 = plVar2[0x22];
    }
    cVar1 = *(char *)(lVar3 + 0x14d);
    iVar4 = 3;
    if (cVar1 != '\x02') {
      iVar4 = (uint)(cVar1 == '\x03') << 2;
    }
    iVar5 = 2;
    if (cVar1 != '\x01') {
      iVar5 = iVar4;
    }
    param_1 = 1;
    if (cVar1 != '\0') {
      param_1 = iVar5;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
}



// FUNCTION 14034c04a FUN_14034c04a body=1366 status=ok
// SIG undefined FUN_14034c04a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14034c04a(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_10c8 [38];
  char local_10a2;
  char local_10a1;
  longlong *local_10a0;
  longlong local_1098;
  float local_1090 [2];
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined4 local_1058;
  undefined8 local_1050;
  undefined4 local_1048;
  undefined1 local_1040 [3968];
  undefined1 *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14034c060;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_10c8;
  local_10a1 = param_4;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    iVar1 = *(int *)(param_3 + 0xf88);
    lVar8 = (longlong)iVar1;
    lVar10 = *(longlong *)(param_1 + 0x90);
    local_1098 = (longlong)*(int *)(param_1 + 0x98) * 0xf8 + lVar10;
    fVar13 = 0.0;
    do {
      plVar5 = (longlong *)FUN_1400d690e(lVar10);
      if (plVar5 != (longlong *)0x0) {
        iVar3 = FUN_14034c64e(lVar10,param_2);
        fVar11 = (float)FUN_14034c8ba(lVar10,param_2);
        fVar14 = 0.0;
        if (0.0 <= fVar11) {
          fVar14 = fVar11;
        }
        local_10a2 = FUN_14034cd3e(lVar10,param_2);
        local_c0 = (undefined1 *)0x0;
        local_b8 = 0x1000000000;
        local_10a0 = plVar5;
        (**(code **)(*plVar5 + 0x50))(plVar5,param_2,local_1040,0);
        puVar7 = local_c0;
        if (local_c0 == (undefined1 *)0x0) {
          puVar7 = local_1040;
        }
        if ((longlong)(int)(uint)local_b8 != 0) {
          lVar9 = (longlong)(int)(uint)local_b8 * 0xf8;
          puVar7 = puVar7 + 0xb8;
          fVar11 = 0.0;
          do {
            iVar4 = FUN_14034c64e(puVar7 + -0xb8,param_2);
            if (iVar4 <= iVar3) {
              iVar4 = iVar3;
            }
            *(float *)(puVar7 + -0x50) = (float)iVar4;
            *(undefined8 *)(puVar7 + -0x48) = 0;
            *(undefined8 *)(puVar7 + -0x40) = 0;
            *(undefined8 *)(puVar7 + -0x38) = 0;
            *(undefined8 *)(puVar7 + -0x30) = 0;
            *(undefined8 *)(puVar7 + -0x28) = 0;
            if ((*(longlong *)(puVar7 + -0x20) != 0) || (*(int *)(puVar7 + -0x18) != -0xfffff30)) {
              *(undefined8 *)(puVar7 + -0x20) = 0;
              *(undefined4 *)(puVar7 + -0x18) = 0xf00000d0;
              *(undefined8 *)(puVar7 + -0x10) = 0;
            }
            *(undefined4 *)(puVar7 + -8) = 0x3f800000;
            fVar12 = (float)FUN_14034c8ba(puVar7 + -0xb8);
            fVar15 = 0.0;
            if (0.0 <= fVar12) {
              fVar15 = fVar12;
            }
            *(float *)(puVar7 + -0xa0) = fVar14 * fVar15;
            *(undefined8 *)(puVar7 + -0x98) = 0;
            *(undefined8 *)(puVar7 + -0x90) = 0;
            *(undefined8 *)(puVar7 + -0x88) = 0;
            *(undefined8 *)(puVar7 + -0x80) = 0;
            *(undefined8 *)(puVar7 + -0x78) = 0;
            if ((*(longlong *)(puVar7 + -0x70) != 0) || (*(int *)(puVar7 + -0x68) != -0xfffff30)) {
              *(undefined8 *)(puVar7 + -0x70) = 0;
              *(undefined4 *)(puVar7 + -0x68) = 0xf00000d0;
              *(undefined8 *)(puVar7 + -0x60) = 0;
            }
            *(undefined4 *)(puVar7 + -0x58) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x38) = 0x3f800000;
            puVar7[0x3d] = *(undefined1 *)(lVar10 + 0xf5);
            if (local_10a2 != '\0') {
              puVar7[0x3c] = 1;
              FUN_144983130(puVar7);
            }
            fVar11 = fVar11 + fVar15;
            puVar7 = puVar7 + 0xf8;
            lVar9 = lVar9 + -0xf8;
          } while (lVar9 != 0);
          if (0.0 < fVar11) {
            puVar7 = local_c0;
            if (local_c0 == (undefined1 *)0x0) {
              puVar7 = local_1040;
            }
            lVar9 = (longlong)(int)(uint)local_b8;
            if (lVar9 == 0) goto LAB_14034c32b;
            lVar6 = 0;
            do {
              *(float *)(puVar7 + lVar6 + 0x18) = *(float *)(puVar7 + lVar6 + 0x18) / fVar11;
              lVar6 = lVar6 + 0xf8;
            } while (lVar9 * 0xf8 - lVar6 != 0);
          }
          uVar2 = local_b8;
          if ((uint)local_b8 != 0) {
            iVar4 = *(int *)(param_3 + 0xf88);
            *(uint *)(param_3 + 0xf88) = iVar4 + (uint)local_b8;
            if ((uint)(*(int *)(param_3 + 0xf8c) - iVar4) < (uint)local_b8) {
              FUN_14034cf98(param_3,iVar4);
            }
            puVar7 = local_c0;
            if (local_c0 == (undefined1 *)0x0) {
              puVar7 = local_1040;
            }
            lVar9 = *(longlong *)(param_3 + 0xf80);
            if (*(longlong *)(param_3 + 0xf80) == 0) {
              lVar9 = param_3;
            }
            FUN_14034cb40((longlong)iVar4 * 0xf8 + lVar9,puVar7,uVar2 & 0xffffffff);
          }
        }
LAB_14034c32b:
        if (local_10a1 != '\0') {
          puVar7 = local_c0;
          if (local_c0 == (undefined1 *)0x0) {
            puVar7 = local_1040;
          }
          if ((longlong)(int)(uint)local_b8 != 0) {
            lVar9 = (longlong)(int)(uint)local_b8 * 0xf8;
            do {
              plVar5 = (longlong *)FUN_1400d690e(puVar7);
              if (plVar5 == local_10a0) goto LAB_14034c336;
              puVar7 = puVar7 + 0xf8;
              lVar9 = lVar9 + -0xf8;
            } while (lVar9 != 0);
          }
          iVar4 = *(int *)(param_3 + 0xf88);
          *(uint *)(param_3 + 0xf88) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xf8c) < iVar4 + 1U) {
            FUN_14034cf98(param_3,iVar4);
          }
          lVar9 = *(longlong *)(param_3 + 0xf80);
          if (*(longlong *)(param_3 + 0xf80) == 0) {
            lVar9 = param_3;
          }
          lVar6 = (longlong)iVar4 * 0xf8;
          local_10a0 = (longlong *)(lVar6 + lVar9);
          FUN_147e28a80(local_10a0,lVar10);
          local_1090[0] = (float)iVar3;
          local_1088 = 0;
          uStack_1080 = 0;
          local_1078 = 0;
          uStack_1070 = 0;
          local_1068 = 0;
          uStack_1060 = 0;
          local_1058 = 0xf00000d0;
          local_1050 = 0;
          local_1048 = 0x3f800000;
          FUN_140f85fd4(lVar6 + lVar9 + 0x68,local_1090);
          local_1088 = 0;
          uStack_1080 = 0;
          local_1078 = 0;
          uStack_1070 = 0;
          local_1068 = 0;
          uStack_1060 = 0;
          local_1058 = 0xf00000d0;
          local_1050 = 0;
          local_1048 = 0x3f800000;
          local_1090[0] = fVar14;
          FUN_140f85fd4(lVar6 + lVar9 + 0x18,local_1090);
          *(undefined4 *)(lVar6 + lVar9 + 0xf0) = 0x3f800000;
          if (local_10a2 != '\0') {
            *(undefined1 *)((longlong)local_10a0 + 0xf4) = 1;
          }
        }
LAB_14034c336:
        fVar13 = fVar13 + fVar14;
        FUN_14034c5a2(local_1040);
      }
      lVar10 = lVar10 + 0xf8;
    } while (lVar10 != local_1098);
    if ((0.0 < fVar13) && (iVar1 < *(int *)(param_3 + 0xf88))) {
      lVar10 = lVar8 * 0xf8 + 0x18;
      do {
        lVar9 = *(longlong *)(param_3 + 0xf80);
        if (*(longlong *)(param_3 + 0xf80) == 0) {
          lVar9 = param_3;
        }
        *(float *)(lVar9 + lVar10) = *(float *)(lVar9 + lVar10) / fVar13;
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0xf8;
      } while (lVar8 < *(int *)(param_3 + 0xf88));
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_10c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034c5a2 FUN_14034c5a2 body=61 status=ok
// SIG undefined FUN_14034c5a2(void)

void FUN_14034c5a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf80);
  if (*(longlong *)(param_1 + 0xf80) == 0) {
    lVar1 = param_1;
  }
  FUN_14034c5df(lVar1,*(undefined4 *)(param_1 + 0xf88));
  if (*(longlong *)(param_1 + 0xf80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14034c5df FUN_14034c5df body=111 status=ok
// SIG undefined FUN_14034c5df(void)

void FUN_14034c5df(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0xc0);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14034c64e FUN_14034c64e body=618 status=ok
// SIG undefined FUN_14034c64e(void)

int FUN_14034c64e(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  float local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88 = 0;
  FUN_1456bb102(local_b0);
  pfVar10 = &local_80;
  FUN_1448729ea(param_1 + 0x68,pfVar10,local_b0);
  if (local_60 == 3) {
    uVar5 = 3;
    fVar13 = local_80;
  }
  else {
    pfVar12 = &local_58;
    FUN_1400b56fe(pfVar12,&local_80,3);
    fVar13 = 0.0;
    if (local_38 != 0) {
      fVar13 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        pfVar12 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(pfVar12);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar5 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      pfVar10 = (float *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(pfVar10);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_88 != 0) {
    lVar9 = (longlong)local_88 + -1;
    lVar11 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar3 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_88 = 0;
  }
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return (int)fVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034c8ba FUN_14034c8ba body=645 status=ok
// SIG undefined FUN_14034c8ba(void)

float FUN_14034c8ba(longlong param_1)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar2 = *(float *)(param_1 + 0xf0);
  local_c0[0] = '\0';
  local_98 = 0;
  FUN_1456bb102(local_c0);
  pfVar11 = &local_90;
  FUN_1448729ea(param_1 + 0x18,pfVar11,local_c0);
  if (local_70 == 3) {
    uVar6 = 3;
    fVar14 = local_90;
  }
  else {
    pfVar13 = &local_68;
    FUN_1400b56fe(pfVar13,&local_90,3);
    fVar14 = 0.0;
    if (local_48 != 0) {
      fVar14 = local_68;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_50) {
        pfVar13 = (float *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar3)(pfVar13);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar6 = (uint)local_70;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_78) {
      pfVar11 = (float *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar3)(pfVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_98 != 0) {
    lVar10 = (longlong)local_98 + -1;
    lVar12 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar5 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_98 = 0;
  }
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return fVar2 * fVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034cb40 FUN_14034cb40 body=358 status=ok
// SIG undefined FUN_14034cb40(void)

void FUN_14034cb40(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0xb8;
    param_2 = param_2 + 0xb8;
    do {
      *(undefined8 *)(param_1 + -0xb8) = *(undefined8 *)(param_2 + -0xb8);
      *(undefined4 *)(param_1 + -0xb0) = *(undefined4 *)(param_2 + -0xb0);
      *(undefined8 *)(param_1 + -0xa8) = 0;
      *(undefined4 *)(param_1 + -0xa0) = *(undefined4 *)(param_2 + -0xa0);
      *(undefined8 *)(param_1 + -0x98) = 0;
      *(undefined8 *)(param_1 + -0x90) = 0;
      *(undefined8 *)(param_1 + -0x88) = 0;
      *(undefined8 *)(param_1 + -0x98) = *(undefined8 *)(param_2 + -0x98);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + -0x90));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + -0x90) = uVar1;
      *(undefined8 *)(param_1 + -0x88) = *(undefined8 *)(param_2 + -0x88);
      uVar1 = *(undefined8 *)(param_2 + -0x78);
      *(undefined8 *)(param_1 + -0x80) = *(undefined8 *)(param_2 + -0x80);
      *(undefined8 *)(param_1 + -0x78) = uVar1;
      *(undefined8 *)(param_1 + -0x70) = *(undefined8 *)(param_2 + -0x70);
      *(undefined4 *)(param_1 + -0x68) = *(undefined4 *)(param_2 + -0x68);
      *(undefined8 *)(param_1 + -0x60) = 0;
      *(undefined4 *)(param_1 + -0x58) = *(undefined4 *)(param_2 + -0x58);
      *(undefined4 *)(param_1 + -0x50) = *(undefined4 *)(param_2 + -0x50);
      *(undefined8 *)(param_1 + -0x38) = 0;
      *(undefined8 *)(param_1 + -0x48) = 0;
      *(undefined8 *)(param_1 + -0x40) = 0;
      *(undefined8 *)(param_1 + -0x48) = *(undefined8 *)(param_2 + -0x48);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + -0x40));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + -0x40) = uVar1;
      *(undefined8 *)(param_1 + -0x38) = *(undefined8 *)(param_2 + -0x38);
      uVar1 = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(param_1 + -0x30) = *(undefined8 *)(param_2 + -0x30);
      *(undefined8 *)(param_1 + -0x28) = uVar1;
      *(undefined8 *)(param_1 + -0x20) = *(undefined8 *)(param_2 + -0x20);
      *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + -0x18);
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      FUN_14034cca6(param_1,param_2);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
      param_1 = param_1 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


