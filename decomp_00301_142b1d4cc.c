// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b1d4cc FUN_142b1d4cc body=83 status=ok
// SIG undefined FUN_142b1d4cc(void)

undefined8 * FUN_142b1d4cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a1761b0;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1d520 FUN_142b1d520 body=170 status=ok
// SIG undefined FUN_142b1d520(void)

void FUN_142b1d520(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe50);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  FUN_142b28024();
  uVar4 = (ulonglong)*(int *)(*(longlong *)(param_1[1] + 0x20) + 8);
  if (0 < (longlong)uVar4) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1[3] + 0x10);
      if (lVar3 == 0) {
        lVar3 = param_1[3];
      }
      if ((*(uint *)(lVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1) != 0) {
        if ((*(char *)(*param_1 + 0x299) != '\0') || ((DAT_14c872bd8 & 1) != 0)) break;
        lVar3 = *(longlong *)(*(longlong *)(*param_1 + 200) + uVar5 * 8);
        if (lVar3 != 0) {
          FUN_1406b6966(lVar3 + 0x28);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  *piVar1 = iVar2;
  return;
}



// FUNCTION 142b1d5d4 FUN_142b1d5d4 body=29 status=ok
// SIG undefined FUN_142b1d5d4(void)

void FUN_142b1d5d4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b1d5f2 FUN_142b1d5f2 body=121 status=ok
// SIG undefined FUN_142b1d5f2(void)

undefined8 * FUN_142b1d5f2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a1761d0;
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1d68c FUN_142b1d68c body=87 status=ok
// SIG undefined FUN_142b1d68c(void)

void FUN_142b1d68c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-1];
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b1d6e4 FUN_142b1d6e4 body=208 status=ok
// SIG undefined FUN_142b1d6e4(void)

void FUN_142b1d6e4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
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



// FUNCTION 142b1d7b4 FUN_142b1d7b4 body=11 status=ok
// SIG undefined FUN_142b1d7b4(void)

void FUN_142b1d7b4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 142b1d7c0 FUN_142b1d7c0 body=248 status=ok
// SIG undefined FUN_142b1d7c0(void)

void FUN_142b1d7c0(longlong param_1,int param_2)

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



// FUNCTION 142b1d8b8 FUN_142b1d8b8 body=58 status=ok
// SIG undefined FUN_142b1d8b8(void)

undefined8 FUN_142b1d8b8(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = *param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(lVar2 + 0x20);
    *(undefined8 **)(lVar2 + 0x20) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  return uVar4;
}



// FUNCTION 142b1d908 FUN_142b1d908 body=29 status=ok
// SIG undefined FUN_142b1d908(void)

undefined8 FUN_142b1d908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1d926 FUN_142b1d926 body=86 status=ok
// SIG undefined FUN_142b1d926(void)

void FUN_142b1d926(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar5);
      if (puVar2 != (undefined8 *)0x0) {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar2 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar2;
        }
        FUN_14158b496(puVar2 + 6,puVar4,0);
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 142b1d992 FUN_142b1d992 body=69 status=ok
// SIG undefined FUN_142b1d992(void)

undefined8 * FUN_142b1d992(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a176290;
  FUN_140f6e7ef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1d9d8 FUN_142b1d9d8 body=91 status=ok
// SIG undefined FUN_142b1d9d8(void)

undefined8 FUN_142b1d9d8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142b1da3d FUN_142b1da3d body=522 status=ok
// SIG undefined FUN_142b1da3d(void)

void FUN_142b1da3d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x110);
    do {
      FUN_142b1dc47(plVar1[0xb],(int)plVar1[0xc]);
      if (plVar1[0xb] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + 9) = 0;
      if (plVar1[8] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_14472eb64(plVar1,0);
      }
      plVar1[6] = 0xffffffff;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + 0x2c)) {
        *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x80;
        FUN_1446efbd8(plVar1 + 2,0);
      }
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -5) = 0;
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0xd) = 0;
      if (*(int *)((longlong)plVar1 + -100) != 0) {
        FUN_14472eb64(plVar1 + -0xe,0);
      }
      plVar1[-8] = 0xffffffff;
      *(undefined4 *)(plVar1 + -9) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + -0x44)) {
        *(undefined4 *)((longlong)plVar1 + -0x44) = 0x80;
        FUN_1446efbd8(plVar1 + -0xc,0);
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xe] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x14] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -0x15) = 0;
      if (plVar1[-0x16] != 0) {
        FUN_1400020a8();
      }
      FUN_14709b8b2(plVar1 + -0x1e);
      if (plVar1[-0x20] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x2f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b1dc47 FUN_142b1dc47 body=344 status=ok
// SIG undefined FUN_142b1dc47(void)

void FUN_142b1dc47(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xd8;
    do {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_1400020a8();
      }
      FUN_142b1dd9f(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1400020a8();
      }
      FUN_142b1ddec(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_140a6c8c0(param_1 + 0x20);
      FUN_140a6c8c0(param_1);
      FUN_140a6c8c0(param_1 + -0x20);
      FUN_140a6c8c0(param_1 + -0x40);
      FUN_140a6c8c0(param_1 + -0x60);
      if (*(longlong *)(param_1 + -0x90) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0xa0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0xb0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0xc0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0xd0) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x1c0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b1dd9f FUN_142b1dd9f body=77 status=ok
// SIG undefined FUN_142b1dd9f(void)

void FUN_142b1dd9f(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      FUN_142b1ddec(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0xc) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b1ddec FUN_142b1ddec body=51 status=ok
// SIG undefined FUN_142b1ddec(void)

void FUN_142b1ddec(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142b1de1f FUN_142b1de1f body=200 status=ok
// SIG undefined FUN_142b1de1f(void)

void FUN_142b1de1f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 142b1dee8 FUN_142b1dee8 body=366 status=ok
// SIG undefined FUN_142b1dee8(void)

void FUN_142b1dee8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x178;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142b1df7d;
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
LAB_142b1df7d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x178)) {
    uVar7 = uVar5 / 0x178 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x178,8);
  return;
}



// FUNCTION 142b1e056 FUN_142b1e056 body=384 status=ok
// SIG undefined FUN_142b1e056(void)

ulonglong FUN_142b1e056(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar7 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x178)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar7 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar6 = uVar6 * 0x178;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar7 = uVar6 + 0xf;
          if (uVar3 < 0x58) {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
          }
          else {
            if ((uVar7 & 0x1fffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
              uVar8 = 0x32;
              if (0x32 < bVar2) {
                uVar8 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_142b1e0fd;
                lVar1 = uVar8 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar6 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar6 = (ulonglong)DAT_14c841df8;
            }
            uVar6 = -uVar6 & ((uVar7 & 0x1fffffffff0) + uVar6) - 1;
          }
        }
        else {
          uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_142b1e0fd:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar6 >> 3;
      uVar7 = SUB168(auVar4 * ZEXT816(0x2b9310572620ae4d),0);
      uVar6 = (uVar6 >> 3) / 0x2f;
    }
    if ((int)uVar6 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar6;
      uVar7 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar6,0x178,8);
    }
  }
  return uVar7;
}



// FUNCTION 142b1e1d6 FUN_142b1e1d6 body=29 status=ok
// SIG undefined FUN_142b1e1d6(void)

undefined8 FUN_142b1e1d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b1e208 FUN_142b1e208 body=85 status=ok
// SIG undefined FUN_142b1e208(void)

void FUN_142b1e208(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176ba0;
  return;
}



// FUNCTION 142b1e25e FUN_142b1e25e body=85 status=ok
// SIG undefined FUN_142b1e25e(void)

void FUN_142b1e25e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a176ba0;
  return;
}



// FUNCTION 142b1e2b4 FUN_142b1e2b4 body=118 status=ok
// SIG undefined FUN_142b1e2b4(void)

void FUN_142b1e2b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a176ba0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b1e31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b1e332 FUN_142b1e332 body=19 status=ok
// SIG undefined FUN_142b1e332(void)

undefined1 FUN_142b1e332(undefined8 param_1,undefined8 param_2)

{
  FUN_142b1e346(param_2);
  return 1;
}



// FUNCTION 142b1e346 FUN_142b1e346 body=4873 status=ok
// SIG undefined FUN_142b1e346(void)

void FUN_142b1e346(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *****ppppplVar3;
  longlong ****pppplVar4;
  void *pvVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong *****ppppplVar9;
  ulonglong *puVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined2 local_478;
  undefined1 local_476;
  undefined8 local_470;
  wchar_t *local_468;
  undefined4 local_460;
  byte *local_458;
  longlong *local_450;
  longlong local_448;
  undefined8 uStack_440;
  ulonglong *local_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  uint uStack_410;
  uint uStack_40c;
  longlong ****local_408;
  undefined8 uStack_400;
  longlong *local_3f8;
  ulonglong local_3f0;
  undefined8 local_3e8;
  longlong *plStack_3e0;
  int iStack_3d8;
  int iStack_3d4;
  longlong local_3d0 [3];
  undefined8 uStack_3b8;
  undefined2 *local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_390;
  undefined7 uStack_38f;
  longlong local_370;
  undefined8 local_358;
  ulonglong **local_350;
  undefined8 local_348;
  undefined1 local_340 [24];
  undefined8 local_328;
  longlong *plStack_320;
  undefined8 *local_318;
  undefined8 local_310;
  undefined8 *local_300;
  wchar_t **local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  undefined2 **ppuStack_2e0;
  undefined8 *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  undefined8 local_278;
  ulonglong uStack_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  undefined1 local_208;
  undefined8 local_200;
  longlong *plStack_1f8;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  longlong local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined2 *local_178;
  longlong lStack_170;
  undefined8 uStack_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  longlong local_110;
  undefined4 local_108;
  undefined1 local_100;
  wchar_t *local_f8;
  ulonglong auStack_f0 [4];
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  lVar16 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_438 = (ulonglong *)0x0;
  uStack_430 = 0;
  if (0 < (int)param_1[1]) {
    if (DAT_14c9a1ab0 != 0) {
      puVar13 = (undefined8 *)*param_1;
      if (*(int *)(puVar13 + 1) == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)*puVar13;
      }
      lVar18 = 0;
      while( true ) {
        uVar20 = *(ushort *)((longlong)puVar15 + lVar18);
        uVar14 = (ulonglong)uVar20;
        uVar21 = *(ushort *)((longlong)L"stores" + lVar18);
        if (uVar20 != uVar21) break;
        if (uVar20 == 0) goto LAB_142b1e419;
LAB_142b1e3cd:
        lVar18 = lVar18 + 2;
      }
      if ((uVar21 | uVar20) < 0x80) {
        uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        uVar22 = (ulonglong)uVar21;
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar22]) goto LAB_142b1e3cd;
      }
      if (uVar20 != uVar21) {
        local_448 = 0;
        uStack_440 = 0;
        if (*(int *)(puVar13 + 1) == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        else {
          puVar15 = (undefined2 *)*puVar13;
        }
        cVar7 = FUN_14158b496(&local_448,puVar15,0);
        uVar14 = uStack_440;
        lVar16 = local_448;
        if (cVar7 != '\0') {
          lVar16 = (longlong)(int)uStack_440;
          uVar8 = (int)uStack_440 + 1;
          uStack_440 = CONCAT44(uStack_440._4_4_,uVar8);
          if (uStack_440._4_4_ < uVar8) {
            FUN_1447403be(&local_448,uVar14 & 0xffffffff);
          }
          *(undefined1 *)(local_448 + lVar16) = 0;
          local_3f8 = (longlong *)0x0;
          local_408 = (longlong ****)0x0;
          uStack_400 = 0;
          local_3f0 = 0xf;
          FUN_1401d7cf8(&local_408,local_448);
          local_468 = L"UnspecifiedFile";
          local_460 = 0xf;
          local_478 = 0x101;
          local_476 = 0;
          local_470 = 0;
          local_3e8 = (undefined **)&local_408;
          if (0xf < local_3f0) {
            local_3e8 = (undefined **)local_408;
          }
          plStack_3e0 = local_3f8;
          FUN_141183efe(&local_458,&local_3e8,&local_478,&local_468);
          if ((local_458 != (byte *)0x0) && ((*local_458 & 0x6b) == 3)) {
            iVar17 = (int)CONCAT71((int7)((ulonglong)&local_458 >> 8),3);
            if (1 < (int)param_1[1]) {
              if (*(int *)(*param_1 + 0x18) == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = *(wchar_t **)(*param_1 + 0x10);
              }
              iVar17 = _wtoi(pwVar12);
            }
            uVar14 = uStack_430 >> 0x20;
            uStack_430 = uStack_430 & 0xffffffff00000000;
            if ((int)uVar14 != 0) {
              FUN_144893a1c(&local_438,0);
            }
            if (((DAT_14c9a1ab0 != 0) && (local_458 != (byte *)0x0)) &&
               ((*local_458 & 0x68) == 0 && (*local_458 & 3) != 0)) {
              auStack_f0[0] = 0;
              auStack_f0[1] = 0;
              auStack_f0[2] = 0;
              auStack_f0[3] = 0xf;
              local_d0 = 0;
              local_98 = 0;
              local_90 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = 0;
              local_70 = 0;
              local_68 = 0;
              uVar8 = 0x1000fff;
              if (DAT_14c9a1130 == '\0') {
                uVar8 = 0;
              }
              local_f8 = (wchar_t *)(ulonglong)uVar8;
              FUN_147093874(&local_f8,0);
              local_178 = (undefined2 *)((ulonglong)local_178 & 0xffffffff00000000);
              local_130 = 0;
              local_128 = 0;
              lStack_170 = 0;
              uStack_168 = 0;
              local_160 = 0;
              uStack_158 = 0;
              local_150 = 0;
              uStack_148 = 0;
              local_124 = 0xffffffff00000080;
              local_11c = 0;
              local_110 = 0;
              local_108 = 0;
              local_100 = 0;
              FUN_147093c7a(&local_178,0xffff);
              local_1e8 = (ulonglong *)((ulonglong)local_1e8._4_4_ << 0x20);
              local_1b0 = 0;
              local_1a8 = 0;
              uStack_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              uStack_1c8 = 0;
              local_1a4 = 0xffffffff00000080;
              local_19c = 0;
              local_190 = 0;
              local_188 = 0;
              local_180 = 0;
              FUN_1470941b4(&local_1e8,&DAT_14c9485f0);
              local_2f0 = &local_278;
              local_278 = (ulonglong)local_278._4_4_ << 0x20;
              local_238 = 0;
              local_230 = 0;
              uStack_270 = 0;
              local_268 = 0;
              local_260 = 0;
              uStack_258 = 0;
              local_250 = 0;
              local_22c = 0xffffffff00000080;
              local_224 = 0;
              local_218 = 0;
              local_210 = 0;
              local_208 = 0;
              local_200 = 0;
              plStack_1f8 = (longlong *)0x0;
              local_300 = &local_428;
              local_428 = 0;
              uStack_420 = 0;
              local_2a8 = 0;
              local_2a0 = 0;
              local_2e8 = 0;
              uStack_2d0 = 0;
              local_2c8 = 0;
              uStack_2c0 = 0;
              local_29c = 0xffffffff00000080;
              local_294 = 0;
              local_288 = 0;
              local_280 = 0;
              local_2f8 = &local_f8;
              ppuStack_2e0 = &local_178;
              local_2d8 = &local_1e8;
              lVar16 = FUN_14709345c(&local_300,&local_458,1);
              if (lVar16 != 0) {
                local_418 = (ulonglong)CONCAT14((char)iVar17,0x44434e01);
                local_318 = (undefined8 *)0x0;
                local_310 = 0x8000000000;
                FUN_147092a64(&local_f8,&local_328);
                FUN_147092cd4(&local_278,&local_328);
                FUN_147092dae(&local_178,&local_328);
                FUN_147092fde(&local_1e8,&local_328);
                FUN_147093d6a(&local_300,lVar16,&local_328);
                FUN_147092179(&local_328,0x20);
                iVar23 = (int)local_310 + 7;
                if (-1 < (int)local_310) {
                  iVar23 = (int)local_310;
                }
                uStack_410 = iVar23 >> 3;
                uVar14 = (ulonglong)uStack_410;
                uStack_40c = uStack_410;
                if ((char)iVar17 == '\0') {
                  FUN_140393c76(&local_438,uStack_410 + 0x10,1);
                  *local_438 = local_418;
                  local_438[1] = CONCAT44(uStack_40c,uStack_410);
                  puVar13 = &local_328;
                  if (local_318 != (undefined8 *)0x0) {
                    puVar13 = local_318;
                  }
                  memcpy(local_438 + 2,puVar13,uVar14);
                }
                else {
                  puVar13 = &local_328;
                  if (local_318 != (undefined8 *)0x0) {
                    puVar13 = local_318;
                  }
                  FUN_1467fe818(&local_3e8,puVar13,uVar14);
                  local_488 = 0;
                  FUN_1467a8b50(local_340,&local_3e8,iVar17,8);
                  ppppplVar9 = (longlong *****)local_3e8;
                  if ((longlong *****)local_3e8 != (longlong *****)0x0) {
                    LOCK();
                    ppppplVar3 = (longlong *****)(local_3e8 + 3);
                    pppplVar4 = *ppppplVar3;
                    *ppppplVar3 = (longlong ****)((longlong)*ppppplVar3 + -1);
                    UNLOCK();
                    if (((uint)pppplVar4 & 0x3fffffff) == 1) {
                      (*(code *)(*ppppplVar9)[2])(ppppplVar9);
                      ppppplVar9[1] = (longlong ****)0x0;
                      ppppplVar9[2] = (longlong ****)0x0;
                      LOCK();
                      ppppplVar3 = ppppplVar9 + 3;
                      pppplVar4 = *ppppplVar3;
                      *ppppplVar3 = *ppppplVar3 + -0x8000000;
                      UNLOCK();
                      if (((ulonglong)pppplVar4 & 0xfffffffc0000000) == 0x40000000) {
                        (*(code *)**ppppplVar9)(ppppplVar9);
                      }
                    }
                  }
                  uStack_40c = FUN_1467fdf84(local_340);
                  memset(&local_3e8,0,0x90);
                  FUN_144869430(&local_3e8);
                  local_358 = 0;
                  local_3e8 = &PTR_FUN_149e1e590;
                  local_350 = &local_438;
                  local_348 = 0;
                  local_3d0[2] = local_3d0[2] | 4;
                  FUN_1449c2eca(&local_3e8,0);
                  (*(code *)local_3e8[0x2e])(&local_3e8,&local_418,0x10);
                  FUN_1467a9214(&local_3e8,local_340);
                  local_3e8 = &PTR__purecall_149e35f70;
                  plVar6 = (longlong *)CONCAT71(uStack_38f,local_390);
                  if (plVar6 != (longlong *)0x0) {
                    if (*plVar6 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(plVar6);
                  }
                  if (local_370 != 0) {
                    if (*(longlong *)(local_370 + 0x40) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1400020a8(local_370);
                  }
                  FUN_1458cf622(local_340);
                }
                if (local_318 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_280 = 0;
              if (local_288 != 0) {
                FUN_1400020a8();
              }
              FUN_142b1be38(&local_2c8);
              FUN_1470942a8(&local_428);
              plVar6 = plStack_1f8;
              if (plStack_1f8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_1f8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_1f8)(plStack_1f8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 8))(plVar6);
                  }
                }
              }
              local_210 = 0;
              if (local_218 != 0) {
                FUN_1400020a8();
              }
              FUN_140201ac2(&uStack_258);
              if (local_268 != 0) {
                FUN_1400020a8();
              }
              local_188 = 0;
              if (local_190 != 0) {
                FUN_1400020a8();
              }
              FUN_140c64cae(&local_1d0);
              FUN_1456d172d(uStack_1e0,local_1d8 & 0xffffffff);
              if (uStack_1e0 != 0) {
                FUN_1400020a8();
              }
              local_108 = 0;
              if (local_110 != 0) {
                FUN_1400020a8();
              }
              FUN_140bf8cc0(&local_150);
              if (local_160 != 0) {
                FUN_1400020a8();
              }
              if (lStack_170 != 0) {
                FUN_1400020a8();
              }
              local_70 = 0;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_1409da246(&local_b8);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              FUN_1401d9a90(auStack_f0);
              if (lVar16 != 0) {
                local_3e8 = (undefined **)0x0;
                plStack_3e0 = (longlong *)0x0;
                cVar7 = FUN_1458248ec(&local_438);
                if ((cVar7 == '\0') || ((longlong *****)local_3e8 == (longlong *****)0x0)) {
                  pwVar12 = (wchar_t *)0x0;
                }
                else {
                  FUN_14709c5ae(local_3e8,&local_f8,0);
                  pwVar12 = local_f8;
                }
                uVar14 = uStack_430 >> 0x20;
                uStack_430 = uStack_430 & 0xffffffff00000000;
                if ((int)uVar14 != 0) {
                  FUN_144893a1c(&local_438,0);
                }
                plVar6 = plStack_3e0;
                if (plStack_3e0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_3e0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_3e0)(plStack_3e0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                if (pwVar12 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar12);
                }
              }
            }
          }
          if (local_450 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_450 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_450)(local_450);
              LOCK();
              piVar2 = (int *)((longlong)local_450 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_450 + 0x10))(local_450);
              }
            }
          }
          FUN_1401d9a90(&local_408);
          lVar16 = local_448;
        }
        goto LAB_142b1ee0b;
      }
LAB_142b1e419:
      local_278 = 0;
      uStack_270 = 0;
      if ((int)param_1[1] == 1) {
        FUN_140056680(&local_300,&DAT_14a176c16);
      }
      else {
        local_300 = (undefined8 *)0x0;
        uVar8 = *(uint *)(puVar13 + 3);
        pvVar5 = (void *)puVar13[2];
        local_2f8 = (wchar_t **)CONCAT44(local_2f8._4_4_,uVar8);
        if ((longlong)(int)uVar8 == 0) {
          local_2f8 = (wchar_t **)(ulonglong)uVar8;
        }
        else {
          FUN_1446dd670(&local_300,uVar8,0);
          memcpy(local_300,pvVar5,(longlong)(int)uVar8 * 2);
        }
      }
      FUN_140056680(&local_3e8,&DAT_14a176c16);
      ppppplVar9 = (longlong *****)local_3e8;
      if ((int)plStack_3e0 == 0) {
        ppppplVar9 = (longlong *****)&DAT_149dfb77a;
      }
      puVar13 = (undefined8 *)&DAT_149dfb77a;
      if ((int)local_2f8 != 0) {
        puVar13 = local_300;
      }
      lVar18 = 0;
      while( true ) {
        uVar20 = *(ushort *)((longlong)puVar13 + lVar18);
        uVar8 = (uint)uVar20;
        uVar21 = *(ushort *)((longlong)ppppplVar9 + lVar18);
        uVar19 = (uint)uVar21;
        if (uVar20 != uVar21) {
          if ((uVar21 | uVar20) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar20];
            uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21]) goto LAB_142b1e4e7;
          }
          iVar17 = uVar8 - uVar19;
          goto LAB_142b1e519;
        }
        if (uVar20 == 0) break;
LAB_142b1e4e7:
        lVar18 = lVar18 + 2;
      }
      iVar17 = 0;
LAB_142b1e519:
      if ((longlong *****)local_3e8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (iVar17 == 0) {
        FUN_14709481a(&local_278);
      }
      else {
        local_f8 = (wchar_t *)0x0;
        auStack_f0[0] = 0;
        FUN_1403de9f2(&local_300,&local_f8,&DAT_149e06196,1);
        uVar14 = 0;
        if ((longlong)(int)auStack_f0[0] != 0) {
          lVar18 = (longlong)(int)auStack_f0[0] << 4;
          pwVar12 = local_f8;
          do {
            FUN_14000bbd8(&local_3e8,pwVar12,0);
            FUN_1457bb43a(&local_278,&local_3e8);
            if (local_3d0[0] != 0) {
              FUN_1400020a8();
            }
            pwVar12 = pwVar12 + 8;
            lVar18 = lVar18 + -0x10;
          } while (lVar18 != 0);
          uVar14 = auStack_f0[0] & 0xffffffff;
        }
        FUN_1447a1747(local_f8,uVar14);
        if (local_f8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      ppppplVar9 = (longlong *****)local_3e8;
      local_3e8 = (undefined **)CONCAT53(local_3e8._3_5_,0x10803);
      uVar11 = local_3e8;
      local_3e8._6_2_ = SUB82(ppppplVar9,6);
      local_3e8._0_4_ = (uint)uVar11;
      local_3e8._0_6_ = (uint6)(uint)local_3e8;
      plStack_3e0 = (longlong *)0x0;
      iStack_3d8 = -1;
      iStack_3d4 = -1;
      local_3d0[0] = 0;
      local_3d0[1] = 0;
      local_3d0[2] = 0;
      uStack_3b8 = 0;
      local_3b0 = &DAT_14a171d50;
      local_3a8 = lVar16 + 0x398;
      local_3a0 = 0;
      uStack_398 = 0;
      local_390 = 0;
      local_178 = (undefined2 *)0x0;
      lStack_170 = 0;
      if (2 < (int)param_1[1]) {
        lVar16 = 2;
        do {
          local_f8 = (wchar_t *)0x0;
          uVar8 = *(uint *)(*param_1 + 8 + lVar16 * 0x10);
          pvVar5 = *(void **)(*param_1 + lVar16 * 0x10);
          auStack_f0[0] = CONCAT44(auStack_f0[0]._4_4_,uVar8);
          if ((longlong)(int)uVar8 == 0) {
            auStack_f0[0] = (ulonglong)uVar8;
          }
          else {
            FUN_1446dd670(&local_f8,uVar8,0);
            memcpy(local_f8,pvVar5,(longlong)(int)uVar8 * 2);
          }
          cVar7 = FUN_140c540b4(&local_f8,L"out_path=",9,1);
          if (cVar7 == '\0') {
            cVar7 = FUN_140c540b4(&local_f8,L"path=",5,1);
            uVar14 = uStack_3b8;
            if (cVar7 == '\0') {
              cVar7 = FUN_140c540b4(&local_f8,L"rev_min=",8,1);
              if (cVar7 == '\0') {
                cVar7 = FUN_140c540b4(&local_f8,L"rev_max=",8,1);
                if (cVar7 == '\0') {
                  cVar7 = FUN_140c540b4(&local_f8,L"layers=",7,1);
                  if (cVar7 == '\0') {
                    cVar7 = FUN_140c540b4(&local_f8,L"build_tags=",0xb,1);
                    if (cVar7 == '\0') {
                      cVar7 = FUN_140c540b4(&local_f8,L"build_tag_op=",0xd,1);
                      if (cVar7 == '\0') {
                        FUN_140056680(&local_1e8,L"includeeditortestcontent");
                        puVar10 = local_1e8;
                        if ((int)uStack_1e0 == 0) {
                          puVar10 = (ulonglong *)&DAT_149dfb77a;
                        }
                        pwVar12 = L"";
                        if ((int)auStack_f0[0] != 0) {
                          pwVar12 = local_f8;
                        }
                        lVar18 = 0;
                        while( true ) {
                          uVar20 = *(ushort *)((longlong)pwVar12 + lVar18);
                          uVar8 = (uint)uVar20;
                          uVar21 = *(ushort *)((longlong)puVar10 + lVar18);
                          uVar19 = (uint)uVar21;
                          if (uVar20 != uVar21) {
                            if ((uVar21 | uVar20) < 0x80) {
                              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                              uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                              if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21])
                              goto LAB_142b1eaed;
                            }
                            iVar17 = uVar8 - uVar19;
                            goto LAB_142b1ebc1;
                          }
                          if (uVar20 == 0) break;
LAB_142b1eaed:
                          lVar18 = lVar18 + 2;
                        }
                        iVar17 = 0;
LAB_142b1ebc1:
                        if (local_1e8 != (ulonglong *)0x0) {
                          FUN_1400020a8();
                        }
                        if (iVar17 != 0) {
                          local_3e8._0_5_ = CONCAT14(1,(uint)local_3e8);
                        }
                      }
                      else {
                        FUN_140056680(&local_1e8,&DAT_14a176ca6);
                        puVar10 = local_1e8;
                        if ((int)uStack_1e0 == 0) {
                          puVar10 = (ulonglong *)&DAT_149dfb77a;
                        }
                        pwVar12 = L"";
                        if ((int)auStack_f0[0] != 0) {
                          pwVar12 = local_f8;
                        }
                        lVar18 = 0;
                        while( true ) {
                          uVar20 = *(ushort *)((longlong)pwVar12 + lVar18);
                          uVar8 = (uint)uVar20;
                          uVar21 = *(ushort *)((longlong)puVar10 + lVar18);
                          uVar19 = (uint)uVar21;
                          if (uVar20 != uVar21) {
                            if ((uVar21 | uVar20) < 0x80) {
                              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                              uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                              if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21])
                              goto LAB_142b1ea63;
                            }
                            iVar17 = uVar8 - uVar19;
                            goto LAB_142b1eb22;
                          }
                          if (uVar20 == 0) break;
LAB_142b1ea63:
                          lVar18 = lVar18 + 2;
                        }
                        iVar17 = 0;
LAB_142b1eb22:
                        if (local_1e8 != (ulonglong *)0x0) {
                          FUN_1400020a8();
                        }
                        if (iVar17 == 0) {
                          local_390 = 0;
                        }
                        else {
                          FUN_140056680(&local_1e8,L"overlap");
                          puVar10 = local_1e8;
                          if ((int)uStack_1e0 == 0) {
                            puVar10 = (ulonglong *)&DAT_149dfb77a;
                          }
                          pwVar12 = L"";
                          if ((int)auStack_f0[0] != 0) {
                            pwVar12 = local_f8;
                          }
                          lVar18 = 0;
                          while( true ) {
                            uVar20 = *(ushort *)((longlong)pwVar12 + lVar18);
                            uVar8 = (uint)uVar20;
                            uVar21 = *(ushort *)((longlong)puVar10 + lVar18);
                            uVar19 = (uint)uVar21;
                            if (uVar20 != uVar21) {
                              if ((uVar21 | uVar20) < 0x80) {
                                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                                uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                                if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21])
                                goto LAB_142b1eb8f;
                              }
                              iVar17 = uVar8 - uVar19;
                              goto LAB_142b1ec07;
                            }
                            if (uVar20 == 0) break;
LAB_142b1eb8f:
                            lVar18 = lVar18 + 2;
                          }
                          iVar17 = 0;
LAB_142b1ec07:
                          if (local_1e8 != (ulonglong *)0x0) {
                            FUN_1400020a8();
                          }
                          if (iVar17 == 0) {
                            local_390 = 1;
                          }
                          else {
                            FUN_140056680(&local_1e8,L"exact");
                            puVar10 = local_1e8;
                            if ((int)uStack_1e0 == 0) {
                              puVar10 = (ulonglong *)&DAT_149dfb77a;
                            }
                            pwVar12 = L"";
                            if ((int)auStack_f0[0] != 0) {
                              pwVar12 = local_f8;
                            }
                            lVar18 = 0;
                            while( true ) {
                              uVar20 = *(ushort *)((longlong)pwVar12 + lVar18);
                              uVar8 = (uint)uVar20;
                              uVar21 = *(ushort *)((longlong)puVar10 + lVar18);
                              uVar19 = (uint)uVar21;
                              if (uVar20 != uVar21) {
                                if ((uVar21 | uVar20) < 0x80) {
                                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar20];
                                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                                  if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21])
                                  goto LAB_142b1ec74;
                                }
                                iVar17 = uVar8 - uVar19;
                                goto LAB_142b1ecb3;
                              }
                              if (uVar20 == 0) break;
LAB_142b1ec74:
                              lVar18 = lVar18 + 2;
                            }
                            iVar17 = 0;
LAB_142b1ecb3:
                            if (local_1e8 != (ulonglong *)0x0) {
                              FUN_1400020a8();
                            }
                            if (iVar17 == 0) {
                              local_390 = 2;
                            }
                          }
                        }
                      }
                      goto LAB_142b1e85b;
                    }
                    local_1e8 = (ulonglong *)0x0;
                    uStack_1e0 = 0;
                    FUN_1403de9f2(&local_f8,&local_1e8,&DAT_149e06196,1);
                    puVar10 = local_1e8;
                    lVar18 = (longlong)(int)uStack_1e0;
                    if (lVar18 == 0) {
                      uVar14 = 0;
                    }
                    else {
                      lVar24 = 0;
                      do {
                        puVar15 = &DAT_149dfb77a;
                        if (*(int *)((longlong)puVar10 + lVar24 + 8) != 0) {
                          puVar15 = *(undefined2 **)((longlong)puVar10 + lVar24);
                        }
                        FUN_1446f470e(&local_408,puVar15);
                        if (local_3a8 != 0) {
                          local_328 = 0;
                          FUN_1405593a8(local_3a8,&local_328);
                          (**(code **)(local_3b0 + 4))(&local_3b0,&local_328);
                        }
                        lVar24 = lVar24 + 0x10;
                      } while (lVar18 * 0x10 != lVar24);
                      uVar14 = uStack_1e0 & 0xffffffff;
                    }
                  }
                  else {
                    local_1e8 = (ulonglong *)0x0;
                    uStack_1e0 = 0;
                    FUN_1403de9f2(&local_f8,&local_1e8,&DAT_149e06196,1);
                    FUN_140b7fa3a(local_3d0,&local_1e8);
                    uVar14 = uStack_1e0 & 0xffffffff;
                  }
                  FUN_1447a1747(local_1e8,uVar14);
                  if (local_1e8 != (ulonglong *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  pwVar12 = L"";
                  if ((int)auStack_f0[0] != 0) {
                    pwVar12 = local_f8;
                  }
                  iStack_3d4 = _wtoi(pwVar12);
                }
              }
              else {
                pwVar12 = L"";
                if ((int)auStack_f0[0] != 0) {
                  pwVar12 = local_f8;
                }
                iStack_3d8 = _wtoi(pwVar12);
              }
            }
            else {
              lVar18 = (longlong)(int)uStack_3b8;
              uVar8 = (int)uStack_3b8 + 1;
              uStack_3b8 = CONCAT44(uStack_3b8._4_4_,uVar8);
              if (uStack_3b8._4_4_ < uVar8) {
                FUN_1447a1bd6(local_3d0 + 2,uVar14 & 0xffffffff);
              }
              pwVar12 = local_f8;
              lVar18 = lVar18 * 0x10;
              puVar13 = (undefined8 *)(local_3d0[2] + lVar18);
              *(undefined8 *)(local_3d0[2] + lVar18) = 0;
              lVar24 = (longlong)(int)auStack_f0[0];
              *(int *)(local_3d0[2] + 8U + lVar18) = (int)auStack_f0[0];
              if (lVar24 == 0) {
                *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(puVar13,auStack_f0[0] & 0xffffffff,0);
                memcpy((void *)*puVar13,pwVar12,lVar24 * 2);
              }
            }
          }
          else {
            FUN_1402980a2(&local_178,local_f8);
          }
LAB_142b1e85b:
          if (local_f8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)param_1[1]);
      }
      FUN_147094604(&local_278,&local_438,&local_3e8);
      if (1 < (int)lStack_170) {
        uVar11 = FUN_14054d1d4();
        puVar15 = local_178;
        if ((int)lStack_170 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        local_1e8 = local_438;
        uStack_1e0 = (ulonglong)(int)uStack_430;
        FUN_146810d90(&local_1e8,puVar15,uVar11,0);
      }
      auStack_f0[0] = 0;
      auStack_f0[1] = 0;
      auStack_f0[2] = CONCAT35(auStack_f0[2]._5_3_,0x1b8d1b717);
      local_f8 = (wchar_t *)((ulonglong)local_f8 & 0xffffff0000000000);
      local_328 = 0;
      plStack_320 = (longlong *)0x0;
      FUN_1411841d4(&local_438,&local_f8,0,&local_328);
      plVar6 = plStack_320;
      if (plStack_320 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_320 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_320)(plStack_320);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (auStack_f0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_178 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14709494c(&local_3e8);
      if (local_300 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1456d172d(local_278,uStack_270 & 0xffffffff);
      lVar16 = local_278;
LAB_142b1ee0b:
      if (lVar16 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_438 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b1f650 FUN_142b1f650 body=4468 status=ok
// SIG undefined FUN_142b1f650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b1f650(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_74 [4];
  wchar_t *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = L"AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a0920 = (ulonglong)uVar2;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a1725f0,1,&PTR_FUN_14a1725a0);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a172e80,1,&PTR_FUN_14a172e30);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 3;
  FUN_14282b410(L"/Script/GbxNexus",0,0,&PTR_FUN_14a173480);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a173cc0,1,&PTR_FUN_14a173c70);
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxNexus",&PTR_FUN_14a174240,1,&PTR_FUN_14a174210);
  local_70 = L"nexus";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  DAT_14c9a0a78 = (ulonglong)uVar2;
  local_70 = (wchar_t *)((ulonglong)local_70 & 0xffffffff00000000);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9a0a80,L"gbx.Nexus.ParseLogLevel",&local_70,
                L"The log level when the nexus gather finds: 0 = Always Warning, 1 = Errors for Build Machine, Warning otherwise, 2 = Always Error"
               );
  atexit(FUN_142b14b6c);
  local_70 = (wchar_t *)((ulonglong)local_70 & 0xffffffff00000000);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9a0a98,L"gbx.Nexus.AsyncApply",&local_70,
                L"Whether the Nexus gather is able to apply it\'s results asynchronously.");
  atexit(FUN_142b14bb1);
  ram0x00014c9a0ab4 = 0;
  FUN_14052b5e0(&DAT_14c9a0ab0,"build_tags",0);
  _DAT_14c9a0ac0 = "build_tags";
  ram0x00014c9a0acc = 0;
  FUN_14052b5e0(&DAT_14c9a0ac8,"remove_build_tags",0);
  _DAT_14c9a0ad8 = "remove_build_tags";
  ram0x00014c9a0ae4 = 0;
  FUN_14052b5e0(&DAT_14c9a0ae0,"content_tags",0);
  _DAT_14c9a0af0 = "content_tags";
  ram0x00014c9a0afc = 0;
  FUN_14052b5e0(&DAT_14c9a0af8,"remove_content_tags",0);
  _DAT_14c9a0b08 = "remove_content_tags";
  ram0x00014c9a0b14 = 0;
  FUN_14052b5e0(&DAT_14c9a0b10,"load_context_tags",0);
  _DAT_14c9a0b20 = "load_context_tags";
  _DAT_14c9a0b2c = 0;
  FUN_14052b5e0(&DAT_14c9a0b28,"chunk_id",0);
  _DAT_14c9a0b38 = "chunk_id";
  _DAT_14c9a0b44 = 0;
  FUN_14052b5e0(&DAT_14c9a0b40,"chunk_id_forced",0);
  _DAT_14c9a0b50 = "chunk_id_forced";
  ram0x00014c9a0b5c = 0;
  FUN_14052b5e0(&DAT_14c9a0b58,"inherit_layers",0);
  _DAT_14c9a0b68 = "inherit_layers";
  ram0x00014c9a0b74 = 0;
  FUN_14052b5e0(&DAT_14c9a0b70,"default_layer",0);
  _DAT_14c9a0b80 = "default_layer";
  ram0x00014c9a0b8c = 0;
  FUN_14052b5e0(&DAT_14c9a0b88,"allow_layers",0);
  _DAT_14c9a0b98 = "allow_layers";
  ram0x00014c9a0ba4 = 0;
  FUN_14052b5e0(&DAT_14c9a0ba0,"remove_allow_layers",0);
  _DAT_14c9a0bb0 = "remove_allow_layers";
  ram0x00014c9a0bbc = 0;
  FUN_14052b5e0(&DAT_14c9a0bb8,"reject_layers",0);
  _DAT_14c9a0bc8 = "reject_layers";
  ram0x00014c9a0bd4 = 0;
  FUN_14052b5e0(&DAT_14c9a0bd0,"remove_reject_layers",0);
  _DAT_14c9a0be0 = "remove_reject_layers";
  ram0x00014c9a0bec = 0;
  FUN_14052b5e0(&DAT_14c9a0be8,"paths",0);
  _DAT_14c9a0bf8 = "paths";
  ram0x00014c9a0c04 = 0;
  FUN_14052b5e0(&DAT_14c9a0c00,&DAT_149ecafea,0);
  _DAT_14c9a0c10 = &DAT_149ecafea;
  ram0x00014c9a0c1c = 0;
  FUN_14052b5e0(&DAT_14c9a0c18,"inherit_tags",0);
  _DAT_14c9a0c28 = "inherit_tags";
  ram0x00014c9a0c34 = 0;
  FUN_14052b5e0(&DAT_14c9a0c30,"recurse",0);
  _DAT_14c9a0c40 = "recurse";
  ram0x00014c9a0c4c = 0;
  FUN_14052b5e0(&DAT_14c9a0c48,"imports",0);
  _DAT_14c9a0c58 = "imports";
  ram0x00014c9a0c64 = 0;
  FUN_14052b5e0(&DAT_14c9a0c60,"import",0);
  _DAT_14c9a0c70 = "import";
  ram0x00014c9a0c7c = 0;
  FUN_14052b5e0(&DAT_14c9a0c78,"target",0);
  _DAT_14c9a0c88 = "target";
  ram0x00014c9a0c94 = 0;
  FUN_14052b5e0(&DAT_14c9a0c90,"build_tags",0);
  _DAT_14c9a0ca0 = "build_tags";
  ram0x00014c9a0cac = 0;
  FUN_14052b5e0(&DAT_14c9a0ca8,"remove_build_tags",0);
  _DAT_14c9a0cb8 = "remove_build_tags";
  ram0x00014c9a0cc4 = 0;
  FUN_14052b5e0(&DAT_14c9a0cc0,"content_tags",0);
  _DAT_14c9a0cd0 = "content_tags";
  ram0x00014c9a0cdc = 0;
  FUN_14052b5e0(&DAT_14c9a0cd8,"remove_content_tags",0);
  _DAT_14c9a0ce8 = "remove_content_tags";
  ram0x00014c9a0cf4 = 0;
  FUN_14052b5e0(&DAT_14c9a0cf0,"load_context_tags",0);
  _DAT_14c9a0d00 = "load_context_tags";
  _DAT_14c9a0d0c = 0;
  FUN_14052b5e0(&DAT_14c9a0d08,"chunk_id",0);
  _DAT_14c9a0d18 = "chunk_id";
  _DAT_14c9a0d24 = 0;
  FUN_14052b5e0(&DAT_14c9a0d20,"chunk_id_forced",0);
  _DAT_14c9a0d30 = "chunk_id_forced";
  ram0x00014c9a0d3c = 0;
  FUN_14052b5e0(&DAT_14c9a0d38,"layer",0);
  _DAT_14c9a0d48 = "layer";
  ram0x00014c9a0d54 = 0;
  FUN_14052b5e0(&DAT_14c9a0d50,"revision",0);
  _DAT_14c9a0d60 = "revision";
  ram0x00014c9a0d6c = 0;
  FUN_14052b5e0(&DAT_14c9a0d68,"priority",0);
  _DAT_14c9a0d78 = "priority";
  ram0x00014c9a0d84 = 0;
  FUN_14052b5e0(&DAT_14c9a0d80,"author",0);
  _DAT_14c9a0d90 = "author";
  ram0x00014c9a0d9c = 0;
  FUN_14052b5e0(&DAT_14c9a0d98,"alert",0);
  _DAT_14c9a0da8 = "alert";
  ram0x00014c9a0db4 = 0;
  FUN_14052b5e0(&DAT_14c9a0db0,"target",0);
  _DAT_14c9a0dc0 = "target";
  ram0x00014c9a0dcc = 0;
  FUN_14052b5e0(&DAT_14c9a0dc8,&DAT_14a176ddc,0);
  _DAT_14c9a0dd8 = &DAT_14a176ddc;
  ram0x00014c9a0de4 = 0;
  FUN_14052b5e0(&DAT_14c9a0de0,"redirect_to",0);
  _DAT_14c9a0df0 = "redirect_to";
  local_70 = (wchar_t *)CONCAT44(local_70._4_4_,100);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9a0df8,L"gbx.Nexus.IngestFileBatchSize",&local_70,
                L"The total file size in KB for each file ingestion task.");
  atexit(FUN_142b159d3);
  FUN_140056680(&DAT_14c9a0e10,&DAT_14a174bcc);
  atexit((_func_5014 *)&LAB_142b15a18);
  FUN_140056680(&DAT_14c9a0e20,&DAT_14a174bd4);
  atexit((_func_5014 *)&LAB_142b15a29);
  DAT_14c9a0e58 = 0;
  DAT_14c9a0e60 = 0;
  DAT_14c9a0e38 = 0;
  _DAT_14c9a0e40 = 0;
  _DAT_14c9a0e64 = 0xffffffff00000080;
  DAT_14c9a0e6c = 0;
  DAT_14c9a0e78 = 0;
  DAT_14c9a0e80 = 0;
  atexit(FUN_142b15a3a);
  _DAT_14c9a0e8c = 0;
  FUN_14052b5e0(&DAT_14c9a0e88,"target",0);
  _DAT_14c9a0e98 = "target";
  DAT_14c9a0ea0 = 0;
  uRam000000014c9a0ea8 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a0eb0);
  ram0x00014c9a0ebc = 0;
  FUN_14052b5e0(&DAT_14c9a0eb8,"StructType",0);
  _DAT_14c9a0ec8 = "StructType";
  local_70 = (wchar_t *)0x800000014a174bf0;
  local_80 = 8;
  local_68 = FUN_14577453c();
  local_64 = 1;
  FUN_1462a2818(&local_70);
  _DAT_14c9a0f30 = 0;
  DAT_14c9a0f38 = 0;
  _DAT_14c9a0f28 = &PTR_FUN_14a1704d0;
  _DAT_14c9a0f68 = 0;
  _DAT_14c9a0f70 = 0;
  _DAT_14c9a0f40 = 0;
  uRam000000014c9a0f48 = 0;
  _DAT_14c9a0f50 = 0;
  _DAT_14c9a0f74 = 0xffffffff00000080;
  _DAT_14c9a0f7c = 0;
  _DAT_14c9a0f88 = 0;
  _DAT_14c9a0f90 = 0;
  _DAT_14c9a0fb8 = 0;
  _DAT_14c9a0fc0 = 0;
  _DAT_14c9a0f98 = 0;
  uRam000000014c9a0fa0 = 0;
  _DAT_14c9a0fc4 = 0xffffffff00000080;
  _DAT_14c9a0fcc = 0;
  _DAT_14c9a0fd8 = 0;
  _DAT_14c9a0fe0 = 0;
  atexit((_func_5014 *)&LAB_142b1608b);
  DAT_14c9a0ff8 = 0;
  _DAT_14c9a1000 = 0;
  atexit((_func_5014 *)&LAB_142b16097);
  _DAT_14c9a1020 = &LAB_142b160a8;
  _DAT_14c9a1028 = 0x42c80000;
  DAT_14c9a102c = 1;
  DAT_14c9a1018 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a1018;
  atexit((_func_5014 *)&LAB_142b160ad);
  DAT_14c9a1038 = (undefined8 *)0x0;
  _DAT_14c9a1040 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0xc00,0);
  lVar5 = 0xf;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 0x18;
    *puVar1 = puVar4;
    lVar5 = lVar5 + -1;
    puVar1 = puVar4;
  } while (lVar5 != 0);
  *puVar4 = DAT_14c9a1038;
  _DAT_14c9a1040 = _DAT_14c9a1040 + 0x10;
  DAT_14c9a1038 = puVar3;
  FUN_1446f470e(&local_80,L"NexusUseMeta",1);
  DAT_14c9a0fec = (wchar_t *)CONCAT44(uStack_7c,local_80);
  DAT_14c9a0fe8 = 1;
  local_70 = DAT_14c9a0fec;
  FUN_1407d0e7d();
  FUN_144a13f80(&DAT_14c9a1210,local_74,&local_70,0);
  FUN_1446f470e(&local_80,L"NexusNoSuperMeta",1);
  DAT_14c9a100c = (wchar_t *)CONCAT44(uStack_7c,local_80);
  DAT_14c9a1008 = 0;
  local_70 = DAT_14c9a100c;
  FUN_1407d0e7d();
  FUN_144a13f80(&DAT_14c9a1210,local_74,&local_70,0);
  FUN_1446f470e(&local_80,L"NexusNonDedicated",1);
  _DAT_14c9a104c = (wchar_t *)CONCAT44(uStack_7c,local_80);
  _DAT_14c9a1048 = 0;
  local_70 = _DAT_14c9a104c;
  FUN_1407d0e7d();
  FUN_144a13f80(&DAT_14c9a1210,local_74,&local_70,0);
  FUN_1446f470e(&local_80,L"NexusServerOnly",1);
  _DAT_14c9a1058 = (wchar_t *)CONCAT44(uStack_7c,local_80);
  _DAT_14c9a1054 = 0;
  local_70 = _DAT_14c9a1058;
  FUN_1407d0e7d();
  FUN_144a13f80(&DAT_14c9a1210,local_74,&local_70,0);
  local_70._0_1_ = 1;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14c9a1060,L"gbx.nexus.EnableNexusConfigDataScratchSpace",&local_70,
                L"Allows the use of a short-lived buffer for temporary nexus config data nodes during nexus initialization"
               );
  atexit(FUN_142b16169);
  local_70._0_1_ = 1;
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14c9a1078,L"gbx.nexus.EnableNexusConfigDataLongLived",&local_70,
                L"Allows allocating relevant nexus config data nodes in the long lived allocator");
  atexit(FUN_142b161ae);
  DAT_14c9a10e0 = 0;
  atexit(FUN_142b161f3);
  _DAT_14c9a12e0 = 0;
  _DAT_14c9a12e8 = 0;
  _DAT_14c9a12f0 = 0;
  DAT_14c9a12f8 = 0;
  uRam000000014c9a1300 = 0;
  atexit((_func_5014 *)&LAB_142b16218);
  DAT_14c9a1270 = 0;
  DAT_14c9a1278 = 0;
  _DAT_14c9a1280 = 0;
  atexit(FUN_142b16229);
  DAT_14c9a1288 = 0;
  DAT_14c9a1290 = 0;
  _DAT_14c9a1298 = 0;
  DAT_14c9a12b0 = 0;
  _DAT_14c9a12b8 = 0x8000000000;
  _DAT_14c9a12c0 = 0xffffffff;
  DAT_14c9a12d0 = 0;
  DAT_14c9a12d8 = 0;
  atexit(FUN_142b16279);
  DAT_14c9a1308 = 0;
  DAT_14c9a1310 = 0;
  atexit(FUN_142b16588);
  local_70 = (wchar_t *)((ulonglong)local_70._1_7_ << 8);
  local_98._0_4_ = 4;
  FUN_140bd5914(&DAT_14c9a10e8,L"gbx.nexus.UseBinaryConfigData",&local_70,
                L"Set to true to use cooked binary ConfigData in standalone builds.");
  atexit(FUN_142b165c3);
  atexit((_func_5014 *)&LAB_142b16608);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a1108);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9a1108,4000);
  atexit((_func_5014 *)&LAB_142b16614);
  FUN_1462a2a4a();
  DAT_14c9a1130 = 1;
  local_70 = (wchar_t *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_70 + 8) = lVar6;
  *(undefined ***)local_70 = &PTR_FUN_14a176ba0;
  local_98 = (ulonglong)local_98._4_4_ << 0x20;
  FUN_14156bb10(&DAT_14c9a1140,L"gbx.nexus.bin_test",L"Dump a store or source or def to binary",
                &local_70);
  if (local_68 != 0) {
    if (local_70 == (wchar_t *)0x0) goto LAB_142b2034c;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_142b2034c:
  atexit(FUN_142b1bca5);
  local_70 = 
  L"xFe0潣浭瑩整d湩捡楴敶瀀牡楴污攀捸畬楳敶䐀䤀瀀獡瑟牨慥彤潬慣彬慣档e慰彳桴敲摡江捯污损捡敨猯潨汵彤瑳灯扟瑩敶瑣牯瀀獡瑟牨慥彤潬慣彬慣档⽥慰敧彳潣浭瑩整d敄污潬慣楴湯氠杯楧杮椠⁳楤慳汢摥映牯┠⽳猥\x202c畢⁴敨敲眠⁥牡⹥\n桳牡摥"
  ;
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1150 = (ulonglong)uVar2;
  local_70 = L"yz慶畬e";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1158 = (ulonglong)uVar2;
  local_70 = L"z慶畬e";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1160 = (ulonglong)uVar2;
  local_70 = 
  L"w楰捴h慹w潲汬琀猀⼀捓楲瑰/敫獹椀瑮牥p慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t"
  ;
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1168 = (ulonglong)uVar2;
  local_70 = L"pitch";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1170 = (ulonglong)uVar2;
  local_70 = 
  L"慹w潲汬琀猀⼀捓楲瑰/敫獹椀瑮牥p慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t"
  ;
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1178 = (ulonglong)uVar2;
  local_70 = 
  L"潲汬琀猀⼀捓楲瑰/敫獹椀瑮牥p慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t"
  ;
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1180 = (ulonglong)uVar2;
  local_70 = L"rInvalid resolution in tiff: zero or negative.";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1188 = (ulonglong)uVar2;
  local_70 = L"g氥⹤氥⁤猥猥匀攀䰀漀挀欀䴀攀洀漀爀礀倀爀椀瘀椀氀攀最攀";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1190 = (ulonglong)uVar2;
  local_70 = L"b搥┠⁳欀洀最─摬┮摬┠╳sSeLockMemoryPrivilege";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1198 = (ulonglong)uVar2;
  local_70 = L"acd噢污敵";
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11a0 = (ulonglong)uVar2;
  local_70 = 
  L"ts匯牣灩⽴欀祥s湩整灲琀湡琀湡睟楥桧t楴敭愀慴n瑡湡睟楥桧t瑬湡氀慴彮敷杩瑨"
  ;
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11a8 = (ulonglong)uVar2;
  local_70 = 
  L"s匯牣灩⽴欀祥s湩整灲琀湡琀湡睟楥桧t楴敭愀慴n瑡湡睟楥桧t瑬湡氀慴彮敷杩瑨"
  ;
  local_68 = 1;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11b0 = (ulonglong)uVar2;
  local_70 = 
  L"敫獹椀瑮牥p慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11c0 = (ulonglong)uVar2;
  local_70 = L"interp";
  local_68 = 6;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11c8 = (ulonglong)uVar2;
  local_70 = L"慴n慴彮敷杩瑨琀浩e瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t";
  local_68 = 3;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11d0 = (ulonglong)uVar2;
  local_70 = L"tan_weight";
  local_68 = 10;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11d8 = (ulonglong)uVar2;
  local_70 = L"楴敭愀慴n瑡湡睟楥桧t瑬湡氀慴彮敷杩瑨";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11e0 = (ulonglong)uVar2;
  local_70 = L"value";
  local_68 = 5;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11e8 = (ulonglong)uVar2;
  local_70 = L"瑡湡愀慴彮敷杩瑨氀慴n瑬湡睟楥桧t";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11f0 = (ulonglong)uVar2;
  local_70 = L"atan_weight";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a11f8 = (ulonglong)uVar2;
  local_70 = L"瑬湡氀慴彮敷杩瑨";
  local_68 = 4;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1200 = (ulonglong)uVar2;
  local_70 = L"ltan_weight";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a1208 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b207ce FUN_142b207ce body=96 status=ok
// SIG undefined FUN_142b207ce(void)

longlong FUN_142b207ce(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
  lVar2 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
  return (ulonglong)(uint)(iVar1 % 0x199) * 0x28 + lVar2;
}



// FUNCTION 142b2082e FUN_142b2082e body=563 status=ok
// SIG undefined FUN_142b2082e(void)

void FUN_142b2082e(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8 [3];
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_50 = (undefined2 *)*param_1;
  iVar5 = 0;
  local_48 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_a8,&local_50);
  local_50 = local_a8;
  if (local_a8 == (undefined2 *)0x0) {
    local_c8[2] = 0;
    uStack_b0 = 0;
  }
  else {
    FUN_1400021e4(&local_50,local_c8 + 2);
    iVar5 = (int)uStack_b0;
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_68 = iVar5 + -1;
  if (iVar5 == 0) {
    local_68 = 0;
  }
  local_70 = local_c8[2];
  cVar1 = FUN_14475c62c();
  if (cVar1 == '\0') {
    FUN_140056680(&local_80,&DAT_149dfb77a);
    local_50 = local_80;
    local_48 = local_78 + -1;
    if (local_78 == 0) {
      local_48 = 0;
    }
    local_60 = local_c8[2];
    local_58 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      local_58 = 0;
    }
    cVar1 = FUN_1404d3d28(&local_60,local_c8);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      uVar2 = FUN_146872264();
      FUN_140474144(&local_50,local_c8,uVar2);
      plVar3 = (longlong *)FUN_14054d1d4();
      puVar4 = &DAT_149dfb77a;
      if (local_48 != 0) {
        puVar4 = local_50;
      }
      cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar4);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 == '\0') {
        uVar2 = FUN_141538082();
        FUN_140474144(&local_50,local_c8,uVar2);
        plVar3 = (longlong *)FUN_14054d1d4();
        puVar4 = local_50;
        if (local_48 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        (**(code **)(*plVar3 + 0x48))(plVar3,puVar4);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b20a62 FUN_142b20a62 body=136 status=ok
// SIG undefined FUN_142b20a62(void)

undefined8 * FUN_142b20a62(byte *param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((*param_1 & 2) == 0) {
    plVar2 = &DAT_14c9a1288;
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  }
  if ((int)plVar2[2] != *(int *)((longlong)plVar2 + 0x3c)) {
    plVar4 = plVar2 + 8;
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar2[9];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar2[10] - 1U & *param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *plVar2 + (longlong)iVar5 * 0x40;
        if (*(uint *)(*plVar2 + (longlong)iVar5 * 0x40) == *param_2) {
          if ((((lVar1 != 0) && (puVar3 = (undefined8 *)(lVar1 + 0x28), puVar3 != (undefined8 *)0x0)
               ) && ((byte *)*puVar3 != (byte *)0x0)) && ((*(byte *)*puVar3 & 0x40) == 0)) {
            return puVar3;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x38);
      } while (iVar5 != -1);
    }
  }
  return &DAT_14c9a1308;
}



// FUNCTION 142b20aea FUN_142b20aea body=69 status=ok
// SIG undefined FUN_142b20aea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b20aea(void)

{
  _DAT_14c9a13a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b20b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a13a8,1);
  return;
}



// FUNCTION 142b20b2f FUN_142b20b2f body=45 status=ok
// SIG undefined FUN_142b20b2f(void)

void FUN_142b20b2f(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c9a13b8;
  if (DAT_14c9a13b8 != 0) {
    FUN_1416754e6(DAT_14c9a13b8);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 142b20b5c FUN_142b20b5c body=39 status=ok
// SIG undefined FUN_142b20b5c(void)

float FUN_142b20b5c(byte *param_1,float param_2)

{
  double dVar1;
  
  if (((*param_1 & 0x6b) == 1) && (*(char **)(param_1 + 8) != (char *)0x0)) {
    dVar1 = atof(*(char **)(param_1 + 8));
    param_2 = (float)dVar1;
  }
  return param_2;
}



// FUNCTION 142b20b91 FUN_142b20b91 body=41 status=ok
// SIG undefined FUN_142b20b91(void)

void FUN_142b20b91(void)

{
  DAT_14c9a1530 = 0;
  if (DAT_14c9a1528 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b5254();
  return;
}



// FUNCTION 142b20bba FUN_142b20bba body=41 status=ok
// SIG undefined FUN_142b20bba(void)

void FUN_142b20bba(void)

{
  DAT_14c9a1588 = 0;
  if (DAT_14c9a1580 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b4c4e();
  return;
}



// FUNCTION 142b20be3 FUN_142b20be3 body=41 status=ok
// SIG undefined FUN_142b20be3(void)

void FUN_142b20be3(void)

{
  DAT_14c9a15e0 = 0;
  if (DAT_14c9a15d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145793f84();
  return;
}



// FUNCTION 142b20c3f FUN_142b20c3f body=69 status=ok
// SIG undefined FUN_142b20c3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b20c3f(void)

{
  _DAT_14c9a1610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b20c81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1618,1);
  return;
}



// FUNCTION 142b20c84 FUN_142b20c84 body=69 status=ok
// SIG undefined FUN_142b20c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b20c84(void)

{
  _DAT_14c9a1628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b20cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1630,1);
  return;
}



// FUNCTION 142b20cc9 FUN_142b20cc9 body=47 status=ok
// SIG undefined FUN_142b20cc9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b20cc9(void)

{
  _DAT_14c9a1688 = 0;
  if (DAT_14c9a1680 != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(&DAT_14c9a1640);
  return;
}



// FUNCTION 142b20cf8 FUN_142b20cf8 body=172 status=ok
// SIG undefined FUN_142b20cf8(void)

void FUN_142b20cf8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x380))(0,param_3,&local_48);
  lVar1 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      FUN_14475b384(param_1,param_2,*(longlong *)(lVar1 + lVar2) + 0x18,&DAT_14c9a1640);
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b20da6 FUN_142b20da6 body=299 status=ok
// SIG undefined FUN_142b20da6(void)

void FUN_142b20da6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98 [3];
  undefined4 local_80;
  undefined1 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  local_7c = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xb8d1b717;
  local_64 = 0;
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      local_98[0] = 0;
      local_98[1] = 0;
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar4 + 8 + lVar7) != 0) {
        puVar6 = *(undefined2 **)(lVar4 + lVar7);
      }
      FUN_14158b496(local_98,puVar6,0);
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      FUN_1411841d4(local_98,&local_80,0,&local_a8);
      plVar5 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar7);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b20ed2 FUN_142b20ed2 body=49 status=ok
// SIG undefined FUN_142b20ed2(void)

void FUN_142b20ed2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_14045bbc6(param_1,param_2,uVar1,param_3);
  return;
}



// FUNCTION 142b20f03 FUN_142b20f03 body=49 status=ok
// SIG undefined FUN_142b20f03(void)

void FUN_142b20f03(void)

{
  FUN_1462a3259(DAT_14c9a1690,DAT_14c9a1698);
  if (DAT_14c9a1690 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b20f72 FUN_142b20f72 body=2701 status=ok
// SIG undefined FUN_142b20f72(void)

void FUN_142b20f72(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong local_e8;
  uint local_e0;
  int local_dc;
  longlong *local_d8;
  ulonglong local_d0;
  uint *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  uint *local_90;
  longlong *local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = (**(code **)(*param_1 + 0x308))();
  if ((cVar3 != '\0') && ((int)param_1[9] != 0)) {
    FUN_140741ce4(local_60,10);
    FUN_142b20da6(param_1);
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
      FUN_141189b3c(param_1 + 10,0);
    }
    uVar28 = 0;
    FUN_141189718(param_1 + 0xc,0);
    cVar3 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar3 != '\0') {
      local_c8 = (uint *)(param_1 + 0x5f);
      uVar9 = *(uint *)(param_1 + 0x62);
      uVar15 = (ulonglong)uVar9;
      uVar29 = 1;
      iVar16 = 0;
      uVar8 = 0;
      if (uVar9 != 0) {
        puVar12 = (uint *)param_1[0x61];
        if ((uint *)param_1[0x61] == (uint *)0x0) {
          puVar12 = local_c8;
        }
        uVar8 = *puVar12;
        if (uVar8 == 0) {
          iVar16 = uVar9 + 0x1e;
          if (-1 < (int)(uVar9 - 1)) {
            iVar16 = uVar9 - 1;
          }
          uVar28 = 0;
          uVar29 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar29 = uVar28;
          }
          iVar16 = 0;
          do {
            if (uVar29 == uVar28) goto LAB_142b210c7;
            iVar16 = iVar16 + 0x20;
            uVar8 = puVar12[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar28 = 0;
        }
        uVar29 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar29 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar8 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar8) {
          uVar8 = uVar9;
        }
      }
      if (uVar8 != uVar9) {
        local_c0 = param_1 + 0x3f;
        local_b8 = param_1 + 0x50;
        local_d8 = param_1 + 0x53;
        uVar23 = 0xffffffff;
        local_f0 = param_1;
        local_d0 = uVar15;
        do {
          lVar21 = param_1[0x5d];
          puVar12 = *(uint **)(lVar21 + 0x10 + (longlong)(int)uVar8 * 0x20);
          if (puVar12 != (uint *)0x0) {
            if (((*puVar12 == 0) || (uVar9 = puVar12[1], uVar9 == 0)) || (*puVar12 == DAT_14c948000)
               ) {
LAB_142b219c3:
              local_68 = DAT_14c948620;
              uVar6 = DAT_14c948618;
            }
            else {
              if (((int)uVar9 < 2) && ((int)puVar12[9] < 1)) {
                puVar12 = puVar12 + 2;
              }
              else {
                puVar12 = *(uint **)(puVar12 + 6);
              }
              if ((int)uVar9 < 1) goto LAB_142b219c3;
              local_68 = puVar12[2];
              uVar6 = *(undefined8 *)puVar12;
            }
            local_70._0_4_ = (uint)uVar6;
            if (local_68 != 0) {
              uVar9 = local_68 >> 0xd ^ (uint)local_70 - local_68;
              uVar13 = uVar9 << 8 ^ (-0x61c88647 - local_68) - uVar9;
              uVar20 = uVar13 >> 0xd ^ (local_68 - uVar9) - uVar13;
              uVar9 = uVar20 >> 0xc ^ (uVar9 - uVar13) - uVar20;
              uVar13 = uVar9 << 0x10 ^ (uVar13 - uVar20) - uVar9;
              uVar22 = uVar13 >> 5 ^ (uVar20 - uVar9) - uVar13;
              uVar20 = uVar22 >> 3 ^ (uVar9 - uVar13) - uVar22;
              uVar9 = uVar20 << 10 ^ (uVar13 - uVar22) - uVar20;
              local_70._0_4_ = uVar9 >> 0xf ^ uVar22 - (uVar20 + uVar9);
            }
            uVar9 = (uint)&local_70;
            local_e0 = uVar23;
            local_dc = iVar16;
            local_b0 = uVar29;
            local_a8 = uVar28;
            uVar23 = (uint)local_70;
            local_70 = uVar6;
            iVar16 = FUN_1448467de(local_c0,uVar23);
            if (iVar16 != -1) {
              lVar17 = (longlong)iVar16 * 0x70 + *local_c0;
              if ((undefined8 *)(lVar17 + 0x10) != (undefined8 *)0x0 && lVar17 != 0) {
                plVar18 = (longlong *)(lVar21 + (longlong)(int)uVar8 * 0x20 + 0x10);
                *(undefined8 *)(*plVar18 + 0x30) = *(undefined8 *)(lVar17 + 0x10);
                piVar14 = (int *)*plVar18;
                if (*(longlong *)(piVar14 + 0xc) == 0) {
LAB_142b212be:
                  if (local_68 != 0) {
                    uVar8 = local_68 >> 0xd ^ (uint)local_70 - local_68;
                    uVar9 = uVar8 << 8 ^ (-0x61c88647 - local_68) - uVar8;
                    uVar23 = uVar9 >> 0xd ^ (local_68 - uVar8) - uVar9;
                    uVar8 = uVar23 >> 0xc ^ (uVar8 - uVar9) - uVar23;
                    uVar13 = uVar8 << 0x10 ^ (uVar9 - uVar23) - uVar8;
                    uVar9 = uVar13 >> 5 ^ (uVar23 - uVar8) - uVar13;
                    uVar23 = uVar9 >> 3 ^ (uVar8 - uVar13) - uVar9;
                    uVar8 = uVar23 << 10 ^ (uVar13 - uVar9) - uVar23;
                    uVar9 = uVar8 >> 0xf ^ uVar9 - (uVar23 + uVar8);
                  }
                  if ((int)local_f0[0x4a] != *(int *)((longlong)local_f0 + 0x27c)) {
                    if (local_68 == 0) {
                      uVar9 = (uint)local_70;
                    }
                    plVar24 = (longlong *)local_f0[0x51];
                    if ((longlong *)local_f0[0x51] == (longlong *)0x0) {
                      plVar24 = local_b8;
                    }
                    iVar16 = *(int *)((longlong)plVar24 +
                                     (ulonglong)((int)local_f0[0x52] - 1U & uVar9) * 4);
                    if (iVar16 != -1) {
                      lVar21 = local_f0[0x49];
                      do {
                        lVar25 = (longlong)iVar16 * 0x20;
                        if ((*(uint *)(lVar21 + lVar25) == (uint)local_70) &&
                           (lVar26 = lVar21 + lVar25, *(uint *)(lVar26 + 8) == local_68)) {
                          if (lVar26 != 0) {
                            uVar6 = *(undefined8 *)(lVar26 + 0x10);
                            goto LAB_142b213e5;
                          }
                          break;
                        }
                        iVar16 = *(int *)(lVar21 + 0x18 + lVar25);
                      } while (iVar16 != -1);
                    }
                  }
                  uVar6 = 0;
LAB_142b213e5:
                  *(undefined8 *)(piVar14 + 0xc) = uVar6;
                  piVar14 = (int *)*plVar18;
                }
                else {
                  piVar5 = *(int **)(*(longlong *)(piVar14 + 0xc) + 8);
                  if (piVar5 == (int *)0x0) {
                    piVar5 = &DAT_14c9485f0;
                  }
                  if (*piVar5 != *piVar14) goto LAB_142b212be;
                }
                if ((piVar14 != (int *)0x0) && (*(longlong *)(piVar14 + 0xc) != 0)) {
                  FUN_1407d81de(*(longlong *)(piVar14 + 0xc) + 8);
                }
                FUN_140220358();
                lVar21 = *plVar18;
                puVar12 = (uint *)(lVar21 + 0x80);
                uVar9 = *(uint *)(lVar21 + 0x98);
                uVar28 = (ulonglong)uVar9;
                local_88 = plVar18;
                if (uVar9 == 0) {
                  uVar15 = 1;
                  uVar29 = 0;
                  iVar16 = 0;
                  uVar8 = 0;
                }
                else {
                  puVar7 = *(uint **)(lVar21 + 0x90);
                  if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
                    puVar7 = puVar12;
                  }
                  uVar8 = *puVar7;
                  if (uVar8 == 0) {
                    iVar16 = uVar9 + 0x1e;
                    if (-1 < (int)(uVar9 - 1)) {
                      iVar16 = uVar9 - 1;
                    }
                    uVar29 = 0;
                    uVar15 = (ulonglong)(uint)(iVar16 >> 5);
                    if (iVar16 >> 5 < 1) {
                      uVar15 = uVar29;
                    }
                    iVar16 = 0;
                    do {
                      if (uVar15 == uVar29) goto LAB_142b214b3;
                      iVar16 = iVar16 + 0x20;
                      uVar8 = puVar7[uVar29 + 1];
                      uVar29 = uVar29 + 1;
                    } while (uVar8 == 0);
                  }
                  else {
                    uVar29 = 0;
                    iVar16 = 0;
                  }
                  uVar15 = (ulonglong)(-uVar8 & uVar8);
                  uVar2 = uVar15 * 2 + 1;
                  lVar25 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                    }
                  }
                  uVar8 = (iVar16 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                  if ((int)uVar9 <= (int)uVar8) {
                    uVar8 = uVar9;
                  }
                }
                if (uVar8 != uVar9) {
                  local_a0 = lVar17 + 0x50;
                  uVar23 = 0xffffffff;
                  local_e8 = lVar17;
                  local_98 = uVar28;
                  local_90 = puVar12;
                  do {
                    if (*(longlong *)
                         (*(longlong *)(lVar21 + 0x70) + 0x10 + (longlong)(int)uVar8 * 0x20) != 0) {
                      puVar19 = (undefined8 *)
                                (*(longlong *)(lVar21 + 0x70) + (longlong)(int)uVar8 * 0x20 + 0x10);
                      FUN_140220358();
                      plVar18 = local_d8;
                      puVar7 = (uint *)*puVar19;
                      uVar9 = *puVar7;
                      puVar12 = (uint *)(ulonglong)uVar9;
                      if (((uVar9 == 0) || (uVar8 = puVar7[1], uVar8 == 0)) ||
                         (uVar9 == DAT_14c948000)) {
LAB_142b21982:
                        local_78 = DAT_14c948620;
                        uVar6 = DAT_14c948618;
                      }
                      else {
                        if (((int)uVar8 < 2) && ((int)puVar7[9] < 1)) {
                          puVar12 = puVar7 + 2;
                        }
                        else {
                          puVar12 = *(uint **)(puVar7 + 6);
                        }
                        if ((uVar8 == 1) || ((int)uVar8 < 2)) goto LAB_142b21982;
                        local_78 = puVar12[5];
                        uVar6 = *(undefined8 *)(puVar12 + 3);
                      }
                      uVar9 = (uint)puVar12;
                      local_80._0_4_ = (uint)uVar6;
                      if (local_78 != 0) {
                        uVar8 = local_78 >> 0xd ^ (uint)local_80 - local_78;
                        uVar9 = uVar8 << 8 ^ (-0x61c88647 - local_78) - uVar8;
                        uVar13 = uVar9 >> 0xd ^ (local_78 - uVar8) - uVar9;
                        uVar8 = uVar13 >> 0xc ^ (uVar8 - uVar9) - uVar13;
                        uVar9 = uVar8 << 0x10 ^ (uVar9 - uVar13) - uVar8;
                        uVar13 = uVar9 >> 5 ^ (uVar13 - uVar8) - uVar9;
                        uVar8 = uVar13 >> 3 ^ (uVar8 - uVar9) - uVar13;
                        uVar9 = uVar8 << 10 ^ (uVar9 - uVar13) - uVar8;
                        uVar9 = uVar9 >> 0xf ^ uVar13 - (uVar8 + uVar9);
                      }
                      if (*(int *)(lVar17 + 0x20) != *(int *)(lVar17 + 0x4c)) {
                        if (local_78 == 0) {
                          uVar9 = (uint)local_80;
                        }
                        lVar25 = *(longlong *)(lVar17 + 0x58);
                        if (*(longlong *)(lVar17 + 0x58) == 0) {
                          lVar25 = local_a0;
                        }
                        iVar4 = *(int *)(lVar25 + (ulonglong)(*(int *)(lVar17 + 0x60) - 1U & uVar9)
                                                  * 4);
                        if (iVar4 != -1) {
                          lVar25 = *(longlong *)(lVar17 + 0x18);
                          do {
                            lVar26 = (longlong)iVar4 * 0x20;
                            if ((*(uint *)(lVar25 + lVar26) == (uint)local_80) &&
                               (lVar1 = lVar25 + lVar26, *(uint *)(lVar1 + 8) == local_78)) {
                              if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0)
                              break;
                              *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(lVar1 + 0x10);
                              puVar7 = (uint *)*puVar19;
                              if (*(longlong *)(puVar7 + 0xc) != 0) {
                                puVar12 = *(uint **)(*(longlong *)(puVar7 + 0xc) + 8);
                                if (puVar12 == (uint *)0x0) {
                                  puVar12 = &DAT_14c9485f0;
                                }
                                puVar27 = (uint *)&DAT_14c948618;
                                if (*puVar12 != 0) {
                                  uVar9 = puVar12[1];
                                  puVar27 = (uint *)&DAT_14c948618;
                                  if ((uVar9 != 0) &&
                                     (puVar27 = (uint *)&DAT_14c948618, *puVar12 != DAT_14c948000))
                                  {
                                    if (((int)uVar9 < 2) && ((int)puVar12[9] < 1)) {
                                      puVar12 = puVar12 + 2;
                                    }
                                    else {
                                      puVar12 = *(uint **)(puVar12 + 6);
                                    }
                                    puVar27 = (uint *)&DAT_14c948618;
                                    if (0 < (int)uVar9) {
                                      puVar27 = puVar12;
                                    }
                                  }
                                }
                                if ((*puVar27 == (uint)local_80) && (puVar27[2] == local_78)) break;
                              }
                              if (local_78 != 0) {
                                uVar9 = local_78 >> 0xd ^ (uint)local_80 - local_78;
                                uVar8 = uVar9 << 8 ^ (-0x61c88647 - local_78) - uVar9;
                                uVar13 = uVar8 >> 0xd ^ (local_78 - uVar9) - uVar8;
                                uVar9 = uVar13 >> 0xc ^ (uVar9 - uVar8) - uVar13;
                                uVar8 = uVar9 << 0x10 ^ (uVar8 - uVar13) - uVar9;
                                uVar20 = uVar8 >> 5 ^ (uVar13 - uVar9) - uVar8;
                                uVar13 = uVar20 >> 3 ^ (uVar9 - uVar8) - uVar20;
                                uVar9 = uVar13 << 10 ^ (uVar8 - uVar20) - uVar13;
                                local_80._0_4_ = uVar9 >> 0xf ^ uVar20 - (uVar13 + uVar9);
                              }
                              uVar9 = (uint)local_80;
                              local_80 = uVar6;
                              iVar4 = FUN_14709faae(local_d8,uVar9,&local_80);
                              if ((iVar4 == -1) ||
                                 (lVar17 = (longlong)iVar4 * 0x20 + *plVar18, lVar17 == 0)) {
                                uVar6 = 0;
                              }
                              else {
                                uVar6 = *(undefined8 *)(lVar17 + 0x10);
                              }
                              *(undefined8 *)(puVar7 + 0xc) = uVar6;
                              puVar7 = (uint *)*puVar19;
                              lVar17 = local_e8;
                              uVar6 = local_80;
                              break;
                            }
                            iVar4 = *(int *)(lVar25 + 0x18 + lVar26);
                          } while (iVar4 != -1);
                        }
                      }
                      local_80 = uVar6;
                      (**(code **)(*local_f0 + 0x440))(local_f0,puVar7,*local_88);
                      FUN_1400f0d6e();
                      uVar9 = *(uint *)(lVar21 + 0x98);
                      puVar12 = local_90;
                      uVar28 = local_98;
                    }
                    uVar23 = uVar23 & ~(uint)uVar15;
                    puVar7 = *(uint **)(lVar21 + 0x90);
                    if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
                      puVar7 = puVar12;
                    }
                    iVar4 = (int)uVar29;
                    lVar25 = (longlong)iVar4;
                    uVar8 = puVar7[lVar25] & uVar23;
                    if (uVar8 == 0) {
                      iVar10 = uVar9 + 0x1e;
                      if (-1 < (int)(uVar9 - 1)) {
                        iVar10 = uVar9 - 1;
                      }
                      iVar10 = iVar10 >> 5;
                      iVar16 = iVar16 + 0x20;
                      iVar11 = iVar10;
                      if (iVar10 < iVar4) {
                        iVar11 = iVar4;
                      }
                      if (iVar4 < iVar10) {
                        lVar26 = 0;
                        do {
                          uVar8 = puVar7[lVar25 + lVar26 + 1];
                          if (uVar8 != 0) {
                            uVar29 = (ulonglong)(iVar4 + (int)lVar26 + 1);
                            uVar23 = 0xffffffff;
                            goto LAB_142b21948;
                          }
                          iVar16 = iVar16 + 0x20;
                          lVar26 = lVar26 + 1;
                        } while (iVar11 - lVar25 != lVar26);
                        uVar23 = 0xffffffff;
                        iVar4 = iVar11;
                      }
                      uVar29 = (ulonglong)(iVar4 + 1);
                      uVar8 = uVar9;
                    }
                    else {
LAB_142b21948:
                      uVar15 = (ulonglong)(-uVar8 & uVar8);
                      uVar2 = uVar15 * 2 + 1;
                      lVar25 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                        }
                      }
                      uVar8 = (iVar16 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                      if ((int)uVar9 <= (int)uVar8) {
                        uVar8 = uVar9;
                      }
                    }
                  } while (uVar8 != (uint)uVar28);
                }
              }
            }
LAB_142b214b3:
            uVar9 = *(uint *)(local_f0 + 0x62);
            param_1 = local_f0;
            uVar15 = local_d0;
            uVar28 = local_a8;
            uVar29 = local_b0;
            iVar16 = local_dc;
            uVar23 = local_e0;
          }
          uVar23 = uVar23 & ~(uint)uVar29;
          puVar12 = (uint *)param_1[0x61];
          if ((uint *)param_1[0x61] == (uint *)0x0) {
            puVar12 = local_c8;
          }
          iVar4 = (int)uVar28;
          lVar21 = (longlong)iVar4;
          uVar8 = puVar12[lVar21] & uVar23;
          if (uVar8 == 0) {
            iVar10 = uVar9 + 0x1e;
            if (-1 < (int)(uVar9 - 1)) {
              iVar10 = uVar9 - 1;
            }
            iVar10 = iVar10 >> 5;
            iVar16 = iVar16 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar4) {
              iVar11 = iVar4;
            }
            if (iVar4 < iVar10) {
              lVar17 = 0;
              do {
                uVar8 = puVar12[lVar21 + lVar17 + 1];
                if (uVar8 != 0) {
                  uVar28 = (ulonglong)(iVar4 + (int)lVar17 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_142b21557;
                }
                iVar16 = iVar16 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar11 - lVar21 != lVar17);
              uVar23 = 0xffffffff;
              lVar21 = (longlong)iVar11;
            }
            uVar28 = lVar21 + 1U & 0xffffffff;
            param_1 = local_f0;
            uVar15 = local_d0;
            uVar8 = uVar9;
          }
          else {
LAB_142b21557:
            uVar29 = (ulonglong)(-uVar8 & uVar8);
            uVar2 = uVar29 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar8 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if ((int)uVar9 <= (int)uVar8) {
              uVar8 = uVar9;
            }
          }
        } while (uVar8 != (uint)uVar15);
      }
LAB_142b210c7:
      LOCK();
      *(undefined1 *)((longlong)param_1 + 0x154) = 0;
      UNLOCK();
      FUN_14570f31c(param_1 + 0x3f,0);
      FUN_1410f1df6(param_1 + 0x49,0);
      FUN_14570f388(param_1 + 0x53,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b21a00 FUN_142b21a00 body=2795 status=ok
// SIG undefined FUN_142b21a00(void)

void FUN_142b21a00(longlong param_1,int *param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  size_t sVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  char *_Str;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  longlong *plVar31;
  int iVar32;
  uint uVar33;
  char *pcVar34;
  bool bVar35;
  undefined1 auStack_238 [40];
  int *local_210;
  longlong *local_208;
  uint *local_200;
  ulonglong local_1f8;
  int *local_1f0;
  int *local_1e8;
  int *local_1e0;
  longlong local_1d8 [4];
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  iVar18 = 0;
  local_210 = param_2;
  local_208 = param_3;
  FUN_1446ddda2(&local_88,"entry_index",0);
  iVar28 = *(int *)(param_1 + 0x310);
  local_1f8 = param_4;
  if (iVar28 == 0) {
    uVar20 = 1;
    uVar30 = 0;
    iVar8 = 0;
  }
  else {
    puVar24 = *(uint **)(param_1 + 0x308);
    if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
      puVar24 = (uint *)(param_1 + 0x2f8);
    }
    uVar33 = *puVar24;
    if (uVar33 == 0) {
      iVar18 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar18 = iVar28 + -1;
      }
      uVar30 = 0;
      uVar20 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar20 = uVar30;
      }
      iVar18 = 0;
      do {
        if (uVar20 == uVar30) goto LAB_142b21af7;
        iVar18 = iVar18 + 0x20;
        uVar33 = puVar24[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar33 == 0);
    }
    else {
      iVar18 = 0;
      uVar30 = 0;
    }
    uVar20 = (ulonglong)(-uVar33 & uVar33);
    uVar2 = uVar20 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    iVar8 = (iVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
    if (iVar28 <= iVar8) {
      iVar8 = iVar28;
    }
  }
  if (iVar8 != iVar28) {
    uVar33 = 0xffffffff;
    do {
      lVar27 = (longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x2e8);
      FUN_140e3418c(lVar27,&local_1a8,1);
      iVar8 = (int)uVar30;
      if (*local_210 == (int)local_1a8) {
        lVar27 = *(longlong *)(lVar27 + 0x10);
        uVar20 = 0;
        FUN_144837e54(lVar27);
        uVar30 = local_1f8;
        if (*(int *)(local_1f8 + 8) < 2) {
          if (*(longlong *)(lVar27 + 0x48) == 0) {
            puVar9 = &DAT_14c9a1308;
          }
          else {
            puVar9 = (undefined8 *)FUN_1408db3b0();
          }
          pbVar5 = (byte *)*puVar9;
          if (((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) &&
             (pcVar34 = *(char **)(pbVar5 + 8), pcVar34 != (char *)0x0)) {
            local_a8 = 0;
            sVar10 = strlen(pcVar34);
            FUN_1446e6fe8(&local_1a8,pcVar34,sVar10 & 0xffffffff,1);
            FUN_14020fad6(uVar30);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        puVar24 = (uint *)(lVar27 + 0x80);
        uVar33 = *(uint *)(lVar27 + 0x98);
        if (uVar33 == 0) {
          uVar30 = 1;
          iVar28 = 0;
          uVar14 = 0;
          goto LAB_142b21d0d;
        }
        puVar15 = *(uint **)(lVar27 + 0x90);
        if (*(uint **)(lVar27 + 0x90) == (uint *)0x0) {
          puVar15 = puVar24;
        }
        uVar14 = *puVar15;
        if (uVar14 != 0) {
          uVar20 = 0;
          iVar28 = 0;
          goto LAB_142b21ccf;
        }
        iVar28 = uVar33 + 0x1e;
        if (-1 < (int)(uVar33 - 1)) {
          iVar28 = uVar33 - 1;
        }
        uVar20 = 0;
        uVar30 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar30 = uVar20;
        }
        iVar28 = 0;
        goto LAB_142b21cbb;
      }
      uVar33 = uVar33 & ~(uint)uVar20;
      puVar24 = *(uint **)(param_1 + 0x308);
      if (*(uint **)(param_1 + 0x308) == (uint *)0x0) {
        puVar24 = (uint *)(param_1 + 0x2f8);
      }
      iVar25 = *(int *)(param_1 + 0x310);
      lVar27 = (longlong)iVar8;
      uVar14 = puVar24[lVar27] & uVar33;
      if (uVar14 == 0) {
        iVar11 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar11 = iVar25 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar19 = iVar11;
        if (iVar11 < iVar8) {
          iVar19 = iVar8;
        }
        if (iVar8 < iVar11) {
          lVar21 = 0;
          do {
            uVar14 = puVar24[lVar27 + lVar21 + 1];
            if (uVar14 != 0) {
              uVar30 = (ulonglong)(iVar8 + (int)lVar21 + 1);
              uVar33 = 0xffffffff;
              goto LAB_142b21bf7;
            }
            iVar18 = iVar18 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar19 - lVar27 != lVar21);
          uVar33 = 0xffffffff;
          iVar8 = iVar19;
        }
        uVar30 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar25;
      }
      else {
LAB_142b21bf7:
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar20 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar8 = (iVar18 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if (iVar25 <= iVar8) {
          iVar8 = iVar25;
        }
      }
    } while (iVar8 != iVar28);
  }
  goto LAB_142b21af7;
  while( true ) {
    iVar28 = iVar28 + 0x20;
    uVar14 = puVar15[uVar20 + 1];
    uVar20 = uVar20 + 1;
    if (uVar14 != 0) break;
LAB_142b21cbb:
    if (uVar30 == uVar20) goto LAB_142b21d16;
  }
LAB_142b21ccf:
  uVar30 = (ulonglong)(-uVar14 & uVar14);
  uVar2 = uVar30 * 2 + 1;
  lVar21 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
    }
  }
  uVar14 = (iVar28 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
  if ((int)uVar33 <= (int)uVar14) {
    uVar14 = uVar33;
  }
LAB_142b21d0d:
  if (uVar14 != uVar33) {
    local_1f0 = local_210 + 2;
    local_1e0 = local_210 + 8;
    local_1e8 = local_210 + 10;
    uVar26 = 0xffffffff;
    local_200 = puVar24;
    local_1f8 = (ulonglong)uVar33;
    do {
      lVar21 = *(longlong *)(lVar27 + 0x70);
      FUN_144837e54(*(undefined8 *)(lVar21 + 0x10 + (longlong)(int)uVar14 * 0x20),0);
      lVar21 = *(longlong *)(lVar21 + 0x10 + (longlong)(int)uVar14 * 0x20);
      if ((*(byte **)(lVar21 + 0x48) != (byte *)0x0) && ((**(byte **)(lVar21 + 0x48) & 0x6b) == 3))
      {
        if ((*(longlong *)(local_210 + 2) != 0) && (1 < local_210[6])) {
          puVar9 = (undefined8 *)FUN_1446e60f4();
          if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 3) != 1)) {
            iVar18 = local_210[6];
            if (iVar18 != 0) {
              lVar22 = 0;
              iVar8 = 0;
              goto LAB_142b2205b;
            }
          }
          else {
            puVar9 = &DAT_14c9a1308;
            if (*(longlong *)(lVar21 + 0x48) != 0) {
              puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar21 + 0x48),local_1f0);
            }
            FUN_14709c5ae(*puVar9,&local_1a8);
            iVar18 = local_210[6];
            lVar22 = local_1a8;
            iVar8 = (int)uStack_1a0;
            if ((int)uStack_1a0 == iVar18) {
              if ((int)uStack_1a0 < 2) {
                if (local_1a8 != 0) {
                  FUN_1400020a8();
                }
                goto LAB_142b2207c;
              }
              lVar23 = 0;
              while( true ) {
                uVar3 = *(ushort *)(local_1a8 + lVar23);
                uVar33 = (uint)uVar3;
                uVar4 = *(ushort *)(*(longlong *)(local_210 + 4) + lVar23);
                uVar14 = (uint)uVar4;
                if (uVar3 != uVar4) {
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar33 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_142b223f8;
                  }
                  iVar18 = uVar33 - uVar14;
                  goto LAB_142b2243d;
                }
                if (uVar3 == 0) break;
LAB_142b223f8:
                lVar23 = lVar23 + 2;
              }
              iVar18 = 0;
LAB_142b2243d:
              bVar35 = iVar18 == 0;
            }
            else {
LAB_142b2205b:
              bVar35 = iVar18 + iVar8 == 1;
            }
            if (lVar22 != 0) {
              FUN_1400020a8();
            }
            puVar24 = local_200;
            if (!bVar35) goto LAB_142b2212e;
          }
        }
LAB_142b2207c:
        local_1d8[2] = 0;
        local_1d8[3] = 0;
        local_1d8[0] = 0;
        local_1d8[1] = 0;
        local_1b8 = 0;
        puVar9 = &DAT_14c9a1308;
        if (*(longlong *)(lVar21 + 0x48) != 0) {
          puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar21 + 0x48),local_1e0);
        }
        pbVar5 = (byte *)*puVar9;
        if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
          pcVar34 = (char *)0x0;
        }
        else {
          pcVar34 = *(char **)(pbVar5 + 8);
        }
        puVar9 = &DAT_14c9a1308;
        if (*(longlong *)(lVar21 + 0x48) != 0) {
          puVar9 = (undefined8 *)FUN_1446e60f4(*(longlong *)(lVar21 + 0x48),local_1e8);
        }
        pbVar5 = (byte *)*puVar9;
        if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
          _Str = (char *)0x0;
        }
        else {
          _Str = *(char **)(pbVar5 + 8);
        }
        if (pcVar34 == (char *)0x0) {
          if (_Str != (char *)0x0) {
LAB_142b22242:
            local_a8 = 0;
            sVar10 = strlen(_Str);
            FUN_1446e6fe8(&local_1a8,_Str,sVar10 & 0xffffffff,1);
            FUN_14020fad6(local_1d8 + 2,local_a0);
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            goto LAB_142b22293;
          }
        }
        else {
          local_a8 = 0;
          sVar10 = strlen(pcVar34);
          FUN_1446e6fe8(&local_1a8,pcVar34,sVar10 & 0xffffffff,1);
          FUN_14020fad6(local_1d8,local_a0);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          if (_Str != (char *)0x0) goto LAB_142b22242;
LAB_142b22293:
          pbVar5 = *(byte **)(lVar21 + 0x48);
          puVar9 = &DAT_14c9a1308;
          if (pbVar5 != (byte *)0x0) {
            plVar16 = &DAT_14c9a1288;
            if ((*pbVar5 & 2) != 0) {
              plVar16 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
            }
            puVar9 = &DAT_14c9a1308;
            if ((int)plVar16[2] != *(int *)((longlong)plVar16 + 0x3c)) {
              plVar13 = plVar16 + 8;
              if ((longlong *)plVar16[9] != (longlong *)0x0) {
                plVar13 = (longlong *)plVar16[9];
              }
              iVar18 = *(int *)((longlong)plVar13 +
                               (ulonglong)((int)plVar16[10] - 1U & (uint)local_88) * 4);
              puVar9 = &DAT_14c9a1308;
              if (iVar18 != -1) {
                do {
                  lVar21 = *plVar16 + (longlong)iVar18 * 0x40;
                  if (*(uint *)(*plVar16 + (longlong)iVar18 * 0x40) == (uint)local_88) {
                    puVar9 = &DAT_14c9a1308;
                    if (lVar21 == 0) goto LAB_142b2233a;
                    puVar17 = (undefined8 *)(lVar21 + 0x28);
                    puVar9 = &DAT_14c9a1308;
                    if ((puVar17 == (undefined8 *)0x0) ||
                       (((byte *)*puVar17 != (byte *)0x0 &&
                        (puVar9 = puVar17, (*(byte *)*puVar17 & 0x40) == 0)))) goto LAB_142b2233a;
                    break;
                  }
                  iVar18 = *(int *)(lVar21 + 0x38);
                } while (iVar18 != -1);
                puVar9 = &DAT_14c9a1308;
              }
            }
          }
LAB_142b2233a:
          local_1b8 = FUN_140e1edd4(puVar9,0);
          iVar18 = (int)local_208[1];
          *(uint *)(local_208 + 1) = iVar18 + 1U;
          if (*(uint *)((longlong)local_208 + 0xc) < iVar18 + 1U) {
            FUN_14709f52a(local_208,iVar18);
          }
          FUN_14709f484((longlong)iVar18 * 0x28 + *local_208,local_1d8);
        }
        if (local_1d8[2] != 0) {
          FUN_1400020a8();
        }
        puVar24 = local_200;
        if (local_1d8[0] != 0) {
          FUN_1400020a8();
        }
      }
LAB_142b2212e:
      uVar26 = uVar26 & ~(uint)uVar30;
      puVar15 = *(uint **)(lVar27 + 0x90);
      if (*(uint **)(lVar27 + 0x90) == (uint *)0x0) {
        puVar15 = puVar24;
      }
      uVar33 = *(uint *)(lVar27 + 0x98);
      iVar18 = (int)uVar20;
      lVar21 = (longlong)iVar18;
      uVar14 = puVar15[lVar21] & uVar26;
      if (uVar14 == 0) {
        iVar8 = uVar33 + 0x1e;
        if (-1 < (int)(uVar33 - 1)) {
          iVar8 = uVar33 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar28 = iVar28 + 0x20;
        iVar25 = iVar8;
        if (iVar8 < iVar18) {
          iVar25 = iVar18;
        }
        if (iVar18 < iVar8) {
          lVar22 = 0;
          do {
            uVar14 = puVar15[lVar21 + lVar22 + 1];
            if (uVar14 != 0) {
              uVar20 = (ulonglong)(iVar18 + (int)lVar22 + 1);
              uVar26 = 0xffffffff;
              goto LAB_142b221b2;
            }
            iVar28 = iVar28 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar25 - lVar21 != lVar22);
          uVar26 = 0xffffffff;
          iVar18 = iVar25;
        }
        uVar20 = (ulonglong)(iVar18 + 1);
        puVar24 = local_200;
        uVar14 = uVar33;
      }
      else {
LAB_142b221b2:
        uVar30 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar30 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar14 = (iVar28 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar33 <= (int)uVar14) {
          uVar14 = uVar33;
        }
      }
    } while (uVar14 != (uint)local_1f8);
  }
LAB_142b21d16:
  iVar28 = (int)local_208[1];
  puVar24 = (uint *)(longlong)iVar28;
  if (0 < (longlong)puVar24) {
    local_208 = (longlong *)*local_208;
    puVar15 = (uint *)0x0;
    plVar16 = local_208;
    do {
      if (((uint *)((longlong)puVar15 + 1U) < puVar24) && ((int)plVar16[9] < (int)plVar16[4])) {
        local_188 = plVar16[4];
        lVar27 = *plVar16;
        lVar21 = plVar16[1];
        local_198 = plVar16[2];
        lStack_190 = plVar16[3];
        plVar16[4] = plVar16[9];
        plVar16[2] = plVar16[7];
        plVar16[3] = plVar16[8];
        *plVar16 = plVar16[5];
        plVar16[1] = plVar16[6];
        plVar16[9] = local_188;
        local_1a8._0_4_ = (int)lVar27;
        local_1a8._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
        uStack_1a0._0_4_ = (int)lVar21;
        uStack_1a0._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
        plVar16[7] = local_198;
        plVar16[8] = lStack_190;
        *(int *)(plVar16 + 5) = (int)local_1a8;
        *(undefined4 *)((longlong)plVar16 + 0x2c) = local_1a8._4_4_;
        *(int *)(plVar16 + 6) = (int)uStack_1a0;
        *(undefined4 *)((longlong)plVar16 + 0x34) = uStack_1a0._4_4_;
        local_1a8 = lVar27;
        uStack_1a0 = lVar21;
      }
      puVar15 = (uint *)((longlong)puVar15 + 2);
      plVar16 = plVar16 + 10;
    } while (puVar15 < puVar24);
    if (2 < iVar28) {
      iVar18 = 2;
      do {
        iVar8 = iVar18 * 2;
        local_210 = (int *)CONCAT44(local_210._4_4_,iVar8);
        local_1f8 = (ulonglong)iVar8;
        lVar27 = 0;
        do {
          iVar25 = iVar28 - (int)lVar27;
          if (iVar8 <= iVar25) {
            iVar25 = iVar8;
          }
          if (iVar18 < iVar25 && 0 < iVar18) {
            iVar19 = 0;
            iVar11 = iVar18;
            while( true ) {
              iVar29 = 0;
              if (iVar11 - iVar19 != 0 && iVar19 <= iVar11) {
                iVar29 = 0;
                uVar33 = iVar11 - iVar19;
                do {
                  iVar32 = (uVar33 >> 1) + iVar29;
                  if (*(int *)(local_208 +
                              lVar27 * 5 + (longlong)iVar19 * 5 + (longlong)iVar32 * 5 + 4) <=
                      *(int *)(local_208 + lVar27 * 5 + (longlong)iVar11 * 5 + 4)) {
                    iVar29 = iVar32 + (uVar33 & 1);
                  }
                  bVar35 = 1 < uVar33;
                  uVar33 = uVar33 >> 1;
                } while (bVar35);
              }
              iVar29 = iVar29 + iVar19;
              iVar19 = iVar11 - iVar29;
              if (iVar19 == 0 || iVar11 < iVar29) break;
              if (iVar25 - iVar11 == 0 || iVar25 < iVar11) {
                iVar32 = 0;
              }
              else {
                plVar16 = local_208 + lVar27 * 5 + (longlong)iVar29 * 5;
                iVar32 = 0;
                uVar33 = iVar25 - iVar11;
                do {
                  uVar14 = (uVar33 >> 1) + iVar32;
                  if (*(int *)(local_208 +
                              lVar27 * 5 + (longlong)iVar11 * 5 + (ulonglong)uVar14 * 5 + 4) <
                      (int)plVar16[4]) {
                    iVar32 = uVar14 + (uVar33 & 1);
                  }
                  bVar35 = 1 < uVar33;
                  uVar33 = uVar33 >> 1;
                } while (bVar35);
                iVar11 = iVar11 + iVar32;
                if (0 < iVar32) {
                  plVar13 = plVar16 + (longlong)(iVar11 - iVar29) * 5;
                  plVar12 = plVar16 + (longlong)iVar19 * 5;
                  plVar31 = plVar16 + (longlong)iVar19 * 5;
                  do {
                    while( true ) {
                      plVar1 = plVar12 + 5;
                      local_188 = plVar16[4];
                      lVar21 = *plVar16;
                      lVar22 = plVar16[1];
                      local_198 = plVar16[2];
                      lStack_190 = plVar16[3];
                      plVar16[4] = plVar12[4];
                      lVar23 = *plVar12;
                      lVar6 = plVar12[1];
                      lVar7 = plVar12[3];
                      plVar16[2] = plVar12[2];
                      plVar16[3] = lVar7;
                      *plVar16 = lVar23;
                      plVar16[1] = lVar6;
                      plVar16 = plVar16 + 5;
                      plVar12[4] = local_188;
                      local_1a8._0_4_ = (int)lVar21;
                      local_1a8._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
                      uStack_1a0._0_4_ = (int)lVar22;
                      uStack_1a0._4_4_ = (undefined4)((ulonglong)lVar22 >> 0x20);
                      plVar12[2] = local_198;
                      plVar12[3] = lStack_190;
                      *(int *)plVar12 = (int)local_1a8;
                      *(undefined4 *)((longlong)plVar12 + 4) = local_1a8._4_4_;
                      *(int *)(plVar12 + 1) = (int)uStack_1a0;
                      *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_1a0._4_4_;
                      if (plVar1 == plVar13) break;
                      plVar12 = plVar1;
                      if (plVar16 == plVar31) {
                        plVar31 = plVar1;
                      }
                    }
                    plVar12 = plVar31;
                    local_1a8 = lVar21;
                    uStack_1a0 = lVar22;
                  } while (plVar16 != plVar31);
                }
              }
              if ((iVar25 <= iVar11) || (iVar19 = iVar29 + iVar32 + 1, iVar11 <= iVar19)) break;
            }
          }
          lVar27 = lVar27 + local_1f8;
        } while (lVar27 < (longlong)puVar24);
        iVar18 = iVar8;
        local_200 = puVar24;
      } while (iVar8 < iVar28);
    }
  }
LAB_142b21af7:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b224ec FUN_142b224ec body=5917 status=ok
// SIG undefined FUN_142b224ec(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_142b224ec(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong *plVar23;
  ushort uVar24;
  ushort uVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  uint local_2ec;
  int local_2e8;
  int local_2e4;
  longlong local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  longlong *plStack_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  longlong local_2a8;
  longlong *plStack_2a0;
  undefined8 *local_298;
  longlong *plStack_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  longlong local_250;
  longlong *local_248 [2];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 local_210 [40];
  longlong local_1e8;
  longlong *plStack_1e0;
  undefined4 local_1d8;
  longlong local_1d0;
  undefined8 uStack_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  longlong lStack_170;
  undefined8 uStack_168;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 *******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 *******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1446ddda2(&local_88,"layer",0);
  pbVar13 = *(byte **)(param_2 + 0x238);
  if (pbVar13 != (byte *)0x0) {
    if ((*pbVar13 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
    }
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar23 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar23 = (longlong *)plVar10[9];
      }
      iVar27 = *(int *)((longlong)plVar23 + (ulonglong)((int)plVar10[10] - 1U & (uint)local_88) * 4)
      ;
      if (iVar27 != -1) {
        do {
          lVar6 = *plVar10 + (longlong)iVar27 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar27 * 0x40) == (uint)local_88) {
            if ((((lVar6 != 0) &&
                 (puVar11 = (undefined8 *)(lVar6 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
            goto LAB_142b225db;
            break;
          }
          iVar27 = *(int *)(lVar6 + 0x38);
        } while (iVar27 != -1);
      }
    }
  }
  puVar11 = &DAT_14c9a1308;
LAB_142b225db:
  pbVar13 = (byte *)*puVar11;
  if ((pbVar13 == (byte *)0x0) || ((*pbVar13 & 3) != 1)) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(pbVar13 + 8);
  }
  local_2f8 = param_2;
  lVar6 = FUN_1470a080e(param_1[0x29],param_2 + 0x30,uVar21,1);
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x168) = *(int *)(lVar6 + 0x168) + -1;
    if (param_3 != (undefined8 *)0x0) {
      iVar27 = *(int *)(param_3 + 1);
      uVar19 = 0;
      uVar14 = iVar27 - 1;
      if (iVar27 == 0) {
        uVar14 = 0;
      }
      if ((int)uVar14 < 1) goto LAB_142b22739;
      puVar7 = &DAT_149dfb77a;
      puVar12 = &DAT_149dfb77a;
      if (iVar27 != 0) {
        puVar12 = (undefined2 *)*param_3;
      }
      uVar16 = (ulonglong)uVar14;
      if (*(int *)(param_2 + 0x28) != 0) {
        puVar7 = *(undefined2 **)(param_2 + 0x20);
      }
      lVar22 = 0;
      while( true ) {
        uVar24 = *(ushort *)((longlong)puVar7 + lVar22);
        uVar17 = (ulonglong)uVar24;
        uVar25 = *(ushort *)((longlong)puVar12 + lVar22);
        if (uVar24 != uVar25) break;
        if (uVar24 == 0) goto LAB_142b226ad;
LAB_142b2267d:
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_142b226ad;
        lVar22 = lVar22 + 2;
      }
      if ((uVar25 | uVar24) < 0x80) {
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        uVar26 = (ulonglong)uVar25;
        uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
        if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar26]) goto LAB_142b2267d;
      }
      if (uVar24 != uVar25) goto LAB_142b226e9;
    }
LAB_142b226ad:
    plVar10 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 0x38) == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = *(undefined2 **)(param_2 + 0x30);
    }
    (**(code **)(*plVar10 + 0xd0))(plVar10,&local_250,puVar12);
    if (local_250 != *(longlong *)(lVar6 + 0x148)) {
      *(int *)(lVar6 + 0x168) = *(int *)(lVar6 + 0x168) + 1;
      local_268 = (char *)0x0;
      uStack_260 = 0;
      if (*(int *)(param_2 + 0x38) == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      else {
        puVar12 = *(undefined2 **)(param_2 + 0x30);
      }
      uVar19 = 0;
      cVar4 = FUN_14158b496(&local_268,puVar12,0);
      if (cVar4 != '\0') {
        if (param_1[0x1a] != lVar6) {
          param_1[0x1a] = lVar6;
        }
        lVar22 = (longlong)(int)(uint)uStack_260;
        uVar14 = (uint)uStack_260 + 1;
        if (uStack_260._4_4_ < uVar14) {
          uVar16 = uStack_260 & 0xffffffff;
          uStack_260._0_4_ = uVar14;
          FUN_1447403be(&local_268,uVar16);
          uVar14 = (uint)uStack_260;
        }
        uStack_260._0_4_ = uVar14;
        uVar14 = (uint)uStack_260;
        local_268[lVar22] = '\0';
        lVar22 = (longlong)(int)(uint)uStack_260;
        uStack_260._0_4_ = (uint)uStack_260 + 1;
        if (uStack_260._4_4_ < (uint)uStack_260) {
          FUN_1447403be(&local_268,uVar14);
        }
        uVar14 = (uint)uStack_260;
        local_268[lVar22] = '\0';
        lVar22 = (longlong)(int)(uint)uStack_260;
        uStack_260._0_4_ = (uint)uStack_260 + 1;
        if (uStack_260._4_4_ < (uint)uStack_260) {
          FUN_1447403be(&local_268,uVar14);
        }
        local_268[lVar22] = '\0';
        if ((*local_268 == -0x11) && (local_268[1] == -0x45)) {
          lVar22 = (ulonglong)(local_268[2] == -0x41) * 3;
        }
        else {
          lVar22 = 0;
        }
        local_278 = 0;
        uStack_270 = 0;
        local_a8 = (undefined8 *******)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        FUN_1446ddda2(&local_d8,"section",0);
        pbVar13 = *(byte **)(param_2 + 0x238);
        if (pbVar13 != (byte *)0x0) {
          if ((*pbVar13 & 2) == 0) {
            plVar10 = &DAT_14c9a1288;
          }
          else {
            plVar10 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
          }
          if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
            plVar23 = plVar10 + 8;
            if ((longlong *)plVar10[9] != (longlong *)0x0) {
              plVar23 = (longlong *)plVar10[9];
            }
            iVar27 = *(int *)((longlong)plVar23 +
                             (ulonglong)((int)plVar10[10] - 1U & (uint)local_d8) * 4);
            if (iVar27 != -1) {
              do {
                lVar2 = *plVar10 + (longlong)iVar27 * 0x40;
                if (*(uint *)(*plVar10 + (longlong)iVar27 * 0x40) == (uint)local_d8) {
                  if ((((lVar2 != 0) &&
                       (puVar11 = (undefined8 *)(lVar2 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                      ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
                  goto LAB_142b22942;
                  break;
                }
                iVar27 = *(int *)(lVar2 + 0x38);
              } while (iVar27 != -1);
            }
          }
        }
        puVar11 = &DAT_14c9a1308;
LAB_142b22942:
        pbVar13 = (byte *)*puVar11;
        local_2d8 = lVar6;
        if (((pbVar13 != (byte *)0x0) && ((*pbVar13 & 3) == 1)) && (*(longlong *)(pbVar13 + 8) != 0)
           ) {
          FUN_1401d7cf8(&local_a8);
        }
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_128 = (undefined8 *******)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0xf;
        FUN_1401d7cf8(&local_128,local_268 + lVar22);
        local_288 = (undefined8 *)0x0;
        uStack_280 = 0;
        if (local_118 != 0) {
          uVar16 = 0;
          bVar29 = false;
          local_2ec = 0;
          local_2e4 = 0;
          local_2e8 = 0;
          local_2e0 = 0;
          iVar27 = 0;
LAB_142b229fe:
          pppppppuVar9 = &local_128;
          if (0xf < local_110) {
            pppppppuVar9 = local_128;
          }
          bVar3 = *(byte *)((longlong)pppppppuVar9 + uVar16);
          uVar16 = (ulonglong)bVar3;
          if ((0xd < bVar3) || ((0x2401U >> (bVar3 & 0x1f) & 1) == 0)) goto LAB_142b22d40;
          if ((int)uStack_270 == 0) {
            if ((int)uStack_280 < 1) {
              bVar29 = false;
            }
            else {
              lVar6 = 0;
              bVar30 = false;
              bVar29 = false;
              do {
                if (local_288[lVar6 * 4 + 2] == 0) {
                  bVar29 = bVar30;
                  if (lVar6 == 0) {
                    bVar29 = true;
                  }
                  local_238 = (undefined8 *)0x0;
                  uStack_230 = (longlong *)0x0;
                  local_228 = local_228 & 0xffffffff00000000;
                  uStack_220 = 0;
                  uStack_218 = 0;
                  FUN_1446ddda2(&local_238,&DAT_149e02088,0);
                  uVar17 = uStack_270;
                  lVar22 = (longlong)(int)uStack_270;
                  uVar14 = (int)uStack_270 + 1;
                  uStack_270 = CONCAT44(uStack_270._4_4_,uVar14);
                  if (uStack_270._4_4_ < uVar14) {
                    FUN_14014a81a(&local_278,uVar17 & 0xffffffff);
                  }
                  puVar11 = (undefined8 *)(local_278 + lVar22 * 0x28);
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  *(undefined4 *)(puVar11 + 2) = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  FUN_1404e49fa(puVar11,&local_238);
                  uVar17 = uStack_220;
                  bVar30 = bVar29;
                }
                else {
                  FUN_1400b22c2(&local_158);
                  FUN_140ded26a(&local_158);
                  FUN_140ded312(&local_158);
                  uVar14 = (int)uStack_150 - 1;
                  if ((int)uStack_150 == 0) {
                    uVar14 = 0;
                  }
                  if (0 < (int)uVar14) {
                    uVar17 = 0;
                    do {
                      uVar24 = *(ushort *)(local_158 + uVar17 * 2);
                      *(ushort *)(local_158 + uVar17 * 2) =
                           (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
                      uVar17 = uVar17 + 1;
                    } while (uVar14 != uVar17);
                  }
                  FUN_14475c2da(&local_158,0x20);
                  FUN_14000bbd8(&local_238,&local_158);
                  uVar17 = uStack_270;
                  lVar22 = (longlong)(int)uStack_270;
                  uVar14 = (int)uStack_270 + 1;
                  uStack_270 = CONCAT44(uStack_270._4_4_,uVar14);
                  if (uStack_270._4_4_ < uVar14) {
                    FUN_14014a81a(&local_278,uVar17 & 0xffffffff);
                  }
                  puVar11 = (undefined8 *)(local_278 + lVar22 * 0x28);
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  *(undefined4 *)(puVar11 + 2) = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  FUN_1404e49fa(puVar11,&local_238);
                  uVar17 = local_158;
                  if (uStack_220 != 0) {
                    FUN_1400020a8();
                    uVar17 = local_158;
                  }
                }
                if (uVar17 != 0) {
                  FUN_1400020a8();
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 < (int)uStack_280);
            }
          }
          else {
            if ((longlong)(int)uStack_280 != 0) {
              lVar6 = 0;
              iVar15 = 0;
              do {
                iVar15 = iVar15 + *(int *)((longlong)local_288 + lVar6 + 0x10);
                lVar6 = lVar6 + 0x20;
              } while ((longlong)(int)uStack_280 << 5 != lVar6);
              if (iVar15 != 0) {
                if ((local_2ec & 1) == 0) {
                  if (local_2e0 == 0) {
                    if (local_98 == 0) {
                      uVar5 = 0;
                      uVar19 = 0;
                      if (param_1[0x1a] == 0) goto LAB_142b23b14;
                      goto LAB_142b23b07;
                    }
                    local_178 = 0;
                    lStack_170 = 0;
                    local_188 = 0;
                    uStack_180 = 0;
                    pppppppuVar9 = &local_a8;
                    if (0xf < local_90) {
                      pppppppuVar9 = local_a8;
                    }
                    FUN_1401d9f72(&local_188,pppppppuVar9);
                    FUN_1400b22c2(&local_1b8);
                    FUN_140ded26a(&local_1b8);
                    FUN_140ded312(&local_1b8);
                    uVar14 = (int)uStack_1b0 - 1;
                    if ((int)uStack_1b0 == 0) {
                      uVar14 = 0;
                    }
                    if (0 < (int)uVar14) {
                      uVar17 = 0;
                      do {
                        uVar24 = *(ushort *)(local_1b8 + uVar17 * 2);
                        *(ushort *)(local_1b8 + uVar17 * 2) =
                             (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
                        uVar17 = uVar17 + 1;
                      } while (uVar14 != uVar17);
                    }
                    FUN_14475c2da(&local_1b8,0x20,0x5f,1);
                    FUN_14475c2da(&local_1b8,0x2e,0x5f);
                    FUN_14000bbd8(&local_238,&local_1b8,local_2e4);
                    FUN_1404e49fa(&local_108,&local_238);
                    if (uStack_220 != 0) {
                      FUN_1400020a8();
                    }
                    local_1e8 = 0;
                    plStack_1e0 = (longlong *)0x0;
                    FUN_14009b010(&local_1e8,1,0);
                    pppppppuVar9 = &local_a8;
                    if (0xf < local_90) {
                      pppppppuVar9 = local_a8;
                    }
                    if ((local_1e8 != 0) && ((*(byte *)(local_1e8 + 1) & 2) == 0)) {
                      FUN_140126aca(local_1e8,pppppppuVar9);
                    }
                    local_248[0] = (longlong *)0x0;
                    local_248[1] = (longlong *)0x0;
                    FUN_14009b010(local_248,1,0);
                    if (local_248[0] != (longlong *)0x0) {
                      FUN_1402afb64(local_248[0],&local_108);
                    }
                    local_298 = (undefined8 *)0x0;
                    plStack_290 = (longlong *)0x0;
                    FUN_14009b010(&local_298,1,0);
                    pppppppuVar9 = &local_a8;
                    if (0xf < local_90) {
                      pppppppuVar9 = local_a8;
                    }
                    if ((local_298 != (undefined8 *)0x0) &&
                       ((*(byte *)((longlong)local_298 + 1) & 2) == 0)) {
                      FUN_140126aca(local_298,pppppppuVar9);
                    }
                    local_2a8 = 0;
                    plStack_2a0 = (longlong *)0x0;
                    FUN_14009b010(&local_2a8,2,0);
                    FUN_1411656cc(&local_2a8);
                    if ((longlong)(int)uStack_270 != 0) {
                      lVar6 = (longlong)(int)uStack_270 * 0x28;
                      lVar22 = local_278;
                      do {
                        local_238 = (undefined8 *)0x0;
                        uStack_230 = (longlong *)0x0;
                        FUN_14009b010(&local_238,1,0);
                        if (local_238 != (undefined8 *)0x0) {
                          FUN_1402afb64(local_238,lVar22);
                        }
                        if (local_2a8 != 0) {
                          local_2f8 = local_2f8 & 0xffffffffffffff00;
                          FUN_140141db6(local_2a8,&local_238);
                        }
                        plVar10 = uStack_230;
                        if (uStack_230 != (longlong *)0x0) {
                          LOCK();
                          plVar23 = uStack_230 + 1;
                          *(int *)plVar23 = (int)*plVar23 + -1;
                          UNLOCK();
                          if ((int)*plVar23 == 0) {
                            (**(code **)*uStack_230)(uStack_230);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar10 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar10 + 0x10))(plVar10);
                            }
                          }
                        }
                        lVar22 = lVar22 + 0x28;
                        lVar6 = lVar6 + -0x28;
                      } while (lVar6 != 0);
                    }
                    FUN_1446ddc76(&local_2c8,"display_name",1);
                    local_228 = local_228 & 0xffffffff00000000;
                    local_238 = (undefined8 *)0x0;
                    uStack_230 = (longlong *)0x0;
                    uStack_220 = 0;
                    uStack_218 = 0;
                    FUN_1446ddda2(&local_238,"credits",0);
                    local_148 = 0;
                    local_158 = 0;
                    uStack_150 = 0;
                    local_140 = 0;
                    uStack_138 = 0;
                    FUN_1446ddda2(&local_158,&DAT_14a177cc1,0);
                    local_2b8 = 0;
                    plStack_2b0 = (longlong *)0x0;
                    FUN_14009b010(&local_2b8,3,0);
                    if (local_2b8 != 0) {
                      local_2f8 = local_2f8 & 0xffffffffffffff00;
                      FUN_140516f2a(local_2b8,&local_2c8,&local_1e8);
                      if (local_2b8 != 0) {
                        local_2f8 = local_2f8 & 0xffffffffffffff00;
                        FUN_14014191c(local_2b8,&local_238,local_248);
                        if (local_2b8 != 0) {
                          local_2f8 = local_2f8 & 0xffffffffffffff00;
                          FUN_14014191c(local_2b8,&local_d8,&local_298);
                          if (local_2b8 != 0) {
                            local_2f8 = local_2f8 & 0xffffffffffffff00;
                            FUN_14014191c(local_2b8,&local_158,&local_2a8);
                          }
                        }
                      }
                    }
                    (**(code **)(*param_1 + 0x330))(param_1,&local_2b8,&local_108);
                    local_2e0 = FUN_1400e3c00(param_1,&local_108,0);
                    plVar10 = plStack_2b0;
                    if (plStack_2b0 != (longlong *)0x0) {
                      LOCK();
                      plVar23 = plStack_2b0 + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*plStack_2b0)(plStack_2b0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                    if (local_140 != 0) {
                      FUN_1400020a8();
                    }
                    if (uStack_220 != 0) {
                      FUN_1400020a8();
                    }
                    plVar10 = plStack_2a0;
                    if (plStack_2a0 != (longlong *)0x0) {
                      LOCK();
                      plVar23 = plStack_2a0 + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*plStack_2a0)(plStack_2a0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                    plVar10 = plStack_290;
                    if (plStack_290 != (longlong *)0x0) {
                      LOCK();
                      plVar23 = plStack_290 + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*plStack_290)(plStack_290);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                    plVar10 = local_248[1];
                    if (local_248[1] != (longlong *)0x0) {
                      LOCK();
                      plVar23 = local_248[1] + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*local_248[1])(local_248[1]);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                    plVar10 = plStack_1e0;
                    if (plStack_1e0 != (longlong *)0x0) {
                      LOCK();
                      plVar23 = plStack_1e0 + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*plStack_1e0)(plStack_1e0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar10 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar10 + 0x10))(plVar10);
                        }
                      }
                    }
                    if (local_1b8 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1401d9a90(&local_188);
                  }
                  local_298 = (undefined8 *)0x0;
                  plStack_290 = (longlong *)0x0;
                  if ((bVar29) && (0 < (int)uStack_280)) {
                    FUN_1400b22c2(&local_238);
                    if (local_298 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    local_298 = local_238;
                    plStack_290 = uStack_230;
                    FUN_140ded26a(&local_298);
                    FUN_140ded312(&local_298);
                    uVar14 = (int)plStack_290 - 1;
                    if ((int)plStack_290 == 0) {
                      uVar14 = 0;
                    }
                    if (0 < (int)uVar14) {
                      uVar17 = 0;
                      do {
                        uVar24 = *(ushort *)((longlong)local_298 + uVar17 * 2);
                        *(ushort *)((longlong)local_298 + uVar17 * 2) =
                             (ushort)(uVar24 - 0x41 < 0x1a) * 0x20 + uVar24;
                        uVar17 = uVar17 + 1;
                      } while (uVar14 != uVar17);
                    }
                    FUN_14475c2da(&local_298,0x20,0x5f);
                    iVar15 = 0;
                  }
                  else {
                    FUN_14020fad6(&local_298,&DAT_149f0f4f8);
                    iVar15 = local_2e8;
                  }
                  FUN_14000bbd8(&local_158,&local_298,iVar15);
                  local_2a8 = 0;
                  plStack_2a0 = (longlong *)0x0;
                  FUN_14009b010(&local_2a8,1,0);
                  if (local_2a8 != 0) {
                    FUN_1402afb64(local_2a8,&local_158);
                  }
                  local_2b8 = 0;
                  plStack_2b0 = (longlong *)0x0;
                  local_2d0 = param_1;
                  FUN_14009b010(&local_2b8,1,0);
                  if (local_2b8 != 0) {
                    FUN_1404a8912(local_2b8,local_2e8);
                  }
                  local_178 = local_178 & 0xffffffff00000000;
                  local_188 = 0;
                  uStack_180 = 0;
                  lStack_170 = 0;
                  uStack_168 = 0;
                  FUN_1446ddda2(&local_188,"entry",0);
                  local_1a8 = 0;
                  local_1b8 = 0;
                  uStack_1b0 = 0;
                  local_1a0 = 0;
                  uStack_198 = 0;
                  FUN_1446ddda2(&local_1b8,"entry_index",0);
                  local_2c8 = 0;
                  plStack_2c0 = (longlong *)0x0;
                  FUN_14009b010(&local_2c8,3,0);
                  if (local_2c8 != 0) {
                    local_2f8 = local_2f8 & 0xffffffffffffff00;
                    FUN_14014191c(local_2c8,&local_188,&local_2a8);
                    if (local_2c8 != 0) {
                      local_2f8 = local_2f8 & 0xffffffffffffff00;
                      FUN_14014191c(local_2c8,&local_1b8,&local_2b8);
                    }
                  }
                  uVar17 = (ulonglong)bVar29;
                  if ((int)(uint)bVar29 < (int)uStack_270) {
                    lVar22 = (ulonglong)bVar29 << 5;
                    lVar6 = (ulonglong)bVar29 * 0x28;
                    iVar15 = (int)uStack_270;
                    do {
                      if (((longlong)uVar17 < (longlong)(int)uStack_280) &&
                         (*(longlong *)((longlong)local_288 + lVar22 + 0x10) != 0)) {
                        local_238 = (undefined8 *)0x0;
                        uStack_230 = (longlong *)0x0;
                        FUN_14009b010(&local_238,1,0);
                        plVar10 = (longlong *)((longlong)local_288 + lVar22);
                        if (0xf < *(ulonglong *)((longlong)local_288 + lVar22 + 0x18)) {
                          plVar10 = (longlong *)*plVar10;
                        }
                        if ((local_238 != (undefined8 *)0x0) &&
                           ((*(byte *)((longlong)local_238 + 1) & 2) == 0)) {
                          FUN_140126aca(local_238,plVar10);
                        }
                        if (local_2c8 != 0) {
                          local_2f8 = local_2f8 & 0xffffffffffffff00;
                          FUN_14014191c(local_2c8,local_278 + lVar6);
                        }
                        plVar10 = uStack_230;
                        if (uStack_230 != (longlong *)0x0) {
                          LOCK();
                          plVar23 = uStack_230 + 1;
                          *(int *)plVar23 = (int)*plVar23 + -1;
                          UNLOCK();
                          if ((int)*plVar23 == 0) {
                            (**(code **)*uStack_230)(uStack_230);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar10 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar10 + 0x10))(plVar10);
                            }
                          }
                        }
                        iVar15 = (int)uStack_270;
                      }
                      uVar17 = uVar17 + 1;
                      lVar22 = lVar22 + 0x20;
                      lVar6 = lVar6 + 0x28;
                    } while ((int)uVar17 < iVar15);
                  }
                  FUN_1447a97f4(&local_238,&local_108);
                  FUN_1447a97f4(local_210,&local_158);
                  local_1e8 = 0;
                  plStack_1e0 = (longlong *)0x0;
                  local_1d8 = 0;
                  local_1d0 = 0;
                  uStack_1c8 = 0;
                  local_248[1] = &local_1e8;
                  local_248[0] = &local_238;
                  FUN_140093e46(&local_1e8,local_248,0);
                  param_1 = local_2d0;
                  (**(code **)(*local_2d0 + 0x338))(local_2d0,&local_2c8,&local_1e8);
                  if (local_1d0 != 0) {
                    FUN_1400020a8();
                  }
                  lVar6 = 0x50;
                  do {
                    if (*(longlong *)((longlong)local_248 + lVar6) != 0) {
                      FUN_1400020a8();
                    }
                    plVar10 = plStack_2c0;
                    lVar6 = lVar6 + -0x28;
                  } while (lVar6 != 0);
                  if (plStack_2c0 != (longlong *)0x0) {
                    LOCK();
                    plVar23 = plStack_2c0 + 1;
                    *(int *)plVar23 = (int)*plVar23 + -1;
                    UNLOCK();
                    if ((int)*plVar23 == 0) {
                      (**(code **)*plStack_2c0)(plStack_2c0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar10 + 0x10))(plVar10);
                      }
                    }
                  }
                  if (local_1a0 != 0) {
                    FUN_1400020a8();
                  }
                  if (lStack_170 != 0) {
                    FUN_1400020a8();
                  }
                  plVar10 = plStack_2b0;
                  if (plStack_2b0 != (longlong *)0x0) {
                    LOCK();
                    plVar23 = plStack_2b0 + 1;
                    *(int *)plVar23 = (int)*plVar23 + -1;
                    UNLOCK();
                    if ((int)*plVar23 == 0) {
                      (**(code **)*plStack_2b0)(plStack_2b0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar10 + 0x10))(plVar10);
                      }
                    }
                  }
                  plVar10 = plStack_2a0;
                  if (plStack_2a0 != (longlong *)0x0) {
                    LOCK();
                    plVar23 = plStack_2a0 + 1;
                    *(int *)plVar23 = (int)*plVar23 + -1;
                    UNLOCK();
                    if ((int)*plVar23 == 0) {
                      (**(code **)*plStack_2a0)(plStack_2a0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar10 + 0x10))(plVar10);
                      }
                    }
                  }
                  if (local_140 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_298 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  local_2e8 = local_2e8 + 1;
                  goto LAB_142b22ccb;
                }
                if (0 < (int)uStack_280) {
                  FUN_1401d7e14(&local_a8);
                  local_2ec = 0;
                }
                goto LAB_142b22ccb;
              }
            }
            pppppppuVar9 = &local_a8;
            if (0xf < local_90) {
              pppppppuVar9 = local_a8;
            }
            local_98 = 0;
            *(undefined1 *)pppppppuVar9 = 0;
            if ((local_2ec & 1) == 0) {
              local_2e4 = local_2e4 + 1;
              local_2ec = (uint)CONCAT71((int7)((ulonglong)pppppppuVar9 >> 8),1);
              local_2e0 = 0;
            }
          }
LAB_142b22ccb:
          FUN_14709b7a5(local_288,uStack_280 & 0xffffffff);
          uVar17 = uStack_280 >> 0x20;
          uStack_280 = uStack_280 & 0xffffffff00000000;
          if ((int)uVar17 != 0) {
            FUN_14709b7cc(&local_288,0);
          }
          pppppppuVar9 = &local_128;
          if (0xf < local_110) {
            pppppppuVar9 = local_128;
          }
          pbVar13 = (byte *)((longlong)pppppppuVar9 + (longlong)iVar27);
          while ((pbVar13 = pbVar13 + 1, (char)uVar16 == '\n' || ((int)uVar16 == 0xd))) {
            iVar27 = iVar27 + 1;
            uVar16 = (ulonglong)*pbVar13;
          }
          if ((int)uVar16 == 0) goto LAB_142b229a9;
LAB_142b22d40:
          if ((char)uVar16 == '\"') {
            iVar28 = iVar27 + 1;
            lVar22 = (longlong)iVar28;
            lVar6 = lVar22;
            iVar15 = iVar28;
            pppppppuVar9 = local_128;
            if (local_110 < 0x10) {
              pppppppuVar9 = &local_128;
            }
            do {
              if (*(char *)((longlong)pppppppuVar9 + lVar6) == '\"') {
                bVar3 = *(byte *)((longlong)pppppppuVar9 + (longlong)iVar15 + 1);
                iVar27 = iVar15 + 1;
                iVar18 = -1;
                if (bVar3 < 0xd) {
                  if ((bVar3 == 0) || (bVar3 == 10)) goto LAB_142b22f0b;
                }
                else {
                  if (bVar3 == 0xd) goto LAB_142b22f0b;
                  if (bVar3 == 0x2c) {
                    iVar27 = iVar15 + 2;
                    iVar18 = -2;
                    goto LAB_142b22f0b;
                  }
                }
              }
              else {
                iVar27 = iVar15;
                if (*(char *)((longlong)pppppppuVar9 + lVar6) == '\0') goto code_r0x000142b22e7e;
              }
              lVar6 = (longlong)(iVar27 + 1);
              iVar15 = iVar27 + 1;
            } while( true );
          }
          pppppppuVar9 = local_128;
          if (local_110 < 0x10) {
            pppppppuVar9 = &local_128;
          }
          uVar8 = (ulonglong)iVar27;
          uVar17 = uVar8;
          uVar26 = uVar8;
          if (uVar8 < local_118) {
            uVar26 = local_118;
          }
          for (; ((0x2c < (byte)uVar16 ||
                  (uVar20 = uVar17, (0x100000002401U >> (uVar16 & 0x3f) & 1) == 0)) &&
                 (uVar20 = uVar26, uVar17 < local_118)); uVar17 = uVar17 + 1) {
            uVar16 = (ulonglong)*(byte *)((longlong)pppppppuVar9 + uVar17 + 1);
          }
          local_228 = 0;
          uStack_220 = 0;
          local_238 = (undefined8 *)0x0;
          uStack_230 = (longlong *)0x0;
          FUN_140cd1a74(&local_238,(undefined1 *)((longlong)pppppppuVar9 + uVar8),
                        (longlong)((int)uVar20 - iVar27));
          uVar16 = uStack_280;
          lVar6 = (longlong)(int)uStack_280;
          uVar14 = (int)uStack_280 + 1;
          uStack_280 = CONCAT44(uStack_280._4_4_,uVar14);
          if (uStack_280._4_4_ < uVar14) {
            FUN_14709b82c(&local_288,uVar16 & 0xffffffff);
          }
          local_288[lVar6 * 4 + 2] = 0;
          (local_288 + lVar6 * 4 + 2)[1] = 0;
          local_288[lVar6 * 4] = 0;
          (local_288 + lVar6 * 4)[1] = 0;
          puVar11 = local_288 + lVar6 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_228;
          *(undefined4 *)((longlong)puVar11 + 4) = local_228._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_220;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_220._4_4_;
          puVar11 = local_288 + lVar6 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_238;
          *(undefined4 *)((longlong)puVar11 + 4) = local_238._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_230;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_230._4_4_;
          local_228 = 0;
          uStack_220 = 0xf;
          local_238 = (undefined8 *)((ulonglong)local_238 & 0xffffffffffffff00);
          FUN_1401d9a90(&local_238);
          iVar27 = (int)uVar20 + 1;
          goto LAB_142b22e37;
        }
LAB_142b229a9:
        pppppppuVar9 = local_128;
        if (local_110 < 0x10) {
          pppppppuVar9 = &local_128;
        }
        local_118 = 0;
        *(undefined1 *)pppppppuVar9 = 0;
        *(longlong *)(local_2d8 + 0x148) = local_250;
        uVar5 = (undefined4)CONCAT71((int7)((ulonglong)local_250 >> 8),1);
        uVar19 = 1;
        if (param_1[0x1a] != 0) {
LAB_142b23b07:
          param_1[0x1a] = 0;
          uVar19 = uVar5;
        }
LAB_142b23b14:
        FUN_14709b7a5(local_288,uStack_280 & 0xffffffff);
        if (local_288 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401d9a90(&local_128);
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        FUN_1401d9a90(&local_a8);
        FUN_1456d172d(local_278,uStack_270 & 0xffffffff);
        if (local_278 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_268 != (char *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_142b22739;
    }
  }
LAB_142b226e9:
  uVar19 = 0;
LAB_142b22739:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
code_r0x000142b22e7e:
  iVar18 = 0;
LAB_142b22f0b:
  iVar18 = (iVar27 - iVar28) + iVar18;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = (undefined8 *)0x0;
  uStack_230 = (longlong *)0x0;
  FUN_14709ec14(&local_238,0x20,(longlong)iVar18);
  pppppppuVar9 = &local_128;
  if (0xf < local_110) {
    pppppppuVar9 = local_128;
  }
  if (iVar18 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    iVar15 = 0;
    do {
      puVar11 = &local_238;
      if (0xf < uStack_220) {
        puVar11 = local_238;
      }
      cVar4 = *(char *)((longlong)pppppppuVar9 + iVar15 + lVar22);
      *(char *)((longlong)puVar11 + uVar16) = cVar4;
      if (cVar4 == '\"') {
        lVar6 = (longlong)iVar15 + 1;
        iVar28 = (int)lVar6;
        if ((iVar28 < iVar18) && (*(char *)((longlong)pppppppuVar9 + lVar6 + lVar22) == '\"')) {
          iVar15 = iVar28;
        }
      }
      iVar15 = iVar15 + 1;
      uVar16 = uVar16 + 1;
    } while (iVar15 < iVar18);
  }
  uVar16 = uVar16 & 0xffffffff;
  if (uVar16 < local_228 || uVar16 - local_228 == 0) {
    puVar11 = &local_238;
    if (0xf < uStack_220) {
      puVar11 = local_238;
    }
    local_228 = uVar16;
    *(undefined1 *)((longlong)puVar11 + uVar16) = 0;
  }
  else {
    FUN_14014a7b6(&local_238,uVar16 - local_228,0);
  }
  uVar16 = uStack_280;
  lVar6 = (longlong)(int)uStack_280;
  uVar14 = (int)uStack_280 + 1;
  uStack_280 = CONCAT44(uStack_280._4_4_,uVar14);
  if (uStack_280._4_4_ < uVar14) {
    FUN_14709b82c(&local_288,uVar16 & 0xffffffff);
  }
  local_288[lVar6 * 4 + 2] = 0;
  (local_288 + lVar6 * 4 + 2)[1] = 0;
  local_288[lVar6 * 4] = 0;
  (local_288 + lVar6 * 4)[1] = 0;
  puVar11 = &local_238;
  if (0xf < uStack_220) {
    puVar11 = local_238;
  }
  FUN_1401d9f72(local_288 + lVar6 * 4,puVar11,local_228);
  FUN_1401d9a90(&local_238);
LAB_142b22e37:
  uVar16 = (ulonglong)iVar27;
  if (local_118 <= uVar16) goto LAB_142b229a9;
  goto LAB_142b229fe;
}



// FUNCTION 142b23c0a FUN_142b23c0a body=1091 status=ok
// SIG undefined FUN_142b23c0a(void)

void FUN_142b23c0a(longlong param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_b8 [36];
  uint local_94;
  uint *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  int local_6c;
  undefined8 local_68;
  int *local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 != *param_3) {
    uVar25 = 0;
    FUN_140220676(param_1,param_2,0);
    lVar3 = *(longlong *)(param_1 + 0x1c8);
    FUN_140e8b8f0(param_1,lVar3,param_3);
    FUN_140220676(param_1,param_3,1);
    lVar23 = *(longlong *)(param_1 + 0x1c8);
    local_90 = (uint *)(lVar3 + 0x80);
    iVar4 = *(int *)(lVar3 + 0x98);
    if (iVar4 == 0) {
      uVar24 = 1;
      iVar13 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar3 + 0x90);
      if (*(uint **)(lVar3 + 0x90) == (uint *)0x0) {
        puVar8 = local_90;
      }
      uVar14 = *puVar8;
      if (uVar14 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        uVar25 = 0;
        uVar24 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar24 = uVar25;
        }
        iVar13 = 0;
        do {
          if (uVar24 == uVar25) goto LAB_142b2401c;
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar8[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar25 = 0;
        iVar13 = 0;
      }
      uVar24 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar24 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar9) {
        iVar9 = iVar4;
      }
    }
    if (iVar9 < iVar4) {
      plVar12 = (longlong *)(lVar23 + 0x70);
      local_78 = lVar23 + 0xa8;
      uVar14 = 0xffffffff;
      local_88 = lVar23;
      local_80 = plVar12;
      do {
        lVar17 = *(longlong *)(lVar3 + 0x70);
        lVar10 = (longlong)iVar9 * 0x20;
        uVar5 = *(uint *)(lVar17 + lVar10);
        uVar2 = *(uint *)(lVar17 + 8 + lVar10);
        uVar11 = uVar5;
        if (uVar2 != 0) {
          uVar19 = uVar2 >> 0xd ^ uVar5 - uVar2;
          uVar18 = uVar19 << 8 ^ (-0x61c88647 - uVar2) - uVar19;
          uVar11 = uVar18 >> 0xd ^ (uVar2 - uVar19) - uVar18;
          uVar19 = uVar11 >> 0xc ^ (uVar19 - uVar18) - uVar11;
          uVar18 = uVar19 << 0x10 ^ (uVar18 - uVar11) - uVar19;
          uVar20 = uVar18 >> 5 ^ (uVar11 - uVar19) - uVar18;
          uVar11 = uVar20 >> 3 ^ (uVar19 - uVar18) - uVar20;
          uVar18 = uVar11 << 10 ^ (uVar18 - uVar20) - uVar11;
          uVar11 = uVar18 >> 0xf ^ uVar20 - (uVar11 + uVar18);
          plVar12 = local_80;
          lVar23 = local_88;
        }
        local_94 = uVar14;
        if (*(int *)(lVar23 + 0x78) != *(int *)(lVar23 + 0xa4)) {
          lVar21 = *(longlong *)(lVar23 + 0xb0);
          if (*(longlong *)(lVar23 + 0xb0) == 0) {
            lVar21 = local_78;
          }
          iVar9 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar23 + 0xb8) - 1U & uVar11) * 4);
          if (iVar9 != -1) {
            lVar21 = *plVar12;
            do {
              lVar22 = (longlong)iVar9 * 0x20;
              if ((*(uint *)(lVar21 + lVar22) == uVar5) && (*(uint *)(lVar21 + lVar22 + 8) == uVar2)
                 ) goto LAB_142b23f4c;
              iVar9 = *(int *)(lVar21 + 0x18 + lVar22);
            } while (iVar9 != -1);
          }
        }
        piVar15 = *(int **)(lVar17 + 0x10 + lVar10);
        iVar4 = *(int *)(lVar23 + 0xc0);
        local_6c = *piVar15;
        if ((longlong)iVar4 == -1) {
          if (((local_6c != 0) && (piVar15[1] != 0)) &&
             (piVar15 = (int *)&DAT_14c948028, local_6c != DAT_14c948000)) goto LAB_142b23f0e;
LAB_142b23fea:
          piVar15 = (int *)((longlong)&DAT_14c948618 + 4);
          local_6c = (int)DAT_14c948618;
        }
        else {
          if (((local_6c == 0) || (iVar9 = piVar15[1], iVar9 == 0)) || (local_6c == DAT_14c948000))
          goto LAB_142b23fea;
          piVar16 = piVar15 + 2;
          if (0 < piVar15[9]) {
            piVar16 = *(int **)(piVar15 + 6);
          }
          if (1 < iVar9) {
            piVar16 = *(int **)(piVar15 + 6);
          }
          if ((iVar4 < 1) || (iVar9 != 1)) {
            if (iVar9 <= iVar4) goto LAB_142b23fea;
            piVar15 = piVar16 + (longlong)iVar4 * 3 + 1;
            local_6c = piVar16[(longlong)iVar4 * 3];
          }
          else {
            if (*(int *)(lVar23 + 0xc4) != 1) {
              piVar16 = (int *)&DAT_14c948618;
            }
            local_6c = *piVar16;
            piVar15 = piVar16 + 1;
          }
        }
LAB_142b23f0e:
        local_58 = lVar10 + lVar17 + 0x10;
        local_68 = *(undefined8 *)piVar15;
        local_60 = &local_6c;
        FUN_14021fdc6(plVar12,local_4c,&local_60,0);
        iVar4 = *(int *)(lVar3 + 0x98);
LAB_142b23f4c:
        uVar14 = uVar14 & ~(uint)uVar24;
        puVar8 = *(uint **)(lVar3 + 0x90);
        if (*(uint **)(lVar3 + 0x90) == (uint *)0x0) {
          puVar8 = local_90;
        }
        iVar9 = (int)uVar25;
        lVar17 = (longlong)iVar9;
        uVar5 = puVar8[lVar17] & uVar14;
        if (uVar5 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar9) {
            iVar7 = iVar9;
          }
          if (iVar6 <= iVar9) break;
          lVar10 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar5 = puVar8[lVar17 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar17 == lVar10) goto LAB_142b2401c;
          }
          uVar25 = (ulonglong)(iVar9 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar24 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
LAB_142b2401c:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2404e FUN_142b2404e body=1394 status=ok
// SIG undefined FUN_142b2404e(void)

void FUN_142b2404e(longlong param_1,uint *param_2,uint *param_3,undefined1 param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [4];
  uint **local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  uint *local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  uint local_64;
  longlong local_60;
  undefined1 *local_58;
  uint local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1447a97f4(local_50,param_3);
  if ((1 < (int)param_2[1]) && (uVar7 = param_3[1], (int)uVar7 < 2)) {
    local_60 = 0;
    if ((*param_2 == 0) || (*param_2 == DAT_14c948000)) {
      local_70._0_4_ = DAT_14c948620;
      local_78 = (uint *)CONCAT44(DAT_14c948618._4_4_,(uint)DAT_14c948618);
    }
    else {
      local_70._0_4_ = *(uint *)(*(longlong **)(param_2 + 6) + 1);
      local_78 = (uint *)**(longlong **)(param_2 + 6);
    }
    if ((((*param_3 == 0) || (uVar7 == 0)) || (*param_3 == DAT_14c948000)) || (uVar7 != 1)) {
      uStack_a0 = DAT_14c948620;
      uVar4 = CONCAT44(DAT_14c948618._4_4_,(uint)DAT_14c948618);
    }
    else {
      if ((int)param_3[9] < 1) {
        param_3 = param_3 + 2;
      }
      else {
        param_3 = *(uint **)(param_3 + 6);
      }
      uStack_a0 = param_3[2];
      uVar4 = *(undefined8 *)param_3;
    }
    local_b8 = &local_78;
    local_58 = &DAT_200000002;
    local_70._4_4_ = (undefined4)uVar4;
    uStack_68 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_64 = uStack_a0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_b0 = 2;
    FUN_140accc74(&local_a8,&local_b8,0);
    FUN_1404e49fa(local_50,&local_a8);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 == local_50[0]) goto LAB_142b244f1;
  FUN_140220676(param_1,param_2,1);
  lVar3 = *(longlong *)(param_1 + 0x1c8);
  iVar13 = *(int *)(lVar3 + 0xc0);
  uVar7 = *param_2;
  if ((longlong)iVar13 == -1) {
    if (((uVar7 != 0) && (param_2[1] != 0)) && (uVar7 != DAT_14c948000)) {
      puVar10 = &DAT_14c948028;
      goto LAB_142b24275;
    }
LAB_142b2452c:
    puVar10 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar7 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar7 == 0) || (uVar12 = param_2[1], uVar12 == 0)) || (uVar7 == DAT_14c948000))
    goto LAB_142b2452c;
    puVar8 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar8 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar12) {
      puVar8 = *(uint **)(param_2 + 6);
    }
    if (uVar12 == 1 && 0 < iVar13) {
      puVar11 = (uint *)&DAT_14c948618;
      if (*(int *)(lVar3 + 0xc4) == 1) {
        puVar11 = puVar8;
      }
      uVar7 = *puVar11;
      puVar10 = (ulonglong *)(puVar11 + 1);
    }
    else {
      if ((int)uVar12 <= iVar13) goto LAB_142b2452c;
      puVar10 = (ulonglong *)(puVar8 + (longlong)iVar13 * 3 + 1);
      uVar7 = puVar8[(longlong)iVar13 * 3];
    }
  }
LAB_142b24275:
  uVar9 = (uint)(*puVar10 >> 0x20);
  uVar12 = uVar7;
  if (*puVar10 >> 0x20 != 0) {
    uVar12 = uVar9 >> 0xd ^ uVar7 - uVar9;
    uVar14 = uVar12 << 8 ^ (-0x61c88647 - uVar12) - uVar9;
    uVar16 = uVar14 >> 0xd ^ (uVar9 - uVar12) - uVar14;
    uVar12 = uVar16 >> 0xc ^ (uVar12 - uVar14) - uVar16;
    uVar17 = uVar12 << 0x10 ^ (uVar14 - uVar16) - uVar12;
    uVar14 = uVar17 >> 5 ^ (uVar16 - uVar12) - uVar17;
    uVar16 = uVar14 >> 3 ^ (uVar12 - uVar17) - uVar14;
    uVar12 = uVar16 << 10 ^ (uVar17 - uVar14) - uVar16;
    uVar12 = uVar12 >> 0xf ^ uVar14 - (uVar16 + uVar12);
  }
  if (*(int *)(lVar3 + 0x78) != *(int *)(lVar3 + 0xa4)) {
    lVar15 = lVar3 + 0xa8;
    if (*(longlong *)(lVar3 + 0xb0) != 0) {
      lVar15 = *(longlong *)(lVar3 + 0xb0);
    }
    iVar13 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar3 + 0xb8) - 1U & uVar12) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x70);
      do {
        lVar15 = (longlong)iVar13 * 0x20;
        if ((*(uint *)(lVar3 + lVar15) == uVar7) &&
           (lVar1 = lVar3 + lVar15, *(uint *)(lVar1 + 8) == uVar9)) {
          if (((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 && lVar1 != 0) &&
             (local_b8 = *(uint ***)(lVar1 + 0x10), local_b8 != (uint **)0x0)) goto LAB_142b244e1;
          break;
        }
        iVar13 = *(int *)(lVar3 + 0x18 + lVar15);
      } while (iVar13 != -1);
    }
  }
  ppuVar5 = (uint **)FUN_14001cc68(0x70,0x10);
  ppuVar5[4] = (uint *)0x0;
  ppuVar5[5] = (uint *)0x0;
  *ppuVar5 = (uint *)0x0;
  ppuVar5[1] = (uint *)0x0;
  ppuVar5[2] = (uint *)0x0;
  ppuVar5[3] = (uint *)0x0;
  *(undefined1 *)((longlong)ppuVar5 + 0x2a) = 0xff;
  ppuVar5[6] = (uint *)0x0;
  ppuVar5[7] = (uint *)0x0;
  ppuVar5[8] = (uint *)0xffffffffffffffff;
  ppuVar5[9] = (uint *)0x0;
  ppuVar5[10] = (uint *)0x0;
  ppuVar5[0xb] = (uint *)0x0;
  ppuVar5[0xc] = (uint *)0x0;
  ppuVar5[0xd] = (uint *)0x0;
  *(undefined2 *)(ppuVar5 + 5) = *(undefined2 *)(param_1 + 0xb6);
  local_b8 = ppuVar5;
  FUN_1447715ec(ppuVar5,param_2);
  *(undefined1 *)((longlong)ppuVar5 + 0x2a) = param_4;
  puVar8 = *(uint **)(param_1 + 0x1c8);
  ppuVar5[0xd] = puVar8;
  uVar7 = puVar8[0x30];
  local_a8 = *(uint *)ppuVar5;
  if ((longlong)(int)uVar7 == -1) {
    if (((local_a8 != 0) && (*(uint *)((longlong)ppuVar5 + 4) != 0)) && (local_a8 != DAT_14c948000))
    {
      puVar11 = (uint *)&DAT_14c948028;
      goto LAB_142b244b1;
    }
LAB_142b2453e:
    puVar11 = (uint *)((longlong)&DAT_14c948618 + 4);
    local_a8 = (uint)DAT_14c948618;
  }
  else {
    if (((local_a8 == 0) || (uVar12 = *(uint *)((longlong)ppuVar5 + 4), uVar12 == 0)) ||
       (local_a8 == DAT_14c948000)) goto LAB_142b2453e;
    ppuVar6 = ppuVar5 + 1;
    if (0 < (int)*(uint *)((longlong)ppuVar5 + 0x24)) {
      ppuVar6 = (uint **)ppuVar5[3];
    }
    if (1 < (int)uVar12) {
      ppuVar6 = (uint **)ppuVar5[3];
    }
    if (uVar12 == 1 && 0 < (int)uVar7) {
      ppuVar5 = (uint **)&DAT_14c948618;
      if (puVar8[0x31] == 1) {
        ppuVar5 = ppuVar6;
      }
      local_a8 = *(uint *)ppuVar5;
      puVar11 = (uint *)((longlong)ppuVar5 + 4);
    }
    else {
      if ((int)uVar12 <= (int)uVar7) goto LAB_142b2453e;
      puVar2 = (uint *)((longlong)ppuVar6 + (longlong)(int)uVar7 * 0xc);
      puVar11 = puVar2 + 1;
      local_a8 = *puVar2;
    }
  }
LAB_142b244b1:
  local_78 = &local_a8;
  uStack_a4 = (undefined4)*(undefined8 *)puVar11;
  uStack_a0 = (uint)((ulonglong)*(undefined8 *)puVar11 >> 0x20);
  local_70 = &local_b8;
  FUN_14021fdc6(puVar8 + 0x1c,local_bc,&local_78,0);
LAB_142b244e1:
  FUN_140e8b8f0(param_1,local_b8,local_50);
LAB_142b244f1:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b245cf FUN_142b245cf body=41 status=ok
// SIG undefined FUN_142b245cf(void)

void FUN_142b245cf(void)

{
  DAT_14c9a1718 = 0;
  if (DAT_14c9a1710 != 0) {
    FUN_1400020a8();
  }
  FUN_14617408e();
  return;
}



// FUNCTION 142b245f8 FUN_142b245f8 body=91 status=ok
// SIG undefined FUN_142b245f8(void)

undefined8 FUN_142b245f8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 142b24654 FUN_142b24654 body=165 status=ok
// SIG undefined FUN_142b24654(void)

void FUN_142b24654(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar3 + 0x118))(plVar3);
    if (cVar4 != '\0') {
      local_20 = *(undefined1 *)(param_1 + 0x22);
      local_30 = *(undefined8 *)(param_1 + 0x10);
      local_28 = *(undefined8 *)(param_1 + 0x18);
      (**(code **)(*plVar3 + 0x120))(plVar3,local_28,&local_30,param_1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b246fa FUN_142b246fa body=457 status=ok
// SIG undefined FUN_142b246fa(void)

undefined8 FUN_142b246fa(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68 [3];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_2 + 6);
  if (*param_2 == 2 && plVar2 != (longlong *)0x0) {
    lVar10 = *plVar2;
    if (((lVar10 != 0) && (1 < (int)plVar2[1] + 1U)) && (DAT_14c9a1ab0 != 0)) {
      lVar6 = FUN_142b27e7a(DAT_14c9a1ab0,plVar2);
      if (lVar6 != 0) {
        local_70 = lVar10;
        FUN_1446dcdd4(local_68);
        FUN_140067796(lVar6,*(undefined8 *)(param_1 + 8),local_68);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else if ((*param_2 == 4 && plVar2 != (longlong *)0x0) && (plVar2[1] != 0)) {
    plVar3 = *(longlong **)(param_1 + 8);
    if ((longlong)DAT_14c9a1698 == 0) {
      lVar10 = 0;
    }
    else {
      puVar1 = DAT_14c9a1690 + (longlong)DAT_14c9a1698 * 3;
      puVar9 = DAT_14c9a1690;
      lVar6 = 0;
      do {
        piVar4 = (int *)*puVar9;
        lVar10 = lVar6;
        if (*piVar4 == 2) {
          puVar7 = (undefined8 *)FUN_142b15de0(param_2,piVar4,1);
          if (1 < *(uint *)(puVar7 + 1)) {
            FUN_1446f470e(local_68,*puVar7);
            if ((longlong)*(int *)(puVar9 + 2) != 0) {
              lVar8 = 0;
              do {
                lVar10 = local_68[0];
                if (*(longlong *)(puVar9[1] + lVar8) == local_68[0]) break;
                lVar8 = lVar8 + 8;
                lVar10 = lVar6;
              } while ((longlong)*(int *)(puVar9 + 2) * 8 != lVar8);
            }
          }
        }
        else if ((*(int *)(puVar9 + 2) != 0) &&
                (iVar5 = FUN_141737e1a(param_2,piVar4,1), iVar5 == 2)) {
          lVar10 = *(longlong *)puVar9[1];
        }
        puVar9 = puVar9 + 3;
        lVar6 = lVar10;
      } while (puVar9 != puVar1);
    }
    (**(code **)(*plVar3 + 8))(plVar3,plVar2 + 1,lVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142b248e2 FUN_142b248e2 body=12 status=ok
// SIG undefined FUN_142b248e2(void)

void FUN_142b248e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b248eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b248ee FUN_142b248ee body=29 status=ok
// SIG undefined FUN_142b248ee(void)

undefined8 FUN_142b248ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2493c FUN_142b2493c body=12 status=ok
// SIG undefined FUN_142b2493c(void)

void FUN_142b2493c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b24945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b24948 FUN_142b24948 body=29 status=ok
// SIG undefined FUN_142b24948(void)

undefined8 FUN_142b24948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b24965 FUN_142b24965 body=1275 status=ok
// SIG undefined FUN_142b24965(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b24965(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446ddc76(&DAT_14c9a1318,"nexus",1);
  FUN_145d6a258();
  atexit((_func_5014 *)&LAB_142b207c8);
  FUN_1446ddc76(&DAT_14c9a1398,"AssetRegistry",1);
  local_54 = CONCAT31(local_54._1_3_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14c9a13a0,L"gbx.nexus.EnableNexusConfigDataNodeMalloc",&local_54,
                L"Allows the use of a short-lived buffer for temporary nexus config data nodes containers during nexus initialization"
               );
  atexit(FUN_142b20aea);
  _DAT_14c9a1404 = 0;
  FUN_14052b5e0(&DAT_14c9a1400,"target",0);
  _DAT_14c9a1410 = "target";
  _DAT_14c9a141c = 0;
  FUN_14052b5e0(&DAT_14c9a1418,&DAT_14a176ddc,0);
  _DAT_14c9a1428 = &DAT_14a176ddc;
  _DAT_14c9a1434 = 0;
  FUN_14052b5e0(&DAT_14c9a1430,"default",0);
  _DAT_14c9a1440 = "default";
  _DAT_14c9a144c = 0;
  FUN_14052b5e0(&DAT_14c9a1448,"schema",0);
  _DAT_14c9a1458 = "schema";
  FUN_1446f470e(&DAT_14c9a1460,L"NexusTag",1);
  FUN_1446f470e(&DAT_14c9a1468,L"NexusObjs",1);
  FUN_1446ddc76(&DAT_14c9a1470,"ArraySizeEnum",1);
  FUN_1446f470e(&DAT_14c9a1478,L"InternalNexusIgnoreEditorOnly",1);
  FUN_1446ddc76(&DAT_14c9a1480,"NexusSerializeDefaults",1);
  ram0x00014c9a148c = 0;
  FUN_14052b5e0(&DAT_14c9a1488,"assetpath",0);
  _DAT_14c9a1498 = "assetpath";
  ram0x00014c9a14a4 = 0;
  FUN_14052b5e0(&DAT_14c9a14a0,"packagename",0);
  _DAT_14c9a14b0 = "packagename";
  ram0x00014c9a14bc = 0;
  FUN_14052b5e0(&DAT_14c9a14b8,"assetname",0);
  _DAT_14c9a14c8 = "assetname";
  ram0x00014c9a14d4 = 0;
  FUN_14052b5e0(&DAT_14c9a14d0,"subpathstring",0);
  _DAT_14c9a14e0 = "subpathstring";
  DAT_14c9a1508 = 0;
  DAT_14c9a1510 = 0;
  DAT_14c9a14e8 = 0;
  _DAT_14c9a14f0 = 0;
  _DAT_14c9a1514 = 0xffffffff00000080;
  DAT_14c9a151c = 0;
  DAT_14c9a1528 = 0;
  DAT_14c9a1530 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a1538);
  atexit(FUN_142b20b91);
  DAT_14c9a1560 = 0;
  DAT_14c9a1568 = 0;
  DAT_14c9a1540 = 0;
  _DAT_14c9a1548 = 0;
  _DAT_14c9a156c = 0xffffffff00000080;
  DAT_14c9a1574 = 0;
  DAT_14c9a1580 = 0;
  DAT_14c9a1588 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a1590);
  atexit(FUN_142b20bba);
  DAT_14c9a15b8 = 0;
  DAT_14c9a15c0 = 0;
  DAT_14c9a1598 = 0;
  _DAT_14c9a15a0 = 0;
  _DAT_14c9a15c4 = 0xffffffff00000080;
  DAT_14c9a15cc = 0;
  DAT_14c9a15d8 = 0;
  DAT_14c9a15e0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a15e8);
  atexit(FUN_142b20be3);
  _DAT_14c9a1730 = 0;
  uRam000000014c9a1738 = 0;
  _DAT_14c9a1740 = 0;
  DAT_14c9a1748 = 0;
  uRam000000014c9a1750 = 0;
  FUN_1446ddda2(&DAT_14c9a1730,"_array_enum",0);
  atexit((_func_5014 *)&LAB_142b20c0c);
  FUN_1400b22c2(&DAT_14c9a15f0,"NexusSerialized");
  atexit((_func_5014 *)&LAB_142b20c1d);
  FUN_1400b22c2(&DAT_14c9a1600,&DAT_14a1778fd);
  atexit((_func_5014 *)&LAB_142b20c2e);
  local_54 = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c9a1610,L"gbx.nexus.LogElementDetails",&local_54,
                L"Controls the level of detail present when a Nexus element is dumped to the log\n<=0: Identifier\n  1: Identifier + Store\n  2: Identifier + Store + Active Elements\n  3: Identifier + Store + All Elements"
               );
  atexit(FUN_142b20c3f);
  local_54 = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c9a1628,L"gbx.nexus.LogSourceDetails",&local_54,
                L"Controls the level of detail present when a Nexus source is dumped to the log\n<=0: Name + Layer\n  1: Path + Layer\n  2: Path + Layer + Details\n  3: Path + Layer + Details + Timestamp"
               );
  atexit(FUN_142b20c84);
  _DAT_14c9a1660 = 0;
  _DAT_14c9a1668 = 0;
  _DAT_14c9a1640 = 0;
  uRam000000014c9a1648 = 0;
  _DAT_14c9a166c = 0xffffffff00000080;
  _DAT_14c9a1674 = 0;
  DAT_14c9a1680 = 0;
  _DAT_14c9a1688 = 0;
  atexit(FUN_142b20cc9);
  DAT_14c9a1690 = 0;
  _DAT_14c9a1698 = 0;
  atexit(FUN_142b20f03);
  _DAT_14c9a16a8 = 0;
  LOCK();
  DAT_14c9a16a0 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_142b20f34);
  _DAT_14c9a16b8 = &LAB_142b20f39;
  _DAT_14c9a16c0 = 0x439b0000;
  DAT_14c9a16c4 = 1;
  DAT_14c9a16b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a16b0;
  atexit((_func_5014 *)&LAB_142b20f3e);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b24e64 FUN_142b24e64 body=1513 status=ok
// SIG undefined FUN_142b24e64(void)

void FUN_142b24e64(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  
  cVar5 = (**(code **)(*param_1 + 0x308))();
  if ((cVar5 == '\0') || ((int)param_1[9] == 0)) {
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_142b20da6();
  iVar3 = (int)param_1[0x54];
  if (iVar3 == 0) {
    uVar27 = 1;
    uVar26 = 0;
    iVar15 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x51);
    }
    uVar24 = *puVar7;
    if (uVar24 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      uVar26 = 0;
      uVar27 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar27 = uVar26;
      }
      iVar15 = 0;
      do {
        if (uVar27 == uVar26) goto LAB_142b24f61;
        iVar15 = iVar15 + 0x20;
        uVar24 = puVar7[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar26 = 0;
      iVar15 = 0;
    }
    uVar27 = (ulonglong)(-uVar24 & uVar24);
    uVar2 = uVar27 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar10 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
  }
  if (iVar10 == iVar3) {
LAB_142b24f61:
    LOCK();
    *(undefined1 *)((longlong)param_1 + 0x154) = 0;
    UNLOCK();
    FUN_1410f1df6(param_1 + 0x39,0);
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 0) {
      FUN_141189b3c(param_1 + 10,0);
    }
    FUN_141189718(param_1 + 0xc,0);
    return;
  }
  uVar24 = 0xffffffff;
  iVar6 = iVar3;
LAB_142b24fde:
  piVar14 = *(int **)(param_1[0x4f] + 0x10 + (longlong)iVar10 * 0x20);
  if (piVar14 != (int *)0x0) {
    puVar7 = (uint *)&DAT_14c948618;
    if (*piVar14 != 0) {
      iVar12 = piVar14[1];
      puVar7 = (uint *)&DAT_14c948618;
      if ((iVar12 != 0) && (puVar7 = (uint *)&DAT_14c948618, *piVar14 != DAT_14c948000)) {
        if ((iVar12 < 2) && (piVar14[9] < 1)) {
          puVar20 = (uint *)(piVar14 + 2);
        }
        else {
          puVar20 = *(uint **)(piVar14 + 6);
        }
        puVar7 = (uint *)&DAT_14c948618;
        if (0 < iVar12) {
          puVar7 = puVar20;
        }
      }
    }
    uVar11 = *puVar7;
    uVar4 = puVar7[2];
    uVar16 = uVar11;
    if (uVar4 != 0) {
      uVar17 = uVar4 >> 0xd ^ uVar11 - uVar4;
      uVar22 = uVar17 << 8 ^ (-0x61c88647 - uVar4) - uVar17;
      uVar16 = uVar22 >> 0xd ^ (uVar4 - uVar17) - uVar22;
      uVar25 = uVar16 >> 0xc ^ (uVar17 - uVar22) - uVar16;
      uVar17 = uVar25 << 0x10 ^ (uVar22 - uVar16) - uVar25;
      uVar22 = uVar17 >> 5 ^ (uVar16 - uVar25) - uVar17;
      uVar16 = uVar22 >> 3 ^ (uVar25 - uVar17) - uVar22;
      uVar17 = uVar16 << 10 ^ (uVar17 - uVar22) - uVar16;
      uVar16 = uVar17 >> 0xf ^ uVar22 - (uVar16 + uVar17);
    }
    if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
      plVar18 = (longlong *)param_1[0x41];
      if ((longlong *)param_1[0x41] == (longlong *)0x0) {
        plVar18 = param_1 + 0x40;
      }
      iVar12 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[0x42] - 1U & uVar16) * 4);
      if (iVar12 != -1) {
        puVar19 = (undefined8 *)(param_1[0x4f] + (longlong)iVar10 * 0x20 + 0x10);
        lVar21 = param_1[0x39];
        do {
          lVar23 = (longlong)iVar12 * 0x20;
          if ((*(uint *)(lVar21 + lVar23) == uVar11) &&
             (lVar1 = lVar21 + lVar23, *(uint *)(lVar1 + 8) == uVar4)) {
            if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0 && lVar1 != 0) {
              *(undefined8 *)(piVar14 + 0xc) = *(undefined8 *)(lVar1 + 0x10);
              piVar14 = (int *)*puVar19;
              piVar8 = *(int **)(*(longlong *)(piVar14 + 0xc) + 8);
              if (piVar8 == (int *)0x0) {
                piVar8 = &DAT_14c9485f0;
              }
              iVar10 = *piVar14;
              if (*piVar8 == iVar10) goto LAB_142b25306;
              puVar7 = (uint *)&DAT_14c948618;
              if (iVar10 != 0) {
                iVar6 = piVar14[1];
                puVar7 = (uint *)&DAT_14c948618;
                if ((iVar6 != 0) && (puVar7 = (uint *)&DAT_14c948618, iVar10 != DAT_14c948000)) {
                  if ((iVar6 < 2) && (piVar14[9] < 1)) {
                    puVar20 = (uint *)(piVar14 + 2);
                  }
                  else {
                    puVar20 = *(uint **)(piVar14 + 6);
                  }
                  puVar7 = (uint *)&DAT_14c948618;
                  if (0 < iVar6) {
                    puVar7 = puVar20;
                  }
                }
              }
              uVar11 = *puVar7;
              uVar4 = puVar7[2];
              uVar16 = uVar11;
              if (uVar4 != 0) {
                uVar17 = uVar4 >> 0xd ^ uVar11 - uVar4;
                uVar16 = uVar17 << 8 ^ (-0x61c88647 - uVar4) - uVar17;
                uVar22 = uVar16 >> 0xd ^ (uVar4 - uVar17) - uVar16;
                uVar25 = uVar22 >> 0xc ^ (uVar17 - uVar16) - uVar22;
                uVar17 = uVar25 << 0x10 ^ (uVar16 - uVar22) - uVar25;
                uVar16 = uVar17 >> 5 ^ (uVar22 - uVar25) - uVar17;
                uVar22 = uVar16 >> 3 ^ (uVar25 - uVar17) - uVar16;
                uVar17 = uVar22 << 10 ^ (uVar17 - uVar16) - uVar22;
                uVar16 = uVar17 >> 0xf ^ uVar16 - (uVar22 + uVar17);
              }
              if ((int)param_1[0x44] == *(int *)((longlong)param_1 + 0x24c)) goto LAB_142b252fd;
              plVar18 = (longlong *)param_1[0x4b];
              if ((longlong *)param_1[0x4b] == (longlong *)0x0) {
                plVar18 = param_1 + 0x4a;
              }
              iVar10 = *(int *)((longlong)plVar18 +
                               (ulonglong)((int)param_1[0x4c] - 1U & uVar16) * 4);
              if (iVar10 == -1) goto LAB_142b252fd;
              lVar21 = param_1[0x43];
              goto LAB_142b252ce;
            }
            break;
          }
          iVar12 = *(int *)(lVar21 + 0x18 + lVar23);
        } while (iVar12 != -1);
      }
    }
  }
  goto LAB_142b25332;
  while (iVar10 = *(int *)(lVar21 + 0x18 + lVar23), iVar10 != -1) {
LAB_142b252ce:
    lVar23 = (longlong)iVar10 * 0x20;
    if ((*(uint *)(lVar21 + lVar23) == uVar11) &&
       (lVar1 = lVar21 + lVar23, *(uint *)(lVar1 + 8) == uVar4)) {
      if (lVar1 != 0) {
        uVar9 = *(undefined8 *)(lVar1 + 0x10);
        goto LAB_142b252ff;
      }
      break;
    }
  }
LAB_142b252fd:
  uVar9 = 0;
LAB_142b252ff:
  *(undefined8 *)(piVar14 + 0xc) = uVar9;
  piVar14 = (int *)*puVar19;
LAB_142b25306:
  if (piVar14 == (int *)0x0) {
    piVar14 = (int *)0x0;
  }
  else if (*(longlong *)(piVar14 + 0xc) != 0) {
    FUN_1407d81de(*(longlong *)(piVar14 + 0xc) + 8);
    piVar14 = (int *)*puVar19;
  }
  FUN_140220358(piVar14);
  iVar6 = (int)param_1[0x54];
LAB_142b25332:
  uVar24 = uVar24 & ~(uint)uVar27;
  puVar7 = (uint *)param_1[0x53];
  if ((uint *)param_1[0x53] == (uint *)0x0) {
    puVar7 = (uint *)(param_1 + 0x51);
  }
  iVar10 = (int)uVar26;
  lVar21 = (longlong)iVar10;
  uVar11 = puVar7[lVar21] & uVar24;
  if (uVar11 == 0) {
    iVar12 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar12 = iVar6 + -1;
    }
    iVar12 = iVar12 >> 5;
    iVar15 = iVar15 + 0x20;
    iVar13 = iVar12;
    if (iVar12 < iVar10) {
      iVar13 = iVar10;
    }
    if (iVar10 < iVar12) {
      lVar23 = 0;
      do {
        uVar11 = puVar7[lVar21 + lVar23 + 1];
        if (uVar11 != 0) {
          uVar26 = (ulonglong)(iVar10 + (int)lVar23 + 1);
          uVar24 = 0xffffffff;
          goto LAB_142b253b9;
        }
        iVar15 = iVar15 + 0x20;
        lVar23 = lVar23 + 1;
      } while (iVar13 - lVar21 != lVar23);
      uVar24 = 0xffffffff;
      lVar21 = (longlong)iVar13;
    }
    uVar26 = lVar21 + 1U & 0xffffffff;
    iVar10 = iVar6;
  }
  else {
LAB_142b253b9:
    uVar27 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar27 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar10 = (iVar15 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 == iVar3) goto LAB_142b24f61;
  goto LAB_142b24fde;
}



// FUNCTION 142b2544d FUN_142b2544d body=166 status=ok
// SIG undefined FUN_142b2544d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2544d(void)

{
  _DAT_14c9a17b8 = 0;
  if (DAT_14c9a17b0 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c9a1778 = 0;
  if (DAT_14c9a177c != 0) {
    FUN_144727cd0(&DAT_14c9a1770,0);
  }
  _DAT_14c9a17a0 = 0xffffffff;
  _DAT_14c9a1798 = 0;
  if (0x80 < DAT_14c9a179c) {
    DAT_14c9a179c = 0x80;
    FUN_1446efbd8(&DAT_14c9a1780,0);
  }
  if (DAT_14c9a1790 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1770 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b2552c FUN_142b2552c body=69 status=ok
// SIG undefined FUN_142b2552c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2552c(void)

{
  _DAT_14c9a17f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2556e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1800,1);
  return;
}



// FUNCTION 142b25573 FUN_142b25573 body=69 status=ok
// SIG undefined FUN_142b25573(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b25573(void)

{
  _DAT_14c9a1808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b255b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1810,1);
  return;
}



// FUNCTION 142b255b8 FUN_142b255b8 body=406 status=ok
// SIG undefined FUN_142b255b8(void)

void FUN_142b255b8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  lVar4 = DAT_14c9a1ab0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c9a1ab0 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar8 = *param_1;
    lVar9 = (longlong)(int)param_1[1] * 0x10 + lVar8;
    lVar1 = DAT_14c9a1ab0 + 0x310;
    do {
      FUN_14000bbd8(local_68,lVar8,0);
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_70,local_68,1);
      if (*(int *)(lVar4 + 0x2e0) != *(int *)(lVar4 + 0x30c)) {
        uVar3 = (uint)((ulonglong)local_70 >> 0x10);
        uVar6 = (uint)local_70 & 0xffff;
        lVar5 = *(longlong *)(lVar4 + 0x318);
        if (*(longlong *)(lVar4 + 0x318) == 0) {
          lVar5 = lVar1;
        }
        iVar7 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar4 + 800) - 1U &
                                 (int)((ulonglong)local_70 >> 0x20) +
                                 ((uint)local_70 << 0x10 | uVar6) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                 + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(lVar4 + 0x2d8) + (longlong)iVar7 * 0x18);
            if (*plVar2 == local_70) {
              if ((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) &&
                 (lVar5 = plVar2[1], lVar5 != 0)) {
                *(undefined1 *)(lVar5 + 0x35) = 1;
              }
              break;
            }
            iVar7 = (int)plVar2[2];
          } while (iVar7 != -1);
        }
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2574f FUN_142b2574f body=69 status=ok
// SIG undefined FUN_142b2574f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2574f(void)

{
  _DAT_14c9a1818 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b25791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1820,1);
  return;
}



// FUNCTION 142b25794 FUN_142b25794 body=412 status=ok
// SIG undefined FUN_142b25794(void)

void FUN_142b25794(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  lVar4 = DAT_14c9a1ab0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14c9a1ab0 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar8 = *param_1;
    lVar9 = (longlong)(int)param_1[1] * 0x10 + lVar8;
    lVar1 = DAT_14c9a1ab0 + 0x310;
    do {
      FUN_14000bbd8(local_68,lVar8,0);
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_70,local_68,1);
      if (*(int *)(lVar4 + 0x2e0) != *(int *)(lVar4 + 0x30c)) {
        uVar3 = (uint)((ulonglong)local_70 >> 0x10);
        uVar6 = (uint)local_70 & 0xffff;
        lVar5 = *(longlong *)(lVar4 + 0x318);
        if (*(longlong *)(lVar4 + 0x318) == 0) {
          lVar5 = lVar1;
        }
        iVar7 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(lVar4 + 800) - 1U &
                                 (int)((ulonglong)local_70 >> 0x20) +
                                 ((uint)local_70 << 0x10 | uVar6) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                 + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(lVar4 + 0x2d8) + (longlong)iVar7 * 0x18);
            if (*plVar2 == local_70) {
              if (((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) &&
                  (lVar5 = plVar2[1], lVar5 != 0)) && (*(int *)(lVar5 + 8) != 0)) {
                *(undefined1 *)(lVar5 + 0x35) = 0;
              }
              break;
            }
            iVar7 = (int)plVar2[2];
          } while (iVar7 != -1);
        }
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != lVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b25931 FUN_142b25931 body=69 status=ok
// SIG undefined FUN_142b25931(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b25931(void)

{
  _DAT_14c9a1828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b25973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1830,1);
  return;
}



// FUNCTION 142b25976 FUN_142b25976 body=69 status=ok
// SIG undefined FUN_142b25976(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b25976(void)

{
  _DAT_14c9a1838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b259b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1840,1);
  return;
}



// FUNCTION 142b259bc FUN_142b259bc body=1532 status=ok
// SIG undefined FUN_142b259bc(void)

void FUN_142b259bc(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  bool bVar25;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_cc;
  uint *local_c8;
  ulonglong local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  short *local_98;
  undefined8 uStack_90;
  uint local_88;
  int iStack_84;
  uint local_80;
  ulonglong local_7c;
  uint *local_70;
  int local_64;
  ulonglong local_60;
  
  lVar3 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c9a1ab0 != 0) {
    local_98 = (short *)0x0;
    uStack_90 = 0;
    local_d8 = param_1;
    if (0 < (int)param_1[1]) {
      FUN_1403ed7b2(&local_98,*(undefined4 *)(DAT_14c9a1ab0 + 0xd0),1);
      if ((longlong)(int)local_d8[1] != 0) {
        lVar16 = *local_d8;
        lVar14 = (longlong)(int)local_d8[1] * 0x10 + lVar16;
        do {
          FUN_14000bbd8(&local_88,lVar16,0);
          iVar12 = *(int *)(lVar3 + 0x138);
          if ((longlong)iVar12 == -1) {
            if (((local_88 != 0) && (iStack_84 != 0)) &&
               (puVar9 = &DAT_14c948028, uVar4 = local_88, local_88 != DAT_14c948000))
            goto LAB_142b25b19;
LAB_142b25c5a:
            puVar9 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
            uVar4 = (uint)DAT_14c948618;
          }
          else {
            if (((local_88 == 0) || (iStack_84 == 0)) || (local_88 == DAT_14c948000))
            goto LAB_142b25c5a;
            puVar5 = &local_80;
            if (0 < local_64) {
              puVar5 = local_70;
            }
            if (1 < iStack_84) {
              puVar5 = local_70;
            }
            if (iStack_84 == 1 && 0 < iVar12) {
              puVar9 = (ulonglong *)(local_70 + 1);
              if (local_64 < 1) {
                puVar9 = &local_7c;
              }
              bVar25 = *(int *)(lVar3 + 0x13c) != 1;
              if (bVar25) {
                puVar5 = (uint *)&DAT_14c948618;
              }
              uVar4 = *puVar5;
              if (bVar25) {
                puVar9 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
              }
            }
            else {
              if (iStack_84 <= iVar12) goto LAB_142b25c5a;
              puVar9 = (ulonglong *)(puVar5 + (longlong)iVar12 * 3 + 1);
              uVar4 = puVar5[(longlong)iVar12 * 3];
            }
          }
LAB_142b25b19:
          uVar24 = (uint)(*puVar9 >> 0x20);
          uVar10 = uVar4;
          if (*puVar9 >> 0x20 != 0) {
            uVar18 = uVar24 >> 0xd ^ uVar4 - uVar24;
            uVar10 = uVar18 << 8 ^ (-0x61c88647 - uVar18) - uVar24;
            uVar21 = uVar10 >> 0xd ^ (uVar24 - uVar18) - uVar10;
            uVar18 = uVar21 >> 0xc ^ (uVar18 - uVar10) - uVar21;
            uVar10 = uVar18 << 0x10 ^ (uVar10 - uVar21) - uVar18;
            uVar21 = uVar10 >> 5 ^ (uVar21 - uVar18) - uVar10;
            uVar18 = uVar21 >> 3 ^ (uVar18 - uVar10) - uVar21;
            uVar10 = uVar18 << 10 ^ (uVar10 - uVar21) - uVar18;
            uVar10 = uVar10 >> 0xf ^ uVar21 - (uVar18 + uVar10);
          }
          if (*(int *)(lVar3 + 0xf0) != *(int *)(lVar3 + 0x11c)) {
            lVar17 = *(longlong *)(lVar3 + 0x128);
            if (*(longlong *)(lVar3 + 0x128) == 0) {
              lVar17 = lVar3 + 0x120;
            }
            iVar12 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar3 + 0x130) - 1U & uVar10) * 4);
            if (iVar12 != -1) {
              lVar17 = *(longlong *)(lVar3 + 0xe8);
              do {
                lVar19 = (longlong)iVar12;
                if ((*(uint *)(lVar17 + lVar19 * 0x18) == uVar4) &&
                   (lVar1 = lVar17 + lVar19 * 0x18, *(uint *)(lVar1 + 8) == uVar24)) {
                  if ((short *)(lVar1 + 0xc) != (short *)0x0 && lVar1 != 0) {
                    *(undefined1 *)((longlong)local_98 + (longlong)*(short *)(lVar1 + 0xc)) = 1;
                  }
                  break;
                }
                iVar12 = *(int *)(lVar17 + 0x10 + lVar19 * 0x18);
              } while (iVar12 != -1);
            }
          }
          if (local_70 != (uint *)0x0) {
            FUN_1400020a8();
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar16 != lVar14);
      }
    }
    puVar5 = (uint *)(lVar3 + 0x80);
    uVar4 = *(uint *)(lVar3 + 0x98);
    uVar11 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar23 = 1;
      uVar15 = 0;
      iVar12 = 0;
      uVar10 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar3 + 0x90);
      if (*(uint **)(lVar3 + 0x90) == (uint *)0x0) {
        puVar6 = puVar5;
      }
      uVar10 = *puVar6;
      if (uVar10 == 0) {
        iVar12 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar12 = uVar4 - 1;
        }
        uVar15 = 0;
        uVar23 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar23 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar23 == uVar15) goto LAB_142b25d2a;
          iVar12 = iVar12 + 0x20;
          uVar10 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar23 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar23 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar10 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar4 <= (int)uVar10) {
        uVar10 = uVar4;
      }
    }
    if (uVar10 != uVar4) {
      uVar24 = 0xffffffff;
      plVar22 = local_d8;
      local_c8 = puVar5;
      local_c0 = uVar11;
      do {
        lVar16 = (longlong)(int)uVar10 * 0x18 + *(longlong *)(lVar3 + 0x70);
        if ((int)plVar22[1] < 1) {
LAB_142b25dd7:
          local_cc = iVar12;
          FUN_140056680(&local_88,&DAT_149dfb77a);
          iVar12 = *(int *)(lVar3 + 0xd0);
          if (0 < iVar12) {
            lVar17 = 0;
            lVar14 = 0;
            do {
              iVar13 = *(int *)(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x188) + lVar14 * 4);
              if ((iVar13 != 0) &&
                 (((int)uStack_90 < 1 || (*(char *)((longlong)local_98 + lVar14) != '\0')))) {
                local_b8 = (undefined2 *)0x0;
                uStack_b0 = 0;
                FUN_1400b2348(*(longlong *)(lVar3 + 0xd8) + lVar17,&local_b8,1);
                puVar20 = &DAT_149dfb77a;
                if ((int)uStack_b0 != 0) {
                  puVar20 = local_b8;
                }
                FUN_140002266(&local_a8,L"%ls[%d] ",puVar20,iVar13);
                iVar12 = local_a0 + -1;
                if (local_a0 == 0) {
                  iVar12 = 0;
                }
                FUN_1400020e8(&local_88,local_a8,iVar12);
                if (local_a8 != 0) {
                  FUN_1400020a8();
                }
                if (local_b8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                iVar12 = *(int *)(lVar3 + 0xd0);
              }
              lVar14 = lVar14 + 1;
              lVar17 = lVar17 + 0x98;
            } while (lVar14 < iVar12);
          }
          if (CONCAT44(iStack_84,local_88) != 0) {
            FUN_1400020a8();
          }
          uVar4 = *(uint *)(lVar3 + 0x98);
          uVar11 = local_c0;
          puVar5 = local_c8;
          plVar22 = local_d8;
          iVar12 = local_cc;
        }
        else if (0 < (longlong)(int)uStack_90) {
          lVar14 = 0;
          do {
            if ((*(int *)(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x188) + lVar14 * 4) != 0) &&
               (*(char *)((longlong)local_98 + lVar14) != '\0')) goto LAB_142b25dd7;
            lVar14 = lVar14 + 1;
          } while ((int)uStack_90 != lVar14);
        }
        uVar24 = uVar24 & ~(uint)uVar23;
        puVar6 = *(uint **)(lVar3 + 0x90);
        if (*(uint **)(lVar3 + 0x90) == (uint *)0x0) {
          puVar6 = puVar5;
        }
        iVar13 = (int)uVar15;
        lVar16 = (longlong)iVar13;
        uVar10 = puVar6[lVar16] & uVar24;
        if (uVar10 == 0) {
          iVar7 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar7 = uVar4 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar13) {
            iVar8 = iVar13;
          }
          if (iVar13 < iVar7) {
            lVar14 = 0;
            do {
              uVar10 = puVar6[lVar16 + lVar14 + 1];
              if (uVar10 != 0) {
                uVar15 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                uVar24 = 0xffffffff;
                goto LAB_142b25f69;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar8 - lVar16 != lVar14);
            uVar24 = 0xffffffff;
            iVar13 = iVar8;
          }
          uVar15 = (ulonglong)(iVar13 + 1);
          puVar5 = local_c8;
          plVar22 = local_d8;
          uVar10 = uVar4;
        }
        else {
LAB_142b25f69:
          uVar23 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar23 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar10 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar10) {
            uVar10 = uVar4;
          }
        }
      } while (uVar10 != (uint)uVar11);
    }
LAB_142b25d2a:
    if (local_98 != (short *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b25fb9 FUN_142b25fb9 body=69 status=ok
// SIG undefined FUN_142b25fb9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b25fb9(void)

{
  _DAT_14c9a1848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b25ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1850,1);
  return;
}



// FUNCTION 142b25ffe FUN_142b25ffe body=1943 status=ok
// SIG undefined FUN_142b25ffe(void)

void FUN_142b25ffe(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  uint uVar5;
  uint *puVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  undefined1 auStack_938 [32];
  undefined4 local_918;
  undefined4 local_910;
  int local_904;
  uint *local_900;
  longlong *local_8f8;
  longlong local_8f0;
  uint local_8e4;
  ulonglong local_8e0;
  ulonglong local_8d8;
  longlong local_8d0;
  ulonglong local_8c8;
  longlong local_8c0;
  longlong local_8b8;
  undefined8 uStack_8b0;
  wchar_t *local_8a8;
  undefined8 uStack_8a0;
  undefined2 *local_890;
  int local_888;
  undefined4 *local_880;
  wchar_t *local_878;
  wchar_t *local_870;
  char local_868;
  undefined4 local_860;
  wchar_t local_85c [1022];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_938;
  if ((DAT_14c9a1ab0 != 0) && (0 < (int)param_1[1])) {
    puVar14 = (uint *)(DAT_14c9a1ab0 + 0x80);
    uVar13 = *(uint *)(DAT_14c9a1ab0 + 0x98);
    if (uVar13 == 0) {
      uVar17 = 1;
      uVar11 = 0;
      iVar19 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(DAT_14c9a1ab0 + 0x90);
      if (*(uint **)(DAT_14c9a1ab0 + 0x90) == (uint *)0x0) {
        puVar6 = puVar14;
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar19 = uVar13 + 0x1e;
        if (-1 < (int)(uVar13 - 1)) {
          iVar19 = uVar13 - 1;
        }
        uVar11 = 0;
        uVar17 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar17 = uVar11;
        }
        iVar19 = 0;
        do {
          if (uVar17 == uVar11) goto LAB_142b260dc;
          iVar19 = iVar19 + 0x20;
          uVar5 = puVar6[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar11 = 0;
        iVar19 = 0;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar17 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar5 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)uVar13 <= (int)uVar5) {
        uVar5 = uVar13;
      }
    }
    if (uVar5 != uVar13) {
      uVar18 = 0xffffffff;
      local_8d0 = DAT_14c9a1ab0;
      lVar20 = DAT_14c9a1ab0;
      local_900 = puVar14;
      local_8f8 = param_1;
      local_8e0 = (ulonglong)uVar13;
      do {
        pwVar21 = L"";
        if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
          pwVar21 = *(wchar_t **)*param_1;
        }
        local_904 = iVar19;
        local_8e4 = uVar18;
        local_8d8 = uVar17;
        local_8c8 = uVar11;
        if (pwVar21 != (wchar_t *)0x0) {
          lVar16 = *(longlong *)(*(longlong *)(lVar20 + 0x70) + 8 + (longlong)(int)uVar5 * 0x18);
          sVar7 = wcslen(pwVar21);
          local_910 = 0xffffffff;
          local_918 = 0;
          iVar19 = FUN_1447ee042((undefined8 *)(lVar16 + 0x18),pwVar21,sVar7 & 0xffffffff,1);
          if (iVar19 != -1) {
            if (*(longlong *)(lVar16 + 0x90) == 0) {
              FUN_140056680(&local_890,L"base");
            }
            else {
              FUN_1400021e4(lVar16 + 0x90,&local_890);
            }
            local_868 = '\0';
            local_880 = &local_860;
            local_870 = (wchar_t *)local_60;
            local_860 = 0xa000d;
            local_878 = local_85c;
            puVar15 = &DAT_149dfb77a;
            if (*(int *)(lVar16 + 0x20) != 0) {
              puVar15 = *(undefined2 **)(lVar16 + 0x18);
            }
            local_8f0 = lVar16;
            FUN_140212e80(&local_880,L"    Full Path:     %ls\r\n",puVar15);
            puVar15 = &DAT_149dfb77a;
            if (local_888 != 0) {
              puVar15 = local_890;
            }
            FUN_140212e80(&local_880,L"    Layer:         %ls\r\n",puVar15);
            lVar16 = local_8f0;
            FUN_140212e80(&local_880,L"    Revision:      %d\r\n",*(undefined4 *)(local_8f0 + 0x98))
            ;
            FUN_140212e80(&local_880,L"    Priority:      %2.4f\r\n",
                          (double)*(float *)(lVar16 + 0x9c));
            if (local_870 <= local_878 + 0x14) {
              FUN_140213274(&local_880);
            }
            builtin_wcsncpy(local_878,L"    Source Report:\r\n",0x14);
            local_878 = local_878 + 0x14;
            local_8a8 = (wchar_t *)0x0;
            uStack_8a0 = 0;
            iVar19 = *(int *)(lVar20 + 0xd0);
            if (iVar19 < 1) {
LAB_142b265b6:
              if (local_870 <= local_878 + 0x25) {
                FUN_140213274(&local_880,0x25);
              }
              pwVar21 = local_878;
              memcpy(local_878,L"        ** no elements in report **\r\n",0x4a);
              local_878 = pwVar21 + 0x25;
            }
            else {
              bVar3 = true;
              lVar12 = 0;
              uVar13 = 0;
              lVar16 = local_8f0;
              do {
                if (*(int *)(*(longlong *)(lVar16 + 0x188) + lVar12 * 4) != 0) {
                  local_8b8 = 0;
                  uStack_8b0 = 0;
                  plVar2 = *(longlong **)(*(longlong *)(lVar20 + 200) + lVar12 * 8);
                  local_8c0 = lVar12;
                  (**(code **)(*plVar2 + 0x380))(plVar2,lVar16,&local_8b8);
                  if (local_870 <= local_878 + 8) {
                    FUN_140213274(&local_880,8);
                  }
                  lVar16 = local_8b8;
                  builtin_wcsncpy(local_878,L"        ",8);
                  local_878 = local_878 + 8;
                  lVar12 = (longlong)(int)uStack_8b0;
                  if (lVar12 != 0) {
                    lVar20 = 0;
                    do {
                      FUN_1400b2348(**(undefined8 **)(lVar16 + lVar20),&local_8a8,1);
                      uVar13 = uVar13 + (int)uStack_8a0 + (uint)((int)uStack_8a0 == 0);
                      pwVar21 = L"";
                      if ((int)uStack_8a0 != 0) {
                        pwVar21 = local_8a8;
                      }
                      if (pwVar21 == (wchar_t *)0x0) {
                        iVar19 = 0;
                      }
                      else {
                        sVar7 = wcslen(pwVar21);
                        iVar19 = (int)sVar7;
                      }
                      lVar22 = (longlong)iVar19;
                      if (local_870 <= local_878 + lVar22) {
                        FUN_140213274(&local_880,lVar22);
                      }
                      pwVar4 = local_878;
                      if (iVar19 != 0) {
                        memcpy(local_878,pwVar21,lVar22 * 2);
                        local_878 = pwVar4 + lVar22;
                      }
                      pwVar21 = local_878;
                      if (local_870 <= local_878 + 1) {
                        FUN_140213274(&local_880,1);
                        pwVar21 = local_878;
                      }
                      *pwVar21 = L' ';
                      local_878 = pwVar21 + 1;
                      if (0x3c < uVar13) {
                        if (local_870 <= pwVar21 + 0xb) {
                          FUN_140213274(&local_880,10);
                        }
                        builtin_wcsncpy(local_878,L"\r\n        ",10);
                        local_878 = local_878 + 10;
                        uVar13 = 0;
                      }
                      lVar20 = lVar20 + 8;
                    } while (lVar12 * 8 != lVar20);
                    bVar3 = false;
                    lVar20 = local_8d0;
                  }
                  lVar16 = local_8f0;
                  if (local_8b8 != 0) {
                    FUN_1400020a8(local_8b8);
                  }
                  iVar19 = *(int *)(lVar20 + 0xd0);
                  lVar12 = local_8c0;
                }
                puVar14 = local_900;
                lVar12 = lVar12 + 1;
              } while (lVar12 < iVar19);
              param_1 = local_8f8;
              if (uVar13 != 0) {
                if (local_870 <= local_878 + 2) {
                  FUN_140213274(&local_880,2);
                }
                local_878[0] = L'\r';
                local_878[1] = L'\n';
                local_878 = local_878 + 2;
                param_1 = local_8f8;
              }
              local_8f8 = param_1;
              if (bVar3) goto LAB_142b265b6;
            }
            if (local_8a8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_868 == '\x01') {
              FUN_1400020a8(local_880);
            }
            if (local_890 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        uVar18 = local_8e4 & ~(uint)local_8d8;
        puVar6 = *(uint **)(lVar20 + 0x90);
        if (*(uint **)(lVar20 + 0x90) == (uint *)0x0) {
          puVar6 = puVar14;
        }
        uVar13 = *(uint *)(lVar20 + 0x98);
        iVar10 = (int)local_8c8;
        lVar16 = (longlong)iVar10;
        uVar5 = puVar6[lVar16] & uVar18;
        uVar11 = local_8c8;
        iVar19 = local_904;
        if (uVar5 == 0) {
          iVar8 = uVar13 + 0x1e;
          if (-1 < (int)(uVar13 - 1)) {
            iVar8 = uVar13 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar19 = local_904 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar10 < iVar8) {
            lVar12 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar12 + 1];
              if (uVar5 != 0) {
                uVar18 = 0xffffffff;
                uVar11 = (ulonglong)(iVar10 + (int)lVar12 + 1);
                goto LAB_142b266b6;
              }
              iVar19 = iVar19 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar9 - lVar16 != lVar12);
            uVar18 = 0xffffffff;
            iVar10 = iVar9;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          param_1 = local_8f8;
          puVar14 = local_900;
          uVar17 = local_8d8;
          lVar20 = local_8d0;
          uVar5 = uVar13;
        }
        else {
LAB_142b266b6:
          uVar17 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar17 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar13 <= (int)uVar5) {
            uVar5 = uVar13;
          }
        }
      } while (uVar5 != (uint)local_8e0);
    }
  }
LAB_142b260dc:
  if ((local_60[0] ^ (ulonglong)auStack_938) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b26796 FUN_142b26796 body=69 status=ok
// SIG undefined FUN_142b26796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b26796(void)

{
  _DAT_14c9a1858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b267d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1860,1);
  return;
}



// FUNCTION 142b267dc FUN_142b267dc body=1814 status=ok
// SIG undefined FUN_142b267dc(void)

void FUN_142b267dc(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  wchar_t *_Str;
  longlong lVar18;
  void *pvVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  uint local_118;
  int local_114;
  ulonglong local_110;
  uint *local_108;
  ulonglong local_100;
  longlong *local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8 [2];
  void ***local_b8 [2];
  void **local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  lVar4 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((DAT_14c9a1ab0 != 0) && (1 < (int)param_1[1])) {
    puVar14 = (uint *)(DAT_14c9a1ab0 + 0x80);
    uVar1 = *(uint *)(DAT_14c9a1ab0 + 0x98);
    if (uVar1 == 0) {
      local_110 = 1;
      uVar17 = 0;
      iVar20 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(DAT_14c9a1ab0 + 0x90);
      if (*(uint **)(DAT_14c9a1ab0 + 0x90) == (uint *)0x0) {
        puVar6 = puVar14;
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar20 = uVar1 + 0x1e;
        if (-1 < (int)(uVar1 - 1)) {
          iVar20 = uVar1 - 1;
        }
        uVar17 = 0;
        uVar11 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar11 = uVar17;
        }
        iVar20 = 0;
        do {
          if (uVar11 == uVar17) goto LAB_142b268c0;
          iVar20 = iVar20 + 0x20;
          uVar5 = puVar6[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar17 = 0;
        iVar20 = 0;
      }
      local_110 = (ulonglong)(-uVar5 & uVar5);
      uVar11 = local_110 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar5 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar1 <= (int)uVar5) {
        uVar5 = uVar1;
      }
    }
    if (uVar5 != uVar1) {
      local_118 = 0xffffffff;
      local_108 = puVar14;
      local_100 = (ulonglong)uVar1;
      do {
        _Str = L"";
        if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
          _Str = *(wchar_t **)*param_1;
        }
        local_114 = iVar20;
        local_f0 = uVar17;
        if (_Str != (wchar_t *)0x0) {
          plVar21 = (longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)(int)uVar5 * 0x18 + 8);
          lVar13 = *plVar21;
          sVar7 = wcslen(_Str);
          local_120 = 0xffffffff;
          local_128 = 0;
          iVar20 = FUN_1447ee042(lVar13 + 0x18,_Str,sVar7 & 0xffffffff,1);
          if (iVar20 != -1) {
            if (*(longlong *)(*plVar21 + 0x90) == 0) {
              FUN_140056680(local_c8,L"base");
            }
            else {
              FUN_1400021e4(*plVar21 + 0x90,local_c8);
            }
            iVar20 = *(int *)(lVar4 + 0xd0);
            if (0 < iVar20) {
              uVar17 = (ulonglong)*(uint *)(param_1 + 1);
              lVar13 = 0;
              local_f8 = plVar21;
              do {
                if ((*(int *)(*(longlong *)(*plVar21 + 0x188) + lVar13 * 4) != 0) &&
                   (1 < (int)uVar17)) {
                  lVar15 = 1;
                  do {
                    local_d8 = (undefined2 *)0x0;
                    local_d0 = *(int *)(*param_1 + 8 + lVar15 * 0x10);
                    lVar18 = (longlong)local_d0;
                    pvVar19 = *(void **)(*param_1 + lVar15 * 0x10);
                    if (lVar18 == 0) {
                      local_cc = 0;
                    }
                    else {
                      FUN_1446dd670(&local_d8,local_d0,0);
                      memcpy(local_d8,pvVar19,lVar18 * 2);
                    }
                    FUN_140056680(&local_e8,&DAT_149dfb77a);
                    if ((longlong)local_d0 == 0) {
                      iVar20 = 0;
                    }
                    else {
                      lVar18 = (longlong)local_d0 * 2;
                      lVar22 = 0;
                      do {
                        iVar20 = local_d0;
                        if (local_d8[lVar22] == 0x2e) {
                          iVar16 = (int)lVar22;
                          if (iVar16 != -1) {
                            iVar20 = local_d0 + -1;
                            if (local_d0 == 0) {
                              iVar20 = 0;
                            }
                            iVar9 = (~(uint)(local_d0 != 0) + local_d0) - iVar16;
                            if (iVar20 <= iVar9) {
                              iVar9 = iVar20;
                            }
                            if (iVar9 < 1) {
                              iVar9 = 0;
                            }
                            FUN_140056680(&local_88,
                                          (longlong)local_d8 +
                                          ((longlong)iVar20 * 2 - (ulonglong)(uint)(iVar9 * 2)));
                            if (CONCAT44(uStack_e4,local_e8) != 0) {
                              FUN_1400020a8();
                            }
                            local_e8 = (undefined4)local_88;
                            uStack_e4 = local_88._4_4_;
                            iStack_e0 = (int)uStack_80;
                            uStack_dc = uStack_80._4_4_;
                            puVar12 = &DAT_149dfb77a;
                            if (local_d0 != 0) {
                              puVar12 = local_d8;
                            }
                            iVar20 = local_d0 + -1;
                            if (local_d0 == 0) {
                              iVar20 = 0;
                            }
                            if (iVar16 < iVar20) {
                              iVar20 = iVar16;
                            }
                            if (iVar20 < 1) {
                              iVar20 = 0;
                            }
                            FUN_14006620a(&local_88,puVar12,iVar20);
                            if (local_d8 != (undefined2 *)0x0) {
                              FUN_1400020a8();
                            }
                            local_d8 = local_88;
                            local_d0 = (int)uStack_80;
                            local_cc = uStack_80._4_4_;
                            iVar20 = (int)uStack_80;
                          }
                          break;
                        }
                        lVar22 = lVar22 + 1;
                        lVar18 = lVar18 + -2;
                      } while (lVar18 != 0);
                    }
                    puVar12 = local_d8;
                    plVar2 = *(longlong **)(*(longlong *)(lVar4 + 200) + lVar13 * 8);
                    if (iStack_e0 + 0x7fffffffU < 0x80000001) {
                      FUN_14000bbd8(&local_88,&local_d8,0);
                      plVar21 = local_f8;
                      puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x3a0))(plVar2,*local_f8);
                      if (local_70 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    else {
                      local_a8 = (void *)0x0;
                      local_a0 = iVar20;
                      if (iVar20 == 0) {
                        local_9c = 0;
                        pvVar19 = (void *)CONCAT44(uStack_e4,local_e8);
LAB_142b26cfa:
                        iVar20 = iStack_e0;
                        local_98 = (void *)0x0;
                        local_90 = iStack_e0;
                        FUN_1446dd670(&local_98,iStack_e0,0);
                        memcpy(local_98,pvVar19,(longlong)iVar20 * 2);
                      }
                      else {
                        FUN_1446dd670(local_b8 + 2,iVar20,0);
                        memcpy(local_a8,puVar12,(longlong)iVar20 * 2);
                        local_98 = (void *)0x0;
                        pvVar19 = (void *)CONCAT44(uStack_e4,local_e8);
                        local_90 = iStack_e0;
                        if (iStack_e0 != 0) goto LAB_142b26cfa;
                        local_8c = 0;
                      }
                      local_88 = (undefined2 *)0x0;
                      uStack_80 = 0;
                      local_78 = 0;
                      local_70 = 0;
                      uStack_68 = 0;
                      local_b8[0] = local_b8 + 2;
                      local_b8[1] = (void ***)&local_88;
                      FUN_1470a3316(&local_88,local_b8,0);
                      plVar21 = local_f8;
                      puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x3a8))(plVar2,*local_f8);
                      if (local_70 != 0) {
                        FUN_1400020a8();
                      }
                      lVar18 = 0x20;
                      do {
                        if (*(longlong *)((longlong)local_b8 + lVar18) != 0) {
                          FUN_1400020a8();
                        }
                        lVar18 = lVar18 + -0x10;
                      } while (lVar18 != 0);
                    }
                    pbVar3 = (byte *)*puVar8;
                    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
                      local_88 = (undefined2 *)CONCAT62(local_88._2_6_,1);
                      local_88 = (undefined2 *)((ulonglong)local_88 & 0xffffffff);
                      uStack_80 = 0;
                      FUN_14709c526(pbVar3,local_b8 + 2);
                      if (local_a8 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    if (CONCAT44(uStack_e4,local_e8) != 0) {
                      FUN_1400020a8();
                    }
                    if (local_d8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    lVar15 = lVar15 + 1;
                    uVar17 = (ulonglong)(int)param_1[1];
                  } while (lVar15 < (longlong)uVar17);
                  iVar20 = *(int *)(lVar4 + 0xd0);
                }
                lVar13 = lVar13 + 1;
              } while (lVar13 < iVar20);
            }
            puVar14 = local_108;
            if (local_c8[0] != 0) {
              FUN_1400020a8();
              puVar14 = local_108;
            }
          }
        }
        local_118 = local_118 & ~(uint)local_110;
        puVar6 = *(uint **)(lVar4 + 0x90);
        if (*(uint **)(lVar4 + 0x90) == (uint *)0x0) {
          puVar6 = puVar14;
        }
        uVar1 = *(uint *)(lVar4 + 0x98);
        iVar16 = (int)local_f0;
        lVar13 = (longlong)iVar16;
        uVar5 = puVar6[lVar13] & local_118;
        uVar17 = local_f0;
        iVar20 = local_114;
        if (uVar5 == 0) {
          iVar9 = uVar1 + 0x1e;
          if (-1 < (int)(uVar1 - 1)) {
            iVar9 = uVar1 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar20 = local_114 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar16) {
            iVar10 = iVar16;
          }
          if (iVar16 < iVar9) {
            lVar15 = 0;
            do {
              uVar5 = puVar6[lVar13 + lVar15 + 1];
              if (uVar5 != 0) {
                local_118 = 0xffffffff;
                uVar17 = (ulonglong)(iVar16 + (int)lVar15 + 1);
                goto LAB_142b26e97;
              }
              iVar20 = iVar20 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar13 != lVar15);
            local_118 = 0xffffffff;
            iVar16 = iVar10;
          }
          uVar17 = (ulonglong)(iVar16 + 1);
          puVar14 = local_108;
          uVar5 = uVar1;
        }
        else {
LAB_142b26e97:
          local_110 = (ulonglong)(-uVar5 & uVar5);
          uVar11 = local_110 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          uVar5 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if ((int)uVar1 <= (int)uVar5) {
            uVar5 = uVar1;
          }
        }
      } while (uVar5 != (uint)local_100);
    }
  }
LAB_142b268c0:
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b26ef3 FUN_142b26ef3 body=69 status=ok
// SIG undefined FUN_142b26ef3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b26ef3(void)

{
  _DAT_14c9a1868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b26f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1870,1);
  return;
}



// FUNCTION 142b26f38 FUN_142b26f38 body=272 status=ok
// SIG undefined FUN_142b26f38(void)

void FUN_142b26f38(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  ulonglong local_40;
  
  lVar2 = DAT_14c9a1ab0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9a1ab0 != 0) {
    if (0 < (int)param_1[1]) {
      puVar1 = (undefined8 *)*param_1;
      FUN_140056680(&local_50,L"config");
      pwVar4 = (wchar_t *)CONCAT44(uStack_4c,local_50);
      _Str1 = L"";
      _Str2 = pwVar4;
      if (local_48 == 0) {
        _Str2 = L"";
      }
      if (*(int *)(puVar1 + 1) != 0) {
        _Str1 = (wchar_t *)*puVar1;
      }
      iVar5 = wcscmp(_Str1,_Str2);
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      if (iVar5 != 0) goto LAB_142b27023;
    }
    lVar7 = (longlong)*(int *)(lVar2 + 0xd0);
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(lVar2 + 200);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar3);
        }
        local_50 = 0xffffffff;
        local_54 = 0xffffffff;
        (**(code **)(*plVar3 + 0x388))(plVar3,&local_50,&local_54);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
  }
LAB_142b27023:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b27049 FUN_142b27049 body=69 status=ok
// SIG undefined FUN_142b27049(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b27049(void)

{
  _DAT_14c9a1878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2708b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1880,1);
  return;
}



// FUNCTION 142b2708e FUN_142b2708e body=504 status=ok
// SIG undefined FUN_142b2708e(void)

void FUN_142b2708e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char *_Str;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  wchar_t *_Str1;
  longlong *plVar7;
  wchar_t *_Str2;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_198 [32];
  longlong *local_178;
  wchar_t *local_170;
  int local_168;
  longlong local_160 [32];
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((DAT_14c9a1ab0 != 0) && (0 < (int)param_1[1])) &&
     ((longlong)*(int *)(DAT_14c9a1ab0 + 0xd0) != 0)) {
    plVar9 = *(longlong **)(DAT_14c9a1ab0 + 200);
    local_178 = plVar9 + *(int *)(DAT_14c9a1ab0 + 0xd0);
    do {
      plVar1 = (longlong *)*plVar9;
      if ((DAT_14c950c29 == '\x01') && (plVar1 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar1);
      }
      puVar2 = (undefined8 *)*param_1;
      _Str = (char *)plVar1[0x17];
      local_60 = (longlong *)0x0;
      if (_Str == (char *)0x0) {
        local_58 = (longlong *)0x0;
        local_50 = 0;
      }
      else {
        sVar5 = strlen(_Str);
        iVar4 = (int)sVar5;
        uVar8 = iVar4 + 1;
        local_50 = iVar4;
        if (uVar8 < 0x81) {
          plVar7 = (longlong *)0x0;
        }
        else {
          FUN_1446efa72(&local_60,0,uVar8,2);
          plVar7 = local_60;
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = local_160;
        }
        local_58 = plVar7;
        if (-1 < iVar4) {
          uVar6 = 0;
          do {
            *(short *)((longlong)plVar7 + uVar6 * 2) = (short)_Str[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar8 != uVar6);
        }
      }
      FUN_140056680(&local_170,local_58);
      pwVar3 = local_170;
      _Str2 = local_170;
      if (local_168 == 0) {
        _Str2 = L"";
      }
      _Str1 = L"";
      if (*(int *)(puVar2 + 1) != 0) {
        _Str1 = (wchar_t *)*puVar2;
      }
      iVar4 = wcscmp(_Str1,_Str2);
      if (pwVar3 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar3);
      }
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((iVar4 == 0) && ((**(code **)(*plVar1 + 0x390))(plVar1), local_160[0] != 0)) {
        FUN_1400020a8();
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_178);
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b27287 FUN_142b27287 body=69 status=ok
// SIG undefined FUN_142b27287(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b27287(void)

{
  _DAT_14c9a1888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b272c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1890,1);
  return;
}



// FUNCTION 142b272cc FUN_142b272cc body=1735 status=ok
// SIG undefined FUN_142b272cc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142b272cc(longlong *param_1)

{
  wchar_t ******ppppppwVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char *_Str;
  wchar_t *****pppppwVar4;
  wchar_t *pwVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  size_t sVar9;
  int iVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  ulonglong uVar13;
  wchar_t *_Str2;
  undefined8 *puVar14;
  wchar_t *****_Str2_00;
  uint uVar15;
  longlong lVar16;
  void *pvVar17;
  undefined1 auStack_218 [44];
  uint local_1ec;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  wchar_t ******local_1a8 [2];
  wchar_t *****local_198;
  int local_190;
  undefined4 local_18c;
  void *local_188;
  int local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined8 *local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  lVar16 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((DAT_14c9a1ab0 != 0) && (1 < (int)param_1[1])) {
    lVar8 = *param_1;
    FUN_140056680(&local_178,L"verbose");
    pwVar5 = local_178;
    pwVar11 = L"";
    _Str2 = local_178;
    if ((int)uStack_170 == 0) {
      _Str2 = L"";
    }
    if (*(int *)(lVar8 + 0x18) != 0) {
      pwVar11 = *(wchar_t **)(lVar8 + 0x10);
    }
    iVar6 = wcscmp(pwVar11,_Str2);
    if (pwVar5 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar5);
    }
    local_1ec = (iVar6 == 0) + 1;
    lVar8 = (longlong)*(int *)(lVar16 + 0xd0);
    if (lVar8 != 0) {
      plVar12 = *(longlong **)(lVar16 + 200);
      local_1d8 = plVar12 + lVar8;
      local_1e0 = (ulonglong)local_1ec;
      ppppppwVar1 = (wchar_t ******)(local_1a8 + 2);
      local_1e8 = param_1;
      do {
        plVar2 = (longlong *)*plVar12;
        local_1d0 = plVar12;
        if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar2);
        }
        puVar3 = (undefined8 *)*param_1;
        _Str = (char *)plVar2[0x17];
        local_78 = (undefined8 *)0x0;
        if (_Str == (char *)0x0) {
          local_70 = (undefined8 *)0x0;
          local_68 = 0;
        }
        else {
          sVar9 = strlen(_Str);
          iVar7 = (int)sVar9;
          uVar15 = iVar7 + 1;
          local_68 = iVar7;
          if (uVar15 < 0x81) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            FUN_1446efa72(&local_78,0,uVar15,2);
            puVar14 = local_78;
          }
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = &local_178;
          }
          local_70 = puVar14;
          if (-1 < iVar7) {
            uVar13 = 0;
            do {
              *(short *)((longlong)puVar14 + uVar13 * 2) = (short)_Str[uVar13];
              uVar13 = uVar13 + 1;
            } while (uVar15 != uVar13);
          }
        }
        FUN_140056680(ppppppwVar1,local_70);
        pppppwVar4 = local_198;
        pwVar11 = L"";
        _Str2_00 = local_198;
        if (local_190 == 0) {
          _Str2_00 = (wchar_t *****)0x149dfb77a;
        }
        if (*(int *)(puVar3 + 1) != 0) {
          pwVar11 = (wchar_t *)*puVar3;
        }
        iVar7 = wcscmp(pwVar11,(wchar_t *)_Str2_00);
        if (pppppwVar4 != (wchar_t *****)0x0) {
          FUN_1400020a8(pppppwVar4);
        }
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1 = local_1e8;
        if ((iVar7 == 0) && (uVar13 = local_1e0, (int)local_1ec < (int)local_1e8[1])) {
          do {
            local_1b8 = (wchar_t *)0x0;
            local_1b0 = *(int *)(*param_1 + 8 + uVar13 * 0x10);
            lVar16 = (longlong)local_1b0;
            pvVar17 = *(void **)(*param_1 + uVar13 * 0x10);
            if (lVar16 == 0) {
              local_1ac = 0;
            }
            else {
              FUN_1446dd670(&local_1b8,local_1b0,0);
              memcpy(local_1b8,pvVar17,lVar16 * 2);
            }
            FUN_140056680(&local_1c8,&DAT_149dfb77a);
            if ((longlong)local_1b0 == 0) {
              if (0x80000000 < iStack_1c0 + 0x7fffffffU) {
                local_190 = 0;
LAB_142b277bf:
                local_198 = (wchar_t *****)0x0;
                local_18c = 0;
                pvVar17 = (void *)CONCAT44(uStack_1c4,local_1c8);
LAB_142b277e2:
                iVar7 = iStack_1c0;
                local_188 = (void *)0x0;
                local_180 = iStack_1c0;
                FUN_1446dd670(&local_188,iStack_1c0,0);
                memcpy(local_188,pvVar17,(longlong)iVar7 * 2);
                goto LAB_142b2780a;
              }
LAB_142b2766a:
              FUN_14000bbd8(&local_178,&local_1b8);
              lVar16 = (**(code **)(*plVar2 + 0x368))(plVar2);
              param_1 = local_1e8;
              if (local_160 != 0) {
                FUN_1400020a8();
                param_1 = local_1e8;
              }
            }
            else {
              lVar16 = (longlong)local_1b0 * 2;
              lVar8 = 0;
              do {
                if (local_1b8[lVar8] == L'.') {
                  if ((int)lVar8 != -1) {
                    iVar7 = local_1b0 + -1;
                    if (local_1b0 == 0) {
                      iVar7 = 0;
                    }
                    iVar10 = (~(uint)(local_1b0 != 0) + local_1b0) - (int)lVar8;
                    if (iVar7 <= iVar10) {
                      iVar10 = iVar7;
                    }
                    if (iVar10 < 1) {
                      iVar10 = 0;
                    }
                    FUN_140056680(&local_178,
                                  (longlong)local_1b8 +
                                  ((longlong)iVar7 * 2 - (ulonglong)(uint)(iVar10 * 2)));
                    if (CONCAT44(uStack_1c4,local_1c8) != 0) {
                      FUN_1400020a8();
                    }
                    local_1c8 = (undefined4)local_178;
                    uStack_1c4 = local_178._4_4_;
                    iStack_1c0 = (int)uStack_170;
                    uStack_1bc = uStack_170._4_4_;
                    pwVar11 = local_1b8;
                    if (local_1b0 == 0) {
                      pwVar11 = L"";
                    }
                    FUN_14006620a(&local_178,pwVar11);
                    if (local_1b8 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    local_1b8 = local_178;
                    local_1b0 = (int)uStack_170;
                    local_1ac = uStack_170._4_4_;
                  }
                  break;
                }
                lVar8 = lVar8 + 1;
                lVar16 = lVar16 + -2;
              } while (lVar16 != 0);
              iVar7 = local_1b0;
              pwVar11 = local_1b8;
              if (iStack_1c0 + 0x7fffffffU < 0x80000001) goto LAB_142b2766a;
              local_198 = (wchar_t *****)0x0;
              local_190 = local_1b0;
              if (local_1b0 == 0) goto LAB_142b277bf;
              FUN_1446dd670(ppppppwVar1,local_1b0,0);
              memcpy(local_198,pwVar11,(longlong)iVar7 * 2);
              local_180 = iStack_1c0;
              local_188 = (void *)0x0;
              pvVar17 = (void *)CONCAT44(uStack_1c4,local_1c8);
              if (iStack_1c0 != 0) goto LAB_142b277e2;
              local_17c = 0;
LAB_142b2780a:
              param_1 = local_1e8;
              local_178 = (wchar_t *)0x0;
              uStack_170 = 0;
              local_168 = 0;
              local_160 = 0;
              uStack_158 = 0;
              local_1a8[1] = (wchar_t ******)&local_178;
              local_1a8[0] = ppppppwVar1;
              FUN_1470a3316(&local_178,local_1a8);
              lVar16 = (**(code **)(*plVar2 + 0x370))(plVar2);
              if (local_160 != 0) {
                FUN_1400020a8();
              }
              lVar8 = 0x20;
              do {
                if (*(longlong *)((longlong)local_1a8 + lVar8) != 0) {
                  FUN_1400020a8();
                }
                lVar8 = lVar8 + -0x10;
              } while (lVar8 != 0);
            }
            if (lVar16 != 0) {
              FUN_140220358(lVar16);
              FUN_144837e54(lVar16);
              lVar16 = *(longlong *)(lVar16 + 0x58);
              while (lVar16 != 0) {
                if (*(longlong *)(*(longlong *)(lVar16 + 8) + 0x90) == 0) {
                  FUN_140056680(ppppppwVar1);
                }
                else {
                  FUN_1400021e4(*(longlong *)(lVar16 + 8) + 0x90);
                }
                if (((iVar6 == 0) && (*(byte **)(lVar16 + 0x18) != (byte *)0x0)) &&
                   ((**(byte **)(lVar16 + 0x18) & 3) != 0)) {
                  local_178 = (wchar_t *)CONCAT62(local_178._2_6_,1);
                  local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff);
                  uStack_170 = 0;
                  FUN_14709c526();
                  if (local_1a8[0] != (wchar_t ******)0x0) {
                    FUN_1400020a8();
                  }
                }
                lVar16 = *(longlong *)(lVar16 + 0x28);
                if (local_198 != (wchar_t *****)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            if (CONCAT44(uStack_1c4,local_1c8) != 0) {
              FUN_1400020a8();
            }
            if (local_1b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)param_1[1]);
        }
        plVar12 = local_1d0 + 1;
      } while (plVar12 != local_1d8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b27994 FUN_142b27994 body=69 status=ok
// SIG undefined FUN_142b27994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b27994(void)

{
  _DAT_14c9a1898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b279d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a18a0,1);
  return;
}



// FUNCTION 142b279da FUN_142b279da body=1016 status=ok
// SIG undefined FUN_142b279da(void)

void FUN_142b279da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char *_Str;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  size_t sVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  undefined2 *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  int local_1d4;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong *plStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined8 local_170;
  longlong local_160;
  undefined2 *local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  lVar7 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((DAT_14c9a1ab0 != 0) && (1 < (int)param_1[1])) {
    lVar10 = *param_1;
    FUN_140056680(&local_178,L"verbose");
    pwVar6 = (wchar_t *)CONCAT44(uStack_174,CONCAT22(uStack_176,local_178));
    pwVar12 = L"";
    pwVar15 = pwVar6;
    if ((int)local_170 == 0) {
      pwVar15 = L"";
    }
    if (*(int *)(lVar10 + 0x18) != 0) {
      pwVar12 = *(wchar_t **)(lVar10 + 0x10);
    }
    local_1d4 = wcscmp(pwVar12,pwVar15);
    if (pwVar6 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar6);
    }
    local_1d8 = (local_1d4 == 0) + 1;
    lVar10 = (longlong)*(int *)(lVar7 + 0xd0);
    if (lVar10 != 0) {
      plVar13 = *(longlong **)(lVar7 + 200);
      local_1c8 = plVar13 + lVar10;
      local_1d0 = (ulonglong)local_1d8;
      do {
        plVar3 = (longlong *)*plVar13;
        local_1c0 = plVar13;
        if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar3);
        }
        puVar4 = (undefined8 *)*param_1;
        _Str = (char *)plVar3[0x17];
        local_78 = (undefined2 *)0x0;
        if (_Str == (char *)0x0) {
          local_70 = (undefined2 *)0x0;
          local_68 = 0;
        }
        else {
          sVar11 = strlen(_Str);
          iVar9 = (int)sVar11;
          uVar18 = iVar9 + 1;
          local_68 = iVar9;
          if (uVar18 < 0x81) {
            puVar16 = (undefined2 *)0x0;
          }
          else {
            FUN_1446efa72(&local_78,0,uVar18,2);
            puVar16 = local_78;
          }
          if (puVar16 == (undefined2 *)0x0) {
            puVar16 = &local_178;
          }
          local_70 = puVar16;
          if (-1 < iVar9) {
            uVar14 = 0;
            do {
              puVar16[uVar14] = (short)_Str[uVar14];
              uVar14 = uVar14 + 1;
            } while (uVar18 != uVar14);
          }
        }
        FUN_140056680(&local_188,local_70);
        pwVar6 = local_188;
        pwVar12 = L"";
        pwVar15 = local_188;
        if ((int)uStack_180 == 0) {
          pwVar15 = L"";
        }
        if (*(int *)(puVar4 + 1) != 0) {
          pwVar12 = (wchar_t *)*puVar4;
        }
        iVar9 = wcscmp(pwVar12,pwVar15);
        if (pwVar6 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar6);
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((iVar9 == 0) && (uVar14 = local_1d0, (int)local_1d8 < (int)param_1[1])) {
          do {
            local_188 = (wchar_t *)0x0;
            uStack_180 = 0;
            FUN_14000bbd8(&local_178,uVar14 * 0x10 + *param_1,0);
            cVar8 = (**(code **)(*plVar3 + 0x398))(plVar3);
            if (local_160 != 0) {
              FUN_1400020a8();
            }
            if (cVar8 != '\0') {
              local_198 = 0;
              plStack_190 = (longlong *)0x0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              cVar8 = FUN_1446e9750(plVar3,&local_198,&local_188,&local_1a8);
              if (cVar8 != '\0') {
                if (local_198 == 0) {
                  local_1b8 = 0;
                  uStack_1b0 = 0;
                }
                else {
                  local_178 = 1;
                  uStack_174 = 0;
                  local_170 = 0;
                  FUN_14709c526();
                }
                lVar7 = local_1a8;
                if (local_1d4 == 0) {
                  lVar10 = (longlong)(int)uStack_1a0;
                  if (lVar10 != 0) {
                    lVar17 = 0;
                    do {
                      lVar5 = *(longlong *)(*(longlong *)(lVar7 + lVar17) + 8);
                      if (*(longlong *)(lVar5 + 0x90) == 0) {
                        FUN_140056680(&local_178);
                      }
                      else {
                        FUN_1400021e4(lVar5 + 0x90);
                      }
                      if (CONCAT44(uStack_174,CONCAT22(uStack_176,local_178)) != 0) {
                        FUN_1400020a8();
                      }
                      lVar17 = lVar17 + 8;
                    } while (lVar10 * 8 != lVar17);
                  }
                }
                if (local_1b8 != 0) {
                  FUN_1400020a8();
                }
              }
              if (local_1a8 != 0) {
                FUN_1400020a8();
              }
              plVar13 = plStack_190;
              if (plStack_190 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_190 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_190)(plStack_190);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar13 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                  }
                }
              }
            }
            if (local_188 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)param_1[1]);
        }
        plVar13 = local_1c0 + 1;
      } while (plVar13 != local_1c8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b27dd3 FUN_142b27dd3 body=69 status=ok
// SIG undefined FUN_142b27dd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b27dd3(void)

{
  _DAT_14c9a18a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b27e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a18b0,1);
  return;
}



// FUNCTION 142b27e18 FUN_142b27e18 body=49 status=ok
// SIG undefined FUN_142b27e18(void)

void FUN_142b27e18(void)

{
  FUN_144760e21(DAT_14c9a18b8,DAT_14c9a18c0);
  if (DAT_14c9a18b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b27e49 FUN_142b27e49 body=49 status=ok
// SIG undefined FUN_142b27e49(void)

void FUN_142b27e49(void)

{
  FUN_144760e21(DAT_14c9a1e20,DAT_14c9a1e28);
  if (DAT_14c9a1e20 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b27e7a FUN_142b27e7a body=216 status=ok
// SIG undefined FUN_142b27e7a(void)

undefined8 FUN_142b27e7a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = 0x4000;
  if (*(uint *)(param_2 + 8) != 1) {
    uVar2 = *(uint *)(param_2 + 8);
  }
  do {
    if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
      lVar4 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar4 = param_1 + 0x178;
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & uVar2) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x140) + (longlong)iVar3 * 0x10;
          if (*(uint *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar3 * 0x10) == uVar2) {
            if ((lVar4 != 0) && ((ushort *)(lVar4 + 4) != (ushort *)0x0)) {
              uVar1 = *(ushort *)(lVar4 + 4);
              if ((short)uVar1 < 0) {
                return 0;
              }
              if ((int)(short)uVar1 < *(int *)(param_1 + 0xd0)) {
                return *(undefined8 *)(*(longlong *)(param_1 + 200) + (ulonglong)uVar1 * 8);
              }
              return 0;
            }
            break;
          }
          iVar3 = *(int *)(lVar4 + 8);
        } while (iVar3 != -1);
      }
    }
    if ((longlong)*(int *)(param_1 + 600) == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x250);
    lVar5 = (longlong)*(int *)(param_1 + 600) * 0x60;
    while (*(uint *)(lVar4 + 0x28) != uVar2) {
      lVar4 = lVar4 + 0x60;
      lVar5 = lVar5 + -0x60;
      if (lVar5 == 0) {
        return 0;
      }
    }
    if (lVar4 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(lVar4 + 0x58);
  } while( true );
}



// FUNCTION 142b27f52 FUN_142b27f52 body=169 status=ok
// SIG undefined FUN_142b27f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b27f52(void)

{
  DAT_14c9a1b68 = 0;
  if (DAT_14c9a1b60 != 0) {
    FUN_1400020a8();
  }
  DAT_14c9a1b28 = 0;
  if (DAT_14c9a1b2c != 0) {
    FUN_14472eb64(&DAT_14c9a1b20,0);
  }
  _DAT_14c9a1b50 = 0xffffffff;
  _DAT_14c9a1b48 = 0;
  if (0x80 < DAT_14c9a1b4c) {
    DAT_14c9a1b4c = 0x80;
    FUN_1446efbd8(&DAT_14c9a1b30,0);
  }
  if (DAT_14c9a1b40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1b20 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b27ffb FUN_142b27ffb body=41 status=ok
// SIG undefined FUN_142b27ffb(void)

void FUN_142b27ffb(void)

{
  DAT_14c9a1bb8 = 0;
  if (DAT_14c9a1bb0 != 0) {
    FUN_1400020a8();
  }
  FUN_14605d1bc();
  return;
}



// FUNCTION 142b28024 FUN_142b28024 body=698 status=ok
// SIG undefined FUN_142b28024(void)

void FUN_142b28024(void)

{
  longlong *plVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  code *local_30;
  ulonglong local_28;
  
  plVar1 = DAT_14c9485b8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  if (DAT_14cb10130 == 0) {
    local_70 = &local_30;
    local_30 = FUN_140754f84;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147da9a76;
    local_80 = FUN_1409f3105;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  local_50 = *(undefined8 *)(DAT_14cb10130 + 0x18);
  local_58 = *(undefined8 *)(*(longlong *)(DAT_14cb10130 + 0x20) + 0x18);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_58,&local_48,1);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1b10);
  FUN_1408d9e0e(&DAT_14c9a1b20,0);
  uVar6 = (uint)uStack_40;
  if ((uint)(DAT_14c9a1b28 - DAT_14c9a1b54) < (uint)uStack_40) {
    if ((int)(uint)uStack_40 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)uStack_40);
    }
    FUN_144732142(&DAT_14c9a1b20,uStack_40 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((DAT_14c9a1b68 == 0) || (DAT_14c9a1b68 < iVar2)) {
      DAT_14c9a1b68 = iVar2;
      FUN_144869b4a(&DAT_14c9a1b20);
    }
  }
  if ((uint)uStack_40 != 0) {
    lVar8 = (longlong)(int)(uint)uStack_40 * 0x70;
    lVar7 = local_48;
    do {
      FUN_144a13f80(&DAT_14c9a1b20,&local_30,lVar7,0);
      lVar7 = lVar7 + 0x70;
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != 0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1b10);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1b18);
  uVar5 = 0;
  FUN_14618f596(&DAT_14c9a1b70,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1b18);
  lVar7 = DAT_14c9a10f8;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        uVar5 = (ulonglong)(DVar3 != DVar4);
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  DAT_14c75f670 = *(byte *)(lVar7 + uVar5) ^ 1;
  FUN_140195631(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b282df FUN_142b282df body=298 status=ok
// SIG undefined FUN_142b282df(void)

void FUN_142b282df(char *param_1)

{
  size_t sVar1;
  char *_Str;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  char *local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  _Str = "a+b-c*d/e";
  if (param_1 != (char *)0x0) {
    _Str = param_1;
  }
  sVar1 = strlen(_Str);
  local_68[0] = 0;
  local_60 = 0;
  local_58 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  local_d0 = (undefined4)sVar1;
  local_d8 = _Str;
  FUN_1405b449e(local_c8);
  local_e8[0] = 0;
  local_e8[1] = 0;
  FUN_1470b1d54(local_c8,local_e8);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b4658(local_68);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2840a FUN_142b2840a body=69 status=ok
// SIG undefined FUN_142b2840a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2840a(void)

{
  _DAT_14c9a1bc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b2844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1bc8,1);
  return;
}



// FUNCTION 142b28450 FUN_142b28450 body=195 status=ok
// SIG undefined FUN_142b28450(void)

void FUN_142b28450(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1456ffb1c(param_1,param_2,0);
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x90) == '\x01') &&
       (iVar1 = *(int *)(lVar2 + 0x98), *(int *)(lVar2 + 0x98) = iVar1 + -1, iVar1 < 2)) {
      *(undefined4 *)(lVar2 + 0x98) = 0;
      *(undefined1 *)(lVar2 + 0x90) = 0;
      *(int *)(lVar2 + 0x94) = *(int *)(lVar2 + 0x94) + 1;
      (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x20))(lVar2 + 0x10,0);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar2 + 0x38);
      FUN_1406022fe(lVar2 + 0x20,lVar2 + 0x40);
      FUN_1401861f4(lVar2 + 0x108,*(undefined4 *)(lVar2 + 0x94));
      FUN_145c1f84a(lVar2);
    }
    if ((*(char *)(lVar2 + 0x91) == '\x01') && (*(int *)(lVar2 + 0x98) == 0)) {
      FUN_1406290c2(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142b28514 FUN_142b28514 body=677 status=ok
// SIG undefined FUN_142b28514(void)

void FUN_142b28514(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  uint *local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar14 = (uint *)(param_1 + 0x5e0);
  iVar2 = *(int *)(param_1 + 0x5f8);
  if (iVar2 == 0) {
    uVar11 = 1;
    uVar10 = 0;
    iVar16 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x5f0);
    if (*(uint **)(param_1 + 0x5f0) == (uint *)0x0) {
      puVar5 = puVar14;
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar11 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar11 = uVar10;
      }
      iVar16 = 0;
      do {
        if (uVar11 == uVar10) goto LAB_142b285ce;
        iVar16 = iVar16 + 0x20;
        uVar15 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar10 = 0;
      iVar16 = 0;
    }
    uVar11 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar15 = 0xffffffff;
    iVar4 = iVar2;
    local_98 = puVar14;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 8 + (longlong)iVar6 * 0x18) != 0) {
        local_a0 = *(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + (longlong)iVar6 * 0x18);
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_90 = &PTR__purecall_14a178e60;
        if (DAT_14c9a1e08 == '\0') {
          FUN_14595fdfe(&DAT_14c9a1de0);
          DAT_14c9a1e08 = '\x01';
        }
        local_90 = &PTR_FUN_14a178e40;
        cVar3 = FUN_14572e25a(&local_90);
        iVar6 = -1;
        if (cVar3 != '\0') {
          (*(code *)local_90[1])(&local_90,local_68);
          iVar6 = FUN_140628096(param_1,local_a0,local_68);
        }
        local_90 = &PTR__purecall_14a178e80;
        FUN_1470a2844(&local_88,1);
        FUN_1406290c2(param_1,local_a0,
                      CONCAT71((int7)((ulonglong)&local_90 >> 8),-1 < iVar6) & 0xffffffff);
        iVar4 = *(int *)(param_1 + 0x5f8);
        puVar14 = local_98;
      }
      uVar15 = uVar15 & ~(uint)uVar11;
      puVar5 = *(uint **)(param_1 + 0x5f0);
      if (*(uint **)(param_1 + 0x5f0) == (uint *)0x0) {
        puVar5 = puVar14;
      }
      iVar6 = (int)uVar10;
      lVar12 = (longlong)iVar6;
      uVar7 = puVar5[lVar12] & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar7 = puVar5[lVar12 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_142b286ab;
            }
            iVar16 = iVar16 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar9;
        }
        uVar10 = lVar12 + 1U & 0xffffffff;
        iVar6 = iVar4;
      }
      else {
LAB_142b286ab:
        uVar11 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar11 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_142b285ce:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b287bf FUN_142b287bf body=69 status=ok
// SIG undefined FUN_142b287bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b287bf(void)

{
  _DAT_14c9a1c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b28801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1c08,1);
  return;
}



// FUNCTION 142b28815 FUN_142b28815 body=69 status=ok
// SIG undefined FUN_142b28815(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b28815(void)

{
  _DAT_14c9a1cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b28857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a1cc0,1);
  return;
}



// FUNCTION 142b2885a FUN_142b2885a body=41 status=ok
// SIG undefined FUN_142b2885a(void)

void FUN_142b2885a(void)

{
  DAT_14c9a1d28 = 0;
  if (DAT_14c9a1d20 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62092();
  return;
}



// FUNCTION 142b28934 FUN_142b28934 body=12 status=ok
// SIG undefined FUN_142b28934(void)

void FUN_142b28934(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b2893d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b28940 FUN_142b28940 body=29 status=ok
// SIG undefined FUN_142b28940(void)

undefined8 FUN_142b28940(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2895e FUN_142b2895e body=53 status=ok
// SIG undefined FUN_142b2895e(void)

void FUN_142b2895e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141305c2c(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 142b28994 FUN_142b28994 body=346 status=ok
// SIG undefined FUN_142b28994(void)

void FUN_142b28994(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  DWORD DVar6;
  DWORD DVar7;
  
  lVar4 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe50);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  piVar5 = DAT_14c950c20;
  if ((*(char *)(lVar4 + 0x299) != '\0') || ((DAT_14c872bd8 & 1) != 0)) goto LAB_142b28ab1;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_142b28a6e;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar5 + 4);
    while( true ) {
      if (0 < piVar5[1]) {
        (**(code **)(**(longlong **)(piVar5 + 0xe) + 0x20))
                  (*(longlong **)(piVar5 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar5[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_142b28a6e:
  (**(code **)(*(longlong *)param_1[1] + 0x2d8))();
  piVar5 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_142b28ab1;
    }
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
LAB_142b28ab1:
  *piVar1 = iVar2;
  return;
}



// FUNCTION 142b28b04 FUN_142b28b04 body=29 status=ok
// SIG undefined FUN_142b28b04(void)

undefined8 FUN_142b28b04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b28b22 FUN_142b28b22 body=82 status=ok
// SIG undefined FUN_142b28b22(void)

void FUN_142b28b22(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe50);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  if ((*(char *)(lVar3 + 0x299) == '\0') && ((DAT_14c872bd8 & 1) == 0)) {
    (**(code **)(*(longlong *)param_1[1] + 0x2e8))();
  }
  *piVar1 = iVar2;
  return;
}



// FUNCTION 142b28b8a FUN_142b28b8a body=29 status=ok
// SIG undefined FUN_142b28b8a(void)

undefined8 FUN_142b28b8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b28ba8 FUN_142b28ba8 body=82 status=ok
// SIG undefined FUN_142b28ba8(void)

void FUN_142b28ba8(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xe50);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 1;
  if ((*(char *)(lVar3 + 0x299) == '\0') && ((DAT_14c872bd8 & 1) == 0)) {
    (**(code **)(*(longlong *)param_1[1] + 0x2f0))();
  }
  *piVar1 = iVar2;
  return;
}



// FUNCTION 142b28c10 FUN_142b28c10 body=29 status=ok
// SIG undefined FUN_142b28c10(void)

undefined8 FUN_142b28c10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b28c36 FUN_142b28c36 body=29 status=ok
// SIG undefined FUN_142b28c36(void)

undefined8 FUN_142b28c36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b28c68 FUN_142b28c68 body=93 status=ok
// SIG undefined FUN_142b28c68(void)

void FUN_142b28c68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b28cc6 FUN_142b28cc6 body=93 status=ok
// SIG undefined FUN_142b28cc6(void)

void FUN_142b28cc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b28d24 FUN_142b28d24 body=126 status=ok
// SIG undefined FUN_142b28d24(void)

void FUN_142b28d24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a179070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b28d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b28dac FUN_142b28dac body=20 status=ok
// SIG undefined FUN_142b28dac(void)

undefined1 FUN_142b28dac(longlong param_1)

{
  FUN_142b28dc0(param_1 + 0x18);
  return 1;
}



// FUNCTION 142b28dc0 FUN_142b28dc0 body=188 status=ok
// SIG undefined FUN_142b28dc0(void)

void FUN_142b28dc0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_1;
  uVar3 = FUN_1401cb356();
  local_78 = local_58;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14a179160;
  local_58[0] = &LAB_142b28e7e;
  local_30 = uVar2;
  FUN_1401cbba4(uVar3,local_68,L".\\Runtime/Gearbox/GbxNexus/Private/NexusContentLoader.cpp(2382)",0
               );
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar4 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar4 = &local_38;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b28ede FUN_142b28ede body=12 status=ok
// SIG undefined FUN_142b28ede(void)

void FUN_142b28ede(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b28ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b28eea FUN_142b28eea body=29 status=ok
// SIG undefined FUN_142b28eea(void)

undefined8 FUN_142b28eea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b28f08 FUN_142b28f08 body=602 status=ok
// SIG undefined FUN_142b28f08(void)

void FUN_142b28f08(longlong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  void *_Src;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  char local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)*param_1;
  if (*(int *)((longlong)plVar3 + 0xbc) != 0) {
    uVar2 = *(uint *)(plVar3 + 0x17);
    lVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b28f90;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)((longlong)plVar3 + 0xbc) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar6;
      goto LAB_142b28f90;
    }
  }
  lVar5 = 0;
LAB_142b28f90:
  puVar8 = param_2;
  do {
    uVar2 = *puVar8;
    if (*(int *)(lVar5 + 0x148) != *(int *)(lVar5 + 0x174)) {
      lVar10 = *(longlong *)(lVar5 + 0x180);
      if (*(longlong *)(lVar5 + 0x180) == 0) {
        lVar10 = lVar5 + 0x178;
      }
      iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar5 + 0x188) - 1U & uVar2) * 4);
      if (iVar7 != -1) {
        do {
          lVar10 = *(longlong *)(lVar5 + 0x140) + (longlong)iVar7 * 0x10;
          if (*(uint *)(*(longlong *)(lVar5 + 0x140) + (longlong)iVar7 * 0x10) == uVar2) {
            if ((lVar10 != 0) && ((ushort *)(lVar10 + 4) != (ushort *)0x0)) {
              uVar1 = *(ushort *)(lVar10 + 4);
              if ((-1 < (short)uVar1) &&
                 (((int)(short)uVar1 < *(int *)(lVar5 + 0xd0) &&
                  (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 200) + (ulonglong)uVar1 * 8),
                  lVar5 != 0)))) {
                puVar4 = (undefined4 *)param_1[1];
                local_68 = *puVar4;
                uStack_64 = puVar4[1];
                uStack_60 = puVar4[2];
                uStack_5c = puVar4[3];
                local_58 = (void *)0x0;
                local_50 = puVar4[6];
                lVar10 = (longlong)local_50;
                _Src = *(void **)(puVar4 + 4);
                if (lVar10 == 0) {
                  local_4c = 0;
                }
                else {
                  FUN_1446dd670(&local_58,local_50,0);
                  memcpy(local_58,_Src,lVar10 * 2);
                }
                local_48 = '\x01';
                FUN_1446dcdd4(local_90,param_2 + 1);
                (**(code **)(*plVar3 + 0x28))(plVar3,lVar5,local_90,&local_68);
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                if ((local_48 == '\x01') && (local_58 != (void *)0x0)) {
                  FUN_1400020a8();
                }
              }
              goto LAB_142b2912a;
            }
            break;
          }
          iVar7 = *(int *)(lVar10 + 8);
        } while (iVar7 != -1);
      }
    }
    if ((longlong)*(int *)(lVar5 + 600) == 0) {
LAB_142b2912a:
      if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar9 = 0x28;
    lVar10 = 0;
    while (*(uint *)(*(longlong *)(lVar5 + 0x250) + lVar9) != uVar2) {
      lVar10 = lVar10 + -0x60;
      lVar9 = lVar9 + 0x60;
      if (-lVar10 == (longlong)*(int *)(lVar5 + 600) * 0x60) goto LAB_142b2912a;
    }
    lVar10 = *(longlong *)(lVar5 + 0x250) - lVar10;
    puVar8 = (uint *)(lVar10 + 0x58);
    if (lVar10 == 0) goto LAB_142b2912a;
  } while( true );
}



// FUNCTION 142b29182 FUN_142b29182 body=12 status=ok
// SIG undefined FUN_142b29182(void)

void FUN_142b29182(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b2918b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b2918e FUN_142b2918e body=29 status=ok
// SIG undefined FUN_142b2918e(void)

undefined8 FUN_142b2918e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b291ac FUN_142b291ac body=1118 status=ok
// SIG undefined FUN_142b291ac(void)

undefined8 FUN_142b291ac(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)*param_2;
  lVar3 = *param_1;
  (**(code **)(*plVar2 + 0x2d0))(plVar2,&local_58);
  FUN_14475c2da(&local_58,0x2e,0x5f,1);
  puVar13 = local_58;
  if (local_50 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_60,puVar13,1);
  if (*(int *)(lVar3 + 0x6c) == 0) {
    iVar17 = *(int *)(lVar3 + 0x40);
    *(int *)(lVar3 + 0x40) = iVar17 + 1;
    if (*(int *)(lVar3 + 0x44) == iVar17) {
      FUN_14482b872(lVar3 + 0x38,iVar17);
    }
    iVar19 = *(int *)(lVar3 + 0x60);
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    lVar8 = lVar3 + 0x48;
    iVar10 = iVar19 + 1;
    iVar16 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar16 = iVar19;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(lVar3 + 0x60) = iVar10;
    }
    else {
      if (*(int *)(lVar3 + 100) <= iVar19) {
        iVar5 = iVar19;
        if (iVar19 + 0x20U < 0xa0) {
          iVar10 = 0x80;
        }
        else {
          uVar20 = iVar19 + 0x20U >> 5;
          if (*(int *)(lVar3 + 100) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar20) {
              uVar21 = uVar20;
            }
          }
          else {
            uVar21 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar11 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
              }
              else {
                uVar12 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar12 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar15 = 0x32;
                  if (0x32 < bVar9) {
                    uVar15 = (ulonglong)bVar9;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_142b294f4;
                    lVar14 = uVar15 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar12 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar5 = *(int *)(lVar3 + 0x60);
            }
          }
LAB_142b294f4:
          iVar7 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar20 <= iVar7) {
            iVar10 = iVar7 << 5;
          }
        }
        *(int *)(lVar3 + 100) = iVar10;
        FUN_1446efbd8(lVar8,iVar5);
        iVar10 = *(int *)(lVar3 + 0x60) + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(lVar3 + 0x60) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar14 = *(longlong *)(lVar3 + 0x58);
        if (*(longlong *)(lVar3 + 0x58) == 0) {
          lVar14 = lVar8;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar17;
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x58);
    }
    bVar9 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar17 = *(int *)(lVar3 + 0x68);
    lVar14 = (longlong)iVar17;
    iVar19 = *(int *)(*(longlong *)(lVar3 + 0x38) + 4 + lVar14 * 0x18);
    *(int *)(lVar3 + 0x68) = iVar19;
    iVar5 = *(int *)(lVar3 + 0x6c) + -1;
    *(int *)(lVar3 + 0x6c) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar19 * 0x18) = 0xffffffff;
    }
  }
  lVar8 = lVar3 + 0x48;
  if (*(longlong *)(lVar3 + 0x58) != 0) {
    lVar8 = *(longlong *)(lVar3 + 0x58);
  }
  iVar19 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar19 = iVar17;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(iVar19 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
  iVar19 = 1;
  lVar8 = *(longlong *)(lVar3 + 0x38);
  *(undefined8 *)(lVar8 + lVar14 * 0x18) = local_60;
  *(longlong **)(lVar8 + 8 + lVar14 * 0x18) = plVar2;
  *(undefined4 *)(lVar8 + 0x10 + lVar14 * 0x18) = 0xffffffff;
  uVar20 = *(int *)(lVar3 + 0x40) - *(int *)(lVar3 + 0x6c);
  if (3 < uVar20) {
    uVar11 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar19 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar20 < 1) || (iVar19 <= *(int *)(lVar3 + 0x80))) {
    uVar20 = (uint)((ulonglong)local_60 >> 0x10);
    uVar21 = (uint)local_60 & 0xffff;
    lVar8 = lVar8 + lVar14 * 0x18;
    uVar20 = *(int *)(lVar3 + 0x80) - 1U &
             (uVar21 >> 4) +
             ((uint)local_60 << 0x10 | uVar21) + (int)((ulonglong)local_60 >> 0x20) +
             (uVar20 << 0x13 | uVar20 & 0xffff);
    *(uint *)(lVar8 + 0x14) = uVar20;
    lVar14 = *(longlong *)(lVar3 + 0x78);
    if (*(longlong *)(lVar3 + 0x78) == 0) {
      lVar14 = lVar3 + 0x70;
    }
    *(undefined4 *)(lVar8 + 0x10) =
         *(undefined4 *)
          (lVar14 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)(int)uVar20) * 4);
    lVar14 = *(longlong *)(lVar3 + 0x78);
    if (*(longlong *)(lVar3 + 0x78) == 0) {
      lVar14 = lVar3 + 0x70;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(lVar3 + 0x80) - 1U & (longlong)(int)uVar20) * 4) = iVar17;
  }
  else {
    *(int *)(lVar3 + 0x80) = iVar19;
    FUN_14151f792(lVar3 + 0x38);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142b2960c FUN_142b2960c body=52 status=ok
// SIG undefined FUN_142b2960c(void)

void FUN_142b2960c(longlong param_1,longlong param_2)

{
  FUN_1414ed7f6(*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + (ulonglong)(*(byte *)(param_2 + 0x36) ^ 1) * 8),
                param_2 + 0x50,0,0xffff);
  return;
}



// FUNCTION 142b29660 FUN_142b29660 body=5 status=ok
// SIG undefined FUN_142b29660(void)

longlong FUN_142b29660(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b29666 FUN_142b29666 body=12 status=ok
// SIG undefined FUN_142b29666(void)

void FUN_142b29666(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b2966f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b29672 FUN_142b29672 body=29 status=ok
// SIG undefined FUN_142b29672(void)

undefined8 FUN_142b29672(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b29690 FUN_142b29690 body=29 status=ok
// SIG undefined FUN_142b29690(void)

undefined8 FUN_142b29690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b296c2 FUN_142b296c2 body=93 status=ok
// SIG undefined FUN_142b296c2(void)

void FUN_142b296c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b29720 FUN_142b29720 body=93 status=ok
// SIG undefined FUN_142b29720(void)

void FUN_142b29720(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b2977e FUN_142b2977e body=126 status=ok
// SIG undefined FUN_142b2977e(void)

void FUN_142b2977e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a179230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b297ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b29816 FUN_142b29816 body=35 status=ok
// SIG undefined FUN_142b29816(void)

undefined8 FUN_142b29816(longlong param_1)

{
  if (DAT_14c9a1ab0 != 0) {
    FUN_142b28450(DAT_14c9a1ab0,*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 142b2983a FUN_142b2983a body=29 status=ok
// SIG undefined FUN_142b2983a(void)

undefined8 FUN_142b2983a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2986c FUN_142b2986c body=93 status=ok
// SIG undefined FUN_142b2986c(void)

void FUN_142b2986c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1792a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b298ca FUN_142b298ca body=93 status=ok
// SIG undefined FUN_142b298ca(void)

void FUN_142b298ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1792a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b29928 FUN_142b29928 body=126 status=ok
// SIG undefined FUN_142b29928(void)

void FUN_142b29928(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1792a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b29997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b299c0 FUN_142b299c0 body=35 status=ok
// SIG undefined FUN_142b299c0(void)

undefined8 FUN_142b299c0(longlong param_1)

{
  if (DAT_14c9a1ab0 != 0) {
    FUN_142b28450(DAT_14c9a1ab0,*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 142b299f3 FUN_142b299f3 body=5347 status=ok
// SIG undefined FUN_142b299f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b299f3(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = "AssetRegistry";
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14c9a1760 = (ulonglong)uVar2;
  local_98 = "nexus";
  local_90 = 5;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14c9a1768 = (ulonglong)uVar2;
  DAT_14c9a1790 = 0;
  _DAT_14c9a1798 = 0;
  DAT_14c9a1770 = 0;
  _DAT_14c9a1778 = 0;
  _DAT_14c9a179c = 0xffffffff00000080;
  _DAT_14c9a17a4 = 0;
  DAT_14c9a17b0 = 0;
  _DAT_14c9a17b8 = 0;
  atexit(FUN_142b2544d);
  _DAT_14c9a17c8 = &LAB_142b254f3;
  _DAT_14c9a17d0 = 0x42c80000;
  DAT_14c9a17d4 = 1;
  DAT_14c9a17c0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a17c0;
  atexit((_func_5014 *)&LAB_142b254f8);
  _DAT_14c9a17e4 = 0;
  FUN_14052b5e0(&DAT_14c9a17e0,"structtype",0);
  _DAT_14c9a17f0 = "structtype";
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(undefined1 **)(local_98 + 0x18) = &LAB_1470a01b4;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a17f8,L"gbx.nexus.Gather",L"Trigger a new gather of content",&local_98);
  if (local_90 == 0) {
LAB_142b29c00:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b29c00;
  }
  atexit(FUN_142b2552c);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(undefined **)(local_98 + 0x18) = &DAT_142b25572;
  local_a8 = 0;
  FUN_14152bcb8(&DAT_14c9a1808,L"gbx.nexus.LayerList",L"Display all Layers and their properties",
                &local_98);
  if (local_90 == 0) {
LAB_142b29cec:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b29cec;
  }
  atexit(FUN_142b25573);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b255b8;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1818,L"gbx.nexus.LayerEnable",
                L"Mark specified Layers for enable on next Flush",&local_98);
  if (local_90 == 0) {
LAB_142b29dca:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b29dca;
  }
  atexit(FUN_142b2574f);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b25794;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1828,L"gbx.nexus.LayerDisable",
                L"Mark specified Layers for disable on next Flush",&local_98);
  if (local_90 == 0) {
LAB_142b29ea8:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b29ea8;
  }
  atexit(FUN_142b25931);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e062c0;
  *(undefined1 **)(local_98 + 0x18) = &LAB_1470a01da;
  local_a8 = 0;
  FUN_14152bcb8(&DAT_14c9a1838,L"gbx.nexus.LayerFlush",L"Apply Enable/Disable states",&local_98);
  if (local_90 == 0) {
LAB_142b29f86:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b29f86;
  }
  atexit(FUN_142b25976);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b259bc;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1848,L"gbx.nexus.SourceList",L"List active sources, contributions",
                &local_98);
  if (local_90 == 0) {
LAB_142b2a064:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a064;
  }
  atexit(FUN_142b25fb9);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b25ffe;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1858,L"gbx.nexus.SourceInspect",&DAT_149dfb77a,&local_98);
  if (local_90 == 0) {
LAB_142b2a142:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a142;
  }
  atexit(FUN_142b26796);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b267dc;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1868,L"gbx.nexus.SourceQuery",&DAT_149dfb77a,&local_98);
  if (local_90 == 0) {
LAB_142b2a220:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a220;
  }
  atexit(FUN_142b26ef3);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b26f38;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1878,L"gbx.nexus.StoreList",
                L"List Active Asset/Config Stores, brief population info",&local_98);
  if (local_90 == 0) {
LAB_142b2a2fe:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a2fe;
  }
  atexit(FUN_142b27049);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b2708e;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1888,L"gbx.nexus.StoreInspect",L"Request Debug Info for specific store",
                &local_98);
  if (local_90 == 0) {
LAB_142b2a3dc:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a3dc;
  }
  atexit(FUN_142b27287);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b272cc;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1898,L"gbx.nexus.StoreQuery",
                L"Print the data (list of elements/sources/etc) for idents",&local_98);
  if (local_90 == 0) {
LAB_142b2a4ba:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a4ba;
  }
  atexit(FUN_142b27994);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_142b279da;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a18a8,L"gbx.nexus.StoreResolve",
                L"Print the resolved data and optionally merge-list for idents",&local_98);
  if (local_90 == 0) {
LAB_142b2a598:
    if (local_98 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_142b2a598;
  }
  atexit(FUN_142b27dd3);
  DAT_14c9a1e20 = 0;
  _DAT_14c9a1e28 = 0;
  _DAT_14c9a1e30 = 2;
  atexit(FUN_142b27e49);
  ram0x00014c9a1e3c = 0;
  FUN_14052b5e0(&DAT_14c9a1e38,"build_tags",0);
  _DAT_14c9a1e48 = "build_tags";
  ram0x00014c9a1e54 = 0;
  FUN_14052b5e0(&DAT_14c9a1e50,"remove_build_tags",0);
  _DAT_14c9a1e60 = "remove_build_tags";
  ram0x00014c9a1e6c = 0;
  FUN_14052b5e0(&DAT_14c9a1e68,"content_tags",0);
  _DAT_14c9a1e78 = "content_tags";
  ram0x00014c9a1e84 = 0;
  FUN_14052b5e0(&DAT_14c9a1e80,"remove_content_tags",0);
  _DAT_14c9a1e90 = "remove_content_tags";
  ram0x00014c9a1e9c = 0;
  FUN_14052b5e0(&DAT_14c9a1e98,"load_context_tags",0);
  _DAT_14c9a1ea8 = "load_context_tags";
  _DAT_14c9a18ec = 0;
  FUN_14052b5e0(&DAT_14c9a18e8,"chunk_id",0);
  _DAT_14c9a18f8 = "chunk_id";
  _DAT_14c9a1904 = 0;
  FUN_14052b5e0(&DAT_14c9a1900,"chunk_id_forced",0);
  _DAT_14c9a1910 = "chunk_id_forced";
  ram0x00014c9a1eb4 = 0;
  FUN_14052b5e0(&DAT_14c9a1eb0,"layer",0);
  _DAT_14c9a1ec0 = "layer";
  ram0x00014c9a1ecc = 0;
  FUN_14052b5e0(&DAT_14c9a1ec8,"revision",0);
  _DAT_14c9a1ed8 = "revision";
  ram0x00014c9a1ee4 = 0;
  FUN_14052b5e0(&DAT_14c9a1ee0,"priority",0);
  _DAT_14c9a1ef0 = "priority";
  _DAT_14c9a191c = 0;
  FUN_14052b5e0(&DAT_14c9a1918,"target",0);
  _DAT_14c9a1928 = "target";
  _DAT_14c9a1934 = 0;
  FUN_14052b5e0(&DAT_14c9a1930,&DAT_14a176ddc,0);
  _DAT_14c9a1940 = &DAT_14a176ddc;
  _DAT_14c9a194c = 0;
  FUN_14052b5e0(&DAT_14c9a1948,"inherit_layers",0);
  _DAT_14c9a1958 = "inherit_layers";
  _DAT_14c9a1964 = 0;
  FUN_14052b5e0(&DAT_14c9a1960,"default_layer",0);
  _DAT_14c9a1970 = "default_layer";
  _DAT_14c9a197c = 0;
  FUN_14052b5e0(&DAT_14c9a1978,"allow_layers",0);
  _DAT_14c9a1988 = "allow_layers";
  _DAT_14c9a1994 = 0;
  FUN_14052b5e0(&DAT_14c9a1990,"remove_allow_layers",0);
  _DAT_14c9a19a0 = "remove_allow_layers";
  _DAT_14c9a19ac = 0;
  FUN_14052b5e0(&DAT_14c9a19a8,"reject_layers",0);
  _DAT_14c9a19b8 = "reject_layers";
  _DAT_14c9a19c4 = 0;
  FUN_14052b5e0(&DAT_14c9a19c0,"remove_reject_layers",0);
  _DAT_14c9a19d0 = "remove_reject_layers";
  _DAT_14c9a19dc = 0;
  FUN_14052b5e0(&DAT_14c9a19d8,"build_presets",0);
  _DAT_14c9a19e8 = "build_presets";
  _DAT_14c9a19f4 = 0;
  FUN_14052b5e0(&DAT_14c9a19f0,"build_filter",0);
  _DAT_14c9a1a00 = "build_filter";
  _DAT_14c9a1a0c = 0;
  FUN_14052b5e0(&DAT_14c9a1a08,"content_presets",0);
  _DAT_14c9a1a18 = "content_presets";
  _DAT_14c9a1a24 = 0;
  FUN_14052b5e0(&DAT_14c9a1a20,"content_filter",0);
  _DAT_14c9a1a30 = "content_filter";
  _DAT_14c9a1a3c = 0;
  FUN_14052b5e0(&DAT_14c9a1a38,"force",0);
  _DAT_14c9a1a48 = "force";
  _DAT_14c9a1a54 = 0;
  FUN_14052b5e0(&DAT_14c9a1a50,"require",0);
  _DAT_14c9a1a60 = "require";
  _DAT_14c9a1a6c = 0;
  FUN_14052b5e0(&DAT_14c9a1a68,"reject",0);
  _DAT_14c9a1a78 = "reject";
  _DAT_14c9a1a84 = 0;
  FUN_14052b5e0(&DAT_14c9a1a80,"must_pass",0);
  _DAT_14c9a1a90 = "must_pass";
  _DAT_14c9a1a9c = 0;
  FUN_14052b5e0(&DAT_14c9a1a98,"redirect_to",0);
  _DAT_14c9a1aa8 = "redirect_to";
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a1b10);
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a1b18);
  DAT_14c9a1b40 = 0;
  _DAT_14c9a1b48 = 0;
  DAT_14c9a1b20 = 0;
  _DAT_14c9a1b28 = 0;
  _DAT_14c9a1b4c = 0xffffffff00000080;
  DAT_14c9a1b54 = 0;
  DAT_14c9a1b60 = 0;
  DAT_14c9a1b68 = 0;
  atexit(FUN_142b27f52);
  DAT_14c9a1b90 = 0;
  _DAT_14c9a1b98 = 0;
  DAT_14c9a1b70 = 0;
  _DAT_14c9a1b78 = 0;
  _DAT_14c9a1b9c = 0xffffffff00000080;
  DAT_14c9a1ba4 = 0;
  DAT_14c9a1bb0 = 0;
  DAT_14c9a1bb8 = 0;
  atexit(FUN_142b27ffb);
  local_98 = (char *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_98 + 0x10) = lVar5;
  *(undefined ***)local_98 = &PTR_FUN_149e00260;
  *(code **)(local_98 + 0x18) = FUN_1470a13b4;
  local_a8 = 0;
  FUN_1415c7246(&DAT_14c9a1bc0,L"gbx.nexus.Eval_Test",
                L"Evaluate an expression via the experimental RDP",&local_98);
  if (local_90 != 0) {
    if (local_98 == (char *)0x0) goto LAB_142b2ab51;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142b2ab51:
  atexit(FUN_142b2840a);
  DAT_14c9a1bd0 = (undefined8 *)0x0;
  _DAT_14c9a1bd8 = 0;
  puVar3 = (undefined8 *)FUN_140595974(0x900,0);
  lVar6 = 7;
  puVar1 = puVar3;
  do {
    puVar4 = puVar1 + 0x24;
    *puVar1 = puVar4;
    lVar6 = lVar6 + -1;
    puVar1 = puVar4;
  } while (lVar6 != 0);
  *puVar4 = DAT_14c9a1bd0;
  _DAT_14c9a1bd8 = _DAT_14c9a1bd8 + 8;
  local_a8 = 0;
  DAT_14c9a1bd0 = puVar3;
  FUN_14627302a(&DAT_14c9a1c00,L"gbx.Nexus.AllowAsyncRebuildRegistryOnModification",1,
                L"The engine will asyncrhonously rebuild the NexusAssetRegistry on asset modifications, as opposed to a synchronous but more targeted rebuild."
               );
  atexit(FUN_142b287bf);
  FUN_1446f470e(&DAT_14c9a1c84,L"base",1);
  FUN_1446f470e(&DAT_14c9a1c8c,L"Layer",1);
  FUN_1446f470e(&DAT_14c9a1c94,L"Content",1);
  FUN_1446f470e(&DAT_14c9a1c9c,L"ContentToTest",1);
  FUN_140056680(&DAT_14c9a1ca8,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_142b28804);
  local_a8 = 0;
  FUN_141707242(&DAT_14c9a1cb8,L"gbx.nexus.test.OverrideContentToTest",&DAT_14c9a1ca8,
                L"Layer.DefStructName.ident,... : A comma delimited list to override UNexusSerializeTestSettings::ContentToTest, used when running the \"Gearbox.GbxNexus.Serialize.Content.*\" unit tests."
               );
  atexit(FUN_142b28815);
  DAT_14c9a1cc8 = 0;
  uRam000000014c9a1cd0 = 0;
  local_88 = 0;
  local_78 = &PTR_LAB_14a1795c0;
  local_70 = &LAB_142b299e8;
  local_98 = &DAT_14011fc1e;
  FUN_14617985e();
  atexit((_func_5014 *)&LAB_142b28883);
  _DAT_14c9a1dd0 = &LAB_142b28888;
  _DAT_14c9a1dd8 = 0;
  DAT_14c9a1ddc = 1;
  DAT_14c9a1dc8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a1dc8;
  atexit((_func_5014 *)&LAB_142b2888d);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2aed8 FUN_142b2aed8 body=41 status=ok
// SIG undefined FUN_142b2aed8(void)

void FUN_142b2aed8(void)

{
  DAT_14c9a1f68 = 0;
  if (DAT_14c9a1f60 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62130();
  return;
}



// FUNCTION 142b2af3f FUN_142b2af3f body=41 status=ok
// SIG undefined FUN_142b2af3f(void)

void FUN_142b2af3f(void)

{
  DAT_14c9a20a0 = 0;
  if (DAT_14c9a2098 != 0) {
    FUN_1400020a8();
  }
  FUN_145d621ce();
  return;
}



// FUNCTION 142b2afa6 FUN_142b2afa6 body=41 status=ok
// SIG undefined FUN_142b2afa6(void)

void FUN_142b2afa6(void)

{
  DAT_14c9a21b0 = 0;
  if (DAT_14c9a21a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6226c();
  return;
}



// FUNCTION 142b2b00d FUN_142b2b00d body=41 status=ok
// SIG undefined FUN_142b2b00d(void)

void FUN_142b2b00d(void)

{
  DAT_14c9a22c0 = 0;
  if (DAT_14c9a22b8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6230a();
  return;
}



// FUNCTION 142b2b080 FUN_142b2b080 body=44 status=ok
// SIG undefined FUN_142b2b080(void)

void FUN_142b2b080(void)

{
  longlong lVar1;
  
  lVar1 = 0x260;
  do {
    FUN_1401d9a90(&DAT_14c9a2370 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x20);
  return;
}



// FUNCTION 142b2b24f FUN_142b2b24f body=1719 status=ok
// SIG undefined FUN_142b2b24f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2b24f(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = "AssetRegistry";
  local_80 = 0xd;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  _DAT_14c9a1f00 = (ulonglong)uVar1;
  DAT_14c9a1f08 = 0;
  _DAT_14c9a1f10 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b2b238;
  local_88 = &DAT_14011fc1e;
  FUN_146179f5a(&local_88);
  atexit((_func_5014 *)&LAB_142b2af01);
  _DAT_14c9a2010 = &LAB_142b2af06;
  _DAT_14c9a2018 = 0;
  DAT_14c9a201c = 1;
  DAT_14c9a2008 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a2008;
  atexit((_func_5014 *)&LAB_142b2af0b);
  FUN_1458e052c(&DAT_14c9a2020);
  _DAT_14c9a2020 = &PTR_FUN_14a179e00;
  DAT_14c9a2028 = 0;
  uRam000000014c9a2030 = 0;
  _DAT_14c9a2038 = 0;
  DAT_14c9a2040 = 0;
  uRam000000014c9a2048 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b2b23e;
  local_88 = &DAT_14011fc1e;
  FUN_146040e72(&local_88);
  atexit((_func_5014 *)&LAB_142b2af68);
  _DAT_14c9a2140 = &LAB_142b2af6d;
  _DAT_14c9a2148 = 0;
  DAT_14c9a214c = 1;
  DAT_14c9a2138 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a2138;
  atexit((_func_5014 *)&LAB_142b2af72);
  DAT_14c9a2150 = 0;
  uRam000000014c9a2158 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b2b244;
  local_88 = &DAT_14011fc1e;
  FUN_14617a656(&local_88);
  atexit((_func_5014 *)&LAB_142b2afcf);
  _DAT_14c9a2250 = &LAB_142b2afd4;
  _DAT_14c9a2258 = 0;
  DAT_14c9a225c = 1;
  DAT_14c9a2248 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a2248;
  atexit((_func_5014 *)&LAB_142b2afd9);
  DAT_14c9a2260 = 0;
  uRam000000014c9a2268 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_142b2b24a;
  local_88 = &DAT_14011fc1e;
  FUN_14617ad52(&local_88);
  atexit((_func_5014 *)&LAB_142b2b036);
  _DAT_14c9a2360 = &LAB_142b2b03b;
  _DAT_14c9a2368 = 0;
  DAT_14c9a236c = 1;
  DAT_14c9a2358 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a2358;
  atexit((_func_5014 *)&LAB_142b2b040);
  atexit((_func_5014 *)&LAB_142b2b074);
  _DAT_14c9a2380 = 9;
  _DAT_14c9a2388 = 0xf;
  _DAT_14c9a2379 = 0;
  uRam000000014c9a237d = 0;
  _DAT_14c9a2370 = 0x5649544345524944;
  DAT_14c9a2378 = 0x45;
  _DAT_14c9a23a0 = 9;
  _DAT_14c9a23a8 = 0xf;
  _DAT_14c9a2399 = 0;
  uRam000000014c9a239d = 0;
  _DAT_14c9a2390 = 0x524154535f434f44;
  DAT_14c9a2398 = 0x54;
  _DAT_14c9a23c0 = 7;
  _DAT_14c9a23c8 = 0xf;
  _DAT_14c9a23b7 = 0;
  DAT_14c9a23bf = 0;
  uRam000000014c9a23b4 = 0x444e45;
  _DAT_14c9a23b0 = 0x5f434f44;
  _DAT_14c9a23e0 = 0xf;
  _DAT_14c9a23e8 = 0xf;
  _DAT_14c9a23d0 = 0x535f4b434f4c42;
  DAT_14c9a23d7 = 0x45;
  uRam000000014c9a23d8 = 0x54524154535f51;
  DAT_14c9a23df = 0;
  _DAT_14c9a2400 = 0xf;
  _DAT_14c9a2408 = 0xf;
  _DAT_14c9a23f0 = 0x4d5f4b434f4c42;
  DAT_14c9a23f7 = 0x41;
  uRam000000014c9a23f8 = 0x54524154535f50;
  DAT_14c9a23ff = 0;
  _DAT_14c9a2420 = 0xd;
  _DAT_14c9a2428 = 0xf;
  _DAT_14c9a241d = 0;
  DAT_14c9a241f = 0;
  uRam000000014c9a2418 = 0x444e455f51;
  _DAT_14c9a2410 = 0x4b434f4c42;
  _DAT_14c9a2415 = 0x45535f;
  _DAT_14c9a2440 = 0xd;
  _DAT_14c9a2448 = 0xf;
  DAT_14c9a243f = 0;
  _DAT_14c9a243d = 0;
  uRam000000014c9a2438 = 0x444e455f50;
  _DAT_14c9a2430 = 0x4b434f4c42;
  _DAT_14c9a2435 = 0x414d5f;
  _DAT_14c9a2460 = 0xb;
  _DAT_14c9a2468 = 0xf;
  DAT_14c9a245f = 0;
  _DAT_14c9a245b = 0;
  _DAT_14c9a2450 = 0x455f4b434f4c42;
  _DAT_14c9a2457 = 0x5952544e;
  _DAT_14c9a2480 = 0xe;
  _DAT_14c9a2488 = 0xf;
  _DAT_14c9a247e = 0;
  uRam000000014c9a2478 = 0x54524154535f;
  _DAT_14c9a2470 = 0x535f574f4c46;
  _DAT_14c9a2476 = 0x5145;
  _DAT_14c9a24a0 = 0xe;
  _DAT_14c9a24a8 = 0xf;
  _DAT_14c9a249e = 0;
  uRam000000014c9a2498 = 0x54524154535f;
  _DAT_14c9a2490 = 0x4d5f574f4c46;
  _DAT_14c9a2496 = 0x5041;
  _DAT_14c9a24c0 = 0xc;
  _DAT_14c9a24c8 = 0xf;
  _DAT_14c9a24bc = 0;
  _DAT_14c9a24b8 = 0x444e455f;
  _DAT_14c9a24b0 = 0x5145535f574f4c46;
  _DAT_14c9a24e0 = 0xc;
  _DAT_14c9a24e8 = 0xf;
  _DAT_14c9a24dc = 0;
  _DAT_14c9a24d8 = 0x444e455f;
  _DAT_14c9a24d0 = 0x50414d5f574f4c46;
  _DAT_14c9a2500 = 0;
  _DAT_14c9a24f0 = (char *)0x0;
  uRam000000014c9a24f8 = 0;
  _DAT_14c9a2508 = 0xf;
  _DAT_14c9a24f0 = (char *)FUN_14001cc68(0x20,0x10);
  _DAT_14c9a2500 = 0x10;
  _DAT_14c9a2508 = 0x1f;
  builtin_strncpy(_DAT_14c9a24f0,"FLOW_MAP_COMPACT",0x11);
  _DAT_14c9a2520 = 10;
  _DAT_14c9a2528 = 0xf;
  _DAT_14c9a251a = 0;
  _DAT_14c9a251e = 0;
  _DAT_14c9a2510 = 0x544e455f574f4c46;
  _DAT_14c9a2518 = 0x5952;
  _DAT_14c9a2540 = 3;
  _DAT_14c9a2548 = 0xf;
  _DAT_14c9a2533 = 0;
  _DAT_14c9a2538 = 0;
  uRam000000014c9a253b = 0;
  _DAT_14c9a2530 = 0x454b;
  DAT_14c9a2532 = 0x59;
  _DAT_14c9a2560 = 5;
  _DAT_14c9a2568 = 0xf;
  _DAT_14c9a2555 = 0;
  _DAT_14c9a255c = 0;
  DAT_14c9a2554 = 0x45;
  _DAT_14c9a2550 = 0x554c4156;
  _DAT_14c9a2580 = 6;
  _DAT_14c9a2588 = 0xf;
  _DAT_14c9a257e = 0;
  _DAT_14c9a2576 = 0;
  _DAT_14c9a2574 = 0x524f;
  _DAT_14c9a2570 = 0x48434e41;
  _DAT_14c9a25a0 = 5;
  _DAT_14c9a25a8 = 0xf;
  _DAT_14c9a2595 = 0;
  _DAT_14c9a259c = 0;
  DAT_14c9a2594 = 0x53;
  _DAT_14c9a2590 = 0x41494c41;
  _DAT_14c9a25c0 = 3;
  _DAT_14c9a25c8 = 0xf;
  _DAT_14c9a25b3 = 0;
  _DAT_14c9a25b8 = 0;
  uRam000000014c9a25bb = 0;
  DAT_14c9a25b2 = 0x47;
  _DAT_14c9a25b0 = 0x4154;
  _DAT_14c9a25e0 = 6;
  _DAT_14c9a25e8 = 0xf;
  _DAT_14c9a25de = 0;
  _DAT_14c9a25d6 = 0;
  _DAT_14c9a25d4 = 0x5241;
  _DAT_14c9a25d0 = 0x4c414353;
  atexit(FUN_142b2b080);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2b908 FUN_142b2b908 body=55 status=ok
// SIG undefined FUN_142b2b908(void)

void FUN_142b2b908(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2b28 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2b28 = FUN_14171c317(FUN_1462a3cf5,uVar1,L"EGbxViewFlag");
  }
  return;
}



// FUNCTION 142b2b93f FUN_142b2b93f body=55 status=ok
// SIG undefined FUN_142b2b93f(void)

void FUN_142b2b93f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2b40 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2b40 = FUN_14171c317(FUN_1462a3d26,uVar1,L"EGbxViewFlagAction");
  }
  return;
}



// FUNCTION 142b2b976 FUN_142b2b976 body=55 status=ok
// SIG undefined FUN_142b2b976(void)

void FUN_142b2b976(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2b58 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2b58 = FUN_14171c317(FUN_1462a3d55,uVar1,L"EGbxLLMReport");
  }
  return;
}



// FUNCTION 142b2b9ad FUN_142b2b9ad body=55 status=ok
// SIG undefined FUN_142b2b9ad(void)

void FUN_142b2b9ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2be8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2be8 = FUN_14171c317(FUN_1462a3f6e,uVar1,L"EAnalyticsFileOption");
  }
  return;
}



// FUNCTION 142b2b9e4 FUN_142b2b9e4 body=55 status=ok
// SIG undefined FUN_142b2b9e4(void)

void FUN_142b2b9e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2c78 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2c78 = FUN_14171c317(FUN_1462a40f4,uVar1,L"EGbxElasticExportOptions");
  }
  return;
}



// FUNCTION 142b2ba1b FUN_142b2ba1b body=55 status=ok
// SIG undefined FUN_142b2ba1b(void)

void FUN_142b2ba1b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d18 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d18 = FUN_14171c317(FUN_1462a4346,uVar1,L"EGbxAttributeModifierType");
  }
  return;
}



// FUNCTION 142b2ba52 FUN_142b2ba52 body=55 status=ok
// SIG undefined FUN_142b2ba52(void)

void FUN_142b2ba52(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d30 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d30 = FUN_14171c317(FUN_1462a4377,uVar1,L"EGbxComparator");
  }
  return;
}



// FUNCTION 142b2ba8a FUN_142b2ba8a body=180 status=ok
// SIG undefined FUN_142b2ba8a(void)

DWORD FUN_142b2ba8a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  QueryPerformanceCounter(&local_50);
  dVar2 = (double)CONCAT44(local_50.s.HighPart,local_50.s.LowPart) * DAT_14c83f420;
  lVar1 = -DAT_14c872be0;
  FUN_1462a5be8(param_1 + 0x28,&local_50);
  *local_48 = param_2;
  local_48[1] = param_3;
  local_48[2] = 0.0 - (dVar2 + 16777216.0);
  local_48[3] = lVar1;
  *(undefined1 *)(local_48 + 4) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_50.s.LowPart;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bb50 FUN_142b2bb50 body=5 status=ok
// SIG undefined FUN_142b2bb50(void)

longlong FUN_142b2bb50(longlong param_1)

{
  return param_1 + 0x3c;
}



// FUNCTION 142b2bb7e FUN_142b2bb7e body=126 status=ok
// SIG undefined FUN_142b2bb7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2bb7e(void)

{
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a3728 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = &DAT_14c9a3728;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a3750])(&DAT_14c9a3730);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bbfd FUN_142b2bbfd body=126 status=ok
// SIG undefined FUN_142b2bbfd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2bbfd(void)

{
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a3770 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = &DAT_14c9a3770;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a3798])(&DAT_14c9a3778);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bc7c FUN_142b2bc7c body=126 status=ok
// SIG undefined FUN_142b2bc7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2bc7c(void)

{
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a37b8 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = &DAT_14c9a37b8;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a37e0])(&DAT_14c9a37c0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bcfb FUN_142b2bcfb body=126 status=ok
// SIG undefined FUN_142b2bcfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2bcfb(void)

{
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a3800 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = &DAT_14c9a3800;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a3828])(&DAT_14c9a3808);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bd7a FUN_142b2bd7a body=115 status=ok
// SIG undefined FUN_142b2bd7a(void)

void FUN_142b2bd7a(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2bdee FUN_142b2bdee body=126 status=ok
// SIG undefined FUN_142b2bdee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2bdee(void)

{
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9a3848 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_18 = &local_20;
  local_20 = &DAT_14c9a3848;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a3870])(&DAT_14c9a3850);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2be6e FUN_142b2be6e body=8 status=ok
// SIG undefined FUN_142b2be6e(void)

longlong FUN_142b2be6e(longlong *param_1)

{
  return *param_1 + 0x3c;
}



// FUNCTION 142b2be76 FUN_142b2be76 body=55 status=ok
// SIG undefined FUN_142b2be76(void)

bool FUN_142b2be76(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  bVar1 = true;
  if ((0x7ffffffe < *(int *)(param_1 + 0x18) - 2U) && (*(int *)(param_1 + 0x70) < 1)) {
    if (*(int *)(param_1 + 0x60) < 1) {
      bVar1 = false;
    }
    else {
      lVar2 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
      bVar1 = 0 < *(int *)(lVar2 + 8);
    }
  }
  return bVar1;
}



// FUNCTION 142b2beae FUN_142b2beae body=122 status=ok
// SIG undefined FUN_142b2beae(void)

void FUN_142b2beae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      local_34 = (undefined4)lVar2;
      (*(code *)*param_2)(param_2[1],&local_34,*(longlong *)(param_1 + 0x68) + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (lVar2 < *(int *)(param_1 + 0x70));
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2bf29 FUN_142b2bf29 body=140 status=ok
// SIG undefined FUN_142b2bf29(void)

void FUN_142b2bf29(void)

{
  FUN_1404eec70(DAT_14c9a3908,DAT_14c9a3910);
  if (DAT_14c9a3908 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(DAT_14c9a38f8,DAT_14c9a3900);
  if (DAT_14c9a38f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(&DAT_14c9a38d8);
  (*(code *)(&PTR_FUN_14a1842f0)[DAT_14c9a38d0])(&DAT_14c9a38b0);
  if (DAT_14c9a38a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b2bfb5 FUN_142b2bfb5 body=41 status=ok
// SIG undefined FUN_142b2bfb5(void)

void FUN_142b2bfb5(void)

{
  DAT_14c9a3970 = 0;
  if (DAT_14c9a3968 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b528a();
  return;
}



// FUNCTION 142b2bfde FUN_142b2bfde body=151 status=ok
// SIG undefined FUN_142b2bfde(void)

void FUN_142b2bfde(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 142b2c07c FUN_142b2c07c body=924 status=ok
// SIG undefined FUN_142b2c07c(void)

void FUN_142b2c07c(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a17fc00;
  FUN_141237793();
  iVar1 = *(int *)((longlong)param_1 + 0x10c);
  if ((-1 < (longlong)iVar1) && (iVar1 < DAT_14c9a3330)) {
    *(undefined8 *)(DAT_14c9a3328 + (longlong)iVar1 * 0x18) = 0;
    lVar2 = DAT_14c9a3328;
    lVar3 = (longlong)*(int *)((longlong)param_1 + 0x10c);
    FUN_1412b7fd3(*(undefined8 *)(DAT_14c9a3328 + 8 + lVar3 * 0x18),
                  *(undefined4 *)(DAT_14c9a3328 + 0x10 + lVar3 * 0x18));
    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
    if (*(int *)(lVar2 + 0x14 + lVar3 * 0x18) != 0) {
      FUN_1470afd68(lVar2 + lVar3 * 0x18 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (*(int *)((longlong)param_1 + 0x174) != 0) {
    FUN_1401ad22e(param_1 + 0x2d,0);
  }
  param_1[0x33] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x194)) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0x80;
    FUN_1446efbd8(param_1 + 0x2f,0);
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (*(int *)((longlong)param_1 + 0x11c) != 0) {
    FUN_1405b3ec2(param_1 + 0x22,0);
  }
  param_1[0x28] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x13c)) {
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80;
    FUN_1446efbd8(param_1 + 0x24,0);
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) != 0) {
    FUN_14472eb64(param_1 + 0x17,0);
  }
  param_1[0x1d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xe4)) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(param_1 + 0x19,0);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_14472eb64(param_1 + 0xd,0);
  }
  param_1[0x13] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x94)) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
    FUN_1446efbd8(param_1 + 0xf,0);
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
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b2c424 FUN_142b2c424 body=151 status=ok
// SIG undefined FUN_142b2c424(void)

void FUN_142b2c424(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 142b2c4c1 FUN_142b2c4c1 body=49 status=ok
// SIG undefined FUN_142b2c4c1(void)

void FUN_142b2c4c1(void)

{
  FUN_144760e21(DAT_14c9a3b38,DAT_14c9a3b40);
  if (DAT_14c9a3b38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b2c4f2 FUN_142b2c4f2 body=91 status=ok
// SIG undefined FUN_142b2c4f2(void)

void FUN_142b2c4f2(void)

{
  if (DAT_14c9a3b60 != 0) {
    if (DAT_14c9a3b58 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9a3b58)(DAT_14c9a3b58,0);
    FUN_1446efa72(&DAT_14c9a3b58,0,0,0x10);
    DAT_14c9a3b60 = 0;
  }
  if (DAT_14c9a3b58 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b2c77d FUN_142b2c77d body=15 status=ok
// SIG undefined FUN_142b2c77d(void)

void FUN_142b2c77d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 142b2c78c FUN_142b2c78c body=131 status=ok
// SIG undefined FUN_142b2c78c(void)

undefined8 * FUN_142b2c78c(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2c810 FUN_142b2c810 body=131 status=ok
// SIG undefined FUN_142b2c810(void)

undefined8 * FUN_142b2c810(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2c894 FUN_142b2c894 body=131 status=ok
// SIG undefined FUN_142b2c894(void)

undefined8 * FUN_142b2c894(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2c918 FUN_142b2c918 body=131 status=ok
// SIG undefined FUN_142b2c918(void)

undefined8 * FUN_142b2c918(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2c99c FUN_142b2c99c body=131 status=ok
// SIG undefined FUN_142b2c99c(void)

undefined8 * FUN_142b2c99c(undefined8 *param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14a17fc40;
  FUN_140e5a8ae();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_142b2ea16(&DAT_14c9a3710);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2ca7e FUN_142b2ca7e body=195 status=ok
// SIG undefined FUN_142b2ca7e(void)

void FUN_142b2ca7e(longlong *param_1,undefined8 param_2,DWORD *param_3)

{
  longlong lVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DVar2 = *param_3;
  lVar3 = *param_1;
  lVar1 = *(longlong *)(lVar3 + 0x28) + (longlong)(int)DVar2 * 0x28;
  lVar4 = *(longlong *)(lVar1 + 8);
  QueryPerformanceCounter(&local_40);
  *(double *)(lVar4 + 0x30) =
       (double)CONCAT44(local_40.s.HighPart,local_40.s.LowPart) * DAT_14c83f420 + 16777216.0 +
       *(double *)(lVar4 + 0x30);
  *(longlong *)(lVar4 + 0x38) = *(longlong *)(lVar4 + 0x38) + DAT_14c872be0;
  FUN_1470ac124(lVar1,1);
  local_40.s.LowPart = DVar2;
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],lVar1,&local_40);
  FUN_1470b000c(lVar3 + 0x28,DVar2);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2cb7a FUN_142b2cb7a body=29 status=ok
// SIG undefined FUN_142b2cb7a(void)

undefined8 FUN_142b2cb7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2cbac FUN_142b2cbac body=91 status=ok
// SIG undefined FUN_142b2cbac(void)

void FUN_142b2cbac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183330;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b2cc08 FUN_142b2cc08 body=91 status=ok
// SIG undefined FUN_142b2cc08(void)

void FUN_142b2cc08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183330;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142b2cc64 FUN_142b2cc64 body=124 status=ok
// SIG undefined FUN_142b2cc64(void)

void FUN_142b2cc64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a183330;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2ccd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2cce6 FUN_142b2cce6 body=16 status=ok
// SIG undefined FUN_142b2cce6(void)

undefined1 FUN_142b2cce6(void)

{
  FUN_142b2ccf6();
  return 1;
}



// FUNCTION 142b2ccf6 FUN_142b2ccf6 body=1160 status=ok
// SIG undefined FUN_142b2ccf6(void)

void FUN_142b2ccf6(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_210;
  undefined *local_208;
  undefined1 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [32];
  byte local_1c8;
  undefined *local_1c0;
  char local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [32];
  byte local_180;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined1 local_c0 [32];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_142b2d180();
  FUN_140056680(local_e8,&DAT_149dfb77a);
  puVar4 = &DAT_14c9a33a0;
  local_1c0 = &DAT_14c9a3168;
  if ('\x01' < DAT_14c9a33d8) {
    local_1c0 = &DAT_14c9a33a0;
  }
  if (DAT_14c9a33dc == 0) {
    local_1c0 = &DAT_14c9a3168;
  }
  local_1b8 = '\x02';
  FUN_140056680(local_1b0,L"startup");
  local_180 = 4;
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || ((char)local_1c0[0x38] < local_1b8)) {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar4 = &DAT_14c9a3168;
    }
    local_208 = puVar4;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  else {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar4 = &DAT_14c9a3168;
    }
    local_208 = puVar4;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  local_210 = 4;
  local_200 = 2;
  FUN_140056680(local_1f8,L"startup");
  local_1c8 = local_210;
  (*(code *)(&PTR_LAB_14a184230)[local_210])(local_1e8,local_230);
  (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
  FUN_140d76846(&local_178,&local_208);
  FUN_14027c224(local_e8,&local_178);
  if (local_e8[0] == '\x01') {
    FUN_14027c70a(&uStack_e0);
  }
  FUN_1404eec70(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_98);
  (*(code *)(&PTR_FUN_14a1842f0)[local_a0])(local_c0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec70(local_100,local_f8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_130);
  (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c8])(local_1e8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_140d5712e();
  local_178 = (undefined8 *)0x0;
  local_170 = 0;
  FUN_1446efa72(&local_178,0,2,0x10);
  local_170 = 2;
  *local_178 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_178[2] = lVar3;
  *local_178 = &PTR_FUN_14a183430;
  FUN_1448b6402(lVar2 + 8,&local_1c0,&local_178);
  if (local_170 != 0) {
    if (local_178 == (undefined8 *)0x0) goto LAB_142b2d0f1;
    (**(code **)*local_178)(local_178,0);
    FUN_1446efa72(&local_178,0,0,0x10);
    local_170 = 0;
  }
  if (local_178 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142b2d0f1:
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2d180 FUN_142b2d180 body=866 status=ok
// SIG undefined FUN_142b2d180(void)

void FUN_142b2d180(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  DWORD DVar5;
  char cVar6;
  ushort uVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  LPVOID lpTlsValue;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = FUN_140d5712e();
  lVar10 = *(longlong *)(lVar9 + 0x28);
  plVar4 = *(longlong **)(lVar9 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a3c20) && (FUN_144b3d300(&DAT_14c9a3c20), DAT_14c9a3c20 == -1)) {
    FUN_140f2ad5a(&local_b8,lVar10 + 0x78,lVar10 + 0xb8,lVar10 + 0x98);
    puVar11 = (undefined8 *)FUN_145a2e138();
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    DAT_14c9a3c18 = puVar11;
    _Init_thread_footer(&DAT_14c9a3c20);
  }
  cVar6 = FUN_141567e7e(DAT_14c9a3c18,0);
  if (cVar6 != '\0') {
    FUN_140f2ad5a(local_f8,lVar10 + 0x78,lVar10 + 0xb8,lVar10 + 0x98);
    puVar11 = DAT_14c9a3c18;
    if (DAT_14c9a3c18[4] == 0) {
      if (DAT_14c9a3c18[1] == 0) {
        lVar10 = FUN_145a2e308(*(undefined2 *)(DAT_14c9a3c18 + 3));
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
        puVar11[1] = lVar10;
      }
      dwTlsIndex = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar8 = 0xffffffff;
        LOCK();
        bVar12 = DAT_14c7585d0 != 0xffffffff;
        DVar5 = dwTlsIndex;
        if (bVar12) {
          DVar8 = DAT_14c7585d0;
          DVar5 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar5;
        UNLOCK();
        if (bVar12) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar8;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_140036a08(&local_b8);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      local_e8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
      local_e0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
      local_d8 = *(longlong *)((longlong)lpTlsValue + 0x20);
      local_d0 = '\0';
      local_c8 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
      *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_e8;
      *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
      uStack_a8 = 0;
      uStack_a6 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uStack_ae = 0;
      local_98 = 0;
      plStack_90 = (longlong *)0x0;
      local_88 = 1;
      local_40 = 0;
      local_38 = 0x800000000;
      FUN_142b2fe18(&local_b8,puVar11);
      uStack_a8 = 0;
      uStack_a6 = 0;
      uVar7 = *(ushort *)(puVar11 + 3);
      if ((uVar7 & 0x40) == 0) {
        FUN_1402160b8(&local_c0);
        FUN_14587583c(&local_b8,&DAT_14a17510b,&local_c0);
        uVar7 = *(ushort *)(puVar11 + 3);
      }
      if ((uVar7 & 0x20) == 0) {
        local_c0 = *puVar11;
        FUN_142b301c0(&local_b8,&DAT_14a18341e);
      }
      FUN_1461f2d36(&local_b8,local_f8);
      FUN_142b2feea(&local_b8,puVar11);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_d0 == '\0') {
        local_d0 = '\x01';
        *(int *)(local_e8 + 4) = *(int *)(local_e8 + 4) + -1;
        if (local_d8 != local_e8[2]) {
          FUN_14004673c();
        }
        *local_e8 = local_e0;
        local_e8[3] = local_c8;
      }
    }
    else {
      FUN_14146e7de();
      FUN_1412de870(&DAT_14c9a3ef0,puVar11);
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
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
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2d4e4 FUN_142b2d4e4 body=29 status=ok
// SIG undefined FUN_142b2d4e4(void)

undefined8 FUN_142b2d4e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2d516 FUN_142b2d516 body=85 status=ok
// SIG undefined FUN_142b2d516(void)

void FUN_142b2d516(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183430;
  return;
}



// FUNCTION 142b2d56c FUN_142b2d56c body=85 status=ok
// SIG undefined FUN_142b2d56c(void)

void FUN_142b2d56c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183430;
  return;
}



// FUNCTION 142b2d5c2 FUN_142b2d5c2 body=118 status=ok
// SIG undefined FUN_142b2d5c2(void)

void FUN_142b2d5c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a183430;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2d629. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2d63e FUN_142b2d63e body=16 status=ok
// SIG undefined FUN_142b2d63e(void)

undefined1 FUN_142b2d63e(void)

{
  FUN_142b2d180();
  return 1;
}



// FUNCTION 142b2d64e FUN_142b2d64e body=29 status=ok
// SIG undefined FUN_142b2d64e(void)

undefined8 FUN_142b2d64e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2d680 FUN_142b2d680 body=85 status=ok
// SIG undefined FUN_142b2d680(void)

void FUN_142b2d680(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1834a0;
  return;
}



// FUNCTION 142b2d6d6 FUN_142b2d6d6 body=85 status=ok
// SIG undefined FUN_142b2d6d6(void)

void FUN_142b2d6d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1834a0;
  return;
}



// FUNCTION 142b2d72c FUN_142b2d72c body=118 status=ok
// SIG undefined FUN_142b2d72c(void)

void FUN_142b2d72c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1834a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2d793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2d7a8 FUN_142b2d7a8 body=16 status=ok
// SIG undefined FUN_142b2d7a8(void)

undefined1 FUN_142b2d7a8(void)

{
  FUN_142b2d7b8();
  return 1;
}



// FUNCTION 142b2d7b8 FUN_142b2d7b8 body=903 status=ok
// SIG undefined FUN_142b2d7b8(void)

void FUN_142b2d7b8(void)

{
  undefined *puVar1;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_210;
  undefined *local_208;
  undefined1 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [32];
  byte local_1c8;
  undefined *local_1c0;
  char local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [32];
  byte local_180;
  undefined1 local_178 [16];
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined1 local_c0 [32];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140056680(local_e8,&DAT_149dfb77a);
  puVar1 = &DAT_14c9a33a0;
  local_1c0 = &DAT_14c9a3168;
  if ('\x01' < DAT_14c9a33d8) {
    local_1c0 = &DAT_14c9a33a0;
  }
  if (DAT_14c9a33dc == 0) {
    local_1c0 = &DAT_14c9a3168;
  }
  local_1b8 = '\x02';
  FUN_140056680(local_1b0,L"suspend");
  local_180 = 4;
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || ((char)local_1c0[0x38] < local_1b8)) {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  else {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  local_210 = 4;
  local_200 = 2;
  FUN_140056680(local_1f8,L"suspend");
  local_1c8 = local_210;
  (*(code *)(&PTR_LAB_14a184230)[local_210])(local_1e8,local_230);
  (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
  FUN_140d76846(local_178,&local_208);
  FUN_14027c224(local_e8,local_178);
  if (local_e8[0] == '\x01') {
    FUN_14027c70a(&uStack_e0);
  }
  FUN_1404eec70(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_98);
  (*(code *)(&PTR_FUN_14a1842f0)[local_a0])(local_c0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec70(local_100,local_f8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_130);
  (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c8])(local_1e8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2db40 FUN_142b2db40 body=29 status=ok
// SIG undefined FUN_142b2db40(void)

undefined8 FUN_142b2db40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2db72 FUN_142b2db72 body=85 status=ok
// SIG undefined FUN_142b2db72(void)

void FUN_142b2db72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183520;
  return;
}



// FUNCTION 142b2dbc8 FUN_142b2dbc8 body=85 status=ok
// SIG undefined FUN_142b2dbc8(void)

void FUN_142b2dbc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183520;
  return;
}



// FUNCTION 142b2dc1e FUN_142b2dc1e body=118 status=ok
// SIG undefined FUN_142b2dc1e(void)

void FUN_142b2dc1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a183520;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2dc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2dc9a FUN_142b2dc9a body=16 status=ok
// SIG undefined FUN_142b2dc9a(void)

undefined1 FUN_142b2dc9a(void)

{
  FUN_142b2dcaa();
  return 1;
}



// FUNCTION 142b2dcaa FUN_142b2dcaa body=903 status=ok
// SIG undefined FUN_142b2dcaa(void)

void FUN_142b2dcaa(void)

{
  undefined *puVar1;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_210;
  undefined *local_208;
  undefined1 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [32];
  byte local_1c8;
  undefined *local_1c0;
  char local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [32];
  byte local_180;
  undefined1 local_178 [16];
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined1 local_c0 [32];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140056680(local_e8,&DAT_149dfb77a);
  puVar1 = &DAT_14c9a33a0;
  local_1c0 = &DAT_14c9a3168;
  if ('\x01' < DAT_14c9a33d8) {
    local_1c0 = &DAT_14c9a33a0;
  }
  if (DAT_14c9a33dc == 0) {
    local_1c0 = &DAT_14c9a3168;
  }
  local_1b8 = '\x02';
  FUN_140056680(local_1b0,L"resume");
  local_180 = 4;
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || ((char)local_1c0[0x38] < local_1b8)) {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  else {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  local_210 = 4;
  local_200 = 2;
  FUN_140056680(local_1f8,L"resume");
  local_1c8 = local_210;
  (*(code *)(&PTR_LAB_14a184230)[local_210])(local_1e8,local_230);
  (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
  FUN_140d76846(local_178,&local_208);
  FUN_14027c224(local_e8,local_178);
  if (local_e8[0] == '\x01') {
    FUN_14027c70a(&uStack_e0);
  }
  FUN_1404eec70(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_98);
  (*(code *)(&PTR_FUN_14a1842f0)[local_a0])(local_c0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec70(local_100,local_f8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_130);
  (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c8])(local_1e8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2e032 FUN_142b2e032 body=29 status=ok
// SIG undefined FUN_142b2e032(void)

undefined8 FUN_142b2e032(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2e064 FUN_142b2e064 body=85 status=ok
// SIG undefined FUN_142b2e064(void)

void FUN_142b2e064(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1835a0;
  return;
}



// FUNCTION 142b2e0ba FUN_142b2e0ba body=85 status=ok
// SIG undefined FUN_142b2e0ba(void)

void FUN_142b2e0ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1835a0;
  return;
}



// FUNCTION 142b2e110 FUN_142b2e110 body=118 status=ok
// SIG undefined FUN_142b2e110(void)

void FUN_142b2e110(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1835a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2e177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2e18c FUN_142b2e18c body=16 status=ok
// SIG undefined FUN_142b2e18c(void)

undefined1 FUN_142b2e18c(void)

{
  FUN_142b2e19c();
  return 1;
}



// FUNCTION 142b2e19c FUN_142b2e19c body=903 status=ok
// SIG undefined FUN_142b2e19c(void)

void FUN_142b2e19c(void)

{
  undefined *puVar1;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_210;
  undefined *local_208;
  undefined1 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [32];
  byte local_1c8;
  undefined *local_1c0;
  char local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [32];
  byte local_180;
  undefined1 local_178 [16];
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined1 local_c0 [32];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140056680(local_e8,&DAT_149dfb77a);
  puVar1 = &DAT_14c9a33a0;
  local_1c0 = &DAT_14c9a3168;
  if ('\x01' < DAT_14c9a33d8) {
    local_1c0 = &DAT_14c9a33a0;
  }
  if (DAT_14c9a33dc == 0) {
    local_1c0 = &DAT_14c9a3168;
  }
  local_1b8 = '\x02';
  FUN_140056680(local_1b0,L"deactivate");
  local_180 = 4;
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || ((char)local_1c0[0x38] < local_1b8)) {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  else {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  local_210 = 4;
  local_200 = 2;
  FUN_140056680(local_1f8,L"deactivate");
  local_1c8 = local_210;
  (*(code *)(&PTR_LAB_14a184230)[local_210])(local_1e8,local_230);
  (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
  FUN_140d76846(local_178,&local_208);
  FUN_14027c224(local_e8,local_178);
  if (local_e8[0] == '\x01') {
    FUN_14027c70a(&uStack_e0);
  }
  FUN_1404eec70(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_98);
  (*(code *)(&PTR_FUN_14a1842f0)[local_a0])(local_c0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec70(local_100,local_f8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_130);
  (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c8])(local_1e8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2e524 FUN_142b2e524 body=29 status=ok
// SIG undefined FUN_142b2e524(void)

undefined8 FUN_142b2e524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2e556 FUN_142b2e556 body=85 status=ok
// SIG undefined FUN_142b2e556(void)

void FUN_142b2e556(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183620;
  return;
}



// FUNCTION 142b2e5ac FUN_142b2e5ac body=85 status=ok
// SIG undefined FUN_142b2e5ac(void)

void FUN_142b2e5ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a183620;
  return;
}



// FUNCTION 142b2e602 FUN_142b2e602 body=118 status=ok
// SIG undefined FUN_142b2e602(void)

void FUN_142b2e602(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a183620;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b2e669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b2e67e FUN_142b2e67e body=16 status=ok
// SIG undefined FUN_142b2e67e(void)

undefined1 FUN_142b2e67e(void)

{
  FUN_142b2e68e();
  return 1;
}



// FUNCTION 142b2e68e FUN_142b2e68e body=903 status=ok
// SIG undefined FUN_142b2e68e(void)

void FUN_142b2e68e(void)

{
  undefined *puVar1;
  undefined1 auStack_258 [40];
  undefined1 local_230 [4];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  byte local_210;
  undefined *local_208;
  undefined1 local_200;
  longlong local_1f8 [2];
  undefined1 local_1e8 [32];
  byte local_1c8;
  undefined *local_1c0;
  char local_1b8;
  longlong local_1b0 [2];
  undefined1 local_1a0 [32];
  byte local_180;
  undefined1 local_178 [16];
  longlong local_168;
  undefined1 local_158 [32];
  byte local_138;
  undefined1 local_130 [32];
  longlong local_110;
  undefined4 local_108;
  longlong local_100;
  undefined4 local_f8;
  char local_e8 [4];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d0;
  undefined1 local_c0 [32];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_140056680(local_e8,&DAT_149dfb77a);
  puVar1 = &DAT_14c9a33a0;
  local_1c0 = &DAT_14c9a3168;
  if ('\x01' < DAT_14c9a33d8) {
    local_1c0 = &DAT_14c9a33a0;
  }
  if (DAT_14c9a33dc == 0) {
    local_1c0 = &DAT_14c9a3168;
  }
  local_1b8 = '\x02';
  FUN_140056680(local_1b0,L"reactivate");
  local_180 = 4;
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || ((char)local_1c0[0x38] < local_1b8)) {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  else {
    FUN_140056680(local_e8,&DAT_149dfb77a);
    uStack_22c = uStack_e4;
    uStack_228 = uStack_e0;
    uStack_224 = uStack_dc;
    if (DAT_14c9a33d8 < '\x02') {
      puVar1 = &DAT_14c9a3168;
    }
    local_208 = puVar1;
    if (DAT_14c9a33dc == 0) {
      local_208 = &DAT_14c9a3168;
    }
  }
  local_210 = 4;
  local_200 = 2;
  FUN_140056680(local_1f8,L"reactivate");
  local_1c8 = local_210;
  (*(code *)(&PTR_LAB_14a184230)[local_210])(local_1e8,local_230);
  (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
  FUN_140d76846(local_178,&local_208);
  FUN_14027c224(local_e8,local_178);
  if (local_e8[0] == '\x01') {
    FUN_14027c70a(&uStack_e0);
  }
  FUN_1404eec70(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_98);
  (*(code *)(&PTR_FUN_14a1842f0)[local_a0])(local_c0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec70(local_100,local_f8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_110,local_108);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_130);
  (*(code *)(&PTR_FUN_14a1842f0)[local_138])(local_158);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c8])(local_1e8);
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b2ea16 FUN_142b2ea16 body=222 status=ok
// SIG undefined FUN_142b2ea16(void)

int FUN_142b2ea16(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar6 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar9 = iVar8;
      lVar7 = (longlong)iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar7) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar6 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar6 == false) {
        if (iVar3 != iVar8) {
          memmove(plVar1 + iVar3,plVar1 + iVar8,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar3 = iVar3 + (iVar10 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 142b2eaf4 FUN_142b2eaf4 body=170 status=ok
// SIG undefined FUN_142b2eaf4(void)

void FUN_142b2eaf4(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  
  lVar1 = *param_1;
  if (1 < *(uint *)(lVar1 + 0xa8)) {
    plVar3 = (longlong *)FUN_14054d1d4();
    if (*(int *)(lVar1 + 0xa8) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(lVar1 + 0xa0);
    }
    cVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,puVar4,1);
    if (cVar2 == '\0') {
      FUN_14020fad6((undefined8 *)(lVar1 + 0xa0),&DAT_149dfb77a);
    }
  }
  if (1 < *(uint *)(lVar1 + 0xb8)) {
    plVar3 = (longlong *)FUN_14054d1d4();
    if (*(int *)(lVar1 + 0xb8) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(lVar1 + 0xb0);
    }
    cVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,puVar4,1);
    if (cVar2 == '\0') {
      FUN_14020fad6((undefined8 *)(lVar1 + 0xb0),&DAT_149dfb77a);
      return;
    }
  }
  return;
}



// FUNCTION 142b2ebc8 FUN_142b2ebc8 body=29 status=ok
// SIG undefined FUN_142b2ebc8(void)

undefined8 FUN_142b2ebc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b2ebe5 FUN_142b2ebe5 body=3602 status=ok
// SIG undefined FUN_142b2ebe5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b2ebe5(void)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14a17a4b0 + lVar3),L"/Script/GbxCore",
                  *(undefined8 *)((longlong)&PTR_u_EGbxViewFlag_14a17a4b8 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14a17a4c0 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a17a9a0;
  local_88 = 0;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17a9c0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17ad70,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17b7f0,2,&PTR_FUN_14a17b7c0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a17c010;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17c060,1,&PTR_FUN_14a17c030);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17c1c0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17c310,2,0);
  local_78 = 1;
  ppuStack_80 = &PTR_FUN_14a17cc00;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17cc50,1,&PTR_FUN_14a17cc20);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17ccf0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17cf30);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17d050);
  FUN_14098d3d2(FUN_142b2ba1b,L"/Script/GbxCore",L"EGbxAttributeModifierType",&DAT_14c9a2d10);
  FUN_14098d3d2(FUN_142b2ba52,L"/Script/GbxCore",L"EGbxComparator",&DAT_14c9a2d28);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17d240);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17d3e0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17d930);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17dae0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17dc00);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17dcd0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17dda0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17ed30,1,&PTR_FUN_14a17ec10);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxCore",0,0,&PTR_FUN_14a17f080);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17f400,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxCore",&PTR_FUN_14a17fa90,1,&PTR_FUN_14a17fa10);
  local_70 = "scope_id";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3018 = 0;
  local_70 = "scope_seconds";
  local_68 = 0xd;
  local_64 = 0;
  _DAT_14c9a3010 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3028 = 0;
  local_70 = "scope_frames";
  local_68 = 0xc;
  local_64 = 0;
  _DAT_14c9a3020 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3038 = 0;
  local_70 = "context_tag";
  local_68 = 0xb;
  local_64 = 0;
  _DAT_14c9a3030 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3048 = 0;
  local_70 = "context_id";
  local_68 = 10;
  local_64 = 0;
  _DAT_14c9a3040 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3058 = 0;
  local_70 = "context_seconds";
  local_68 = 0xf;
  local_64 = 0;
  _DAT_14c9a3050 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3068 = 0;
  local_70 = "context_frames";
  local_68 = 0xe;
  local_64 = 0;
  _DAT_14c9a3060 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3078 = 0;
  local_70 = "aggregates";
  local_68 = 10;
  local_64 = 0;
  _DAT_14c9a3070 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3088 = 0;
  local_70 = "event_guid";
  local_68 = 10;
  local_64 = 0;
  _DAT_14c9a3080 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3098 = 0;
  local_70 = "event_verbosity";
  local_68 = 0xf;
  local_64 = 0;
  DAT_14c9a3090 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30a8 = 0;
  local_70 = "event_key";
  local_68 = 9;
  local_64 = 0;
  DAT_14c9a30a0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30b8 = 0;
  local_70 = "event_value";
  local_68 = 0xb;
  local_64 = 0;
  DAT_14c9a30b0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30c8 = 0;
  local_70 = "event_map";
  local_68 = 9;
  local_64 = 0;
  DAT_14c9a30c0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30d8 = 0;
  local_70 = "event_name";
  local_68 = 10;
  local_64 = 0;
  DAT_14c9a30d0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30e8 = 0;
  local_70 = "context_key";
  local_68 = 0xb;
  local_64 = 0;
  _DAT_14c9a30e0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a30f8 = 0;
  local_70 = "context_value";
  local_68 = 0xd;
  local_64 = 0;
  _DAT_14c9a30f0 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3108 = 0;
  local_70 = "context_type";
  local_68 = 0xc;
  local_64 = 0;
  _DAT_14c9a3100 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3118 = 0;
  local_70 = "context_class";
  local_68 = 0xd;
  local_64 = 0;
  _DAT_14c9a3110 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3128 = 0;
  local_70 = "location";
  local_68 = 8;
  local_64 = 0;
  _DAT_14c9a3120 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3138 = 0;
  local_70 = "rotation";
  local_68 = 8;
  local_64 = 0;
  DAT_14c9a3130 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  local_70 = "Global";
  local_68 = 6;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3148 = 0;
  local_70 = "this";
  local_68 = 4;
  local_64 = 0;
  DAT_14c9a3140 = (ulonglong)uVar1;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c9a3c28 = (ulonglong)uVar1;
  local_70 = "instigator";
  local_68 = 10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c9a3c30 = (ulonglong)uVar1;
  local_70 = "target";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3150 = (ulonglong)uVar1;
  local_70 = "owner";
  local_68 = 5;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14c9a3158 = (ulonglong)uVar1;
  local_70 = "loc";
  local_68 = 3;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70);
  _DAT_14c9a3160 = (ulonglong)uVar1;
  FUN_14147d486(&DAT_14c9a3168,0,0);
  _DAT_14c9a3168 = &PTR_FUN_14a183320;
  atexit((_func_5014 *)&LAB_142b2bb3f);
  local_70 = "app_session";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_14147d486(&DAT_14c9a33a0,uVar2,3);
  _DAT_14c9a33a0 = &PTR_FUN_14a17fc18;
  FUN_1462a53d6();
  atexit((_func_5014 *)&LAB_142b2bb55);
  local_70 = "generic_profiling";
  local_68 = 0x11;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_14147d486(&DAT_14c9a3558,uVar2,6);
  _DAT_14c9a3558 = &PTR_FUN_14a17fc38;
  FUN_1462a548e();
  atexit((_func_5014 *)&LAB_142b2bb61);
  local_70 = "Timestamp";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14c9a3728,uVar2);
  _DAT_14c9a3728 = &PTR_FUN_14a183168;
  atexit(FUN_142b2bb7e);
  local_70 = "Platform";
  local_68 = 8;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14c9a3770,uVar2);
  _DAT_14c9a3770 = &PTR_FUN_14a183178;
  atexit(FUN_142b2bbfd);
  local_70 = "BuildConfig";
  local_68 = 0xb;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14c9a37b8,uVar2);
  _DAT_14c9a37b8 = &PTR_FUN_14a183198;
  atexit(FUN_142b2bc7c);
  local_70 = "BuildDate";
  local_68 = 9;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14c9a3800,uVar2);
  _DAT_14c9a3800 = &PTR_FUN_14a1831b8;
  atexit(FUN_142b2bcfb);
  local_70 = "BuildChangelist";
  local_68 = 0xf;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_141544bf8(&DAT_14c9a3848,uVar2);
  _DAT_14c9a3848 = &PTR_FUN_14a1831d8;
  atexit(FUN_142b2bdee);
  local_70 = "Logging";
  local_68 = 7;
  local_64 = 0;
  uVar2 = FUN_14001a6c0(&local_70,1);
  FUN_14147d486(&DAT_14c9a3980,uVar2,0);
  _DAT_14c9a3980 = &PTR_FUN_14a1832c0;
  atexit((_func_5014 *)&LAB_142b2c418);
  DAT_14c9a3b58 = 0;
  DAT_14c9a3b60 = 0;
  atexit(FUN_142b2c4f2);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b2fa06 FUN_142b2fa06 body=41 status=ok
// SIG undefined FUN_142b2fa06(void)

void FUN_142b2fa06(void)

{
  DAT_14c9a3cb0 = 0;
  if (DAT_14c9a3ca8 != 0) {
    FUN_1400020a8();
  }
  FUN_1461c19e2();
  return;
}



// FUNCTION 142b2fa30 FUN_142b2fa30 body=158 status=ok
// SIG undefined FUN_142b2fa30(void)

void FUN_142b2fa30(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 142b2face FUN_142b2face body=119 status=ok
// SIG undefined FUN_142b2face(void)

void FUN_142b2face(undefined8 param_1,longlong param_2)

{
  FUN_1404eec70(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(*(undefined8 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x70));
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_2 + 0x48);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_2 + 0x40)])(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b2fb46 FUN_142b2fb46 body=119 status=ok
// SIG undefined FUN_142b2fb46(void)

void FUN_142b2fb46(undefined8 param_1,longlong param_2)

{
  FUN_1404eec70(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(*(undefined8 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x70));
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_2 + 0x48);
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_2 + 0x40)])(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b2fbbd FUN_142b2fbbd body=41 status=ok
// SIG undefined FUN_142b2fbbd(void)

void FUN_142b2fbbd(void)

{
  DAT_14c9a3d08 = 0;
  if (DAT_14c9a3d00 != 0) {
    FUN_1400020a8();
  }
  FUN_14597d950();
  return;
}



// FUNCTION 142b2fbec FUN_142b2fbec body=33 status=ok
// SIG undefined FUN_142b2fbec(void)

void FUN_142b2fbec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 142b2fc0e FUN_142b2fc0e body=81 status=ok
// SIG undefined FUN_142b2fc0e(void)

void FUN_142b2fc0e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}



// FUNCTION 142b2fc60 FUN_142b2fc60 body=59 status=ok
// SIG undefined FUN_142b2fc60(void)

void FUN_142b2fc60(float *param_1)

{
  param_1[7] = ((*param_1 + 1.0) / (1.0 - param_1[1])) * param_1[4] * (param_1[5] + param_1[2]) +
               param_1[3];
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 142b2fc9c FUN_142b2fc9c body=32 status=ok
// SIG undefined FUN_142b2fc9c(void)

void FUN_142b2fc9c(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 142b2fcbc FUN_142b2fcbc body=8 status=ok
// SIG undefined FUN_142b2fcbc(void)

bool FUN_142b2fcbc(longlong param_1)

{
  return *(int *)(param_1 + 4) != -1;
}



// FUNCTION 142b2fcc4 FUN_142b2fcc4 body=271 status=ok
// SIG undefined FUN_142b2fcc4(void)

void FUN_142b2fcc4(void)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = DAT_14c9a3da0;
  if ((longlong)DAT_14c9a4108 != 0) {
    lVar8 = (longlong)DAT_14c9a4108 + -1;
    lVar9 = lVar8 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar3 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar7 = (int)lVar8;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
    }
    *(undefined4 *)(lVar3 + lVar9) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar9) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar5 = iVar7;
    }
    bVar2 = (byte)lVar8 & 0x1f;
    DAT_14c9a3dd0 = iVar7;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    DAT_14c9a4108 = 0;
  }
  plVar4 = DAT_14c9a40f0;
  if (DAT_14c9a40e0 == '\x01') {
    DAT_14c9a40e8 = 0;
  }
  else if (DAT_14c9a40e0 == '\x03') {
    if (DAT_14c9a40f0 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)DAT_14c9a40f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  else if (DAT_14c9a40e0 == '\0') {
    return;
  }
  DAT_14c9a40e0 = 0;
  return;
}



// FUNCTION 142b2fdea FUN_142b2fdea body=23 status=ok
// SIG undefined FUN_142b2fdea(void)

void FUN_142b2fdea(byte *param_1)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*param_1 & 0x3f));
  }
  return;
}



// FUNCTION 142b2fe18 FUN_142b2fe18 body=210 status=ok
// SIG undefined FUN_142b2fe18(void)

void FUN_142b2fe18(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_2[1] != 0) {
    uVar1 = *(ushort *)(param_1 + 3);
    FUN_14146e7de();
    cVar3 = FUN_14146e8a6(&DAT_14c9a3ef0,2,(uVar1 & 0x10) >> 4);
    if (cVar3 != '\0') {
      lVar5 = param_2[1];
      if (DAT_14c950c29 == '\x01') {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar5 = param_2[1];
        }
      }
      param_1[1] = lVar5;
      *param_1 = *param_2;
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
      FUN_145a21538(param_1);
      lVar5 = *(longlong *)(param_2[1] + 0x50);
      if (lVar5 != 0) {
        do {
          iVar2 = *(int *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x10) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x84) < iVar2 + 1U) {
            FUN_1470b677a(param_1 + 7,iVar2);
          }
          puVar4 = (undefined8 *)param_1[0xf];
          if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
            puVar4 = param_1 + 7;
          }
          puVar4[iVar2] = lVar5;
          lVar5 = *(longlong *)(lVar5 + 0x18);
        } while (lVar5 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142b2feea FUN_142b2feea body=60 status=ok
// SIG undefined FUN_142b2feea(void)

void FUN_142b2feea(longlong param_1,longlong param_2)

{
  if ((param_1 != param_2) && ((*(ushort *)(param_2 + 0x18) & 1) != 0)) {
    FUN_1462a5fa4(param_2,param_1);
  }
  FUN_14146e7de();
  FUN_1412de870(&DAT_14c9a3ef0,param_1);
  return;
}



// FUNCTION 142b2ff26 FUN_142b2ff26 body=665 status=ok
// SIG undefined FUN_142b2ff26(void)

void FUN_142b2ff26(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong unaff_GS_OFFSET;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar4 = param_1 + 0x38;
      }
      plVar2 = *(longlong **)(lVar4 + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x80) = iVar1 + -1;
      FUN_142b310e4();
      if (plVar2 != (longlong *)0x0) {
        puVar5 = (undefined *)plVar2[1];
        if ((*(int *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x110)
             < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x110
                       ) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                         0x110) < DAT_14c951a88) &&
               (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
              uVar3 = FUN_140342cba();
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar3,FUN_1468c7f1e);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0,0x1008001,0,&DAT_14c951a38,
                          FUN_1468e0f50);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                        FUN_1459738d6);
          atexit(FUN_142816fda);
          _Init_thread_footer(&DAT_14c952268);
        }
        if (DAT_14c952220 == 0) {
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 != &DAT_14c952218 && bVar6) {
            do {
              puVar5 = *(undefined **)(puVar5 + 0x30);
              bVar6 = puVar5 != (undefined *)0x0;
              if (puVar5 == &DAT_14c952218) break;
            } while (puVar5 != (undefined *)0x0);
          }
          if (!bVar6) {
            return;
          }
        }
        else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952220) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000142b2ffd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x1f8))
                  (plVar2,(longlong)*(int *)((longlong)plVar2 + 0x44) +
                          *(longlong *)(param_1 + 0x20),param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b301c0 FUN_142b301c0 body=477 status=ok
// SIG undefined FUN_142b301c0(void)

void FUN_142b301c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar3 = param_1 + 0x38;
      }
      lVar3 = *(longlong *)(lVar3 + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x80) = iVar1 + -1;
      FUN_142b310e4();
      if (lVar3 != 0) {
        puVar4 = *(undefined **)(lVar3 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9520b0) &&
           (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            uVar2 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar2,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,&DAT_14c951a38,
                        FUN_1409e12a0);
          atexit(FUN_142816ef9);
          _Init_thread_footer(&DAT_14c9520b0);
        }
        if (DAT_14c952068 == 0) {
          bVar5 = puVar4 != (undefined *)0x0;
          if (puVar4 != &DAT_14c952060 && bVar5) {
            do {
              puVar4 = *(undefined **)(puVar4 + 0x30);
              bVar5 = puVar4 != (undefined *)0x0;
              if (puVar4 == &DAT_14c952060) break;
            } while (puVar4 != (undefined *)0x0);
          }
          if (!bVar5) {
            return;
          }
        }
        else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c952068) == 0) {
          return;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar3 + 0x44)) = *param_3
        ;
      }
    }
  }
  return;
}



// FUNCTION 142b3039d FUN_142b3039d body=1042 status=ok
// SIG undefined FUN_142b3039d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_142b3039d(double *param_1,double *param_2,double *param_3,float param_4,float param_5,
                      char param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  if (0.0 < param_5) {
    dVar20 = *param_2;
    dVar11 = param_2[1];
    dVar13 = param_2[2];
    dVar18 = *param_3;
    dVar12 = param_3[1];
    dVar17 = param_3[2];
    lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 - dVar12));
    auVar4._8_4_ = (int)lVar9;
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 - dVar18));
    auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar5 = movmskpd(in_EAX,auVar4);
    lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - param_3[3]));
    auVar16._8_4_ = (int)lVar9;
    auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 - dVar17));
    auVar16._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar6 = movmskpd((int)param_1,auVar16);
    uVar7 = iVar6 << 2 | uVar5;
    if (uVar7 != 0) {
      lVar9 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 + dVar12));
      auVar3._8_4_ = (int)lVar9;
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 + dVar18));
      auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
      iVar6 = movmskpd(uVar5,auVar3);
      auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] + param_3[3]));
      auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 + dVar17));
      uVar5 = movmskpd(uVar7,auVar2);
      if ((uVar5 & 0x3fffffff) != 0 || iVar6 != 0) {
        param_4 = param_4 * param_5;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        dVar20 = param_2[3] * param_3[3] + dVar13 * dVar17 + dVar20 * dVar18 + dVar11 * dVar12;
        dVar11 = (dVar20 + dVar20) * dVar20 + -1.0;
        dVar20 = dVar11;
        if (1.0 <= dVar11) {
          dVar20 = 1.0;
        }
        dVar11 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar20));
        dVar20 = 9.99999993922529e-09;
        if (9.99999993922529e-09 <= dVar11) {
          dVar20 = dVar11;
        }
        fVar10 = (float)dVar20;
        if (param_6 != '\0') {
          fVar10 = 6.2831855 - fVar10;
        }
        param_4 = param_4 / fVar10;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        if (param_6 != '\0') {
          param_4 = -param_4;
        }
        dVar1 = *param_2;
        dVar20 = param_2[1];
        dVar11 = *param_3;
        dVar13 = param_3[1];
        uVar22 = SUB84(dVar13,0);
        uVar23 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar18 = param_2[2];
        dVar12 = param_3[2];
        uVar24 = SUB84(dVar12,0);
        uVar25 = (undefined4)((ulonglong)dVar12 >> 0x20);
        dVar17 = param_2[3];
        dVar21 = param_3[3];
        uVar26 = SUB84(dVar21,0);
        uVar27 = (undefined4)((ulonglong)dVar21 >> 0x20);
        dVar12 = dVar17 * dVar21 + dVar18 * dVar12 + dVar1 * dVar11 + dVar20 * dVar13;
        uVar8 = -(ulonglong)(0.0 <= dVar12);
        dVar21 = (double)(~uVar8 & 0xbff0000000000000 |
                         (ulonglong)((uint)(uVar8 >> 0x20) & 0x3ff00000) << 0x20);
        dVar12 = dVar12 * dVar21;
        dVar13 = 1.0 - (double)param_4;
        dVar21 = dVar21 * (double)param_4;
        if (dVar12 < 0.9999) {
          dVar20 = dVar12;
          if (1.0 <= dVar12) {
            dVar20 = 1.0;
          }
          dVar20 = acos((double)(-(ulonglong)(dVar12 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar12 < -1.0) & (ulonglong)dVar20));
          dVar11 = sin(dVar20);
          dVar13 = sin(dVar13 * dVar20);
          dVar13 = dVar13 * (1.0 / dVar11);
          dVar21 = sin(dVar21 * dVar20);
          dVar21 = dVar21 * (1.0 / dVar11);
          dVar17 = param_2[3];
          uVar26 = SUB84(param_3[3],0);
          uVar27 = (undefined4)((ulonglong)param_3[3] >> 0x20);
          dVar18 = param_2[2];
          uVar24 = SUB84(param_3[2],0);
          uVar25 = (undefined4)((ulonglong)param_3[2] >> 0x20);
          dVar1 = *param_2;
          dVar20 = param_2[1];
          dVar11 = *param_3;
          uVar22 = SUB84(param_3[1],0);
          uVar23 = (undefined4)((ulonglong)param_3[1] >> 0x20);
        }
        *param_1 = dVar1 * dVar13 + dVar11 * dVar21;
        param_1[1] = dVar20 * dVar13 + (double)CONCAT44(uVar23,uVar22) * dVar21;
        param_1[2] = dVar18 * dVar13 + (double)CONCAT44(uVar25,uVar24) * dVar21;
        param_1[3] = dVar17 * dVar13 + (double)CONCAT44(uVar27,uVar26) * dVar21;
        dVar20 = *param_1;
        dVar11 = param_1[1];
        dVar13 = param_1[2];
        dVar18 = param_1[3];
        dVar12 = dVar13 * dVar13 + dVar20 * dVar20;
        dVar17 = dVar18 * dVar18 + dVar11 * dVar11;
        auVar15._0_8_ = dVar12 + dVar17;
        auVar15._8_8_ = dVar12 + dVar17;
        auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
        auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
        auVar16 = sqrtpd(auVar15,auVar15);
        auVar16 = divpd(_DAT_149934d80,auVar16);
        auVar19._0_8_ = auVar16._0_8_ * dVar13;
        auVar19._8_8_ = auVar16._8_8_ * dVar18;
        *param_1 = (double)((ulonglong)(dVar20 * auVar16._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
        param_1[1] = (double)((ulonglong)(dVar11 * auVar16._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_));
        auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar19,auVar14);
        *(undefined1 (*) [16])(param_1 + 2) = auVar16;
        return param_1;
      }
    }
  }
  dVar20 = *param_3;
  dVar11 = param_3[1];
  dVar13 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = dVar13;
  *param_1 = dVar20;
  param_1[1] = dVar11;
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return param_1;
}



// FUNCTION 142b307af FUN_142b307af body=69 status=ok
// SIG undefined FUN_142b307af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b307af(void)

{
  _DAT_14c9a4030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b307f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a4038,1);
  return;
}



// FUNCTION 142b307f4 FUN_142b307f4 body=69 status=ok
// SIG undefined FUN_142b307f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b307f4(void)

{
  _DAT_14c9a4040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b30836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a4048,1);
  return;
}



// FUNCTION 142b30839 FUN_142b30839 body=69 status=ok
// SIG undefined FUN_142b30839(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b30839(void)

{
  _DAT_14c9a4050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3087b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a4058,1);
  return;
}



// FUNCTION 142b3087e FUN_142b3087e body=69 status=ok
// SIG undefined FUN_142b3087e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b3087e(void)

{
  _DAT_14c9a4068 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b308c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a4070,1);
  return;
}



// FUNCTION 142b308c3 FUN_142b308c3 body=466 status=ok
// SIG undefined FUN_142b308c3(void)

void FUN_142b308c3(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  longlong *local_88;
  longlong local_80;
  longlong local_68;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14099d55c(DAT_14c9a4060,&local_90,0);
  FUN_146b1360c(&local_90,&local_44);
  if (CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90)) != 0) {
    FUN_1400020a8();
  }
  lVar5 = DAT_14c9a4078;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar9 = 0;
  }
  else if (iVar3 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  uVar2 = *(undefined2 *)(lVar5 + uVar9 * 4);
  FUN_140056680(&local_a0,L"DataDogSocket");
  FUN_1470b245e(&local_90,&local_a0);
  uStack_8f = 0;
  plVar8 = (longlong *)FUN_1470b24f2(&local_90);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  (**(code **)(*DAT_14c990958 + 0x90))(DAT_14c990958,&local_90);
  plVar4 = (longlong *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  (**(code **)(*plVar4 + 0x18))(plVar4,local_44);
  plVar4 = (longlong *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  (**(code **)(*plVar4 + 0x28))(plVar4,uVar2);
  local_a8 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  (**(code **)(*plVar8 + 0x50))(plVar8,param_1,param_2,&local_a0);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b30a96 FUN_142b30a96 body=417 status=ok
// SIG undefined FUN_142b30a96(void)

int FUN_142b30a96(uint *param_1,uint param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar2 = (int)param_3;
  uVar3 = param_2 & 3;
  if (3 < param_2) {
    param_2 = param_2 >> 2;
    do {
      uVar4 = *param_1;
      uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_1 = param_1 + 1;
      uVar5 = uVar4 % 0x31c84b1;
      uVar6 = uVar5 % 0x95eed;
      uVar7 = uVar6 % 0x1c39;
      *param_3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                 [uVar4 / 0x31c84b1];
      param_3[1] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                   [(ulonglong)uVar5 / 0x95eed];
      param_3[2] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                   [(ulonglong)uVar6 / 0x1c39];
      param_3[3] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                   [uVar7 / 0x55];
      param_3[4] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                   [uVar7 % 0x55];
      param_3 = param_3 + 5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar4 = 0;
    do {
      uVar4 = (uint)*(byte *)((longlong)param_1 + uVar8) | uVar4 << 8;
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    iVar1 = uVar3 - 4;
    do {
      uVar4 = uVar4 * 0x100;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
    *param_3 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
               [uVar4 / 0x31c84b1];
    param_3[1] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                 [(ulonglong)(uVar4 % 0x31c84b1) / 0x95eed];
    if (uVar3 == 1) {
      param_3 = param_3 + 2;
    }
    else {
      uVar4 = (uVar4 % 0x31c84b1) % 0x95eed;
      param_3[2] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                   [(ulonglong)uVar4 / 0x1c39];
      if (uVar3 == 3) {
        param_3[3] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
                     [(uVar4 % 0x1c39) / 0x55];
        param_3 = param_3 + 4;
      }
      else {
        param_3 = param_3 + 3;
      }
    }
  }
  return (int)param_3 - iVar2;
}



// FUNCTION 142b30c38 FUN_142b30c38 body=266 status=ok
// SIG undefined FUN_142b30c38(void)

int FUN_142b30c38(longlong param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = (int)param_3;
  if (DAT_14c9a40d4 == '\0') {
    lVar4 = 0;
    do {
      (&DAT_14c75f6f0)
      [(byte)"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+-;<=>?@^_`{/}~"
             [lVar4]] = (char)lVar4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x55);
    DAT_14c75f76c = DAT_14c75f71f;
    DAT_14c9a40d4 = '\x01';
  }
  if (param_2 == 0) {
LAB_142b30cf1:
    return (int)param_3 - iVar5;
  }
  uVar6 = 0;
LAB_142b30c65:
  uVar3 = 0;
  iVar2 = 0;
  do {
    uVar6 = uVar6 + 1;
    lVar4 = (longlong)*(char *)(param_1 + -1 + uVar6);
    if ((-1 < lVar4) && ((byte)(&DAT_14c75f6f0)[lVar4] < 0x56)) {
      uVar3 = uVar3 * 0x55 + (uint)(byte)(&DAT_14c75f6f0)[lVar4];
      iVar2 = iVar2 + 1;
      if (iVar2 == 5) break;
    }
    if (uVar6 == param_2) {
      if (iVar2 < 1) goto LAB_142b30cf1;
      if (iVar2 == 5) {
        *(char *)param_3 = (char)(uVar3 >> 0x18);
        *(char *)((longlong)param_3 + 1) = (char)(uVar3 >> 0x10);
        goto LAB_142b30ce9;
      }
      iVar1 = 5;
      do {
        uVar3 = uVar3 * 0x55 + 0x7e;
        iVar1 = iVar1 + -1;
      } while (iVar2 != iVar1);
      if (((iVar2 != 1) && (*(char *)param_3 = (char)(uVar3 >> 0x18), 2 < iVar2)) &&
         (*(char *)((longlong)param_3 + 1) = (char)(uVar3 >> 0x10), iVar2 != 3)) {
LAB_142b30ce9:
        *(char *)((longlong)param_3 + 2) = (char)(uVar3 >> 8);
      }
      param_3 = (uint *)((longlong)param_3 + (ulonglong)(iVar2 - 1));
      goto LAB_142b30cf1;
    }
  } while( true );
  *param_3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000;
  param_3 = param_3 + 1;
  if (uVar6 == param_2) goto LAB_142b30cf1;
  goto LAB_142b30c65;
}



// FUNCTION 142b30d42 FUN_142b30d42 body=49 status=ok
// SIG undefined FUN_142b30d42(void)

void FUN_142b30d42(void)

{
  FUN_144760e21(DAT_14c9a4080,DAT_14c9a4088);
  if (DAT_14c9a4080 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b30d73 FUN_142b30d73 body=49 status=ok
// SIG undefined FUN_142b30d73(void)

void FUN_142b30d73(void)

{
  FUN_1462a6135(DAT_14c9a40c0,DAT_14c9a40c8);
  if (DAT_14c9a40c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b30da4 FUN_142b30da4 body=158 status=ok
// SIG undefined FUN_142b30da4(void)

void FUN_142b30da4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x18);
    uVar3 = *(ulonglong *)(param_1 + 0x10);
    if (((((uVar3 >> 0x20 != 0 & DAT_14c963ff1) == 1) && (uVar4 = (uint)uVar3, -1 < (int)uVar4)) &&
        ((int)uVar4 < DAT_14c9647dc)) &&
       (((puVar6 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8))),
         puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == (int)(uVar3 >> 0x20))) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = 0;
      }
      FUN_141095ae8(uVar5,lVar2,1);
    }
    if (cVar1 == '\0') {
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142b30e42 FUN_142b30e42 body=29 status=ok
// SIG undefined FUN_142b30e42(void)

undefined8 FUN_142b30e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b30e60 FUN_142b30e60 body=50 status=ok
// SIG undefined FUN_142b30e60(void)

void FUN_142b30e60(longlong param_1,int *param_2,undefined8 param_3)

{
  FUN_145d03cb4(L"-\tRow %d/%d:\r\n",*param_2 + 1,*(undefined4 *)(param_1 + 0x10));
  FUN_142b30e92(*(undefined8 *)(param_1 + 8),param_3);
  return;
}



// FUNCTION 142b30e92 FUN_142b30e92 body=275 status=ok
// SIG undefined FUN_142b30e92(void)

void FUN_142b30e92(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = FUN_1470b06f4();
  if (0 < (int)param_2[1]) {
    lVar4 = 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1410cda70(*param_2 + lVar5,&local_68);
      local_78 = &DAT_149dfb77a;
      if (local_60 != 0) {
        local_78 = local_68;
      }
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(local_58 + lVar4) != 0) {
        puVar3 = *(undefined2 **)(local_58 + -8 + lVar4);
      }
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 1) != 0) {
        puVar2 = (undefined2 *)*param_1;
      }
      FUN_145d03cb4(L"\t%s.%-*s : %s\r\n",puVar2,iVar1 + 1,puVar3);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b30fa6 FUN_142b30fa6 body=167 status=ok
// SIG undefined FUN_142b30fa6(void)

void FUN_142b30fa6(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  FUN_1400021e4(param_3,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_145d03cb4(L"-\tContext %s(%d):\r\n",puVar2,uVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(param_3,&local_30);
  FUN_142b30e92(&local_30,param_3 + 0x30);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b3104e FUN_142b3104e body=78 status=ok
// SIG undefined FUN_142b3104e(void)

void FUN_142b3104e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  if ((longlong)*(int *)(lVar1 + 0x48) != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x40);
    lVar2 = (longlong)*(int *)(lVar1 + 0x48) << 5;
    do {
      if (*(longlong *)(param_2 + 0x3c) == *plVar4) {
        if (plVar4 != (longlong *)0x0) {
          return;
        }
        break;
      }
      plVar4 = plVar4 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_1470b5790(lVar1 + 0x40);
  *puVar3 = *(undefined8 *)(param_2 + 0x3c);
  return;
}



// FUNCTION 142b310c6 FUN_142b310c6 body=29 status=ok
// SIG undefined FUN_142b310c6(void)

undefined8 FUN_142b310c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b310e4 FUN_142b310e4 body=143 status=ok
// SIG undefined FUN_142b310e4(void)

void FUN_142b310e4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((ulonglong)uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x4c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x4c) = uVar4;
  FUN_1470b67ea(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 142b31174 FUN_142b31174 body=245 status=ok
// SIG undefined FUN_142b31174(void)

void FUN_142b31174(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  int iVar1;
  uint *_Dst;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    iVar7 = (int)param_2;
    iVar1 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar1 = iVar7;
    }
    uVar4 = iVar1 >> 5;
    uVar5 = (ulonglong)uVar4;
    iVar1 = param_3 + iVar7 + 0x1f;
    iVar7 = param_3 + iVar7 + 0x3e;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    uVar6 = -1 << ((byte)param_2 & 0x1f);
    uVar3 = 0xffffffff >> (-((char)param_3 + (byte)param_2) & 0x1f);
    iVar1 = (iVar7 >> 5) - uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    _Dst = (uint *)(lVar2 + uVar5 * 4);
    if (param_4 == '\0') {
      if (iVar1 == 1) {
        uVar3 = uVar3 & uVar6;
      }
      else {
        *_Dst = *_Dst & ~uVar6;
        _Dst = _Dst + 1;
        if (iVar1 != 2) {
          memset(_Dst,0,(ulonglong)(iVar1 - 3) * 4 + 4);
          _Dst = (uint *)(lVar2 + (uVar5 + (iVar1 - 3)) * 4 + 8);
        }
      }
      *_Dst = *_Dst & ~uVar3;
    }
    else {
      if (iVar1 == 1) {
        uVar3 = uVar3 & uVar6;
      }
      else {
        *_Dst = *_Dst | uVar6;
        _Dst = _Dst + 1;
        if (iVar1 != 2) {
          uVar8 = (ulonglong)(((iVar7 >> 5) - uVar4) - 3);
          memset(_Dst,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),uVar8 * 4 + 4);
          _Dst = (uint *)(lVar2 + (uVar8 + uVar5) * 4 + 8);
        }
      }
      *_Dst = *_Dst | uVar3;
    }
  }
  return;
}



// FUNCTION 142b31269 FUN_142b31269 body=1430 status=ok
// SIG undefined FUN_142b31269(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b31269(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = "x";
  local_48 = 1;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4130 = (ulonglong)uVar1;
  local_50 = "y";
  local_48 = 1;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4138 = (ulonglong)uVar1;
  local_50 = "z";
  local_48 = 1;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4140 = (ulonglong)uVar1;
  local_50 = "w";
  local_48 = 1;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4110 = (ulonglong)uVar1;
  local_50 = "pitch";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4118 = (ulonglong)uVar1;
  local_50 = "yaw";
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4120 = (ulonglong)uVar1;
  local_50 = "roll";
  local_48 = 4;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4128 = (ulonglong)uVar1;
  local_50 = "Key";
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a3d20 = (ulonglong)uVar1;
  local_50 = "Value";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c9a3d28 = (ulonglong)uVar1;
  DAT_14c9a3d80 = 0;
  DAT_14c9a3d88 = 0;
  DAT_14c9a3d60 = 0;
  _DAT_14c9a3d68 = 0;
  _DAT_14c9a3d8c = 0xffffffff00000080;
  DAT_14c9a3d94 = 0;
  atexit((_func_5014 *)&LAB_142b2fbe6);
  DAT_14c9a40e0 = 0;
  DAT_14c9a4108 = 0;
  atexit(FUN_142b2fcc4);
  DAT_14c9a3dc0 = 0;
  DAT_14c9a3dc8 = 0;
  DAT_14c9a3da0 = 0;
  _DAT_14c9a3da8 = 0;
  _DAT_14c9a3dcc = 0xffffffff00000080;
  DAT_14c9a3dd4 = 0;
  atexit((_func_5014 *)&LAB_142b2fdd3);
  local_50 = (char *)0x800000014a184508;
  local_54 = 7;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_1462a5ee2(&local_50);
  FUN_1446f470e(&local_50,L"GbxDefPtrCoreTestBasicStruct",1);
  DAT_14c9a3de0 = local_50;
  FUN_1446f470e(&local_50,L"GbxDefPtrCoreTestDerivedStruct",1);
  DAT_14c9a3e60 = local_50;
  FUN_1446f470e(&local_50,L"GbxDefPtrCoreTestDerivedStructSameStore",1);
  DAT_14c9a3e08 = local_50;
  FUN_1446f470e(&local_50,L"ValidIdent",1);
  DAT_14c9a40d8 = local_50;
  FUN_1446f470e(&local_50,L"GbxDefPtrCoreTestCycleA",1);
  DAT_14c9a3e88 = local_50;
  FUN_1446f470e(&local_50,L"GbxDefPtrCoreTestCycleB",1);
  DAT_14c9a3eb8 = local_50;
  local_50 = "BookmarkStruct";
  local_48 = 0xe;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a3ee8 = (ulonglong)uVar1;
  FUN_1446f470e(&DAT_14c9a4014,L"Include",1);
  FUN_1446f470e(&DAT_14c9a401c,L"Exclude",1);
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14021300e(&DAT_14c9a4028,1999,2,0xf);
  local_78 = 0x40;
  FUN_1415c789c(&DAT_14c9a4030,L"wp.gbx.runtime.scale.global",&DAT_14c75f6e0,
                L"Global scale applied to WorldPartition loading distances.\n");
  atexit(FUN_142b307af);
  local_78 = 0x40;
  FUN_1415c789c(&DAT_14c9a4040,L"wp.gbx.runtime.scale.client",&DAT_14c75f6e4,
                L"Scale applied to WorldPartition loading distances for clients on a host.\n");
  atexit(FUN_142b307f4);
  FUN_140056680(&local_50,L"127.0.0.1");
  local_78 = 0x40;
  FUN_140f510cc(&DAT_14c9a4050,L"Datadog.Host",&local_50,
                L"Defines the hostname/ip of the datadog agent to which stats are sent, defaults to localhost"
               );
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142b30839);
  local_50 = (char *)CONCAT44(local_50._4_4_,0x1fbd);
  local_78 = 0x40;
  FUN_14078dbce(&DAT_14c9a4068,L"Datadog.Port",&local_50,
                L"Defines the port of the datadog agent to which stats are sent");
  atexit(FUN_142b3087e);
  DAT_14c9a4080 = 0;
  _DAT_14c9a4088 = 0;
  _DAT_14c9a4090 = 2;
  atexit(FUN_142b30d42);
  local_50 = "Has Settings";
  local_48 = 0xc;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a3d18 = (ulonglong)uVar1;
  local_50 = "Has World";
  local_48 = 9;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c9a4098 = (ulonglong)uVar1;
  local_50 = "Has Game Instance";
  local_48 = 0x11;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14c9a40a0 = (ulonglong)uVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b31800 FUN_142b31800 body=55 status=ok
// SIG undefined FUN_142b31800(void)

void FUN_142b31800(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4540 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4540 = FUN_14171c317(FUN_1462a7648,uVar1,L"EGbxAnimationPerformanceFilterType");
  }
  return;
}



// FUNCTION 142b31a0e FUN_142b31a0e body=26 status=ok
// SIG undefined FUN_142b31a0e(void)

undefined8 FUN_142b31a0e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_3);
  return 1;
}



// FUNCTION 142b31aca FUN_142b31aca body=71 status=ok
// SIG undefined FUN_142b31aca(void)

void FUN_142b31aca(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined1 *)((longlong)param_2 + 0x88) = 0;
  return;
}



// FUNCTION 142b31b66 FUN_142b31b66 body=57 status=ok
// SIG undefined FUN_142b31b66(void)

void FUN_142b31b66(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4498 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4498 = FUN_140002ddd(FUN_1462a73a9,uVar1,L"GbxActorStateSchema");
  }
  return;
}



// FUNCTION 142b31bfa FUN_142b31bfa body=983 status=ok
// SIG undefined FUN_142b31bfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b31bfa(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185b50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185c20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185ce0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185d90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185e40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185ef0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a185fc0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1860f0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4208 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a186280);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1868b0,1,&PTR_FUN_14a186880);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a186960);
  FUN_1446f470e(&DAT_14c9a42a8,L"OnActorStateChangedBP",1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a187180,1,&PTR_FUN_14a187130);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1892a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a189500);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a189770);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a189a40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a189cb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a189e30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18a230);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a18a5c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18a730);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a18aaa0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18abf0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a18af40,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18afd0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a18b520;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18b540);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b31fd4 FUN_142b31fd4 body=55 status=ok
// SIG undefined FUN_142b31fd4(void)

void FUN_142b31fd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4608 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4608 = FUN_14171c317(FUN_1462a7fa4,uVar1,L"EGbxAnimAssetRefType");
  }
  return;
}



// FUNCTION 142b3200b FUN_142b3200b body=55 status=ok
// SIG undefined FUN_142b3200b(void)

void FUN_142b3200b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4750 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4750 = FUN_14171c317(FUN_1462a85b5,uVar1,L"EGbxAttributeModifierActionExecOutput");
  }
  return;
}


