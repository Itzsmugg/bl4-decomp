// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1450c1aa0 FUN_1450c1aa0 body=200 status=ok
// SIG undefined FUN_1450c1aa0(void)

void FUN_1450c1aa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x100)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x68))
                ((longlong *)*puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  }
  return;
}



// FUNCTION 1450c1b70 FUN_1450c1b70 body=150 status=ok
// SIG undefined FUN_1450c1b70(void)

void FUN_1450c1b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 != 0) &&
     (((0 < *(short *)(lVar3 + 0xd0) || (0 < *(short *)(lVar3 + 0xd4))) &&
      (uVar2 = *(uint *)(param_1 + 0x100), uVar2 != 0)))) {
    lVar3 = (ulonglong)uVar2 << 3;
    do {
      lVar3 = lVar3 + -8;
      uVar2 = uVar2 - 1;
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0xf8));
      if ((*(char *)(param_2 + 0x1c) == '\0') || (plVar1[0x10] == 0)) {
        (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1450c1c50 FUN_1450c1c50 body=197 status=ok
// SIG undefined FUN_1450c1c50(void)

void FUN_1450c1c50(longlong param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_1450c1c90;
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_1450c1c89:
    uVar4 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_1450c1c90;
      goto LAB_1450c1c89;
    }
    uVar4 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar4);
LAB_1450c1c90:
  uVar5 = *(uint *)(param_1 + 0x100);
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 3;
    do {
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0xf8));
      if ((((char)param_2[7] == '\0') || (plVar2[0x10] == 0)) &&
         (cVar3 = FUN_1450d5200(plVar2,*(undefined8 *)(param_2 + 0xc)), cVar3 == '\0')) {
        (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
      }
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1450c1d20 FUN_1450c1d20 body=138 status=ok
// SIG undefined FUN_1450c1d20(void)

void FUN_1450c1d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x100)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0xa0))((longlong *)*puVar1,param_2,param_3,param_4);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  }
  return;
}



// FUNCTION 1450c1db0 FUN_1450c1db0 body=237 status=ok
// SIG undefined FUN_1450c1db0(void)

void FUN_1450c1db0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar4 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar4 = *(uint *)(lVar1 + 200);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
    }
  }
  while (uVar4 != 0xffffffff) {
    uVar5 = (ulonglong)uVar4;
    if (((*(char *)(param_2 + 2) == '\0') ||
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10) + 0x80) == 0)) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10),
       cVar3 = (**(code **)(*plVar2 + 0x1d0))(plVar2,*param_2), cVar3 == '\0')) {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10);
      (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
    }
    do {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0xffffffff) goto LAB_1450c1e7c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
  }
LAB_1450c1e7c:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c1ea0 FUN_1450c1ea0 body=234 status=ok
// SIG undefined FUN_1450c1ea0(void)

void FUN_1450c1ea0(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c1f64;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c1f64;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    if ((param_4 == '\0') ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10) + 0x80)
        == 0)) {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
      (**(code **)(*plVar2 + 0xc0))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c1f64;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c1f64:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c1f90 FUN_1450c1f90 body=219 status=ok
// SIG undefined FUN_1450c1f90(void)

void FUN_1450c1f90(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 != 0xffffffff) {
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
    }
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0xb8))(plVar2,param_2,param_3,param_4,param_5);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c203f;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c203f:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2070 FUN_1450c2070 body=202 status=ok
// SIG undefined FUN_1450c2070(void)

void FUN_1450c2070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c2113;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2113;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0xe0))(plVar2,param_2,param_3,param_4);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2113;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c2113:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2140 FUN_1450c2140 body=232 status=ok
// SIG undefined FUN_1450c2140(void)

void FUN_1450c2140(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 != 0xffffffff) {
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) break;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
    }
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((plVar2[0x13] & 0x20020000ffeU) == 0) {
      (**(code **)(*plVar2 + 200))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c21fc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c21fc:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2230 FUN_1450c2230 body=163 status=ok
// SIG undefined FUN_1450c2230(void)

void FUN_1450c2230(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar2 = *(uint *)(lVar1 + 200);
    if (uVar2 == 0xffffffff) goto LAB_1450c22bc;
    do {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) goto LAB_1450c22bc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10) == 0);
  }
  while (uVar2 != 0xffffffff) {
    (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar2 * 0x10) + 0xd8))();
    do {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0xffffffff) goto LAB_1450c22bc;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar2 * 0x10) == 0);
  }
LAB_1450c22bc:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c22e0 FUN_1450c22e0 body=195 status=ok
// SIG undefined FUN_1450c22e0(void)

void FUN_1450c22e0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c2382;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2382;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 0x180))(plVar2,param_2,param_3);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2382;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c2382:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c23b0 FUN_1450c23b0 body=206 status=ok
// SIG undefined FUN_1450c23b0(void)

void FUN_1450c23b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c245d;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c245d;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((*(uint *)(plVar2 + 0x13) & 0x1f000) == 0) {
      (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c245d;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c245d:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2480 FUN_1450c2480 body=216 status=ok
// SIG undefined FUN_1450c2480(void)

void FUN_1450c2480(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c2531;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2531;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    if ((*(uint *)(plVar2 + 0x13) & 0x1f000) == 0) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,param_3,param_4);
    }
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c2531;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c2531:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2560 FUN_1450c2560 body=183 status=ok
// SIG undefined FUN_1450c2560(void)

ulonglong FUN_1450c2560(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar2 == puVar2 + *(uint *)(param_1 + 0x100)) {
    return 1;
  }
  do {
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 0x128))();
    if ((int)uVar1 != 1) {
      puVar3 = *(undefined8 **)(param_1 + 0xf8);
      if (puVar3 == puVar2) {
        return uVar1;
      }
      do {
        (**(code **)(*(longlong *)*puVar3 + 0x130))();
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar2);
      return uVar1 & 0xffffffff;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined8 *)
                     (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1450c2620 FUN_1450c2620 body=84 status=ok
// SIG undefined FUN_1450c2620(void)

void FUN_1450c2620(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar1 != puVar1 + *(uint *)(param_1 + 0x100)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x130))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined8 *)
                       (*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x100) * 8));
  }
  return;
}



// FUNCTION 1450c2680 FUN_1450c2680 body=168 status=ok
// SIG undefined FUN_1450c2680(void)

void FUN_1450c2680(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar3 = 0xffffffff;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
    uVar3 = *(uint *)(lVar1 + 200);
    if (uVar3 == 0xffffffff) goto LAB_1450c270c;
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c270c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
  while (uVar3 != 0xffffffff) {
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + (ulonglong)uVar3 * 0x10);
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
    do {
      uVar3 = uVar3 - 1;
      if (uVar3 == 0xffffffff) goto LAB_1450c270c;
    } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar3 * 0x10) == 0);
  }
LAB_1450c270c:
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
  }
  return;
}



// FUNCTION 1450c2730 FUN_1450c2730 body=186 status=ok
// SIG undefined FUN_1450c2730(void)

undefined8 FUN_1450c2730(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  void *pvVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var4 = (ulonglong)(iVar3 + uVar1) * 2;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var4);
    if (pvVar5 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
        uVar6 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined2 *)((longlong)pvVar5 + uVar6 * 2) = *(undefined2 *)(*param_1 + uVar6 * 2);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c27cd;
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var4);
    if (pvVar5 != (void *)0x0) {
LAB_1450c27cd:
      *param_1 = (longlong)pvVar5;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c27f0 FUN_1450c27f0 body=474 status=ok
// SIG undefined FUN_1450c27f0(void)

longlong * FUN_1450c27f0(byte param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  byte bVar7;
  
  plVar4 = AK::MemoryMgr::Malloc(2,0x140);
  if (plVar4 != (longlong *)0x0) {
    FUN_145398460(plVar4);
    *(byte *)((longlong)plVar4 + 0x13e) = *(byte *)((longlong)plVar4 + 0x13e) & 0xfe;
    plVar6 = (longlong *)0x0;
    *(byte *)((longlong)plVar4 + 0x13c) = *(byte *)((longlong)plVar4 + 0x13c) & 0xc0;
    *plVar4 = (longlong)&PTR_FUN_149c26bb0;
    bVar7 = *(byte *)((longlong)plVar4 + 0x13d) & 7 | 0x90;
    plVar4[0x21] = 0;
    plVar4[1] = (longlong)&PTR_FUN_149c26e28;
    plVar4[2] = (longlong)&PTR_LAB_149c26e30;
    plVar4[5] = (longlong)&PTR_LAB_149c26e58;
    plVar4[0x22] = 0;
    plVar4[0x23] = 0;
    plVar4[0x24] = 0;
    *(byte *)((longlong)plVar4 + 0x13d) = (bVar7 ^ param_1) & 7 ^ bVar7;
    plVar4[0x25] = 0;
    *(undefined4 *)(plVar4 + 0x26) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x136) = 0;
    *(undefined2 *)((longlong)plVar4 + 0x134) = 1;
    *(undefined2 *)((longlong)plVar4 + 0x13a) = 0;
    if ((*(code **)(*plVar4 + 0x70) == FUN_1450c29d0) ||
       ((iVar3 = (**(code **)(*plVar4 + 0x70))(), iVar3 != 0 && (iVar3 != 10)))) {
      bVar7 = 0;
    }
    else {
      bVar7 = 0x80;
    }
    *(byte *)((longlong)plVar4 + 0xd4) = *(byte *)((longlong)plVar4 + 0xd4) & 0x7f | bVar7;
    if ((*(byte *)((longlong)plVar4 + 0x13d) & 7) == 1) {
      pvVar5 = AK::MemoryMgr::Malloc(2,0x18);
      if (pvVar5 != (void *)0x0) {
        plVar6 = (longlong *)FUN_145399450(pvVar5);
      }
    }
    else {
      pvVar5 = AK::MemoryMgr::Malloc(2,0x18);
      if (pvVar5 != (void *)0x0) {
        plVar6 = (longlong *)FUN_1453990f0(pvVar5);
      }
    }
    plVar4[0x21] = (longlong)plVar6;
    if ((plVar6 != (longlong *)0x0) && (iVar3 = (**(code **)(*plVar6 + 8))(plVar6), iVar3 == 1)) {
      return plVar4;
    }
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0x24);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      pcVar2 = *(code **)(plVar4[2] + 0x18);
      if (pcVar2 != FUN_14508a0e0) {
        (*pcVar2)();
        return (longlong *)0x0;
      }
      FUN_145373550(plVar4 + 2,0);
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1450c29d0 FUN_1450c29d0 body=6 status=ok
// SIG undefined FUN_1450c29d0(void)

undefined8 FUN_1450c29d0(void)

{
  return 2;
}



// FUNCTION 1450c29e0 FUN_1450c29e0 body=143 status=ok
// SIG undefined FUN_1450c29e0(void)

void FUN_1450c29e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Dst;
  void *pvVar2;
  
  FUN_1450d47b0();
  lVar1 = FUN_1450c5340(param_1 + 0x110,param_2);
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
    _Dst = (void *)FUN_1450c5340(param_1 + 0x110,param_2);
    if (_Dst != (void *)0x0) {
      pvVar2 = (void *)((ulonglong)(*(int *)(param_1 + 0x118) - 1) * 0x10 +
                       *(longlong *)(param_1 + 0x110));
      if (_Dst < pvVar2) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                (ulonglong)((int)pvVar2 - (int)_Dst & 0xfffffff0));
      }
      *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + -1;
    }
  }
  return;
}



// FUNCTION 1450c2a70 FUN_1450c2a70 body=11 status=ok
// SIG undefined FUN_1450c2a70(void)

byte FUN_1450c2a70(longlong param_1)

{
  return *(byte *)(param_1 + 0x13c) & 0xf;
}



// FUNCTION 1450c2a80 FUN_1450c2a80 body=327 status=ok
// SIG undefined FUN_1450c2a80(void)

float FUN_1450c2a80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x130) - *(float *)(param_1 + 300);
  fVar5 = 0.0;
  if (fVar3 != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar5 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 * fVar3;
  }
  fVar5 = fVar5 + *(float *)(param_1 + 300) + *(float *)(param_1 + 0x128);
  if (((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
      ((**(uint **)(param_1 + 0x58) >> 0xf & 1) != 0)) ||
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0xf), cVar1 != '\0'
     )) {
    plVar2 = (longlong *)(param_1 + 0x28);
    fVar3 = 0.0;
    cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,0xf);
    if (cVar1 != '\0') {
      fVar3 = (float)FUN_1450c0e90(plVar2,0xf);
    }
    if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
       ((**(uint **)(param_1 + 0x58) >> 0xf & 1) != 0)) {
      fVar4 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0xf,param_2);
      fVar3 = fVar3 + fVar4;
    }
    fVar5 = fVar5 + fVar3 * 1000.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}



// FUNCTION 1450c2bf0 FUN_1450c2bf0 body=875 status=ok
// SIG undefined FUN_1450c2bf0(void)

ulonglong FUN_1450c2bf0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined2 local_res8 [4];
  undefined1 local_res18 [8];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  longlong lStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_338 [2];
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  int *local_318;
  undefined8 local_310;
  int local_308;
  int local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  int local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  undefined8 *local_2b0;
  int local_2a8;
  int local_2a4;
  undefined8 local_2a0;
  int local_298;
  undefined8 local_290;
  undefined1 local_288 [200];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 local_30;
  byte local_28;
  
  *(byte *)(param_1 + 0x13e) = *(byte *)(param_1 + 0x13e) | 1;
  if ((*(byte *)(param_1 + 0x13d) & 0x40) == 0) {
    lVar4 = FUN_1450c3f00(param_1,*(undefined8 *)(param_2 + 4),local_res8,local_res18);
    if (lVar4 == 0) {
      if (*param_2 == 0) {
        uVar5 = 2;
      }
      else {
        uVar3 = FUN_14536e380(param_1,param_2);
        uVar5 = (ulonglong)uVar3;
      }
    }
    else {
      uVar3 = param_2[0xe];
      if (uVar3 < 0x20) {
        param_2[0x1f] = param_2[0x1f] & ~(uint)(1L << ((ulonglong)uVar3 & 0x3f));
        *(undefined2 *)((longlong)param_2 + (ulonglong)(uint)param_2[0xe] * 2 + 0x3c) =
             local_res8[0];
        param_2[0xe] = param_2[0xe] + 1;
      }
      else {
        param_2[0xe] = uVar3 + 1;
      }
      uVar3 = FUN_1450c1350(lVar4,param_2);
      uVar5 = (ulonglong)uVar3;
      LOCK();
      piVar1 = (int *)(lVar4 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
      }
    }
  }
  else if (*param_2 == 0) {
    local_330 = *(longlong *)(param_2 + 2);
    local_328 = *(undefined8 *)(param_2 + 4);
    local_320 = *(undefined8 *)(param_2 + 6);
    local_304 = param_2[0xd];
    local_310 = *(undefined8 *)(param_2 + 10);
    local_308 = param_2[0xc];
    local_318 = *(int **)(param_2 + 8);
    local_338[0] = 0;
    if (local_318 != (int *)0x0) {
      *local_318 = *local_318 + 1;
    }
    local_300 = *(undefined8 *)(param_2 + 0xe);
    uStack_2f8 = *(undefined8 *)(param_2 + 0x10);
    local_2b8 = param_2[0x20];
    local_2f0 = *(undefined8 *)(param_2 + 0x12);
    uStack_2e8 = *(undefined8 *)(param_2 + 0x14);
    local_2b4 = param_2[0x21];
    local_2b0 = *(undefined8 **)(param_2 + 0x22);
    local_2a8 = param_2[0x24];
    local_2a4 = param_2[0x25];
    local_2e0 = *(undefined8 *)(param_2 + 0x16);
    uStack_2d8 = *(undefined8 *)(param_2 + 0x18);
    local_298 = param_2[0x28];
    local_2c0 = *(undefined8 *)(param_2 + 0x1e);
    local_290 = *(undefined8 *)(param_2 + 0x2a);
    local_2d0 = param_2[0x1a];
    iStack_2cc = param_2[0x1b];
    iStack_2c8 = param_2[0x1c];
    iStack_2c4 = param_2[0x1d];
    local_2a0 = *(undefined8 *)(param_2 + 0x26);
    FUN_1450896a0(local_288);
    local_40 = param_2[0xbe];
    iStack_3c = param_2[0xbf];
    iStack_38 = param_2[0xc0];
    iStack_34 = param_2[0xc1];
    local_48 = *(undefined8 *)(param_2 + 0xbc);
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1450c1160(local_288,param_2 + 0x2c);
    local_30 = *(undefined8 *)(param_2 + 0xc2);
    local_358 = 0;
    local_28 = *(byte *)(param_2 + 0xc4) & 0xf | local_28 & 0xf0;
    local_350 = 0;
    local_330 = param_1 + 0x10;
    local_378 = 0;
    uStack_370 = 0;
    local_348 = 0;
    local_368 = 0;
    lStack_360 = 0;
    local_338[0] = 1;
    lVar4 = FUN_14538ec50();
    bVar7 = lStack_360 != 0;
    lStack_360 = lVar4;
    if (bVar7) {
      FUN_14538eca0();
    }
    if (lStack_360 == 0) {
      uVar3 = 2;
    }
    else {
      local_2b0 = &local_378;
      if ((*(byte *)(param_1 + 0x13c) & 0xf) == 5) {
        uVar3 = FUN_1450c4580();
      }
      else {
        uVar3 = FUN_1450c4490(param_1,local_338);
      }
    }
    uVar5 = (ulonglong)uVar3;
    FUN_14538dec0(&local_350);
    if (lStack_360 != 0) {
      FUN_14538eca0();
      lStack_360 = 0;
    }
    FUN_144d51aa0(local_288);
    if (local_318 != (int *)0x0) {
      FUN_144d4a460();
    }
  }
  else {
    if ((*(longlong *)(param_2 + 0x22) != 0) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18) == 0)) {
      uVar6 = FUN_14538ec50();
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18);
      *(undefined8 *)(*(longlong *)(param_2 + 0x22) + 0x18) = uVar6;
      if (lVar4 != 0) {
        FUN_14538eca0();
      }
      if (*(longlong *)(*(longlong *)(param_2 + 0x22) + 0x18) == 0) {
        return 2;
      }
    }
    if ((*(byte *)(param_1 + 0x13c) & 0xf) == 5) {
      uVar5 = FUN_1450c4580();
    }
    else {
      uVar5 = FUN_1450c4490(param_1,param_2);
    }
  }
  return uVar5;
}



// FUNCTION 1450c2f60 FUN_1450c2f60 body=115 status=ok
// SIG undefined FUN_1450c2f60(void)

void FUN_1450c2f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  void *pvVar1;
  
  if (*param_4 != 1) {
    FUN_145374b50();
    return;
  }
  pvVar1 = AK::MemoryMgr::Malloc(0,0x3f0);
  if (pvVar1 != (void *)0x0) {
    FUN_1453996f0(pvVar1,param_4,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1450c2fe0 FUN_1450c2fe0 body=381 status=ok
// SIG undefined FUN_1450c2fe0(void)

undefined8 FUN_1450c2fe0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte local_res8 [8];
  uint local_res10 [2];
  undefined8 local_res18;
  
  uVar2 = 0;
  if ((char)*(byte *)(param_1 + 0x13d) < '\0') {
    local_res10[0] = (uint)(*(longlong *)(param_1 + 0x120) != 0);
  }
  else {
    local_res10[0] = *(uint *)(param_1 + 0x118);
  }
  local_res8[0] = *(byte *)(param_1 + 0x13d) & 7;
  cVar1 = (**(code **)*param_2)(param_2,local_res8,1,&local_res18);
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)*param_2)(param_2,local_res10,4,local_res8), cVar1 == '\0')) {
    return 2;
  }
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    plVar4 = *(longlong **)(param_1 + 0x110);
    if (plVar4 != plVar4 + (ulonglong)*(uint *)(param_1 + 0x118) * 2) {
      do {
        local_res18 = *(undefined8 *)(*plVar4 + 0x58);
        cVar1 = (**(code **)*param_2)(param_2,&local_res18,8,local_res8);
        if (cVar1 == '\0') {
          return 2;
        }
        uVar3 = (**(code **)(*(longlong *)plVar4[1] + 0x20))((longlong *)plVar4[1],param_2,uVar2);
        if ((int)uVar3 != 1) {
          return uVar3;
        }
        plVar4 = plVar4 + 2;
      } while (plVar4 != (longlong *)
                         ((ulonglong)*(uint *)(param_1 + 0x118) * 0x10 +
                         *(longlong *)(param_1 + 0x110)));
    }
  }
  else {
    cVar1 = (**(code **)*param_2)(param_2,&DAT_149c26ba8,8,local_res8);
    if (cVar1 == '\0') {
      return 2;
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x20))
                      (*(longlong **)(param_1 + 0x120),param_2,uVar2);
    if ((int)uVar3 != 1) {
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 1450c3160 FUN_1450c3160 body=532 status=ok
// SIG undefined FUN_1450c3160(void)

ulonglong FUN_1450c3160(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  CAkRegisteredObj *pCVar5;
  void *pvVar6;
  longlong *plVar7;
  ulonglong uVar8;
  CAkRegisteredObj *pCVar9;
  byte local_res10 [8];
  uint local_res18 [2];
  undefined1 local_res20 [8];
  __uint64 local_48 [2];
  
  local_res18[0] = 0;
  local_res10[0] = 0;
  cVar1 = (**(code **)*param_2)(param_2,local_res10,1,local_res20);
  if (((cVar1 == '\0') ||
      (cVar1 = (**(code **)*param_2)(param_2,local_res18,4,local_res20), cVar1 == '\0')) ||
     (local_res10[0] != (*(byte *)(param_1 + 0x13d) & 7))) {
    return 2;
  }
  if (*(longlong **)(param_1 + 0x108) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
  }
  pCVar9 = (CAkRegisteredObj *)0x0;
  if (local_res18[0] != 0) {
    do {
      local_48[0] = 0xffffffffffffffff;
      cVar1 = (**(code **)*param_2)(param_2,local_48,8,local_res20);
      if (cVar1 == '\0') {
        return 2;
      }
      pCVar5 = (CAkRegisteredObj *)0x0;
      if ((local_48[0] == 0xffffffffffffffff) ||
         (pCVar5 = CAkRegistryMgr::GetObj(g_pRegistryMgr,local_48[0]),
         pCVar5 != (CAkRegisteredObj *)0x0)) {
        if ((*(byte *)(param_1 + 0x13d) & 7) == 1) {
          plVar7 = (longlong *)FUN_1450c3d20(param_1,pCVar5);
        }
        else {
          uVar4 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
          plVar7 = (longlong *)FUN_1450c3e20(param_1,uVar4,pCVar5);
        }
        if (plVar7 == (longlong *)0x0) {
          return 0x34;
        }
        uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2,uVar2);
        if ((int)uVar8 != 1) {
          return uVar8;
        }
      }
      else {
        if ((*(byte *)(param_1 + 0x13d) & 7) == 1) {
          pvVar6 = AK::MemoryMgr::Malloc(0,0x10);
          if (pvVar6 == (void *)0x0) {
            return 0x34;
          }
          plVar7 = (longlong *)FUN_145398f20(pvVar6);
        }
        else {
          plVar7 = (longlong *)FUN_1450c3c90(param_1,uVar2);
        }
        if (plVar7 == (longlong *)0x0) {
          return 0x34;
        }
        uVar3 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2,uVar2);
        (**(code **)*plVar7)(plVar7,0);
        AK::MemoryMgr::Free(0,plVar7);
        if (uVar3 != 1) {
          return (ulonglong)uVar3;
        }
      }
      uVar3 = (int)pCVar9 + 1;
      pCVar9 = (CAkRegisteredObj *)(ulonglong)uVar3;
    } while (uVar3 < local_res18[0]);
  }
  return 1;
}



// FUNCTION 1450c3380 FUN_1450c3380 body=253 status=ok
// SIG undefined FUN_1450c3380(void)

ulonglong FUN_1450c3380(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  uVar2 = *(ushort *)*param_2;
  *param_2 = (ushort *)*param_2 + 1;
  uVar10 = (uint)uVar2;
  if (uVar10 == 0) {
    return 1;
  }
  pbVar1 = (byte *)(param_1 + 0x13d);
  do {
    puVar5 = (undefined4 *)*param_2;
    uVar3 = *puVar5;
    *param_2 = puVar5 + 1;
    iVar4 = puVar5[1];
    *param_2 = puVar5 + 2;
    if (iVar4 != 50000) {
      *pbVar1 = *pbVar1 | 8;
    }
    if (((*pbVar1 & 7) != 1) &&
       (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x40))
                          (*(longlong **)(param_1 + 0x108),uVar3), cVar6 != '\0')) {
      return 0x23;
    }
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x28))
                      (*(longlong **)(param_1 + 0x108),uVar3,iVar4);
    uVar8 = uVar7 & 0xffffffff;
    if ((int)uVar7 == 1) {
      FUN_1450c4330(param_1);
    }
    else {
      if ((int)uVar7 != 0xf) {
        return uVar7;
      }
      uVar8 = 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar10);
  return uVar8;
}



// FUNCTION 1450c3480 FUN_1450c3480 body=1041 status=ok
// SIG undefined FUN_1450c3480(void)

int FUN_1450c3480(longlong *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte *pbVar11;
  void *pvVar12;
  longlong *plVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  short sVar17;
  short sVar18;
  uint uVar19;
  longlong *plVar20;
  short sVar21;
  uint uStackX_c;
  uint *local_res10;
  undefined4 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  iVar8 = (**(code **)(*param_1 + 0x70))();
  if (iVar8 != 2) {
    lVar4 = param_1[4];
    uVar9 = (**(code **)(*param_1 + 0x70))();
    FUN_1450b8920(DAT_14c790fe0,(int)lVar4,2,uVar9);
    return 0x5b;
  }
  local_res10 = local_res10 + 1;
  iVar8 = FUN_1450d7ad0(param_1,&local_res10,local_res18,0);
  if (iVar8 == 1) {
    plVar20 = (longlong *)0x0;
    sVar18 = (short)*local_res10;
    sVar21 = *(short *)((longlong)local_res10 + 2);
    sVar17 = (short)local_res10[1];
    if (sVar18 == 0) {
      sVar18 = 0;
      sVar21 = 0;
      sVar17 = sVar18;
    }
    *(short *)((longlong)param_1 + 0x134) = sVar18;
    iVar10 = 1;
    *(short *)((longlong)param_1 + 0x136) = sVar21;
    iVar8 = 1;
    *(short *)(param_1 + 0x27) = sVar17;
    uVar9 = *(undefined4 *)((longlong)local_res10 + 6);
    uVar1 = *(undefined4 *)((longlong)local_res10 + 10);
    uVar2 = *(undefined4 *)((longlong)local_res10 + 0xe);
    sVar18 = *(short *)((longlong)local_res10 + 0x12);
    uVar5 = local_res10[5];
    bVar14 = *(byte *)((longlong)param_1 + 0x13d);
    bVar15 = *(byte *)((longlong)local_res10 + 0x15);
    pbVar11 = (byte *)((longlong)local_res10 + 0x16);
    bVar3 = *(byte *)((longlong)local_res10 + 0x17);
    local_res10 = local_res10 + 6;
    if (*pbVar11 != (bVar14 & 7)) {
      *(byte *)((longlong)param_1 + 0x13d) = (bVar14 ^ *pbVar11) & 7 ^ bVar14;
      if ((longlong *)param_1[0x21] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
      }
      iVar8 = 2;
      plVar13 = plVar20;
      if ((*(byte *)((longlong)param_1 + 0x13d) & 7) == 1) {
        pvVar12 = AK::MemoryMgr::Malloc(2,0x18);
        if (pvVar12 != (void *)0x0) {
          plVar13 = (longlong *)FUN_145399450(pvVar12);
        }
      }
      else {
        pvVar12 = AK::MemoryMgr::Malloc(2,0x18);
        if (pvVar12 != (void *)0x0) {
          plVar13 = (longlong *)FUN_1453990f0(pvVar12);
        }
      }
      param_1[0x21] = (longlong)plVar13;
      if ((plVar13 != (longlong *)0x0) && (iVar8 = (**(code **)(*plVar13 + 8))(), iVar8 != 1)) {
        (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
        param_1[0x21] = 0;
      }
      FUN_1450c4330(param_1);
    }
    if (iVar8 == 1) {
      *(undefined4 *)(param_1 + 0x25) = uVar9;
      *(undefined4 *)((longlong)param_1 + 300) = uVar1;
      *(undefined4 *)(param_1 + 0x26) = uVar2;
      if (*(short *)((longlong)param_1 + 0x13a) != sVar18) {
        *(short *)((longlong)param_1 + 0x13a) = sVar18;
        FUN_1450c4330(param_1);
      }
      bVar14 = *(byte *)((longlong)param_1 + 0x13c);
      if ((bVar14 & 0xf) != (byte)uVar5) {
        *(byte *)((longlong)param_1 + 0x13c) = (bVar14 ^ (byte)uVar5) & 0xf ^ bVar14;
        FUN_1450c4330(param_1);
      }
      bVar14 = *(byte *)((longlong)param_1 + 0x13c);
      if ((bVar14 >> 4 & 3) != bVar15) {
        *(byte *)((longlong)param_1 + 0x13c) = (bVar15 << 4 ^ bVar14) & 0x30 ^ bVar14;
        FUN_1450c4330(param_1);
      }
      bVar14 = bVar3 >> 1 & 1;
      if ((*(byte *)((longlong)param_1 + 0x13d) >> 4 & 1) != bVar14) {
        *(byte *)((longlong)param_1 + 0x13d) =
             *(byte *)((longlong)param_1 + 0x13d) & 0xef | bVar14 << 4;
        FUN_1450c4330(param_1);
      }
      bVar14 = *(byte *)((longlong)param_1 + 0x13d);
      bVar15 = (bVar3 & 4) << 3;
      *(byte *)((longlong)param_1 + 0x13d) = bVar15 | bVar14 & 0xdf;
      bVar16 = bVar3 >> 3 & 1;
      if ((bVar14 >> 6 & 1) != bVar16) {
        *(byte *)((longlong)param_1 + 0x13d) = bVar15 | bVar14 & 0x9f | bVar16 << 6;
        FUN_1450c4330(param_1);
      }
      if (*(byte *)((longlong)param_1 + 0x13d) >> 7 != (bVar3 >> 4 & 1)) {
        *(byte *)((longlong)param_1 + 0x13d) =
             *(byte *)((longlong)param_1 + 0x13d) & 0x7f | (bVar3 >> 4) << 7;
        FUN_1450c4330(param_1);
      }
      uVar5 = *local_res10;
      local_res10 = local_res10 + 1;
      if (uVar5 != 0) {
        if ((*(uint *)((longlong)param_1 + 0x104) < uVar5) &&
           (cVar7 = FUN_1450c15a0(param_1 + 0x1e,uVar5 - *(uint *)((longlong)param_1 + 0x104)),
           cVar7 == '\0')) {
          return 0x34;
        }
        iVar10 = 1;
        if (uVar5 != 0) {
          do {
            uVar6 = uStackX_c;
            uStackX_c = uStackX_c & 0xffffff00;
            uVar19 = *local_res10;
            local_res10 = local_res10 + 1;
            iVar10 = (**(code **)(*param_1 + 0x40))
                               (param_1,CONCAT44(uVar6,uVar19) & 0xffffff00ffffffff);
            if ((iVar10 != 1) && (iVar10 != 0xf)) break;
            uVar19 = (int)plVar20 + 1;
            plVar20 = (longlong *)(ulonglong)uVar19;
          } while (uVar19 < uVar5);
        }
      }
      iVar8 = iVar10;
      if (iVar10 == 1) {
        iVar8 = FUN_1450c3380(param_1,&local_res10,local_res18);
      }
    }
  }
  return iVar8;
}



// FUNCTION 1450c38a0 FUN_1450c38a0 body=955 status=ok
// SIG undefined FUN_1450c38a0(void)

longlong FUN_1450c38a0(longlong param_1,undefined8 param_2,undefined2 *param_3,uint *param_4,
                      longlong *param_5,short *param_6)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  char local_res8 [8];
  
  lVar9 = 0;
  *param_4 = 0;
  *param_3 = 0;
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
  if (iVar5 == 0) {
    return 0;
  }
  lVar13 = lVar9;
  if (iVar5 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) & 2) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
    *param_4 = uVar6;
    piVar12 = DAT_14c791060;
    do {
      while (iVar5 = *piVar12, iVar5 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar12 + 2));
        if (*piVar12 < 0) goto LAB_1450c3bbf;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar12 + 2));
      }
      LOCK();
      iVar11 = *piVar12;
      if (iVar5 == iVar11) {
        *piVar12 = iVar5 + 1;
      }
      UNLOCK();
    } while (iVar5 != iVar11);
LAB_1450c3bbf:
    if (piVar12[0x12] != 0) {
      for (lVar7 = *(longlong *)
                    (*(longlong *)(piVar12 + 0x10) +
                    ((ulonglong)uVar6 % (ulonglong)(uint)piVar12[0x12]) * 8);
          (lVar13 = lVar9, lVar7 != 0 && (lVar13 = lVar7, *(uint *)(lVar7 + 0x10) != uVar6));
          lVar7 = *(longlong *)(lVar7 + 8)) {
      }
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = *piVar12;
    while (-1 < iVar5) {
      iVar11 = iVar5 + -1;
      LOCK();
      iVar1 = *piVar12;
      if (iVar5 == iVar1) {
        *piVar12 = iVar11;
      }
      UNLOCK();
      if (iVar5 == iVar1) goto LAB_1450c3c39;
      iVar5 = *piVar12;
    }
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x13d);
    local_res8[0] = '\x01';
    if ((((bVar2 & 0x10) == 0) && (*param_5 == 0)) && ((bVar2 & 7) == 1)) {
      lVar7 = FUN_1450c3d20(param_1,param_2);
      if ((lVar7 == 0) || (lVar8 = FUN_1450c3c60(param_1), lVar8 == 0)) {
        return 0;
      }
      *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(lVar7 + 8);
      *(undefined2 *)(lVar8 + 10) = *(undefined2 *)(lVar7 + 10);
      uVar4 = FUN_1450c5110(param_1,lVar8,local_res8,param_6);
      *param_5 = lVar8;
    }
    else {
      lVar7 = *param_5;
      if ((bVar2 & 7) == 1) {
        if (lVar7 == 0) {
          lVar7 = FUN_1450c3c60(param_1);
          *param_5 = lVar7;
          if (lVar7 == 0) {
            return 0;
          }
          lVar8 = *(longlong *)(param_1 + 0x120);
          if (lVar8 != 0) {
            *(undefined2 *)(lVar7 + 10) = *(undefined2 *)(lVar8 + 10);
            *(undefined2 *)(lVar8 + 10) = 0xffff;
          }
        }
        lVar7 = *param_5;
        uVar4 = FUN_1450c5110(param_1,lVar7,local_res8,param_6);
        if ((*(byte *)(param_1 + 0x13d) & 0x10) == 0) {
          if ((char)*(byte *)(param_1 + 0x13d) < '\0') {
            lVar8 = *(longlong *)(param_1 + 0x120);
          }
          else {
            lVar8 = FUN_1450c5340(param_1 + 0x110,param_2);
            lVar8 = *(longlong *)(lVar8 + 8);
          }
          cVar3 = *(char *)(lVar7 + 8);
          *(char *)(lVar8 + 8) = cVar3;
          sVar10 = -1;
          if (cVar3 == '\0') {
            sVar10 = 1;
          }
          *(short *)(lVar8 + 10) = sVar10 + *(short *)(lVar7 + 10);
          iVar5 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
          if ((*(short *)(lVar8 + 10) + 1 == iVar5) && ((*(byte *)(param_1 + 0x13d) & 0x20) == 0)) {
            *(undefined2 *)(lVar8 + 10) = 0xffff;
          }
          else if ((*(short *)(lVar8 + 10) == 0) && (*(char *)(lVar8 + 8) == '\0')) {
            *(undefined1 *)(lVar8 + 8) = 1;
          }
        }
      }
      else {
        if (lVar7 == 0) {
          lVar7 = FUN_1450c3c90(param_1);
          if (lVar7 == 0) {
            return 0;
          }
          *param_5 = lVar7;
        }
        uVar4 = FUN_1450c4da0(param_1,lVar7,local_res8,param_6);
      }
    }
    if (local_res8[0] == '\0') {
      return 0;
    }
    *param_3 = uVar4;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
    *param_4 = uVar6;
    piVar12 = DAT_14c791060;
    do {
      while (iVar5 = *piVar12, iVar5 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar12 + 2));
        if (*piVar12 < 0) goto LAB_1450c3acf;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar12 + 2));
      }
      LOCK();
      iVar11 = *piVar12;
      if (iVar5 == iVar11) {
        *piVar12 = iVar5 + 1;
      }
      UNLOCK();
    } while (iVar5 != iVar11);
LAB_1450c3acf:
    if (piVar12[0x12] != 0) {
      for (lVar7 = *(longlong *)
                    (*(longlong *)(piVar12 + 0x10) +
                    ((ulonglong)uVar6 % (ulonglong)(uint)piVar12[0x12]) * 8);
          (lVar13 = lVar9, lVar7 != 0 && (lVar13 = lVar7, *(uint *)(lVar7 + 0x10) != uVar6));
          lVar7 = *(longlong *)(lVar7 + 8)) {
      }
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar5 = *piVar12;
    while (-1 < iVar5) {
      iVar11 = iVar5 + -1;
      LOCK();
      iVar1 = *piVar12;
      if (iVar5 == iVar1) {
        *piVar12 = iVar11;
      }
      UNLOCK();
      if (iVar5 == iVar1) goto LAB_1450c3c39;
      iVar5 = *piVar12;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(piVar12 + 2));
LAB_1450c3b4e:
  if (lVar13 != 0) {
    lVar9 = lVar13 + -0x10;
  }
  return lVar9;
LAB_1450c3c39:
  if ((iVar11 == 0) && (0 < piVar12[0xc])) {
    SetEvent(*(HANDLE *)(piVar12 + 0xe));
  }
  goto LAB_1450c3b4e;
}



// FUNCTION 1450c3c60 FUN_1450c3c60 body=38 status=ok
// SIG undefined FUN_1450c3c60(void)

void FUN_1450c3c60(void)

{
  void *pvVar1;
  
  pvVar1 = AK::MemoryMgr::Malloc(0,0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_145398f20(pvVar1);
    return;
  }
  return;
}



// FUNCTION 1450c3c90 FUN_1450c3c90 body=136 status=ok
// SIG undefined FUN_1450c3c90(void)

longlong * FUN_1450c3c90(longlong param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong *plVar4;
  
  pvVar3 = AK::MemoryMgr::Malloc(0,0x38);
  if (pvVar3 != (void *)0x0) {
    plVar4 = (longlong *)FUN_1453985a0(pvVar3,param_2);
    if (plVar4 != (longlong *)0x0) {
      iVar1 = FUN_1453985e0(plVar4,*(undefined2 *)(param_1 + 0x13a));
      if (iVar1 == 1) {
        if ((*(byte *)(param_1 + 0x13d) & 8) != 0) {
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x60))();
          *(undefined4 *)((longlong)plVar4 + 0xc) = uVar2;
          *(undefined4 *)(plVar4 + 1) = uVar2;
        }
        return plVar4;
      }
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1450c3d20 FUN_1450c3d20 body=244 status=ok
// SIG undefined FUN_1450c3d20(void)

longlong * FUN_1450c3d20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x13d) < '\0') {
    plVar3 = *(longlong **)(param_1 + 0x120);
    if (plVar3 == (longlong *)0x0) {
      pvVar2 = AK::MemoryMgr::Malloc(0,0x10);
      if (pvVar2 == (void *)0x0) {
        plVar3 = (longlong *)0x0;
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      else {
        plVar3 = (longlong *)FUN_145398f20(pvVar2);
        *(longlong **)(param_1 + 0x120) = plVar3;
      }
    }
  }
  else {
    lVar4 = FUN_1450c5340();
    if (lVar4 == 0) {
      pvVar2 = AK::MemoryMgr::Malloc(0,0x10);
      if ((pvVar2 != (void *)0x0) &&
         (plVar3 = (longlong *)FUN_145398f20(pvVar2), plVar3 != (longlong *)0x0)) {
        lVar4 = FUN_1450c5620(param_2);
        if ((lVar4 != 0) &&
           ((iVar1 = FUN_1450d2960(lVar4,param_1), iVar1 == 1 &&
            (lVar4 = FUN_1450c53e0(param_1 + 0x110,param_2), lVar4 != 0)))) {
          *(longlong **)(lVar4 + 8) = plVar3;
          return plVar3;
        }
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar4 + 8);
    }
  }
  return plVar3;
}



// FUNCTION 1450c3e20 FUN_1450c3e20 body=218 status=ok
// SIG undefined FUN_1450c3e20(void)

longlong * FUN_1450c3e20(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x13d) < '\0') {
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_1450c3c90();
      *(longlong **)(param_1 + 0x120) = plVar2;
    }
  }
  else {
    lVar3 = FUN_1450c5340(param_1 + 0x110,param_3);
    if (lVar3 == 0) {
      plVar2 = (longlong *)FUN_1450c3c90(param_1,param_2);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = FUN_1450c5620(param_3);
        if (((lVar3 != 0) && (iVar1 = FUN_1450d2960(lVar3,param_1), iVar1 == 1)) &&
           (lVar3 = FUN_1450c53e0(param_1 + 0x110,param_3), lVar3 != 0)) {
          *(longlong **)(lVar3 + 8) = plVar2;
          return plVar2;
        }
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(lVar3 + 8);
    }
  }
  return plVar2;
}



// FUNCTION 1450c3f00 FUN_1450c3f00 body=1061 status=ok
// SIG undefined FUN_1450c3f00(void)

longlong * FUN_1450c3f00(longlong param_1,undefined8 param_2,undefined2 *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ushort uVar15;
  uint uVar16;
  char local_res8 [8];
  longlong *local_40;
  
  plVar11 = (longlong *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
      *param_4 = uVar6;
      piVar1 = DAT_14c791060;
      do {
        while (iVar7 = *piVar1, iVar7 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1450c426f;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar2 = *piVar1;
        if (iVar7 == iVar2) {
          *piVar1 = iVar7 + 1;
        }
        UNLOCK();
      } while (iVar7 != iVar2);
LAB_1450c426f:
      plVar9 = plVar11;
      if (piVar1[0x12] != 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(piVar1 + 0x10) +
                        ((ulonglong)uVar6 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (plVar9 = plVar11, plVar12 != (longlong *)0x0 &&
            (plVar9 = plVar12, *(uint *)(plVar12 + 2) != uVar6)); plVar12 = (longlong *)plVar12[1])
        {
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar7 = *piVar1;
      while (-1 < iVar7) {
        LOCK();
        iVar2 = *piVar1;
        if (iVar7 == iVar2) {
          *piVar1 = iVar7 + -1;
        }
        UNLOCK();
        if (iVar7 == iVar2) {
          if ((iVar7 + -1 == 0) && (0 < piVar1[0xc])) {
            SetEvent(*(HANDLE *)(piVar1 + 0xe));
          }
          goto LAB_1450c42ea;
        }
        iVar7 = *piVar1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450c42ea:
      plVar11 = plVar9 + -2;
      if (plVar9 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
    }
    else {
      bVar4 = false;
      local_40 = (longlong *)0x0;
      uVar16 = 0;
      if ((*(byte *)(param_1 + 0x13d) & 7) == 1) {
        plVar9 = (longlong *)FUN_1450c3d20(param_1,param_2);
        plVar12 = plVar9;
      }
      else {
        local_40 = (longlong *)FUN_1450c3e20(param_1,(short)uVar6,param_2);
        plVar9 = plVar11;
        plVar12 = local_40;
      }
      plVar14 = plVar11;
      if (plVar12 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        do {
          local_res8[0] = '\x01';
          if (bVar4) {
            uVar15 = (short)uVar16 + 1;
            uVar16 = 0;
            if (uVar15 < uVar6) {
              uVar16 = (uint)uVar15;
            }
            cVar5 = FUN_1450c5200(param_1,local_40,uVar16);
            local_res8[0] = cVar5;
            if (cVar5 != '\0') {
              FUN_1450c4c60(param_1,local_40,uVar16);
            }
LAB_1450c40c5:
            if (cVar5 != '\0') goto LAB_1450c40ce;
            if (!bVar4) {
              return plVar11;
            }
          }
          else {
            if ((*(byte *)(param_1 + 0x13d) & 7) != 1) {
              uVar15 = FUN_1450c4da0(param_1,local_40,local_res8,0);
              uVar16 = (uint)uVar15;
              cVar5 = local_res8[0];
              goto LAB_1450c40c5;
            }
            if ((char)plVar9[1] == '\0') {
              if (*(short *)((longlong)plVar9 + 10) == 0) {
                *(undefined1 *)(plVar9 + 1) = 1;
                *(undefined2 *)((longlong)plVar9 + 10) = 1;
                uVar16 = 1;
              }
              else {
                uVar15 = *(short *)((longlong)plVar9 + 10) - 1;
                *(ushort *)((longlong)plVar9 + 10) = uVar15;
                uVar16 = (uint)uVar15;
              }
            }
            else {
              iVar7 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
              sVar3 = *(short *)((longlong)plVar9 + 10);
              if (sVar3 + 1 == iVar7) {
                if ((*(byte *)(param_1 + 0x13d) & 0x20) == 0) {
                  *(undefined2 *)((longlong)plVar9 + 10) = 0;
                  uVar16 = 0;
                }
                else {
                  *(undefined1 *)(plVar9 + 1) = 0;
                  *(ushort *)((longlong)plVar9 + 10) = sVar3 - 1U;
                  uVar16 = (uint)(ushort)(sVar3 - 1U);
                }
              }
              else {
                uVar16 = (int)sVar3 + 1;
                *(short *)((longlong)plVar9 + 10) = (short)uVar16;
                uVar16 = uVar16 & 0xffff;
              }
            }
LAB_1450c40ce:
            uVar8 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x20))();
            *param_4 = uVar8;
            piVar1 = DAT_14c791060;
            do {
              while (iVar7 = *piVar1, iVar7 < 0) {
                EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
                if (*piVar1 < 0) goto LAB_1450c4101;
                LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
              }
              LOCK();
              iVar2 = *piVar1;
              if (iVar7 == iVar2) {
                *piVar1 = iVar7 + 1;
              }
              UNLOCK();
            } while (iVar7 != iVar2);
LAB_1450c4101:
            if (piVar1[0x12] == 0) {
              lVar13 = 0;
            }
            else {
              for (lVar13 = *(longlong *)
                             (*(longlong *)(piVar1 + 0x10) +
                             ((ulonglong)uVar8 % (ulonglong)(uint)piVar1[0x12]) * 8); lVar13 != 0;
                  lVar13 = *(longlong *)(lVar13 + 8)) {
                if (*(uint *)(lVar13 + 0x10) == uVar8) goto LAB_1450c4132;
              }
              lVar13 = 0;
LAB_1450c4132:
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x14) + 1;
                UNLOCK();
              }
            }
            plVar12 = (longlong *)0x0;
            iVar7 = *piVar1;
            while (-1 < iVar7) {
              LOCK();
              iVar2 = *piVar1;
              if (iVar7 == iVar2) {
                *piVar1 = iVar7 + -1;
              }
              UNLOCK();
              if (iVar7 == iVar2) {
                if ((iVar7 + -1 == 0) && (0 < piVar1[0xc])) {
                  SetEvent(*(HANDLE *)(piVar1 + 0xe));
                }
                goto LAB_1450c418d;
              }
              iVar7 = *piVar1;
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450c418d:
            plVar10 = (longlong *)(lVar13 + -0x10);
            if (lVar13 == 0) {
              plVar10 = plVar12;
            }
            plVar11 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              cVar5 = (**(code **)(*plVar10 + 0x78))(plVar10);
              if (cVar5 != '\0') {
                *param_3 = (short)uVar16;
                return plVar10;
              }
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0x24);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar11 = plVar12;
              if (iVar7 == 1) {
                (**(code **)(plVar10[2] + 0x18))();
              }
            }
          }
          if ((((int)plVar14 == 0) && ((*(byte *)(param_1 + 0x13d) & 7) == 0)) &&
             ((*(byte *)(param_1 + 0x13c) & 0x30) != 0x10)) {
            bVar4 = true;
          }
          uVar8 = (int)plVar14 + 1;
          plVar14 = (longlong *)(ulonglong)uVar8;
        } while (uVar8 < uVar6);
      }
    }
  }
  return plVar11;
}



// FUNCTION 1450c4330 FUN_1450c4330 body=88 status=ok
// SIG undefined FUN_1450c4330(void)

void FUN_1450c4330(longlong param_1)

{
  FUN_1450c4410();
  if ((*(byte *)(param_1 + 0x13e) & 1) != 0) {
    if (DAT_14c790fd8 != 0) {
      FUN_145082c80(DAT_14c790fd8,param_1);
      FUN_145082ab0(DAT_14c790fd8,param_1);
    }
    FUN_1450d48f0(param_1,0,0,0,4);
  }
  return;
}



// FUNCTION 1450c4390 FUN_1450c4390 body=96 status=ok
// SIG undefined FUN_1450c4390(void)

void FUN_1450c4390(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x13d) & 0x40) == 0) {
    if (param_2 == 0) {
      FUN_1450c4410();
      return;
    }
    if (-1 < (char)*(byte *)(param_1 + 0x13d)) {
      lVar1 = FUN_1450c5340(param_1 + 0x110);
      if (lVar1 != 0) {
        (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
        FUN_1450c54f0(param_1 + 0x110,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1450c43f0 FUN_1450c43f0 body=22 status=ok
// SIG undefined FUN_1450c43f0(void)

undefined8 FUN_1450c43f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001450c43ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1450c4410 FUN_1450c4410 body=118 status=ok
// SIG undefined FUN_1450c4410(void)

void FUN_1450c4410(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != (ulonglong)*(uint *)(param_1 + 0x118) * 0x10 + lVar1) {
    do {
      (**(code **)(**(longlong **)(lVar1 + 8) + 8))();
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != (ulonglong)*(uint *)(param_1 + 0x118) * 0x10 + *(longlong *)(param_1 + 0x110))
    ;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x120) + 8))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1450c4490 FUN_1450c4490 body=234 status=ok
// SIG undefined FUN_1450c4490(void)

ulonglong FUN_1450c4490(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 local_res18 [4];
  undefined1 local_res20 [8];
  
  lVar5 = FUN_1450c4ae0();
  if (lVar5 != 0) {
    lVar5 = FUN_1450c38a0(param_1,*(undefined8 *)(param_2 + 0x10),local_res18,local_res20,lVar5 + 8,
                          lVar5 + 0x10);
    if (lVar5 != 0) {
      uVar4 = *(uint *)(param_2 + 0x38);
      if (uVar4 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) | (uint)(1L << ((ulonglong)uVar4 & 0x3f));
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)*(uint *)(param_2 + 0x38) * 2) = local_res18[0];
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
      }
      else {
        *(uint *)(param_2 + 0x38) = uVar4 + 1;
      }
      uVar4 = FUN_1450c1350(lVar5,param_2);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x18))();
      }
      return (ulonglong)uVar4;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_14538eb00(*plVar3 + ((ulonglong)*(uint *)(plVar3 + 1) * 5 + -5) * 8);
    *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  }
  uVar6 = FUN_14536e380(param_1,param_2);
  return uVar6;
}



// FUNCTION 1450c4580 FUN_1450c4580 body=1366 status=ok
// SIG undefined FUN_1450c4580(void)

undefined4 FUN_1450c4580(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined4 local_res20 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  
  lVar19 = 0;
  lVar17 = 0;
  if (*(int *)(param_2 + 0x90) != 0) {
    *(undefined4 *)(param_2 + 0x90) = 0;
  }
  piVar1 = DAT_14c791060;
  uVar3 = *(uint *)(param_2 + 0x308);
  if (uVar3 == 0) {
    lVar15 = FUN_1450c4ae0();
    if (lVar15 == 0) {
      return 2;
    }
    lVar16 = FUN_1450c38a0(param_1,*(undefined8 *)(param_2 + 0x10),local_res10,local_d8,lVar15 + 8,
                           lVar15 + 0x10);
    if (lVar16 != 0) {
      uVar3 = *(uint *)(param_2 + 0x38);
      if (uVar3 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ~(uint)(1L << ((ulonglong)uVar3 & 0x3f));
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)*(uint *)(param_2 + 0x38) * 2) = local_res10[0];
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
      }
      else {
        *(uint *)(param_2 + 0x38) = uVar3 + 1;
      }
    }
  }
  else {
    plVar20 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
    lVar15 = *plVar20 + ((ulonglong)*(uint *)(plVar20 + 1) * 5 + -5) * 8;
    do {
      while (iVar13 = *piVar1, iVar13 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        if (*piVar1 < 0) goto LAB_1450c4687;
        LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
      }
      LOCK();
      iVar2 = *piVar1;
      if (iVar13 == iVar2) {
        *piVar1 = iVar13 + 1;
      }
      UNLOCK();
    } while (iVar13 != iVar2);
LAB_1450c4687:
    if (piVar1[0x12] != 0) {
      for (lVar16 = *(longlong *)
                     (*(longlong *)(piVar1 + 0x10) +
                     ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
          (lVar18 = lVar19, lVar16 != 0 && (lVar18 = lVar16, *(uint *)(lVar16 + 0x10) != uVar3));
          lVar16 = *(longlong *)(lVar16 + 8)) {
      }
      lVar19 = lVar18;
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 0x14) = *(int *)(lVar18 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar13 = *piVar1;
    while (-1 < iVar13) {
      LOCK();
      iVar2 = *piVar1;
      if (iVar13 == iVar2) {
        *piVar1 = iVar13 + -1;
      }
      UNLOCK();
      if (iVar13 == iVar2) {
        if ((iVar13 + -1 == 0) && (0 < piVar1[0xc])) {
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
        }
        goto LAB_1450c470d;
      }
      iVar13 = *piVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450c470d:
    *(undefined4 *)(param_2 + 0x308) = 0;
    lVar16 = lVar19 + -0x10;
    if (lVar19 == 0) {
      lVar16 = 0;
    }
  }
  lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
  if (lVar19 != 0) {
    FUN_14538ec90(lVar19);
  }
  if (lVar16 == 0) {
    plVar20 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_14538eb00(*plVar20 + ((ulonglong)*(uint *)(plVar20 + 1) * 5 + -5) * 8);
    *(int *)(plVar20 + 1) = (int)plVar20[1] + -1;
    uVar14 = FUN_14536e380(param_1,param_2);
  }
  else {
    lVar17 = FUN_1450c38a0(param_1,*(undefined8 *)(param_2 + 0x10),local_res18,local_res20,
                           lVar15 + 8,lVar15 + 0x10);
    lVar15 = *(longlong *)(param_2 + 0x88);
    if (lVar17 == 0) {
      plVar20 = *(longlong **)(lVar15 + 0x18);
      FUN_14538eb00(*plVar20 + ((ulonglong)*(uint *)(plVar20 + 1) * 5 + -5) * 8);
      *(int *)(plVar20 + 1) = (int)plVar20[1] + -1;
      uVar14 = FUN_1450c1350(lVar16,param_2);
    }
    else {
      lVar18 = *(longlong *)(lVar15 + 0x18);
      *(undefined8 *)(lVar15 + 0x18) = 0;
      if (lVar18 != 0) {
        FUN_14538eca0();
      }
      local_88 = *(undefined8 *)(param_2 + 0x78);
      uVar4 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      uVar6 = *(undefined8 *)(param_2 + 0x48);
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      uVar8 = *(undefined8 *)(param_2 + 0x58);
      uVar9 = *(undefined8 *)(param_2 + 0x60);
      uVar10 = *(undefined8 *)(param_2 + 0x68);
      uVar11 = *(undefined8 *)(param_2 + 0x70);
      iVar13 = FUN_1450c1350(lVar16,param_2);
      if (iVar13 == 1) {
        *(byte *)(param_2 + 0x310) = *(byte *)(param_2 + 0x310) & 0xfd;
      }
      *(undefined8 *)(param_2 + 0x38) = uVar4;
      *(undefined8 *)(param_2 + 0x40) = uVar5;
      *(undefined8 *)(param_2 + 0x48) = uVar6;
      *(undefined8 *)(param_2 + 0x50) = uVar7;
      *(undefined8 *)(param_2 + 0x58) = uVar8;
      *(undefined8 *)(param_2 + 0x60) = uVar9;
      *(undefined8 *)(param_2 + 0x68) = uVar10;
      *(undefined8 *)(param_2 + 0x70) = uVar11;
      *(undefined4 *)(param_2 + 0x78) = (undefined4)local_88;
      *(undefined4 *)(param_2 + 0x7c) = local_88._4_4_;
      *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + -1;
      lVar15 = *(longlong *)(param_2 + 0x88);
      if (lVar19 != 0) {
        FUN_14538ec90(lVar19);
      }
      lVar18 = *(longlong *)(lVar15 + 0x18);
      *(longlong *)(lVar15 + 0x18) = lVar19;
      if (lVar18 != 0) {
        FUN_14538eca0();
      }
      *(undefined4 *)(param_2 + 0x308) = local_res20[0];
      uVar3 = *(uint *)(param_2 + 0x38);
      if (uVar3 < 0x20) {
        *(uint *)(param_2 + 0x7c) =
             *(uint *)(param_2 + 0x7c) & ~(uint)(1L << ((ulonglong)uVar3 & 0x3f));
        *(undefined2 *)(param_2 + 0x3c + (ulonglong)*(uint *)(param_2 + 0x38) * 2) = local_res18[0];
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
      }
      else {
        *(uint *)(param_2 + 0x38) = uVar3 + 1;
      }
      local_c8 = *(undefined8 *)(param_2 + 0x10);
      local_c0 = *(undefined4 *)(param_2 + 0x34);
      local_b8 = 0;
      local_b0 = 0xff;
      local_a8 = 0xff;
      local_a0 = 0;
      if (*(float *)(param_1 + 0x130) - *(float *)(param_1 + 300) != 0.0) {
        DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
      }
      if (((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
          ((**(uint **)(param_1 + 0x58) >> 0xf & 1) != 0)) ||
         (cVar12 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(param_1 + 0x28,0xf),
         cVar12 != '\0')) {
        plVar20 = (longlong *)(param_1 + 0x28);
        cVar12 = (**(code **)(*plVar20 + 0x18))(plVar20,0xf);
        if (cVar12 != '\0') {
          FUN_1450c0e90(plVar20,0xf);
        }
        if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
           ((**(uint **)(param_1 + 0x58) >> 0xf & 1) != 0)) {
          FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0xf,&local_c8);
        }
      }
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar14 = FUN_14536f3e0(param_1);
    }
  }
  if (lVar19 != 0) {
    FUN_14538eca0(lVar19);
  }
  if (lVar17 != 0) {
    LOCK();
    piVar1 = (int *)(lVar17 + 0x24);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(*(longlong *)(lVar17 + 0x10) + 0x18))();
    }
  }
  if (lVar16 != 0) {
    LOCK();
    piVar1 = (int *)(lVar16 + 0x24);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)(*(longlong *)(lVar16 + 0x10) + 0x18))();
    }
  }
  return uVar14;
}



// FUNCTION 1450c4ae0 FUN_1450c4ae0 body=384 status=ok
// SIG undefined FUN_1450c4ae0(void)

longlong * FUN_1450c4ae0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  short sVar8;
  byte bVar9;
  short sVar10;
  
  plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x18);
  uVar4 = *(uint *)(plVar5 + 1);
  if (*(uint *)((longlong)plVar5 + 0xc) <= uVar4) {
    cVar7 = FUN_1450c0a10(plVar5);
    if ((cVar7 == '\0') || (*(uint *)((longlong)plVar5 + 0xc) <= uVar4)) {
      return (longlong *)0x0;
    }
  }
  plVar2 = (longlong *)(*plVar5 + (ulonglong)*(uint *)(plVar5 + 1) * 0x28);
  *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) + 1;
  if (plVar2 != (longlong *)0x0) {
    FUN_14538eae0(plVar2);
    if (plVar2 != (longlong *)0x0) {
      if (param_1 != 0) {
        LOCK();
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        UNLOCK();
      }
      lVar6 = *plVar2;
      *plVar2 = param_1;
      if (lVar6 != 0) {
        LOCK();
        piVar1 = (int *)(lVar6 + 0x24);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
        }
      }
      if (*(short *)(param_1 + 0x134) != 0) {
        bVar9 = *(byte *)((longlong)plVar2 + 0x12) & 0xfd;
        sVar8 = 0;
        *(byte *)((longlong)plVar2 + 0x12) = bVar9;
        sVar10 = *(short *)(param_1 + 0x138) - *(short *)(param_1 + 0x136);
        if (sVar10 != 0) {
          DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
          bVar9 = *(byte *)((longlong)plVar2 + 0x12);
          sVar8 = (short)(int)((double)(uint)((ulonglong)DAT_14c791078 >> 0x21) *
                               4.656612875245797e-10 * (double)(int)sVar10 + 0.5);
        }
        sVar8 = *(short *)(param_1 + 0x136) + *(short *)(param_1 + 0x134) + sVar8;
        sVar10 = sVar8;
        if (sVar8 < 2) {
          sVar10 = 1;
        }
        *(short *)(plVar2 + 2) = sVar10;
        *(byte *)((longlong)plVar2 + 0x12) = 1 < sVar8 | bVar9 & 0xfe;
        return plVar2;
      }
      *(undefined2 *)(plVar2 + 2) = 1;
      *(byte *)((longlong)plVar2 + 0x12) = *(byte *)((longlong)plVar2 + 0x12) | 3;
    }
  }
  return plVar2;
}



// FUNCTION 1450c4c60 FUN_1450c4c60 body=306 status=ok
// SIG undefined FUN_1450c4c60(void)

undefined8 FUN_1450c4c60(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  ushort uVar9;
  
  plVar4 = *(longlong **)(param_1 + 0x108);
  if (*(short *)(param_1 + 0x13a) == 0) {
LAB_1450c4d67:
    uVar8 = 1;
  }
  else {
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
    uVar3 = *(uint *)(param_2 + 0x20);
    if (uVar3 < *(uint *)(param_2 + 0x24)) {
LAB_1450c4cb9:
      if (uVar3 < *(uint *)(param_2 + 0x24)) {
        uVar3 = *(uint *)(param_2 + 0x20);
        *(uint *)(param_2 + 0x20) = uVar3 + 1;
        puVar1 = (undefined2 *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar3 * 2);
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = param_3;
          FUN_145398d50(param_2,param_3);
          iVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,param_3);
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar7;
          sVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
          uVar9 = *(ushort *)(param_1 + 0x13a);
          if ((ushort)(sVar6 - 1U) <= *(ushort *)(param_1 + 0x13a)) {
            uVar9 = sVar6 - 1U;
          }
          if ((uint)uVar9 < *(uint *)(param_2 + 0x20)) {
            uVar2 = **(undefined2 **)(param_2 + 0x18);
            FUN_145398d70(param_2,uVar2);
            iVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar2);
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar7;
            *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
            if (1 < *(uint *)(param_2 + 0x20)) {
              memmove(*(void **)(param_2 + 0x18),(void *)((longlong)*(void **)(param_2 + 0x18) + 2),
                      (ulonglong)(*(uint *)(param_2 + 0x20) * 2 - 2));
            }
            *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
          }
          goto LAB_1450c4d67;
        }
      }
    }
    else {
      cVar5 = FUN_1450c2730(param_2 + 0x18);
      if (cVar5 != '\0') goto LAB_1450c4cb9;
    }
    *(undefined2 *)(param_2 + 0x12) = 0;
    uVar8 = 2;
  }
  return uVar8;
}



// FUNCTION 1450c4da0 FUN_1450c4da0 body=870 status=ok
// SIG undefined FUN_1450c4da0(void)

short FUN_1450c4da0(longlong param_1,longlong param_2,undefined1 *param_3,short *param_4)

{
  short *psVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined2 uVar5;
  short sVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  int iVar13;
  short sVar14;
  ushort uVar15;
  
  *param_3 = 1;
  plVar3 = *(longlong **)(param_1 + 0x108);
  if (*(short *)(param_2 + 0x12) == 0) {
    if ((param_4 != (short *)0x0) &&
       (((*(byte *)(param_4 + 1) & 1) == 0 ||
        (((*(byte *)(param_4 + 1) & 2) == 0 && (*param_4 = *param_4 + -1, *param_4 == 0)))))) {
      *param_3 = 0;
      return 0;
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
    *(undefined2 *)(param_2 + 0x12) = uVar5;
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
    FUN_145398d10(param_2,uVar8);
    puVar12 = *(undefined2 **)(param_2 + 0x18);
    iVar13 = *(int *)(param_2 + 8);
    sVar14 = *(short *)(param_2 + 0x10);
    if (puVar12 != puVar12 + *(uint *)(param_2 + 0x20)) {
      do {
        uVar5 = *puVar12;
        iVar9 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar5);
        iVar13 = iVar13 - iVar9;
        sVar14 = sVar14 + -1;
        FUN_145398d50(param_2,uVar5);
        puVar12 = puVar12 + 1;
      } while (puVar12 !=
               (undefined2 *)
               (*(longlong *)(param_2 + 0x18) + (ulonglong)*(uint *)(param_2 + 0x20) * 2));
    }
    if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0x10) {
      *(int *)(param_2 + 0xc) = iVar13;
    }
    *(short *)(param_2 + 0x10) = sVar14;
  }
  sVar14 = 0;
  iVar13 = -1;
  if ((*(byte *)(param_1 + 0x13d) & 8) == 0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    uVar15 = *(ushort *)(param_2 + 0x10);
    uVar11 = DAT_14c791078 >> 0x21;
    do {
      if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
        if (*(short *)(param_1 + 0x13a) != 0) {
LAB_1450c4f96:
          cVar4 = FUN_145398d90(param_2,sVar14);
          if (cVar4 != '\0') goto LAB_1450c4fa8;
        }
        iVar13 = iVar13 + 1;
      }
      else {
        cVar4 = FUN_145398cf0(param_2,sVar14);
        if (cVar4 == '\0') goto LAB_1450c4f96;
      }
LAB_1450c4fa8:
      sVar14 = sVar14 + 1;
    } while (iVar13 < (int)(uVar11 % (ulonglong)uVar15));
  }
  else {
    iVar9 = FUN_145398dc0(param_2);
    if (-1 < iVar9) {
      do {
        if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
          if (*(short *)(param_1 + 0x13a) != 0) {
LAB_1450c4f16:
            cVar4 = FUN_145398d90(param_2,sVar14);
            if (cVar4 != '\0') goto LAB_1450c4f35;
          }
          iVar10 = (**(code **)(*plVar3 + 0x50))(plVar3,sVar14);
          iVar13 = iVar13 + iVar10;
        }
        else {
          cVar4 = FUN_145398cf0(param_2,sVar14);
          if (cVar4 == '\0') goto LAB_1450c4f16;
        }
LAB_1450c4f35:
        sVar14 = sVar14 + 1;
      } while (iVar13 < iVar9);
    }
  }
  sVar14 = sVar14 + -1;
  if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
    cVar4 = FUN_145398cf0(param_2);
    if (cVar4 == '\0') {
      FUN_145398cd0(param_2,sVar14);
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    }
    FUN_1450c4c60(param_1,param_2,sVar14);
  }
  else {
    uVar15 = 1;
    if (*(ushort *)(param_1 + 0x13a) != 0) {
      uVar15 = *(ushort *)(param_1 + 0x13a);
    }
    iVar13 = (**(code **)(*plVar3 + 0x50))(plVar3,sVar14);
    *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + -1;
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iVar13;
    *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + -1;
    FUN_145398cd0(param_2,sVar14);
    uVar2 = *(uint *)(param_2 + 0x20);
    if ((uVar2 < *(uint *)(param_2 + 0x24)) ||
       ((cVar4 = FUN_1450c2730(param_2 + 0x18), cVar4 != '\0' && (uVar2 < *(uint *)(param_2 + 0x24))
        ))) {
      uVar2 = *(uint *)(param_2 + 0x20);
      *(uint *)(param_2 + 0x20) = uVar2 + 1;
      psVar1 = (short *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar2 * 2);
      if (psVar1 != (short *)0x0) {
        *psVar1 = sVar14;
        FUN_145398d50(param_2,sVar14);
        sVar6 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
        uVar2 = *(uint *)(param_2 + 0x20);
        uVar7 = sVar6 - 1U;
        if (uVar15 < (ushort)(sVar6 - 1U)) {
          uVar7 = uVar15;
        }
        if (uVar2 <= uVar7) {
          return sVar14;
        }
        puVar12 = *(undefined2 **)(param_2 + 0x18);
        uVar5 = *puVar12;
        if (1 < uVar2) {
          memmove(puVar12,puVar12 + 1,(ulonglong)(uVar2 * 2 - 2));
        }
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
        FUN_145398d70(param_2,uVar5);
        cVar4 = FUN_145398cf0(param_2,uVar5);
        if (cVar4 != '\0') {
          return sVar14;
        }
        iVar13 = (**(code **)(*plVar3 + 0x50))(plVar3,uVar5);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + iVar13;
        *(short *)(param_2 + 0x10) = *(short *)(param_2 + 0x10) + 1;
        return sVar14;
      }
    }
    *(undefined2 *)(param_2 + 0x12) = 0;
  }
  return sVar14;
}



// FUNCTION 1450c5110 FUN_1450c5110 body=226 status=ok
// SIG undefined FUN_1450c5110(void)

undefined2 FUN_1450c5110(longlong param_1,longlong param_2,undefined1 *param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  
  *param_3 = 1;
  if (*(char *)(param_2 + 8) == '\0') {
    if (*(short *)(param_2 + 10) != 0) {
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + -1;
      goto LAB_1450c51d3;
    }
    *(undefined2 *)(param_2 + 10) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    if (param_4 == (short *)0x0) goto LAB_1450c51d3;
    if ((*(byte *)(param_4 + 1) & 1) == 0) goto LAB_1450c51c4;
    if ((*(byte *)(param_4 + 1) & 2) != 0) goto LAB_1450c51d3;
    *param_4 = *param_4 + -1;
    sVar1 = *param_4;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))();
    sVar1 = *(short *)(param_2 + 10);
    if (sVar1 + 1 != iVar2) {
      *(short *)(param_2 + 10) = sVar1 + 1;
      goto LAB_1450c51d3;
    }
    if ((*(byte *)(param_1 + 0x13d) & 0x20) != 0) {
      *(undefined1 *)(param_2 + 8) = 0;
      *(short *)(param_2 + 10) = sVar1 + -1;
      goto LAB_1450c51d3;
    }
    *(undefined2 *)(param_2 + 10) = 0;
    if (param_4 == (short *)0x0) goto LAB_1450c51d3;
    if ((*(byte *)(param_4 + 1) & 1) == 0) goto LAB_1450c51c4;
    if ((*(byte *)(param_4 + 1) & 2) != 0) goto LAB_1450c51d3;
    *param_4 = *param_4 + -1;
    sVar1 = *param_4;
  }
  if (sVar1 == 0) {
LAB_1450c51c4:
    *param_3 = 0;
    return 0;
  }
LAB_1450c51d3:
  return *(undefined2 *)(param_2 + 10);
}



// FUNCTION 1450c5200 FUN_1450c5200 body=116 status=ok
// SIG undefined FUN_1450c5200(void)

byte FUN_1450c5200(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  byte bVar1;
  char cVar2;
  
  if ((*(byte *)(param_1 + 0x13c) & 0x30) == 0) {
    if (*(short *)(param_1 + 0x13a) == 0) {
      return 1;
    }
    bVar1 = FUN_145398d90(param_2,param_3);
    return bVar1 ^ 1;
  }
  cVar2 = FUN_145398cf0(param_2,param_3);
  if ((cVar2 == '\0') && (cVar2 = FUN_145398d90(param_2,param_3), cVar2 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1450c5280 FUN_1450c5280 body=190 status=ok
// SIG undefined FUN_1450c5280(void)

undefined8 FUN_1450c5280(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  _Var6 = (ulonglong)(iVar2 + uVar1) << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        if (uVar7 != 0) {
          lVar5 = 0;
          do {
            uVar3 = ((undefined8 *)(lVar5 + *param_1))[1];
            *(undefined8 *)(lVar5 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + *param_1);
            ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
            uVar7 = uVar7 - 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c5321;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450c5321:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c5340 FUN_1450c5340 body=156 status=ok
// SIG undefined FUN_1450c5340(void)

/* WARNING: Removing unreachable block (ram,0x0001450c53b4) */

ulonglong * FUN_1450c5340(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 1);
  iVar6 = 0;
  if (uVar5 != 0) {
    do {
      iVar3 = (uVar5 >> 1) + iVar6;
      puVar4 = (ulonglong *)((longlong)iVar3 * 0x10 + *param_1);
      uVar1 = *puVar4;
      if (uVar1 == param_2) {
        return puVar4;
      }
      uVar2 = uVar5 - 1;
      iVar3 = iVar3 + 1;
      if (param_2 <= uVar1) {
        uVar2 = uVar5;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      uVar5 = uVar2 >> 1;
    } while (uVar5 != 0);
  }
  return (ulonglong *)0x0;
}



// FUNCTION 1450c53e0 FUN_1450c53e0 body=264 status=ok
// SIG undefined FUN_1450c53e0(void)

ulonglong * FUN_1450c53e0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulonglong *puVar5;
  int iVar6;
  void *_Src;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 1);
  uVar8 = 0;
  if (uVar9 != 0) {
    do {
      iVar6 = (uVar9 >> 1) + uVar8;
      puVar5 = (ulonglong *)((longlong)iVar6 * 0x10 + *param_1);
      uVar1 = *puVar5;
      if (uVar1 == param_2) {
        return puVar5;
      }
      uVar4 = uVar9 - 1;
      uVar2 = iVar6 + 1;
      if (param_2 <= uVar1) {
        uVar4 = uVar9;
        uVar2 = uVar8;
      }
      uVar8 = uVar2;
      uVar9 = uVar4 >> 1;
    } while (uVar9 != 0);
  }
  puVar7 = (uint *)(param_1 + 1);
  uVar9 = *puVar7;
  if ((longlong)(int)uVar8 * 0x10 + *param_1 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
       (cVar3 = FUN_1450c5280(param_1), cVar3 == '\0')) {
      return (ulonglong *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) {
      return (ulonglong *)0x0;
    }
    uVar9 = *puVar7;
    *puVar7 = uVar9 + 1;
    puVar5 = (ulonglong *)((ulonglong)uVar9 * 0x10 + *param_1);
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar9) &&
        (cVar3 = FUN_1450c5280(param_1), cVar3 == '\0')) ||
       (puVar7 = (uint *)(param_1 + 1), *(uint *)((longlong)param_1 + 0xc) <= uVar9)) {
      return (ulonglong *)0x0;
    }
    _Src = (void *)(*param_1 + (ulonglong)uVar8 * 0x10);
    if (uVar8 < *puVar7) {
      memmove((void *)((longlong)_Src + 0x10),_Src,(ulonglong)((*puVar7 - uVar8) * 0x10));
    }
    *puVar7 = *puVar7 + 1;
    puVar5 = (ulonglong *)(*param_1 + (ulonglong)uVar8 * 0x10);
  }
  if (puVar5 != (ulonglong *)0x0) {
    *puVar5 = param_2;
  }
  return puVar5;
}



// FUNCTION 1450c54f0 FUN_1450c54f0 body=74 status=ok
// SIG undefined FUN_1450c54f0(void)

undefined8 FUN_1450c54f0(longlong *param_1)

{
  void *_Dst;
  void *pvVar1;
  
  _Dst = (void *)FUN_1450c5340();
  if (_Dst != (void *)0x0) {
    pvVar1 = (void *)((ulonglong)((int)param_1[1] - 1) * 0x10 + *param_1);
    if (_Dst < pvVar1) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x10),(ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff0)
             );
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    return 1;
  }
  return 0;
}



// FUNCTION 1450c5540 FUN_1450c5540 body=212 status=ok
// SIG undefined FUN_1450c5540(void)

undefined8 * FUN_1450c5540(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_149c26bb0;
  param_1[1] = &PTR_FUN_149c26e28;
  param_1[2] = &PTR_LAB_149c26e30;
  param_1[5] = &PTR_LAB_149c26e58;
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    iVar1 = (**(code **)(*(longlong *)param_1[0x21] + 0x18))();
    if (iVar1 != 0) {
      (**(code **)(*(longlong *)param_1[0x21] + 0x38))();
      *(byte *)((longlong)param_1 + 0x13d) = *(byte *)((longlong)param_1 + 0x13d) & 0xf7;
      FUN_1450c4410(param_1);
    }
    (**(code **)(*(longlong *)param_1[0x21] + 0x10))();
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x23) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x22]);
    param_1[0x22] = 0;
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  FUN_1453984c0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1450c5620 FUN_1450c5620 body=145 status=ok
// SIG undefined FUN_1450c5620(void)

longlong * FUN_1450c5620(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(4,0x48);
    if (pvVar2 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_1450d25b0(pvVar2);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x28) = plVar3;
      plVar3[1] = param_1;
      iVar1 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar1 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1450c56d0 FUN_1450c56d0 body=10 status=ok
// SIG undefined FUN_1450c56d0(void)

void FUN_1450c56d0(undefined8 param_1)

{
  FUN_145373550(param_1,0xd);
  return;
}



// FUNCTION 1450c5750 FUN_1450c5750 body=52 status=ok
// SIG undefined FUN_1450c5750(void)

undefined8 FUN_1450c5750(undefined8 param_1,ulonglong param_2)

{
  FUN_145373500();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1450c5790 FUN_1450c5790 body=673 status=ok
// SIG undefined FUN_1450c5790(void)

undefined4 FUN_1450c5790(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  bool bVar12;
  char local_res18 [8];
  undefined1 local_res20 [8];
  int *local_48 [2];
  
  lVar7 = DAT_14c791060;
  uVar11 = 1;
  do {
    while (iVar2 = *(int *)(lVar7 + 0x478), iVar2 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x480));
      if (*(int *)(lVar7 + 0x478) < 0) goto LAB_1450c57c9;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x480));
    }
    LOCK();
    bVar12 = iVar2 == *(int *)(lVar7 + 0x478);
    if (bVar12) {
      *(int *)(lVar7 + 0x478) = iVar2 + 1;
    }
    UNLOCK();
  } while (!bVar12);
LAB_1450c57c9:
  plVar10 = (longlong *)0x0;
  plVar9 = plVar10;
  if (*(uint *)(lVar7 + 0x4c0) != 0) {
    for (plVar3 = *(longlong **)
                   (*(longlong *)(lVar7 + 0x4b8) +
                   ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar7 + 0x4c0)) * 8);
        (plVar9 = plVar10, plVar3 != (longlong *)0x0 &&
        (plVar9 = plVar3, *(uint *)(plVar3 + 2) != param_1)); plVar3 = (longlong *)plVar3[1]) {
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar7 + 0x478);
  while (-1 < iVar2) {
    LOCK();
    bVar12 = iVar2 == *(int *)(lVar7 + 0x478);
    if (bVar12) {
      *(int *)(lVar7 + 0x478) = iVar2 + -1;
    }
    UNLOCK();
    if (bVar12) {
      if ((iVar2 + -1 == 0) && (0 < *(int *)(lVar7 + 0x4a8))) {
        SetEvent(*(HANDLE *)(lVar7 + 0x4b0));
      }
      goto LAB_1450c586a;
    }
    iVar2 = *(int *)(lVar7 + 0x478);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x480));
LAB_1450c586a:
  if (plVar9 != (longlong *)0x0) {
    return 1;
  }
  FUN_1450719c0(local_res20);
  lVar7 = DAT_14c791060;
  FUN_144d41d30(local_48,DAT_14c791060 + 0x478);
  local_res18[0] = '\0';
  bVar12 = false;
  plVar9 = AK::MemoryMgr::Malloc(2,0x38);
  cVar8 = '\0';
  if (plVar9 != (longlong *)0x0) {
    FUN_1453734e0(plVar9);
    *plVar9 = (longlong)&PTR_FUN_149c26f50;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    *(undefined4 *)(plVar9 + 6) = 0;
    *(uint *)(plVar9 + 2) = param_1;
    cVar8 = FUN_144d41e40(lVar7 + 0x4b8,plVar9,local_res18);
    if (cVar8 != '\0') {
      bVar12 = true;
      goto LAB_1450c59bf;
    }
    *(undefined4 *)(plVar9 + 2) = 0;
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    cVar8 = local_res18[0];
    if (iVar2 == 1) {
      if (*(code **)(*plVar9 + 0x18) == FUN_1450c56d0) {
        FUN_145373550();
        cVar8 = local_res18[0];
      }
      else {
        (**(code **)(*plVar9 + 0x18))(plVar9);
        cVar8 = local_res18[0];
      }
    }
  }
  plVar9 = plVar10;
  if (cVar8 != '\0') {
    if (*(uint *)(lVar7 + 0x4c0) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      for (plVar3 = *(longlong **)
                     (*(longlong *)(lVar7 + 0x4b8) +
                     ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar7 + 0x4c0)) * 8);
          (plVar9 = plVar10, plVar3 != (longlong *)0x0 &&
          (plVar9 = plVar3, *(uint *)(plVar3 + 2) != param_1)); plVar3 = (longlong *)plVar3[1]) {
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0x14) = *(int *)((longlong)plVar9 + 0x14) + 1;
        UNLOCK();
      }
    }
  }
LAB_1450c59bf:
  LOCK();
  *local_48[0] = *local_48[0] + 1;
  UNLOCK();
  if (*local_48[0] == 0) {
    local_48[0][1] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_48[0] + 2));
  if (plVar9 == (longlong *)0x0) {
    uVar11 = 0x34;
  }
  else if (bVar12) {
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *(undefined4 *)(plVar9 + 3) = *param_2;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
    *(undefined4 *)(plVar9 + 4) = uVar5;
    *(undefined4 *)((longlong)plVar9 + 0x24) = uVar6;
    plVar9[5] = *(longlong *)(param_2 + 4);
    *(undefined4 *)(plVar9 + 6) = param_2[6];
  }
  FUN_1450719f0(local_res20);
  return uVar11;
}



// FUNCTION 1450c5a40 FUN_1450c5a40 body=278 status=ok
// SIG undefined FUN_1450c5a40(void)

longlong FUN_1450c5a40(uint param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar3 = DAT_14c791060;
  do {
    while (iVar1 = *(int *)(lVar3 + 0x478), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x480));
      if (*(int *)(lVar3 + 0x478) < 0) goto LAB_1450c5a77;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x480));
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar3 + 0x478);
    if (bVar6) {
      *(int *)(lVar3 + 0x478) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_1450c5a77:
  lVar4 = 0;
  lVar5 = lVar4;
  if (*(uint *)(lVar3 + 0x4c0) != 0) {
    for (lVar2 = *(longlong *)
                  (*(longlong *)(lVar3 + 0x4b8) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar3 + 0x4c0)) * 8);
        (lVar5 = lVar4, lVar2 != 0 && (lVar5 = lVar2, *(uint *)(lVar2 + 0x10) != param_1));
        lVar2 = *(longlong *)(lVar2 + 8)) {
    }
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar3 + 0x478);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x480));
LAB_1450c5b16:
      if (lVar5 != 0) {
        lVar4 = lVar5 + 0x18;
      }
      return lVar4;
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar3 + 0x478);
    if (bVar6) {
      *(int *)(lVar3 + 0x478) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar3 + 0x4a8))) {
        SetEvent(*(HANDLE *)(lVar3 + 0x4b0));
      }
      goto LAB_1450c5b16;
    }
    iVar1 = *(int *)(lVar3 + 0x478);
  } while( true );
}



// FUNCTION 1450c5b60 FUN_1450c5b60 body=124 status=ok
// SIG undefined FUN_1450c5b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450c5b60(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  _DAT_14c79c38c = 0;
  _DAT_14c79c390 = 0;
  _DAT_14c79c394 = 0;
  DAT_14c79c3e8 = AK::MemoryMgr::Malloc(0,0x800);
  if (DAT_14c79c3e8 == (undefined8 *)0x0) {
    return 0x34;
  }
  DAT_14c79c3f0 = 0x40;
  puVar1 = DAT_14c79c3e8;
  DAT_14c79c3e0 = DAT_14c79c3e8;
  do {
    puVar3 = puVar1;
    uVar4 = uVar4 + 1;
    *puVar3 = puVar3 + 4;
    puVar1 = puVar3 + 4;
  } while (uVar4 < DAT_14c79c3f0);
  *puVar3 = 0;
  _DAT_14c79c450 = 0;
  uVar2 = FUN_1450aadb0();
  return uVar2;
}



// FUNCTION 1450c5be0 FUN_1450c5be0 body=471 status=ok
// SIG undefined FUN_1450c5be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c5be0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1450aae40();
  plVar2 = DAT_14c79c3b0;
  while (plVar2 != (longlong *)0x0) {
    DAT_14c79c3b0 = (longlong *)plVar2[0x48];
    if (DAT_14c79c3b0 == (longlong *)0x0) {
      DAT_14c79c3b0 = (longlong *)0x0;
      DAT_14c79c3a8 = 0;
    }
    plVar2[0x48] = 0;
    DAT_14c79c3a0 = DAT_14c79c3a0 + -1;
    FUN_145371770(plVar2);
    (**(code **)(plVar2[3] + 0x58))(plVar2 + 3,0);
    (**(code **)(*plVar2 + 8))(plVar2,0);
    AK::MemoryMgr::Free(0,plVar2);
    plVar2 = DAT_14c79c3b0;
  }
  DAT_14c79c3b0 = (longlong *)0x0;
  DAT_14c79c3a8 = 0;
  DAT_14c79c3a0 = 0;
  while (puVar4 = DAT_14c79c3d0, DAT_14c79c3d0 != (undefined8 *)0x0) {
    if (DAT_14c79c3d0 == DAT_14c79c3d8) {
      DAT_14c79c3d8 = (undefined8 *)0x0;
    }
    if ((DAT_14c79c3d0 < DAT_14c79c3e8) ||
       (DAT_14c79c3e8 + (ulonglong)DAT_14c79c3f0 * 4 <= DAT_14c79c3d0)) {
      DAT_14c79c3d0 = (undefined8 *)*DAT_14c79c3d0;
      AK::MemoryMgr::Free(0,puVar4);
      DAT_14c79c3f4 = DAT_14c79c3f4 + -1;
    }
    else {
      puVar3 = (undefined8 *)*DAT_14c79c3d0;
      *DAT_14c79c3d0 = DAT_14c79c3e0;
      DAT_14c79c3d0 = puVar3;
      DAT_14c79c3f4 = DAT_14c79c3f4 + -1;
      DAT_14c79c3e0 = puVar4;
    }
  }
  DAT_14c79c3d0 = (undefined8 *)0x0;
  puVar4 = DAT_14c79c3e0;
  puVar3 = DAT_14c79c3e8;
  while (puVar1 = puVar4, puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar1;
    if ((puVar1 < puVar3) || (puVar3 + (ulonglong)DAT_14c79c3f0 * 4 <= puVar1)) {
      AK::MemoryMgr::Free(0,puVar1);
      puVar3 = DAT_14c79c3e8;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    AK::MemoryMgr::Free(0,puVar3);
    DAT_14c79c3e8 = (undefined8 *)0x0;
  }
  DAT_14c79c3f0 = 0;
  DAT_14c79c3e0 = (undefined8 *)0x0;
  DAT_14c79c3d0 = (undefined8 *)0x0;
  DAT_14c79c3d8 = (undefined8 *)0x0;
  if (DAT_14c79c430 != (void *)0x0) {
    DAT_14c79c438 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79c430);
    DAT_14c79c430 = (void *)0x0;
    _DAT_14c79c43c = 0;
  }
  if (DAT_14c79c420 != (void *)0x0) {
    DAT_14c79c428 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79c420);
    DAT_14c79c420 = (void *)0x0;
    _DAT_14c79c42c = 0;
  }
  return;
}



// FUNCTION 1450c5dc0 FUN_1450c5dc0 body=1923 status=ok
// SIG undefined FUN_1450c5dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1450c5dc0(longlong *param_1,undefined4 *param_2,int *param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  int iVar20;
  char cVar21;
  bool bVar22;
  float fVar23;
  uint local_res18 [2];
  ushort local_res20 [4];
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar24;
  undefined8 uVar25;
  uint local_108;
  ushort local_104;
  uint local_100;
  int local_fc;
  undefined4 local_f8 [4];
  undefined8 local_e8;
  int local_e0;
  uint local_dc;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  float local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  float local_90 [20];
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_3 + 2);
  plVar12 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  iVar8 = FUN_14536ef90(param_1,local_res18);
  iVar20 = 1;
  if (iVar8 == 3) {
    if ((lVar11 == 0) ||
       ((iVar8 = (**(code **)(param_1[2] + 8))(param_1 + 2), iVar8 == 9 ||
        (cVar6 = (**(code **)(*param_1 + 0x240))(param_1,lVar11), iVar8 = iVar20, cVar6 != '\0'))))
    {
      iVar8 = 2;
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    }
    else {
LAB_1450c5e59:
      local_res18[0] = local_res18[0] & 0xffffff00;
    }
  }
  else {
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    if ((iVar8 != 0) && (iVar8 == 1)) goto LAB_1450c5e59;
  }
  plVar14 = param_1;
  FUN_1450c7400(local_90,param_1,*(undefined8 *)(param_3 + 4),local_f8);
  fVar4 = local_90[0];
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar17 = (uint)DAT_14c79c440;
  local_108 = 0x21;
  local_104 = DAT_14c79c440;
  if (uVar17 < (DAT_14c79c3a0 - _DAT_14c79c38c) + 1U) {
    lVar11 = 0;
    uVar9 = 0;
    uVar15 = (ulonglong)plVar14 & 0xffffffffffffff00;
    local_a0 = 0;
    uVar7 = 0;
    iVar10 = 2;
    local_fc = 2;
    local_100 = (uint)uVar15;
    plVar14 = DAT_14c79c430 + DAT_14c79c438;
    fVar3 = 101.0;
    lVar19 = local_a0;
    for (plVar16 = DAT_14c79c430; local_a0 = lVar19, plVar16 != plVar14; plVar16 = plVar16 + 1) {
      lVar2 = *plVar16;
      fVar23 = fVar3;
      iVar5 = local_fc;
      if ((((*(byte *)(lVar2 + 0x315) & 1) == 0) && ((*(byte *)(lVar2 + 0x221) & 1) == 0)) &&
         ((*(byte *)(lVar2 + 0x316) & 6) == 0)) {
        fVar1 = *(float *)(lVar2 + 800);
        local_res20[0] = uVar7 + 1;
        uVar7 = local_res20[0];
        if (fVar1 <= fVar4) {
          iVar10 = FUN_1450eb560(lVar2,local_a8);
          uVar15 = (ulonglong)local_100;
          uVar17 = (uint)local_104;
          lVar11 = lVar2;
          fVar23 = fVar1;
          uVar7 = local_res20[0];
          iVar5 = iVar10;
          lVar19 = lVar2;
          if (iVar10 == 0) {
            uVar15 = (ulonglong)(byte)local_100;
            if (local_res20[0] <= local_104) {
              uVar15 = 1;
            }
            local_100 = (uint)uVar15;
            lVar11 = local_a0;
            fVar23 = fVar3;
            iVar10 = local_fc;
            iVar5 = local_fc;
            lVar19 = local_a0;
          }
        }
      }
      local_a0 = lVar19;
      local_fc = iVar5;
      uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
      uVar9 = (undefined4)lVar11;
      fVar3 = fVar23;
      plVar12 = local_e8;
      lVar19 = local_a0;
    }
    if (uVar17 < uVar7 + 1) {
      local_a0._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
      local_e8 = (longlong *)CONCAT44(local_a0._4_4_,uVar9);
      if (((fVar4 < fVar3) || (fVar4 == fVar3)) || (local_e8 == (longlong *)0x0)) {
        if ((char)uVar15 == '\0') {
          iVar20 = 0x50;
        }
      }
      else if ((iVar10 != 0) && (iVar10 == 1)) {
        FUN_1450eb7c0(local_e8,2);
      }
    }
  }
  bVar22 = false;
  if ((param_2[6] & 0xffff0000) == 0x80000) {
    lVar11 = *(longlong *)(param_3 + 8);
    if (lVar11 == 0) {
LAB_1450c60a5:
      param_2 = (undefined4 *)0x0;
      iVar10 = 2;
    }
    else {
      param_2 = (undefined4 *)FUN_14536d3b0();
      if (param_2 != (undefined4 *)0x0) {
        piVar18 = (int *)(lVar11 + 8);
        uVar17 = 0;
        if (*(uint *)(lVar11 + 4) != 0) {
          do {
            if (param_2[1] == *piVar18) {
              iVar10 = piVar18[1] * 0x10000 + 1;
              if (piVar18[7] == 0) {
                lVar19 = *(longlong *)(piVar18 + 2);
                if (lVar19 == 0) {
                  if ((piVar18[6] == 0) || (*(longlong *)(piVar18 + 4) == 0)) goto LAB_1450c6088;
                  local_dc = local_res18[0] & 0xfffff98c | 0x18c;
                  local_e8 = (longlong *)CONCAT44(0xffffffff,*param_2);
                  local_e0 = piVar18[6];
                  FUN_14536d2e0(param_2,iVar10,*(longlong *)(piVar18 + 4),&local_e8);
                  iVar10 = 1;
                  goto LAB_1450c60ad;
                }
                uVar25 = 1;
                uVar13 = CONCAT44(uVar24,0xffffffff);
              }
              else {
                lVar19 = *(longlong *)(piVar18 + 2);
                uVar25 = 0;
                uVar13 = CONCAT44(uVar24,piVar18[7]);
              }
              FUN_14536d150(param_2,*param_2,iVar10,lVar19,uVar13,uVar25,1);
              iVar10 = 1;
              goto LAB_1450c60ad;
            }
LAB_1450c6088:
            piVar18 = piVar18 + 8;
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(uint *)(lVar11 + 4));
        }
        FUN_14536d100();
        AK::MemoryMgr::Free(0,param_2);
        goto LAB_1450c60a5;
      }
      iVar10 = 0x34;
    }
LAB_1450c60ad:
    local_res20[0] = local_res20[0] & 0xff00;
    if (iVar10 == 1) {
      bVar22 = true;
      goto LAB_1450c613f;
    }
LAB_1450c6466:
    cVar6 = '\0';
LAB_1450c6469:
    if ((param_3[0xd] == 0) || (plVar12 == (longlong *)0x0)) goto LAB_1450c63c1;
    FUN_1450b25f0(DAT_14c790fc0,param_3[0xd],plVar12,plVar12[4],local_res18);
  }
  else {
    local_res20[0] = local_res20[0] & 0xff00;
LAB_1450c613f:
    plVar12 = (longlong *)
              (**(code **)(**(longlong **)(param_3 + 2) + 0x20))
                        (*(longlong **)(param_3 + 2),param_1,param_2,param_3,local_90);
    if (plVar12 == (longlong *)0x0) {
      if ((bVar22) && (param_2 != (undefined4 *)0x0)) {
        FUN_14536d100();
        AK::MemoryMgr::Free(0,param_2);
      }
      iVar10 = 2;
      goto LAB_1450c6466;
    }
    cVar6 = (char)local_res18[0];
    if (*param_3 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(longlong *)(param_3 + 0x22) + 0x10);
    }
    iVar10 = FUN_1450e6620(plVar12 + 3,local_f8[0],uVar13,(char)local_res18[0],&local_108,
                           param_3 + 0x2c,local_res20);
    if (iVar10 != 1) goto LAB_1450c6466;
    if (((char)local_res20[0] == '\0') || (iVar8 == 0)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    local_d8 = *(undefined8 *)(param_3 + 4);
    local_b8 = local_90[0];
    uStack_c8 = 0;
    local_b4 = 1;
    if (((*(byte *)((longlong)plVar12 + 0x316) & 2) != 0) || (local_b0 = 0x100, !bVar22)) {
      local_b0 = 0;
    }
    if ((*(byte *)(plVar12 + 0x44) & 0x40) == 0) {
      local_d0 = plVar12 + 0x6e;
    }
    else {
      local_d0 = (longlong *)0x0;
    }
    local_c0 = plVar12;
    iVar8 = (**(code **)(*param_1 + 0x108))(param_1,&local_d8,1,0);
    cVar21 = iVar8 != 2;
    if (((bool)cVar21) && ((iVar8 == 0x50 || (iVar20 == 0x50)))) {
      *(byte *)((longlong)plVar12 + 0x221) = *(byte *)((longlong)plVar12 + 0x221) | 1;
      cVar21 = cVar6;
    }
    if (cVar21 == '\0') {
      local_108 = 0x20;
      iVar10 = 3;
      cVar6 = '\x01';
      goto LAB_1450c6469;
    }
    iVar10 = (**(code **)(plVar12[3] + 0x50))();
    bVar22 = iVar10 != 1;
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    cVar6 = '\x01';
    if (!bVar22) {
      if ((*(byte *)(plVar12 + 0x44) & 1) == 0) {
        (**(code **)(plVar12[3] + 0x68))(plVar12 + 3,param_3 + 0x2c);
      }
      else {
        (**(code **)(plVar12[3] + 0x70))(plVar12 + 3);
        if ((*(byte *)(plVar12 + 0x44) & 0x10) != 0) {
          (**(code **)(plVar12[3] + 0x78))(plVar12 + 3);
        }
      }
      FUN_1450ebee0(plVar12,param_3 + 0x68,1);
      lVar11 = *(longlong *)(param_3 + 0x22);
      if (lVar11 != 0) {
        if (plVar12[0x12] != 0) {
          FUN_14538e810(plVar12[0x12],1,lVar11 + 0x28);
        }
        *(longlong **)(*(longlong *)(param_3 + 0x22) + 0x10) = plVar12 + 0x2d;
      }
      iVar8 = param_3[0x20];
      uVar13 = *(undefined8 *)(param_3 + 6);
      FUN_1450ea570(plVar12);
      iVar10 = FUN_1450ea800(plVar12,uVar13,iVar8 == 1,0);
      if (iVar10 == 1) {
        plVar12[0x48] = 0;
        plVar14 = plVar12;
        if (DAT_14c79c3b0 != (longlong *)0x0) {
          DAT_14c79c3a8[0x48] = (longlong)plVar12;
          plVar14 = DAT_14c79c3b0;
        }
        DAT_14c79c3b0 = plVar14;
        DAT_14c79c3a0 = DAT_14c79c3a0 + 1;
        DAT_14c79c3a8 = plVar12;
      }
      plVar14 = (longlong *)(param_3 + 0x22);
      if (*plVar14 != 0) {
        uVar13 = FUN_1450eb1c0(plVar12);
        *(undefined8 *)(*plVar14 + 8) = uVar13;
        uVar13 = FUN_1450eb1b0(plVar12);
        *(undefined8 *)*plVar14 = uVar13;
      }
      if (iVar10 == 1) {
        return 1;
      }
      cVar6 = (char)local_res18[0];
    }
    if (bVar22) goto LAB_1450c6469;
LAB_1450c63c1:
    if (plVar12 == (longlong *)0x0) {
      if (cVar6 != '\0') {
        local_c0 = (longlong *)0x0;
        local_b8 = 0.0;
        local_d0 = (longlong *)0x0;
        uStack_c8 = 0;
        local_b4 = 1;
        local_b0 = 0x100;
        local_d8 = *(undefined8 *)(param_3 + 4);
        (**(code **)(*param_1 + 0x110))(param_1,&local_d8);
      }
      goto LAB_1450c6400;
    }
  }
  if (cVar6 == '\0') {
    *(byte *)((longlong)plVar12 + 0x315) = *(byte *)((longlong)plVar12 + 0x315) | 0x10;
  }
  (**(code **)(plVar12[3] + 0x58))(plVar12 + 3,1);
  (**(code **)(*plVar12 + 8))(plVar12,0);
  AK::MemoryMgr::Free(0,plVar12);
LAB_1450c6400:
  if (iVar10 == 3) {
    if ((*(byte *)(param_3 + 0xc4) & 2) == 0) {
      if (local_108 == 0x20) {
        local_108 = 0x23;
      }
      else if (local_108 == 0x21) {
        local_108 = 0x24;
      }
      else if (local_108 == 0x22) {
        local_108 = 0x25;
      }
    }
  }
  else {
    local_108 = ~(uint)(*(byte *)(param_3 + 0xc4) >> 1) & 1 | 0x1e;
  }
  FUN_1450ee390(param_1,local_108,*(undefined8 *)(*(longlong *)(param_3 + 4) + 0x58),param_3 + 8,
                param_3 + 0xe);
  return iVar10;
}



// FUNCTION 1450c6550 FUN_1450c6550 body=135 status=ok
// SIG undefined FUN_1450c6550(void)

void FUN_1450c6550(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  for (lVar1 = DAT_14c79c3b0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
    cVar2 = FUN_1450eb8b0(lVar1,param_1);
    if (cVar2 != '\0') {
      local_res10 = 0;
      local_res14 = 4;
      FUN_1450eaa80(lVar1,&local_res10,1);
      FUN_145081890(DAT_14c790fd8,*(undefined8 *)(lVar1 + 0x1e8),0,0);
    }
  }
  FUN_1450a8270(param_1);
  return;
}



// FUNCTION 1450c65e0 FUN_1450c65e0 body=138 status=ok
// SIG undefined FUN_1450c65e0(void)

void FUN_1450c65e0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  for (lVar1 = DAT_14c79c3b0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
    cVar2 = FUN_1450eb910(lVar1,param_1,1);
    if (cVar2 != '\0') {
      local_res10 = 0;
      local_res14 = 4;
      FUN_1450eaa80(lVar1,&local_res10,1);
      FUN_145081890(DAT_14c790fd8,*(undefined8 *)(lVar1 + 0x1e8),0,0);
    }
  }
  FUN_1450a8410(param_1);
  return;
}



// FUNCTION 1450c6670 FUN_1450c6670 body=312 status=ok
// SIG undefined FUN_1450c6670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c6670(undefined8 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  puVar5 = DAT_14c79c3b0;
  if (DAT_14c79c3c8 != (longlong *)0x0) {
    plVar9 = DAT_14c79c3c8;
    do {
      DAT_14c79c38a = '\0';
      LOCK();
      DAT_14c79c398 = plVar9;
      *(int *)((longlong)plVar9 + 0x24) = *(int *)((longlong)plVar9 + 0x24) + 1;
      UNLOCK();
      (**(code **)(*plVar9 + 0x88))(plVar9,param_1);
      plVar3 = (longlong *)plVar9[8];
      DAT_14c79c398 = (longlong *)0x0;
      if (DAT_14c79c38a != '\0') {
        DAT_14c79c38a = '\0';
        plVar6 = DAT_14c79c3c8;
        plVar7 = DAT_14c79c3c8;
        plVar8 = (longlong *)0x0;
        if (DAT_14c79c3c8 == (longlong *)0x0) {
LAB_1450c6706:
          if (plVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)plVar7[8];
            if (plVar7 != DAT_14c79c3c8) {
              plVar8[8] = plVar7[8];
              plVar6 = DAT_14c79c3c8;
            }
            DAT_14c79c3c8 = plVar6;
            if (plVar7 == DAT_14c79c3c0) {
              DAT_14c79c3c0 = plVar8;
            }
            _DAT_14c79c3b8 = _DAT_14c79c3b8 + -1;
          }
        }
        else {
          do {
            plVar7 = plVar6;
            if (plVar7 == plVar9) goto LAB_1450c6706;
            plVar6 = (longlong *)plVar7[8];
            plVar8 = plVar7;
          } while ((longlong *)plVar7[8] != (longlong *)0x0);
        }
      }
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(plVar9[2] + 0x18))();
      }
      plVar9 = plVar3;
      puVar5 = DAT_14c79c3b0;
    } while (plVar3 != (longlong *)0x0);
  }
  while (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar5[0x48];
    if (param_2 == '\0') {
      FUN_1450ea5c0();
      puVar5 = puVar4;
    }
    else {
      (**(code **)*puVar5)(puVar5,0,1);
      puVar5 = puVar4;
    }
  }
  return;
}



// FUNCTION 1450c67b0 FUN_1450c67b0 body=119 status=ok
// SIG undefined FUN_1450c67b0(void)

void FUN_1450c67b0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  for (lVar1 = DAT_14c79c3b0; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
    cVar2 = FUN_1450eb910(lVar1,param_1,1);
    if (cVar2 != '\0') {
      *(undefined4 *)(lVar1 + 0x388) = 0;
      local_res10 = 0;
      local_res14 = 4;
      FUN_1450eaa80(lVar1,&local_res10,0);
    }
  }
  FUN_1450a8410(param_1);
  return;
}



// FUNCTION 1450c6830 FUN_1450c6830 body=70 status=ok
// SIG undefined FUN_1450c6830(void)

void FUN_1450c6830(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (DAT_14c79c3b0 == 0) {
    DAT_14c79c3a0 = DAT_14c79c3a0 + 1;
    DAT_14c79c3b0 = param_1;
    DAT_14c79c3a8 = param_1;
    return;
  }
  *(longlong *)(DAT_14c79c3a8 + 0x240) = param_1;
  DAT_14c79c3a0 = DAT_14c79c3a0 + 1;
  DAT_14c79c3a8 = param_1;
  return;
}



// FUNCTION 1450c6880 FUN_1450c6880 body=101 status=ok
// SIG undefined FUN_1450c6880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c6880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_14c79c3c8;
  do {
    if (lVar1 == 0) {
LAB_1450c68a5:
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (DAT_14c79c3c8 != 0) {
        *(longlong *)(DAT_14c79c3c0 + 0x40) = param_1;
        _DAT_14c79c3b8 = _DAT_14c79c3b8 + 1;
        DAT_14c79c3c0 = param_1;
        return;
      }
      _DAT_14c79c3b8 = _DAT_14c79c3b8 + 1;
      DAT_14c79c3c8 = param_1;
      DAT_14c79c3c0 = param_1;
      return;
    }
    if (lVar1 == param_1) {
      if (lVar1 != 0) {
        return;
      }
      goto LAB_1450c68a5;
    }
    lVar1 = *(longlong *)(lVar1 + 0x40);
  } while( true );
}



// FUNCTION 1450c68f0 FUN_1450c68f0 body=97 status=ok
// SIG undefined FUN_1450c68f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c68f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14c79c398 == param_1) {
    DAT_14c79c38a = 1;
    return;
  }
  lVar1 = DAT_14c79c3c8;
  lVar3 = 0;
  if (DAT_14c79c3c8 != 0) {
    while (lVar2 = lVar1, lVar2 != param_1) {
      lVar1 = *(longlong *)(lVar2 + 0x40);
      lVar3 = lVar2;
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        return;
      }
    }
    lVar1 = *(longlong *)(lVar2 + 0x40);
    if (lVar2 != DAT_14c79c3c8) {
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar2 + 0x40);
      lVar1 = DAT_14c79c3c8;
    }
    DAT_14c79c3c8 = lVar1;
    if (lVar2 == DAT_14c79c3c0) {
      DAT_14c79c3c0 = lVar3;
    }
    _DAT_14c79c3b8 = _DAT_14c79c3b8 + -1;
  }
  return;
}



// FUNCTION 1450c6960 FUN_1450c6960 body=7 status=ok
// SIG undefined FUN_1450c6960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c6960(void)

{
  _DAT_14c79c38c = _DAT_14c79c38c + -1;
  return;
}



// FUNCTION 1450c6970 FUN_1450c6970 body=7 status=ok
// SIG undefined FUN_1450c6970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c6970(void)

{
  _DAT_14c79c390 = _DAT_14c79c390 + 1;
  return;
}



// FUNCTION 1450c6980 FUN_1450c6980 body=7 status=ok
// SIG undefined FUN_1450c6980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450c6980(void)

{
  _DAT_14c79c390 = _DAT_14c79c390 + -1;
  return;
}



// FUNCTION 1450c6990 FUN_1450c6990 body=526 status=ok
// SIG undefined FUN_1450c6990(void)

undefined4
FUN_1450c6990(longlong *param_1,ushort param_2,float param_3,longlong param_4,char param_5,
             char param_6,undefined8 *param_7,undefined4 param_8)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ushort uVar12;
  float fVar13;
  int local_98;
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (param_1 != (longlong *)0x0) {
    bVar4 = false;
    iVar10 = 2;
    plVar9 = (longlong *)*param_1;
    uVar12 = 0;
    local_90 = 0;
    plVar1 = plVar9 + *(uint *)(param_1 + 1);
    local_98 = 2;
    bVar5 = false;
    fVar6 = 101.0;
    lVar7 = 0;
    iVar8 = local_98;
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar3 = *plVar9;
      lVar11 = lVar7;
      fVar13 = fVar6;
      local_98 = iVar8;
      if ((((param_4 == 0) || (*(longlong *)(lVar3 + 0x20) == param_4)) &&
          ((*(byte *)(lVar3 + 0x315) & 1) == 0)) &&
         (((*(byte *)(lVar3 + 0x221) & 1) == 0 && ((*(byte *)(lVar3 + 0x316) & 6) == 0)))) {
        fVar2 = *(float *)(lVar3 + 800);
        uVar12 = uVar12 + 1;
        if (((fVar2 <= param_3) &&
            ((local_98 = 2, lVar11 = lVar3, fVar13 = fVar2, iVar10 = local_98, param_6 != '\0' &&
             (local_98 = FUN_1450eb560(lVar3,local_94), iVar10 = local_98, bVar4 = bVar5,
             local_98 == 0)))) &&
           (lVar11 = lVar7, fVar13 = fVar6, local_98 = iVar8, iVar10 = iVar8, uVar12 <= param_2)) {
          bVar5 = true;
          bVar4 = true;
        }
      }
      fVar6 = fVar13;
      lVar7 = lVar11;
      iVar8 = local_98;
    }
    if ((uint)param_2 < uVar12 + 1) {
      local_78 = (undefined4)lVar7;
      local_90._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
      uStack_74 = local_90._4_4_;
      if ((param_3 < fVar6) || (((param_5 != '\0' && (param_3 == fVar6)) || (lVar7 == 0)))) {
        if (!bVar4) {
          if (param_6 == '\0') {
            return 2;
          }
          return 0x50;
        }
      }
      else {
        *param_7 = *(undefined8 *)(lVar7 + 0x1e8);
        if ((param_6 == '\0') || ((iVar10 != 0 && (iVar10 == 1)))) {
          local_90 = lVar7;
          FUN_1450eb7c0(lVar7,param_8);
        }
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1450c6ba0 FUN_1450c6ba0 body=431 status=ok
// SIG undefined FUN_1450c6ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1450c6ba0(float param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  longlong *plVar10;
  ushort uVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  undefined1 local_res10 [8];
  
  *param_2 = 0x21;
  uVar8 = DAT_14c79c440;
  uVar13 = (uint)DAT_14c79c440;
  if ((DAT_14c79c3a0 - _DAT_14c79c38c) + 1U <= uVar13) {
    return 1;
  }
  bVar4 = false;
  plVar1 = DAT_14c79c430 + DAT_14c79c438;
  uVar11 = 0;
  fVar5 = 101.0;
  iVar6 = 2;
  lVar7 = 0;
  for (plVar10 = DAT_14c79c430; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar3 = *plVar10;
    lVar12 = lVar7;
    fVar14 = fVar5;
    iVar9 = iVar6;
    if ((((*(byte *)(lVar3 + 0x315) & 1) == 0) && ((*(byte *)(lVar3 + 0x221) & 1) == 0)) &&
       ((*(byte *)(lVar3 + 0x316) & 6) == 0)) {
      fVar2 = *(float *)(lVar3 + 800);
      uVar11 = uVar11 + 1;
      if (((fVar2 <= param_1) &&
          (iVar9 = FUN_1450eb560(lVar3,local_res10), lVar12 = lVar3, fVar14 = fVar2, iVar9 == 0)) &&
         (lVar12 = lVar7, fVar14 = fVar5, iVar9 = iVar6, uVar11 <= uVar8)) {
        bVar4 = true;
      }
    }
    fVar5 = fVar14;
    iVar6 = iVar9;
    lVar7 = lVar12;
  }
  if (uVar13 < uVar11 + 1) {
    if (((param_1 < fVar5) || (param_1 == fVar5)) || (lVar7 == 0)) {
      if (!bVar4) {
        return 0x50;
      }
    }
    else if ((iVar6 != 0) && (iVar6 == 1)) {
      FUN_1450eb7c0(lVar7,2,lVar7,param_4,lVar7);
    }
  }
  return 1;
}



// FUNCTION 1450c6d50 FUN_1450c6d50 body=159 status=ok
// SIG undefined FUN_1450c6d50(void)

undefined8 FUN_1450c6d50(longlong *param_1,longlong param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_res18 [16];
  
  iVar2 = FUN_14536ef90(param_1,local_res18);
  *param_3 = iVar2;
  if (iVar2 == 3) {
    if (((param_2 != 0) && (iVar2 = (**(code **)(param_1[2] + 8))(param_1 + 2), iVar2 != 9)) &&
       (cVar1 = (**(code **)(*param_1 + 0x240))(param_1,param_2), cVar1 == '\0')) {
      *param_3 = 1;
      return 0;
    }
    *param_3 = 2;
  }
  else if (iVar2 != 0) {
    if (iVar2 == 1) {
      return 0;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1450c6df0 FUN_1450c6df0 body=220 status=ok
// SIG undefined FUN_1450c6df0(void)

undefined8
FUN_1450c6df0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,char param_5,
             undefined4 *param_6,longlong param_7,char param_8)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  
  local_28 = 0;
  local_14 = 1;
  local_10 = 0;
  if (((*(byte *)(param_7 + 0x316) & 2) != 0) || (local_f = 1, param_8 == '\0')) {
    local_f = 0;
  }
  if ((*(byte *)(param_7 + 0x220) & 0x40) == 0) {
    local_30 = param_7 + 0x370;
  }
  else {
    local_30 = 0;
  }
  local_20 = param_7;
  local_38 = param_2;
  local_18 = param_3;
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,&local_38,1,0);
  cVar3 = iVar1 != 2;
  if (((bool)cVar3) && ((iVar1 == 0x50 || (param_4 == 0x50)))) {
    *(byte *)(param_7 + 0x221) = *(byte *)(param_7 + 0x221) | 1;
    cVar3 = param_5;
  }
  if (cVar3 == '\0') {
    *param_6 = 0x20;
    return 3;
  }
  uVar2 = (**(code **)(*(longlong *)(param_7 + 0x18) + 0x50))(param_7 + 0x18);
  return uVar2;
}



// FUNCTION 1450c6ed0 FUN_1450c6ed0 body=164 status=ok
// SIG undefined FUN_1450c6ed0(void)

void FUN_1450c6ed0(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_20 = *param_2;
  if (local_20 != 0) {
    if (param_3 == '\0') {
      *(byte *)(local_20 + 0x315) = *(byte *)(local_20 + 0x315) | 0x10;
    }
    (**(code **)(*(longlong *)(*param_2 + 0x18) + 0x58))((longlong *)(*param_2 + 0x18),1);
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(0,plVar1);
    }
    *param_2 = 0;
    return;
  }
  if (param_3 != '\0') {
    local_30 = 0;
    uStack_28 = 0;
    local_18 = 0;
    local_14 = 1;
    local_10 = 0x100;
    local_38 = param_4;
    (**(code **)(*param_1 + 0x110))(0,&local_38);
  }
  return;
}



// FUNCTION 1450c6f80 FUN_1450c6f80 body=732 status=ok
// SIG undefined FUN_1450c6f80(void)

void FUN_1450c6f80(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  puVar6 = (undefined8 *)0x0;
  if (DAT_14c79c3e0 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(0,0x20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = DAT_14c79c3e0;
      DAT_14c79c3e0 = puVar2;
      goto LAB_1450c6fe5;
    }
  }
  else {
LAB_1450c6fe5:
    puVar2 = DAT_14c79c3e0;
    if (DAT_14c79c3d8 != (undefined8 *)0x0) {
      *DAT_14c79c3d8 = DAT_14c79c3e0;
      puVar2 = DAT_14c79c3d0;
    }
    DAT_14c79c3d0 = puVar2;
    DAT_14c79c3d8 = DAT_14c79c3e0;
    puVar2 = (undefined8 *)*DAT_14c79c3e0;
    *DAT_14c79c3e0 = 0;
    DAT_14c79c3e0 = puVar2;
    DAT_14c79c3f4 = DAT_14c79c3f4 + 1;
    puVar2 = DAT_14c79c3d8 + 1;
    if (DAT_14c79c3d8 + 1 != (undefined8 *)0x0) goto LAB_1450c7226;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  puVar2 = DAT_14c79c3d0;
  while (DAT_14c79c3d0 = puVar2, DAT_14c79c3f4 != 0) {
    FUN_1450eb3a0(puVar2[1],*(undefined4 *)(puVar2 + 2),*(undefined4 *)((longlong)puVar2 + 0x14),
                  *(undefined4 *)(puVar2 + 3));
    if (*(int *)(puVar2 + 2) == 4) {
      puVar4 = DAT_14c79c3b0;
      puVar3 = DAT_14c79c3b0;
      puVar5 = puVar6;
      if (DAT_14c79c3b0 == (undefined8 *)0x0) {
LAB_1450c70ab:
        if (puVar3 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)puVar3[0x48];
          if (puVar3 != DAT_14c79c3b0) {
            puVar5[0x48] = (undefined8 *)puVar3[0x48];
            puVar4 = DAT_14c79c3b0;
          }
          DAT_14c79c3b0 = puVar4;
          if (puVar3 == DAT_14c79c3a8) {
            DAT_14c79c3a8 = puVar5;
          }
          DAT_14c79c3a0 = DAT_14c79c3a0 + -1;
        }
      }
      else {
        do {
          puVar3 = puVar4;
          if (puVar3 == (undefined8 *)puVar2[1]) goto LAB_1450c70ab;
          puVar4 = (undefined8 *)puVar3[0x48];
          puVar5 = puVar3;
        } while ((undefined8 *)puVar3[0x48] != (undefined8 *)0x0);
      }
      plVar1 = (longlong *)puVar2[1];
      FUN_145371770(plVar1);
      (**(code **)(plVar1[3] + 0x58))(plVar1 + 3,0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,0);
        AK::MemoryMgr::Free(0,plVar1);
      }
    }
    puVar2 = DAT_14c79c3d0;
    if (DAT_14c79c3d0 != (undefined8 *)0x0) {
      if (DAT_14c79c3d0 == DAT_14c79c3d8) {
        DAT_14c79c3d8 = (undefined8 *)0x0;
      }
      if ((DAT_14c79c3d0 < DAT_14c79c3e8) ||
         (DAT_14c79c3e8 + (ulonglong)DAT_14c79c3f0 * 4 <= DAT_14c79c3d0)) {
        DAT_14c79c3d0 = (undefined8 *)*DAT_14c79c3d0;
        AK::MemoryMgr::Free(0,puVar2);
      }
      else {
        puVar4 = (undefined8 *)*DAT_14c79c3d0;
        *DAT_14c79c3d0 = DAT_14c79c3e0;
        DAT_14c79c3d0 = puVar4;
        DAT_14c79c3e0 = puVar2;
      }
      DAT_14c79c3f4 = DAT_14c79c3f4 + -1;
      puVar2 = DAT_14c79c3d0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  if (DAT_14c79c3e0 == (undefined8 *)0x0) {
    puVar4 = AK::MemoryMgr::Malloc(0,0x20);
    puVar2 = puVar6;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1450c7226;
    *puVar4 = DAT_14c79c3e0;
    DAT_14c79c3e0 = puVar4;
  }
  puVar6 = DAT_14c79c3e0;
  if (DAT_14c79c3d8 != (undefined8 *)0x0) {
    *DAT_14c79c3d8 = DAT_14c79c3e0;
    puVar6 = DAT_14c79c3d0;
  }
  DAT_14c79c3d0 = puVar6;
  DAT_14c79c3d8 = DAT_14c79c3e0;
  puVar6 = (undefined8 *)*DAT_14c79c3e0;
  *DAT_14c79c3e0 = 0;
  DAT_14c79c3e0 = puVar6;
  DAT_14c79c3f4 = DAT_14c79c3f4 + 1;
  puVar2 = DAT_14c79c3d8 + 1;
LAB_1450c7226:
  *(undefined4 *)(puVar2 + 2) = param_4;
  *puVar2 = param_1;
  *(undefined4 *)(puVar2 + 1) = param_2;
  *(undefined4 *)((longlong)puVar2 + 0xc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001450c7255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  return;
}



// FUNCTION 1450c7260 FUN_1450c7260 body=407 status=ok
// SIG undefined FUN_1450c7260(void)

void FUN_1450c7260(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  if (DAT_14c79c3f4 != 0) {
    do {
      puVar2 = DAT_14c79c3d0;
      FUN_1450eb3a0(DAT_14c79c3d0[1],*(undefined4 *)(DAT_14c79c3d0 + 2),
                    *(undefined4 *)((longlong)DAT_14c79c3d0 + 0x14),
                    *(undefined4 *)(DAT_14c79c3d0 + 3));
      if (*(int *)(puVar2 + 2) == 4) {
        lVar3 = DAT_14c79c3b0;
        lVar5 = DAT_14c79c3b0;
        lVar6 = 0;
        if (DAT_14c79c3b0 == 0) {
LAB_1450c72eb:
          if (lVar5 != 0) {
            lVar3 = *(longlong *)(lVar5 + 0x240);
            if (lVar5 != DAT_14c79c3b0) {
              *(longlong *)(lVar6 + 0x240) = *(longlong *)(lVar5 + 0x240);
              lVar3 = DAT_14c79c3b0;
            }
            DAT_14c79c3b0 = lVar3;
            if (lVar5 == DAT_14c79c3a8) {
              DAT_14c79c3a8 = lVar6;
            }
            DAT_14c79c3a0 = DAT_14c79c3a0 + -1;
          }
        }
        else {
          do {
            lVar5 = lVar3;
            if (lVar5 == puVar2[1]) goto LAB_1450c72eb;
            lVar3 = *(longlong *)(lVar5 + 0x240);
            lVar6 = lVar5;
          } while (*(longlong *)(lVar5 + 0x240) != 0);
        }
        plVar1 = (longlong *)puVar2[1];
        FUN_145371770(plVar1);
        (**(code **)(plVar1[3] + 0x58))(plVar1 + 3,0);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,0);
          AK::MemoryMgr::Free(0,plVar1);
        }
      }
      puVar2 = DAT_14c79c3d0;
      if (DAT_14c79c3d0 != (undefined8 *)0x0) {
        if (DAT_14c79c3d0 == DAT_14c79c3d8) {
          DAT_14c79c3d8 = (undefined8 *)0x0;
        }
        if ((DAT_14c79c3d0 < DAT_14c79c3e8) ||
           (DAT_14c79c3e8 + (ulonglong)DAT_14c79c3f0 * 4 <= DAT_14c79c3d0)) {
          DAT_14c79c3d0 = (undefined8 *)*DAT_14c79c3d0;
          AK::MemoryMgr::Free(0,puVar2);
        }
        else {
          puVar4 = (undefined8 *)*DAT_14c79c3d0;
          *DAT_14c79c3d0 = DAT_14c79c3e0;
          DAT_14c79c3d0 = puVar4;
          DAT_14c79c3e0 = puVar2;
        }
        DAT_14c79c3f4 = DAT_14c79c3f4 + -1;
      }
    } while (DAT_14c79c3f4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001450c73f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c3f8);
  return;
}



// FUNCTION 1450c7400 FUN_1450c7400 body=761 status=ok
// SIG undefined FUN_1450c7400(void)

float * FUN_1450c7400(float *param_1,longlong *param_2,longlong param_3,float *param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  uint local_res8 [2];
  uint local_res10;
  undefined4 uStackX_14;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  
  *param_4 = 0.0;
  pfVar7 = (float *)FUN_1450d5f80(param_2,local_res8);
  auVar12._0_4_ = *pfVar7;
  fVar13 = pfVar7[1];
  *param_1 = 50.0;
  param_1[3] = auVar12._0_4_;
  if (auVar12._0_4_ <= 0.0) {
    auVar12._0_4_ = 0.0;
  }
  param_1[4] = fVar13;
  if (100.0 < auVar12._0_4_) {
    auVar12._0_4_ = 100.0;
  }
  if ((uint)ABS(auVar12._0_4_) < 0x7f800000) {
    *param_1 = auVar12._0_4_;
  }
  cVar4 = (**(code **)(*param_2 + 0xf8))(param_2,param_4);
  if (cVar4 == '\0') {
    return param_1;
  }
  lVar2 = *(longlong *)(param_3 + 8);
  *param_4 = *(float *)(lVar2 + 0x78) * *param_4;
  if (param_1[4] == 0.0) {
    return param_1;
  }
  uVar1 = *(undefined2 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  uVar8 = FUN_1450d2460(param_3);
  fVar10 = (float)FUN_1450c7700(uVar3,uVar1,uVar8);
  auVar11 = ZEXT816(0);
  auVar12._0_4_ = *param_4;
  fVar13 = param_1[4];
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x110) < DAT_14c79c464) &&
     (FUN_144b3d300(&DAT_14c79c464), DAT_14c79c464 == -1)) {
    DAT_14c79c460 = AK::SoundEngine::GetIDFromString("FirstOrThirdPerson");
    _Init_thread_footer(&DAT_14c79c464);
  }
  iVar5 = *(int *)(lVar2 + 0x110);
  if ((iVar5 < DAT_14c79c46c) && (iVar5 = FUN_144b3d300(&DAT_14c79c46c), DAT_14c79c46c == -1)) {
    DAT_14c79c468 = AK::SoundEngine::GetIDFromString("FirstPerson");
    iVar5 = _Init_thread_footer(&DAT_14c79c46c);
  }
  if (g_pGameSyncMgr != (CAkGameSyncMgr *)0x0) {
    local_res10 = DAT_14c79c460;
    uStackX_14 = CONCAT31(uStackX_14._1_3_,2);
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0xff;
    local_98 = 0xff;
    local_90 = 0;
    local_b8 = param_3;
    iVar5 = FUN_14507fa00(g_pGameSyncMgr,CONCAT44(uStackX_14,DAT_14c79c460),&local_b8,local_res8,0);
    uVar6 = 0;
    if (iVar5 == 1) {
      uVar6 = local_res8[0];
    }
    if (uVar6 == DAT_14c79c468) {
      auVar11._0_12_ = ZEXT812(0x3f800000);
      auVar11._12_4_ = 0;
    }
  }
  if ((fVar13 != 0.0) && (0.0 < auVar12._0_4_)) {
    fVar10 = fVar10 / auVar12._0_4_;
    if (fVar10 < 0.5) {
      if (fVar10 < 0.25) goto LAB_1450c75ed;
      fVar13 = fVar13 * 0.5;
    }
    auVar11._0_4_ = auVar11._0_4_ + fVar13;
  }
LAB_1450c75ed:
  auVar12._0_4_ = auVar11._0_4_;
  iVar9 = (int)auVar12._0_4_;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar12._0_4_)) {
    auVar12._4_4_ = auVar12._0_4_;
    auVar12._8_8_ = 0;
    uVar6 = movmskps(iVar5,auVar12);
    auVar12._0_4_ = (float)(int)(iVar9 - (uVar6 & 1));
  }
  auVar12._0_4_ = auVar12._0_4_ + param_1[3];
  if (auVar12._0_4_ <= 0.0) {
    auVar12._0_4_ = 0.0;
  }
  fVar13 = 100.0;
  if (auVar12._0_4_ <= 100.0) {
    fVar13 = auVar12._0_4_;
  }
  if ((uint)ABS(fVar13) < 0x7f800000) {
    *param_1 = fVar13;
  }
  return param_1;
}



// FUNCTION 1450c7700 FUN_1450c7700 body=855 status=ok
// SIG undefined FUN_1450c7700(void)

float FUN_1450c7700(longlong param_1,uint param_2,longlong param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  puVar12 = *(undefined8 **)(param_3 + 0x10);
  fVar15 = 1e+10;
  if (puVar12 != puVar12 + *(uint *)(param_3 + 0x18)) {
    do {
      lVar9 = FUN_145077820(*puVar12);
      if (lVar9 != 0) {
        dVar4 = *(double *)(lVar9 + 0x78);
        dVar5 = *(double *)(lVar9 + 0x80);
        uVar11 = 0;
        dVar3 = *(double *)(lVar9 + 0x88);
        if (param_2 < 4) {
          if (param_2 != 0) {
            fVar17 = *(float *)(lVar9 + 0x90);
            lVar9 = 0;
            goto LAB_1450c796d;
          }
        }
        else {
          fVar17 = *(float *)(lVar9 + 0x90);
          pdVar10 = (double *)(param_1 + 0x58);
          uVar8 = (param_2 - 4 >> 2) + 1;
          uVar13 = (ulonglong)uVar8;
          fVar16 = 1.0 / fVar17;
          uVar11 = uVar8 * 4;
          lVar9 = (ulonglong)uVar8 * 4;
          do {
            fVar14 = SQRT((float)(dVar5 - pdVar10[-7]) * (float)(dVar5 - pdVar10[-7]) +
                          (float)(dVar4 - pdVar10[-8]) * (float)(dVar4 - pdVar10[-8]) +
                          (float)(dVar3 - pdVar10[-6]) * (float)(dVar3 - pdVar10[-6])) * fVar16;
            if (fVar15 <= fVar14) {
              fVar14 = fVar15;
            }
            pdVar1 = pdVar10 + 0x10;
            pdVar6 = pdVar10 + 0x11;
            fVar15 = SQRT((float)(dVar5 - pdVar10[1]) * (float)(dVar5 - pdVar10[1]) +
                          (float)(dVar4 - *pdVar10) * (float)(dVar4 - *pdVar10) +
                          (float)(dVar3 - pdVar10[2]) * (float)(dVar3 - pdVar10[2])) * fVar16;
            if (fVar14 <= fVar15) {
              fVar15 = fVar14;
            }
            pdVar2 = pdVar10 + 0x12;
            fVar14 = SQRT((float)(dVar5 - pdVar10[9]) * (float)(dVar5 - pdVar10[9]) +
                          (float)(dVar4 - pdVar10[8]) * (float)(dVar4 - pdVar10[8]) +
                          (float)(dVar3 - pdVar10[10]) * (float)(dVar3 - pdVar10[10])) * fVar16;
            if (fVar15 <= fVar14) {
              fVar14 = fVar15;
            }
            pdVar10 = pdVar10 + 0x20;
            fVar15 = SQRT((float)(dVar5 - *pdVar6) * (float)(dVar5 - *pdVar6) +
                          (float)(dVar4 - *pdVar1) * (float)(dVar4 - *pdVar1) +
                          (float)(dVar3 - *pdVar2) * (float)(dVar3 - *pdVar2)) * fVar16;
            if (fVar14 <= fVar15) {
              fVar15 = fVar14;
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          if (uVar11 < param_2) {
LAB_1450c796d:
            pdVar10 = (double *)(param_1 + 0x18 + lVar9 * 0x40);
            uVar13 = (ulonglong)(param_2 - uVar11);
            do {
              dVar7 = *pdVar10;
              pdVar6 = pdVar10 + 1;
              pdVar1 = pdVar10 + 2;
              pdVar10 = pdVar10 + 8;
              fVar16 = SQRT((float)(dVar5 - *pdVar6) * (float)(dVar5 - *pdVar6) +
                            (float)(dVar4 - dVar7) * (float)(dVar4 - dVar7) +
                            (float)(dVar3 - *pdVar1) * (float)(dVar3 - *pdVar1)) * (1.0 / fVar17);
              if (fVar15 <= fVar16) {
                fVar16 = fVar15;
              }
              fVar15 = fVar16;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 !=
             (undefined8 *)
             (*(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 0x18) * 8));
  }
  return fVar15;
}



// FUNCTION 1450c7a60 FUN_1450c7a60 body=95 status=ok
// SIG undefined FUN_1450c7a60(void)

float FUN_1450c7a60(__uint64 param_1)

{
  longlong lVar1;
  CAkRegisteredObj *pCVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = -1.0;
  pCVar2 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_1);
  lVar1 = DAT_14c79c3b0;
  if (pCVar2 != (CAkRegisteredObj *)0x0) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
      fVar4 = fVar3;
      if ((*(CAkRegisteredObj **)(lVar1 + 0x20) == pCVar2) &&
         (fVar4 = *(float *)(lVar1 + 0x208), *(float *)(lVar1 + 0x208) <= fVar3)) {
        fVar4 = fVar3;
      }
      fVar3 = fVar4;
    }
  }
  return fVar3;
}



// FUNCTION 1450c7ac0 FUN_1450c7ac0 body=1140 status=ok
// SIG undefined FUN_1450c7ac0(void)

/* WARNING: Removing unreachable block (ram,0x0001450c7ecb) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ed0) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ed8) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ee0) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ef2) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e0c) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e15) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b72) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b2c) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b3b) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b40) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b46) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b4e) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b55) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b5d) */
/* WARNING: Removing unreachable block (ram,0x0001450c7b62) */
/* WARNING: Removing unreachable block (ram,0x0001450c7dfc) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e06) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e17) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e9b) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ea4) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e20) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e40) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e4b) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e4f) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e58) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e5e) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e74) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e8a) */
/* WARNING: Removing unreachable block (ram,0x0001450c7e95) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ea9) */
/* WARNING: Removing unreachable block (ram,0x0001450c7f1e) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bb2) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bc3) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bd3) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bc9) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bd1) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bdc) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bf5) */
/* WARNING: Removing unreachable block (ram,0x0001450c7bf0) */
/* WARNING: Removing unreachable block (ram,0x0001450c7c10) */
/* WARNING: Removing unreachable block (ram,0x0001450c7c15) */
/* WARNING: Removing unreachable block (ram,0x0001450c7c6e) */
/* WARNING: Removing unreachable block (ram,0x0001450c7c8c) */
/* WARNING: Removing unreachable block (ram,0x0001450c7c98) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ca1) */
/* WARNING: Removing unreachable block (ram,0x0001450c7cae) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ce0) */
/* WARNING: Removing unreachable block (ram,0x0001450c7cec) */
/* WARNING: Removing unreachable block (ram,0x0001450c7cfa) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d0e) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d1d) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d36) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d45) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d5d) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d6c) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d85) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d8a) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d8f) */
/* WARNING: Removing unreachable block (ram,0x0001450c7d9c) */
/* WARNING: Removing unreachable block (ram,0x0001450c7da1) */
/* WARNING: Removing unreachable block (ram,0x0001450c7daf) */
/* WARNING: Removing unreachable block (ram,0x0001450c7dc6) */
/* WARNING: Removing unreachable block (ram,0x0001450c7dd4) */
/* WARNING: Removing unreachable block (ram,0x0001450c7ddc) */
/* WARNING: Removing unreachable block (ram,0x0001450c7dea) */

undefined8 FUN_1450c7ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c79c3b0 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(0,(void *)*param_1);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    uVar1 = 1;
  }
  else {
    FUN_1450c8500();
    uVar1 = 0x34;
  }
  return uVar1;
}



// FUNCTION 1450c7f40 FUN_1450c7f40 body=44 status=ok
// SIG undefined FUN_1450c7f40(void)

void FUN_1450c7f40(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FUN_1450c83a0(&DAT_14c79c420,*(undefined8 *)(param_1 + 0x20),local_res8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = param_1;
  }
  return;
}



// FUNCTION 1450c7f70 FUN_1450c7f70 body=109 status=ok
// SIG undefined FUN_1450c7f70(void)

void FUN_1450c7f70(longlong param_1)

{
  longlong *_Dst;
  
  for (_Dst = DAT_14c79c420; (_Dst != DAT_14c79c420 + DAT_14c79c428 && (*_Dst != param_1));
      _Dst = _Dst + 1) {
  }
  if (_Dst != DAT_14c79c420 + DAT_14c79c428) {
    if (_Dst < DAT_14c79c420 + (DAT_14c79c428 - 1)) {
      memmove(_Dst,_Dst + 1,
              (ulonglong)((int)(DAT_14c79c420 + (DAT_14c79c428 - 1)) - (int)_Dst & 0xfffffff8));
    }
    DAT_14c79c428 = DAT_14c79c428 - 1;
  }
  return;
}



// FUNCTION 1450c7fe0 FUN_1450c7fe0 body=193 status=ok
// SIG undefined FUN_1450c7fe0(void)

void FUN_1450c7fe0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14c79c3b0;
  if ((DAT_14c79c388 == '\0') || (DAT_14c79c389 != '\0')) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
      *(byte *)(lVar1 + 0x221) = *(byte *)(lVar1 + 0x221) & 0xfe;
    }
  }
  else {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x240)) {
      FUN_1450ea350(lVar1);
      *(byte *)(lVar1 + 0x221) = *(byte *)(lVar1 + 0x221) & 0xfe;
    }
    DAT_14c79c388 = '\0';
  }
  uVar4 = (ulonglong)DAT_14c79c428;
  plVar2 = DAT_14c79c420;
  plVar3 = DAT_14c79c420;
  if (DAT_14c79c420 != DAT_14c79c420 + uVar4) {
    do {
      if (*plVar3 != 0) {
        FUN_1450d3de0();
        uVar4 = (ulonglong)DAT_14c79c428;
        plVar2 = DAT_14c79c420;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + uVar4);
  }
  return;
}



// FUNCTION 1450c80b0 FUN_1450c80b0 body=554 status=ok
// SIG undefined FUN_1450c80b0(void)

void FUN_1450c80b0(float param_1,float param_2,float param_3,float param_4,longlong param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  uint local_res8 [2];
  undefined4 uStack_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  
  fVar5 = 0.0;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x110) < DAT_14c79c464) &&
     (FUN_144b3d300(&DAT_14c79c464), DAT_14c79c464 == -1)) {
    DAT_14c79c460 = AK::SoundEngine::GetIDFromString("FirstOrThirdPerson");
    _Init_thread_footer(&DAT_14c79c464);
  }
  if ((*(int *)(lVar1 + 0x110) < DAT_14c79c46c) &&
     (FUN_144b3d300(&DAT_14c79c46c), DAT_14c79c46c == -1)) {
    DAT_14c79c468 = AK::SoundEngine::GetIDFromString("FirstPerson");
    _Init_thread_footer(&DAT_14c79c46c);
  }
  if ((g_pGameSyncMgr != (CAkGameSyncMgr *)0x0) && (param_5 != 0)) {
    local_a0 = param_5;
    uStack_a4 = CONCAT31(uStack_a4._1_3_,2);
    local_98 = 0;
    local_90 = 0;
    local_88 = 0xff;
    local_80 = 0xff;
    local_78 = 0;
    iVar2 = FUN_14507fa00(g_pGameSyncMgr,CONCAT44(uStack_a4,DAT_14c79c460),&local_a0,local_res8,0);
    uVar3 = 0;
    if (iVar2 == 1) {
      uVar3 = local_res8[0];
    }
    if (uVar3 == DAT_14c79c468) {
      fVar5 = 1.0;
    }
  }
  if (param_4 <= 0.0) {
    fVar4 = -0.5;
  }
  else {
    fVar4 = 0.5;
  }
  fVar5 = fVar5 + (float)(int)(fVar4 + param_4) * 0.01;
  if ((param_1 != 0.0) && (0.0 < param_2)) {
    if (param_3 / param_2 < 0.5) {
      if (param_3 / param_2 < 0.25) goto LAB_1450c8204;
      param_1 = param_1 * 0.5;
    }
    fVar5 = fVar5 + param_1;
  }
LAB_1450c8204:
  if (((int)fVar5 != -0x80000000) && ((float)(int)fVar5 != fVar5)) {
    auVar6._4_4_ = fVar5;
    auVar6._0_4_ = fVar5;
    auVar6._8_8_ = 0;
    movmskps((int)(fVar4 + param_4),auVar6);
  }
  return;
}



// FUNCTION 1450c82e0 FUN_1450c82e0 body=186 status=ok
// SIG undefined FUN_1450c82e0(void)

undefined8 FUN_1450c82e0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c837d;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450c837d:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c83a0 FUN_1450c83a0 body=338 status=ok
// SIG undefined FUN_1450c83a0(void)

longlong FUN_1450c83a0(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *_Src;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = *(uint *)(param_1 + 1);
  iVar9 = 0;
  if (uVar8 != 0) {
    do {
      iVar4 = (uVar8 >> 1) + iVar9;
      lVar3 = (longlong)iVar4 * 8;
      uVar7 = *(ulonglong *)(*(longlong *)(lVar3 + *param_1) + 0x20);
      if (uVar7 == param_2) {
        *param_3 = 1;
        lVar6 = *param_1;
        lVar3 = lVar3 + lVar6;
        goto LAB_1450c8416;
      }
      uVar5 = uVar8 - 1;
      iVar4 = iVar4 + 1;
      if (uVar7 <= param_2) {
        uVar5 = uVar8;
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      uVar8 = uVar5 >> 1;
    } while (uVar8 != 0);
  }
  *param_3 = 0;
  lVar6 = *param_1;
  lVar3 = lVar6 + (longlong)iVar9 * 8;
LAB_1450c8416:
  puVar1 = (uint *)(param_1 + 1);
  uVar8 = *puVar1;
  if (lVar3 != 0) {
    uVar7 = lVar3 - lVar6 >> 3;
    if (((uVar8 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar2 = FUN_1450c82e0(param_1), cVar2 != '\0')) &&
       (uVar8 < *(uint *)((longlong)param_1 + 0xc))) {
      uVar8 = (uint)uVar7;
      lVar3 = (uVar7 & 0xffffffff) * 8;
      _Src = (void *)(*param_1 + lVar3);
      if (uVar8 < *(uint *)(param_1 + 1)) {
        memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*(uint *)(param_1 + 1) - uVar8) * 8))
        ;
      }
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      lVar3 = *param_1 + lVar3;
    }
    else {
      lVar3 = 0;
    }
    return lVar3;
  }
  if (((uVar8 < *(uint *)((longlong)param_1 + 0xc)) ||
      (cVar2 = FUN_1450c82e0(param_1), cVar2 != '\0')) &&
     (uVar8 < *(uint *)((longlong)param_1 + 0xc))) {
    uVar8 = *puVar1;
    *puVar1 = uVar8 + 1;
    return *param_1 + (ulonglong)uVar8 * 8;
  }
  return 0;
}



// FUNCTION 1450c8500 FUN_1450c8500 body=378 status=ok
// SIG undefined FUN_1450c8500(void)

undefined8 FUN_1450c8500(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  uVar9 = 0;
  puVar12 = &DAT_149c26f80;
  do {
    uVar1 = *puVar12;
    uVar10 = (ulonglong)uVar1;
    if (param_2 < uVar1) {
      if (uVar1 == 0) {
        return 2;
      }
      uVar9 = *(uint *)(param_1 + 1);
      uVar14 = (ulonglong)uVar9;
      puVar3 = (undefined8 *)*param_1;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
      param_1[1] = 0;
      *param_1 = 0;
      pvVar7 = AK::MemoryMgr::Malloc(0,uVar10 * 8);
      pvVar4 = (void *)*param_1;
      if (pvVar7 == (void *)0x0) {
        if (pvVar4 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)puVar3;
        uVar8 = 2;
        *(uint *)(param_1 + 1) = uVar9;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      }
      else {
        if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar7)) {
          AK::MemoryMgr::Free(0,pvVar4);
        }
        *param_1 = (longlong)pvVar7;
        *(uint *)((longlong)param_1 + 0xc) = uVar1;
        uVar11 = uVar10;
        do {
          uVar1 = *(uint *)(param_1 + 1);
          if (uVar1 < uVar11) {
            *(uint *)(param_1 + 1) = uVar1 + 1;
            puVar13 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 8);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
              uVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        puVar13 = puVar3;
        if (uVar9 != 0) {
          do {
            puVar6 = (undefined8 *)*puVar13;
            while (puVar6 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(param_1 + 1);
              puVar5 = (undefined8 *)*puVar6;
              *puVar6 = *(undefined8 *)
                         (*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8);
              *(undefined8 **)(*param_1 + ((ulonglong)*(uint *)(puVar6 + 1) % (ulonglong)uVar9) * 8)
                   = puVar6;
              puVar6 = puVar5;
            }
            uVar14 = uVar14 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar14 != 0);
        }
        if (puVar3 != (undefined8 *)0x0) {
          AK::MemoryMgr::Free(0,puVar3);
        }
        uVar8 = 1;
      }
      return uVar8;
    }
    uVar9 = uVar9 + 1;
    puVar12 = puVar12 + 1;
  } while (uVar9 < 0x1b);
  return 2;
}



// FUNCTION 1450c8680 FUN_1450c8680 body=468 status=ok
// SIG undefined FUN_1450c8680(void)

undefined8 FUN_1450c8680(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar11 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var7 = (ulonglong)uVar11 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      uVar10 = 0;
      if (3 < uVar8) {
        puVar6 = (undefined8 *)((longlong)pvVar5 + 0x10);
        lVar9 = (uVar8 - 4 >> 2) + 1;
        uVar10 = lVar9 * 4;
        do {
          puVar3 = puVar6 + -2;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + -1) = 0xbf800000;
          }
          puVar1 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x10 - (longlong)pvVar5));
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          puVar6[-1] = uVar4;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 1) = 0xbf800000;
          }
          lVar2 = (0x10 - (longlong)pvVar5) + (longlong)puVar6;
          puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + 0x10 + (-0x10 - (longlong)pvVar5));
          uVar4 = puVar3[1];
          *puVar6 = *puVar3;
          puVar6[1] = uVar4;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar6[2] = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 3) = 0xbf800000;
          }
          puVar3 = (undefined8 *)(*param_1 + lVar2);
          uVar4 = puVar3[1];
          lVar2 = (0x20 - (longlong)pvVar5) + (longlong)puVar6;
          puVar6[2] = *puVar3;
          puVar6[3] = uVar4;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar6[4] = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 5) = 0xbf800000;
          }
          puVar3 = (undefined8 *)(*param_1 + lVar2);
          uVar4 = puVar3[1];
          puVar6[4] = *puVar3;
          puVar6[5] = uVar4;
          puVar6 = puVar6 + 8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (uVar10 < uVar8) {
        puVar6 = (undefined8 *)(uVar10 * 0x10 + (longlong)pvVar5);
        lVar9 = uVar8 - uVar10;
        do {
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 1) = 0xbf800000;
          }
          puVar3 = (undefined8 *)((*param_1 - (longlong)pvVar5) + (longlong)puVar6);
          uVar4 = puVar3[1];
          *puVar6 = *puVar3;
          puVar6[1] = uVar4;
          puVar6 = puVar6 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var7);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar11;
  return 1;
}



// FUNCTION 1450c8860 FUN_1450c8860 body=315 status=ok
// SIG undefined FUN_1450c8860(void)

void FUN_1450c8860(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc;
  uVar6 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      uVar1 = uVar6 + 1;
      uVar7 = (ulonglong)uVar1;
      uVar5 = (ulonglong)uVar6;
      fVar9 = *(float *)(*param_1 + 4 + uVar7 * 0xc) - *(float *)(*param_1 + 4 + uVar5 * 0xc);
      *(float *)(lVar2 + 4 + uVar5 * 8) = fVar9;
      fVar8 = 1.0 / (*(float *)(*param_1 + uVar7 * 0xc) - *(float *)(*param_1 + uVar5 * 0xc));
      *(float *)(lVar2 + uVar5 * 8) = fVar8;
      lVar4 = *param_1;
      iVar3 = *(int *)(lVar4 + 8 + uVar5 * 0xc);
      if (iVar3 == 9) {
        *(undefined4 *)(lVar2 + uVar5 * 8) = 0;
      }
      else if (iVar3 == 4) {
        *(float *)(lVar2 + uVar5 * 8) =
             (*(float *)(lVar4 + 4 + uVar7 * 0xc) - *(float *)(lVar4 + 4 + uVar5 * 0xc)) * fVar8;
      }
      else {
        if ((iVar3 == 1) || (iVar3 == 7)) {
          fVar8 = fVar8 * 1.5707964;
        }
        else {
          if ((iVar3 - 3U & 0xfffffffd) != 0) {
            if (iVar3 == 2) {
              *(float *)(lVar2 + 4 + uVar5 * 8) = fVar9 * -0.5;
            }
            else if (iVar3 == 6) {
              *(float *)(lVar2 + 4 + uVar5 * 8) = fVar9 * 0.5;
            }
            goto LAB_1450c897b;
          }
          fVar8 = fVar8 * 3.1415927;
        }
        *(float *)(lVar2 + uVar5 * 8) = fVar8;
      }
LAB_1450c897b:
      uVar6 = uVar1;
    } while (uVar1 < *(uint *)(param_1 + 1));
  }
  return;
}



// FUNCTION 1450c89a0 FUN_1450c89a0 body=397 status=ok
// SIG undefined FUN_1450c89a0(void)

void FUN_1450c89a0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar8;
  float fVar9;
  ulonglong uVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 4;
    return;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 2) {
    uVar5 = 0;
    uVar6 = 0;
    if ((int)param_1[1] != 0) {
      do {
        uVar4 = (ulonglong)uVar5;
        uVar5 = uVar5 + 1;
        *(float *)(*param_1 + 4 + uVar4 * 0xc) = *(float *)(*param_1 + 4 + uVar4 * 0xc) + 1.0;
        uVar6 = *(uint *)(param_1 + 1);
      } while (uVar5 < uVar6);
    }
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    lVar1 = *param_1 + (ulonglong)uVar6 * 0xc;
    uVar4 = 0;
    if (uVar6 != 0) {
      do {
        uVar6 = (int)uVar4 + 1;
        uVar7 = (ulonglong)uVar6;
        fVar9 = *(float *)(*param_1 + 4 + uVar7 * 0xc) - *(float *)(*param_1 + 4 + uVar4 * 0xc);
        *(float *)(lVar1 + 4 + uVar4 * 8) = fVar9;
        fVar8 = 1.0 / (*(float *)(*param_1 + uVar7 * 0xc) - *(float *)(*param_1 + uVar4 * 0xc));
        *(float *)(lVar1 + uVar4 * 8) = fVar8;
        lVar3 = *param_1;
        iVar2 = *(int *)(lVar3 + 8 + uVar4 * 0xc);
        if (iVar2 == 9) {
          *(undefined4 *)(lVar1 + uVar4 * 8) = 0;
        }
        else if (iVar2 == 4) {
          *(float *)(lVar1 + uVar4 * 8) =
               (*(float *)(lVar3 + 4 + uVar7 * 0xc) - *(float *)(lVar3 + 4 + uVar4 * 0xc)) * fVar8;
        }
        else {
          if ((iVar2 == 1) || (iVar2 == 7)) {
            fVar8 = fVar8 * 1.5707964;
          }
          else {
            if ((iVar2 - 3U & 0xfffffffd) != 0) {
              if (iVar2 == 2) {
                *(float *)(lVar1 + 4 + uVar4 * 8) = fVar9 * -0.5;
              }
              else if (iVar2 == 6) {
                *(float *)(lVar1 + 4 + uVar4 * 8) = fVar9 * 0.5;
              }
              goto LAB_1450c8b09;
            }
            fVar8 = fVar8 * 3.1415927;
          }
          *(float *)(lVar1 + uVar4 * 8) = fVar8;
        }
LAB_1450c8b09:
        uVar4 = uVar7;
      } while (uVar6 < *(uint *)(param_1 + 1));
    }
  }
  return;
}



// FUNCTION 1450c8b30 FUN_1450c8b30 body=14 status=ok
// SIG undefined FUN_1450c8b30(void)

undefined8 FUN_1450c8b30(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  return 1;
}



// FUNCTION 1450c8b40 FUN_1450c8b40 body=106 status=ok
// SIG undefined FUN_1450c8b40(void)

undefined4 FUN_1450c8b40(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  lVar2 = 2;
  do {
    lVar3 = 3;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)*puVar1);
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 1;
      puVar1 = puVar1 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return 1;
}



// FUNCTION 1450c8bb0 FUN_1450c8bb0 body=340 status=ok
// SIG undefined FUN_1450c8bb0(void)

undefined8
FUN_1450c8bb0(longlong param_1,int param_2,int param_3,int param_4,void *param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 * 3 + (longlong)param_3;
  pvVar1 = *(void **)(param_1 + 8 + lVar3 * 0x18);
  param_1 = param_1 + lVar3 * 0x18;
  if (pvVar1 != (void *)0x0) {
    AK::MemoryMgr::Free(0,pvVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  if ((param_5 == (void *)0x0) || (param_4 == 0)) {
    uVar2 = 0x1f;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(int *)(param_1 + 0x10) = param_4 + 2;
    pvVar1 = AK::MemoryMgr::Malloc(0,(ulonglong)(uint)((param_4 + 2) * 0x14));
    *(void **)(param_1 + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar2 = 0x34;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = param_6;
      memcpy((void *)((longlong)pvVar1 + 0xc),param_5,(ulonglong)(uint)(param_4 * 0xc));
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 8) = 9;
      **(undefined4 **)(param_1 + 8) = 0xff7fffff;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10);
      *(undefined4 *)
       (*(longlong *)(param_1 + 8) + 8 + (ulonglong)(*(int *)(param_1 + 0x10) - 1) * 0xc) = 9;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)(*(int *)(param_1 + 0x10) - 1) * 0xc)
           = 0x7f7fffff;
      *(undefined4 *)
       (*(longlong *)(param_1 + 8) + 4 + (ulonglong)(*(int *)(param_1 + 0x10) - 1) * 0xc) =
           *(undefined4 *)
            (*(longlong *)(param_1 + 8) + 4 + (ulonglong)(*(int *)(param_1 + 0x10) - 2) * 0xc);
      FUN_1450c8860(param_1 + 8);
      if (param_3 == 0) {
        FUN_1450c89a0(param_1 + 8);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 1450c8d10 FUN_1450c8d10 body=56 status=ok
// SIG undefined FUN_1450c8d10(void)

undefined8 FUN_1450c8d10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (7 < *(uint *)(param_1 + 0xc)) {
    return 1;
  }
  cVar1 = FUN_1450c9660(param_1,8 - *(uint *)(param_1 + 0xc));
  uVar2 = 0x34;
  if (cVar1 != '\0') {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1450c8d50 FUN_1450c8d50 body=76 status=ok
// SIG undefined FUN_1450c8d50(void)

void FUN_1450c8d50(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(0,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[2]);
    param_1[2] = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 1450c8da0 FUN_1450c8da0 body=279 status=ok
// SIG undefined FUN_1450c8da0(void)

void FUN_1450c8da0(longlong *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar5 = (int *)*param_1;
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  piVar6 = piVar5 + uVar7 * 0xc;
  for (; (piVar5 != piVar6 && ((*piVar5 != param_2 || (*(longlong *)(piVar5 + 2) != param_3))));
      piVar5 = piVar5 + 0xc) {
  }
  piVar4 = piVar5 + 4;
  if (piVar5 == piVar6) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar1 <= uVar7) {
      iVar2 = (uVar1 >> 1) + uVar1;
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      cVar3 = FUN_1450c9660(param_1,iVar2);
      if (cVar3 == '\0') goto LAB_1450c8e92;
    }
    if (uVar7 < *(uint *)((longlong)param_1 + 0xc)) {
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      piVar5 = (int *)((ulonglong)uVar1 * 0x30 + *param_1);
      if (piVar5 != (int *)0x0) {
        piVar5[6] = -1;
        piVar5[7] = 0x3f800000;
        piVar5[8] = -1;
        piVar5[9] = 1;
        iStack_10 = (int)param_3;
        iStack_c = (int)((ulonglong)param_3 >> 0x20);
        *piVar5 = param_2;
        piVar5[1] = iStack_14;
        piVar5[2] = iStack_10;
        piVar5[3] = iStack_c;
        piVar5[6] = -1;
        piVar5[7] = 0x3f800000;
        piVar5[8] = -1;
        piVar5[9] = 1;
      }
    }
  }
LAB_1450c8e92:
                    /* WARNING: Could not recover jumptable at 0x0001450c8eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 1450c8ec0 FUN_1450c8ec0 body=191 status=ok
// SIG undefined FUN_1450c8ec0(void)

void FUN_1450c8ec0(undefined8 *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int *_Dst;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)*param_1;
  for (_Dst = piVar1;
      (_Dst != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc &&
      ((*_Dst != param_2 || (*(longlong *)(_Dst + 2) != param_3)))); _Dst = _Dst + 0xc) {
  }
  if (_Dst != piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc) {
    if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0xc) {
      memmove(_Dst,_Dst + 0xc,
              (ulonglong)
              (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(param_1 + 1) - 1) * 0xc) -
                           (longlong)_Dst) / 0x30) * 0x30));
    }
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450c8f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 1450c8f80 FUN_1450c8f80 body=372 status=ok
// SIG undefined FUN_1450c8f80(void)

void FUN_1450c8f80(longlong *param_1,int param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar5 = (int *)*param_1;
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
  piVar9 = piVar5 + uVar11 * 0xc;
  for (piVar10 = piVar5;
      (piVar10 != piVar9 && ((*piVar10 != param_2 || (*(longlong *)(piVar10 + 2) != param_4))));
      piVar10 = piVar10 + 0xc) {
  }
  plVar7 = (longlong *)0x0;
  plVar8 = (longlong *)(piVar10 + 4);
  if (piVar10 == piVar9) {
    plVar8 = plVar7;
  }
  if (plVar8 == (longlong *)0x0) {
    for (; (piVar5 != piVar9 && ((*piVar5 != param_2 || (*(longlong *)(piVar5 + 2) != param_4))));
        piVar5 = piVar5 + 0xc) {
    }
    plVar8 = (longlong *)(piVar5 + 4);
    if (piVar5 == piVar9) {
      plVar8 = plVar7;
    }
    if (plVar8 == (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      if (uVar1 <= uVar11) {
        iVar6 = (uVar1 >> 1) + uVar1;
        if (uVar1 == 0) {
          iVar6 = 1;
        }
        cVar4 = FUN_1450c9660(param_1,iVar6);
        if (cVar4 == '\0') goto LAB_1450c90cd;
      }
      if (*(uint *)((longlong)param_1 + 0xc) <= uVar11) goto LAB_1450c90cd;
      uVar1 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar1 + 1;
      piVar5 = (int *)((ulonglong)uVar1 * 0x30 + *param_1);
      if (piVar5 != (int *)0x0) {
        piVar5[6] = -1;
        piVar5[7] = 0x3f800000;
        piVar5[8] = -1;
        piVar5[9] = 1;
        iStack_30 = (int)param_4;
        iStack_2c = (int)((ulonglong)param_4 >> 0x20);
        plVar7 = (longlong *)(piVar5 + 4);
        *piVar5 = param_2;
        piVar5[1] = iStack_34;
        piVar5[2] = iStack_30;
        piVar5[3] = iStack_2c;
      }
      plVar8 = plVar7;
      if (plVar7 == (longlong *)0x0) goto LAB_1450c90cd;
    }
    if ((int)param_1[1] != 0) {
      QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 9));
    }
  }
  iVar6 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  *(int *)(plVar8 + 1) = *param_3;
  *(int *)((longlong)plVar8 + 0xc) = iVar6;
  *(int *)(plVar8 + 2) = iVar2;
  *(int *)((longlong)plVar8 + 0x14) = iVar3;
  *plVar8 = param_1[9];
  *(int *)(plVar8 + 3) = *(int *)(DAT_14c790fd8 + 0x88);
LAB_1450c90cd:
                    /* WARNING: Could not recover jumptable at 0x0001450c90ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 1450c9100 FUN_1450c9100 body=547 status=ok
// SIG undefined FUN_1450c9100(void)

undefined8 FUN_1450c9100(longlong *param_1,int param_2,ulonglong param_3,uint *param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  LARGE_INTEGER local_78;
  longlong local_70;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar1 = *param_4;
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = uVar9;
  if (uVar1 != 0) {
    uVar6 = param_3;
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != piVar5 + (ulonglong)*(uint *)(param_1 + 1) * 0xc) {
    puVar7 = (uint *)(piVar5 + 8);
    do {
      uVar8 = (uint)uVar9;
      if (uVar2 <= uVar8) break;
      if ((*piVar5 == param_2) && (puVar7[1] != 1)) {
        if (uVar6 != 0) {
          fVar10 = 1.0 / (float)puVar7[1];
          fVar11 = (float)puVar7[-2] * 1000.0 * fVar10;
          local_70 = (longlong)((float)*puVar7 * 1000.0 * fVar10);
          if (param_5 != '\0') {
            QueryPerformanceCounter(&local_78);
            fVar11 = fVar11 + ((float)(local_78.QuadPart - *(longlong *)(puVar7 + -4)) /
                              DAT_14c79c4d4) * (float)puVar7[-1];
          }
          uVar3 = FUN_1450e71d0(*(longlong *)(*(longlong *)(puVar7 + -6) + 0x18) + 0x18);
          *(undefined4 *)(uVar6 + uVar9 * 0x14) = uVar3;
          *(undefined4 *)(uVar6 + 4 + uVar9 * 0x14) =
               **(undefined4 **)(*(longlong *)(*(longlong *)(puVar7 + -6) + 0x18) + 0x2a0);
          uVar1 = (uint)local_70;
          if ((uint)(longlong)fVar11 < (uint)local_70) {
            uVar1 = (uint)(longlong)fVar11;
          }
          *(uint *)(uVar6 + 8 + uVar9 * 0x14) = uVar1;
          *(uint *)(uVar6 + 0xc + uVar9 * 0x14) = puVar7[-2];
          *(undefined4 *)(uVar6 + 0x10 + uVar9 * 0x14) = *(undefined4 *)(DAT_14c790fd8 + 0x88);
        }
        uVar9 = (ulonglong)(uVar8 + 1);
      }
      uVar8 = (uint)uVar9;
      piVar5 = piVar5 + 0xc;
      puVar7 = puVar7 + 0xc;
    } while (piVar5 != (int *)((ulonglong)*(uint *)(param_1 + 1) * 0x30 + *param_1));
  }
  *param_4 = uVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  uVar4 = 1;
  if (uVar8 == 0) {
    uVar4 = 0x5e;
  }
  return uVar4;
}



// FUNCTION 1450c9330 FUN_1450c9330 body=160 status=ok
// SIG undefined FUN_1450c9330(void)

void FUN_1450c9330(longlong param_1,int param_2)

{
  int *piVar1;
  int *_Dst;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  _Dst = piVar1;
  do {
    if (_Dst == piVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 6) {
LAB_1450c93b6:
                    /* WARNING: Could not recover jumptable at 0x0001450c93c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
      return;
    }
    if (*_Dst == param_2) {
      if (_Dst < piVar1 + (ulonglong)(*(uint *)(param_1 + 0x18) - 1) * 6) {
        memmove(_Dst,_Dst + 6,
                (ulonglong)
                (uint)((int)(((longlong)(piVar1 + (ulonglong)(*(uint *)(param_1 + 0x18) - 1) * 6) -
                             (longlong)_Dst) / 0x18) * 0x18));
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      goto LAB_1450c93b6;
    }
    _Dst = _Dst + 6;
  } while( true );
}



// FUNCTION 1450c93d0 FUN_1450c93d0 body=316 status=ok
// SIG undefined FUN_1450c93d0(void)

void FUN_1450c93d0(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar4 = *(int **)(param_1 + 0x10);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x18);
  piVar1 = piVar4 + uVar8 * 6;
  for (piVar5 = piVar4; (piVar5 != piVar1 && (*piVar5 != param_2)); piVar5 = piVar5 + 6) {
  }
  plVar6 = (longlong *)0x0;
  plVar7 = (longlong *)(piVar5 + 2);
  if (piVar5 == piVar1) {
    plVar7 = plVar6;
  }
  if (plVar7 == (longlong *)0x0) {
    for (; (piVar4 != piVar1 && (*piVar4 != param_2)); piVar4 = piVar4 + 6) {
    }
    plVar7 = (longlong *)(piVar4 + 2);
    if (piVar4 == piVar1) {
      plVar7 = plVar6;
    }
    if (plVar7 == (longlong *)0x0) {
      if (((*(uint *)(param_1 + 0x1c) <= uVar8) &&
          (cVar3 = FUN_1450c9900(param_1 + 0x10), cVar3 == '\0')) ||
         (*(uint *)(param_1 + 0x1c) <= uVar8)) goto LAB_1450c94e3;
      uVar2 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar2 + 1;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x18);
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_2;
        plVar6 = (longlong *)(piVar1 + 2);
      }
      plVar7 = plVar6;
      if (plVar6 == (longlong *)0x0) goto LAB_1450c94e3;
    }
    plVar7[1] = *param_4;
  }
  else if (*plVar7 == param_3) {
    plVar7[1] = *param_4;
  }
  else if (*(int *)((longlong)param_4 + 4) != 2) {
    if ((int)*param_4 < (int)plVar7[1]) {
      *(int *)(plVar7 + 1) = (int)*param_4;
    }
    if (*(int *)((longlong)plVar7 + 0xc) != 1) {
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)param_4 + 4);
    }
  }
  *plVar7 = param_3;
LAB_1450c94e3:
                    /* WARNING: Could not recover jumptable at 0x0001450c9505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// FUNCTION 1450c9510 FUN_1450c9510 body=162 status=ok
// SIG undefined FUN_1450c9510(void)

undefined4 FUN_1450c9510(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 6;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 6) {
  }
  piVar3 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    uVar4 = 0x5e;
  }
  else {
    uVar4 = 1;
    *param_3 = piVar3[2];
    *param_4 = piVar3[3];
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar4;
}



// FUNCTION 1450c95c0 FUN_1450c95c0 body=156 status=ok
// SIG undefined FUN_1450c95c0(void)

void FUN_1450c95c0(undefined8 *param_1,int param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  piVar1 = (int *)*param_1;
  piVar3 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 0xc;
  for (; (piVar1 != piVar3 && ((*piVar1 != param_2 || (*(longlong *)(piVar1 + 2) != param_3))));
      piVar1 = piVar1 + 0xc) {
  }
  piVar2 = piVar1 + 4;
  if (piVar1 == piVar3) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    *(undefined8 *)piVar2 = param_1[9];
    piVar2[3] = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450c9655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return;
}



// FUNCTION 1450c9660 FUN_1450c9660 body=665 status=ok
// SIG undefined FUN_1450c9660(void)

undefined8 FUN_1450c9660(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  uVar12 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var8 = (ulonglong)uVar12 * 0x30;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(0,_Var8);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar6)) {
      uVar11 = 0;
      if (3 < uVar9) {
        puVar7 = (undefined8 *)((longlong)pvVar6 + 0x20);
        lVar4 = -(longlong)pvVar6;
        lVar10 = (uVar9 - 4 >> 2) + 1;
        uVar11 = lVar10 * 4;
        do {
          if (puVar7 + -4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar7 + -1) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + -4) = 0x3f800000;
            *(undefined4 *)puVar7 = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 4) = 1;
          }
          lVar2 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + -0x20);
          uVar5 = puVar1[1];
          puVar7[-4] = *puVar1;
          puVar7[-3] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + -0x10);
          uVar5 = puVar1[1];
          puVar7[-2] = *puVar1;
          puVar7[-1] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4);
          uVar5 = puVar1[1];
          *puVar7 = *puVar1;
          puVar7[1] = uVar5;
          if (puVar7 + 2 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar7 + 5) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x2c) = 0x3f800000;
            *(undefined4 *)(puVar7 + 6) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x34) = 1;
          }
          lVar2 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + 0x10);
          uVar5 = puVar1[1];
          puVar7[2] = *puVar1;
          puVar7[3] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + 0x20);
          uVar5 = puVar1[1];
          puVar7[4] = *puVar1;
          puVar7[5] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + 0x30);
          uVar5 = puVar1[1];
          puVar7[6] = *puVar1;
          puVar7[7] = uVar5;
          lVar2 = (longlong)puVar7 + (0x40 - (longlong)pvVar6);
          if ((longlong)pvVar6 + lVar2 != 0) {
            *(undefined4 *)(puVar7 + 0xb) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0xc) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 100) = 1;
          }
          lVar3 = *param_1;
          uVar5 = ((undefined8 *)(lVar2 + lVar3))[1];
          puVar7[8] = *(undefined8 *)(lVar2 + lVar3);
          puVar7[9] = uVar5;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar5 = puVar1[1];
          puVar7[10] = *puVar1;
          puVar7[0xb] = uVar5;
          puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar5 = puVar1[1];
          lVar2 = (longlong)puVar7 + (0x70 - (longlong)pvVar6);
          puVar7[0xc] = *puVar1;
          puVar7[0xd] = uVar5;
          if ((longlong)pvVar6 + lVar2 != 0) {
            *(undefined4 *)(puVar7 + 0x11) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x8c) = 0x3f800000;
            *(undefined4 *)(puVar7 + 0x12) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 0x94) = 1;
          }
          lVar3 = *param_1;
          uVar5 = ((undefined8 *)(lVar2 + lVar3))[1];
          puVar7[0xe] = *(undefined8 *)(lVar2 + lVar3);
          puVar7[0xf] = uVar5;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar3);
          uVar5 = puVar1[1];
          puVar7[0x10] = *puVar1;
          puVar7[0x11] = uVar5;
          puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
          uVar5 = puVar1[1];
          puVar7[0x12] = *puVar1;
          puVar7[0x13] = uVar5;
          puVar7 = puVar7 + 0x18;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      if (uVar11 < uVar9) {
        lVar4 = -(longlong)pvVar6;
        lVar10 = uVar9 - uVar11;
        puVar7 = (undefined8 *)(uVar11 * 0x30 + 0x20 + (longlong)pvVar6);
        do {
          if (puVar7 + -4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar7 + -1) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + -4) = 0x3f800000;
            *(undefined4 *)puVar7 = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + 4) = 1;
          }
          lVar2 = *param_1;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + -0x20);
          uVar5 = puVar1[1];
          puVar7[-4] = *puVar1;
          puVar7[-3] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4 + -0x10);
          uVar5 = puVar1[1];
          puVar7[-2] = *puVar1;
          puVar7[-1] = uVar5;
          puVar1 = (undefined8 *)((longlong)puVar7 + lVar2 + lVar4);
          uVar5 = puVar1[1];
          *puVar7 = *puVar1;
          puVar7[1] = uVar5;
          lVar10 = lVar10 + -1;
          puVar7 = puVar7 + 6;
        } while (lVar10 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar6;
  *(uint *)((longlong)param_1 + 0xc) = uVar12;
  return 1;
}



// FUNCTION 1450c9900 FUN_1450c9900 body=202 status=ok
// SIG undefined FUN_1450c9900(void)

undefined8 FUN_1450c9900(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  __uint64 _Var8;
  ulonglong uVar9;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar4 = (uVar2 >> 1) + uVar2;
  if (uVar2 == 0) {
    iVar4 = 1;
  }
  _Var8 = (ulonglong)(iVar4 + uVar2) * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar6 = AK::MemoryMgr::Malloc(0,_Var8);
    if (pvVar6 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar6)) {
        if (uVar9 != 0) {
          lVar7 = 0;
          do {
            lVar3 = *param_1;
            puVar1 = (undefined8 *)(lVar7 + lVar3);
            uVar5 = puVar1[1];
            *(undefined8 *)(lVar7 + (longlong)pvVar6) = *puVar1;
            ((undefined8 *)(lVar7 + (longlong)pvVar6))[1] = uVar5;
            *(undefined8 *)(lVar7 + 0x10 + (longlong)pvVar6) = *(undefined8 *)(lVar7 + 0x10 + lVar3)
            ;
            uVar9 = uVar9 - 1;
            lVar7 = lVar7 + 0x18;
          } while (uVar9 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c99ad;
    }
  }
  else {
    pvVar6 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (pvVar6 != (void *)0x0) {
LAB_1450c99ad:
      *param_1 = (longlong)pvVar6;
      *(uint *)((longlong)param_1 + 0xc) = iVar4 + uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c99d0 FUN_1450c99d0 body=336 status=ok
// SIG undefined FUN_1450c99d0(void)

undefined8 *
FUN_1450c99d0(undefined8 param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = AK::MemoryMgr::Malloc(0x10,0x80);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 2) = 0;
    *puVar5 = &PTR_LAB_149c27090;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined1 *)(puVar5 + 4) = 0xff;
    *(undefined1 *)(puVar5 + 5) = 0xff;
    puVar5[6] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined2 *)(puVar5 + 0xe) = 0;
    puVar5[0xf] = 0;
    puVar5[7] = param_1;
    puVar5[1] = param_2;
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x60);
      if ((uVar1 < 2) && (*(char *)(param_2 + 100) != '\0')) {
        *(uint *)(param_2 + 0x60) = uVar1 + 1;
        if ((1 < uVar1 + 1) || (*(char *)(param_2 + 100) == '\0')) {
          FUN_145355090(param_2);
        }
      }
      else {
        *(uint *)(param_2 + 0x60) = uVar1 + 1;
      }
    }
    *(undefined1 *)(puVar5 + 0xe) = param_3;
    *(undefined1 *)((longlong)puVar5 + 0x71) = param_4;
    FUN_1450ca150(puVar5,0,0,puVar5 + 8);
    puVar7 = (undefined8 *)puVar5[8];
    bVar2 = true;
    puVar6 = puVar5;
    if (puVar7 != puVar7 + *(uint *)(puVar5 + 9)) {
      do {
        if (!bVar2) goto LAB_1450c9af7;
        iVar4 = FUN_14507ec00(g_pGameSyncMgr,*puVar7,puVar5);
        bVar3 = false;
        if (iVar4 == 1) {
          bVar3 = bVar2;
        }
        bVar2 = bVar3;
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined8 *)(puVar5[8] + (ulonglong)*(uint *)(puVar5 + 9) * 8));
      if (!bVar2) {
LAB_1450c9af7:
        AK::MemoryMgr::Free(0x10,puVar5);
        puVar6 = (undefined8 *)0x0;
      }
    }
  }
  return puVar6;
}



// FUNCTION 1450c9b20 FUN_1450c9b20 body=392 status=ok
// SIG undefined FUN_1450c9b20(void)

void FUN_1450c9b20(void *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined4 **)((longlong)param_1 + 0x50);
  if (puVar3 != puVar3 + *(uint *)((longlong)param_1 + 0x58)) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar3,*(undefined1 *)((longlong)param_1 + 0x70));
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)
                       (*(longlong *)((longlong)param_1 + 0x50) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x58) * 4));
  }
  puVar3 = *(undefined4 **)((longlong)param_1 + 0x60);
  if (puVar3 != puVar3 + *(uint *)((longlong)param_1 + 0x68)) {
    do {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                (AK::IAkStreamMgr::m_pStreamMgr,*puVar3,*(undefined1 *)((longlong)param_1 + 0x71));
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)
                       (*(longlong *)((longlong)param_1 + 0x60) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x68) * 4));
  }
  puVar4 = *(undefined8 **)((longlong)param_1 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (puVar4 != puVar4 + *(uint *)((longlong)param_1 + 0x48)) {
    do {
      FUN_14507ee00(g_pGameSyncMgr,*puVar4,param_1);
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)
                       (*(longlong *)((longlong)param_1 + 0x40) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x48) * 8));
  }
  puVar4 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    if ((*(uint *)(puVar4 + 0xc) < 2) && (*(char *)((longlong)puVar4 + 100) != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar2 = *(uint *)(puVar4 + 0xc) - 1;
    *(uint *)(puVar4 + 0xc) = uVar2;
    if ((uVar2 == 0) || (((bVar1 && (uVar2 < 2)) && (*(char *)((longlong)puVar4 + 100) != '\0')))) {
      FUN_1453550a0();
    }
    if (*(int *)(puVar4 + 0xc) == 0) {
      (**(code **)*puVar4)(puVar4,0);
      AK::MemoryMgr::Free(4,puVar4);
    }
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x58) = 0;
    AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x50));
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x68) = 0;
    AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x60));
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
    AK::MemoryMgr::Free(0,*(void **)((longlong)param_1 + 0x40));
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  AK::MemoryMgr::Free(0x10,param_1);
  return;
}



// FUNCTION 1450c9cb0 FUN_1450c9cb0 body=184 status=ok
// SIG undefined FUN_1450c9cb0(void)

undefined8 FUN_1450c9cb0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 1);
  iVar3 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  _Var6 = (ulonglong)(iVar3 + uVar1) << 2;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar4 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
        uVar5 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined4 *)((longlong)pvVar4 + uVar5 * 4) = *(undefined4 *)(*param_1 + uVar5 * 4);
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450c9d4b;
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar4 != (void *)0x0) {
LAB_1450c9d4b:
      *param_1 = (longlong)pvVar4;
      *(uint *)((longlong)param_1 + 0xc) = iVar3 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450c9d70 FUN_1450c9d70 body=274 status=ok
// SIG undefined FUN_1450c9d70(void)

uint * FUN_1450c9d70(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  void *_Src;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  if (uVar8 != 0) {
    do {
      iVar6 = (uVar8 >> 1) + uVar7;
      uVar1 = *(uint *)(*param_1 + (longlong)iVar6 * 4);
      if (uVar1 == param_2) {
        return (uint *)(*param_1 + (longlong)iVar6 * 4);
      }
      uVar4 = uVar8 - 1;
      uVar2 = iVar6 + 1;
      if (param_2 <= uVar1) {
        uVar4 = uVar8;
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
      uVar8 = uVar4 >> 1;
    } while (uVar8 != 0);
  }
  puVar5 = (uint *)(param_1 + 1);
  uVar8 = *puVar5;
  if (*param_1 + (longlong)(int)uVar7 * 4 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar8) &&
       (cVar3 = FUN_1450c9cb0(param_1), cVar3 == '\0')) {
      return (uint *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar8) {
      return (uint *)0x0;
    }
    uVar8 = *puVar5;
    *puVar5 = uVar8 + 1;
    puVar5 = (uint *)(*param_1 + (ulonglong)uVar8 * 4);
  }
  else {
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar8) &&
        (cVar3 = FUN_1450c9cb0(param_1), cVar3 == '\0')) ||
       (puVar5 = (uint *)(param_1 + 1), *(uint *)((longlong)param_1 + 0xc) <= uVar8)) {
      return (uint *)0x0;
    }
    _Src = (void *)(*param_1 + (ulonglong)uVar7 * 4);
    if (uVar7 < *puVar5) {
      memmove((void *)((longlong)_Src + 4),_Src,(ulonglong)((*puVar5 - uVar7) * 4));
    }
    *puVar5 = *puVar5 + 1;
    puVar5 = (uint *)(*param_1 + (ulonglong)uVar7 * 4);
  }
  if (puVar5 != (uint *)0x0) {
    *puVar5 = param_2;
  }
  return puVar5;
}



// FUNCTION 1450c9ea0 FUN_1450c9ea0 body=101 status=ok
// SIG undefined FUN_1450c9ea0(void)

void FUN_1450c9ea0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 local_18;
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  local_18 = 0;
  local_10 = 0;
  FUN_1450ca150(param_1,param_2,*param_5,&local_18);
  FUN_1450c9f10(param_1,&local_18);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  return;
}



// FUNCTION 1450c9f10 FUN_1450c9f10 body=566 status=ok
// SIG undefined FUN_1450c9f10(void)

ulonglong FUN_1450c9f10(longlong param_1,longlong *param_2)

{
  uint5 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  uint5 *puVar6;
  uint5 *puVar7;
  longlong lVar8;
  
  puVar7 = *(uint5 **)(param_1 + 0x40);
  puVar6 = (uint5 *)*param_2;
  if (puVar7 != puVar7 + *(uint *)(param_1 + 0x48)) {
    while( true ) {
      uVar3 = (ulonglong)*(uint *)(param_2 + 1);
      lVar8 = *param_2;
      if (puVar6 == (uint5 *)(lVar8 + uVar3 * 8)) break;
      do {
        if ((ulonglong)*puVar7 <= (ulonglong)*puVar6) break;
        uVar3 = FUN_14507ec00(g_pGameSyncMgr,*(undefined8 *)puVar6,param_1);
        if ((int)uVar3 != 1) goto LAB_1450ca142;
        uVar3 = (ulonglong)*(uint *)(param_2 + 1);
        puVar6 = puVar6 + 1;
        lVar8 = *param_2;
      } while (puVar6 != (uint5 *)(lVar8 + uVar3 * 8));
      puVar1 = (uint5 *)(lVar8 + uVar3 * 8);
      if (puVar6 != puVar1) {
        do {
          if ((puVar7 == (uint5 *)(*(longlong *)(param_1 + 0x40) +
                                  (ulonglong)*(uint *)(param_1 + 0x48) * 8)) ||
             ((ulonglong)*puVar6 != (ulonglong)*puVar7)) break;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar6 != puVar1);
      }
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
      lVar8 = *(longlong *)(param_1 + 0x40);
      uVar3 = uVar4;
      if (puVar7 != (uint5 *)(lVar8 + uVar4 * 8)) {
        do {
          uVar3 = uVar4;
          if ((ulonglong)*puVar6 <= (ulonglong)*puVar7) break;
          FUN_14507ee00(g_pGameSyncMgr,*(undefined8 *)puVar7,param_1);
          uVar4 = (ulonglong)*(uint *)(param_1 + 0x48);
          puVar7 = puVar7 + 1;
          lVar8 = *(longlong *)(param_1 + 0x40);
          uVar3 = (ulonglong)*(uint *)(param_1 + 0x48);
        } while (puVar7 != (uint5 *)(lVar8 + uVar4 * 8));
      }
      if (puVar7 == (uint5 *)(lVar8 + uVar3 * 8)) break;
    }
  }
  if (puVar6 != (uint5 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8)) {
    do {
      uVar3 = FUN_14507ec00(g_pGameSyncMgr,*(undefined8 *)puVar6,param_1);
      if ((int)uVar3 != 1) {
LAB_1450ca142:
        return uVar3 & 0xffffffffffffff00;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (uint5 *)(*param_2 + (ulonglong)*(uint *)(param_2 + 1) * 8));
  }
  pvVar5 = *(void **)(param_1 + 0x40);
  if (puVar7 != (uint5 *)((longlong)pvVar5 + (ulonglong)*(uint *)(param_1 + 0x48) * 8)) {
    do {
      FUN_14507ee00(g_pGameSyncMgr,*(undefined8 *)puVar7,param_1);
      pvVar5 = *(void **)(param_1 + 0x40);
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint5 *)((longlong)pvVar5 + (ulonglong)*(uint *)(param_1 + 0x48) * 8));
  }
  if (pvVar5 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    AK::MemoryMgr::Free(0,pvVar5);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(longlong *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x48) = (int)param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 1450ca150 FUN_1450ca150 body=1131 status=ok
// SIG undefined FUN_1450ca150(void)

void FUN_1450ca150(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  void *_Src;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  ulonglong local_80;
  undefined4 *local_78;
  ulonglong uStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined8 local_48;
  byte local_40;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  
  local_78 = *(undefined4 **)(param_1 + 0x50);
  uStack_70 = *(ulonglong *)(param_1 + 0x58);
  local_68 = *(undefined4 **)(param_1 + 0x60);
  uStack_60 = *(ulonglong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_1450db810(*(undefined8 *)(param_1 + 0x38),&local_98,&local_88,param_4,
                *(undefined8 *)(param_1 + 8),param_2,param_3);
  plVar15 = local_98;
  if (local_98 != local_98 + (local_90 & 0xffffffff)) {
    do {
      lVar3 = *plVar15;
      uVar14 = *(uint *)(param_1 + 0x58);
      uVar1 = *(uint *)(lVar3 + 4);
      if (uVar14 != 0) {
        iVar8 = 0;
        do {
          iVar12 = (uVar14 >> 1) + iVar8;
          uVar19 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 4);
          if (uVar19 == uVar1) {
            if (*(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 4 != 0) goto LAB_1450ca297;
            break;
          }
          iVar12 = iVar12 + 1;
          uVar18 = uVar14 - 1;
          if (uVar1 <= uVar19) {
            iVar12 = iVar8;
            uVar18 = uVar14;
          }
          uVar14 = uVar18 >> 1;
          iVar8 = iVar12;
        } while (uVar14 != 0);
      }
      if (*(int *)(lVar3 + 8) != 0) {
        local_3c = 0xffffffff;
        if ((*(uint *)(lVar3 + 0xc) & 0x500) == 0) {
          local_3c = uVar1;
        }
        local_40 = (byte)*(uint *)(lVar3 + 0xc) & 1;
        local_58 = 0;
        local_54 = (uint)*(ushort *)(lVar3 + 0x1a);
        local_50 = 0;
        local_48 = 0;
        local_34 = 0;
        local_38 = *(int *)(lVar3 + 8);
        iVar8 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                          (AK::IAkStreamMgr::m_pStreamMgr,uVar1,&local_58,
                           *(undefined1 *)(param_1 + 0x70));
        if (iVar8 == 1) {
          FUN_1450c9d70(param_1 + 0x50,uVar1);
        }
      }
LAB_1450ca297:
      plVar15 = plVar15 + 1;
    } while (plVar15 != local_98 + (local_90 & 0xffffffff));
  }
  plVar15 = local_88;
  if (local_88 != local_88 + (local_80 & 0xffffffff)) {
    do {
      uVar18 = 0;
      lVar3 = *plVar15;
      uVar19 = 0;
      uVar14 = *(uint *)(param_1 + 0x58);
      uVar1 = *(uint *)(lVar3 + 4);
      if (uVar14 != 0) {
        uVar10 = uVar18;
        do {
          iVar8 = (uVar14 >> 1) + uVar10;
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 4);
          if (uVar2 == uVar1) {
            if (*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 4 != 0) goto LAB_1450ca4ad;
            break;
          }
          if (uVar2 < uVar1) {
            uVar10 = iVar8 + 1;
            uVar14 = uVar14 - 1;
          }
          uVar14 = uVar14 >> 1;
        } while (uVar14 != 0);
      }
      uVar14 = *(uint *)(param_1 + 0x68);
      if (uVar14 != 0) {
        uVar10 = uVar18;
        do {
          iVar8 = (uVar14 >> 1) + uVar10;
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar8 * 4);
          if (uVar2 == uVar1) {
            if (*(longlong *)(param_1 + 0x60) + (longlong)iVar8 * 4 != 0) goto LAB_1450ca4ad;
            break;
          }
          uVar9 = iVar8 + 1;
          uVar4 = uVar14 - 1;
          if (uVar1 <= uVar2) {
            uVar9 = uVar10;
            uVar4 = uVar14;
          }
          uVar14 = uVar4 >> 1;
          uVar10 = uVar9;
        } while (uVar14 != 0);
      }
      if (*(int *)(lVar3 + 8) != 0) {
        local_3c = 0xffffffff;
        if ((*(uint *)(lVar3 + 0xc) & 0x500) == 0) {
          local_3c = uVar1;
        }
        local_40 = (byte)*(uint *)(lVar3 + 0xc) & 1;
        local_58 = 0;
        local_54 = (uint)*(ushort *)(lVar3 + 0x1a);
        local_50 = 0;
        local_48 = 0;
        local_34 = 0;
        local_38 = *(int *)(lVar3 + 8);
        iVar8 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x40))
                          (AK::IAkStreamMgr::m_pStreamMgr,uVar1,&local_58,
                           *(undefined1 *)(param_1 + 0x71));
        if (iVar8 == 1) {
          uVar14 = *(uint *)(param_1 + 0x68);
          if (uVar14 != 0) {
            uVar19 = uVar18;
            do {
              iVar8 = (uVar14 >> 1) + uVar19;
              uVar18 = *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar8 * 4);
              if (uVar18 == uVar1) goto LAB_1450ca4ad;
              uVar10 = uVar14 - 1;
              uVar2 = iVar8 + 1;
              if (uVar1 <= uVar18) {
                uVar10 = uVar14;
                uVar2 = uVar19;
              }
              uVar19 = uVar2;
              uVar14 = uVar10 >> 1;
            } while (uVar14 != 0);
          }
          uVar14 = *(uint *)(param_1 + 0x68);
          if (*(longlong *)(param_1 + 0x60) + (longlong)(int)uVar19 * 4 == 0) {
            if (((uVar14 < *(uint *)(param_1 + 0x6c)) ||
                (cVar7 = FUN_1450c9cb0(param_1 + 0x60), cVar7 != '\0')) &&
               (uVar14 < *(uint *)(param_1 + 0x6c))) {
              uVar14 = *(uint *)(param_1 + 0x68);
              *(uint *)(param_1 + 0x68) = uVar14 + 1;
              puVar13 = (uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar14 * 4);
              goto LAB_1450ca49e;
            }
          }
          else if (((uVar14 < *(uint *)(param_1 + 0x6c)) ||
                   (cVar7 = FUN_1450c9cb0(param_1 + 0x60), cVar7 != '\0')) &&
                  (uVar14 < *(uint *)(param_1 + 0x6c))) {
            _Src = (void *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar19 * 4);
            if (uVar19 < *(uint *)(param_1 + 0x68)) {
              memmove((void *)((longlong)_Src + 4),_Src,
                      (ulonglong)((*(uint *)(param_1 + 0x68) - uVar19) * 4));
            }
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
            puVar13 = (uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)uVar19 * 4);
LAB_1450ca49e:
            if (puVar13 != (uint *)0x0) {
              *puVar13 = uVar1;
            }
          }
        }
      }
LAB_1450ca4ad:
      plVar15 = plVar15 + 1;
    } while (plVar15 != local_88 + (local_80 & 0xffffffff));
  }
  puVar6 = local_78;
  puVar17 = local_78 + (uStack_70 & 0xffffffff);
  puVar5 = local_68;
  for (puVar16 = local_78; local_68 = puVar5, puVar16 != puVar17; puVar16 = puVar16 + 1) {
    (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
              (AK::IAkStreamMgr::m_pStreamMgr,*puVar16,*(undefined1 *)(param_1 + 0x70));
    puVar5 = local_68;
  }
  uVar11 = uStack_60 & 0xffffffff;
  for (puVar17 = puVar5; puVar17 != puVar5 + uVar11; puVar17 = puVar17 + 1) {
    (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
              (AK::IAkStreamMgr::m_pStreamMgr,*puVar17,*(undefined1 *)(param_1 + 0x71));
  }
  if (puVar6 != (undefined4 *)0x0) {
    AK::MemoryMgr::Free(0,puVar6);
  }
  if (puVar5 != (undefined4 *)0x0) {
    AK::MemoryMgr::Free(0,puVar5);
  }
  if (local_98 != (longlong *)0x0) {
    local_90 = local_90 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_98);
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff;
  }
  if (local_88 != (longlong *)0x0) {
    local_80 = local_80 & 0xffffffff00000000;
    AK::MemoryMgr::Free(0,local_88);
  }
  return;
}



// FUNCTION 1450ca5c0 FUN_1450ca5c0 body=437 status=ok
// SIG undefined FUN_1450ca5c0(void)

undefined8 FUN_1450ca5c0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  
  uVar12 = 0;
  puVar15 = &DAT_149c27020;
  do {
    uVar3 = *puVar15;
    uVar13 = (ulonglong)uVar3;
    if (param_2 < uVar3) {
      if (uVar3 == 0) {
        return 2;
      }
      uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
      plVar6 = (longlong *)*param_1;
      uVar12 = *(uint *)(param_1 + 1);
      uVar17 = (ulonglong)uVar12;
      param_1[1] = 0;
      *param_1 = 0;
      pvVar10 = AK::MemoryMgr::Malloc(0,uVar13 * 8);
      pvVar7 = (void *)*param_1;
      if (pvVar10 == (void *)0x0) {
        if (pvVar7 != (void *)0x0) {
          *(undefined4 *)(param_1 + 1) = 0;
          AK::MemoryMgr::Free(0,pvVar7);
        }
        *param_1 = (longlong)plVar6;
        uVar11 = 2;
        *(uint *)(param_1 + 1) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      }
      else {
        if ((pvVar7 != (void *)0x0) && (pvVar7 != pvVar10)) {
          AK::MemoryMgr::Free(0,pvVar7);
        }
        *param_1 = (longlong)pvVar10;
        *(uint *)((longlong)param_1 + 0xc) = uVar3;
        uVar14 = uVar13;
        do {
          uVar5 = *(uint *)(param_1 + 1);
          if (uVar5 < (uint)uVar13) {
            *(uint *)(param_1 + 1) = uVar5 + 1;
            puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar5 * 8);
            if (puVar1 != (undefined8 *)0x0) {
              *puVar1 = 0;
              uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
            }
          }
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        plVar16 = plVar6;
        if (uVar12 != 0) {
          do {
            lVar9 = *plVar16;
            while (lVar9 != 0) {
              lVar8 = *(longlong *)(lVar9 + 0x78);
              lVar2 = ((ulonglong)
                       ((uint)(*(ulonglong *)(lVar9 + 8) >> 4) ^
                       (uint)(*(ulonglong *)(lVar9 + 0x38) >> 4)) % (ulonglong)uVar3) * 8;
              *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar2 + *param_1);
              *(longlong *)(lVar2 + *param_1) = lVar9;
              lVar9 = lVar8;
            }
            uVar17 = uVar17 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar17 != 0);
        }
        if (plVar6 != (longlong *)0x0) {
          AK::MemoryMgr::Free(0,plVar6);
        }
        uVar11 = 1;
      }
      return uVar11;
    }
    uVar12 = uVar12 + 1;
    puVar15 = puVar15 + 1;
  } while (uVar12 < 0x1b);
  return 2;
}



// FUNCTION 1450ca780 FUN_1450ca780 body=170 status=ok
// SIG undefined FUN_1450ca780(void)

undefined8 FUN_1450ca780(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(0,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1450ca830 FUN_1450ca830 body=622 status=ok
// SIG undefined FUN_1450ca830(void)

void FUN_1450ca830(ulonglong param_1,ulonglong param_2,char param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  if (DAT_14c79c4a0 != 0) {
    for (uVar4 = *(ulonglong *)
                  (DAT_14c79c498 +
                  ((ulonglong)((uint)(param_1 >> 4) ^ (uint)(param_2 >> 4)) %
                  (ulonglong)DAT_14c79c4a0) * 8);
        (uVar6 = 0, uVar4 != 0 &&
        ((*(ulonglong *)(uVar4 + 8) != param_2 ||
         (uVar6 = uVar4, *(ulonglong *)(uVar4 + 0x38) != param_1))));
        uVar4 = *(ulonglong *)(uVar4 + 0x78)) {
    }
    if (uVar6 != 0) {
      if ((param_3 != *(char *)(uVar6 + 0x70)) || (param_4 != *(char *)(uVar6 + 0x71))) {
        puVar5 = *(undefined4 **)(uVar6 + 0x50);
        if (puVar5 != puVar5 + *(uint *)(uVar6 + 0x58)) {
          do {
            (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x50))
                      (AK::IAkStreamMgr::m_pStreamMgr,*puVar5,param_3,*(undefined1 *)(uVar6 + 0x70))
            ;
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined4 *)
                             (*(longlong *)(uVar6 + 0x50) + (ulonglong)*(uint *)(uVar6 + 0x58) * 4))
          ;
        }
        puVar5 = *(undefined4 **)(uVar6 + 0x60);
        if (puVar5 != puVar5 + *(uint *)(uVar6 + 0x68)) {
          do {
            (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x50))
                      (AK::IAkStreamMgr::m_pStreamMgr,*puVar5,param_4,*(undefined1 *)(uVar6 + 0x71))
            ;
            puVar5 = puVar5 + 1;
          } while (puVar5 != (undefined4 *)
                             (*(longlong *)(uVar6 + 0x60) + (ulonglong)*(uint *)(uVar6 + 0x68) * 4))
          ;
        }
        *(char *)(uVar6 + 0x70) = param_3;
        *(char *)(uVar6 + 0x71) = param_4;
      }
      goto LAB_1450caa77;
    }
  }
  if ((DAT_14c79c4a8 == 0) &&
     (((DAT_14c79c4a8 = 0, 0x1d < DAT_14c79c4a0 || (0x1c < DAT_14c79c4a4)) ||
      (cVar1 = FUN_1450ca780(&DAT_14c79c498,0x1d - DAT_14c79c4a4), cVar1 != '\0')))) {
    DAT_14c79c4a0 = 0x1d;
    uVar4 = 0;
    do {
      uVar3 = (int)uVar4 + 1;
      *(undefined8 *)(DAT_14c79c498 + uVar4 * 8) = 0;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < DAT_14c79c4a0);
  }
  lVar2 = FUN_1450c99d0(param_1,param_2,param_3,param_4);
  if (lVar2 != 0) {
    uVar4 = (ulonglong)DAT_14c79c4a0;
    if ((DAT_14c79c4a0 == 0) || (0.9 < (float)DAT_14c79c4a8 / (float)uVar4)) {
      FUN_1450ca5c0(&DAT_14c79c498);
      uVar4 = (ulonglong)DAT_14c79c4a0;
    }
    if ((int)uVar4 != 0) {
      uVar4 = (ulonglong)
              ((uint)(*(ulonglong *)(lVar2 + 8) >> 4) ^ (uint)(*(ulonglong *)(lVar2 + 0x38) >> 4)) %
              uVar4;
      *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(DAT_14c79c498 + uVar4 * 8);
      *(longlong *)(DAT_14c79c498 + uVar4 * 8) = lVar2;
      DAT_14c79c4a8 = DAT_14c79c4a8 + 1;
    }
  }
LAB_1450caa77:
                    /* WARNING: Could not recover jumptable at 0x0001450caa97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  return;
}



// FUNCTION 1450caaa0 FUN_1450caaa0 body=225 status=ok
// SIG undefined FUN_1450caaa0(void)

void FUN_1450caaa0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  if (DAT_14c79c4a0 != 0) {
    uVar1 = (ulonglong)((uint)(param_1 >> 4) ^ (uint)(param_2 >> 4)) % (ulonglong)DAT_14c79c4a0;
    lVar4 = *(longlong *)((longlong)DAT_14c79c498 + uVar1 * 8);
    lVar3 = 0;
    while (lVar2 = lVar4, lVar2 != 0) {
      if ((*(ulonglong *)(lVar2 + 8) == param_2) && (*(ulonglong *)(lVar2 + 0x38) == param_1)) {
        if (lVar2 != 0) {
          if (lVar3 == 0) {
            *(undefined8 *)((longlong)DAT_14c79c498 + uVar1 * 8) = *(undefined8 *)(lVar2 + 0x78);
          }
          else {
            *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
          }
          DAT_14c79c4a8 = DAT_14c79c4a8 + -1;
          FUN_1450c9b20();
        }
        break;
      }
      lVar3 = lVar2;
      lVar4 = *(longlong *)(lVar2 + 0x78);
    }
  }
  if ((DAT_14c79c4a8 == 0) && (DAT_14c79c498 != (void *)0x0)) {
    DAT_14c79c4a0 = 0;
    AK::MemoryMgr::Free(0,DAT_14c79c498);
    DAT_14c79c498 = (void *)0x0;
    DAT_14c79c4a4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001450cab7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  return;
}



// FUNCTION 1450cab90 FUN_1450cab90 body=848 status=ok
// SIG undefined FUN_1450cab90(void)

void FUN_1450cab90(longlong param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar8;
  void *pvVar9;
  longlong *plVar10;
  uint uStack_50;
  void *pvStack_40;
  void *pvVar7;
  
  if (DAT_14c79c4a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
    pvVar9 = (void *)0x0;
    plVar10 = DAT_14c79c498;
    if (DAT_14c79c4a0 != 0) {
      pvVar4 = (void *)*DAT_14c79c498;
      pvVar7 = pvVar9;
      while (pvVar4 == (void *)0x0) {
        uVar6 = (int)pvVar7 + 1;
        pvVar7 = (void *)(ulonglong)uVar6;
        if (DAT_14c79c4a0 <= uVar6) goto LAB_1450cae54;
        pvVar4 = (void *)DAT_14c79c498[(longlong)pvVar7];
      }
      do {
        while (*(longlong *)((longlong)pvVar4 + 0x38) != param_1) {
          pvVar5 = *(void **)((longlong)pvVar4 + 0x78);
          pvStack_40 = pvVar4;
          while (pvVar4 = pvVar5, pvVar9 = pvStack_40, pvVar5 == (void *)0x0) {
            uVar6 = (int)pvVar7 + 1;
            pvVar7 = (void *)(ulonglong)uVar6;
            if (DAT_14c79c4a0 <= uVar6) goto LAB_1450cae3b;
            pvStack_40 = (void *)0x0;
            pvVar5 = (void *)DAT_14c79c498[(longlong)pvVar7];
          }
        }
        uStack_50 = (uint)pvVar7;
        pvVar5 = *(void **)((longlong)pvVar4 + 0x78);
        pvVar8 = pvVar7;
        pvStack_40 = pvVar9;
        while (pvVar5 == (void *)0x0) {
          uStack_50 = (int)pvVar8 + 1;
          pvVar8 = (void *)(ulonglong)uStack_50;
          if (DAT_14c79c4a0 <= uStack_50) break;
          pvStack_40 = (void *)0x0;
          pvVar5 = (void *)DAT_14c79c498[(longlong)pvVar8];
        }
        if (pvVar9 == (void *)0x0) {
          plVar10[(longlong)pvVar7] = *(longlong *)((longlong)pvVar4 + 0x78);
        }
        else {
          *(longlong *)((longlong)pvVar9 + 0x78) = *(longlong *)((longlong)pvVar4 + 0x78);
        }
        DAT_14c79c4a8 = DAT_14c79c4a8 + -1;
        puVar2 = *(undefined4 **)((longlong)pvVar4 + 0x50);
        if (puVar2 != puVar2 + *(uint *)((longlong)pvVar4 + 0x58)) {
          do {
            (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                      (AK::IAkStreamMgr::m_pStreamMgr,*puVar2,
                       *(undefined1 *)((longlong)pvVar4 + 0x70));
            puVar2 = puVar2 + 1;
          } while (puVar2 != (undefined4 *)
                             (*(longlong *)((longlong)pvVar4 + 0x50) +
                             (ulonglong)*(uint *)((longlong)pvVar4 + 0x58) * 4));
        }
        puVar2 = *(undefined4 **)((longlong)pvVar4 + 0x60);
        if (puVar2 != puVar2 + *(uint *)((longlong)pvVar4 + 0x68)) {
          do {
            (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x48))
                      (AK::IAkStreamMgr::m_pStreamMgr,*puVar2,
                       *(undefined1 *)((longlong)pvVar4 + 0x71));
            puVar2 = puVar2 + 1;
          } while (puVar2 != (undefined4 *)
                             (*(longlong *)((longlong)pvVar4 + 0x60) +
                             (ulonglong)*(uint *)((longlong)pvVar4 + 0x68) * 4));
        }
        puVar3 = *(undefined8 **)((longlong)pvVar4 + 0x40);
        *(undefined4 *)((longlong)pvVar4 + 0x58) = 0;
        *(undefined4 *)((longlong)pvVar4 + 0x68) = 0;
        if (puVar3 != puVar3 + *(uint *)((longlong)pvVar4 + 0x48)) {
          do {
            FUN_14507ee00(g_pGameSyncMgr,*puVar3,pvVar4);
            puVar3 = puVar3 + 1;
          } while (puVar3 != (undefined8 *)
                             (*(longlong *)((longlong)pvVar4 + 0x40) +
                             (ulonglong)*(uint *)((longlong)pvVar4 + 0x48) * 8));
        }
        puVar3 = *(undefined8 **)((longlong)pvVar4 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          if ((*(uint *)(puVar3 + 0xc) < 2) && (*(char *)((longlong)puVar3 + 100) != '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          uVar6 = *(uint *)(puVar3 + 0xc) - 1;
          *(uint *)(puVar3 + 0xc) = uVar6;
          if ((uVar6 == 0) ||
             (((bVar1 && (uVar6 < 2)) && (*(char *)((longlong)puVar3 + 100) != '\0')))) {
            FUN_1453550a0();
          }
          if (*(int *)(puVar3 + 0xc) == 0) {
            (**(code **)*puVar3)(puVar3,0);
            AK::MemoryMgr::Free(4,puVar3);
          }
        }
        if (*(void **)((longlong)pvVar4 + 0x50) != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar4 + 0x58) = 0;
          AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar4 + 0x50));
          *(undefined8 *)((longlong)pvVar4 + 0x50) = 0;
          *(undefined4 *)((longlong)pvVar4 + 0x5c) = 0;
        }
        if (*(void **)((longlong)pvVar4 + 0x60) != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar4 + 0x68) = 0;
          AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar4 + 0x60));
          *(undefined8 *)((longlong)pvVar4 + 0x60) = 0;
          *(undefined4 *)((longlong)pvVar4 + 0x6c) = 0;
        }
        if (*(void **)((longlong)pvVar4 + 0x40) != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar4 + 0x48) = 0;
          AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar4 + 0x40));
          *(undefined8 *)((longlong)pvVar4 + 0x40) = 0;
          *(undefined4 *)((longlong)pvVar4 + 0x4c) = 0;
        }
        AK::MemoryMgr::Free(0x10,pvVar4);
        pvVar7 = (void *)(ulonglong)uStack_50;
        plVar10 = DAT_14c79c498;
LAB_1450cae3b:
        pvVar4 = pvVar5;
        pvVar9 = pvStack_40;
      } while (pvVar5 != (void *)0x0);
    }
LAB_1450cae54:
    if ((DAT_14c79c4a8 == 0) && (plVar10 != (longlong *)0x0)) {
      DAT_14c79c4a0 = 0;
      AK::MemoryMgr::Free(0,plVar10);
      DAT_14c79c498 = (longlong *)0x0;
      DAT_14c79c4a4 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  }
  return;
}



// FUNCTION 1450caee0 FUN_1450caee0 body=427 status=ok
// SIG undefined FUN_1450caee0(void)

undefined8 FUN_1450caee0(ulonglong param_1,ulonglong param_2,float *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  char local_res8 [8];
  float local_res10 [2];
  
  fVar6 = 100.0;
  *param_4 = '\0';
  *param_3 = 0.0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  if (DAT_14c79c4a0 != 0) {
    for (lVar5 = *(longlong *)
                  (DAT_14c79c498 +
                  ((ulonglong)((uint)(param_1 >> 4) ^ (uint)(param_2 >> 4)) %
                  (ulonglong)DAT_14c79c4a0) * 8); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x78)) {
      if ((*(ulonglong *)(lVar5 + 8) == param_2) && (*(ulonglong *)(lVar5 + 0x38) == param_1))
      goto LAB_1450caf6f;
    }
    lVar5 = 0;
LAB_1450caf6f:
    if (lVar5 != 0) {
      puVar3 = *(undefined4 **)(lVar5 + 0x50);
      fVar7 = fVar6;
      if (puVar3 != puVar3 + *(uint *)(lVar5 + 0x58)) {
        do {
          iVar2 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x58))
                            (AK::IAkStreamMgr::m_pStreamMgr,*puVar3,local_res10,local_res8);
          if (iVar2 != 1) goto LAB_1450cb05f;
          fVar6 = local_res10[0];
          if (fVar7 <= local_res10[0]) {
            fVar6 = fVar7;
          }
          if ((*param_4 == '\0') && (local_res8[0] == '\0')) {
            cVar1 = '\0';
          }
          else {
            cVar1 = '\x01';
          }
          *param_4 = cVar1;
          puVar3 = puVar3 + 1;
          fVar7 = fVar6;
        } while (puVar3 != (undefined4 *)
                           (*(longlong *)(lVar5 + 0x50) + (ulonglong)*(uint *)(lVar5 + 0x58) * 4));
      }
      puVar3 = *(undefined4 **)(lVar5 + 0x60);
      fVar7 = fVar6;
      if (puVar3 != puVar3 + *(uint *)(lVar5 + 0x68)) {
        do {
          iVar2 = (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 0x58))
                            (AK::IAkStreamMgr::m_pStreamMgr,*puVar3,local_res10,local_res8);
          if (iVar2 != 1) goto LAB_1450cb05f;
          fVar6 = local_res10[0];
          if (fVar7 <= local_res10[0]) {
            fVar6 = fVar7;
          }
          if ((*param_4 == '\0') && (local_res8[0] == '\0')) {
            cVar1 = '\0';
          }
          else {
            cVar1 = '\x01';
          }
          *param_4 = cVar1;
          puVar3 = puVar3 + 1;
          fVar7 = fVar6;
        } while (puVar3 != (undefined4 *)
                           (*(longlong *)(lVar5 + 0x60) + (ulonglong)*(uint *)(lVar5 + 0x68) * 4));
      }
      *param_3 = fVar6;
      uVar4 = 1;
      goto LAB_1450cb064;
    }
  }
LAB_1450cb05f:
  uVar4 = 2;
LAB_1450cb064:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c79c470);
  return uVar4;
}



// FUNCTION 1450cb090 FUN_1450cb090 body=139 status=ok
// SIG undefined FUN_1450cb090(void)

undefined8 * FUN_1450cb090(void)

{
  undefined8 *puVar1;
  undefined4 in_R9D;
  
  if (DAT_14c79c4b0 == (undefined8 *)0x0) {
    puVar1 = AK::MemoryMgr::Malloc(0,0x40);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_14539af50(puVar1);
      *puVar1 = &PTR_LAB_149c270a0;
      DAT_14c79c4b0 = puVar1;
      puVar1[7] = 0;
    }
    if (DAT_14c79c4b0 != (undefined8 *)0x0) {
      AK::SoundEngine::RegisterGlobalCallback
                (FUN_1450cb1d0,0x10,(void *)0x0,CONCAT31((int3)((uint)in_R9D >> 8),8),0,0x322);
    }
  }
  return DAT_14c79c4b0;
}



// FUNCTION 1450cb120 FUN_1450cb120 body=164 status=ok
// SIG undefined FUN_1450cb120(void)

void FUN_1450cb120(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  AK::SoundEngine::UnregisterGlobalCallback(FUN_1450cb1d0,0x10);
  plVar2 = (longlong *)param_1[2];
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    FUN_14539b0f0(param_1,plVar2);
    FUN_14539b470(param_1,plVar2);
    FUN_14539b610(param_1,plVar2);
    (**(code **)(*plVar2 + 0x38))(plVar2);
    FUN_14539ac10(plVar2);
    plVar2 = plVar1;
  }
  *param_1 = &PTR_LAB_149c270a0;
  DAT_14c79c4b0 = 0;
  FUN_14539af80();
  AK::MemoryMgr::Free(0,param_1);
  return;
}



// FUNCTION 1450cb1d0 FUN_1450cb1d0 body=264 status=ok
// SIG undefined FUN_1450cb1d0(void)

void FUN_1450cb1d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined2 uVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (DAT_14c79c4b0 != 0) {
    *(ulonglong *)(DAT_14c79c4b0 + 0x38) =
         ((ulonglong)*(uint *)(DAT_14c790fd8 + 0x88) + 1) * (ulonglong)DAT_14c72f434;
    uVar5 = (**(code **)(*param_1 + 0x10))();
    lVar3 = DAT_14c79c4b0;
    if (DAT_14c79c4b0 != 0) {
      local_18 = 0;
      uStack_10 = 0;
      plVar1 = *(longlong **)(DAT_14c79c4b0 + 0x10);
      while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
        plVar1 = (longlong *)plVar2[1];
        FUN_14539c050(plVar2,&local_18,uVar5);
        cVar4 = FUN_14539c150(plVar2);
        if ((cVar4 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_14539b0f0(lVar3,plVar2);
          FUN_14539b470(lVar3,plVar2);
          FUN_14539b610(lVar3,plVar2);
          (**(code **)(*plVar2 + 0x38))(plVar2);
          FUN_14539ac10(plVar2);
        }
      }
      FUN_14539b6c0(lVar3,&local_18,uVar5);
    }
  }
  return;
}



// FUNCTION 1450cb2e0 FUN_1450cb2e0 body=254 status=ok
// SIG undefined FUN_1450cb2e0(void)

void FUN_1450cb2e0(longlong param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[1];
    if (((int)plVar2[7] == param_3) || (param_3 == 0)) {
      if (plVar2[2] == 0) {
        lVar3 = -1;
      }
      else {
        lVar3 = *(longlong *)(plVar2[2] + 0x58);
      }
      if (((lVar3 == param_4) || (param_4 == -1)) &&
         ((*(int *)((longlong)plVar2 + 0x2c) == param_5 || (param_5 == 0)))) {
        if (param_2 == 0) {
          FUN_14539b0f0(param_1,plVar2);
          FUN_14539b470(param_1,plVar2);
          FUN_14539b610(param_1,plVar2);
          (**(code **)(*plVar2 + 0x38))(plVar2);
          FUN_14539ac10(plVar2);
        }
        else if (param_2 == 1) {
          FUN_14539c310(plVar2);
        }
        else if (param_2 == 2) {
          FUN_14539c340(plVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1450cb3e0 FUN_1450cb3e0 body=449 status=ok
// SIG undefined FUN_1450cb3e0(void)

void FUN_1450cb3e0(longlong param_1,int param_2,__uint64 param_3,int param_4,longlong param_5,
                  uint param_6,char param_7)

{
  longlong *plVar1;
  CAkRegisteredObj *pCVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if ((((DAT_14c79c4b0 != 0) && (param_2 != 0)) && (param_3 != 0xffffffffffffffff)) &&
     (pCVar2 = CAkRegistryMgr::GetObj(g_pRegistryMgr,param_3), pCVar2 != (CAkRegisteredObj *)0x0)) {
    if (DAT_14c79c4b0 != 0) {
      for (lVar3 = *(longlong *)(param_1 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
        if (((*(int *)(lVar3 + 0x38) == param_2) &&
            ((*(int *)(lVar3 + 0x2c) == param_4 || (param_4 == 0)))) &&
           (*(CAkRegisteredObj **)(lVar3 + 0x10) == pCVar2)) goto LAB_1450cb47f;
      }
    }
    lVar3 = FUN_1450cb690(param_1,param_2,param_4,pCVar2,0);
    if (lVar3 != 0) {
LAB_1450cb47f:
      uVar5 = 0;
      if (param_6 != 0) {
        plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        do {
          lVar4 = (ulonglong)uVar5 * 0x14 + param_5;
          uVar6 = *(ulonglong *)(lVar4 + 0xc);
          if (param_7 != '\0') {
            if ((*(int *)(*plVar1 + 0x110) < DAT_14c79c4bc) &&
               (FUN_144b3d300(&DAT_14c79c4bc), DAT_14c79c4bc == -1)) {
              DAT_14c79c4b8 = DAT_14c72f42c * 0xe10;
              _Init_thread_footer(&DAT_14c79c4bc);
            }
            uVar6 = uVar6 - *(longlong *)(param_1 + 0x38);
            if (DAT_14c79c4b8 < uVar6) {
              uVar6 = 0;
            }
          }
          FUN_14539bfc0(lVar3,lVar4,uVar6 & 0xffffffff);
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_6);
      }
    }
  }
  return;
}



// FUNCTION 1450cb5b0 FUN_1450cb5b0 body=202 status=ok
// SIG undefined FUN_1450cb5b0(void)

void FUN_1450cb5b0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (DAT_14c79c4b0 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
      plVar1 = (longlong *)plVar2[1];
      if (((int)plVar2[7] == param_2) || (param_2 == 0)) {
        if (plVar2[2] == 0) {
          lVar3 = -1;
        }
        else {
          lVar3 = *(longlong *)(plVar2[2] + 0x58);
        }
        if (((lVar3 == param_3) || (param_3 == -1)) &&
           ((*(int *)((longlong)plVar2 + 0x2c) == param_4 || (param_4 == 0)))) {
          FUN_14539b0f0(param_1,plVar2);
          FUN_14539b470(param_1,plVar2);
          FUN_14539b610(param_1,plVar2);
          (**(code **)(*plVar2 + 0x38))(plVar2);
          FUN_14539ac10(plVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 1450cb690 FUN_1450cb690 body=256 status=ok
// SIG undefined FUN_1450cb690(void)

longlong * FUN_1450cb690(undefined8 param_1,int param_2,int param_3,longlong param_4,char param_5)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20 [2];
  undefined4 local_10;
  int local_c;
  
  if ((((DAT_14c79c4b0 == 0) || (param_4 == 0)) || ((param_3 == 0 && (param_5 == '\0')))) ||
     (param_2 == 0)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)0x0;
    local_20[1] = 0;
    local_10 = 0;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 4;
    local_c = param_3;
    pvVar2 = AK::MemoryMgr::Malloc(0,0x78);
    plVar4 = plVar5;
    if (((pvVar2 != (void *)0x0) &&
        (plVar3 = (longlong *)
                  FUN_14539c180(pvVar2,param_1,param_4,&local_28,local_20,param_2,param_5),
        plVar3 != (longlong *)0x0)) &&
       (iVar1 = (**(code **)(*plVar3 + 8))(plVar3), plVar4 = plVar3, iVar1 != 1)) {
      FUN_14539ac10(plVar3);
      plVar4 = plVar5;
    }
    if (local_20[0] != 0) {
      FUN_144d4a460();
    }
  }
  return plVar4;
}



// FUNCTION 1450cb790 FUN_1450cb790 body=43 status=ok
// SIG undefined FUN_1450cb790(void)

undefined8 * FUN_1450cb790(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cb7c0 FUN_1450cb7c0 body=98 status=ok
// SIG undefined FUN_1450cb7c0(void)

undefined ** FUN_1450cb7c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c4c0) {
    FUN_144b3d300(&DAT_14c79c4c0);
    if (DAT_14c79c4c0 == -1) {
      atexit((_func_5014 *)&LAB_149928fd0);
      _Init_thread_footer(&DAT_14c79c4c0);
    }
  }
  return &PTR_PTR_14c72f2f0;
}



// FUNCTION 1450cb830 FUN_1450cb830 body=98 status=ok
// SIG undefined FUN_1450cb830(void)

undefined ** FUN_1450cb830(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c4c4) {
    FUN_144b3d300(&DAT_14c79c4c4);
    if (DAT_14c79c4c4 == -1) {
      atexit((_func_5014 *)&LAB_149928fe0);
      _Init_thread_footer(&DAT_14c79c4c4);
    }
  }
  return &PTR_PTR_14c72f2f8;
}



// FUNCTION 1450cb8a0 FUN_1450cb8a0 body=98 status=ok
// SIG undefined FUN_1450cb8a0(void)

undefined ** FUN_1450cb8a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c4c8) {
    FUN_144b3d300(&DAT_14c79c4c8);
    if (DAT_14c79c4c8 == -1) {
      atexit((_func_5014 *)&LAB_149928ff0);
      _Init_thread_footer(&DAT_14c79c4c8);
    }
  }
  return &PTR_PTR_14c72f300;
}



// FUNCTION 1450cb910 FUN_1450cb910 body=98 status=ok
// SIG undefined FUN_1450cb910(void)

undefined ** FUN_1450cb910(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c4cc) {
    FUN_144b3d300(&DAT_14c79c4cc);
    if (DAT_14c79c4cc == -1) {
      atexit((_func_5014 *)&LAB_149929000);
      _Init_thread_footer(&DAT_14c79c4cc);
    }
  }
  return &PTR_PTR_14c72f308;
}



// FUNCTION 1450cb980 FUN_1450cb980 body=98 status=ok
// SIG undefined FUN_1450cb980(void)

undefined ** FUN_1450cb980(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c79c4d0) {
    FUN_144b3d300(&DAT_14c79c4d0);
    if (DAT_14c79c4d0 == -1) {
      atexit((_func_5014 *)&LAB_149929010);
      _Init_thread_footer(&DAT_14c79c4d0);
    }
  }
  return &PTR_PTR_14c72f310;
}



// FUNCTION 1450cb9f0 FUN_1450cb9f0 body=43 status=ok
// SIG undefined FUN_1450cb9f0(void)

undefined8 * FUN_1450cb9f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cba20 FUN_1450cba20 body=98 status=ok
// SIG undefined FUN_1450cba20(void)

void FUN_1450cba20(undefined8 param_1,AkAudioBuffer *param_2,AkAudioBuffer *param_3,
                  undefined4 param_4,undefined4 param_5,float *param_6,float *param_7)

{
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res1c = param_5;
  local_res18 = param_4;
  AkMixer::MixNinNChannels
            (param_2,param_3,(AkRamp *)&local_res18,param_6,param_7,
             1.0 / (float)*(ushort *)(param_3 + 0x10),(uint)*(ushort *)(param_3 + 0x10));
  return;
}



// FUNCTION 1450cba90 FUN_1450cba90 body=161 status=ok
// SIG undefined FUN_1450cba90(void)

void FUN_1450cba90(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  uVar1 = *(uint *)(param_3 + 8);
  local_res1c = param_5;
  uVar2 = uVar1 >> 0xc & 0xffff7;
  local_res18 = param_4;
  AkMixer::MixOneInNChannels
            (param_2,param_3,
             uVar1 - ((uVar1 >> 0xc) - uVar2 >> 3) & 0xff | uVar1 & 0xf00 | uVar2 << 0xc,
             &local_res18,param_6,param_7,1.0 / (float)*(ushort *)(param_3 + 0x10),
             *(ushort *)(param_3 + 0x10));
  return;
}



// FUNCTION 1450cbbc0 FUN_1450cbbc0 body=43 status=ok
// SIG undefined FUN_1450cbbc0(void)

undefined8 * FUN_1450cbbc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cbc40 FUN_1450cbc40 body=43 status=ok
// SIG undefined FUN_1450cbc40(void)

undefined8 * FUN_1450cbc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cbc70 FUN_1450cbc70 body=430 status=ok
// SIG undefined FUN_1450cbc70(void)

undefined8 FUN_1450cbc70(longlong *param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Dst;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar2 = 0;
  *param_4 = 0;
  bVar1 = *(byte *)((param_3 & 0xff) + 0x1f8 + param_2);
  if (bVar1 == 0xfe) {
    switch((int)param_3) {
    default:
      lVar5 = lVar2;
      break;
    case 8:
    case 0xe:
      lVar5 = 1;
      lVar2 = 0x18;
      break;
    case 9:
    case 0xf:
      lVar5 = 2;
      lVar2 = 0x30;
      break;
    case 10:
    case 0x10:
      lVar5 = 3;
      lVar2 = 0x48;
      break;
    case 0xb:
    case 0x11:
      lVar5 = 4;
      lVar2 = 0x60;
      break;
    case 0xc:
    case 0x12:
      lVar5 = 5;
      lVar2 = 0x78;
    }
    if (*(char *)(lVar5 + DAT_14c791038) == '\0') {
      return 1;
    }
    if (*(longlong *)(lVar2 + 8 + DAT_14c791038) == 0) {
      return 1;
    }
    plVar6 = (longlong *)(DAT_14c791038 + 8 + lVar2);
  }
  else {
    if (bVar1 == 0xff) {
      return 1;
    }
    plVar6 = (longlong *)(param_2 + ((ulonglong)bVar1 + 2) * 0x18);
    if (*(longlong *)(param_2 + ((ulonglong)bVar1 + 2) * 0x18) == 0) {
      return 1;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    plVar3 = (longlong *)
             (**(code **)(*param_1 + 8))
                       (param_1,0x18,
                        "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkPluginServices.cpp"
                        ,0xda);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 2) = 1;
    if (*plVar3 != 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 2) = 1;
    if (*plVar6 != 0) {
      *(int *)(plVar3 + 1) = (int)plVar6[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
      *(undefined4 *)(plVar3 + 2) = 1;
      uVar4 = (int)plVar3[1] * 0x14;
      _Dst = (void *)(**(code **)(*param_1 + 8))
                               (param_1,uVar4,
                                "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\source\\SoundEngine\\AkAudiolib\\Common\\AkConversionTable.h"
                                ,0xdc);
      *plVar3 = (longlong)_Dst;
      if (_Dst == (void *)0x0) {
        (**(code **)(*param_1 + 0x10))(param_1,plVar3);
        return 0;
      }
      memcpy(_Dst,(void *)*plVar6,(ulonglong)uVar4);
    }
    *param_4 = plVar3;
  }
  return 1;
}



// FUNCTION 1450cbec0 FUN_1450cbec0 body=287 status=ok
// SIG undefined FUN_1450cbec0(void)

char FUN_1450cbec0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  longlong param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  byte *pbVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  
  piVar5 = *(int **)(param_3 + 0x60);
  cVar3 = '\x01';
  piVar1 = piVar5 + (ulonglong)*(uint *)(param_3 + 0x68) * 6;
  do {
    if (piVar5 == piVar1) {
LAB_1450cbf02:
      uVar8 = 0;
      uVar10 = 1;
      if (1 < param_4) {
        do {
          uVar9 = uVar8;
          if ((param_4 & uVar10) != 0) {
            uVar9 = (ulonglong)((int)uVar8 + 1);
            *(undefined8 *)(param_5 + uVar8 * 8) = 0;
          }
          uVar10 = uVar10 * 2;
          uVar8 = uVar9;
        } while (uVar10 < param_4);
      }
      return '\x01';
    }
    if (*piVar5 == 0x3850009) {
      lVar2 = *(longlong *)(piVar5 + 2);
      pbVar6 = (byte *)(lVar2 + 0x134);
      if (lVar2 == 0) {
        pbVar6 = &DAT_0000019c;
      }
      if ((*pbVar6 & 0x40) != 0) {
        plVar7 = (longlong *)(lVar2 + 0x138);
        if (lVar2 == 0) {
          plVar7 = (longlong *)&DAT_000001a0;
        }
        lVar2 = *plVar7;
        if (lVar2 != 0) {
          iVar11 = 0;
          uVar10 = 0;
          if (param_4 == 0) {
            return '\x01';
          }
          uVar4 = 1;
          break;
        }
      }
      goto LAB_1450cbf02;
    }
    piVar5 = piVar5 + 6;
  } while( true );
LAB_1450cbf85:
  if ((param_4 & uVar4) != 0) {
    if (cVar3 != '\0') {
      cVar3 = FUN_1450cbc70(param_2,lVar2,iVar11,param_5 + (ulonglong)uVar10 * 8);
      uVar10 = uVar10 + 1;
      if (cVar3 != '\0') {
        cVar3 = '\x01';
        goto LAB_1450cbfb1;
      }
    }
    cVar3 = '\0';
  }
LAB_1450cbfb1:
  iVar11 = iVar11 + 1;
  uVar4 = 1 << ((byte)iVar11 & 0x1f);
  if (param_4 < uVar4) {
    return cVar3;
  }
  goto LAB_1450cbf85;
}



// FUNCTION 1450cbfe0 FUN_1450cbfe0 body=103 status=ok
// SIG undefined FUN_1450cbfe0(void)

void FUN_1450cbfe0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 1;
    (**(code **)(*param_2 + 0x10))(param_2,plVar1);
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1450cc050 FUN_1450cc050 body=79 status=ok
// SIG undefined FUN_1450cc050(void)

undefined4 FUN_1450cc050(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  param_2 = (longlong *)*param_2;
  if (*param_2 != 0) {
    local_res10[0] = (undefined4)param_2[2];
    local_res20[0] = 0;
    FUN_1450737c0(param_2,param_3,local_res10,local_res20);
    *(undefined4 *)(param_2 + 2) = local_res10[0];
    return local_res20[0];
  }
  return 0;
}



// FUNCTION 1450cc0d0 FUN_1450cc0d0 body=43 status=ok
// SIG undefined FUN_1450cc0d0(void)

undefined8 * FUN_1450cc0d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cc160 FUN_1450cc160 body=43 status=ok
// SIG undefined FUN_1450cc160(void)

undefined8 * FUN_1450cc160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27130;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cc190 FUN_1450cc190 body=122 status=ok
// SIG undefined FUN_1450cc190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450cc190(uint param_1,uint param_2)

{
  float fVar1;
  
  DAT_14c72f42c = param_1;
  _DAT_14c72f434 = param_2;
  fVar1 = ((float)(param_2 & 0xffff) * 1000.0) / (float)param_1;
  DAT_14c72f428 = (int)(longlong)fVar1;
  DAT_14c72f430 = (int)(longlong)(fVar1 * 0.25);
  DAT_14c72f43c = (param_1 << 7) / 48000 + 7 & 0xfffffff8;
  DAT_14c72f438 = (short)(((param_2 & 0xffff) - 1) / DAT_14c72f43c) + 1;
  return;
}



// FUNCTION 1450cc210 FUN_1450cc210 body=242 status=ok
// SIG undefined FUN_1450cc210(void)

undefined8 FUN_1450cc210(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((param_2 < *(uint *)(param_1 + 2)) || (param_2 <= *(uint *)((longlong)param_1 + 0x14))) {
LAB_1450cc2e8:
    *(uint *)(param_1 + 2) = param_2;
    uVar9 = 1;
  }
  else {
    plVar3 = (longlong *)*param_1;
    uVar11 = (ulonglong)*(uint *)(param_1 + 2);
    if (param_1[1] == 0) {
      lVar8 = (**(code **)(*plVar3 + 8))
                        (plVar3,(ulonglong)param_2 * 0x18,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcc);
      if (lVar8 != 0) {
        if ((param_1[1] != 0) && (param_1[1] != lVar8)) {
          if (uVar11 != 0) {
            lVar10 = 0;
            do {
              lVar4 = param_1[1];
              puVar1 = (undefined4 *)(lVar10 + lVar4);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              puVar2 = (undefined4 *)(lVar10 + lVar8);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar7;
              *(undefined8 *)(lVar10 + 0x10 + lVar8) = *(undefined8 *)(lVar10 + 0x10 + lVar4);
              uVar11 = uVar11 - 1;
              lVar10 = lVar10 + 0x18;
            } while (uVar11 != 0);
          }
          (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,param_1[1]);
        }
        goto LAB_1450cc2e1;
      }
    }
    else {
      lVar8 = (**(code **)(*plVar3 + 0x20))
                        (plVar3,param_1[1],(ulonglong)param_2 * 0x18,
                         "F:\\dev\\bdudasik_oak2_audiodev\\Engine\\Source\\ThirdParty\\Wwise\\SDK\\include\\AK\\SoundEngine\\Common\\IAkPluginMemAlloc.h"
                         ,0xcd);
      if (lVar8 != 0) {
LAB_1450cc2e1:
        param_1[1] = lVar8;
        *(uint *)((longlong)param_1 + 0x14) = param_2;
        goto LAB_1450cc2e8;
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}



// FUNCTION 1450cc310 FUN_1450cc310 body=43 status=ok
// SIG undefined FUN_1450cc310(void)

undefined8 * FUN_1450cc310(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27768;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cc340 FUN_1450cc340 body=43 status=ok
// SIG undefined FUN_1450cc340(void)

undefined8 * FUN_1450cc340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c277c0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450cc440 FUN_1450cc440 body=43 status=ok
// SIG undefined FUN_1450cc440(void)

undefined8 * FUN_1450cc440(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450cc470 FUN_1450cc470 body=66 status=ok
// SIG undefined FUN_1450cc470(void)

undefined8 * FUN_1450cc470(undefined8 *param_1,ulonglong param_2)

{
  FUN_145381d30(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1450cc4c0 FUN_1450cc4c0 body=66 status=ok
// SIG undefined FUN_1450cc4c0(void)

undefined8 * FUN_1450cc4c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145387ca0(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1450cc510 FUN_1450cc510 body=52 status=ok
// SIG undefined FUN_1450cc510(void)

undefined8 FUN_1450cc510(undefined8 param_1,ulonglong param_2)

{
  FUN_1453886e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1450cc600 FUN_1450cc600 body=128 status=ok
// SIG undefined FUN_1450cc600(void)

bool FUN_1450cc600(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_1450d2460(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
  uVar4 = *(uint *)(lVar2 + 0x18);
  if (param_2 != 0) {
    if (*param_3 <= uVar4) {
      uVar4 = *param_3;
    }
    uVar5 = 0;
    *param_3 = uVar4;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar5 * 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined8 *)(lVar1 + param_2) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x10));
        uVar3 = *param_3;
      } while (uVar4 < uVar3);
    }
    return uVar3 == *(uint *)(lVar2 + 0x18);
  }
  *param_3 = uVar4;
  return true;
}



// FUNCTION 1450cc6b0 FUN_1450cc6b0 body=52 status=ok
// SIG undefined FUN_1450cc6b0(void)

undefined8 FUN_1450cc6b0(undefined8 param_1,ulonglong param_2)

{
  FUN_145389220();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1450cc6f0 FUN_1450cc6f0 body=148 status=ok
// SIG undefined FUN_1450cc6f0(void)

void FUN_1450cc6f0(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_2) {
    uVar3 = (ulonglong)param_2;
    lVar2 = 0;
    do {
      if (*(char *)(lVar2 + 0x18 + *param_1) != '\0') {
        AK::MemoryMgr::Free(5,*(void **)(lVar2 + 8 + *param_1));
        *(undefined8 *)(lVar2 + 8 + *param_1) = 0;
      }
      lVar2 = lVar2 + 0x20;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar1 = (int)param_1[1] - param_2;
  if (uVar1 != 0) {
    memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)param_2 * 0x20),(ulonglong)uVar1 << 5);
  }
  *(uint *)(param_1 + 1) = uVar1;
  return;
}



// FUNCTION 1450cc790 FUN_1450cc790 body=359 status=ok
// SIG undefined FUN_1450cc790(void)

undefined8 * FUN_1450cc790(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xf9 | 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xc5800000;
  *param_1 = &PTR_FUN_149c279a8;
  param_1[0xd] = &PTR_LAB_149c27a10;
  param_1[0xf] = &PTR_FUN_149c27838;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  FUN_145381d00(param_1 + 0x11);
  param_1[0x1b] = 0;
  param_1[0x1a] = &PTR_FUN_149c278e8;
  param_1[0x1c] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfc;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xff;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x2b;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x2d) = 0x7f7fffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 1450cc900 FUN_1450cc900 body=168 status=ok
// SIG undefined FUN_1450cc900(void)

void FUN_1450cc900(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_1450cf9a0(param_1);
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0xf0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1450cc9b0 FUN_1450cc9b0 body=95 status=ok
// SIG undefined FUN_1450cc9b0(void)

void FUN_1450cc9b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_145388e50(*(undefined8 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0x100) = 1;
  }
  else if (*(int *)(param_1 + 0x100) != 2) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_145388f80();
    }
    *(undefined4 *)(param_1 + 0x100) = 2;
    *(undefined4 *)(param_1 + 0x134) = 0x11;
    return;
  }
  return;
}



// FUNCTION 1450cca10 FUN_1450cca10 body=52 status=ok
// SIG undefined FUN_1450cca10(void)

void FUN_1450cca10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_145388f80();
  }
  *(undefined4 *)(param_1 + 0x134) = 0x11;
  *(undefined4 *)(param_1 + 0x100) = 2;
  return;
}



// FUNCTION 1450cca50 FUN_1450cca50 body=96 status=ok
// SIG undefined FUN_1450cca50(void)

void FUN_1450cca50(longlong param_1)

{
  if (*(int *)(param_1 + 0x100) == 1) {
    FUN_145388f90(*(undefined8 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0x100) = 3;
  }
  else if (*(int *)(param_1 + 0x100) != 3) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_145388f80();
    }
    *(undefined4 *)(param_1 + 0x100) = 2;
    *(undefined4 *)(param_1 + 0x134) = 0x11;
    return;
  }
  return;
}



// FUNCTION 1450ccab0 FUN_1450ccab0 body=130 status=ok
// SIG undefined FUN_1450ccab0(void)

void FUN_1450ccab0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x100) != 1) {
    if (*(int *)(param_1 + 0x100) != 3) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_145388f80();
      }
      *(undefined4 *)(param_1 + 0x100) = 2;
      *(undefined4 *)(param_1 + 0x134) = 0x11;
      return;
    }
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      uVar1 = 0x3f800000;
    }
    else {
      uVar1 = FUN_1453886c0(*(longlong *)(param_1 + 0xf8) + 0x10);
    }
    FUN_145388fd0(*(undefined8 *)(param_1 + 0xe8),uVar1);
    *(undefined4 *)(param_1 + 0x100) = 1;
  }
  return;
}



// FUNCTION 1450ccb40 FUN_1450ccb40 body=178 status=ok
// SIG undefined FUN_1450ccb40(void)

void FUN_1450ccb40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if ((plVar1 == (longlong *)0x0) || (param_2 != plVar1[3])) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    if ((plVar1 != (longlong *)0x0) && (param_2 == plVar1[3])) {
      (**(code **)(*plVar1 + 0x58))(plVar1,0);
      puVar2 = *(undefined8 **)(param_1 + 0xf0);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(5,puVar2);
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    return;
  }
  if (((*(byte *)(plVar1 + 4) & 1) != 0) && (iVar3 = (**(code **)(*plVar1 + 0x88))(), iVar3 == 1)) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_145388f80();
  }
  *(undefined4 *)(param_1 + 0x100) = 2;
  *(undefined4 *)(param_1 + 0x134) = 0x11;
  return;
}



// FUNCTION 1450ccc00 FUN_1450ccc00 body=157 status=ok
// SIG undefined FUN_1450ccc00(void)

void FUN_1450ccc00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x118) == 0) && (*(int *)(param_1 + 0x11c) == 2)) {
    lVar2 = *(longlong *)(param_1 + 8) + -0x18;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = 0;
    }
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x315) = *(byte *)(lVar2 + 0x315) & 0x3f;
      *(byte *)(lVar2 + 0x316) = *(byte *)(lVar2 + 0x316) & 0xfe;
      *(undefined4 *)(lVar2 + 0x30c) = 0;
      return;
    }
  }
  else if ((*(longlong *)(param_1 + 0xe8) != 0) &&
          ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x20) & 1) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))(param_1 + 0x78);
    FUN_14538a060(param_1);
    iVar1 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x30))(param_1 + 0x78);
    if (iVar1 != 1) {
      FUN_1450cca10(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1450ccca0 FUN_1450ccca0 body=413 status=ok
// SIG undefined FUN_1450ccca0(void)

undefined8 FUN_1450ccca0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  
  plVar9 = *(longlong **)(param_1 + 0xf0);
  plVar2 = *(longlong **)(param_1 + 0xe8);
  lVar3 = plVar9[3];
  iVar1 = *(int *)(lVar3 + 0x338);
  if (iVar1 < 1) {
    if ((*(byte *)(plVar9 + 4) & 1) != 0) {
      uVar7 = (uint)((ulonglong)*(undefined8 *)(plVar2[3] + 0x2b0) >> 0x20);
      uVar8 = (uint)((ulonglong)*(undefined8 *)(lVar3 + 0x2b0) >> 0x20);
      if ((((char)((ulonglong)*(undefined8 *)(plVar2[3] + 0x2b0) >> 0x20) ==
            (char)((ulonglong)*(undefined8 *)(lVar3 + 0x2b0) >> 0x20)) &&
          (((uVar7 ^ uVar8) & 0xf00) == 0)) && (((uVar7 ^ uVar8) & 0xfffff000) == 0)) {
        cVar4 = (**(code **)(*plVar2 + 0xa8))(plVar2);
        cVar5 = (**(code **)(*plVar9 + 0xa8))(plVar9);
        bVar10 = cVar4 == cVar5;
        if ((bVar10) && (cVar4 != '\0')) {
          bVar10 = *(int *)(*(longlong *)(plVar2[3] + 0x2a0) + 0x18) ==
                   *(int *)(*(longlong *)(plVar9[3] + 0x2a0) + 0x18);
        }
        if (bVar10) {
          plVar9 = (longlong *)(lVar3 + 0x18);
          if ((*(byte *)(lVar3 + 0x220) & 1) == 0) {
            (**(code **)(*(longlong *)(lVar3 + 0x18) + 0x68))(plVar9,0);
          }
          else {
            (**(code **)(*(longlong *)(lVar3 + 0x18) + 0x70))(plVar9);
            if ((*(byte *)(lVar3 + 0x220) & 0x10) != 0) {
              (**(code **)(*plVar9 + 0x78))(plVar9);
            }
          }
          FUN_1450cce40(param_1);
          if (*(short *)(param_2 + 0x12) == *(short *)(param_2 + 0x10)) {
            return 0x2d;
          }
          return 0x2b;
        }
      }
    }
  }
  else {
    fVar11 = (float)((uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_2 + 0x12)) *
             *(float *)(lVar3 + 700);
    if (fVar11 <= 0.0) {
      fVar11 = fVar11 + -0.5;
    }
    else {
      fVar11 = fVar11 + 0.5;
    }
    iVar6 = iVar1;
    if ((int)fVar11 < iVar1) {
      iVar6 = (int)fVar11;
    }
    *(int *)(lVar3 + 0x338) = iVar1 - iVar6;
  }
  return 0x11;
}



// FUNCTION 1450cce40 FUN_1450cce40 body=499 status=ok
// SIG undefined FUN_1450cce40(void)

void FUN_1450cce40(longlong param_1)

{
  __uint64 _SizeInBytes;
  byte *pbVar1;
  char *_Src;
  undefined8 *puVar2;
  ulonglong uVar3;
  char *_Dst;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong _MaxCount;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar7;
  
  uVar8 = 0;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    plVar4 = (longlong *)(param_1 + 0xb0);
    uVar3 = uVar8;
    do {
      if (*plVar4 != 0) {
        plVar4 = *(longlong **)(param_1 + 0xb0 + uVar3 * 8);
        goto LAB_1450cce93;
      }
      uVar9 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar9;
      plVar4 = plVar4 + 1;
    } while (uVar9 < 4);
    plVar4 = (longlong *)(param_1 + 0x78);
LAB_1450cce93:
    (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined8 *)(param_1 + 0xf0));
  }
  else {
    FUN_14539cee0(*(longlong *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0xf0));
  }
  uVar3 = uVar8;
  if (0 < *(int *)(param_1 + 0x110)) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x108);
      _Src = *(char **)(lVar5 + 8 + uVar8);
      if ((_Src != (char *)0x0) && (*(char *)(lVar5 + 0x18 + uVar8) == '\0')) {
        _MaxCount = 0xffffffffffffffff;
        do {
          uVar7 = _MaxCount;
          _MaxCount = uVar7 + 1;
        } while (_Src[_MaxCount] != '\0');
        _SizeInBytes = uVar7 + 2;
        _Dst = AK::MemoryMgr::Malloc(5,_SizeInBytes);
        *(char **)(lVar5 + 8 + uVar8) = _Dst;
        if (_Dst != (char *)0x0) {
          lVar5 = -1;
          do {
            lVar6 = lVar5;
            lVar5 = lVar6 + 1;
          } while (_Src[lVar5] != '\0');
          if (lVar6 + 2U <= _MaxCount) {
            lVar5 = -1;
            do {
              lVar6 = lVar5;
              lVar5 = lVar6 + 1;
            } while (_Src[lVar5] != '\0');
            _MaxCount = lVar6 + 2;
          }
          strncpy_s(_Dst,_SizeInBytes,_Src,_MaxCount);
          _Dst[_MaxCount] = '\0';
          *(undefined1 *)(uVar8 + 0x18 + *(longlong *)(param_1 + 0x108)) = 1;
        }
      }
      uVar9 = (int)uVar3 + 1;
      uVar8 = uVar8 + 0x20;
      uVar3 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x110));
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x58))(*(longlong **)(param_1 + 0xe8),0);
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,0);
    AK::MemoryMgr::Free(5,puVar2);
  }
  *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xf0);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar6 = lVar5 + 0x18;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  *(longlong *)(param_1 + 8) = lVar6;
  FUN_145388e50();
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x18);
  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18) + 0x316);
  *pbVar1 = *pbVar1 & 0xfd;
  return;
}



// FUNCTION 1450cd040 FUN_1450cd040 body=3845 status=ok
// SIG undefined FUN_1450cd040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1450cd040(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  char cVar24;
  int iVar25;
  longlong lVar26;
  uint *puVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  undefined1 uVar36;
  undefined8 *puVar37;
  undefined1 *puVar38;
  byte bVar39;
  byte bVar40;
  int iVar41;
  ulonglong uVar42;
  float fVar43;
  float fVar44;
  longlong local_res8;
  undefined8 *local_res10;
  byte local_res18;
  undefined1 local_res20;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [32];
  longlong local_1b8 [2];
  int local_1a8 [4];
  longlong local_198 [4];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  uint uStack_154;
  longlong local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong lStack_108;
  undefined4 local_100;
  undefined2 uStack_fc;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  
  uVar5 = *(undefined4 *)(param_1 + 0x160);
  local_198[3] = *(longlong *)(param_1 + 0xe8);
  plVar28 = *(longlong **)(local_198[3] + 0x18);
  uVar33 = *(uint *)(plVar28 + 0x71);
  uVar29 = (ulonglong)uVar33;
  if ((uVar33 == 0xffffffff) || (*(undefined4 *)(param_1 + 0x100) = 2, uVar33 != 0)) {
    *(undefined4 *)(param_2 + 1) = uVar5;
    *param_2 = 0;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
    *(undefined2 *)(param_2 + 2) = DAT_14c72f434;
    local_198[0]._0_4_ = (undefined4)plVar28[0x50];
    uStack_1e0 = 0x1450cd101;
    local_res8 = param_1;
    local_res10 = param_2;
    local_170 = plVar28;
    FUN_1450cfbc0(param_1,plVar28,local_198[3]);
    bVar10 = true;
    bVar9 = true;
    for (lVar26 = *(longlong *)(param_1 + 0x38); lVar26 != 0; lVar26 = *(longlong *)(lVar26 + 0x20))
    {
      if ((bVar9) && ((*(uint *)(lVar26 + 0x198) >> 1 & 1) != 0)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((bVar10) && ((*(byte *)(lVar26 + 0x198) & 1) != 0)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
    }
    bVar40 = *(byte *)(param_1 + 0x60) & 2;
    if (bVar40 == 0) {
      local_res18 = bVar10 ^ 1;
      bVar39 = bVar10 ^ 1;
      if (local_res18 != 0) goto LAB_1450cd197;
    }
    else {
      if ((bVar10 == false) || (!bVar9)) {
        bVar39 = 1;
        local_res18 = 1;
LAB_1450cd197:
        if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x209) & 3) == 0) goto LAB_1450cd26b;
        lVar26 = *(longlong *)(param_1 + 0x38);
        if (bVar40 == 0) {
          for (; lVar26 != 0; lVar26 = *(longlong *)(lVar26 + 0x20)) {
            uVar33 = *(uint *)(lVar26 + 0x198);
            *(uint *)(lVar26 + 0x198) = uVar33 | 2;
            bVar10 = -4096.0 <= DAT_14c72f444;
            *(undefined4 *)(lVar26 + 0x18c) = 0xc5800000;
            *(uint *)(lVar26 + 0x198) = uVar33 & 0xfffffffe | 2 | (uint)bVar10;
          }
        }
        else {
          bVar10 = true;
          if (lVar26 != 0) {
            do {
              if ((bVar10) && ((*(uint *)(lVar26 + 0x198) >> 1 & 1) != 0)) {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
              bVar9 = -4096.0 <= DAT_14c72f444;
              *(undefined4 *)(lVar26 + 0x18c) = 0xc5800000;
              *(uint *)(lVar26 + 0x198) = *(uint *)(lVar26 + 0x198) & 0xfffffffe;
              *(uint *)(lVar26 + 0x198) = *(uint *)(lVar26 + 0x198) | (uint)bVar9;
              lVar26 = *(longlong *)(lVar26 + 0x20);
            } while (lVar26 != 0);
            if (!bVar10) goto LAB_1450cd26b;
          }
        }
      }
      bVar39 = 0;
      local_res18 = 0;
    }
LAB_1450cd26b:
    fVar44 = *(float *)(plVar28 + 0x15);
    if (0.0 <= fVar44) {
      if (100.0 <= fVar44) {
        fVar44 = 100.0;
      }
    }
    else {
      fVar44 = 0.0;
    }
    if (fVar44 != *(float *)(param_1 + 0x90)) {
      *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 1;
      *(float *)(param_1 + 0x90) = fVar44;
    }
    fVar44 = *(float *)((longlong)plVar28 + 0xac);
    if (0.0 <= fVar44) {
      if (100.0 <= fVar44) {
        fVar44 = 100.0;
      }
    }
    else {
      fVar44 = 0.0;
    }
    if (fVar44 != *(float *)(param_1 + 0x9c)) {
      *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 1;
      *(float *)(param_1 + 0x9c) = fVar44;
    }
    bVar10 = true;
    fVar44 = (float)*(ushort *)(param_2 + 2) * *(float *)((longlong)plVar28 + 700);
    if (fVar44 <= 0.0) {
      fVar43 = -0.5;
    }
    else {
      fVar43 = 0.5;
    }
    iVar41 = (int)(fVar43 + fVar44);
    local_1a8[0] = iVar41;
    if (bVar39 == 0) {
      bVar40 = 0;
      if (*(int *)(param_1 + 0x11c) == 2) {
        bVar10 = false;
        if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
          uStack_1e0 = 0x1450cdb57;
          (**(code **)(*(longlong *)(param_1 + 0x78) + 0x20))
                    (param_1 + 0x78,*(undefined4 *)(param_1 + 0x118));
          param_2 = local_res10;
          if (*(int *)(param_1 + 0x118) != 2) {
            uStack_1e0 = 0x1450cdb6c;
            (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))(param_1 + 0x78);
            iVar25 = *(int *)(param_1 + 0x110);
            if (iVar25 == 0) {
              uVar35 = 0;
            }
            else {
              uVar35 = *(undefined8 *)(param_1 + 0x108);
            }
            uStack_1e0 = 0x1450cdb93;
            FUN_1450b3230(DAT_14c790fc0,uVar35,iVar25);
            uStack_1e0 = 0x1450cdba1;
            FUN_1450cc6f0(param_1 + 0x108,iVar25);
            param_2 = local_res10;
          }
        }
        puVar38 = auStack_1d8;
        if ((*(int *)(param_1 + 0x118) == 1) && (puVar38 = auStack_1d8, (int)plVar28[0x67] < iVar41)
           ) {
          local_res8 = CONCAT44(local_res8._4_4_,iVar41);
          uStack_1e0 = 0x1450cdbd5;
          iVar25 = (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(param_1 + 0x78,&local_res8);
          *(int *)(param_2 + 6) = iVar25;
          puVar38 = auStack_1d8;
          if (iVar25 == 0x2d) {
            *(undefined4 *)(param_2 + 6) = 0x2c;
            puVar38 = auStack_1d8;
          }
        }
      }
      else {
        puVar38 = auStack_1d8;
        if (*(int *)(param_1 + 0x11c) == 1) {
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            uStack_1e0 = 0x1450cdbfe;
            FUN_145388f80();
          }
          *(undefined4 *)(param_1 + 0x100) = 2;
          bVar10 = false;
          *(undefined4 *)(param_1 + 0x134) = 0x11;
          puVar38 = auStack_1d8;
        }
      }
    }
    else {
      local_1a8[2] = *(undefined4 *)((longlong)plVar28 + 0x20c);
      lVar26 = 0;
      local_1a8[1] = (int)*(float *)(plVar28 + 100);
      uStack_fa = 1;
      uVar33 = *(uint *)(plVar28 + 0x43);
      uStack_11c = 0x3f800000;
      uStack_118 = 0x3f800000;
      uStack_114 = 0xffff;
      lStack_128 = 0;
      local_120 = 0;
      local_140 = 0;
      uStack_138 = 0x3f800000;
      uStack_134 = 0;
      uStack_130 = 0x3f800000;
      uStack_12c = 0;
      local_110 = 0x3f800000;
      lStack_108 = 0;
      local_100 = 0x3f800000;
      uStack_fc = 0;
      if ((*(byte *)((longlong)plVar28 + 0x1b4) & 0x40) != 0) {
        lVar26 = plVar28[0x37];
      }
      local_1a8[3] = (lVar26 != 0) + uVar33;
      uVar42 = (ulonglong)(uint)local_1a8[3];
      uVar29 = uVar42 * 0x18 + 0xf;
      if (uVar29 <= uVar42 * 0x18) {
        uVar29 = 0xffffffffffffff0;
      }
      uStack_1e0 = 0x1450cd415;
      lVar11 = -(uVar29 & 0xfffffffffffffff0);
      lVar8 = (longlong)local_1a8 + lVar11;
      *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd42b;
      FUN_1450e8a10(plVar28 + 3,lVar8,uVar33);
      if (lVar26 != 0) {
        local_168 = 0x3850009;
        if (plVar28 + 3 == (longlong *)0x0) {
          uStack_160 = (longlong *)0x0;
        }
        else {
          uStack_160 = plVar28 + 0x10;
        }
        uVar12 = (undefined4)uStack_160;
        uVar13 = uStack_160._4_4_;
        local_158 = 0;
        puVar2 = (undefined4 *)(lVar8 + (ulonglong)uVar33 * 0x18);
        *puVar2 = 0x3850009;
        puVar2[1] = uStack_164;
        puVar2[2] = uVar12;
        puVar2[3] = uVar13;
        *(ulonglong *)((longlong)local_198 + (ulonglong)uVar33 * 0x18 + lVar11) =
             (ulonglong)uStack_154 << 0x20;
      }
      lVar23 = lStack_108;
      lVar22 = local_110;
      lVar21 = lStack_128;
      lVar20 = local_140;
      lVar26 = *(longlong *)(param_1 + 0x38);
      if (lVar26 != 0) {
        lVar19 = CONCAT17(uStack_f9,CONCAT16(uStack_fa,CONCAT24(uStack_fc,local_100)));
        lVar17 = CONCAT44(uStack_11c,local_120);
        lVar18 = CONCAT44(uStack_114,uStack_118);
        lVar16 = CONCAT44(uStack_12c,uStack_130);
        lVar15 = CONCAT44(uStack_134,uStack_138);
        iVar41 = local_1a8[1];
        do {
          if (*(int *)(lVar26 + 0x148) == 1) {
            *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd4b9;
            puVar27 = (uint *)FUN_1453557d0(lVar26,local_178);
            if ((((*puVar27 & 0xf00) == 0x300) &&
                (*(int *)(*(longlong *)(param_1 + 8) + 0x1b0) != 1)) &&
               (*(int *)(lVar26 + 0x194) != 3)) goto LAB_1450cd5db;
            lVar31 = *(longlong *)(lVar26 + 0x140);
            *(undefined4 *)(lVar31 + 0x10c) = uVar5;
            *(undefined1 *)(lVar31 + 0x110) = 0;
            lVar31 = *(longlong *)(lVar26 + 0x140);
            *(longlong *)(lVar31 + 0x28) = lVar20;
            *(longlong *)(lVar31 + 0x30) = lVar15;
            *(undefined4 *)(lVar31 + 0x70) = 0x3f800000;
            *(longlong *)(lVar31 + 0x38) = lVar16;
            *(longlong *)(lVar31 + 0x40) = lVar21;
            *(undefined4 *)(lVar31 + 0x74) = 0x3f800000;
            *(longlong *)(lVar31 + 0x48) = lVar17;
            *(longlong *)(lVar31 + 0x50) = lVar18;
            *(longlong *)(lVar31 + 0x58) = lVar22;
            *(longlong *)(lVar31 + 0x60) = lVar23;
            *(longlong *)(lVar31 + 0x68) = lVar19;
            *(undefined4 *)(lVar31 + 0x88) = 0;
            *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd536;
            FUN_1450cc210(lVar31 + 0x78,0);
            *(int *)(lVar31 + 0x90) = local_1a8[2];
            if ((*(longlong *)(lVar31 + 0xa0) != 0) && (*(char *)(lVar31 + 0xa8) != '\0')) {
              pcVar6 = *(code **)(**(longlong **)(lVar31 + 0x98) + 0x10);
              *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd561;
              (*pcVar6)();
              *(undefined1 *)(lVar31 + 0xa8) = 0;
            }
            *(undefined8 *)(lVar31 + 0xa0) = 0;
            *(undefined8 *)(lVar31 + 0x98) = 0;
            *(char *)(lVar31 + 0xb0) = (char)iVar41;
            lVar31 = *(longlong *)(lVar26 + 0x140);
            *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd592;
            cVar24 = FUN_1450cc210();
            if ((cVar24 != '\0') && (0 < (int)uVar42)) {
              lVar30 = 0;
              uVar29 = uVar42;
              do {
                lVar7 = *(longlong *)(lVar31 + 0x80);
                puVar2 = (undefined4 *)(lVar30 + lVar8);
                uVar12 = puVar2[1];
                uVar13 = puVar2[2];
                uVar14 = puVar2[3];
                puVar4 = (undefined4 *)(lVar30 + lVar7);
                *puVar4 = *puVar2;
                puVar4[1] = uVar12;
                puVar4[2] = uVar13;
                puVar4[3] = uVar14;
                *(undefined8 *)(lVar30 + 0x10 + lVar7) = *(undefined8 *)(lVar30 + 0x10 + lVar8);
                uVar29 = uVar29 - 1;
                lVar30 = lVar30 + 0x18;
              } while (uVar29 != 0);
            }
            *(undefined1 *)(*(longlong *)(lVar26 + 0x140) + 0x108) = 1;
          }
          else {
LAB_1450cd5db:
            iVar25 = local_1a8[3];
            plVar28 = *(longlong **)(lVar26 + 0x140);
            local_res20 = 1;
            plVar32 = plVar28 + (ulonglong)*(uint *)(lVar26 + 0x148) * 0x23;
            if (plVar28 == plVar32) {
              uVar29 = (ulonglong)*(uint *)(lVar26 + 0x148);
              local_res20 = 1;
            }
            else {
              do {
                uVar33 = *(uint *)((longlong)plVar28 + 0x10c) & 0xf00;
                if ((uVar33 < 0x301) &&
                   (((char)*(uint *)((longlong)plVar28 + 0x10c) != '\0' || (uVar33 == 0x300)))) {
                  local_res20 = 0;
                  break;
                }
                plVar28 = plVar28 + 0x23;
              } while (plVar28 != plVar32);
              puVar27 = (uint *)(*(longlong *)(lVar26 + 0x140) + 0x10c);
              do {
                *(undefined1 *)puVar27 = 0;
                *puVar27 = *puVar27 & 0xff;
                uVar29 = (ulonglong)*(uint *)(lVar26 + 0x148);
                puVar1 = puVar27 + 3;
                plVar28 = *(longlong **)(lVar26 + 0x140);
                puVar27 = puVar27 + 0x46;
              } while (puVar1 != (uint *)(plVar28 + uVar29 * 0x23));
            }
            if ((*(int *)(lVar26 + 0x194) == 3) ||
               (lVar31 = *(longlong *)(param_1 + 8), local_198[1] = lVar31,
               (*(byte *)(lVar31 + 0x170) & 8) == 0)) {
              plVar32 = plVar28 + uVar29 * 0x23;
              for (; (plVar28 != plVar32 && ((*plVar28 != 0 || ((int)plVar28[2] != 0))));
                  plVar28 = plVar28 + 0x23) {
              }
              if (plVar28 ==
                  (longlong *)
                  ((ulonglong)*(uint *)(lVar26 + 0x148) * 0x118 + *(longlong *)(lVar26 + 0x140))) {
                *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd983;
                plVar28 = (longlong *)FUN_145355940(lVar26,0,0);
              }
              if (plVar28 != (longlong *)0x0) {
                *(undefined4 *)((longlong)plVar28 + 0x10c) = uVar5;
                *(undefined1 *)(plVar28 + 0x22) = 0;
                plVar28[5] = lVar20;
                plVar28[6] = lVar15;
                *(undefined4 *)(plVar28 + 0xe) = 0x3f800000;
                plVar28[7] = lVar16;
                plVar28[8] = lVar21;
                *(undefined4 *)((longlong)plVar28 + 0x74) = 0x3f800000;
                plVar28[9] = lVar17;
                plVar28[10] = lVar18;
                plVar28[0xb] = lVar22;
                plVar28[0xc] = lVar23;
                plVar28[0xd] = lVar19;
                *(undefined4 *)(plVar28 + 0x11) = 0;
                *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd9d7;
                FUN_1450cc210(plVar28 + 0xf,0);
                *(int *)(plVar28 + 0x12) = local_1a8[2];
                if ((plVar28[0x14] != 0) && ((char)plVar28[0x15] != '\0')) {
                  pcVar6 = *(code **)(*(longlong *)plVar28[0x13] + 0x10);
                  *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cda02;
                  (*pcVar6)();
                  *(undefined1 *)(plVar28 + 0x15) = 0;
                }
                plVar28[0x14] = 0;
                plVar28[0x13] = 0;
                *(char *)(plVar28 + 0x16) = (char)local_1a8[1];
                *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cda2e;
                cVar24 = FUN_1450cc210(plVar28 + 0xf,uVar42);
                if ((cVar24 != '\0') && (0 < (int)uVar42)) {
                  lVar31 = 0;
                  uVar29 = uVar42;
                  do {
                    lVar30 = plVar28[0x10];
                    puVar2 = (undefined4 *)(lVar31 + lVar8);
                    uVar12 = puVar2[1];
                    uVar13 = puVar2[2];
                    uVar14 = puVar2[3];
                    puVar4 = (undefined4 *)(lVar31 + lVar30);
                    *puVar4 = *puVar2;
                    puVar4[1] = uVar12;
                    puVar4[2] = uVar13;
                    puVar4[3] = uVar14;
                    *(undefined8 *)(lVar31 + 0x10 + lVar30) = *(undefined8 *)(lVar31 + 0x10 + lVar8)
                    ;
                    uVar29 = uVar29 - 1;
                    lVar31 = lVar31 + 0x18;
                  } while (uVar29 != 0);
                }
                *(undefined1 *)(plVar28 + 0x21) = local_res20;
                iVar41 = local_1a8[1];
              }
            }
            else {
              lVar30 = *(longlong *)(lVar26 + 0x170);
              uVar29 = 0;
              local_198[2] = lVar30;
              if (*(int *)(lVar31 + 0x1b0) != 0) {
                uVar42 = (ulonglong)(uint)local_1a8[3];
                do {
                  if (lVar30 == *(longlong *)(*(longlong *)(lVar31 + 0x1a8) + 0x70 + uVar29 * 0x90))
                  {
                    plVar28 = *(longlong **)(lVar26 + 0x140);
                    plVar32 = plVar28 + (ulonglong)*(uint *)(lVar26 + 0x148) * 0x23;
                    for (; (plVar28 != plVar32 &&
                           ((*plVar28 != 0 ||
                            ((int)plVar28[2] !=
                             *(int *)(*(longlong *)(lVar31 + 0x1a8) + 0x68 + uVar29 * 0x90)))));
                        plVar28 = plVar28 + 0x23) {
                    }
                    if (plVar28 ==
                        (longlong *)
                        ((ulonglong)*(uint *)(lVar26 + 0x148) * 0x118 +
                        *(longlong *)(lVar26 + 0x140))) {
                      *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd76b;
                      plVar28 = (longlong *)FUN_145355940(lVar26,0);
                      lVar31 = local_198[1];
                    }
                    lVar30 = local_198[2];
                    if (plVar28 != (longlong *)0x0) {
                      *(undefined4 *)((longlong)plVar28 + 0x10c) = uVar5;
                      *(undefined1 *)(plVar28 + 0x22) = 0;
                      plVar28[5] = lVar20;
                      plVar28[6] = lVar15;
                      *(undefined4 *)(plVar28 + 0xe) = 0x3f800000;
                      plVar28[7] = lVar16;
                      plVar28[8] = lVar21;
                      *(undefined4 *)((longlong)plVar28 + 0x74) = 0x3f800000;
                      plVar28[9] = lVar17;
                      plVar28[10] = lVar18;
                      plVar28[0xb] = lVar22;
                      plVar28[0xc] = lVar23;
                      plVar28[0xd] = lVar19;
                      *(undefined4 *)(plVar28 + 0x11) = 0;
                      *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd7c3;
                      FUN_1450cc210(plVar28 + 0xf,0);
                      *(int *)(plVar28 + 0x12) = local_1a8[2];
                      if ((plVar28[0x14] != 0) && ((char)plVar28[0x15] != '\0')) {
                        pcVar6 = *(code **)(*(longlong *)plVar28[0x13] + 0x10);
                        *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd7ee;
                        (*pcVar6)();
                        *(undefined1 *)(plVar28 + 0x15) = 0;
                      }
                      plVar28[0x14] = 0;
                      plVar28[0x13] = 0;
                      *(char *)(plVar28 + 0x16) = (char)local_1a8[1];
                      *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd81a;
                      cVar24 = FUN_1450cc210(plVar28 + 0xf,uVar42);
                      if ((cVar24 != '\0') && (0 < iVar25)) {
                        lVar31 = 0;
                        uVar34 = uVar42;
                        do {
                          lVar30 = plVar28[0x10];
                          puVar2 = (undefined4 *)(lVar31 + lVar8);
                          uVar12 = puVar2[1];
                          uVar13 = puVar2[2];
                          uVar14 = puVar2[3];
                          puVar4 = (undefined4 *)(lVar31 + lVar30);
                          *puVar4 = *puVar2;
                          puVar4[1] = uVar12;
                          puVar4[2] = uVar13;
                          puVar4[3] = uVar14;
                          *(undefined8 *)(lVar31 + 0x10 + lVar30) =
                               *(undefined8 *)(lVar31 + 0x10 + lVar8);
                          uVar34 = uVar34 - 1;
                          lVar31 = lVar31 + 0x18;
                        } while (uVar34 != 0);
                      }
                      *(undefined1 *)(plVar28 + 0x21) = local_res20;
                      lVar31 = local_198[1];
                      lVar30 = local_198[2];
                    }
                  }
                  uVar33 = (int)uVar29 + 1;
                  uVar29 = (ulonglong)uVar33;
                  param_1 = local_res8;
                  iVar41 = local_1a8[1];
                } while (uVar33 < *(uint *)(lVar31 + 0x1b0));
              }
              uVar42 = (ulonglong)(uint)local_1a8[3];
            }
            *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd898;
            FUN_145355810(lVar26);
          }
          lVar26 = *(longlong *)(lVar26 + 0x20);
        } while (lVar26 != 0);
      }
      plVar28 = local_170;
      lVar26 = local_198[3];
      plVar32 = local_198;
      plVar3 = local_170 + 3;
      if ((*(byte *)(local_170 + 1) & 0x10) == 0) {
        plVar32 = (longlong *)0x0;
      }
      *(longlong **)((longlong)local_1b8 + lVar11) = plVar32;
      *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd8ea;
      FUN_14538a410(param_1,plVar3);
      if ((((*(byte *)(param_1 + 0x60) & 1) == 0) || ((*(byte *)(lVar26 + 0x20) & 1) == 0)) &&
         (*(int *)(param_1 + 0x11c) == 2)) {
        if ((*(byte *)(lVar26 + 0x20) & 1) == 0) {
          *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cd91b;
          iVar41 = FUN_145389100(lVar26);
          if (iVar41 == 0x3f) {
            bVar10 = false;
            puVar38 = auStack_1d8 + lVar11;
            iVar41 = local_1a8[0];
            bVar40 = 0;
          }
          else {
            if (iVar41 == 1) goto LAB_1450cdc81;
            if (*(longlong *)(param_1 + 0xe8) != 0) {
              *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cda98;
              FUN_145388f80();
            }
            bVar10 = false;
            *(undefined4 *)(param_1 + 0x100) = 2;
            *(undefined4 *)(param_1 + 0x134) = 0x11;
            puVar38 = auStack_1d8 + lVar11;
            iVar41 = local_1a8[0];
            bVar40 = 0;
          }
          goto LAB_1450cdc19;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x118);
        uVar36 = 0;
        pcVar6 = *(code **)(*plVar28 + 0x58);
        *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cdad0;
        iVar41 = (*pcVar6)(plVar28,uVar5);
        if (iVar41 == 1) {
          uVar36 = 1;
LAB_1450cdade:
          uVar5 = *(undefined4 *)(param_1 + 0x118);
          pcVar6 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x28);
          *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cdaf4;
          uVar29 = (*pcVar6)(param_1 + 0x78,uVar5,uVar36);
          if ((int)uVar29 == 1) goto LAB_1450cdc81;
        }
        else {
          if (iVar41 != 2) goto LAB_1450cdade;
          uVar29 = 0;
        }
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          *(undefined8 *)(auStack_1d8 + lVar11 + -8) = 0x1450cdb0e;
          uVar29 = FUN_145388f80();
        }
        *(undefined4 *)(param_1 + 0x100) = 2;
        *(undefined4 *)(param_1 + 0x134) = 0x11;
        goto LAB_1450cdb24;
      }
LAB_1450cdc81:
      bVar10 = true;
      puVar38 = auStack_1d8 + lVar11;
      iVar41 = local_1a8[0];
      bVar40 = local_res18;
    }
LAB_1450cdc19:
    if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x118);
      pcVar6 = *(code **)(*plVar28 + 0x58);
      *(undefined8 *)(puVar38 + -8) = 0x1450cdc3a;
      iVar25 = (*pcVar6)(plVar28,uVar5);
      if (iVar25 == 1) {
        if ((*(int *)(param_1 + 0x118) == 0) && (*(int *)(param_1 + 0x11c) == 2)) {
          lVar26 = *(longlong *)(param_1 + 8) + -0x18;
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar26 = 0;
          }
          if (lVar26 != 0) {
            *(byte *)(lVar26 + 0x315) = *(byte *)(lVar26 + 0x315) & 0x3f;
            *(byte *)(lVar26 + 0x316) = *(byte *)(lVar26 + 0x316) & 0xfe;
            *(undefined4 *)(lVar26 + 0x30c) = 0;
          }
        }
        else if ((*(longlong *)(param_1 + 0xe8) != 0) &&
                ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x20) & 1) != 0)) {
          pcVar6 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x10);
          *(undefined8 *)(puVar38 + -8) = 0x1450cdcae;
          (*pcVar6)(param_1 + 0x78);
          *(undefined8 *)(puVar38 + -8) = 0x1450cdcb6;
          FUN_14538a060(param_1);
          pcVar6 = *(code **)(*(longlong *)(param_1 + 0x78) + 0x30);
          *(undefined8 *)(puVar38 + -8) = 0x1450cdcc1;
          iVar25 = (*pcVar6)(param_1 + 0x78);
          if (iVar25 != 1) {
            *(undefined8 *)(puVar38 + -8) = 0x1450cdcce;
            FUN_1450cca10(param_1);
          }
        }
        *(undefined8 *)(puVar38 + -8) = 0x1450cdcd8;
        FUN_14538a230(param_1,1);
      }
      else if (iVar25 == 2) {
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          *(undefined8 *)(puVar38 + -8) = 0x1450cdcf7;
          FUN_145388f80();
        }
        *(undefined4 *)(param_1 + 0x100) = 2;
        bVar10 = false;
        *(undefined4 *)(param_1 + 0x134) = 0x11;
      }
      *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfe;
    }
    if ((bVar10) && ((int)plVar28[0x67] < iVar41)) {
      bVar39 = 1;
    }
    else {
      bVar39 = 0;
    }
    if (-1 < (int)plVar28[0x67]) {
      *(int *)(plVar28 + 0x67) = (int)plVar28[0x67] - iVar41;
    }
    if (*(int *)(param_1 + 0x11c) != 0) {
      if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
        if (bVar40 != 0) {
          *(undefined8 *)(puVar38 + -8) = 0x1450cdd70;
          FUN_1450ebbc0(plVar28,1);
        }
      }
      else if (bVar40 == 0) {
        *(undefined8 *)(puVar38 + -8) = 0x1450cdd5f;
        FUN_1450ebab0(plVar28);
      }
    }
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe | bVar40;
    if (bVar39 != 0) {
      puVar37 = local_res10;
      if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
        *(undefined8 *)(puVar38 + -8) = 0x1450cdd9d;
        iVar41 = FUN_1450ce140(param_1);
        if (iVar41 == 1) {
          if ((*(byte *)(plVar28 + 0x44) & 1) == 0) {
            pcVar6 = *(code **)(plVar28[3] + 0x68);
            *(undefined8 *)(puVar38 + -8) = 0x1450cddc0;
            (*pcVar6)(plVar28 + 3,0);
          }
          else {
            pcVar6 = *(code **)(plVar28[3] + 0x70);
            *(undefined8 *)(puVar38 + -8) = 0x1450cddc5;
            (*pcVar6)(plVar28 + 3);
            if ((*(byte *)(plVar28 + 0x44) & 0x10) != 0) {
              pcVar6 = *(code **)(plVar28[3] + 0x78);
              *(undefined8 *)(puVar38 + -8) = 0x1450cdddd;
              (*pcVar6)(plVar28 + 3);
            }
          }
          puVar37 = local_res10;
          *(undefined4 *)((longlong)plVar28 + 0x18c) = 0x42ca0000;
          *(undefined4 *)(local_res10 + 1) = *(undefined4 *)(param_1 + 0x160);
          *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfd;
          *(undefined8 *)(puVar38 + -8) = 0x1450cde07;
          FUN_14538a260(param_1);
          lVar26 = local_198[3];
          *(undefined8 *)(puVar38 + -8) = 0x1450cde19;
          FUN_1450cfbc0(param_1,plVar28,lVar26);
          for (lVar26 = *(longlong *)(param_1 + 0x38); lVar26 != 0;
              lVar26 = *(longlong *)(lVar26 + 0x20)) {
            lVar8 = *(longlong *)(lVar26 + 0x140);
            *(undefined4 *)(lVar8 + 0x10c) = *(undefined4 *)(param_1 + 0x160);
            *(undefined1 *)(lVar8 + 0x110) = 0;
          }
          plVar32 = &local_res8;
          local_res8 = CONCAT44(local_res8._4_4_,(int)plVar28[0x50]);
          if ((*(byte *)(plVar28 + 1) & 0x10) == 0) {
            plVar32 = (longlong *)0x0;
          }
          *(longlong **)(puVar38 + 0x20) = plVar32;
          *(undefined8 *)(puVar38 + -8) = 0x1450cde9e;
          FUN_14538a410(param_1,plVar28 + 3);
        }
        else {
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            *(undefined8 *)(puVar38 + -8) = 0x1450cdeb1;
            FUN_145388f80();
          }
          *(undefined4 *)(param_1 + 0x100) = 2;
          bVar39 = 0;
          *(undefined4 *)(param_1 + 0x134) = 0x11;
          puVar37 = local_res10;
        }
      }
      if ((*(longlong *)(param_1 + 0xf0) != 0) &&
         ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 0x20) & 1) == 0)) {
        *(undefined8 *)(puVar38 + -8) = 0x1450cdee8;
        uVar29 = FUN_145389100();
        if (((int)uVar29 != 1) && ((int)uVar29 != 0x3f)) {
          *(undefined4 *)(puVar37 + 6) = 2;
          return uVar29 & 0xffffffffffffff00;
        }
      }
    }
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
    uVar29 = (ulonglong)bVar39;
  }
  else {
LAB_1450cdb24:
    uVar29 = uVar29 & 0xffffffffffffff00;
  }
  return uVar29;
}



// FUNCTION 1450cdf50 FUN_1450cdf50 body=65 status=ok
// SIG undefined FUN_1450cdf50(void)

void FUN_1450cdf50(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_2 + 0x10) = DAT_14c72f434;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))();
  if (*(int *)(param_2 + 0x30) == 0x2e) {
    FUN_1450cf020(param_1);
  }
  return;
}



// FUNCTION 1450cdfa0 FUN_1450cdfa0 body=230 status=ok
// SIG undefined FUN_1450cdfa0(void)

void FUN_1450cdfa0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    *(undefined2 *)(param_2 + 0x10) = DAT_14c72f434;
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))();
    if (*(int *)(param_2 + 0x30) == 0x2e) {
      FUN_1450cf020(param_1);
    }
    if ((*(int *)(param_2 + 0x30) == 0x11) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      iVar1 = FUN_1450ccca0(param_1,param_2);
      *(int *)(param_2 + 0x30) = iVar1;
      if (iVar1 == 0x2b) {
        FUN_1450cdf50(param_1,param_2);
        return;
      }
    }
  }
  else {
    FUN_14539c650();
    iVar1 = *(int *)(param_2 + 0x30);
    while (iVar1 == 0x2b) {
      *(undefined2 *)(param_2 + 0x10) = DAT_14c72f434;
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),param_2);
      if (*(int *)(param_2 + 0x30) == 0x2e) {
        FUN_1450cf020(param_1);
      }
      if ((*(int *)(param_2 + 0x30) != 0x2d) && (*(int *)(param_2 + 0x30) != 0x11)) {
        return;
      }
      FUN_14539c6f0(*(undefined8 *)(param_1 + 0xf8),param_2);
      iVar1 = *(int *)(param_2 + 0x30);
    }
  }
  return;
}



// FUNCTION 1450ce090 FUN_1450ce090 body=121 status=ok
// SIG undefined FUN_1450ce090(void)

void FUN_1450ce090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x18);
  if (((*(uint *)(plVar1 + 1) & 0x100000) != 0) && (*(int *)(param_2 + 0x20) != -1)) {
    FUN_1450c8f80(DAT_14c791050,(int)plVar1[0x50],param_2 + 0x20);
  }
  uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
  if (uVar2 != 0xffffffff) {
    if (uVar2 < *(ushort *)(param_2 + 0x12)) {
      *(short *)(param_2 + 0x12) = (short)uVar2;
    }
    *(undefined4 *)(param_1 + 0x100) = 2;
  }
  return;
}



// FUNCTION 1450ce110 FUN_1450ce110 body=33 status=ok
// SIG undefined FUN_1450ce110(void)

void FUN_1450ce110(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))(param_1 + 0x78);
  FUN_14538a060(param_1);
  return;
}



// FUNCTION 1450ce140 FUN_1450ce140 body=1312 status=ok
// SIG undefined FUN_1450ce140(void)

int FUN_1450ce140(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong **pplVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong *_Dst;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *local_res8;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  longlong *local_78 [10];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 5;
  pvVar7 = AK::MemoryMgr::Malloc(5,0xa0);
  *(void **)(param_1 + 0x108) = pvVar7;
  uVar4 = DAT_14c72f42c;
  uVar10 = 1;
  local_78[0] = *(longlong **)(param_1 + 0xe8);
  local_a8 = *(undefined8 *)(lVar2 + 0x2b0);
  local_a0 = *(undefined4 *)(lVar2 + 0x2b8);
  cVar5 = (**(code **)(*local_78[0] + 0xa8))();
  if (cVar5 == '\0') {
    puVar8 = AK::MemoryMgr::Malloc(5,0xf8);
    if (puVar8 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      return 0x34;
    }
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_149c27890;
    FUN_145387c70(puVar8 + 2);
    *(undefined1 *)(puVar8 + 0x11) = 0;
    *(uint *)(puVar8 + 0x11) = *(uint *)(puVar8 + 0x11) & 0xff;
    *(undefined1 *)(puVar8 + 0x17) = 0;
    *(uint *)(puVar8 + 0x17) = *(uint *)(puVar8 + 0x17) & 0xff;
    puVar8[0x1c] = param_1;
    puVar8[0x1d] = 0;
    puVar8[0x10] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x8c) = 0x2b;
    puVar8[0x13] = 0;
    *(undefined4 *)(puVar8 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0xa4) = 0x3f800000;
    *(undefined4 *)(puVar8 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0xac) = 1;
    puVar8[0x16] = 0;
    *(undefined8 *)((longlong)puVar8 + 0xbc) = 0x2b;
    puVar8[0x19] = 0;
    *(undefined4 *)(puVar8 + 0x1a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0xd4) = 0x3f800000;
    *(undefined4 *)(puVar8 + 0x1b) = 0xffffffff;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = 1;
    *(undefined8 **)(param_1 + 0xf8) = puVar8;
    iVar6 = FUN_14539ce40(puVar8,&local_a8,lVar2,uVar4);
    if (iVar6 != 1) {
      return 2;
    }
    local_78[1] = *(longlong **)(param_1 + 0xf8);
    uVar10 = 2;
  }
  uVar12 = 0;
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 2;
  puVar8 = (undefined8 *)(param_1 + 0xb0);
  local_a8 = CONCAT44(local_a8._4_4_,uVar4);
  do {
    local_98[0] = (longlong *)0x0;
    FUN_1450ebfc0(lVar2,uVar12,local_98);
    uVar11 = uVar10;
    if (local_98[0] == (longlong *)0x0) goto LAB_1450ce565;
    local_res8 = (longlong *)0x0;
    local_88[0] = 0;
    local_84 = 0;
    local_80 = 1;
    local_7c = 0x100;
    local_7a = 0;
    iVar6 = FUN_145089070((int)local_98[0][7],&local_res8,local_88);
    if (iVar6 == 1) {
      iVar6 = FUN_1450894a0((int)local_98[0][7],3,local_88);
      if ((iVar6 != 0) ||
         ((((char)local_80 != '\0' && (local_80._1_1_ != '\0')) || ((char)local_7c != '\0')))) {
        (**(code **)(*local_res8 + 8))(local_res8,&PTR_PTR_14c72f458);
        goto LAB_1450ce365;
      }
      if (local_80._3_1_ == '\0') {
        if ((char)local_80 == '\0') {
          pvVar7 = AK::MemoryMgr::Malloc(5,0x168);
          if (pvVar7 == (void *)0x0) {
LAB_1450ce62e:
            (**(code **)(*local_res8 + 8))(local_res8,&PTR_PTR_14c72f458);
            if (local_98[0] == (longlong *)0x0) {
              return 2;
            }
            LOCK();
            piVar1 = (int *)((longlong)local_98[0] + 0x14);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 != 1) {
              return 2;
            }
            (**(code **)(*local_98[0] + 0x18))();
            return 2;
          }
          memset(pvVar7,0,0x168);
          _Dst = (longlong *)FUN_1450cff30(pvVar7);
          if (_Dst == (longlong *)0x0) goto LAB_1450ce62e;
        }
        else {
          _Dst = AK::MemoryMgr::Malloc(5,0xe8);
          if (_Dst == (longlong *)0x0) goto LAB_1450ce62e;
          memset(_Dst,0,0xe8);
          FUN_1450cfd60(_Dst);
          *_Dst = (longlong)&PTR_FUN_149c27b00;
          *(undefined1 *)(_Dst + 0x1c) = 0;
          *(uint *)(_Dst + 0x1c) = *(uint *)(_Dst + 0x1c) & 0xff;
        }
      }
      else {
        if (((char)local_80 == '\0') ||
           (_Dst = AK::MemoryMgr::Malloc(5,0xe8), _Dst == (longlong *)0x0)) goto LAB_1450ce62e;
        memset(_Dst,0,0xe8);
        FUN_1450cfd60(_Dst);
        *(undefined1 *)(_Dst + 0x1c) = 0;
        *(uint *)(_Dst + 0x1c) = *(uint *)(_Dst + 0x1c) & 0xff;
        *_Dst = (longlong)&PTR_FUN_149c27b98;
      }
      iVar6 = (**(code **)(*_Dst + 0x58))(_Dst,local_res8,local_98,uVar12,param_1,&local_a8);
      if (iVar6 == 1) {
        uVar11 = (ulonglong)(byte)((char)uVar10 + 1);
        *puVar8 = _Dst;
        local_78[uVar10] = _Dst;
        if (local_98[0] != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_98[0] + 0x14);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 != 1) goto LAB_1450ce528;
          (**(code **)(*local_98[0] + 0x18))();
          local_98[0] = (longlong *)0x0;
        }
      }
      else {
        (**(code **)(*_Dst + 0x60))(_Dst);
        (**(code **)*_Dst)(_Dst,0);
        AK::MemoryMgr::Free(5,_Dst);
        if (local_98[0] != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_98[0] + 0x14);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_98[0] + 0x18))();
          }
LAB_1450ce528:
          local_98[0] = (longlong *)0x0;
        }
      }
    }
    else {
LAB_1450ce365:
      if (local_98[0] != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_98[0] + 0x14);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_98[0] + 0x18))();
        }
        local_98[0] = (longlong *)0x0;
      }
    }
LAB_1450ce565:
    uVar12 = uVar12 + 1;
    puVar8 = puVar8 + 1;
    uVar10 = uVar11;
    if (3 < uVar12) {
      *(undefined4 *)(param_1 + 0x160) = local_a8._4_4_;
      iVar6 = FUN_145381d40(param_1 + 0x88);
      if (iVar6 == 1) {
        bVar9 = (char)uVar11 + 1;
        local_78[uVar11] = (longlong *)(param_1 + 0x78);
        iVar6 = FUN_145388750((longlong *)(param_1 + 0xd0),lVar2);
        if (iVar6 == 1) {
          local_78[bVar9] = (longlong *)(param_1 + 0xd0);
          pplVar3 = local_78 + bVar9;
          for (; bVar9 != 0; bVar9 = bVar9 - 1) {
            (**(code **)(**pplVar3 + 0x50))(*pplVar3,pplVar3[-1]);
            pplVar3 = pplVar3 + -1;
          }
          if (*(longlong *)(param_1 + 0xf8) != 0) {
            FUN_14539cf50(*(longlong *)(param_1 + 0xf8),&local_a8);
          }
          FUN_1450cee50(param_1);
        }
      }
      return iVar6;
    }
  } while( true );
}



// FUNCTION 1450ce660 FUN_1450ce660 body=178 status=ok
// SIG undefined FUN_1450ce660(void)

undefined8 FUN_1450ce660(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  
  uVar6 = 0;
  plVar5 = (longlong *)(param_1 + 0xb0);
  uVar4 = 0;
  do {
    plVar1 = (longlong *)*plVar5;
    if (plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
      cVar2 = FUN_14538bec0(plVar1 + 2,param_2,uVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 1;
  } while (uVar4 < 4);
  plVar5 = (longlong *)(param_1 + 0xe8);
  while ((plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0 ||
         (cVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,param_2), cVar2 == '\0'))) {
    uVar6 = uVar6 + 1;
    plVar5 = plVar5 + 1;
    if (1 < uVar6) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1450ce720 FUN_1450ce720 body=188 status=ok
// SIG undefined FUN_1450ce720(void)

undefined8 FUN_1450ce720(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  
  uVar6 = 0;
  plVar5 = (longlong *)(param_1 + 0xb0);
  uVar4 = 0;
  do {
    plVar1 = (longlong *)*plVar5;
    if (plVar1 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x88))(plVar1);
      cVar2 = FUN_14538bf40(plVar1 + 2,param_2,uVar3,param_3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
    plVar5 = plVar5 + 1;
  } while (uVar4 < 4);
  plVar5 = (longlong *)(param_1 + 0xe8);
  while ((plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0 ||
         (cVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,param_2,param_3), cVar2 == '\0'))) {
    uVar6 = uVar6 + 1;
    plVar5 = plVar5 + 1;
    if (1 < uVar6) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1450ce7e0 FUN_1450ce7e0 body=193 status=ok
// SIG undefined FUN_1450ce7e0(void)

undefined8 FUN_1450ce7e0(longlong param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = FUN_145389100(*(undefined8 *)(param_1 + 0xe8));
  if (iVar1 == 0x3f) {
    if (*(int *)(param_2 + 0x338) < 0) {
      FUN_1450cf020(param_1);
    }
  }
  else {
    if (iVar1 != 1) {
      return 2;
    }
    fVar3 = (float)((uint)DAT_14c72f434 * (DAT_14c791094 + 1)) * *(float *)(param_2 + 700);
    if (fVar3 <= 0.0) {
      fVar2 = -0.5;
    }
    else {
      fVar2 = 0.5;
    }
    if (*(int *)(param_2 + 0x338) < (int)(fVar2 + fVar3)) {
      if (*(int *)(param_2 + 0x338) < 0) {
        FUN_1450cf020(param_1);
      }
      return 1;
    }
  }
  return 0x3f;
}



// FUNCTION 1450ce8b0 FUN_1450ce8b0 body=1262 status=ok
// SIG undefined FUN_1450ce8b0(void)

void FUN_1450ce8b0(longlong param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint local_res10 [2];
  char local_res18;
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  uint local_58;
  longlong *local_50;
  undefined2 local_48;
  
  uVar10 = (ulonglong)(int)param_2;
  if (param_2 == 0xffffffff) {
    return;
  }
  lVar4 = (longlong)(int)(param_2 + 1);
  local_res18 = '\0';
  plVar6 = (longlong *)0x0;
  if (lVar4 < 4) {
    plVar7 = (longlong *)(param_1 + 0xb0 + lVar4 * 8);
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        local_res18 = '\x01';
        plVar6 = (longlong *)*plVar7;
        break;
      }
      lVar4 = lVar4 + 1;
      plVar7 = plVar7 + 1;
      plVar6 = (longlong *)0x0;
    } while (lVar4 < 4);
  }
  lVar4 = (longlong)(int)(param_2 - 1);
  plVar7 = (longlong *)(param_1 + 0x78);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  local_res10[0] = param_2;
  local_70 = plVar7;
  if (-1 < (int)(param_2 - 1)) {
    plVar6 = (longlong *)(param_1 + 0xb0 + lVar4 * 8);
    do {
      plVar11 = (longlong *)*plVar6;
      if (plVar11 != (longlong *)0x0) {
        local_80 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x18);
        local_60 = local_80[0x56];
        local_58 = *(uint *)(local_80 + 0x57);
        puVar5 = (uint *)(**(code **)(*plVar11 + 0x90))(plVar11,local_res20);
        uVar9 = *puVar5;
        goto LAB_1450ce9fa;
      }
      plVar6 = plVar6 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  plVar11 = *(longlong **)(param_1 + 0xf8);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = *(longlong **)(param_1 + 0xe8);
    local_80 = (longlong *)plVar11[3];
    uVar9 = (uint)((ulonglong)local_80[0x56] >> 0x20);
    local_58 = *(uint *)(local_80 + 0x57);
  }
  else {
    local_80 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x18);
    uVar9 = (uint)((ulonglong)local_80[0x56] >> 0x20);
    local_58 = *(uint *)(local_80 + 0x57);
  }
LAB_1450ce9fa:
  local_60._0_4_ = DAT_14c72f42c;
  local_78 = (undefined8 *)((ulonglong)param_2 * 8 + 0xb0 + param_1);
  local_58 = ((uVar9 & 0xff) * 0x20 | 0xa000) << 3 | local_58 & 0xfffd0020 | 0x20;
  plVar6 = (longlong *)*local_78;
  local_60._4_4_ = uVar9;
  if (plVar6 != (longlong *)0x0) {
    puVar5 = (uint *)(**(code **)(*plVar6 + 0x90))(plVar6,local_88);
    uVar8 = local_res10[0];
    uVar9 = *puVar5;
    if ((int)param_2 < 4) {
      plVar7 = (longlong *)(param_1 + 0xb0 + uVar10 * 8);
      do {
        if ((((longlong *)*plVar7 != (longlong *)0x0) &&
            (cVar2 = (**(code **)(*(longlong *)*plVar7 + 0x70))(), cVar2 != '\0')) &&
           (param_2 != uVar8)) break;
        param_2 = param_2 + 1;
        plVar7 = plVar7 + 1;
      } while ((int)param_2 < 4);
      uVar10 = (ulonglong)local_res10[0];
      plVar7 = local_70;
    }
    FUN_14539c5c0(plVar7);
    (**(code **)(*plVar6 + 0x60))(plVar6);
    (**(code **)*plVar6)(plVar6,0);
    AK::MemoryMgr::Free(5,plVar6);
    *local_78 = 0;
  }
  plVar6 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  (**(code **)(*(longlong *)local_80[0x3d] + 0x1b0))
            ((longlong *)local_80[0x3d],uVar10 & 0xffffffff,&local_50,local_80[4]);
  uVar8 = local_60._4_4_;
  if (local_50 == (longlong *)0x0) {
LAB_1450cece4:
    if ((((char)uVar8 != (char)uVar9) || (((uVar8 ^ uVar9) & 0xf00) != 0)) ||
       (((uVar8 ^ uVar9) & 0xfffff000) != 0)) {
      if (local_res18 != '\0') {
        FUN_1450ce8b0(param_1,(int)uVar10 + 1);
        goto LAB_1450ced4b;
      }
      FUN_145381df0(param_1 + 0x88);
      FUN_145381d40(param_1 + 0x88,uVar8);
      *(uint *)(param_1 + 0x160) = uVar8;
    }
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
  }
  else {
    local_80 = (longlong *)0x0;
    local_70 = (longlong *)(((ulonglong)local_70 >> 8 & 0xffffff) << 8);
    local_68 = 1;
    local_64 = 0x100;
    local_62 = 0;
    iVar3 = FUN_145089070((int)local_50[7],&local_80,&local_70);
    if (iVar3 == 1) {
      iVar3 = FUN_1450894a0((int)local_50[7],3,&local_70);
      if (iVar3 == 0) {
        cVar2 = local_68._3_1_;
        if ((char)local_68 != '\0') {
          cVar2 = local_68._1_1_;
        }
        if ((cVar2 == '\0') && ((char)local_64 == '\0')) {
          if ((char)local_68 == '\0') {
            _Dst = AK::MemoryMgr::Malloc(5,0x168);
            if (_Dst != (void *)0x0) {
              memset(_Dst,0,0x168);
              plVar6 = (longlong *)FUN_1450cff30(_Dst);
              if (plVar6 != (longlong *)0x0) goto LAB_1450cec66;
            }
          }
          else if (local_68._3_1_ == '\0') {
            plVar6 = AK::MemoryMgr::Malloc(5,0xe8);
            if (plVar6 != (longlong *)0x0) {
              memset(plVar6,0,0xe8);
              FUN_1450cfd60(plVar6);
              *plVar6 = (longlong)&PTR_FUN_149c27b00;
              *(undefined1 *)(plVar6 + 0x1c) = 0;
              *(uint *)(plVar6 + 0x1c) = *(uint *)(plVar6 + 0x1c) & 0xff;
LAB_1450cec66:
              iVar3 = (**(code **)(*plVar6 + 0x58))
                                (plVar6,local_80,&local_50,uVar10 & 0xffffffff,param_1,&local_60);
              if (iVar3 == 1) {
                *local_78 = plVar6;
                *(undefined2 *)((longlong)plVar6 + 0xca) = local_48;
                (**(code **)(*plVar6 + 0x50))(plVar6,plVar11);
                puVar5 = (uint *)(**(code **)(*plVar6 + 0x90))(plVar6,local_res10);
                uVar8 = *puVar5;
                goto LAB_1450cece4;
              }
              (**(code **)(*plVar6 + 0x60))();
              (**(code **)*plVar6)(plVar6,0);
              AK::MemoryMgr::Free(5,plVar6);
              goto LAB_1450ced3f;
            }
          }
          else {
            plVar6 = AK::MemoryMgr::Malloc(5,0xe8);
            if (plVar6 != (longlong *)0x0) {
              memset(plVar6,0,0xe8);
              FUN_1450cfd60(plVar6);
              *(undefined1 *)(plVar6 + 0x1c) = 0;
              *(uint *)(plVar6 + 0x1c) = *(uint *)(plVar6 + 0x1c) & 0xff;
              *plVar6 = (longlong)&PTR_FUN_149c27b98;
              goto LAB_1450cec66;
            }
          }
        }
      }
      (**(code **)(*local_80 + 8))(local_80,&PTR_PTR_14c72f458);
    }
  }
LAB_1450ced3f:
  (**(code **)(*plVar7 + 0x50))(plVar7,plVar11);
LAB_1450ced4b:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0x14);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  return;
}



// FUNCTION 1450ceda0 FUN_1450ceda0 body=135 status=ok
// SIG undefined FUN_1450ceda0(void)

void FUN_1450ceda0(longlong param_1,uint param_2,byte param_3)

{
  if ((*(longlong *)(param_1 + 0xb0) != 0) && ((param_3 & 1) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0xb0) + 0xca) = (ushort)param_2 & 1;
  }
  if ((*(longlong *)(param_1 + 0xb8) != 0) && ((param_3 & 2) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0xb8) + 0xca) = (ushort)(param_2 >> 1) & 1;
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) && ((param_3 & 4) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 0xc0) + 0xca) = (ushort)(param_2 >> 2) & 1;
  }
  if ((*(longlong *)(param_1 + 200) != 0) && ((param_3 & 8) != 0)) {
    *(ushort *)(*(longlong *)(param_1 + 200) + 0xca) = (ushort)(param_2 >> 3) & 1;
  }
  return;
}



// FUNCTION 1450cee30 FUN_1450cee30 body=24 status=ok
// SIG undefined FUN_1450cee30(void)

void FUN_1450cee30(longlong param_1,ulonglong param_2,short param_3)

{
  short *psVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0 + (param_2 & 0xffffffff) * 8);
  if (lVar2 != 0) {
    psVar1 = (short *)(lVar2 + 0xca);
    *psVar1 = *psVar1 + param_3;
  }
  return;
}



// FUNCTION 1450cee50 FUN_1450cee50 body=458 status=ok
// SIG undefined FUN_1450cee50(void)

void FUN_1450cee50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined2 local_10;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    if (lVar4 != 0) {
      local_18 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x1b0))(plVar5,0,&local_18,*(undefined8 *)(lVar3 + 0x20));
      *(undefined2 *)(lVar4 + 0xca) = local_10;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 0x18))();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
    lVar4 = *(longlong *)(param_1 + 0xb8);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    if (lVar4 != 0) {
      local_18 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x1b0))(plVar5,1,&local_18,*(undefined8 *)(lVar3 + 0x20));
      *(undefined2 *)(lVar4 + 0xca) = local_10;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 0x18))();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
    lVar4 = *(longlong *)(param_1 + 0xc0);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    if (lVar4 != 0) {
      local_18 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x1b0))(plVar5,2,&local_18,*(undefined8 *)(lVar3 + 0x20));
      *(undefined2 *)(lVar4 + 0xca) = local_10;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 0x18))();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
    lVar4 = *(longlong *)(param_1 + 200);
    plVar5 = *(longlong **)(lVar3 + 0x1e8);
    if (lVar4 != 0) {
      local_18 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x1b0))(plVar5,3,&local_18,*(undefined8 *)(lVar3 + 0x20));
      *(undefined2 *)(lVar4 + 0xca) = local_10;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0x14);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 0x18))();
        }
      }
    }
  }
  return;
}



// FUNCTION 1450cf020 FUN_1450cf020 body=99 status=ok
// SIG undefined FUN_1450cf020(void)

void FUN_1450cf020(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x20) & 2) == 0) {
    *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 1;
    lVar4 = *(longlong *)(param_1 + 8);
    puVar3 = (undefined4 *)(lVar4 + 0x268);
    if (lVar4 == 0) {
      puVar3 = (undefined4 *)&DAT_00000280;
    }
    uVar1 = *puVar3;
    if (lVar4 == 0) {
      lVar4 = 0x18;
    }
    uVar2 = FUN_1450e71d0(lVar4);
    FUN_1450b35d0(DAT_14c790fc0,uVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1450cf090 FUN_1450cf090 body=101 status=ok
// SIG undefined FUN_1450cf090(void)

void FUN_1450cf090(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x58))();
    puVar1 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  FUN_1450cf9a0(param_1);
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  return;
}



// FUNCTION 1450cf100 FUN_1450cf100 body=106 status=ok
// SIG undefined FUN_1450cf100(void)

undefined8 FUN_1450cf100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 0xe8);
  uVar3 = 0;
  do {
    plVar1 = (longlong *)*plVar4;
    if ((plVar1 != (longlong *)0x0) && (plVar1[3] == param_2)) {
      cVar2 = (**(code **)(*plVar1 + 0xb8))();
      if (cVar2 != '\0') {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 1;
  } while (uVar3 < 2);
  return 0;
}



// FUNCTION 1450cf170 FUN_1450cf170 body=216 status=ok
// SIG undefined FUN_1450cf170(void)

undefined8 FUN_1450cf170(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar4;
  
  plVar6 = (longlong *)(param_1 + 0xe8);
  uVar4 = 0;
  while ((plVar1 = (longlong *)*plVar6, plVar1 == (longlong *)0x0 || (plVar1[3] != param_2))) {
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    plVar6 = plVar6 + 1;
    if (1 < uVar3) {
      return 0x1f;
    }
  }
  uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_3,param_4);
  if ((int)uVar5 != 1) {
    return uVar5;
  }
  cVar2 = (**(code **)(*plVar1 + 200))(plVar1);
  if (cVar2 != '\0') {
    uVar4 = param_2 + 0x18;
    if (param_2 == 0) {
      uVar4 = 0;
    }
    if ((*(ulonglong *)(param_1 + 8) == uVar4) && (*(longlong *)(param_1 + 0xf8) != 0)) {
      FUN_14539cec0(*(longlong *)(param_1 + 0xf8),param_3,param_4);
    }
  }
  cVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1);
  if (cVar2 != '\0') {
    plVar1[2] = plVar1[2] + (param_3 - param_4);
  }
  return 1;
}



// FUNCTION 1450cf250 FUN_1450cf250 body=313 status=ok
// SIG undefined FUN_1450cf250(void)

ulonglong FUN_1450cf250(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res10 [2];
  int local_res20 [2];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  short *local_28;
  
  lVar2 = *(longlong *)(param_2 + 0x2a0);
  if ((*(longlong *)(param_2 + 0x348) != 0) && (*(int *)(param_2 + 0x350) != 0)) {
    uVar1 = FUN_1450731d0(*(longlong *)(param_2 + 0x348),*(int *)(param_2 + 0x350),local_30,0,
                          local_34,local_38,local_res20,local_res10,0,0,1);
    if (uVar1 != 1) {
      FUN_1450eb2f0(param_2,1);
      return (ulonglong)uVar1;
    }
    if (*local_28 == -2) {
      *(undefined4 *)(lVar2 + 0x18) = 0x10001;
    }
    if ((uint)(local_res10[0] + local_res20[0]) <= *(uint *)(param_2 + 0x350)) {
      *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) & 0xffffff8f | 0xc;
    }
  }
  uVar1 = *(uint *)(lVar2 + 0xc) >> 2 & 0x1f;
  if (((uVar1 != 3) || (*(longlong *)(param_2 + 0x348) != 0)) &&
     (lVar2 = FUN_145388d60(uVar1,*(undefined4 *)(lVar2 + 0x18),param_2), lVar2 != 0)) {
    uVar3 = FUN_1450cf390(param_1,lVar2,param_3,1);
    return uVar3;
  }
  FUN_1450eb2f0(param_2,1);
  return 2;
}



// FUNCTION 1450cf390 FUN_1450cf390 body=733 status=ok
// SIG undefined FUN_1450cf390(void)

int FUN_1450cf390(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar3 = param_2[3];
  *(longlong *)(lVar3 + 0x2a8) = param_1;
  if ((param_3 != '\0') && (param_4 != '\0')) {
    uVar8 = FUN_1450eb560(lVar3,param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = uVar8;
    if ((*(int *)(lVar3 + 0x1cc) == 0) && (*(int *)(lVar3 + 0x1cc) == 0)) {
      uVar12 = (ulonglong)*(uint *)(lVar3 + 0x1c8);
      if (*(void **)(lVar3 + 0x1c0) == (void *)0x0) {
        pvVar10 = AK::MemoryMgr::Malloc(0,0x90);
        bVar6 = false;
        if (pvVar10 != (void *)0x0) {
          if ((*(void **)(lVar3 + 0x1c0) != (void *)0x0) && (*(void **)(lVar3 + 0x1c0) != pvVar10))
          {
            if (uVar12 != 0) {
              lVar11 = (longlong)pvVar10 + 0x34;
              do {
                if ((undefined8 *)(lVar11 + -0x34) != (undefined8 *)0x0) {
                  *(undefined8 *)(lVar11 + -4) = 0;
                  *(undefined4 *)(lVar11 + 4) = 0;
                  *(undefined4 *)(lVar11 + 8) = 0x3f800000;
                  *(undefined4 *)(lVar11 + 0xc) = 0x3f800000;
                  *(undefined8 *)(lVar11 + 0x10) = 0x3f800000;
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  *(undefined8 *)(lVar11 + 0x20) = 0;
                  *(undefined4 *)(lVar11 + 0x28) = 0x42c80000;
                  *(undefined4 *)(lVar11 + 0x2c) = 0x3f800000;
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                  *(undefined4 *)(lVar11 + 0x34) = 0;
                  *(undefined8 *)(lVar11 + 0x3c) = 0;
                  *(undefined8 *)(lVar11 + 0x44) = 0x3f800000;
                  *(undefined4 *)(lVar11 + 0x4c) = 0;
                  *(undefined4 *)(lVar11 + 0x50) = 0xbf800000;
                  *(undefined4 *)(lVar11 + 0x54) = 0x3f800000;
                }
                lVar4 = *(longlong *)(lVar3 + 0x1c0);
                lVar1 = lVar11 + (-0x34 - (longlong)pvVar10);
                uVar5 = ((undefined8 *)(lVar1 + lVar4))[1];
                *(undefined8 *)(lVar11 + -0x34) = *(undefined8 *)(lVar1 + lVar4);
                *(undefined8 *)(lVar11 + -0x2c) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + -0x24) = *puVar2;
                *(undefined8 *)(lVar11 + -0x1c) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + -0x14) = *puVar2;
                *(undefined8 *)(lVar11 + -0xc) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + -4) = *puVar2;
                *(undefined8 *)(lVar11 + 4) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x40 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + 0xc) = *puVar2;
                *(undefined8 *)(lVar11 + 0x14) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x50 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + 0x1c) = *puVar2;
                *(undefined8 *)(lVar11 + 0x24) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x60 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + 0x2c) = *puVar2;
                *(undefined8 *)(lVar11 + 0x34) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x70 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + 0x3c) = *puVar2;
                *(undefined8 *)(lVar11 + 0x44) = uVar5;
                puVar2 = (undefined8 *)(lVar1 + 0x80 + lVar4);
                uVar5 = puVar2[1];
                *(undefined8 *)(lVar11 + 0x4c) = *puVar2;
                *(undefined8 *)(lVar11 + 0x54) = uVar5;
                uVar12 = uVar12 - 1;
                lVar11 = lVar11 + 0x90;
              } while (uVar12 != 0);
            }
            AK::MemoryMgr::Free(0,*(void **)(lVar3 + 0x1c0));
          }
          goto LAB_1450cf56e;
        }
      }
      else {
        pvVar10 = AK::MemoryMgr::Realloc(0,*(void **)(lVar3 + 0x1c0),0x90);
        if (pvVar10 == (void *)0x0) {
          bVar6 = false;
        }
        else {
LAB_1450cf56e:
          *(void **)(lVar3 + 0x1c0) = pvVar10;
          bVar6 = true;
          *(undefined4 *)(lVar3 + 0x1cc) = 1;
        }
      }
      if (!bVar6) {
        iVar9 = 2;
        goto LAB_1450cf5fd;
      }
    }
  }
  if ((*(int *)(param_1 + 0x11c) != 0) && (cVar7 = FUN_1450e8940(lVar3 + 0x18,0), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x11c) == 1) {
      iVar9 = 3;
      goto LAB_1450cf5fd;
    }
    if (((*(int *)(param_1 + 0x118) == 0) && (param_3 != '\0')) && (param_4 != '\0')) {
      iVar9 = 1;
      if ((*(int *)(param_1 + 0x11c) != 0) && ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
        FUN_1450ebab0(lVar3);
      }
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
      goto LAB_1450cf629;
    }
  }
  iVar9 = FUN_145389100(param_2);
  if ((iVar9 == 1) || (iVar9 == 0x3f)) {
    if (param_3 == '\0') {
      *(longlong **)(param_1 + 0xf0) = param_2;
      return iVar9;
    }
LAB_1450cf629:
    *(longlong **)(param_1 + 0xe8) = param_2;
    lVar11 = param_2[3] + 0x18;
    if (param_2[3] == 0) {
      lVar11 = 0;
    }
    *(longlong *)(param_1 + 8) = lVar11;
    *(byte *)(lVar3 + 0x316) = *(byte *)(lVar3 + 0x316) & 0xfd;
    return iVar9;
  }
LAB_1450cf5fd:
  (**(code **)(*param_2 + 0x58))(param_2,1);
  (**(code **)*param_2)(param_2,0);
  AK::MemoryMgr::Free(5,param_2);
  return iVar9;
}



// FUNCTION 1450cf670 FUN_1450cf670 body=437 status=ok
// SIG undefined FUN_1450cf670(void)

void FUN_1450cf670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  float fVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x18);
  if ((*(byte *)(lVar1 + 0x220) & 1) == 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x68))(lVar1 + 0x18,0);
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x70))(lVar1 + 0x18);
    if ((*(byte *)(lVar1 + 0x220) & 0x10) != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x18) + 0x78))(lVar1 + 0x18);
    }
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x18);
    plVar6 = (longlong *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x220) & 1) == 0) {
      (**(code **)(*plVar6 + 0x68))(plVar6,0);
    }
    else {
      (**(code **)(*plVar6 + 0x70))(plVar6);
      if ((*(byte *)(lVar2 + 0x220) & 0x10) != 0) {
        (**(code **)(*plVar6 + 0x78))(plVar6);
      }
    }
  }
  if ((*(byte *)(lVar1 + 0x221) & 3) == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    fVar7 = *(float *)(lVar1 + 0x88) * 0.05;
    if ((fVar7 < -37.0) || (37.0 < fVar7)) {
      fVar7 = 0.0;
    }
    else {
      uVar5 = (uint)(longlong)(fVar7 * 27866352.0 + 1.0653532e+09);
      fVar7 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
      fVar7 = ((fVar7 * 0.32518977 + 0.020805772) * fVar7 + 0.65304345) *
              (float)(uVar5 & 0xff800000);
    }
    *(float *)(param_1 + 0x10) = fVar7 * *(float *)(lVar1 + 0x100);
    if ((*(byte *)(lVar1 + 0x170) & 8) != 0) {
      iVar4 = FUN_1450e7200(lVar1);
      if (iVar4 != 0) {
        thunk_FUN_14507c840(lVar1,lVar1 + 0x1a8);
      }
    }
    FUN_1453893b0(param_1);
    return;
  }
  cVar3 = FUN_1450eb610(lVar1);
  if ((cVar3 != '\0') || (*(int *)(param_1 + 0x11c) == 0)) {
    *(undefined4 *)(param_1 + 0x11c) = 2;
    *(undefined4 *)(param_1 + 0x118) = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x1c8) = 0;
  FUN_1450eb6b0(lVar1);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1450cf8a0 FUN_1450cf8a0 body=97 status=ok
// SIG undefined FUN_1450cf8a0(void)

void FUN_1450cf8a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x38); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    lVar2 = *(longlong *)(lVar1 + 0x140);
    if (lVar2 != (ulonglong)*(uint *)(lVar1 + 0x148) * 0x118 + lVar2) {
      do {
        *(longlong *)(lVar2 + 0x18) = param_1 + 0x128;
        lVar2 = lVar2 + 0x118;
      } while (lVar2 != (ulonglong)*(uint *)(lVar1 + 0x148) * 0x118 + *(longlong *)(lVar1 + 0x140));
    }
  }
  return;
}



// FUNCTION 1450cf910 FUN_1450cf910 body=134 status=ok
// SIG undefined FUN_1450cf910(void)

void FUN_1450cf910(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x110) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x108);
    }
    FUN_1450b3230(DAT_14c790fc0,(ulonglong)*(uint *)(param_2 + 0x18) * 0x20 + lVar2,iVar1);
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x40))(param_1 + 0x78,iVar1);
    FUN_1450cc6f0(param_1 + 0x108,iVar1);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1450cf9a0 FUN_1450cf9a0 body=475 status=ok
// SIG undefined FUN_1450cf9a0(void)

void FUN_1450cf9a0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_14539ce70();
    puVar1 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x60))();
    puVar1 = *(undefined8 **)(param_1 + 0xb0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x60))();
    puVar1 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x60))();
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x60))();
    puVar1 = *(undefined8 **)(param_1 + 200);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      AK::MemoryMgr::Free(5,puVar1);
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  FUN_145381df0(param_1 + 0x88);
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xfd;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar4 = uVar2;
    if (0 < *(int *)(param_1 + 0x110)) {
      do {
        if (*(char *)(uVar4 + 0x18 + *(longlong *)(param_1 + 0x108)) != '\0') {
          AK::MemoryMgr::Free(5,*(void **)(uVar4 + 8 + *(longlong *)(param_1 + 0x108)));
          *(undefined8 *)(uVar4 + 8 + *(longlong *)(param_1 + 0x108)) = 0;
        }
        uVar3 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar3;
        uVar4 = uVar4 + 0x20;
      } while ((int)uVar3 < *(int *)(param_1 + 0x110));
    }
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  return;
}



// FUNCTION 1450cfbb0 FUN_1450cfbb0 body=15 status=ok
// SIG undefined FUN_1450cfbb0(void)

void FUN_1450cfbb0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x174) = 0x42ca0000;
  return;
}



// FUNCTION 1450cfbc0 FUN_1450cfbc0 body=219 status=ok
// SIG undefined FUN_1450cfbc0(void)

void FUN_1450cfbc0(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_2 + 0x25c) + *(float *)(param_2 + 0xb4);
  if (fVar4 != *(float *)(param_1 + 0x164)) {
    pfVar1 = *(float **)(param_3 + 0x10);
    fVar5 = 1.0;
    if ((pfVar1 != (float *)0x0) &&
       (fVar5 = pfVar1[1], (*(byte *)(*(longlong *)(param_3 + 0x18) + 0x162) & 0x20) != 0)) {
      fVar5 = fVar5 * *pfVar1;
    }
    fVar3 = fVar4 * 0.05;
    if ((fVar3 < -37.0) || (37.0 < fVar3)) {
      fVar3 = 0.0;
    }
    else {
      uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
      fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
      fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
              (float)(uVar2 & 0xff800000);
    }
    *(float *)(param_1 + 0x164) = fVar4;
    *(float *)(param_1 + 0x168) = fVar3 * fVar5;
  }
  return;
}



// FUNCTION 1450cfca0 FUN_1450cfca0 body=122 status=ok
// SIG undefined FUN_1450cfca0(void)

undefined8 * FUN_1450cfca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c279a8;
  param_1[0xd] = &PTR_LAB_149c27a10;
  FUN_1453886e0(param_1 + 0x1a);
  FUN_145381d30(param_1 + 0x11);
  param_1[0xf] = &PTR_FUN_149c277e0;
  param_1[0xd] = &PTR_FUN_149c277c0;
  FUN_145389220(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1450cfd20 FUN_1450cfd20 body=52 status=ok
// SIG undefined FUN_1450cfd20(void)

undefined8 FUN_1450cfd20(undefined8 param_1,ulonglong param_2)

{
  FUN_14509daa0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1450cfd60 FUN_1450cfd60 body=166 status=ok
// SIG undefined FUN_1450cfd60(void)

undefined8 * FUN_1450cfd60(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149c27a68;
  FUN_14538c040(param_1 + 2);
  param_1[9] = 0;
  param_1[7] = &PTR_FUN_149c27a30;
  param_1[8] = &PTR_LAB_149c27a58;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 1450cfe10 FUN_1450cfe10 body=75 status=ok
// SIG undefined FUN_1450cfe10(void)

undefined8 * FUN_1450cfe10(undefined8 *param_1,ulonglong param_2)

{
  FUN_14509daa0(param_1 + 7);
  FUN_14538c060(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1450cfe80 FUN_1450cfe80 body=75 status=ok
// SIG undefined FUN_1450cfe80(void)

undefined8 * FUN_1450cfe80(undefined8 *param_1,ulonglong param_2)

{
  FUN_14509daa0(param_1 + 7);
  FUN_14538c060(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1450cfed0 FUN_1450cfed0 body=75 status=ok
// SIG undefined FUN_1450cfed0(void)

undefined8 * FUN_1450cfed0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14509daa0(param_1 + 7);
  FUN_14538c060(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1450cff30 FUN_1450cff30 body=198 status=ok
// SIG undefined FUN_1450cff30(void)

undefined8 * FUN_1450cff30(undefined8 *param_1)

{
  FUN_1450cfd60();
  *param_1 = &PTR_FUN_149c27c30;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xff;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xff;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x2b;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x2b;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 1;
  return param_1;
}



// FUNCTION 1450d0000 FUN_1450d0000 body=75 status=ok
// SIG undefined FUN_1450d0000(void)

undefined8 * FUN_1450d0000(undefined8 *param_1,ulonglong param_2)

{
  FUN_14509daa0(param_1 + 7);
  FUN_14538c060(param_1 + 2);
  *param_1 = &PTR_FUN_149c277e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1450d0060 FUN_1450d0060 body=43 status=ok
// SIG undefined FUN_1450d0060(void)

undefined8 * FUN_1450d0060(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27ce0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1450d0090 FUN_1450d0090 body=14 status=ok
// SIG undefined FUN_1450d0090(void)

void FUN_1450d0090(longlong param_1,__uint64 param_2)

{
  AK::MemoryMgr::Malign(*(int *)(param_1 + 8),param_2,0x10);
  return;
}



// FUNCTION 1450d00d0 FUN_1450d00d0 body=8 status=ok
// SIG undefined FUN_1450d00d0(void)

void FUN_1450d00d0(longlong param_1,void *param_2)

{
  AK::MemoryMgr::Free(*(int *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 1450d00e0 FUN_1450d00e0 body=43 status=ok
// SIG undefined FUN_1450d00e0(void)

undefined8 * FUN_1450d00e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149c27ce0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450d0110 FUN_1450d0110 body=650 status=ok
// SIG undefined FUN_1450d0110(void)

undefined8 FUN_1450d0110(void *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x28);
  uVar10 = (ulonglong)uVar3;
  uVar14 = *(int *)((longlong)param_1 + 0x2c) + param_2;
  pvVar4 = *(void **)((longlong)param_1 + 0x20);
  _Var9 = (ulonglong)uVar14 * 0x18;
  pvVar6 = param_1;
  if (pvVar4 == (void *)0x0) {
    if (0x18 < _Var9) {
      pvVar6 = AK::MemoryMgr::Malign(4,_Var9,0x10);
    }
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
    if ((*(void **)((longlong)param_1 + 0x20) != (void *)0x0) &&
       (*(void **)((longlong)param_1 + 0x20) != pvVar6)) {
      uVar13 = 0;
      if (3 < uVar10) {
        lVar11 = -(longlong)pvVar6;
        lVar12 = (uVar10 - 4 >> 2) + 1;
        uVar13 = lVar12 * 4;
        puVar8 = (undefined8 *)((longlong)pvVar6 + 0x10);
        do {
          puVar2 = puVar8 + -2;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + -1) = 0;
            *(undefined4 *)puVar8 = 0x3f800000;
          }
          lVar7 = *(longlong *)((longlong)param_1 + 0x20);
          puVar1 = (undefined8 *)((longlong)puVar8 + lVar7 + lVar11 + -0x10);
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar8[-1] = uVar5;
          *puVar8 = *(undefined8 *)((longlong)puVar8 + lVar7 + 0x10 + lVar11 + -0x10);
          puVar2 = puVar8 + 1;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 2) = 0;
            *(undefined4 *)(puVar8 + 3) = 0x3f800000;
          }
          lVar7 = *(longlong *)((longlong)param_1 + 0x20);
          puVar1 = (undefined8 *)((longlong)puVar8 + lVar7 + lVar11 + 8);
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar8[2] = uVar5;
          puVar8[3] = *(undefined8 *)((longlong)puVar8 + lVar7 + lVar11 + 0x18);
          puVar2 = puVar8 + 4;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)(puVar8 + 6) = 0x3f800000;
          }
          lVar7 = *(longlong *)((longlong)param_1 + 0x20) + (0x20 - (longlong)pvVar6);
          puVar1 = (undefined8 *)(lVar7 + (longlong)puVar8);
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar8[5] = uVar5;
          puVar8[6] = *(undefined8 *)(lVar7 + 0x10 + (longlong)puVar8);
          puVar2 = puVar8 + 7;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 8) = 0;
            *(undefined4 *)(puVar8 + 9) = 0x3f800000;
          }
          lVar7 = *(longlong *)((longlong)param_1 + 0x20) + (0x38 - (longlong)pvVar6);
          puVar1 = (undefined8 *)(lVar7 + (longlong)puVar8);
          uVar5 = puVar1[1];
          *puVar2 = *puVar1;
          puVar8[8] = uVar5;
          puVar8[9] = *(undefined8 *)(lVar7 + 0x10 + (longlong)puVar8);
          lVar12 = lVar12 + -1;
          puVar8 = puVar8 + 0xc;
        } while (lVar12 != 0);
      }
      if (uVar13 < uVar10) {
        lVar11 = uVar10 - uVar13;
        puVar8 = (undefined8 *)((longlong)pvVar6 + uVar13 * 0x18);
        do {
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)(puVar8 + 2) = 0x3f800000;
          }
          lVar12 = *(longlong *)((longlong)param_1 + 0x20);
          puVar2 = (undefined8 *)((longlong)puVar8 + (lVar12 - (longlong)pvVar6));
          uVar5 = puVar2[1];
          *puVar8 = *puVar2;
          puVar8[1] = uVar5;
          puVar8[2] = *(undefined8 *)((longlong)puVar8 + lVar12 + (0x10 - (longlong)pvVar6));
          puVar8 = puVar8 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (param_1 != *(void **)((longlong)param_1 + 0x20)) {
        AK::MemoryMgr::Free(4,*(void **)((longlong)param_1 + 0x20));
      }
    }
  }
  else {
    if (0x18 < _Var9) {
      if (param_1 == pvVar4) {
        pvVar6 = AK::MemoryMgr::Malign(4,_Var9,0x10);
        if (pvVar6 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar6,param_1,(ulonglong)(uVar3 * 0x18));
        goto LAB_1450d0382;
      }
      pvVar6 = AK::MemoryMgr::ReallocAligned(4,pvVar4,_Var9,0x10);
    }
    if (pvVar6 == (void *)0x0) {
      return 0;
    }
  }
LAB_1450d0382:
  *(void **)((longlong)param_1 + 0x20) = pvVar6;
  *(uint *)((longlong)param_1 + 0x2c) = uVar14;
  return 1;
}



// FUNCTION 1450d03a0 FUN_1450d03a0 body=344 status=ok
// SIG undefined FUN_1450d03a0(void)

undefined1 FUN_1450d03a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x28);
  uVar6 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    *(uint *)(param_1 + 0x28) = param_2;
    return 1;
  }
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    cVar2 = FUN_1450d0110(param_1,param_2 - *(uint *)(param_1 + 0x2c));
    if (cVar2 == '\0') {
      return 0;
    }
  }
  if (uVar5 < uVar6) {
    plVar1 = (longlong *)(param_1 + 0x20);
    if (3 < uVar6 - uVar5) {
      lVar3 = uVar5 * 0x18;
      lVar7 = ((uVar6 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar7 * 4;
      do {
        puVar4 = (undefined8 *)(*plVar1 + lVar3);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        }
        puVar4 = (undefined8 *)(*plVar1 + 0x18 + lVar3);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        }
        puVar4 = (undefined8 *)(*plVar1 + 0x30 + lVar3);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        }
        puVar4 = (undefined8 *)(*plVar1 + 0x48 + lVar3);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        }
        lVar3 = lVar3 + 0x60;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (uVar6 <= uVar5) goto LAB_1450d04e3;
    }
    lVar3 = uVar5 * 0x18;
    lVar7 = uVar6 - uVar5;
    do {
      puVar4 = (undefined8 *)(*plVar1 + lVar3);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)(puVar4 + 2) = 0x3f800000;
      }
      lVar3 = lVar3 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
LAB_1450d04e3:
  *(uint *)(param_1 + 0x28) = param_2;
  return 1;
}



// FUNCTION 1450d0500 FUN_1450d0500 body=201 status=ok
// SIG undefined FUN_1450d0500(void)

ulonglong FUN_1450d0500(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uStack_10;
  
  uVar8 = *param_2;
  uVar9 = *(uint *)(param_1 + 0x28);
  uVar5 = 0;
  if (uVar9 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    uStack_10 = (uint)param_2[1];
    uVar11 = 0;
    do {
      iVar10 = (uVar9 >> 1) + (uint)uVar11;
      lVar6 = (longlong)iVar10;
      uVar2 = *(ulonglong *)(lVar1 + lVar6 * 0x18);
      uVar7 = lVar1 + lVar6 * 0x18;
      uVar5 = *(uint *)(lVar1 + 8 + lVar6 * 0x18);
      if ((uVar2 == uVar8) && (uVar5 == uStack_10)) {
        bVar4 = true;
        goto LAB_1450d05a6;
      }
      if ((uVar2 < uVar8) || ((uVar2 == uVar8 && (uVar5 < uStack_10)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      uVar5 = iVar10 + 1;
      if (!bVar4) {
        uVar5 = (uint)uVar11;
      }
      uVar11 = (ulonglong)uVar5;
      uVar3 = uVar9 - 1;
      if (!bVar4) {
        uVar3 = uVar9;
      }
      uVar9 = uVar3 >> 1;
    } while (uVar9 != 0);
  }
  bVar4 = false;
  uVar7 = *(longlong *)(param_1 + 0x20) + (longlong)(int)uVar5 * 0x18;
LAB_1450d05a6:
  uVar8 = 0;
  if (bVar4) {
    uVar8 = uVar7;
  }
  return uVar8;
}



// FUNCTION 1450d05d0 FUN_1450d05d0 body=378 status=ok
// SIG undefined FUN_1450d05d0(void)

undefined8 * FUN_1450d05d0(longlong param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = *(undefined4 *)(param_2 + 1);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar5 = (undefined8 *)FUN_1450d0750(local_28,&local_28);
  if (*param_3 != '\0') {
    return puVar5;
  }
  uVar6 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (puVar5 == (undefined8 *)0x0) {
    if (uVar1 <= uVar6) {
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = (uVar1 >> 1) + uVar1;
      }
      cVar3 = FUN_1450d0110(param_1,iVar4);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (uVar6 < *(uint *)(param_1 + 0x2c)) {
      puVar5 = (undefined8 *)
               (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)(puVar5 + 2) = 0x3f800000;
      goto LAB_1450d0724;
    }
  }
  else {
    lVar8 = (longlong)puVar5 - *(longlong *)(param_1 + 0x20);
    lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
    uVar7 = (lVar8 >> 2) - (lVar8 >> 0x3f);
    if (uVar1 <= uVar6) {
      iVar4 = (uVar1 >> 1) + uVar1;
      if (uVar1 == 0) {
        iVar4 = 1;
      }
      cVar3 = FUN_1450d0110(param_1,iVar4);
      if (cVar3 == '\0') {
        return (undefined8 *)0x0;
      }
    }
    if (uVar6 < *(uint *)(param_1 + 0x2c)) {
      uVar6 = (uint)uVar7;
      uVar7 = uVar7 & 0xffffffff;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar7 * 0x18);
      if (uVar6 < *(uint *)(param_1 + 0x28)) {
        memmove(puVar5 + 3,puVar5,(ulonglong)((*(uint *)(param_1 + 0x28) - uVar6) * 0x18));
      }
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined4 *)(puVar5 + 2) = 0x3f800000;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar7 * 0x18);
LAB_1450d0724:
      if (puVar5 != (undefined8 *)0x0) {
        uVar2 = param_2[1];
        *puVar5 = *param_2;
        puVar5[1] = uVar2;
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1450d0750 FUN_1450d0750 body=165 status=ok
// SIG undefined FUN_1450d0750(void)

longlong FUN_1450d0750(longlong param_1,ulonglong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  iVar7 = 0;
  if (uVar5 != 0) {
    uVar3 = *param_2;
    do {
      iVar6 = (uVar5 >> 1) + iVar7;
      lVar1 = (longlong)iVar6 * 0x18;
      uVar4 = *(ulonglong *)(lVar1 + *(longlong *)(param_1 + 0x20));
      uVar2 = *(uint *)(lVar1 + 8 + *(longlong *)(param_1 + 0x20));
      if ((uVar4 == uVar3) && (uVar2 == (uint)param_2[1])) {
        *param_3 = 1;
        return *(longlong *)(param_1 + 0x20) + lVar1;
      }
      if ((uVar4 < uVar3) || ((uVar4 == uVar3 && (uVar2 < (uint)param_2[1])))) {
        iVar7 = iVar6 + 1;
        uVar5 = uVar5 - 1;
      }
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
  }
  *param_3 = 0;
  return *(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18;
}



// FUNCTION 1450d0800 FUN_1450d0800 body=224 status=ok
// SIG undefined FUN_1450d0800(void)

undefined8 FUN_1450d0800(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar10 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  cVar9 = FUN_1450d03a0(param_1,*(undefined4 *)(param_2 + 0x28));
  if (cVar9 != '\0') {
    uVar12 = uVar10;
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        uVar11 = (int)uVar12 + 1;
        lVar4 = *(longlong *)(param_1 + 0x20);
        lVar3 = uVar12 * 0x18;
        lVar5 = *(longlong *)(param_2 + 0x20);
        puVar1 = (undefined4 *)(lVar3 + lVar5);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(lVar4 + lVar3);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(undefined8 *)(lVar4 + 0x10 + lVar3) = *(undefined8 *)(lVar3 + 0x10 + lVar5);
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(param_2 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar11 = *(uint *)(param_2 + 0x48);
    if ((uVar11 <= *(uint *)(param_1 + 0x4c)) ||
       (cVar9 = FUN_1450772c0(param_1 + 0x30,uVar11 - *(uint *)(param_1 + 0x4c)), cVar9 != '\0')) {
      *(uint *)(param_1 + 0x48) = uVar11;
      if (*(int *)(param_2 + 0x48) != 0) {
        do {
          lVar3 = uVar10 * 8;
          uVar11 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar11;
          *(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x40)) =
               *(undefined8 *)(lVar3 + *(longlong *)(param_2 + 0x40));
        } while (uVar11 < *(uint *)(param_2 + 0x48));
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 1450d08e0 FUN_1450d08e0 body=96 status=ok
// SIG undefined FUN_1450d08e0(void)

void FUN_1450d08e0(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x28) = 0;
    if (param_1 != pvVar1) {
      AK::MemoryMgr::Free(4,pvVar1);
    }
    *(undefined8 *)((longlong)param_1 + 0x20) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
    if ((void *)((longlong)param_1 + 0x30) != pvVar1) {
      AK::MemoryMgr::Free(4,pvVar1);
    }
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 1450d0940 FUN_1450d0940 body=223 status=ok
// SIG undefined FUN_1450d0940(void)

undefined8 FUN_1450d0940(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong lStack_30;
  
  local_38 = *param_2;
  lStack_30 = param_2[1];
  uVar3 = 0;
  lVar2 = FUN_1450d0500((int)*param_2,&local_38);
  if (lVar2 == 0) {
    lVar1 = *param_2;
    lStack_30 = param_2[1];
    local_38 = lVar1;
    lVar2 = FUN_1450d05d0(param_1,&local_38,local_res8);
    if ((lVar2 != 0) && (lVar1 != -1)) {
      if ((((longlong *)(lVar2 + -0x18) < *(longlong **)(param_1 + 0x20)) ||
          (*(longlong *)(lVar2 + -0x18) != lVar1)) &&
         ((*(longlong **)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 3 + -3 <
           (longlong *)(lVar2 + 0x18U) || (*(longlong *)(lVar2 + 0x18U) != lVar1)))) {
        FUN_1450773d0(param_1 + 0x30,lVar1,local_res8);
        uVar3 = 1;
        goto LAB_1450d09f8;
      }
    }
    uVar3 = 1;
    if (lVar2 == 0) {
      return 1;
    }
  }
LAB_1450d09f8:
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  return uVar3;
}



// FUNCTION 1450d0a20 FUN_1450d0a20 body=579 status=ok
// SIG undefined FUN_1450d0a20(void)

bool FUN_1450d0a20(longlong param_1,longlong param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  bool local_res8;
  undefined1 local_res20 [8];
  undefined1 local_a8 [4];
  uint local_a4;
  ulonglong local_a0;
  undefined8 local_98;
  float fStack_90;
  longlong local_88;
  float fStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  float fStack_70;
  
  local_a4 = *(uint *)(param_1 + 0x28);
  local_res8 = (uint)param_3 < local_a4;
  uVar9 = 0;
  if (local_res8) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    local_a4 = 0;
  }
  if ((uint)param_3 != 0) {
    pfVar8 = (float *)(param_2 + 0xc);
    local_a0 = param_3 & 0xffffffff;
    uVar9 = 0;
    do {
      fVar2 = pfVar8[-1];
      if ((fVar2 != 0.0) && (fVar1 = *pfVar8, 0.0 < fVar1)) {
        lVar3 = *(longlong *)(pfVar8 + -3);
        bVar4 = false;
        local_98._0_4_ = (undefined4)lVar3;
        uVar5 = (undefined4)local_98;
        local_98._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
        uVar6 = local_98._4_4_;
        local_78 = (undefined4)local_98;
        uStack_74 = local_98._4_4_;
        local_98 = lVar3;
        fStack_90 = fVar2;
        fStack_70 = fVar2;
        lVar7 = FUN_1450d0500(param_1,&local_78);
        if (lVar7 == 0) {
          local_78 = uVar5;
          uStack_74 = uVar6;
          local_88 = lVar3;
          fStack_80 = fVar2;
          fStack_70 = fVar2;
          lVar7 = FUN_1450d05d0(param_1,&local_78,local_res20);
          if ((lVar7 != 0) && (lVar3 != -1)) {
            if ((((longlong *)(lVar7 + -0x18) < *(longlong **)(param_1 + 0x20)) ||
                (*(longlong *)(lVar7 + -0x18) != lVar3)) &&
               ((*(longlong **)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 3 + -3 <
                 (longlong *)(lVar7 + 0x18U) || (*(longlong *)(lVar7 + 0x18U) != lVar3)))) {
              FUN_1450773d0(param_1 + 0x30,lVar3,local_a8);
              *(float *)(lVar7 + 0x10) = fVar1;
              local_res8 = true;
              goto LAB_1450d0bdd;
            }
          }
          bVar4 = true;
          if (lVar7 != 0) goto LAB_1450d0bbb;
        }
        else {
LAB_1450d0bbb:
          *(float *)(lVar7 + 0x10) = fVar1;
          if (!bVar4) {
            uVar9 = uVar9 + 1;
            goto LAB_1450d0bdd;
          }
        }
        local_res8 = true;
      }
LAB_1450d0bdd:
      pfVar8 = pfVar8 + 4;
      local_a0 = local_a0 - 1;
    } while (local_a0 != 0);
    param_3 = param_3 & 0xffffffff;
    local_a0 = 0;
  }
  if (uVar9 < local_a4) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_1450d0a20(param_1,param_2,param_3);
  }
  return local_res8;
}



// FUNCTION 1450d0c70 FUN_1450d0c70 body=428 status=ok
// SIG undefined FUN_1450d0c70(void)

void FUN_1450d0c70(longlong param_1,longlong *param_2,float param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  if (plVar7 != plVar7 + (ulonglong)*(uint *)(param_1 + 0x28) * 3) {
    do {
      fVar8 = param_3 * *(float *)(plVar7 + 2);
      if (DAT_14c72f440 < fVar8) {
        if (*plVar7 == -1) {
          puVar6 = *(undefined8 **)(param_6 + 0x10);
          if (puVar6 != puVar6 + *(uint *)(param_6 + 0x18)) {
            do {
              uVar1 = *(uint *)(param_2 + 1);
              if ((uVar1 < *(uint *)((longlong)param_2 + 0xc)) ||
                 ((cVar3 = FUN_1450d1940(param_2), cVar3 != '\0' &&
                  (uVar1 < *(uint *)((longlong)param_2 + 0xc))))) {
                uVar1 = *(uint *)(param_2 + 1);
                *(uint *)(param_2 + 1) = uVar1 + 1;
                puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x20 + *param_2);
                if (puVar4 != (undefined8 *)0x0) {
                  *puVar4 = *puVar6;
                  lVar2 = plVar7[1];
                  *(float *)((longlong)puVar4 + 0xc) = fVar8;
                  *(undefined4 *)((longlong)puVar4 + 0x14) = param_4;
                  *(undefined4 *)(puVar4 + 3) = param_5;
                  *(int *)(puVar4 + 1) = (int)lVar2;
                  *(undefined4 *)(puVar4 + 2) = 1;
                }
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != (undefined8 *)
                               (*(longlong *)(param_6 + 0x10) +
                               (ulonglong)*(uint *)(param_6 + 0x18) * 8));
          }
        }
        else {
          uVar1 = *(uint *)(param_2 + 1);
          if ((uVar1 < *(uint *)((longlong)param_2 + 0xc)) ||
             ((cVar3 = FUN_1450d1940(param_2), cVar3 != '\0' &&
              (uVar1 < *(uint *)((longlong)param_2 + 0xc))))) {
            uVar1 = *(uint *)(param_2 + 1);
            *(uint *)(param_2 + 1) = uVar1 + 1;
            plVar5 = (longlong *)((ulonglong)uVar1 * 0x20 + *param_2);
            if (plVar5 != (longlong *)0x0) {
              *plVar5 = *plVar7;
              lVar2 = plVar7[1];
              *(float *)((longlong)plVar5 + 0xc) = fVar8;
              *(undefined4 *)((longlong)plVar5 + 0x14) = param_4;
              *(undefined4 *)(plVar5 + 3) = param_5;
              *(int *)(plVar5 + 1) = (int)lVar2;
              *(undefined4 *)(plVar5 + 2) = 1;
            }
          }
        }
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != (longlong *)
                       (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18)
            );
  }
  return;
}



// FUNCTION 1450d0e20 FUN_1450d0e20 body=50 status=ok
// SIG undefined FUN_1450d0e20(void)

undefined4 FUN_1450d0e20(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar1 = FUN_1450d0500(local_18,&local_18);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x10);
  }
  return 0x3f800000;
}



// FUNCTION 1450d0e60 FUN_1450d0e60 body=419 status=ok
// SIG undefined FUN_1450d0e60(void)

bool FUN_1450d0e60(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *_Dst;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
  _Dst = *(undefined8 **)(param_1 + 0x20);
  bVar1 = true;
  puVar6 = _Dst;
  if (_Dst != _Dst + uVar3 * 3) {
    do {
      if ((*(int *)(_Dst + 1) == 0) && (lVar2 = FUN_1450ab680(param_2,*_Dst), lVar2 == 0)) {
        FUN_1450d1010(param_1,_Dst);
        puVar6 = *(undefined8 **)(param_1 + 0x20);
        if (_Dst < puVar6 + (ulonglong)(*(int *)(param_1 + 0x28) - 1) * 3) {
          memmove(_Dst,_Dst + 3,
                  (ulonglong)
                  (uint)((int)(((longlong)(puVar6 + (ulonglong)(*(int *)(param_1 + 0x28) - 1) * 3) -
                               (longlong)_Dst) / 0x18) * 0x18));
          puVar6 = *(undefined8 **)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
      }
      else {
        _Dst = _Dst + 3;
      }
    } while (_Dst != puVar6 + uVar3 * 3);
  }
  plVar5 = *(longlong **)(param_2 + 0x10);
  if (plVar5 != plVar5 + *(uint *)(param_2 + 0x18)) {
    do {
      lVar2 = *plVar5;
      local_48 = (undefined4)lVar2;
      uStack_44 = (undefined4)((ulonglong)lVar2 >> 0x20);
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = 0;
      lVar4 = FUN_1450d05d0(param_1,&local_38,local_res8);
      if (lVar4 == 0) {
LAB_1450d0fcf:
        bVar1 = false;
      }
      else {
        if (lVar2 != -1) {
          if ((((longlong *)(lVar4 - 0x18U) < *(longlong **)(param_1 + 0x20)) ||
              (*(longlong *)(lVar4 - 0x18U) != lVar2)) &&
             ((*(longlong **)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 3 + -3 <
               (longlong *)(lVar4 + 0x18U) || (*(longlong *)(lVar4 + 0x18U) != lVar2)))) {
            FUN_1450773d0(param_1 + 0x30,lVar2,local_res10);
          }
        }
        if (!bVar1) goto LAB_1450d0fcf;
        bVar1 = true;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != (longlong *)
                       (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8));
  }
  return bVar1;
}



// FUNCTION 1450d1010 FUN_1450d1010 body=128 status=ok
// SIG undefined FUN_1450d1010(void)

void FUN_1450d1010(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Dst;
  
  lVar2 = *param_2;
  if (lVar2 != -1) {
    if (((param_2 + -3 < *(longlong **)(param_1 + 0x20)) || (param_2[-3] != lVar2)) &&
       ((*(longlong **)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x28) * 3 + -3 <
         param_2 + 3 || (param_2[3] != lVar2)))) {
      _Dst = (void *)FUN_1450ab680(param_1 + 0x30);
      if (_Dst != (void *)0x0) {
        pvVar1 = (void *)(*(longlong *)(param_1 + 0x40) +
                         (ulonglong)(*(int *)(param_1 + 0x48) - 1) * 8);
        if (_Dst < pvVar1) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),
                  (ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff8));
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      }
    }
  }
  return;
}



// FUNCTION 1450d1090 FUN_1450d1090 body=127 status=ok
// SIG undefined FUN_1450d1090(void)

void FUN_1450d1090(longlong param_1)

{
  void *pvVar1;
  
  FUN_1450d08e0(param_1 + 0x20);
  FUN_1450d08e0(param_1 + 0x70);
  pvVar1 = *(void **)(param_1 + 0xd0);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if ((void *)(param_1 + 0xc0) != pvVar1) {
      AK::MemoryMgr::Free(4,pvVar1);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(bool *)(param_1 + 0xe1) = DAT_14c79c4e0 == param_1;
  *(bool *)(param_1 + 0xe1) = DAT_14c79c4e0 == param_1;
  return;
}



// FUNCTION 1450d1110 FUN_1450d1110 body=190 status=ok
// SIG undefined FUN_1450d1110(void)

void FUN_1450d1110(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined4 uStack_20;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar4 = FUN_144d4eb60();
    if (*(char *)(lVar4 + 0xe0) == '\0') {
      uVar5 = FUN_144d4eb60();
      lVar4 = FUN_144d4eb00(uVar5);
    }
    else {
      lVar4 = lVar4 + 0x20;
    }
    iVar3 = FUN_1450d0800(param_1 + 0x20,lVar4);
    if (iVar3 == 1) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      bVar1 = true;
      goto LAB_1450d1184;
    }
  }
  bVar1 = false;
LAB_1450d1184:
  uStack_20 = 0;
  local_28 = param_2;
  cVar2 = FUN_1450d0940(param_1 + 0x20,&local_28,param_3);
  if (cVar2 != '\0' || bVar1) {
    FUN_1450d1670(param_1);
  }
  return;
}



// FUNCTION 1450d11d0 FUN_1450d11d0 body=165 status=ok
// SIG undefined FUN_1450d11d0(void)

void FUN_1450d11d0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar3 = FUN_144d4eb60();
    if (*(char *)(lVar3 + 0xe0) == '\0') {
      uVar4 = FUN_144d4eb60();
      lVar3 = FUN_144d4eb00(uVar4);
    }
    else {
      lVar3 = lVar3 + 0x20;
    }
    iVar2 = FUN_1450d0800(param_1 + 0x20,lVar3);
    if (iVar2 == 1) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      bVar1 = true;
      goto LAB_1450d122b;
    }
  }
  bVar1 = false;
LAB_1450d122b:
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != lVar3 + (ulonglong)*(uint *)(param_1 + 0x48) * 0x18) {
    do {
      *(undefined4 *)(lVar3 + 0x10) = param_2;
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != *(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x18);
  }
  if (bVar1) {
    FUN_1450d1670(param_1);
  }
  return;
}



// FUNCTION 1450d1280 FUN_1450d1280 body=67 status=ok
// SIG undefined FUN_1450d1280(void)

void FUN_1450d1280(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0xe1);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  cVar2 = FUN_1450d0a20(param_1 + 0x70,param_2,*param_3);
  if ((cVar2 != '\0') || (cVar1 == '\0')) {
    FUN_1450d1670(param_1);
  }
  return;
}



// FUNCTION 1450d12d0 FUN_1450d12d0 body=64 status=ok
// SIG undefined FUN_1450d12d0(void)

void FUN_1450d12d0(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  cVar2 = FUN_1450d0e60(param_1 + 0x20);
  if ((cVar2 != '\0') || (cVar1 == '\0')) {
    FUN_1450d1670(param_1);
  }
  return;
}



// FUNCTION 1450d1310 FUN_1450d1310 body=366 status=ok
// SIG undefined FUN_1450d1310(void)

void FUN_1450d1310(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar4 = FUN_144d4eb60();
    if (*(char *)(lVar4 + 0xe0) == '\0') {
      uVar5 = FUN_144d4eb60();
      lVar4 = FUN_144d4eb00(uVar5);
    }
    else {
      lVar4 = lVar4 + 0x20;
    }
    iVar3 = FUN_1450d0800(param_1 + 0x20,lVar4);
    if (iVar3 == 1) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      bVar2 = true;
      goto LAB_1450d137c;
    }
  }
  bVar2 = false;
LAB_1450d137c:
  plVar7 = *(longlong **)(param_2 + 0x10);
  bVar1 = true;
  if (plVar7 != plVar7 + *(uint *)(param_2 + 0x18)) {
    do {
      lVar4 = *plVar7;
      local_58 = (undefined4)lVar4;
      uStack_54 = (undefined4)((ulonglong)lVar4 >> 0x20);
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = 0;
      lVar6 = FUN_1450d05d0(param_1 + 0x20,&local_48,local_res8);
      if (lVar6 == 0) {
LAB_1450d1435:
        bVar1 = false;
      }
      else {
        if (lVar4 != -1) {
          if ((((longlong *)(lVar6 - 0x18U) < *(longlong **)(param_1 + 0x40)) ||
              (*(longlong *)(lVar6 - 0x18U) != lVar4)) &&
             ((*(longlong **)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x48) * 3 + -3 <
               (longlong *)(lVar6 + 0x18U) || (*(longlong *)(lVar6 + 0x18U) != lVar4)))) {
            FUN_1450773d0(param_1 + 0x50,lVar4,local_res10);
          }
        }
        if (!bVar1) goto LAB_1450d1435;
        bVar1 = true;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != (longlong *)
                       (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8));
    if ((!bVar1) && (!bVar2)) {
      return;
    }
  }
  FUN_1450d1670(param_1);
  return;
}



// FUNCTION 1450d1480 FUN_1450d1480 body=464 status=ok
// SIG undefined FUN_1450d1480(void)

void FUN_1450d1480(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  void *_Dst;
  void *pvVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  int iVar12;
  
  cVar3 = *(char *)(param_1 + 0xe0);
  if (cVar3 == '\0') {
    lVar9 = FUN_144d4eb60();
    if (*(char *)(lVar9 + 0xe0) == '\0') {
      uVar10 = FUN_144d4eb60();
      lVar9 = FUN_144d4eb00(uVar10);
    }
    else {
      lVar9 = lVar9 + 0x20;
    }
    iVar7 = FUN_1450d0800(param_1 + 0x20,lVar9);
    if (iVar7 != 1) goto LAB_1450d14fa;
    *(undefined1 *)(param_1 + 0xe0) = 1;
    bVar6 = true;
  }
  else {
LAB_1450d14fa:
    bVar6 = false;
  }
  puVar11 = *(ulonglong **)(param_2 + 0x10);
  bVar5 = false;
  if (puVar11 != puVar11 + *(uint *)(param_2 + 0x18)) {
    do {
      uVar8 = *(uint *)(param_1 + 0x48);
      iVar7 = 0;
      if (uVar8 != 0) {
        do {
          iVar12 = (uVar8 >> 1) + iVar7;
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
          uVar4 = *puVar1;
          _Dst = (void *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 0x18);
          if ((uVar4 == *puVar11) && ((int)puVar1[1] == 0)) {
            if (_Dst != (void *)0x0) {
              FUN_1450d1010(param_1 + 0x20,_Dst);
              pvVar2 = (void *)(*(longlong *)(param_1 + 0x40) +
                               (ulonglong)(*(int *)(param_1 + 0x48) - 1) * 0x18);
              if (_Dst < pvVar2) {
                memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                        (ulonglong)(uint)((int)(((longlong)pvVar2 - (longlong)_Dst) / 0x18) * 0x18))
                ;
              }
              *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
              bVar5 = true;
            }
            break;
          }
          if (uVar4 < *puVar11) {
            iVar7 = iVar12 + 1;
            uVar8 = uVar8 - 1;
          }
          uVar8 = uVar8 >> 1;
        } while (uVar8 != 0);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 !=
             (ulonglong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8)
            );
    if (bVar5) goto LAB_1450d1630;
  }
  if (!bVar6) {
    if (cVar3 != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
LAB_1450d1630:
  FUN_1450d1670(param_1);
  return;
}



// FUNCTION 1450d1650 FUN_1450d1650 body=20 status=ok
// SIG undefined FUN_1450d1650(void)

void FUN_1450d1650(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_1450d1670();
  return;
}



// FUNCTION 1450d1670 FUN_1450d1670 body=323 status=ok
// SIG undefined FUN_1450d1670(void)

void FUN_1450d1670(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    uVar2 = FUN_144d4eb60();
    lVar1 = FUN_144d4eb00(uVar2);
  }
  else {
    lVar1 = param_1 + 0x20;
  }
  FUN_1450d17c0(param_1 + 0xc0,lVar1 + 0x30);
  if (*(char *)(param_1 + 0xe1) == '\0') {
    uVar2 = FUN_144d4eb60();
    lVar1 = FUN_144d4eb30(uVar2);
  }
  else {
    lVar1 = param_1 + 0x70;
  }
  FUN_1450d17c0(param_1 + 0xc0,lVar1 + 0x30);
  FUN_1450d1a10(param_1 + 0xc0);
  lVar1 = DAT_14c7913b8;
  if (DAT_14c79c4e0 == param_1) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
      if ((lVar1 != param_1) &&
         ((*(char *)(lVar1 + 0xe1) == '\0' || (*(char *)(lVar1 + 0xe0) == '\0')))) {
        *(undefined4 *)(lVar1 + 0xd8) = 0;
        if (*(char *)(lVar1 + 0xe0) == '\0') {
          uVar2 = FUN_144d4eb60();
          lVar3 = FUN_144d4eb00(uVar2);
        }
        else {
          lVar3 = lVar1 + 0x20;
        }
        FUN_1450d17c0(lVar1 + 0xc0,lVar3 + 0x30);
        if (*(char *)(lVar1 + 0xe1) == '\0') {
          uVar2 = FUN_144d4eb60();
          lVar3 = FUN_144d4eb30(uVar2);
        }
        else {
          lVar3 = lVar1 + 0x70;
        }
        FUN_1450d17c0(lVar1 + 0xc0,lVar3 + 0x30);
        FUN_1450d1a10(lVar1 + 0xc0);
      }
    }
  }
  return;
}



// FUNCTION 1450d17c0 FUN_1450d17c0 body=372 status=ok
// SIG undefined FUN_1450d17c0(void)

undefined8 FUN_1450d17c0(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong local_28 [2];
  ulonglong *local_18;
  undefined8 local_10;
  
  puVar6 = (ulonglong *)param_1[2];
  iVar7 = 0;
  puVar3 = *(ulonglong **)(param_2 + 0x10);
  puVar5 = puVar6 + (uint)param_1[3];
  if (puVar6 != puVar5) {
    puVar1 = puVar3 + *(uint *)(param_2 + 0x18);
    do {
      if (puVar3 == puVar1) break;
      if (*puVar6 == *puVar3) {
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
LAB_1450d1818:
        puVar3 = puVar3 + 1;
      }
      else {
        if (*puVar3 <= *puVar6) goto LAB_1450d1818;
        puVar6 = puVar6 + 1;
      }
    } while (puVar6 != puVar5);
  }
  local_10 = 0;
  iVar7 = ((uint)param_1[3] - iVar7) + *(int *)(param_2 + 0x18);
  local_18 = (ulonglong *)0x0;
  if ((iVar7 == 0) || (uVar4 = FUN_1450772c0(local_28,iVar7), (char)uVar4 != '\0')) {
    puVar5 = (ulonglong *)param_1[2];
    puVar6 = *(ulonglong **)(param_2 + 0x10);
    puVar3 = local_18;
LAB_1450d1860:
    while( true ) {
      puVar1 = (ulonglong *)param_1[2];
      if (puVar6 == (ulonglong *)
                    (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8))
      break;
      if (puVar5 == puVar1 + (uint)param_1[3]) {
LAB_1450d18c4:
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        uVar2 = *puVar5;
        if (*puVar6 < uVar2) goto LAB_1450d18c4;
        if (uVar2 < *puVar6) goto LAB_1450d1886;
        puVar5 = puVar5 + 1;
        *puVar3 = uVar2;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (puVar5 != puVar1 + (uint)param_1[3]) {
LAB_1450d1886:
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      goto LAB_1450d1860;
    }
    local_10._0_4_ = iVar7;
    if (puVar1 != (ulonglong *)0x0) {
      *(undefined4 *)(param_1 + 3) = 0;
      if (param_1 != puVar1) {
        AK::MemoryMgr::Free(4,puVar1);
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    if (local_28 == local_18) {
      *param_1 = local_28[0];
      local_18 = param_1;
    }
    param_1[2] = (ulonglong)local_18;
    *(int *)(param_1 + 3) = (int)local_10;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_10._4_4_;
    uVar4 = CONCAT71((uint7)(uint3)((uint)local_10._4_4_ >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1450d1940 FUN_1450d1940 body=200 status=ok
// SIG undefined FUN_1450d1940(void)

undefined8 FUN_1450d1940(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  __uint64 _Var9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var9 = (ulonglong)(iVar5 + uVar3) << 5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var9);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar8 = 0;
          do {
            lVar4 = *param_1;
            puVar1 = (undefined8 *)(lVar8 + lVar4);
            uVar6 = puVar1[1];
            *(undefined8 *)(lVar8 + (longlong)pvVar7) = *puVar1;
            ((undefined8 *)(lVar8 + (longlong)pvVar7))[1] = uVar6;
            puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar4);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar8 + 0x10 + (longlong)pvVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            uVar10 = uVar10 - 1;
            lVar8 = lVar8 + 0x20;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_1450d19eb;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var9);
    if (pvVar7 != (void *)0x0) {
LAB_1450d19eb:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1450d1a10 FUN_1450d1a10 body=232 status=ok
// SIG undefined FUN_1450d1a10(void)

void FUN_1450d1a10(longlong param_1)

{
  int iVar1;
  CAkRegisteredObj *pCVar2;
  void *pvVar3;
  longlong *plVar4;
  __uint64 *p_Var5;
  
  p_Var5 = *(__uint64 **)(param_1 + 0x10);
  if (p_Var5 != p_Var5 + *(uint *)(param_1 + 0x18)) {
    do {
      pCVar2 = CAkRegistryMgr::GetObj(g_pRegistryMgr,*p_Var5);
      if ((((pCVar2 != (CAkRegisteredObj *)0x0) && (*(longlong *)(pCVar2 + 0x20) == 0)) &&
          (pvVar3 = AK::MemoryMgr::Malloc(4,0xa0), pvVar3 != (void *)0x0)) &&
         (plVar4 = (longlong *)FUN_1450775f0(pvVar3), plVar4 != (longlong *)0x0)) {
        *(longlong **)(pCVar2 + 0x20) = plVar4;
        plVar4[1] = (longlong)pCVar2;
        iVar1 = (**(code **)(*plVar4 + 8))(plVar4,*(undefined8 *)(pCVar2 + 0x58));
        if (iVar1 != 1) {
          (**(code **)*plVar4)(plVar4,0);
          AK::MemoryMgr::Free(4,plVar4);
          *(undefined8 *)(pCVar2 + 0x20) = 0;
        }
      }
      p_Var5 = p_Var5 + 1;
    } while (p_Var5 != (__uint64 *)
                       (*(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}



// FUNCTION 1450d1b00 FUN_1450d1b00 body=471 status=ok
// SIG undefined FUN_1450d1b00(void)

undefined8 FUN_1450d1b00(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  __uint64 _Var6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar11 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar11 << 4;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar5 = AK::MemoryMgr::Malloc(0,_Var6);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar5)) {
      uVar10 = 0;
      if (3 < uVar8) {
        puVar7 = (undefined8 *)((longlong)pvVar5 + 8);
        lVar9 = (uVar8 - 4 >> 2) + 1;
        uVar10 = lVar9 * 4;
        do {
          puVar3 = puVar7 + -1;
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            *(undefined8 *)((longlong)puVar7 + -4) = 0;
            *(undefined4 *)((longlong)puVar7 + 4) = 0x42c80000;
          }
          puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + -8);
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          *puVar7 = uVar4;
          puVar3 = puVar7 + 1;
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
            *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x14) = 0x42c80000;
          }
          puVar1 = (undefined8 *)((longlong)puVar7 + *param_1 + -(longlong)pvVar5 + 8);
          uVar4 = puVar1[1];
          *puVar3 = *puVar1;
          puVar7[2] = uVar4;
          lVar2 = (0x18 - (longlong)pvVar5) + (longlong)puVar7;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar7[3] = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x24) = 0x42c80000;
          }
          puVar3 = (undefined8 *)(lVar2 + *param_1);
          uVar4 = puVar3[1];
          lVar2 = (0x28 - (longlong)pvVar5) + (longlong)puVar7;
          puVar7[3] = *puVar3;
          puVar7[4] = uVar4;
          if (lVar2 + (longlong)pvVar5 != 0) {
            puVar7[5] = 0;
            *(undefined4 *)(puVar7 + 6) = 0;
            *(undefined4 *)((longlong)puVar7 + 0x34) = 0x42c80000;
          }
          puVar3 = (undefined8 *)(lVar2 + *param_1);
          uVar4 = puVar3[1];
          puVar7[5] = *puVar3;
          puVar7[6] = uVar4;
          puVar7 = puVar7 + 8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (uVar10 < uVar8) {
        puVar7 = (undefined8 *)(uVar10 * 0x10 + (longlong)pvVar5);
        lVar9 = uVar8 - uVar10;
        do {
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0x42c80000;
          }
          puVar3 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)pvVar5));
          uVar4 = puVar3[1];
          *puVar7 = *puVar3;
          puVar7[1] = uVar4;
          puVar7 = puVar7 + 2;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
  }
  else {
    pvVar5 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var6);
    if (pvVar5 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar5;
  *(uint *)((longlong)param_1 + 0xc) = uVar11;
  return 1;
}



// FUNCTION 1450d1ce0 FUN_1450d1ce0 body=324 status=ok
// SIG undefined FUN_1450d1ce0(void)

undefined1 FUN_1450d1ce0(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  uVar4 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 1)) {
    *(uint *)(param_1 + 1) = param_2;
    return 1;
  }
  if (*(uint *)((longlong)param_1 + 0xc) < param_2) {
    cVar1 = FUN_1450d1b00(param_1,param_2 - *(uint *)((longlong)param_1 + 0xc));
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (uVar5 < uVar4) {
    if (3 < uVar4 - uVar5) {
      lVar3 = uVar5 << 4;
      lVar6 = ((uVar4 - uVar5) - 4 >> 2) + 1;
      uVar5 = uVar5 + lVar6 * 4;
      do {
        puVar2 = (undefined8 *)(*param_1 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0x42c80000;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0x42c80000;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x20 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0x42c80000;
        }
        puVar2 = (undefined8 *)(*param_1 + 0x30 + lVar3);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0x42c80000;
        }
        lVar3 = lVar3 + 0x40;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (uVar4 <= uVar5) goto LAB_1450d1e0f;
    }
    lVar3 = uVar5 << 4;
    lVar6 = uVar4 - uVar5;
    do {
      puVar2 = (undefined8 *)(*param_1 + lVar3);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0x42c80000;
      }
      lVar3 = lVar3 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_1450d1e0f:
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}



// FUNCTION 1450d1e30 FUN_1450d1e30 body=219 status=ok
// SIG undefined FUN_1450d1e30(void)

undefined8 FUN_1450d1e30(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)*(uint *)(param_1 + 1);
  iVar2 = (uVar1 >> 1) + uVar1;
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)(iVar2 + uVar1) * 0x18);
  if (pvVar3 != (void *)0x0) {
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
      if (uVar5 != 0) {
        lVar4 = (longlong)pvVar3 + 0x14;
        do {
          if (lVar4 + -0x14 != 0) {
            *(undefined8 *)(lVar4 + -0xc) = 0;
            *(undefined8 *)(lVar4 + -4) = 0;
          }
          FUN_1450ab8e0(lVar4 + -0x14,(-0x14 - (longlong)pvVar3) + lVar4 + *param_1);
          lVar4 = lVar4 + 0x18;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      AK::MemoryMgr::Free(0,(void *)*param_1);
    }
    *param_1 = (longlong)pvVar3;
    *(uint *)((longlong)param_1 + 0xc) = iVar2 + uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1450d1f10 FUN_1450d1f10 body=186 status=ok
// SIG undefined FUN_1450d1f10(void)

longlong * FUN_1450d1f10(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  plVar3 = (longlong *)*param_1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  plVar1 = plVar3 + uVar6 * 3;
  for (; (plVar3 != plVar1 && (*plVar3 != param_2)); plVar3 = plVar3 + 3) {
  }
  plVar5 = (longlong *)0x0;
  plVar4 = plVar3 + 1;
  if (plVar3 == plVar1) {
    plVar4 = plVar5;
  }
  if ((plVar4 == (longlong *)0x0) &&
     (((uVar6 < *(uint *)((longlong)param_1 + 0xc) || (cVar2 = FUN_1450d1e30(), cVar2 != '\0')) &&
      (plVar4 = plVar5, uVar6 < *(uint *)((longlong)param_1 + 0xc))))) {
    plVar1 = (longlong *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (plVar1 != (longlong *)0x0) {
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = param_2;
      plVar4 = plVar1 + 1;
    }
  }
  return plVar4;
}



// FUNCTION 1450d1fd0 FUN_1450d1fd0 body=158 status=ok
// SIG undefined FUN_1450d1fd0(void)

void FUN_1450d1fd0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined2 *)(param_1 + 3) = 0;
    AK::MemoryMgr::Free(5,(void *)*param_1);
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar2;
  if (pvVar2 != (void *)((longlong)pvVar2 + (ulonglong)*(uint *)(param_1 + 2) * 0x18)) {
    do {
      if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar1 + 0x10) = 0;
        AK::MemoryMgr::Free(0,*(void **)((longlong)pvVar1 + 8));
        *(undefined8 *)((longlong)pvVar1 + 8) = 0;
        *(undefined4 *)((longlong)pvVar1 + 0x14) = 0;
      }
      pvVar1 = (void *)((longlong)pvVar1 + 0x18);
      pvVar2 = (void *)param_1[1];
    } while (pvVar1 != (void *)((longlong)pvVar2 + (ulonglong)*(uint *)(param_1 + 2) * 0x18));
  }
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    AK::MemoryMgr::Free(0,pvVar2);
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1450d2070 FUN_1450d2070 body=465 status=ok
// SIG undefined FUN_1450d2070(void)

undefined8 FUN_1450d2070(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  plVar6 = (longlong *)FUN_1450d1f10(param_1 + 8);
  if (plVar6 == (longlong *)0x0) {
    return 1;
  }
  uVar12 = *(uint *)(plVar6 + 1);
  uVar10 = (ulonglong)uVar12;
  uVar11 = (uint)param_4;
  uVar13 = uVar10;
  if (uVar12 < uVar11) {
    uVar13 = param_4 & 0xffffffff;
  }
  cVar4 = FUN_1450d1ce0(plVar6,uVar13);
  if (cVar4 == '\0') {
    return 1;
  }
  if (uVar12 != 0) {
    uVar5 = *(uint *)(plVar6 + 1);
    if ((uVar12 < uVar5) && (uVar10 < uVar5)) {
      lVar8 = uVar5 - uVar10;
      lVar7 = (ulonglong)uVar12 << 4;
      do {
        puVar1 = (undefined8 *)(*plVar6 + (ulonglong)(uVar12 - 1) * 0x10);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + *plVar6);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        lVar8 = lVar8 + -1;
        lVar7 = lVar7 + 0x10;
      } while (lVar8 != 0);
    }
  }
  lVar7 = 0;
  uVar12 = 0;
  if (uVar11 < 4) {
    if (uVar11 == 0) {
      return 1;
    }
  }
  else {
    uVar5 = (uVar11 - 4 >> 2) + 1;
    uVar13 = (ulonglong)uVar5;
    uVar12 = uVar5 * 4;
    puVar9 = (undefined4 *)(param_3 + 0xc);
    do {
      lVar8 = lVar7 + 0x40;
      *(undefined4 *)(*plVar6 + -0x3c + lVar8) = puVar9[-2];
      *(undefined4 *)(lVar7 + *plVar6) = puVar9[-3];
      *(undefined4 *)(*plVar6 + -0x2c + lVar8) = *puVar9;
      *(undefined4 *)(*plVar6 + -0x30 + lVar8) = puVar9[-1];
      *(undefined4 *)(*plVar6 + -0x1c + lVar8) = puVar9[2];
      *(undefined4 *)(*plVar6 + -0x20 + lVar8) = puVar9[1];
      *(undefined4 *)(*plVar6 + -0xc + lVar8) = puVar9[4];
      *(undefined4 *)(*plVar6 + -0x10 + lVar8) = puVar9[3];
      uVar13 = uVar13 - 1;
      puVar9 = puVar9 + 8;
      lVar7 = lVar8;
    } while (uVar13 != 0);
    lVar7 = (ulonglong)uVar5 * 4;
    if (uVar11 <= uVar12) goto LAB_1450d21df;
  }
  uVar13 = (ulonglong)(uVar11 - uVar12);
  lVar8 = lVar7 << 4;
  puVar9 = (undefined4 *)(param_3 + lVar7 * 8);
  do {
    *(undefined4 *)(lVar8 + 4 + *plVar6) = puVar9[1];
    *(undefined4 *)(lVar8 + *plVar6) = *puVar9;
    uVar13 = uVar13 - 1;
    lVar8 = lVar8 + 0x10;
    puVar9 = puVar9 + 2;
  } while (uVar13 != 0);
  if (uVar11 == 0) {
    return 1;
  }
LAB_1450d21df:
  if (uVar11 < *(uint *)(plVar6 + 1)) {
    uVar13 = param_4 & 0xffffffff;
    do {
      uVar12 = (int)uVar13 + 1;
      *(undefined4 *)(*plVar6 + 4 + uVar13 * 0x10) =
           *(undefined4 *)(param_3 + 4 + (ulonglong)(uVar11 - 1) * 8);
      *(undefined4 *)(*plVar6 + uVar13 * 0x10) =
           *(undefined4 *)(param_3 + (ulonglong)(uVar11 - 1) * 8);
      uVar13 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(plVar6 + 1));
  }
  return 1;
}



// FUNCTION 1450d2250 FUN_1450d2250 body=372 status=ok
// SIG undefined FUN_1450d2250(void)

undefined8 FUN_1450d2250(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong local_28 [2];
  ulonglong *local_18;
  undefined8 local_10;
  
  puVar6 = (ulonglong *)param_1[2];
  iVar7 = 0;
  puVar3 = *(ulonglong **)(param_2 + 0x10);
  puVar5 = puVar6 + (uint)param_1[3];
  if (puVar6 != puVar5) {
    puVar1 = puVar3 + *(uint *)(param_2 + 0x18);
    do {
      if (puVar3 == puVar1) break;
      if (*puVar6 == *puVar3) {
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
LAB_1450d22a8:
        puVar3 = puVar3 + 1;
      }
      else {
        if (*puVar3 <= *puVar6) goto LAB_1450d22a8;
        puVar6 = puVar6 + 1;
      }
    } while (puVar6 != puVar5);
  }
  local_10 = 0;
  iVar7 = ((uint)param_1[3] - iVar7) + *(int *)(param_2 + 0x18);
  local_18 = (ulonglong *)0x0;
  if ((iVar7 == 0) || (uVar4 = FUN_1450772c0(local_28,iVar7), (char)uVar4 != '\0')) {
    puVar5 = (ulonglong *)param_1[2];
    puVar6 = *(ulonglong **)(param_2 + 0x10);
    puVar3 = local_18;
LAB_1450d22f0:
    while( true ) {
      puVar1 = (ulonglong *)param_1[2];
      if (puVar6 == (ulonglong *)
                    (*(longlong *)(param_2 + 0x10) + (ulonglong)*(uint *)(param_2 + 0x18) * 8))
      break;
      if (puVar5 == puVar1 + (uint)param_1[3]) {
LAB_1450d2354:
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        uVar2 = *puVar5;
        if (*puVar6 < uVar2) goto LAB_1450d2354;
        if (uVar2 < *puVar6) goto LAB_1450d2316;
        puVar5 = puVar5 + 1;
        *puVar3 = uVar2;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (puVar5 != puVar1 + (uint)param_1[3]) {
LAB_1450d2316:
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
      goto LAB_1450d22f0;
    }
    local_10._0_4_ = iVar7;
    if (puVar1 != (ulonglong *)0x0) {
      *(undefined4 *)(param_1 + 3) = 0;
      if (param_1 != puVar1) {
        AK::MemoryMgr::Free(4,puVar1);
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    if (local_28 == local_18) {
      *param_1 = local_28[0];
      local_18 = param_1;
    }
    param_1[2] = (ulonglong)local_18;
    *(int *)(param_1 + 3) = (int)local_10;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_10._4_4_;
    uVar4 = CONCAT71((uint7)(uint3)((uint)local_10._4_4_ >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1450d23d0 FUN_1450d23d0 body=121 status=ok
// SIG undefined FUN_1450d23d0(void)

void FUN_1450d23d0(CAkGameObject *param_1)

{
  CAkGameObject *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  *(undefined ***)param_1 = &PTR_FUN_149c26950;
  local_28 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_10 = 0;
  local_38 = param_1;
  FUN_145362f30(param_1 + 0x68,&local_38);
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  CAkGameObject::~CAkGameObject(param_1);
  return;
}



// FUNCTION 1450d2450 FUN_1450d2450 body=14 status=ok
// SIG undefined FUN_1450d2450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d2450(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    return *(undefined8 **)(param_1 + 0x10);
  }
  if (DAT_14c79c4e0 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(4,0xf0);
    DAT_14c79c4e0 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_1499d1438;
      puVar2[3] = DAT_14c7913b0;
      puVar2[2] = 0;
      puVar1 = puVar2;
      if (DAT_14c7913b8 != (undefined8 *)0x0) {
        *(undefined8 **)((longlong)DAT_14c7913b0 + 0x10) = puVar2;
        puVar1 = DAT_14c7913b8;
      }
      DAT_14c7913b8 = puVar1;
      _DAT_14c7913a8 = _DAT_14c7913a8 + 1;
      DAT_14c7913b0 = puVar2;
      *puVar2 = &PTR_FUN_1499d1448;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      *(undefined2 *)(puVar2 + 0x1c) = 0;
      DAT_14c79c4e0 = puVar2;
      *(undefined1 *)(puVar2 + 0x1c) = 1;
      *(undefined1 *)((longlong)DAT_14c79c4e0 + 0xe1) = 1;
      return DAT_14c79c4e0;
    }
  }
  return DAT_14c79c4e0;
}



// FUNCTION 1450d2460 FUN_1450d2460 body=29 status=ok
// SIG undefined FUN_1450d2460(void)

longlong FUN_1450d2460(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = FUN_144d4eb60();
  }
  return lVar1 + 0xc0;
}



// FUNCTION 1450d2480 FUN_1450d2480 body=57 status=ok
// SIG undefined FUN_1450d2480(void)

int FUN_1450d2480(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = FUN_144d4eb60();
  }
  return (uint)*(ushort *)(lVar1 + 0x38) * *(int *)(lVar2 + 0xd8);
}



// FUNCTION 1450d24c0 FUN_1450d24c0 body=99 status=ok
// SIG undefined FUN_1450d24c0(void)

void FUN_1450d24c0(longlong param_1,char param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_1450d3040();
    if (lVar3 != 0) {
      uVar1 = *(ushort *)(lVar3 + 0x48);
      uVar4 = 1 << (param_2 - 1U & 0x1f);
      *(ushort *)(lVar3 + 0x48) = uVar1 | (ushort)uVar4;
      if (((uVar4 & uVar1) == 0) || ((~*(byte *)(lVar2 + 0x7c) & 1) == 0)) {
        FUN_14539eb80(lVar3);
        *(uint *)(lVar2 + 0x7c) = *(uint *)(lVar2 + 0x7c) & 0xfffffffe;
      }
    }
  }
  return;
}



// FUNCTION 1450d2530 FUN_1450d2530 body=125 status=ok
// SIG undefined FUN_1450d2530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d2530(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c27d40;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c791400) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c791400;
  }
  DAT_14c791400 = puVar2;
  if (param_1 == DAT_14c7913f8) {
    DAT_14c7913f8 = puVar1;
  }
  _DAT_14c7913f0 = _DAT_14c7913f0 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450d25b0 FUN_1450d25b0 body=107 status=ok
// SIG undefined FUN_1450d25b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d25b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149c27d40;
  param_1[3] = DAT_14c7913f8;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_14c791400 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14c7913f8 + 0x10) = param_1;
    puVar1 = DAT_14c791400;
  }
  DAT_14c791400 = puVar1;
  _DAT_14c7913f0 = _DAT_14c7913f0 + 1;
  DAT_14c7913f8 = param_1;
  *param_1 = &PTR_FUN_149c27d50;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1450d2620 FUN_1450d2620 body=826 status=ok
// SIG undefined FUN_1450d2620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450d2620(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  puVar5 = (undefined8 *)param_1[4];
  plVar9 = (longlong *)0x0;
  *param_1 = &PTR_FUN_149c27d50;
  piVar1 = DAT_14c791060;
  do {
    DAT_14c791060 = piVar1;
    if (puVar5 == (undefined8 *)0x0) {
      while (puVar5 = (undefined8 *)param_1[4], puVar5 != (undefined8 *)0x0) {
        param_1[4] = *puVar5;
        if (puVar5 == (undefined8 *)param_1[5]) {
          param_1[5] = 0;
        }
        if ((puVar5 < (undefined8 *)param_1[7]) ||
           ((undefined8 *)param_1[7] + (ulonglong)*(uint *)(param_1 + 8) * 2 <= puVar5)) {
          AK::MemoryMgr::Free(0,puVar5);
          *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
        }
        else {
          *puVar5 = param_1[6];
          *(int *)((longlong)param_1 + 0x44) = *(int *)((longlong)param_1 + 0x44) + -1;
          param_1[6] = puVar5;
        }
      }
      puVar5 = (undefined8 *)param_1[6];
      while (puVar6 = puVar5, puVar6 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar6;
        if ((puVar6 < (undefined8 *)param_1[7]) ||
           ((undefined8 *)param_1[7] + (ulonglong)*(uint *)(param_1 + 8) * 2 <= puVar6)) {
          AK::MemoryMgr::Free(0,puVar6);
        }
      }
      if ((void *)param_1[7] != (void *)0x0) {
        AK::MemoryMgr::Free(0,(void *)param_1[7]);
        param_1[7] = 0;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = &PTR_FUN_149c27d40;
      if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
      }
      puVar5 = (undefined8 *)param_1[3];
      puVar6 = (undefined8 *)param_1[2];
      if (param_1 != DAT_14c791400) {
        puVar5[2] = (undefined8 *)param_1[2];
        puVar6 = DAT_14c791400;
      }
      DAT_14c791400 = puVar6;
      if (param_1 == DAT_14c7913f8) {
        DAT_14c7913f8 = puVar5;
      }
      _DAT_14c7913f0 = _DAT_14c7913f0 + -1;
      *param_1 = &PTR_FUN_1499d1428;
      return;
    }
    uVar3 = *(uint *)(puVar5 + 1);
    if (*(char *)((longlong)puVar5 + 0xc) == '\0') {
      do {
        while (iVar4 = *piVar1, iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1450d2683;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + 1;
        }
        UNLOCK();
      } while (iVar4 != iVar2);
LAB_1450d2683:
      plVar7 = plVar9;
      if (piVar1[0x12] != 0) {
        for (plVar8 = *(longlong **)
                       (*(longlong *)(piVar1 + 0x10) +
                       ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (plVar7 = plVar9, plVar8 != (longlong *)0x0 &&
            (plVar7 = plVar8, *(uint *)(plVar8 + 2) != uVar3)); plVar8 = (longlong *)plVar8[1]) {
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0x14) = *(int *)((longlong)plVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = *piVar1;
      while (-1 < iVar4) {
        LOCK();
        iVar2 = *piVar1;
        if (iVar4 == iVar2) {
          *piVar1 = iVar4 + -1;
        }
        UNLOCK();
        if (iVar4 == iVar2) {
          if ((iVar4 + -1 != 0) || (piVar1[0xc] < 1)) goto LAB_1450d26fa;
          SetEvent(*(HANDLE *)(piVar1 + 0xe));
          plVar8 = plVar7 + -2;
          if (plVar7 == (longlong *)0x0) {
            plVar8 = plVar9;
          }
          goto LAB_1450d27d8;
        }
        iVar4 = *piVar1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
LAB_1450d26fa:
      plVar8 = plVar7 + -2;
      if (plVar7 == (longlong *)0x0) {
        plVar8 = plVar9;
      }
LAB_1450d27d8:
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0x24);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(plVar8[2] + 0x18))();
        }
      }
    }
    else {
      do {
        while (iVar4 = piVar1[0x16], iVar4 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
          if (piVar1[0x16] < 0) goto LAB_1450d2741;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
        }
        LOCK();
        bVar10 = iVar4 == piVar1[0x16];
        if (bVar10) {
          piVar1[0x16] = iVar4 + 1;
        }
        UNLOCK();
      } while (!bVar10);
LAB_1450d2741:
      plVar8 = plVar9;
      if (piVar1[0x28] != 0) {
        for (plVar7 = *(longlong **)
                       (*(longlong *)(piVar1 + 0x26) +
                       ((ulonglong)uVar3 % (ulonglong)(uint)piVar1[0x28]) * 8);
            (plVar8 = plVar9, plVar7 != (longlong *)0x0 &&
            (plVar8 = plVar7, *(uint *)(plVar7 + 2) != uVar3)); plVar7 = (longlong *)plVar7[1]) {
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar4 = piVar1[0x16];
      while (-1 < iVar4) {
        LOCK();
        bVar10 = iVar4 == piVar1[0x16];
        if (bVar10) {
          piVar1[0x16] = iVar4 + -1;
        }
        UNLOCK();
        if (bVar10) {
          if ((iVar4 + -1 == 0) && (0 < piVar1[0x22])) {
            SetEvent(*(HANDLE *)(piVar1 + 0x24));
          }
          goto LAB_1450d27cf;
        }
        iVar4 = piVar1[0x16];
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
LAB_1450d27cf:
      if (plVar8 != (longlong *)0x0) {
        plVar8 = plVar8 + -2;
        goto LAB_1450d27d8;
      }
    }
    puVar5 = (undefined8 *)*puVar5;
    piVar1 = DAT_14c791060;
  } while( true );
}



// FUNCTION 1450d2960 FUN_1450d2960 body=192 status=ok
// SIG undefined FUN_1450d2960(void)

undefined8 FUN_1450d2960(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uStackX_c;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  iVar1 = *(int *)(param_2 + 0x20);
  bVar3 = *(byte *)(param_2 + 0xd4) >> 7;
  uStackX_c = CONCAT31(uStackX_c._1_3_,bVar3);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_1450d29af:
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = AK::MemoryMgr::Malloc(0,0x10);
        if (puVar2 == (undefined8 *)0x0) {
          return 2;
        }
        *puVar2 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 **)(param_1 + 0x30) = puVar2;
      }
      if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
        *(undefined8 **)(param_1 + 0x20) = puVar2;
      }
      else {
        **(longlong **)(param_1 + 0x28) = (longlong)puVar2;
      }
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      *(undefined8 **)(param_1 + 0x28) = puVar2;
      *(undefined8 *)(param_1 + 0x30) = *puVar2;
      *puVar2 = 0;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(ulonglong *)(*(longlong *)(param_1 + 0x28) + 8) = CONCAT44(uStackX_c,iVar1);
      return 1;
    }
    if ((iVar1 == *(int *)(puVar2 + 1)) && (bVar3 == *(byte *)((longlong)puVar2 + 0xc))) {
      if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
        return 1;
      }
      goto LAB_1450d29af;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 1450d2a20 FUN_1450d2a20 body=52 status=ok
// SIG undefined FUN_1450d2a20(void)

undefined8 FUN_1450d2a20(undefined8 param_1,ulonglong param_2)

{
  FUN_1450d2620();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1450d2a60 FUN_1450d2a60 body=125 status=ok
// SIG undefined FUN_1450d2a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d2a60(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c27d60;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c791418) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c791418;
  }
  DAT_14c791418 = puVar2;
  if (param_1 == DAT_14c791410) {
    DAT_14c791410 = puVar1;
  }
  _DAT_14c791408 = _DAT_14c791408 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450d2ae0 FUN_1450d2ae0 body=138 status=ok
// SIG undefined FUN_1450d2ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450d2ae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149c27d60;
  param_1[3] = DAT_14c791410;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_14c791418 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14c791410 + 0x10) = param_1;
    puVar1 = DAT_14c791418;
  }
  DAT_14c791418 = puVar1;
  _DAT_14c791408 = _DAT_14c791408 + 1;
  DAT_14c791410 = param_1;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) | 1;
  *param_1 = &PTR_FUN_149c27d70;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  return param_1;
}



// FUNCTION 1450d2b70 ~CAkEmitter body=208 status=ok
// SIG void ~CAkEmitter(CAkEmitter * this)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual __cdecl CAkEmitter::~CAkEmitter(void) __ptr64 */

void __thiscall CAkEmitter::~CAkEmitter(CAkEmitter *this)

{
  CAkEmitter *pCVar1;
  CAkEmitter *pCVar2;
  
                    /* 0x50d2b70  11  ??1CAkEmitter@@UEAA@XZ */
  *(undefined ***)this = &PTR_FUN_149c27d70;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    *(undefined4 *)(this + 0x48) = 0;
    AK::MemoryMgr::Free(0,*(void **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  pCVar1 = *(CAkEmitter **)(this + 0x60);
  if (pCVar1 != (CAkEmitter *)0x0) {
    *(undefined4 *)(this + 0x68) = 0;
    if (this + 0x50 != pCVar1) {
      AK::MemoryMgr::Free(4,pCVar1);
    }
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  FUN_1450d1fd0(this + 0x20);
  *(undefined ***)this = &PTR_FUN_149c27d60;
  if (*(longlong *)(this + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(this + 0x10) + 0x18) = *(undefined8 *)(this + 0x18);
  }
  pCVar1 = *(CAkEmitter **)(this + 0x18);
  pCVar2 = *(CAkEmitter **)(this + 0x10);
  if (this != DAT_14c791418) {
    *(CAkEmitter **)(pCVar1 + 0x10) = *(CAkEmitter **)(this + 0x10);
    pCVar2 = DAT_14c791418;
  }
  DAT_14c791418 = pCVar2;
  if (this == DAT_14c791410) {
    DAT_14c791410 = pCVar1;
  }
  _DAT_14c791408 = _DAT_14c791408 + -1;
  *(undefined ***)this = &PTR_FUN_1499d1428;
  return;
}



// FUNCTION 1450d2c40 FUN_1450d2c40 body=320 status=ok
// SIG undefined FUN_1450d2c40(void)

void FUN_1450d2c40(longlong param_1,longlong param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Dst;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar8 = 0;
  if ((plVar1 != (longlong *)0x0) && (param_3 != *(ushort *)(param_1 + 0x38))) {
    if (*plVar1 != 0) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      AK::MemoryMgr::Free(5,(void *)*plVar1);
      *plVar1 = 0;
    }
    if (param_3 != 0) {
      _Dst = AK::MemoryMgr::Malloc(5,(ulonglong)param_3 << 6);
      if (_Dst == (void *)0x0) goto LAB_1450d2d30;
      memset(_Dst,0,(ulonglong)param_3 << 6);
      *plVar1 = (longlong)_Dst;
      *(short *)(param_1 + 0x38) = (short)param_3;
    }
  }
  if (*(short *)(param_1 + 0x38) != 0) {
    do {
      lVar4 = *plVar1;
      uVar7 = (int)uVar8 + 1;
      lVar6 = uVar8 * 0x40;
      uVar5 = ((undefined8 *)(lVar6 + param_2))[1];
      *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar6 + param_2);
      ((undefined8 *)(lVar4 + lVar6))[1] = uVar5;
      puVar2 = (undefined8 *)(lVar6 + 0x10 + param_2);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar6);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      puVar2 = (undefined8 *)(lVar6 + 0x20 + param_2);
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar6);
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      *(undefined4 *)(*plVar1 + 0x30 + lVar6) = *(undefined4 *)(lVar6 + 0x30 + param_2);
      *(undefined4 *)(*plVar1 + 0x34 + lVar6) = *(undefined4 *)(lVar6 + 0x34 + param_2);
      *(undefined4 *)(*plVar1 + 0x38 + lVar6) = *(undefined4 *)(lVar6 + 0x38 + param_2);
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(ushort *)(param_1 + 0x38));
  }
LAB_1450d2d30:
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) ^ (*(byte *)(param_1 + 0x3a) ^ param_4) & 7;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1450d2250(&DAT_14c79be10,param_1 + 0x50);
  }
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  return;
}



// FUNCTION 1450d2d80 FUN_1450d2d80 body=47 status=ok
// SIG undefined FUN_1450d2d80(void)

void FUN_1450d2d80(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
    lVar1 = FUN_1450d3040(*(undefined8 *)(param_1 + 8));
    if (lVar1 != 0) {
      FUN_14539eb80(lVar1);
    }
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffffe;
  }
  return;
}



// FUNCTION 1450d2db0 FUN_1450d2db0 body=51 status=ok
// SIG undefined FUN_1450d2db0(void)

void FUN_1450d2db0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_4;
  local_resc = param_3;
  FUN_1450d2070(param_1 + 0x20,param_2,&local_res8,1);
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  return;
}



// FUNCTION 1450d2df0 FUN_1450d2df0 body=13 status=ok
// SIG undefined FUN_1450d2df0(void)

void FUN_1450d2df0(longlong param_1)

{
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
  FUN_1450d2070(param_1 + 0x20);
  return;
}



// FUNCTION 1450d2e00 FUN_1450d2e00 body=31 status=ok
// SIG undefined FUN_1450d2e00(void)

int FUN_1450d2e00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = FUN_1450773d0(param_1 + 0x50,param_2,local_res8);
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 1450d2e20 FUN_1450d2e20 body=146 status=ok
// SIG undefined FUN_1450d2e20(void)

undefined8 FUN_1450d2e20(longlong param_1,ulonglong param_2)

{
  void *_Dst;
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0x68);
  iVar7 = 0;
  if (uVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    do {
      iVar5 = (uVar6 >> 1) + iVar7;
      uVar3 = *(ulonglong *)(lVar2 + (longlong)iVar5 * 8);
      _Dst = (void *)(lVar2 + (longlong)iVar5 * 8);
      if (uVar3 == param_2) {
        if (_Dst == (void *)0x0) {
          return 2;
        }
        pvVar1 = (void *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x68) - 1) * 8);
        if (_Dst < pvVar1) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),
                  (ulonglong)((int)pvVar1 - (int)_Dst & 0xfffffff8));
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        return 1;
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar6 - 1;
      if (param_2 <= uVar3) {
        iVar5 = iVar7;
        uVar4 = uVar6;
      }
      iVar7 = iVar5;
      uVar6 = uVar4 >> 1;
    } while (uVar6 != 0);
  }
  return 2;
}


