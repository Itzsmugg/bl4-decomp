// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14587fe3c FUN_14587fe3c body=73 status=ok
// SIG undefined FUN_14587fe3c(void)

void FUN_14587fe3c(longlong param_1,int param_2)

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



// FUNCTION 14587fe90 FUN_14587fe90 body=129 status=ok
// SIG undefined FUN_14587fe90(void)

undefined8 * FUN_14587fe90(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a816f60;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = FUN_14129154a();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[6] = lVar1;
  param_1[8] = 0x41a8000041b80000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x461c4000;
  *(undefined4 *)(param_1 + 9) = 0x41f00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 2;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfd;
  return param_1;
}



// FUNCTION 14587ff12 FUN_14587ff12 body=111 status=ok
// SIG undefined FUN_14587ff12(void)

void FUN_14587ff12(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 8))();
  if (iVar1 == iVar3) {
    *(undefined1 *)(param_1 + 0x1b5) = 0;
    *(undefined1 *)(param_1 + 0x1d1) = 0;
    FUN_141291630(param_1 + 0xc0);
    plVar2 = *(longlong **)(param_1 + -0x90);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014587ff76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xd0))(plVar2,param_1 + -0xc0);
      return;
    }
  }
  return;
}



// FUNCTION 14587ff82 FUN_14587ff82 body=37 status=ok
// SIG undefined FUN_14587ff82(void)

void FUN_14587ff82(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14587ffa8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14587ffa8 FUN_14587ffa8 body=72 status=ok
// SIG undefined FUN_14587ffa8(void)

ulonglong FUN_14587ffa8(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb8) != 0)) {
    uVar3 = FUN_14587fff0(*(longlong *)(lVar2 + 0xb8),(int)param_1[0x1c]);
    return uVar3;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),DAT_14cbcf438) & 0xffffffffffffff01;
}



// FUNCTION 14587fff0 FUN_14587fff0 body=42 status=ok
// SIG undefined FUN_14587fff0(void)

uint FUN_14587fff0(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588001a();
  uVar1 = DAT_14cbe4610;
  if (lVar2 != 0) {
    uVar1 = (uint)*(byte *)(lVar2 + 0x40);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 14588001a FUN_14588001a body=112 status=ok
// SIG undefined FUN_14588001a(void)

longlong FUN_14588001a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar1 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x78;
        if (*(uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 0x78) == param_2) break;
        iVar3 = *(int *)(lVar1 + 0x70);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14588006c;
    }
  }
  lVar1 = 0;
LAB_14588006c:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145880092 FUN_145880092 body=43 status=ok
// SIG undefined FUN_145880092(void)

undefined8 * FUN_145880092(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a9d7bd0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1458800c8 FUN_1458800c8 body=57 status=ok
// SIG undefined FUN_1458800c8(void)

undefined8 * FUN_1458800c8(undefined8 *param_1)

{
  FUN_14582cd00();
  *param_1 = &PTR_FUN_14b010720;
  param_1[9] = &PTR_FUN_14b010a30;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f000000;
  return param_1;
}



// FUNCTION 145880110 FUN_145880110 body=54 status=ok
// SIG undefined FUN_145880110(void)

undefined8 * FUN_145880110(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145880146 FUN_145880146 body=103 status=ok
// SIG undefined FUN_145880146(void)

ulonglong FUN_145880146(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145880190:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145880190;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1458801ae FUN_1458801ae body=110 status=ok
// SIG undefined FUN_1458801ae(void)

void FUN_1458801ae(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_141230368(*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != lVar2) {
    return;
  }
  if (param_3 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_1458801fe;
  }
  param_3 = 0;
LAB_1458801fe:
  FUN_14588021c(param_1,param_3);
  return;
}



// FUNCTION 14588021c FUN_14588021c body=230 status=ok
// SIG undefined FUN_14588021c(void)

void FUN_14588021c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0xf8) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = (longlong)*(int *)(param_1 + 0xf8) << 3;
    do {
      cVar1 = FUN_1411db966(lVar2,param_2);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x88) == '\x03') {
          FUN_140457ffc(param_2 + 0x9c0,param_1);
          lVar2 = *(longlong *)(param_2 + 0xa08);
LAB_1458802a7:
          FUN_1411db8ea(param_1,lVar2);
        }
        else {
          lVar2 = param_2;
          if (*(char *)(param_1 + 0x88) == '\x02') goto LAB_1458802a7;
        }
        local_40 = 0;
        FUN_14485c47a(&local_40,param_2);
        local_38 = &local_40;
        FUN_141291ed4(param_1 + 0xf0);
        break;
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588030e FUN_14588030e body=296 status=ok
// SIG undefined FUN_14588030e(void)

undefined8 * FUN_14588030e(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145880438();
  *param_1 = &PTR_FUN_14b84ac40;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2dc) = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b3ecf50;
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
  *local_30 = &PTR_FUN_14b9dba80;
  FUN_1412a3750(&DAT_14cb7d880,&local_38,&local_30);
  FUN_1449db362(&local_30);
  param_1[0x5c] = local_38;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145880438 FUN_145880438 body=157 status=ok
// SIG undefined FUN_145880438(void)

undefined8 * FUN_145880438(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1458804d6(param_1,uVar1);
  *param_1 = &PTR_FUN_14b549c90;
  param_1[0x4e] = 0xbf80000042480000;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 2;
  param_1[0x50] = 0x3f99999a42480000;
  *(undefined4 *)(param_1 + 0x51) = 0x404ccccd;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 1;
  param_1[0x52] = 0x42480000400ccccd;
  param_1[0x4c] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  FUN_1412923e0(param_1);
  return param_1;
}



// FUNCTION 1458804d6 FUN_1458804d6 body=319 status=ok
// SIG undefined FUN_1458804d6(void)

undefined8 * FUN_1458804d6(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_145880616();
  *param_1 = &PTR_FUN_14b1744d0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x42b40000;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 2;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x44] = 2;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x43c80000;
  param_1[0x4a] = 0x4079000000000000;
  param_1[0x4b] = 0x409f400000000000;
  lVar1 = FUN_140032b16(0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x29] = lVar1;
  return param_1;
}



// FUNCTION 145880616 FUN_145880616 body=137 status=ok
// SIG undefined FUN_145880616(void)

longlong * FUN_145880616(longlong *param_1)

{
  FUN_144a0768c();
  *param_1 = (longlong)&PTR_FUN_14a905ab0;
  param_1[0xc] = -0x407fffff40800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_145880926(param_1 + 6);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  (**(code **)(*param_1 + 0x308))(param_1);
  return param_1;
}



// FUNCTION 1458806a0 FUN_1458806a0 body=645 status=ok
// SIG undefined FUN_1458806a0(void)

void FUN_1458806a0(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  uVar2 = DAT_14c967818;
  uVar3 = (undefined4)DAT_14c967818;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x50000000000;
  *(undefined8 *)(param_1 + 0xcc) = 0x500000002d0;
  *(undefined4 *)(param_1 + 0xd4) = 0x2d0;
  *(undefined8 *)(param_1 + 0xe0) = 0xbf800000bf800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_14482f6fa(param_1 + 0xe8,0);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_14482f6fa(param_1 + 0xf8,0);
  }
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd8) = 0xbf800000bf800000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cadb838) && (FUN_144b3d300(&DAT_14cadb838), DAT_14cadb838 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FullScreenMode",1);
    if (plVar4 == (longlong *)0x0) {
      DAT_14cadb830 = (undefined4 *)0x0;
    }
    else {
      DAT_14cadb830 = (undefined4 *)(**(code **)(*plVar4 + 0x68))(plVar4);
    }
    _Init_thread_footer(&DAT_14cadb838);
  }
  *(undefined4 *)(param_1 + 0xa8) = *DAT_14cadb830;
  FUN_145880926(param_1 + 0x30);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1458807e0;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    FUN_145880944(param_1);
  }
LAB_1458807e0:
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 1000;
  return;
}



// FUNCTION 145880926 FUN_145880926 body=30 status=ok
// SIG undefined FUN_145880926(void)

void FUN_145880926(undefined4 *param_1)

{
  FUN_141292034(param_1,1);
  *param_1 = 0;
  return;
}



// FUNCTION 145880944 FUN_145880944 body=144 status=ok
// SIG undefined FUN_145880944(void)

void FUN_145880944(longlong *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1458809d6();
  if ((int)param_1[0x14] == 1) {
    uVar1 = FUN_141292270(uVar1,local_18);
    if ((int)param_1[0x14] == 1) {
      FUN_141292270(uVar1,local_18);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((char)param_1[0x19] == '\x01') {
    fVar2 = (float)(**(code **)(*param_1 + 0x310))(param_1);
  }
  else {
    fVar2 = *(float *)(param_1 + 6);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 6) = fVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458809d6 FUN_1458809d6 body=34 status=ok
// SIG undefined FUN_1458809d6(void)

int FUN_1458809d6(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x2000;
  if (*DAT_14cae8120 < 0x2000) {
    iVar2 = *DAT_14cae8120;
  }
  iVar1 = 200;
  if (200 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 1458809f8 FUN_1458809f8 body=4 status=ok
// SIG undefined FUN_1458809f8(void)

void FUN_1458809f8(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
  return;
}



// FUNCTION 1458809fc FUN_1458809fc body=104 status=ok
// SIG undefined FUN_1458809fc(void)

void FUN_1458809fc(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    cVar1 = FUN_145880a64();
    if (cVar1 == '\0') {
      fVar2 = (*(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x284)) *
              (*(float *)(param_1 + 0x268) / 100.0) + *(float *)(param_1 + 0x284);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x290);
    }
    *(float *)(DAT_14cb0d2b0 + 0xdb4) = fVar2;
  }
  return;
}



// FUNCTION 145880a64 FUN_145880a64 body=3 status=ok
// SIG undefined FUN_145880a64(void)

undefined8 FUN_145880a64(void)

{
  return 0;
}



// FUNCTION 145880a68 FUN_145880a68 body=207 status=ok
// SIG undefined FUN_145880a68(void)

void FUN_145880a68(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1458806a0();
  *(undefined4 *)(param_1 + 0x160) = 0;
  FUN_145bce126(param_1);
  fVar3 = (float)FUN_145880b38();
  if (fVar3 <= 0.0) {
    fVar3 = *(float *)(param_1 + 0x248);
  }
  if ((double)fVar3 < *(double *)(param_1 + 0x250)) {
    fVar3 = (float)*(double *)(param_1 + 0x250);
  }
  if (*(double *)(param_1 + 600) < (double)fVar3) {
    fVar3 = (float)*(double *)(param_1 + 600);
  }
  *(int *)(param_1 + 0x110) = (int)fVar3;
  lVar1 = FUN_141283af6();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) goto LAB_145880b0c;
  }
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar2 + 0x15c);
  FUN_14485dd80(param_1 + 0x170);
LAB_145880b0c:
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  return;
}



// FUNCTION 145880b38 FUN_145880b38 body=75 status=ok
// SIG undefined FUN_145880b38(void)

float FUN_145880b38(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  float fVar4;
  
  lVar1 = DAT_14c9a7cf0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  fVar4 = *(float *)(lVar1 + uVar3 * 4);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}



// FUNCTION 145880b83 FUN_145880b83 body=138 status=ok
// SIG undefined FUN_145880b83(void)

void FUN_145880b83(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14a178ef0;
  uVar1 = *param_3;
  uVar2 = *param_2;
  puVar3[2] = *param_1;
  *(undefined4 *)(puVar3 + 3) = uVar2;
  *(undefined1 *)((longlong)puVar3 + 0x1c) = uVar1;
  *(undefined2 *)((longlong)puVar3 + 0x1d) = 1;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x45) = uVar1;
  *(undefined2 *)((longlong)puVar3 + 0x46) = 0x101;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  puVar3[0xd] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  return;
}



// FUNCTION 145880c0e FUN_145880c0e body=132 status=ok
// SIG undefined FUN_145880c0e(void)

void FUN_145880c0e(longlong param_1,int param_2)

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



// FUNCTION 145880c94 FUN_145880c94 body=45 status=ok
// SIG undefined FUN_145880c94(void)

undefined8 FUN_145880c94(undefined8 param_1,int param_2)

{
  FUN_145880cc2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x5f8);
  }
  return param_1;
}



// FUNCTION 145880cc2 FUN_145880cc2 body=107 status=ok
// SIG undefined FUN_145880cc2(void)

void FUN_145880cc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6e4fa0;
  param_1[0xd] = &PTR_FUN_14b6e5050;
  FUN_1403c44e6(param_1 + 0x82);
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_145880d2e(param_1 + 0x65);
  FUN_1403c44e6(param_1 + 0x15);
  FUN_145880d66(param_1);
  return;
}



// FUNCTION 145880d2e FUN_145880d2e body=55 status=ok
// SIG undefined FUN_145880d2e(void)

void FUN_145880d2e(longlong *param_1)

{
  FUN_145880d8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145880d66 FUN_145880d66 body=40 status=ok
// SIG undefined FUN_145880d66(void)

void FUN_145880d66(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4046b0;
  FUN_1448eac94(param_1 + 8);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145880d8e FUN_145880d8e body=121 status=ok
// SIG undefined FUN_145880d8e(void)

void FUN_145880d8e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_145880e08(param_1,param_2);
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



// FUNCTION 145880e08 FUN_145880e08 body=112 status=ok
// SIG undefined FUN_145880e08(void)

void FUN_145880e08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd8)) {
      uVar2 = uVar1 / 0xd8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd8,8);
  }
  return;
}



// FUNCTION 145880e80 FUN_145880e80 body=240 status=ok
// SIG undefined FUN_145880e80(void)

undefined2 * FUN_145880e80(undefined2 *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 **local_98;
  undefined1 local_8c [4];
  undefined *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined2 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_68 = &PTR_LAB_149e34b90;
  local_88 = &DAT_1427891d2;
  local_60 = param_1;
  FUN_141293f6e(param_1,1);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_140056680(param_1 + 0xc,param_2);
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_145880f72();
  EnterCriticalSection(lpCriticalSection);
  local_98 = &local_a8;
  local_a8 = param_1;
  local_a0 = param_1 + 0xc;
  FUN_14588103e(lpCriticalSection + 1,local_8c,&local_a0,0);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145880f72 FUN_145880f72 body=101 status=ok
// SIG undefined FUN_145880f72(void)

undefined * FUN_145880f72(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8732a0) {
    FUN_144b3d300(&DAT_14c8732a0);
    if (DAT_14c8732a0 == -1) {
      FUN_145880fd8();
      atexit((_func_5014 *)&LAB_142787d29);
      _Init_thread_footer(&DAT_14c8732a0);
    }
  }
  return &DAT_14c873228;
}



// FUNCTION 145880fd8 FUN_145880fd8 body=102 status=ok
// SIG undefined FUN_145880fd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145880fd8(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c873228);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c873228,4000);
  DAT_14c873270 = 0;
  DAT_14c873278 = 0;
  DAT_14c873250 = 0;
  _DAT_14c873258 = 0;
  _DAT_14c87327c = 0xffffffff00000080;
  _DAT_14c873284 = 0;
  DAT_14c873290 = 0;
  _DAT_14c873298 = 0;
  return;
}



// FUNCTION 14588103e FUN_14588103e body=326 status=ok
// SIG undefined FUN_14588103e(void)

undefined4 *
FUN_14588103e(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145881272(param_1,local_50);
  FUN_145881186(param_3,local_48);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  local_68 = param_4;
  cVar3 = FUN_1458811ea(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145881416(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881186 FUN_145881186 body=100 status=ok
// SIG undefined FUN_145881186(void)

undefined8 * FUN_145881186(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1458811ea FUN_1458811ea body=136 status=ok
// SIG undefined FUN_1458811ea(void)

void FUN_1458811ea(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_145881358();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_145dab906(param_1,*param_4);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14588121e;
    }
  }
  uVar6 = 0;
LAB_14588121e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 145881272 FUN_145881272 body=230 status=ok
// SIG undefined FUN_145881272(void)

int * FUN_145881272(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 145881358 FUN_145881358 body=189 status=ok
// SIG undefined FUN_145881358(void)

int FUN_145881358(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_145881396:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar7 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar7);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar7);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_14588140d;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14588140d;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1458813b0;
    }
  }
  return -1;
LAB_14588140d:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_1458813b0:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_145881396;
}



// FUNCTION 145881416 FUN_145881416 body=485 status=ok
// SIG undefined FUN_145881416(void)

void FUN_145881416(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458815fc FUN_1458815fc body=170 status=ok
// SIG undefined FUN_1458815fc(void)

undefined8 FUN_1458815fc(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x328))();
  local_48 = FUN_1458816cc(param_1);
  pcVar1 = (code *)param_1[0x38];
  plVar3 = param_1 + 0x3c;
  if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0x3a];
  }
  local_50 = uVar2;
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  (*pcVar1)(param_2,uVar2,&local_50,&local_48);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458816ae FUN_1458816ae body=29 status=ok
// SIG undefined FUN_1458816ae(void)

undefined8
FUN_1458816ae(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  (*(code *)*param_2)(param_1,*param_3,*param_4);
  return param_1;
}



// FUNCTION 1458816cc FUN_1458816cc body=187 status=ok
// SIG undefined FUN_1458816cc(void)

double FUN_1458816cc(longlong *param_1)

{
  double dVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  double local_48;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar1 = (double)(**(code **)(*param_1 + 0x328))();
  (**(code **)(*param_1 + 0x330))(param_1,local_50);
  if (ABS(local_38 - local_48) <= 1e-08) {
    dVar1 = (double)((ulonglong)((uint)(-(ulonglong)(local_38 <= dVar1) >> 0x20) & 0x3ff00000) <<
                    0x20);
  }
  else {
    dVar1 = (dVar1 - local_48) / (local_38 - local_48);
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881788 FUN_145881788 body=158 status=ok
// SIG undefined FUN_145881788(void)

bool FUN_145881788(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881828 FUN_145881828 body=40 status=ok
// SIG undefined FUN_145881828(void)

void FUN_145881828(longlong param_1)

{
  FUN_1457c6c94(param_1,0);
  FUN_145881b3c(param_1 + 0x30);
  FUN_145881850(param_1 + 0x30);
  return;
}



// FUNCTION 145881850 FUN_145881850 body=434 status=ok
// SIG undefined FUN_145881850(void)

void FUN_145881850(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145881a04();
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_70 = (longlong *)0x0;
LAB_145881985:
        local_78 = 0;
        bVar9 = true;
        plVar8 = (longlong *)0x0;
      }
      else {
        local_78 = *plVar7;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) {
            plStack_70 = (longlong *)0x0;
            goto LAB_145881985;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        plStack_70 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_145881985;
        bVar9 = false;
        plVar8 = plVar3;
      }
      if (local_78 != 0) {
        FUN_145882432(param_1 + -0x30,&local_78);
      }
      if (!bVar9) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
    if (*(int *)(param_1 + 0x28) != 0) goto LAB_1458818af;
  }
  FUN_145881a06(param_1 + -0x30,&local_78);
  if (local_78 != 0) {
    local_88 = local_78;
    local_80 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_70 + 0xc) = *(int *)((longlong)plStack_70 + 0xc) + 1;
      UNLOCK();
    }
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x10))((longlong *)(param_1 + 0x18),&local_88);
  }
  plVar7 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_70 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_1458818af:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145881a04 FUN_145881a04 body=1 status=ok
// SIG undefined FUN_145881a04(void)

void FUN_145881a04(void)

{
  return;
}



// FUNCTION 145881a06 FUN_145881a06 body=236 status=ok
// SIG undefined FUN_145881a06(void)

undefined8 * FUN_145881a06(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_145881af4(param_1 + 0x30);
  if (lVar4 != 0) {
    lVar5 = FUN_144a5dd5e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_145881a2f;
  }
  lVar4 = 0;
LAB_145881a2f:
  cVar3 = FUN_14129433e(lVar4);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_145c06276(&local_30,lVar4);
  *param_2 = *(undefined8 *)(local_30 + 0x520);
  lVar4 = *(longlong *)(local_30 + 0x528);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881af4 FUN_145881af4 body=72 status=ok
// SIG undefined FUN_145881af4(void)

undefined8 FUN_145881af4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + -0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1402095ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145881b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x5d8))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145881b3c FUN_145881b3c body=730 status=ok
// SIG undefined FUN_145881b3c(void)

void FUN_145881b3c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + -0x30;
  FUN_145881e18();
  local_40 = lVar1;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x38) * 0x58;
    lVar6 = *(longlong *)(param_1 + 0x30) + 0x30;
    do {
      cVar3 = FUN_1403ae288(lVar6 + -0x20);
      if (cVar3 != '\0') {
        local_68 = lVar6 + 0x10;
        FUN_14129437c(&local_40,lVar6 + -0x20,lVar6,lVar6 + 8);
      }
      lVar6 = lVar6 + 0x58;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    iVar2 = *(int *)(param_1 + 0x104);
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x38))) {
      cVar3 = FUN_1403ae288(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x58 + 0x10);
      if (cVar3 != '\0') {
        lVar6 = FUN_14008e0ae(*(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(param_1 + 0x104) * 0x58 + 0x10);
        local_58 = FUN_148e5bda6;
        local_50 = 0;
        FUN_145881f66(lVar6 + 0x228,&local_48,lVar1);
        *(undefined8 *)(param_1 + 0xf0) = local_48;
      }
    }
  }
  cVar3 = FUN_1403ae288(param_1 + 0x40);
  if (cVar3 != '\0') {
    local_68 = param_1 + 0x70;
    FUN_14129437c(&local_40,param_1 + 0x40,param_1 + 0x60,param_1 + 0x68);
  }
  cVar3 = FUN_1403ae288(param_1 + 0x78);
  if (cVar3 != '\0') {
    local_68 = param_1 + 0xa8;
    FUN_14129437c(&local_40,param_1 + 0x78,param_1 + 0x98,param_1 + 0xa0);
  }
  if ((*(longlong *)(param_1 + 0xe8) == 0) && (lVar6 = *(longlong *)(param_1 + -0x10), lVar6 != 0))
  {
    lVar7 = FUN_1402095ca();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      uVar4 = FUN_1403c7982();
      plVar5 = (longlong *)FUN_144718840(lVar6,uVar4);
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
        local_58 = FUN_145881828;
        local_50 = 0;
        FUN_145882140(uVar4,&local_48,lVar1);
        *(undefined8 *)(param_1 + 0xe8) = local_48;
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + -0x10);
  if (lVar6 != 0) {
    lVar7 = FUN_1402095ca();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      lVar7 = (**(code **)(*(longlong *)(lVar6 + 0x4a0) + 0x10))(lVar6 + 0x4a0);
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xf8) == 0)) {
        local_58 = FUN_145ae6254;
        local_50 = 0;
        FUN_145882240(lVar7 + 0x18,&local_48,lVar1);
        *(undefined8 *)(param_1 + 0xf8) = local_48;
      }
      if (*(char *)(lVar6 + 0x3d4) == '\0') {
        FUN_145881e1a(&local_60);
        FUN_145881edc(lVar6 + 0x3d4,lVar1,local_60);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881e18 FUN_145881e18 body=1 status=ok
// SIG undefined FUN_145881e18(void)

void FUN_145881e18(void)

{
  return;
}



// FUNCTION 145881e1a FUN_145881e1a body=193 status=ok
// SIG undefined FUN_145881e1a(void)

undefined8 * FUN_145881e1a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6288) {
    FUN_144b3d300(&DAT_14cbd6288);
    if (DAT_14cbd6288 == -1) {
      builtin_wcsncpy(local_38,L"OnControllerChanged",0x14);
      FUN_1446f470e(&DAT_14cbd6280,local_38,1);
      _Init_thread_footer(&DAT_14cbd6288);
    }
  }
  *param_1 = DAT_14cbd6280;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881edc FUN_145881edc body=137 status=ok
// SIG undefined FUN_145881edc(void)

void FUN_145881edc(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1410d8386(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x3d4,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145881f66 FUN_145881f66 body=254 status=ok
// SIG undefined FUN_145881f66(void)

undefined8
FUN_145881f66(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b404040;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9c60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145882066(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145882066 FUN_145882066 body=216 status=ok
// SIG undefined FUN_145882066(void)

undefined8 * FUN_145882066(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145882140 FUN_145882140 body=254 status=ok
// SIG undefined FUN_145882140(void)

undefined8
FUN_145882140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7890;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9cd0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14036a282(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145882240 FUN_145882240 body=254 status=ok
// SIG undefined FUN_145882240(void)

undefined8
FUN_145882240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9d40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145882340 FUN_145882340 body=223 status=ok
// SIG undefined FUN_145882340(void)

void FUN_145882340(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140dca4f4(param_1 + 8);
  local_30 = 0;
  plVar3 = (longlong *)param_2[1];
  local_28 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        local_28 = (longlong *)0x0;
        goto LAB_1458823e8;
      }
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
    if (plVar3 != (longlong *)0x0) {
      local_30 = *param_2;
      FUN_145882432(param_1 + -0x48);
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
      goto LAB_1458823b1;
    }
  }
LAB_1458823e8:
  FUN_145882432(param_1 + -0x48,&local_30);
LAB_1458823b1:
  if (param_2[1] != 0) {
    LOCK();
    piVar2 = (int *)(param_2[1] + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145882432 FUN_145882432 body=359 status=ok
// SIG undefined FUN_145882432(void)

void FUN_145882432(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 0x2d));
  *(int *)(param_2 + 0x2c) = (int)param_2[0x2c] + 1;
  if ((*(int *)(param_1 + 0x68) == 0) || (*(char *)(param_1 + 0x130) != '\0')) goto LAB_145882540;
  FUN_140dcb3f2(param_2,*(int *)(param_1 + 0x68),1);
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar5 = 0x28;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x60);
      lVar4 = *param_2;
      lVar1 = *(longlong *)(lVar3 + -0x28 + lVar5);
      iVar2 = *(int *)(lVar4 + -0x20 + lVar5);
      if (lVar1 == *(longlong *)(lVar4 + -0x28 + lVar5)) {
        if (iVar2 == 0) {
          iVar2 = 0;
          goto LAB_1458824b6;
        }
      }
      else {
LAB_1458824b6:
        *(longlong *)(lVar4 + -0x28 + lVar5) = lVar1;
        *(int *)(lVar4 + -0x20 + lVar5) = iVar2 + 1;
        lVar4 = *param_2;
        lVar3 = *(longlong *)(param_1 + 0x60);
      }
      FUN_1412944b0(lVar3 + lVar5 + -0x18,lVar4 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x58;
    } while (lVar6 < *(int *)(param_1 + 0x68));
  }
  FUN_1412944b0(param_1 + 0x70,param_2 + 2);
  FUN_1412944b0(param_1 + 0xa8,param_2 + 8);
  FUN_1412944b0(param_1 + 0xe0,param_2 + 0xe);
  if (*(char *)((longlong)param_2 + 0x124) == '\0') {
    if ((int)param_2[0x25] == 0) {
      iVar2 = 1;
      goto LAB_14588257b;
    }
  }
  else {
    iVar2 = (int)param_2[0x25] + 1;
LAB_14588257b:
    *(undefined1 *)((longlong)param_2 + 0x124) = 0;
    *(int *)(param_2 + 0x25) = iVar2;
  }
  if (*(char *)((longlong)param_2 + 300) == '\0') {
    if ((int)param_2[0x26] != 0) goto LAB_145882540;
    iVar2 = 1;
  }
  else {
    iVar2 = (int)param_2[0x26] + 1;
  }
  *(undefined1 *)((longlong)param_2 + 300) = 0;
  *(int *)(param_2 + 0x26) = iVar2;
LAB_145882540:
                    /* WARNING: Could not recover jumptable at 0x00014588254e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_2 + 0x2d));
  return;
}



// FUNCTION 14588259a FUN_14588259a body=40 status=ok
// SIG undefined FUN_14588259a(void)

undefined8 FUN_14588259a(undefined8 param_1,int param_2)

{
  FUN_1458825c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458825c2 FUN_1458825c2 body=136 status=ok
// SIG undefined FUN_1458825c2(void)

void FUN_1458825c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b170620;
  FUN_144760e21(param_1[0xa3],*(undefined4 *)(param_1 + 0xa4));
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  FUN_14588264a(param_1 + 0x9a);
  FUN_1458826b0(param_1[0x93],*(undefined4 *)(param_1 + 0x94));
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  FUN_1458826d8(param_1);
  return;
}



// FUNCTION 14588264a FUN_14588264a body=62 status=ok
// SIG undefined FUN_14588264a(void)

void FUN_14588264a(longlong param_1)

{
  FUN_145882688(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1486a8e3e(param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 145882688 FUN_145882688 body=40 status=ok
// SIG undefined FUN_145882688(void)

void FUN_145882688(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486a8de8(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1458826b0 FUN_1458826b0 body=40 status=ok
// SIG undefined FUN_1458826b0(void)

void FUN_1458826b0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1486b3500(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1458826d8 FUN_1458826d8 body=161 status=ok
// SIG undefined FUN_1458826d8(void)

void FUN_1458826d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b171620;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x82],*(undefined4 *)(param_1 + 0x83));
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_14588277a(param_1);
  return;
}



// FUNCTION 14588277a FUN_14588277a body=50 status=ok
// SIG undefined FUN_14588277a(void)

void FUN_14588277a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a900ed0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1458827ba FUN_1458827ba body=40 status=ok
// SIG undefined FUN_1458827ba(void)

undefined8 FUN_1458827ba(undefined8 param_1,int param_2)

{
  FUN_141294dce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145882810 FUN_145882810 body=18 status=ok
// SIG undefined FUN_145882810(void)

uint * FUN_145882810(uint *param_1)

{
  *param_1 = *param_1 & 0xfe000000;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 145882838 FUN_145882838 body=73 status=ok
// SIG undefined FUN_145882838(void)

void FUN_145882838(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x1475) & 1) != 0) &&
     (*(char *)(param_1 + 0x1474) == *(char *)(param_1 + 0x1476))) {
    FUN_140ececb8(param_1 + 0x1420);
    return;
  }
  FUN_140ecec32();
  FUN_140ecea3e(param_1 + 0xdc8);
  return;
}



// FUNCTION 145882882 FUN_145882882 body=96 status=ok
// SIG undefined FUN_145882882(void)

ulonglong FUN_145882882(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1458828c5:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1458828c5;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1458828fe FUN_1458828fe body=37 status=ok
// SIG undefined FUN_1458828fe(void)

void FUN_1458828fe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145882924();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145882924 FUN_145882924 body=75 status=ok
// SIG undefined FUN_145882924(void)

ulonglong FUN_145882924(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  }
  lVar2 = FUN_1411c648e(lVar3);
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    bVar1 = FUN_145882970(lVar2,*(undefined4 *)(param_1 + 0xe0));
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145882970 FUN_145882970 body=26 status=ok
// SIG undefined FUN_145882970(void)

undefined1 FUN_145882970(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14588298a();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x20);
  }
  return uVar1;
}



// FUNCTION 14588298a FUN_14588298a body=110 status=ok
// SIG undefined FUN_14588298a(void)

longlong FUN_14588298a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar1 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x30) == param_2) break;
        iVar3 = *(int *)(lVar1 + 0x28);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1458829da;
    }
  }
  lVar1 = 0;
LAB_1458829da:
  lVar2 = lVar1 + 4;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 145882a00 FUN_145882a00 body=176 status=ok
// SIG undefined FUN_145882a00(void)

undefined8 * FUN_145882a00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ea704(param_1,uVar1);
  *param_1 = &PTR_FUN_14b0b02d0;
  param_1[5] = &PTR_FUN_14b0b0dd0;
  param_1[6] = &PTR_FUN_14b0b0e10;
  param_1[0x55] = &PTR_FUN_14b0b0e60;
  param_1[0x56] = &PTR_FUN_14b0b0ee0;
  param_1[0x57] = &PTR_FUN_14b0b0ef0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0x3fc00000;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  return param_1;
}



// FUNCTION 145882ab0 FUN_145882ab0 body=147 status=ok
// SIG undefined FUN_145882ab0(void)

void FUN_145882ab0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145882b44 FUN_145882b44 body=127 status=ok
// SIG undefined FUN_145882b44(void)

void FUN_145882b44(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x808);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x101) {
      iVar5 = 0x100;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x80c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x80c) = iVar5;
    FUN_145882bc4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145882bc4 FUN_145882bc4 body=143 status=ok
// SIG undefined FUN_145882bc4(void)

void FUN_145882bc4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x800);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x800,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x800),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x800,param_2,param_3,8);
  return;
}



// FUNCTION 145882c54 FUN_145882c54 body=37 status=ok
// SIG undefined FUN_145882c54(void)

void FUN_145882c54(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_145882c7a(param_2);
  return;
}



// FUNCTION 145882c7a FUN_145882c7a body=126 status=ok
// SIG undefined FUN_145882c7a(void)

undefined8 * FUN_145882c7a(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac7ccb0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x12] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x13) = 2;
  param_1[0x11] = &PTR_FUN_14a1a0a20;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x16] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x19) = 0x459c4000;
  return param_1;
}



// FUNCTION 145882cf8 FUN_145882cf8 body=322 status=ok
// SIG undefined FUN_145882cf8(void)

void FUN_145882cf8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_144729dda(param_1 + 0x68);
  if (cVar4 != '\0') {
    uVar5 = FUN_14479d2ce(param_1 + 0x68);
    FUN_144a7d35a(uVar5,&local_48);
    if (-1 < (int)local_40) {
      do {
        if ((int)local_48[1] <= (int)local_40) break;
        cVar4 = FUN_145882e3c((ulonglong)local_40 * 8 + *local_48,param_1 + 0x70);
        if (cVar4 == '\0') {
          lVar6 = FUN_14479d2ce((longlong)(int)local_40 * 8 + *local_48);
          if (lVar6 != 0) {
            lVar7 = FUN_144a5dd5e();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              local_38 = *(undefined8 *)(lVar6 + 0xa08);
              pcVar2 = (code *)*param_2;
              plVar8 = (longlong *)param_2[2];
              if ((longlong *)param_2[2] == (longlong *)0x0) {
                plVar8 = param_2 + 4;
              }
              uVar5 = (**(code **)(*plVar8 + 8))();
              (*pcVar2)(uVar5,&local_38);
            }
          }
        }
        uVar1 = local_40 + 1;
        bVar3 = -2 < (int)local_40;
        local_40 = uVar1;
      } while (bVar3);
    }
  }
  if (*param_2 != 0) {
    plVar8 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145882e3c FUN_145882e3c body=55 status=ok
// SIG undefined FUN_145882e3c(void)

ulonglong FUN_145882e3c(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145882e74 FUN_145882e74 body=96 status=ok
// SIG undefined FUN_145882e74(void)

ulonglong FUN_145882e74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145882eb7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145882eb7;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 145882edc FUN_145882edc body=201 status=ok
// SIG undefined FUN_145882edc(void)

void FUN_145882edc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x1c8), lVar2 != 0)) {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_14480f766(lVar2 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_14480f766(lVar2 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    FUN_145882fa6(lVar1,*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (*(int *)(param_1 + 0x158) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x150);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(param_1 + 0x150),0,0,0x10);
        *(undefined4 *)(param_1 + 0x158) = 0;
      }
    }
  }
  FUN_140e6ab0e(param_1);
  return;
}



// FUNCTION 145882fa6 FUN_145882fa6 body=17 status=ok
// SIG undefined FUN_145882fa6(void)

undefined8 FUN_145882fa6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_14480f766(param_1 + 0x50);
    return uVar1;
  }
  return 0;
}



// FUNCTION 145882fb8 FUN_145882fb8 body=45 status=ok
// SIG undefined FUN_145882fb8(void)

undefined8 FUN_145882fb8(undefined8 param_1,int param_2)

{
  FUN_145882fe6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 145882fe6 FUN_145882fe6 body=144 status=ok
// SIG undefined FUN_145882fe6(void)

void FUN_145882fe6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b60a8e0;
  FUN_14076ba26(param_1 + 0x5a);
  FUN_144a2da94(param_1 + 0x51);
  FUN_144a2da94(param_1 + 0x4a);
  FUN_144a2da94(param_1 + 0x42);
  FUN_144a2da94(param_1 + 0x3b);
  FUN_144a2da94(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  FUN_14076bc70(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145883076 FUN_145883076 body=81 status=ok
// SIG undefined FUN_145883076(void)

void FUN_145883076(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = 0;
  FUN_1412969d0();
  lVar1 = (longlong)DAT_14cb547e8;
  DAT_14cb547e8 = puVar2;
  if (lVar1 == 0) {
    return;
  }
  FUN_142500a50();
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1458830d4 FUN_1458830d4 body=31 status=ok
// SIG undefined FUN_1458830d4(void)

undefined8 FUN_1458830d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458830f4 FUN_1458830f4 body=37 status=ok
// SIG undefined FUN_1458830f4(void)

void FUN_1458830f4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_14588311a(param_2);
  return;
}



// FUNCTION 14588311a FUN_14588311a body=135 status=ok
// SIG undefined FUN_14588311a(void)

undefined8 * FUN_14588311a(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14b2e9fb0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  return param_1;
}



// FUNCTION 1458831ae FUN_1458831ae body=31 status=ok
// SIG undefined FUN_1458831ae(void)

undefined8 FUN_1458831ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458831d6 FUN_1458831d6 body=411 status=ok
// SIG undefined FUN_1458831d6(void)

longlong * FUN_1458831d6(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b973df0;
  plVar1 = plVar5 + 2;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = param_3;
  plVar5[2] = (longlong)&PTR_FUN_14b973e10;
  plVar5[10] = 0;
  *(undefined4 *)(plVar5 + 0xb) = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar5 + 100) = 0;
  plVar5[0xe] = 0;
  *(undefined4 *)(plVar5 + 0xf) = 0;
  plVar5[0x10] = param_4;
  plVar5[0x11] = 0;
  *(undefined4 *)(plVar5 + 0x12) = 0;
  local_48 = plVar1;
  local_40 = plVar5;
  FUN_1458833f8(&local_48,plVar1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x220);
  *(uint *)(param_1 + 0x220) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x224) < iVar3 + 1U) {
    FUN_145883374((longlong *)(param_1 + 0x218),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x218);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
  plVar1 = local_40;
  *param_2 = (longlong)local_48;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145883374 FUN_145883374 body=132 status=ok
// SIG undefined FUN_145883374(void)

void FUN_145883374(longlong param_1,int param_2)

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



// FUNCTION 1458833f8 FUN_1458833f8 body=162 status=ok
// SIG undefined FUN_1458833f8(void)

void FUN_1458833f8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145883437;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145883437;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145883437:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145883496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14588349a FUN_14588349a body=54 status=ok
// SIG undefined FUN_14588349a(void)

undefined1 FUN_14588349a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1458834d0(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1458834d0 FUN_1458834d0 body=101 status=ok
// SIG undefined FUN_1458834d0(void)

longlong * FUN_1458834d0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 145883536 FUN_145883536 body=21 status=ok
// SIG undefined FUN_145883536(void)

undefined8 FUN_145883536(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14588354c FUN_14588354c body=30 status=ok
// SIG undefined FUN_14588354c(void)

void FUN_14588354c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x550) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0x54c);
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(lVar2 + 0x39c);
  return;
}



// FUNCTION 14588356a FUN_14588356a body=69 status=ok
// SIG undefined FUN_14588356a(void)

void FUN_14588356a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(lVar2 + 0x39c);
  return;
}



// FUNCTION 1458835b0 FUN_1458835b0 body=38 status=ok
// SIG undefined FUN_1458835b0(void)

undefined8 FUN_1458835b0(undefined8 param_1,int param_2)

{
  FUN_1458835d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458835d6 FUN_1458835d6 body=100 status=ok
// SIG undefined FUN_1458835d6(void)

void FUN_1458835d6(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14ad45b00;
  if (param_1[0x46] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x46] + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = (undefined8 *)param_1[0x37];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145883637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 145883646 FUN_145883646 body=123 status=ok
// SIG undefined FUN_145883646(void)

undefined8 * FUN_145883646(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14b3cd500;
  param_1[5] = &PTR_FUN_14b3cd9c0;
  param_1[6] = &PTR_LAB_14b3cda00;
  param_1[0x22] = &PTR_FUN_14b3cda50;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_141297316(param_1,5);
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 3;
  return param_1;
}



// FUNCTION 1458836c2 FUN_1458836c2 body=132 status=ok
// SIG undefined FUN_1458836c2(void)

void FUN_1458836c2(longlong param_1,int param_2)

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



// FUNCTION 14588375e FUN_14588375e body=187 status=ok
// SIG undefined FUN_14588375e(void)

void FUN_14588375e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145883801;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145883801:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145883822 FUN_145883822 body=55 status=ok
// SIG undefined FUN_145883822(void)

void FUN_145883822(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997de8 == 0) {
    uVar1 = FUN_141298036();
    DAT_14c997de8 = FUN_140002ddd(FUN_1462889e5,uVar1,L"NetAnalyticsDataConfig");
  }
  return;
}



// FUNCTION 14588385a FUN_14588385a body=55 status=ok
// SIG undefined FUN_14588385a(void)

void FUN_14588385a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e1a0 == 0) {
    uVar1 = FUN_145883891();
    DAT_14c99e1a0 = FUN_140002ddd(FUN_1462959b9,uVar1,L"PropertyPathSegment");
  }
  return;
}



// FUNCTION 145883891 FUN_145883891 body=49 status=ok
// SIG undefined FUN_145883891(void)

longlong FUN_145883891(void)

{
  if (DAT_14c99e188 == 0) {
    FUN_140f50038(&DAT_14c99e188,&PTR_s__Script_PropertyPath_149fcd9e0);
  }
  return DAT_14c99e188;
}



// FUNCTION 1458838c2 FUN_1458838c2 body=55 status=ok
// SIG undefined FUN_1458838c2(void)

void FUN_1458838c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabbbf0 == 0) {
    uVar1 = FUN_141298067();
    DAT_14cabbbf0 = FUN_140002ddd(FUN_146362ef4,uVar1,L"CompositionGraphCapturePasses");
  }
  return;
}



// FUNCTION 1458838fa FUN_1458838fa body=55 status=ok
// SIG undefined FUN_1458838fa(void)

void FUN_1458838fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb2f620 == 0) {
    uVar1 = FUN_141298098();
    DAT_14cb2f620 = FUN_140002ddd(FUN_1464607e8,uVar1,L"SimulationStageMetaData");
  }
  return;
}



// FUNCTION 145883932 FUN_145883932 body=55 status=ok
// SIG undefined FUN_145883932(void)

void FUN_145883932(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf50b0 == 0) {
    uVar1 = FUN_14129848d();
    DAT_14cbf50b0 = FUN_140002ddd(FUN_146670a46,uVar1,L"QosSubspaceComparisonParams");
  }
  return;
}



// FUNCTION 14588396a FUN_14588396a body=55 status=ok
// SIG undefined FUN_14588396a(void)

void FUN_14588396a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6fa8 == 0) {
    uVar1 = FUN_1412984be();
    DAT_14cbf6fa8 = FUN_140002ddd(FUN_14667603f,uVar1,L"TrackRenderData");
  }
  return;
}



// FUNCTION 1458839a2 FUN_1458839a2 body=172 status=ok
// SIG undefined FUN_1458839a2(void)

void FUN_1458839a2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  lVar1 = FUN_14001cc68(0x130,0x10);
  FUN_145883a8e(lVar1,param_2);
  lVar3 = *param_1;
  *param_1 = lVar1;
  if (lVar3 != 0) {
    FUN_145825bfe(lVar3);
    FUN_1400020a8(lVar3);
  }
  puVar2 = (undefined1 *)FUN_14001cc68(0x20,0x10);
  *(undefined8 *)(puVar2 + 0x18) = 0;
  lVar3 = FUN_14001cc68(0x60,0x10);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  *(longlong *)(puVar2 + 0x10) = lVar3;
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 4) = 0x200000001;
  FUN_145883a4e(param_1 + 1,puVar2);
  return;
}



// FUNCTION 145883a4e FUN_145883a4e body=64 status=ok
// SIG undefined FUN_145883a4e(void)

void FUN_145883a4e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_145825b9c(lVar1 + 0x10,lVar1 + 0x10,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8));
  FUN_1400020a8(*(undefined8 *)(lVar1 + 0x10));
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 145883a8e FUN_145883a8e body=287 status=ok
// SIG undefined FUN_145883a8e(void)

undefined1 * FUN_145883a8e(undefined1 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1412984f0(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 0x70) = puVar1;
  *puVar1 = param_1 + 0x70;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 0xa0) = puVar1;
  *puVar1 = param_1 + 0xa0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 200) = puVar1;
  *puVar1 = param_1 + 200;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 0x108) = puVar1;
  *puVar1 = param_1 + 0x108;
  return param_1;
}



// FUNCTION 145883bbc FUN_145883bbc body=40 status=ok
// SIG undefined FUN_145883bbc(void)

undefined8 FUN_145883bbc(undefined8 param_1,int param_2)

{
  FUN_145883be4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145883be4 FUN_145883be4 body=125 status=ok
// SIG undefined FUN_145883be4(void)

void FUN_145883be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a175710;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145883c62(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_14129872a(param_1 + 1);
  FUN_144a659aa(param_1);
  return;
}



// FUNCTION 145883c62 FUN_145883c62 body=55 status=ok
// SIG undefined FUN_145883c62(void)

void FUN_145883c62(longlong *param_1)

{
  FUN_145883c9a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145883c9a FUN_145883c9a body=342 status=ok
// SIG undefined FUN_145883c9a(void)

void FUN_145883c9a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_145883df2((longlong)iStack_54 * 0x68 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145883df2 FUN_145883df2 body=70 status=ok
// SIG undefined FUN_145883df2(void)

void FUN_145883df2(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145883e38 FUN_145883e38 body=156 status=ok
// SIG undefined FUN_145883e38(void)

bool FUN_145883e38(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145883eec FUN_145883eec body=124 status=ok
// SIG undefined FUN_145883eec(void)

int FUN_145883eec(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145884062(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x120;
  memmove((void *)(*param_1 + lVar2 + 0x120),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x120);
  FUN_145883f68(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 145883f68 FUN_145883f68 body=134 status=ok
// SIG undefined FUN_145883f68(void)

undefined1 * FUN_145883f68(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14129a3f4(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_14129a3f4(param_1 + 0x20,param_2 + 0x20);
  FUN_140d8ebf0(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 145883fee FUN_145883fee body=115 status=ok
// SIG undefined FUN_145883fee(void)

int FUN_145883fee(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1458844d4(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0x118);
  memmove((void *)((longlong)_Src + 0x118),_Src,(ulonglong)(uint)(iVar1 - param_3) * 0x118);
  FUN_1458842ca((longlong)param_3 * 0x118 + *param_1,param_2);
  return param_3;
}



// FUNCTION 145884062 FUN_145884062 body=147 status=ok
// SIG undefined FUN_145884062(void)

void FUN_145884062(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458840f6 FUN_1458840f6 body=467 status=ok
// SIG undefined FUN_1458840f6(void)

undefined1 * FUN_1458840f6(undefined1 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined4 *)(param_1 + 0x10) = local_48;
  *(undefined4 *)(param_1 + 0x14) = local_44;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x38) = local_50;
  *(undefined4 *)(param_1 + 0x40) = local_48;
  *(undefined4 *)(param_1 + 0x44) = local_44;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0x50) = local_50;
  *(undefined4 *)(param_1 + 0x58) = local_48;
  *(undefined4 *)(param_1 + 0x5c) = local_44;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_1400b22c2(param_1 + 0x68,"noelement");
  param_1[0x78] = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_1400b22c2(param_1 + 0x88,"noelement");
  param_1[0x98] = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0xa8) = local_50;
  *(undefined4 *)(param_1 + 0xb0) = local_48;
  *(undefined4 *)(param_1 + 0xb4) = local_44;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[200] = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_1400b22c2(&local_50,&DAT_149e02088);
  *(undefined8 *)(param_1 + 0xe0) = local_50;
  *(undefined4 *)(param_1 + 0xe8) = local_48;
  *(undefined4 *)(param_1 + 0xec) = local_44;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_1400b22c2(&local_50,"common");
  *(undefined8 *)(param_1 + 0xf8) = local_50;
  *(undefined4 *)(param_1 + 0x100) = local_48;
  *(undefined4 *)(param_1 + 0x104) = local_44;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x110] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458842ca FUN_1458842ca body=521 status=ok
// SIG undefined FUN_1458842ca(void)

undefined1 * FUN_1458842ca(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14129a3f4(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_14129a3f4(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_14129a3f4(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_14129a3f4(param_1 + 0x50,param_2 + 0x50);
  FUN_1400b22c2(param_1 + 0x68,"noelement");
  param_1[0x78] = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_141239b02(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_1400b22c2(param_1 + 0x88,"noelement");
  param_1[0x98] = 1;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_141239b02(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_14129a3f4(param_1 + 0xa8,param_2 + 0xa8);
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc0] = param_2[0xc0];
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[200] = param_2[200];
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_14129a3f4(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_14129a3f4(param_1 + 0xf8,param_2 + 0xf8);
  param_1[0x110] = param_2[0x110];
  return param_1;
}



// FUNCTION 1458844d4 FUN_1458844d4 body=146 status=ok
// SIG undefined FUN_1458844d4(void)

void FUN_1458844d4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x118,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x118)) {
      uVar5 = uVar4 / 0x118 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x118,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145884566 FUN_145884566 body=131 status=ok
// SIG undefined FUN_145884566(void)

void FUN_145884566(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14010edaa();
  CoCreateGuid((GUID *)(param_1 + 0x2e0));
  if ((*(uint *)(param_1 + 8) & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2118);
    local_20 = param_1;
    FUN_145bdf792(&DAT_14cad2108);
    *(undefined1 *)(param_1 + 0x300) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2118);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458845ea FUN_1458845ea body=187 status=ok
// SIG undefined FUN_1458845ea(void)

undefined8 FUN_1458845ea(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14129a444();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458846b4 FUN_1458846b4 body=40 status=ok
// SIG undefined FUN_1458846b4(void)

undefined8 FUN_1458846b4(undefined8 param_1,int param_2)

{
  FUN_1458846dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458846dc FUN_1458846dc body=85 status=ok
// SIG undefined FUN_1458846dc(void)

void FUN_1458846dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b140100;
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14588474e FUN_14588474e body=103 status=ok
// SIG undefined FUN_14588474e(void)

ulonglong FUN_14588474e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145884798:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145884798;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1458847be FUN_1458847be body=86 status=ok
// SIG undefined FUN_1458847be(void)

void FUN_1458847be(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145884814(*(undefined8 *)(param_1 + 0x28));
  FUN_14129a52a(*(longlong *)(param_1 + 0x28) + 0x2a0,param_1,uVar1);
  uVar1 = FUN_145884878(*(undefined8 *)(param_1 + 0x28));
  FUN_14129a52a(*(longlong *)(param_1 + 0x28) + 0x2a0,param_1,uVar1);
  FUN_145884aa8(param_1 + 0x48,param_1);
  return;
}



// FUNCTION 145884814 FUN_145884814 body=98 status=ok
// SIG undefined FUN_145884814(void)

void FUN_145884814(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458848dc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884878 FUN_145884878 body=98 status=ok
// SIG undefined FUN_145884878(void)

void FUN_145884878(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458849c2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458848dc FUN_1458848dc body=228 status=ok
// SIG undefined FUN_1458848dc(void)

longlong FUN_1458848dc(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2cb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_147547f1d;
    local_40 = FUN_14179dc27;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneRestorePreAnimatedStateSystem",&DAT_14cab2cb0,
                  &DAT_147547f1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2cb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458849c2 FUN_1458849c2 body=228 status=ok
// SIG undefined FUN_1458849c2(void)

longlong FUN_1458849c2(void)

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
  if (DAT_14cab5c08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_1476590a9;
    local_40 = &LAB_145cd721d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneComponentAttachmentInvalidatorSystem",
                  &DAT_14cab5c08,&DAT_1476590a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5c08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884aa8 FUN_145884aa8 body=169 status=ok
// SIG undefined FUN_145884aa8(void)

void FUN_145884aa8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined1 *)(param_1 + 0x168) = 1;
    FUN_14485c47a(param_1 + 0x170);
    FUN_145884b52(*(longlong *)(param_2 + 0x28) + 0x658,local_20,param_1,FUN_1413373dc);
    FUN_145884b52(*(longlong *)(param_2 + 0x28) + 0x670,local_20,param_1,FUN_14767a650);
    FUN_145884c38(*(longlong *)(param_2 + 0x28) + 0x688,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884b52 FUN_145884b52 body=228 status=ok
// SIG undefined FUN_145884b52(void)

undefined8
FUN_145884b52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a4d7700;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14a4d7690;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1409960cc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884c38 FUN_145884c38 body=228 status=ok
// SIG undefined FUN_145884c38(void)

undefined8 FUN_145884c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a481140;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a4d7770;
  local_38[3] = param_3;
  local_38[4] = FUN_141100ce6;
  FUN_140996264(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884d1e FUN_145884d1e body=291 status=ok
// SIG undefined FUN_145884d1e(void)

void FUN_145884d1e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
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
  uVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  uStack_38 = (undefined4)local_18;
  uStack_34 = local_18._4_4_;
  FUN_145884e42(&local_48,uVar1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884e42 FUN_145884e42 body=147 status=ok
// SIG undefined FUN_145884e42(void)

void FUN_145884e42(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141088a78(param_1,&local_28);
  if ((*(byte *)(local_28 + 0x30) & 2) != 0) {
    iVar3 = *(int *)(local_28 + 0xe4) - *(int *)(local_28 + 0xec);
    if (param_2 <= iVar3) {
      iVar3 = param_2;
    }
    if (0 < iVar3) {
      FUN_145884ed6(local_28,iVar3 + *(int *)(local_28 + 0xec));
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145884ed6 FUN_145884ed6 body=377 status=ok
// SIG undefined FUN_145884ed6(void)

void FUN_145884ed6(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar7 = *(int *)(param_1 + 0xec) - param_2;
  if (iVar7 != 0) {
    *(int *)(param_1 + 0xec) = param_2;
    cVar5 = FUN_144a7d382(param_1 + 0xe0);
    if (cVar5 != '\0') {
      cVar5 = FUN_14486ea84(param_1 + 0xc0);
      if (cVar5 != '\0') {
        uVar6 = FUN_14008e0ae(param_1 + 0xc0);
        FUN_1414daa56(uVar6,0x3f800000,0x3f800000);
      }
    }
    FUN_1458850a2(param_1);
    FUN_145885050(param_1);
    FUN_141085fe4(param_1,&local_50);
    local_40 = local_50;
    local_38 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_14112dc38(param_1 + 0x80,&local_40);
    plVar2 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar3 = (int *)((longlong)local_48 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    iVar4 = -iVar7;
    if (-iVar7 < 0) {
      iVar4 = iVar7;
    }
    FUN_14588505c(param_1 + 0x70,param_2 <= *(int *)(param_1 + 0xec),iVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885050 FUN_145885050 body=12 status=ok
// SIG undefined FUN_145885050(void)

void FUN_145885050(longlong param_1)

{
  FUN_1401861f4(param_1 + 0x38,*(undefined4 *)(param_1 + 0x34));
  return;
}



// FUNCTION 14588505c FUN_14588505c body=69 status=ok
// SIG undefined FUN_14588505c(void)

void FUN_14588505c(undefined8 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14[0] = param_2;
  local_10 = param_3;
  local_c = param_4;
  FUN_1447cd2ec(param_1,local_14);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458850a2 FUN_1458850a2 body=102 status=ok
// SIG undefined FUN_1458850a2(void)

void FUN_1458850a2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0xb0);
    if (lVar2 != 0) {
      cVar1 = FUN_14109961a(lVar2 + 0x48,*(undefined8 *)(param_1 + 0xb8),
                            0 < *(int *)(param_1 + 0xec),0);
      if (cVar1 != '\0') {
        FUN_1447f69b6(lVar2 + 0x1f0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145885116 FUN_145885116 body=40 status=ok
// SIG undefined FUN_145885116(void)

undefined8 FUN_145885116(undefined8 param_1,int param_2)

{
  FUN_14588513e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588513e FUN_14588513e body=71 status=ok
// SIG undefined FUN_14588513e(void)

void FUN_14588513e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b321ba0;
  FUN_145885185(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145885185 FUN_145885185 body=49 status=ok
// SIG undefined FUN_145885185(void)

void FUN_145885185(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458851b6 FUN_1458851b6 body=42 status=ok
// SIG undefined FUN_1458851b6(void)

void FUN_1458851b6(void)

{
  if (DAT_14cbaadc0 == '\0') {
    FUN_1458851e0();
    FUN_145885206(FUN_14610f162);
    DAT_14cbaadc0 = '\x01';
  }
  return;
}



// FUNCTION 1458851e0 FUN_1458851e0 body=37 status=ok
// SIG undefined FUN_1458851e0(void)

void FUN_1458851e0(void)

{
  if (DAT_14cb5e3d0 == '\0') {
    FUN_145885206(FUN_1486a14b0);
    DAT_14cb5e3d0 = '\x01';
  }
  return;
}



// FUNCTION 145885206 FUN_145885206 body=8 status=ok
// SIG undefined FUN_145885206(void)

void FUN_145885206(undefined *param_1)

{
  PTR_FUN_14c7623d0 = param_1;
  return;
}



// FUNCTION 14588520e FUN_14588520e body=77 status=ok
// SIG undefined FUN_14588520e(void)

undefined8 * FUN_14588520e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd26fa0;
  FUN_144a75412(param_1 + 0x13);
  FUN_144a75412(param_1 + 0x12);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588525c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145885262 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145885268 FUN_145885268 body=157 status=ok
// SIG undefined FUN_145885268(void)

void FUN_145885268(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b28c270;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0xf00000d0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0x3f800000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  return;
}



// FUNCTION 145885306 FUN_145885306 body=46 status=ok
// SIG undefined FUN_145885306(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145885306(void)

{
  FUN_145885334(&DAT_14cb01d48);
  _DAT_14cb01d48 = &PTR_FUN_14aa6e240;
  atexit((_func_5014 *)&LAB_143696e53);
  return;
}



// FUNCTION 145885334 FUN_145885334 body=7 status=ok
// SIG undefined FUN_145885334(void)

void FUN_145885334(undefined8 param_1)

{
  FUN_14588533c(param_1,0);
  return;
}



// FUNCTION 14588533c FUN_14588533c body=196 status=ok
// SIG undefined FUN_14588533c(void)

undefined8 * FUN_14588533c(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f9f120;
  FUN_1411316ac();
  FUN_14129a8e8(&DAT_14c99a488,param_1 + 1,param_1,FUN_146f5b900);
  FUN_141131722();
  FUN_14129a8e8(&DAT_14c99a4a8,param_1 + 2,param_1,FUN_146f5b936);
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_14580f142();
    FUN_14129a8e8(&DAT_14c99a4c8,&local_28,param_1,&LAB_146f5b96c);
    param_1[3] = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885408 FUN_145885408 body=91 status=ok
// SIG undefined FUN_145885408(void)

undefined8 FUN_145885408(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 2) % 2 & 0x80000001U) != 1) ||
     ((*(byte *)((longlong)&DAT_14ca814d8 + (ulonglong)*param_1 * 0x3c + 3) & 2) != 0)) {
    cVar1 = FUN_144880847((ulonglong)*param_1,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_140bb8ec0(param_1,1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145885470 FUN_145885470 body=84 status=ok
// SIG undefined FUN_145885470(void)

longlong * FUN_145885470(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1458854ca FUN_1458854ca body=221 status=ok
// SIG undefined FUN_1458854ca(void)

longlong FUN_1458854ca(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabd9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147848d99;
    local_40 = &LAB_14636b38c;
    local_48 = L"Mass";
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/MassEntity",L"MassProcessor",&DAT_14cabd9a0,&DAT_147848d98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabd9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458855ae FUN_1458855ae body=221 status=ok
// SIG undefined FUN_1458855ae(void)

longlong FUN_1458855ae(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabff20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147861891;
    local_40 = &LAB_145c018c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/Engine",L"EdGraphPin_Deprecated",&DAT_14cabff20,&DAT_147861890);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabff20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885692 FUN_145885692 body=221 status=ok
// SIG undefined FUN_145885692(void)

longlong FUN_145885692(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac8558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a87cd;
    local_40 = &LAB_14058a785;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshSocket",&DAT_14cac8558,&DAT_1478a87cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885776 FUN_145885776 body=221 status=ok
// SIG undefined FUN_145885776(void)

longlong FUN_145885776(void)

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
  if (DAT_14cb0e5c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d95fbf;
    local_40 = FUN_14640bb82;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"VectorField",&DAT_14cb0e5c8,&DAT_147d95fbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0e5c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588585a FUN_14588585a body=221 status=ok
// SIG undefined FUN_14588585a(void)

longlong FUN_14588585a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1de60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e95e3d;
    local_40 = FUN_1464254f6;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayTasks",L"GameplayTaskResource",&DAT_14cb1de60,&DAT_147e95e3c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1de60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588593e FUN_14588593e body=221 status=ok
// SIG undefined FUN_14588593e(void)

longlong FUN_14588593e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb20808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147f01b51;
    local_40 = FUN_14642f8cd;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AIModule",L"AISenseEvent",&DAT_14cb20808,&DAT_147f01b50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885a22 FUN_145885a22 body=221 status=ok
// SIG undefined FUN_145885a22(void)

longlong FUN_145885a22(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb42260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481cfe39;
    local_40 = &LAB_145837280;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraParameterCollection",&DAT_14cb42260,&DAT_1481cfe38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885b06 FUN_145885b06 body=221 status=ok
// SIG undefined FUN_145885b06(void)

longlong FUN_145885b06(void)

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
  if (DAT_14cb4a630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14840d157;
    local_40 = FUN_14648a38e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveGizmoBuilder",&DAT_14cb4a630,
                  &DAT_14840d156);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885bea FUN_145885bea body=221 status=ok
// SIG undefined FUN_145885bea(void)

longlong FUN_145885bea(void)

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
  if (DAT_14cb4b0b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484340f7;
    local_40 = FUN_14648d6a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoViewContext",&DAT_14cb4b0b0,
                  &DAT_1484340f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b0b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885cce FUN_145885cce body=221 status=ok
// SIG undefined FUN_145885cce(void)

longlong FUN_145885cce(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb51158 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1485ee651;
    local_40 = &LAB_1459a648d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineClutterEntry",&DAT_14cb51158,&DAT_1485ee650);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51158;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885db2 FUN_145885db2 body=221 status=ok
// SIG undefined FUN_145885db2(void)

longlong FUN_145885db2(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5d260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486962c1;
    local_40 = &LAB_1464da872;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject",&DAT_14cb5d260,&DAT_1486962c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885e96 FUN_145885e96 body=221 status=ok
// SIG undefined FUN_145885e96(void)

longlong FUN_145885e96(void)

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
  if (DAT_14cb91968 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f30f5;
    local_40 = FUN_14656a874;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconCondition",&DAT_14cb91968,&DAT_1489f30f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91968;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145885f7a FUN_145885f7a body=221 status=ok
// SIG undefined FUN_145885f7a(void)

longlong FUN_145885f7a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb96528 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148a57ca3;
    local_40 = &LAB_146047455;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/Shift",L"ShiftSession",&DAT_14cb96528,&DAT_148a57ca2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb96528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588605e FUN_14588605e body=221 status=ok
// SIG undefined FUN_14588605e(void)

longlong FUN_14588605e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb99fb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148af3b59;
    local_40 = &LAB_14659172c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingRegistry",&DAT_14cb99fb8,&DAT_148af3b58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99fb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145886142 FUN_145886142 body=221 status=ok
// SIG undefined FUN_145886142(void)

longlong FUN_145886142(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc070e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1491ae67d;
    local_40 = &LAB_145df181e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/ControlRig",L"ControlRigShapeLibrary",&DAT_14cc070e0,&DAT_1491ae67c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc070e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145886226 FUN_145886226 body=221 status=ok
// SIG undefined FUN_145886226(void)

longlong FUN_145886226(void)

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
  if (DAT_14cc0d8d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1493507f4;
    local_40 = FUN_146722a1f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/VariantManagerContent",L"LevelVariantSets",&DAT_14cc0d8d0,FUN_1467229f8)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0d8d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145886304 FUN_145886304 body=40 status=ok
// SIG undefined FUN_145886304(void)

undefined8 FUN_145886304(undefined8 param_1,int param_2)

{
  FUN_14588632c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14588632c FUN_14588632c body=120 status=ok
// SIG undefined FUN_14588632c(void)

void FUN_14588632c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1704d0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1458863a4(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1458863dc(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458863a4 FUN_1458863a4 body=55 status=ok
// SIG undefined FUN_1458863a4(void)

void FUN_1458863a4(longlong *param_1)

{
  FUN_145886414(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458863dc FUN_1458863dc body=55 status=ok
// SIG undefined FUN_1458863dc(void)

void FUN_1458863dc(longlong *param_1)

{
  FUN_14129aca4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145886414 FUN_145886414 body=388 status=ok
// SIG undefined FUN_145886414(void)

void FUN_145886414(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_145812b28(*local_70 + (longlong)iStack_54 * 0x38 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588659a FUN_14588659a body=63 status=ok
// SIG undefined FUN_14588659a(void)

void FUN_14588659a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1458865da(param_1);
    FUN_14129aec6(param_1);
    return;
  }
  FUN_14129aec6(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14701b4b2(param_1);
  return;
}



// FUNCTION 1458865da FUN_1458865da body=335 status=ok
// SIG undefined FUN_1458865da(void)

void FUN_1458865da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14588672a FUN_14588672a body=174 status=ok
// SIG undefined FUN_14588672a(void)

void FUN_14588672a(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  local_38 = param_1;
  local_30 = &local_38;
  FUN_14129af20(&DAT_14cad2db0,&local_30);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad2d88);
  local_38 = param_1;
  local_30 = &local_38;
  FUN_14129af20(&DAT_14cad2dc0,&local_30);
  FUN_1458867da(param_1 + 0x350,0);
  FUN_1400fb146(param_1 + 0x4c0,0);
  FUN_1400f7f98(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458867da FUN_1458867da body=72 status=ok
// SIG undefined FUN_1458867da(void)

longlong * FUN_1458867da(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != param_2) {
    *param_1 = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
    }
    if (lVar2 != 0) {
      piVar1 = (int *)(lVar2 + 0x68);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_140414380(lVar2,0);
        FUN_14493c441(lVar2 + 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 145886822 FUN_145886822 body=152 status=ok
// SIG undefined FUN_145886822(void)

void FUN_145886822(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  FUN_14129aff4();
  lVar5 = *(longlong *)(param_1 + 0x48);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  if (*(char *)(lVar5 + 0xa0) != '\x01') {
    return;
  }
  bVar8 = *(char *)(lVar5 + 0x80) == '\0';
  puVar6 = (undefined8 *)(lVar4 + 0x108);
  if (bVar8) {
    puVar6 = (undefined8 *)(lVar4 + 0xd8);
  }
  *puVar6 = *(undefined8 *)(param_1 + 0xe8);
  puVar7 = (undefined4 *)(lVar4 + 0x110);
  if (bVar8) {
    puVar7 = (undefined4 *)(lVar4 + 0xe0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xf4);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xfc);
  *puVar7 = *(undefined4 *)(param_1 + 0xf0);
  puVar7[1] = uVar1;
  puVar7[2] = uVar2;
  puVar7[3] = uVar3;
  lVar5 = lVar4 + 0x120;
  if (bVar8) {
    lVar5 = lVar4 + 0xf0;
  }
  FUN_144a787a6(lVar5,param_1 + 0x100);
  return;
}



// FUNCTION 1458868c2 FUN_1458868c2 body=62 status=ok
// SIG undefined FUN_1458868c2(void)

void FUN_1458868c2(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145886900 FUN_145886900 body=63 status=ok
// SIG undefined FUN_145886900(void)

longlong FUN_145886900(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145886956(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_14588693f(lVar2);
  return lVar2;
}



// FUNCTION 14588693f FUN_14588693f body=22 status=ok
// SIG undefined FUN_14588693f(void)

void FUN_14588693f(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 4);
  return;
}



// FUNCTION 145886956 FUN_145886956 body=147 status=ok
// SIG undefined FUN_145886956(void)

void FUN_145886956(longlong param_1,int param_2)

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



// FUNCTION 1458869ea FUN_1458869ea body=438 status=ok
// SIG undefined FUN_1458869ea(void)

void FUN_1458869ea(int *param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_14caf15e0;
  if (DAT_14caf15e0 != 0) {
    uVar2 = FUN_1447addd0(param_1,0x10);
    puVar3 = &DAT_14caf15d0;
    if (DAT_14caf15d8 != (undefined *)0x0) {
      puVar3 = DAT_14caf15d8;
    }
    iVar7 = *(int *)(puVar3 + (longlong)(int)(iVar7 - 1U & uVar2) * 4);
    while (iVar8 = iVar7, iVar8 != -1) {
      lVar5 = (longlong)iVar8 * 0x20;
      iVar7 = *(int *)(DAT_14caf1598 + 0x18 + lVar5);
      if ((((*(int *)(DAT_14caf1598 + lVar5) == *param_1) &&
           (*(int *)(DAT_14caf1598 + 4 + lVar5) == param_1[1])) &&
          (*(int *)(DAT_14caf1598 + 8 + lVar5) == param_1[2])) &&
         (*(int *)(DAT_14caf1598 + 0xc + lVar5) == param_1[3])) {
        do {
          if (*(longlong *)(DAT_14caf1598 + 0x10 + lVar5) == param_2) {
            puVar3 = &DAT_14caf15d0;
            if (DAT_14caf15d8 != (undefined *)0x0) {
              puVar3 = DAT_14caf15d8;
            }
            lVar5 = (longlong)*(int *)(DAT_14caf1598 + 0x1c + (longlong)iVar8 * 0x20);
            iVar7 = *(int *)(puVar3 + lVar5 * 4);
            if (iVar7 == iVar8) {
              piVar6 = (int *)(puVar3 + lVar5 * 4);
            }
            else {
              do {
                piVar6 = (int *)(DAT_14caf1598 + (longlong)iVar7 * 0x20 + 0x18);
                iVar7 = *piVar6;
              } while (iVar7 != iVar8);
            }
            *piVar6 = *(int *)(DAT_14caf1598 + (longlong)iVar8 * 0x20 + 0x18);
            lVar5 = DAT_14caf1598;
            if (DAT_14caf15cc != 0) {
              *(int *)(DAT_14caf1598 + (longlong)DAT_14caf15c8 * 0x20) = iVar8;
            }
            *(undefined4 *)(lVar5 + (longlong)iVar8 * 0x20) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14caf15cc) {
              iVar7 = DAT_14caf15c8;
            }
            *(int *)(lVar5 + 4 + (longlong)iVar8 * 0x20) = iVar7;
            DAT_14caf15cc = DAT_14caf15cc + 1;
            puVar4 = &DAT_14caf15a8;
            if (DAT_14caf15b8 != (undefined4 *)0x0) {
              puVar4 = DAT_14caf15b8;
            }
            iVar7 = iVar8 + 0x1f;
            if (-1 < iVar8) {
              iVar7 = iVar8;
            }
            bVar1 = (byte)iVar8 & 0x1f;
            DAT_14caf15c8 = iVar8;
            puVar4[iVar7 >> 5] = puVar4[iVar7 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
            return;
          }
          do {
            iVar8 = iVar7;
            if (iVar8 == -1) {
              return;
            }
            lVar5 = (longlong)iVar8 * 0x20;
            iVar7 = *(int *)(DAT_14caf1598 + 0x18 + lVar5);
          } while (((*(int *)(DAT_14caf1598 + lVar5) != *param_1) ||
                   (*(int *)(DAT_14caf1598 + 4 + lVar5) != param_1[1])) ||
                  ((*(int *)(DAT_14caf1598 + 8 + lVar5) != param_1[2] ||
                   (*(int *)(DAT_14caf1598 + 0xc + lVar5) != param_1[3]))));
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 145886ba0 FUN_145886ba0 body=184 status=ok
// SIG undefined FUN_145886ba0(void)

void FUN_145886ba0(longlong *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,3);
    (**(code **)(*plVar1 + 0x128))(plVar1,*param_3);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar2 = FUN_14129aff6();
    FUN_1401e1be1(plVar1,param_4,uVar2);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_4);
    if (*(int *)(param_5 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_5;
    }
    (**(code **)(*plVar1 + 0xd0))(plVar1,puVar3);
                    /* WARNING: Could not recover jumptable at 0x000145886c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
  return;
}



// FUNCTION 145886c58 FUN_145886c58 body=40 status=ok
// SIG undefined FUN_145886c58(void)

undefined8 FUN_145886c58(undefined8 param_1,int param_2)

{
  FUN_145886c80();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145886c80 FUN_145886c80 body=74 status=ok
// SIG undefined FUN_145886c80(void)

void FUN_145886c80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b148ab0;
  plVar3 = (longlong *)param_1[0x7d];
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
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145886cca FUN_145886cca body=54 status=ok
// SIG undefined FUN_145886cca(void)

bool FUN_145886cca(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  
  FUN_14129b030();
  uVar1 = FUN_140343d7a(param_1);
  lVar2 = FUN_140a32438(uVar1);
  if (lVar2 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = (*(byte *)(lVar2 + 0x58) & 0xfe) != 2;
  }
  return bVar3;
}



// FUNCTION 145886d00 FUN_145886d00 body=61 status=ok
// SIG undefined FUN_145886d00(void)

void FUN_145886d00(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    FUN_145886d3e(param_1 + -0xda8,uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 145886d3e FUN_145886d3e body=96 status=ok
// SIG undefined FUN_145886d3e(void)

void FUN_145886d3e(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadcf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145886da0 FUN_145886da0 body=179 status=ok
// SIG undefined FUN_145886da0(void)

longlong FUN_145886da0(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0x2000000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_145886e54(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(byte *)(param_1 + 0x1a1) = *(byte *)(param_1 + 0x1a1) & 0xfe;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *(undefined8 **)(param_1 + 0x1b8) = puVar1;
  *(undefined8 **)(param_1 + 0x1b0) = puVar1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return param_1;
}



// FUNCTION 145886e54 FUN_145886e54 body=102 status=ok
// SIG undefined FUN_145886e54(void)

undefined8 * FUN_145886e54(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14473de44(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_144718544(param_1 + 0xb);
  return param_1;
}



// FUNCTION 145886ec6 FUN_145886ec6 body=164 status=ok
// SIG undefined FUN_145886ec6(void)

undefined8 * FUN_145886ec6(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b72ce90;
  param_1[0x72] = 0;
  uVar2 = DAT_14cbc65b0;
  uVar3 = FUN_145886f6a();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = param_1[0x72];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 145886f6a FUN_145886f6a body=228 status=ok
// SIG undefined FUN_145886f6a(void)

longlong FUN_145886f6a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba94f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_148c0607b;
    local_40 = &LAB_1459022d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCritterExclusionAreaComponent",&DAT_14cba94f8,
                  &DAT_148c0607a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba94f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145887050 FUN_145887050 body=40 status=ok
// SIG undefined FUN_145887050(void)

undefined8 FUN_145887050(undefined8 param_1,int param_2)

{
  FUN_145887078();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145887078 FUN_145887078 body=83 status=ok
// SIG undefined FUN_145887078(void)

void FUN_145887078(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a865560;
  param_1[5] = &PTR_LAB_14a865b50;
  param_1[6] = &PTR_LAB_14a865b90;
  puVar2 = (undefined8 *)param_1[0x61];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1458870ee FUN_1458870ee body=156 status=ok
// SIG undefined FUN_1458870ee(void)

void FUN_1458870ee(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_140f40cc2();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3ca40;
  *(int *)(param_1 + 2) = (int)param_1[2] + 800;
  return;
}



// FUNCTION 14588718a FUN_14588718a body=62 status=ok
// SIG undefined FUN_14588718a(void)

void FUN_14588718a(longlong *param_1)

{
  FUN_1458871c8();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458871c8 FUN_1458871c8 body=66 status=ok
// SIG undefined FUN_1458871c8(void)

void FUN_1458871c8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_14588720a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 14588720a FUN_14588720a body=83 status=ok
// SIG undefined FUN_14588720a(void)

void FUN_14588720a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760f98(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145887268 FUN_145887268 body=135 status=ok
// SIG undefined FUN_145887268(void)

undefined8 * FUN_145887268(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac1cb30;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x7f7fffff;
  FUN_1458872f0((longlong)param_1 + 0x3c);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) & 0xfb;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar1 = param_1[2];
    lVar3 = *(longlong *)(lVar1 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar1);
      lVar3 = *(longlong *)(lVar1 + 0x110);
    }
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)(lVar3 + 0x3c);
    param_1[8] = uVar2;
  }
  return param_1;
}



// FUNCTION 1458872f0 FUN_1458872f0 body=136 status=ok
// SIG undefined FUN_1458872f0(void)

undefined1 * FUN_1458872f0(undefined1 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20bd0) {
    FUN_144b3d300(&DAT_14cb20bd0);
    if (DAT_14cb20bd0 == -1) {
      DAT_14cb20bc4 = 0xff;
      FUN_1446f470e(&DAT_14cb20bc8,L"Invalid",1);
      _Init_thread_footer(&DAT_14cb20bd0);
    }
  }
  *param_1 = DAT_14cb20bc4;
  *(undefined8 *)(param_1 + 4) = DAT_14cb20bc8;
  return param_1;
}



// FUNCTION 145887378 FUN_145887378 body=9 status=ok
// SIG undefined FUN_145887378(void)

void FUN_145887378(longlong param_1)

{
  FUN_145887382(param_1 + 0x10);
  return;
}



// FUNCTION 145887382 FUN_145887382 body=87 status=ok
// SIG undefined FUN_145887382(void)

void FUN_145887382(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b258250;
  FUN_1458873d9(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b258290;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458873d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458873d9 FUN_1458873d9 body=38 status=ok
// SIG undefined FUN_1458873d9(void)

void FUN_1458873d9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145887400(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145887400 FUN_145887400 body=60 status=ok
// SIG undefined FUN_145887400(void)

void FUN_145887400(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14588743c FUN_14588743c body=99 status=ok
// SIG undefined FUN_14588743c(void)

void FUN_14588743c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014588749b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014588747e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1458874a0 FUN_1458874a0 body=167 status=ok
// SIG undefined FUN_1458874a0(void)

void FUN_1458874a0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  FUN_14129c41e(param_1,&DAT_14cbd94e8,1);
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_1458874f0;
  if (*(char *)(lVar2 + 0xb0) == '\0') {
    if (*(int *)(lVar2 + 0xb4) == 0) {
      iVar4 = 1;
      goto LAB_14588752b;
    }
  }
  else {
    iVar4 = *(int *)(lVar2 + 0xb4) + 1;
LAB_14588752b:
    *(undefined1 *)(lVar2 + 0xb0) = 0;
    *(int *)(lVar2 + 0xb4) = iVar4;
  }
  puVar1 = *(ushort **)(lVar2 + 0x80);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_1458874f0:
  lVar2 = FUN_140391552(param_1);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar3 = &PTR_FUN_14b9c4c00;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 1458875a0 FUN_1458875a0 body=203 status=ok
// SIG undefined FUN_1458875a0(void)

undefined8 * FUN_1458875a0(undefined8 *param_1)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140056680(local_28,&DAT_149e0209e);
  FUN_140e830ae(param_1,local_2c,local_28,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,&DAT_149e01eac);
  FUN_140e830ae(param_1,local_2c,local_28,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14588766c FUN_14588766c body=47 status=ok
// SIG undefined FUN_14588766c(void)

bool FUN_14588766c(longlong *param_1)

{
  float extraout_XMM0_Da;
  
  (**(code **)(*param_1 + 0x3c8))();
  return 0.0001 <= ABS(extraout_XMM0_Da + -1.0);
}



// FUNCTION 14588769c FUN_14588769c body=86 status=ok
// SIG undefined FUN_14588769c(void)

float FUN_14588769c(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x27);
  if (fVar2 <= 0.0009999999) {
    cVar1 = (**(code **)(*param_1 + 0x3b8))();
    fVar2 = 1.0;
    if ((cVar1 != '\n') && (cVar1 != '\r')) {
      fVar2 = *(float *)(&DAT_14aad5a58 +
                        (ulonglong)((*(byte *)((longlong)param_1 + 0x15d) & 4) == 0) * 4);
    }
  }
  return fVar2;
}



// FUNCTION 14588771a FUN_14588771a body=40 status=ok
// SIG undefined FUN_14588771a(void)

undefined8 FUN_14588771a(undefined8 param_1,int param_2)

{
  FUN_145887742();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145887742 FUN_145887742 body=52 status=ok
// SIG undefined FUN_145887742(void)

void FUN_145887742(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b103fc0;
  FUN_144a2da94(param_1 + 7);
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145887776 FUN_145887776 body=158 status=ok
// SIG undefined FUN_145887776(void)

void FUN_145887776(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_145887816();
  plVar3 = *(longlong **)(param_1 + 0x75e0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145887790;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x75d8) != 0) {
      thunk_FUN_1411b6e1a(*(longlong *)(param_1 + 0x75d8),0);
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
LAB_145887790:
  if ((*(longlong *)(&DAT_00006850 + param_1) != 0) && (lVar6 = FUN_1447210f0(param_1), lVar6 != 0))
  {
    *(float *)(*(longlong *)(&DAT_00006850 + param_1) + 0x4380) = (float)*(double *)(lVar6 + 0x6d0);
    return;
  }
  return;
}



// FUNCTION 145887816 FUN_145887816 body=10 status=ok
// SIG undefined FUN_145887816(void)

void FUN_145887816(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145887819. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c8))();
  return;
}



// FUNCTION 145887820 FUN_145887820 body=72 status=ok
// SIG undefined FUN_145887820(void)

undefined8 * FUN_145887820(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7c07a0;
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  FUN_145887868(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145887868 FUN_145887868 body=66 status=ok
// SIG undefined FUN_145887868(void)

void FUN_145887868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6ca430;
  FUN_1447cd778(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_1458878aa(param_1);
  return;
}



// FUNCTION 1458878aa FUN_1458878aa body=145 status=ok
// SIG undefined FUN_1458878aa(void)

void FUN_1458878aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b909a50;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 14588793c FUN_14588793c body=55 status=ok
// SIG undefined FUN_14588793c(void)

void FUN_14588793c(longlong *param_1)

{
  FUN_145887974(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145887974 FUN_145887974 body=121 status=ok
// SIG undefined FUN_145887974(void)

void FUN_145887974(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1458879f4 FUN_1458879f4 body=57 status=ok
// SIG undefined FUN_1458879f4(void)

void FUN_1458879f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23428 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23428 = FUN_140002ddd(FUN_14643daff,uVar1,L"GpsTestSettings_IsPlayer");
  }
  return;
}



// FUNCTION 145887a34 FUN_145887a34 body=57 status=ok
// SIG undefined FUN_145887a34(void)

void FUN_145887a34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59d00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59d00 = FUN_140002ddd(FUN_1464c6fc5,uVar1,L"GbxAnimNode_RiderController");
  }
  return;
}



// FUNCTION 145887a6e FUN_145887a6e body=38 status=ok
// SIG undefined FUN_145887a6e(void)

undefined8 FUN_145887a6e(undefined8 param_1,int param_2)

{
  FUN_145887a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145887a94 FUN_145887a94 body=120 status=ok
// SIG undefined FUN_145887a94(void)

void FUN_145887a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a34acb0;
  param_1[0x10] = &PTR_FUN_14a34ace0;
  FUN_14129c6ba();
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145887b0c(param_1);
  return;
}



// FUNCTION 145887b0c FUN_145887b0c body=74 status=ok
// SIG undefined FUN_145887b0c(void)

void FUN_145887b0c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a1e64f0;
  FUN_14129c6ba();
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145887b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



// FUNCTION 145887b56 FUN_145887b56 body=232 status=ok
// SIG undefined FUN_145887b56(void)

void FUN_145887b56(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145887c40(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145887c40 FUN_145887c40 body=55 status=ok
// SIG undefined FUN_145887c40(void)

undefined8 FUN_145887c40(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0))) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x10 +
              (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145887c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2c0))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145887c78 FUN_145887c78 body=40 status=ok
// SIG undefined FUN_145887c78(void)

undefined8 FUN_145887c78(undefined8 param_1,int param_2)

{
  FUN_145887ca0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145887ca0 FUN_145887ca0 body=82 status=ok
// SIG undefined FUN_145887ca0(void)

void FUN_145887ca0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b4770;
  param_1[0x1f] = &PTR_FUN_14a4b4ae0;
  if ((longlong *)param_1[0xfe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xfe] + 0x10))();
  }
  if (param_1[0xfc] != 0) {
    FUN_1400020a8();
  }
  FUN_14129c886(param_1);
  return;
}



// FUNCTION 145887cf2 FUN_145887cf2 body=39 status=ok
// SIG undefined FUN_145887cf2(void)

void * FUN_145887cf2(void *param_1,int param_2)

{
  FUN_145887d1a();
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 145887d1a FUN_145887d1a body=94 status=ok
// SIG undefined FUN_145887d1a(void)

void FUN_145887d1a(Property *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b455680;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140066d2a(param_1 + 0x30);
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145887d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Property::~Property(param_1);
  return;
}



// FUNCTION 145887d82 FUN_145887d82 body=130 status=ok
// SIG undefined FUN_145887d82(void)

void FUN_145887d82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b827680;
  FUN_14129c8ee(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_145887e04(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145887e9c(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145887e04 FUN_145887e04 body=41 status=ok
// SIG undefined FUN_145887e04(void)

void FUN_145887e04(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145887e2e(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 145887e2e FUN_145887e2e body=110 status=ok
// SIG undefined FUN_145887e2e(void)

void FUN_145887e2e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14129c8ee(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145887e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145887e9c FUN_145887e9c body=233 status=ok
// SIG undefined FUN_145887e9c(void)

void FUN_145887e9c(longlong param_1)

{
  FUN_140f9c02e(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_145887f85(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145887f85 FUN_145887f85 body=46 status=ok
// SIG undefined FUN_145887f85(void)

void FUN_145887f85(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145887fb8 FUN_145887fb8 body=106 status=ok
// SIG undefined FUN_145887fb8(void)

void FUN_145887fb8(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(puVar1 + 5) = 0x3f000000;
  uVar2 = DAT_14c8464e8;
  puVar1[6] = DAT_14c8464e0;
  puVar1[7] = uVar2;
  puVar1[8] = DAT_14c8464f0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *puVar1 = &PTR_FUN_14acda3b0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 1;
  return;
}



// FUNCTION 145888022 FUN_145888022 body=103 status=ok
// SIG undefined FUN_145888022(void)

ulonglong FUN_145888022(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14588806c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14588806c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}


