// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14034cca6 FUN_14034cca6 body=152 status=ok
// SIG undefined FUN_14034cca6(void)

undefined8 * FUN_14034cca6(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = 0;
  _Src = (undefined8 *)(param_2 + 8);
  bVar1 = *(byte *)(param_2 + 0x28);
  uVar2 = *(ushort *)(param_2 + 0x20);
  *(ushort *)(param_1 + 4) = uVar2;
  _Dst = param_1 + 1;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    param_1[1] = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  uVar4 = (ulonglong)((uint)bVar1 * 0x120);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 14034cd3e FUN_14034cd3e body=601 status=ok
// SIG undefined FUN_14034cd3e(void)

ulonglong FUN_14034cd3e(longlong param_1)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  int local_88;
  int local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  int local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0xf4) == '\0') {
    local_b0[0] = '\0';
    local_88 = 0;
    FUN_1456bb102(local_b0);
    piVar10 = &local_80;
    FUN_1447c3578(param_1 + 0xb8,piVar10,local_b0);
    if (local_60 == 1) {
      bVar13 = local_80 != 0;
      uVar4 = 1;
    }
    else {
      piVar12 = &local_58;
      FUN_1400b56fe(piVar12,&local_80,1);
      bVar13 = local_58 != 0;
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          piVar12 = (int *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(piVar12);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      bVar13 = local_38 != 0 && bVar13;
      uVar4 = (uint)local_60;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_68) {
        piVar10 = (int *)CONCAT44(uStack_7c,local_80);
      }
      (*pcVar1)(piVar10);
    }
    if (0x18 < local_68) {
      FUN_1400020a8(CONCAT44(uStack_7c,local_80));
    }
    lVar3 = DAT_14c9a3da0;
    if ((longlong)local_88 != 0) {
      lVar9 = (longlong)local_88 + -1;
      lVar11 = lVar9 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
      if (*(longlong *)(lVar3 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar3 = DAT_14c9a3da0;
      iVar8 = (int)lVar9;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar3 + lVar11) = 0xffffffff;
      iVar5 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar5 = DAT_14c9a3dd0;
      }
      *(int *)(lVar3 + 4 + lVar11) = iVar5;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar6 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar6 = DAT_14c9a3dc0;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      bVar2 = (byte)lVar9 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
           (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      local_88 = 0;
    }
    if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
      LOCK();
      piVar10 = (int *)((longlong)local_a0 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)local_b0 >> 8),bVar13) ^ 1;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034cf98 FUN_14034cf98 body=370 status=ok
// SIG undefined FUN_14034cf98(void)

void FUN_14034cf98(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xf88);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 0x11) {
    uVar6 = 0x10;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (0x10 < *(uint *)(param_1 + 0xf8c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0xf8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14034d02d;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14034d02d:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0xf8)) {
      uVar6 = uVar4 / 0xf8 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xf8c) = (int)uVar6;
  FUN_14034d10a(param_1,param_2,uVar6,0xf8);
  return;
}



// FUNCTION 14034d10a FUN_14034d10a body=151 status=ok
// SIG undefined FUN_14034d10a(void)

void FUN_14034d10a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xf8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xf80),param_1,(longlong)param_2 * 0xf8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf80,param_2,param_3,param_4);
  return;
}



// FUNCTION 14034d1a2 FUN_14034d1a2 body=255 status=ok
// SIG undefined FUN_14034d1a2(void)

ulonglong FUN_14034d1a2(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 unaff_RDI;
  longlong lVar8;
  
  cVar5 = (**(code **)(*param_1 + 0x28))();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (cVar5 != '\0') {
    lVar4 = param_1[0x7e];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = param_1[0x7d];
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar8);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*plVar3 + 0x78))(plVar3), cVar5 != '\0')) {
          if (*(char *)((longlong)plVar3 + 0x51) == '\x01') {
            bVar6 = *(byte *)(plVar3 + 10);
          }
          else {
            bVar1 = *(byte *)(plVar3[9] + 0x38);
            bVar6 = (**(code **)(*plVar3 + 0xc0))(plVar3);
            bVar6 = bVar6 ^ bVar1;
            *(byte *)(plVar3 + 10) = bVar6;
            *(undefined1 *)((longlong)plVar3 + 0x51) = 1;
          }
          if ((bVar6 & 1) == 0) goto LAB_14034d230;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar8);
    }
    cVar5 = (**(code **)(*(longlong *)param_1[9] + 0x90))();
    if (cVar5 != '\0') {
      lVar4 = param_1[0x80];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = param_1[0x7f];
        lVar8 = 0;
        do {
          if ((*(longlong **)(lVar2 + lVar8) != (longlong *)0x0) &&
             (cVar5 = (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x78))(), cVar5 == '\0'))
          goto LAB_14034d22e;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar8);
      }
                    /* WARNING: Could not recover jumptable at 0x00014034d227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
      return uVar7;
    }
LAB_14034d22e:
    uVar7 = 0;
  }
LAB_14034d230:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14034d2a2 FUN_14034d2a2 body=45 status=ok
// SIG undefined FUN_14034d2a2(void)

undefined8 FUN_14034d2a2(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014034d2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)param_1[9] + 0x90))();
    return uVar2;
  }
  return 1;
}



// FUNCTION 14034d2d0 FUN_14034d2d0 body=81 status=ok
// SIG undefined FUN_14034d2d0(void)

ulonglong FUN_14034d2d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x420);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x418);
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar5) != 0) && (cVar3 = FUN_14034d1a2(), cVar3 == '\0')) {
        uVar4 = 0;
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14034d321 FUN_14034d321 body=30 status=ok
// SIG undefined FUN_14034d321(void)

void FUN_14034d321(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14034d33f FUN_14034d33f body=148 status=ok
// SIG undefined FUN_14034d33f(void)

void FUN_14034d33f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0xffffffffffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
    param_1 = param_1 + 0x14;
  }
  return;
}



// FUNCTION 14034d3d3 FUN_14034d3d3 body=194 status=ok
// SIG undefined FUN_14034d3d3(void)

void FUN_14034d3d3(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      if ((((*(byte *)(lVar1 + 0x125b0 + lVar4) & 2) == 0) &&
          (*(char *)(lVar1 + 0x30c8 + lVar4) == '\0')) &&
         (((*(char *)(lVar1 + 0x23f2 + lVar4) == '\0' &&
           (*(char *)(lVar1 + 0x23f5 + lVar4) != '\x01')) || (*(int *)(lVar1 + 0x1dd0 + lVar4) != 2)
          ))) {
        local_48 = *param_3;
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        FUN_14034d496(param_1,lVar1 + lVar4,&local_48);
        iVar2 = (int)param_2[1];
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x13c10;
    } while (lVar3 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14034d496 FUN_14034d496 body=997 status=ok
// SIG undefined FUN_14034d496(void)

void FUN_14034d496(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_78;
  ulonglong *local_70;
  undefined1 local_61;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *param_3;
  bVar2 = *(byte *)(lVar7 + 0x91);
  if (((bVar2 != 1) && (lVar7 != param_3[1])) && ((*(byte *)(lVar7 + 0x61) & 0x10) == 0)) {
    if (DAT_14ca84e20 == '\x01') {
      if ((*(char *)(lVar7 + 0x92) == '\x04') || (*(char *)(lVar7 + 0x92) == '\x01')) {
        uVar10 = *(undefined2 *)(lVar7 + 0x8e);
      }
      else {
        uVar10 = 0;
      }
      uVar3 = *(undefined1 *)(lVar7 + 0x90);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar11 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x48);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar11 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar6;
      puVar11[1] = *(undefined8 *)(lVar7 + 8);
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 1;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
      *puVar11 = &PTR_FUN_14a203858;
      *(undefined2 *)(puVar11 + 5) = 0;
      *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar3;
      *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar10;
      *(undefined1 *)(puVar11 + 6) = 5;
      *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
      puVar11[7] = lVar7;
      iVar5 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
        FUN_1447568fc(param_1 + 0x198,iVar5);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    }
    else {
      puVar11 = (undefined8 *)0x0;
    }
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar12 + 0x26;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8(puVar1,0x140);
      puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar6 = puVar12 + 0x26;
    }
    *puVar1 = (ulonglong)puVar6;
    *puVar12 = &PTR_FUN_14a2f1680;
    local_78 = puVar12 + 2;
    puVar12[5] = 0;
    *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
    *(undefined4 *)(puVar12 + 4) = 0;
    lVar7 = 0x42;
    do {
      *(undefined1 (*) [16])((longlong)puVar12 + lVar7 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar12 + lVar7 + -2) = 0xffff0000;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x102);
    *(undefined4 *)((longlong)puVar12 + 0x104) = 0;
    *(undefined1 (*) [16])(puVar12 + 0x1e) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar12 + 0x20) = 0;
    *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x10c) = 0xffffffff;
    *(undefined4 *)(puVar12 + 0x22) = 0xffffffff;
    *(undefined4 *)((longlong)puVar12 + 0x114) = 0xffffffff;
    *(undefined4 *)(puVar12 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x11c) = 0;
    puVar12[0x24] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    local_70 = puVar1;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
    }
    puVar1 = local_70;
    puVar6 = local_78;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar12;
    lVar7 = *param_3;
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar7 + 0xac);
    }
    puVar12[2] = lVar7;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = 0x60;
    puVar12[5] = puVar11;
    bVar4 = *(byte *)(param_3[1] + 0x24);
    puVar12[6] = param_3[1];
    puVar12[7] = 0;
    *(byte *)(puVar12 + 8) = bVar4 >> 2 & 1;
    *(undefined1 *)((longlong)puVar12 + 0x41) = 0;
    *(undefined2 *)((longlong)puVar12 + 0x42) = 0xffff;
    lVar7 = *param_3;
    FUN_1472e005a();
    FUN_140069376(param_1);
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar9 + 0x3b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar9 + 0x3b;
    }
    *puVar1 = (ulonglong)puVar12;
    local_60 = puVar6;
    local_58 = DAT_14ca47438;
    if (DAT_14ca47438 != 0) {
      LOCK();
      *(int *)(DAT_14ca47438 + 8) = *(int *)(DAT_14ca47438 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca473f0;
    local_88 = 2;
    FUN_140068f1a(puVar9,&local_61,&local_60,1);
    *puVar9 = &PTR_FUN_14a2f1690;
    puVar9[0x37] = param_2;
    puVar9[0x38] = lVar7;
    puVar9[0x39] = puVar11;
    *(uint *)(puVar9 + 0x3a) = (uint)bVar2;
    iVar5 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar5 * 8) = puVar9;
    *(int *)((longlong)puVar9 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034d887 FUN_14034d887 body=172 status=ok
// SIG undefined FUN_14034d887(void)

undefined1 FUN_14034d887(void)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27e40) {
    FUN_144b3d300(&DAT_14ca27e40);
    if (DAT_14ca27e40 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.BufferVisualizationDumpFramesAsHDR",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca27e38 = 0;
      }
      else {
        DAT_14ca27e38 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca27e40);
    }
  }
  if (*(int *)(DAT_14ca27e38 + 4) == 0) {
    lVar2 = FUN_14034d933();
    uVar1 = *(undefined1 *)(lVar2 + 0x41);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14034d933 FUN_14034d933 body=108 status=ok
// SIG undefined FUN_14034d933(void)

undefined * FUN_14034d933(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae43c8) {
    FUN_144b3d300(&DAT_14cae43c8);
    if (DAT_14cae43c8 == -1) {
      FUN_145702714(&DAT_14cae4350);
      atexit(FUN_14352ebef);
      _Init_thread_footer(&DAT_14cae43c8);
    }
  }
  return &DAT_14cae4350;
}



// FUNCTION 14034d9a0 FUN_14034d9a0 body=97 status=ok
// SIG undefined FUN_14034d9a0(void)

void FUN_14034d9a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9b3030;
  param_1[0x72] = &PTR_FUN_14a9b3670;
  param_1[0x7e] = &PTR_FUN_14a9bb430;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14034da02 FUN_14034da02 body=296 status=ok
// SIG undefined FUN_14034da02(void)

undefined8 * FUN_14034da02(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a2f5940;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar1 = param_3[1];
  param_1[3] = lVar1;
  param_1[4] = param_3[0x81];
  *(int *)(param_1 + 5) = (int)param_3[0x82];
  param_1[6] = param_3 + 0x13;
  *(uint *)(param_1 + 7) = (uint)(2 < *(int *)(lVar1 + 8));
  param_1[0x5f8] = 0;
  param_1[0x5f9] = 0x400000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x5fa] = 0;
  param_1[0x5fb] = 0;
  param_1[0x5fc] = 0;
  param_1[0x5fd] = 0;
  FUN_14021845a(param_1 + 0x5fe);
  local_28 = param_1[4];
  local_20 = *(undefined4 *)(param_1 + 5);
  FUN_140440d88(param_1 + 0x60c,param_1[3]);
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  *(undefined1 *)(param_1 + 0x61a) = uVar2;
  *(undefined2 *)((longlong)param_1 + 0x30d1) = 0;
  *(bool *)((longlong)param_1 + 0x3059) = *(int *)(param_1 + 0x60c) == 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034db2c FUN_14034db2c body=5133 status=ok
// SIG undefined FUN_14034db2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14034db2c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  code **ppcVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  code *pcVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  longlong local_e0;
  code *local_d8;
  longlong *plStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code **local_78;
  undefined8 uStack_70;
  undefined1 local_59;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)(param_1 + -0x10b0);
  plVar13 = (longlong *)*param_2;
  if (plVar13 == (longlong *)0x0) {
LAB_14034db9a:
    plVar16 = (longlong *)0x0;
  }
  else {
    lVar9 = (**(code **)(*plVar13 + 8))();
    lVar10 = FUN_1401548e0();
    if ((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) goto LAB_14034db9a;
    plVar16 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      plVar16 = plVar13;
    }
  }
  *(longlong **)(param_1 + 0x2ec0) = plVar16;
  ppcVar11 = (code **)FUN_1447210f0(plVar2);
  lVar9 = *(longlong *)(param_1 + 0x2ec0);
  if (lVar9 == 0) {
LAB_14034dd0e:
    uVar12 = DAT_14caa8578;
    *(undefined8 *)(param_1 + 0x2e10) = DAT_14caa8578;
    *(undefined8 *)(param_1 + 0x2e18) = uVar12;
    *(undefined8 *)(param_1 + 0x2e20) = uVar12;
    *(undefined4 *)(param_1 + 0x2e30) = 0;
    if (*(int *)(param_1 + 0x2e34) < 0) {
      FUN_1403de8ba(param_1 + 0x2e28,0);
    }
    iVar8 = *(int *)(param_1 + 0x2e44);
    *(undefined4 *)(&DAT_00002e40 + param_1) = 0;
    if (iVar8 < 0) {
      FUN_1403de8ba(param_1 + 0x2e38,0);
    }
    *(undefined4 *)(param_1 + 0x2e50) = 0;
    if (*(int *)(param_1 + 0x2e54) < 0) {
      FUN_1403de8ba(param_1 + 0x2e48,0);
    }
    *(undefined4 *)(param_1 + 0x2e60) = 0;
    if (*(int *)(param_1 + 0x2e64) < 0) {
      FUN_1403de8ba(param_1 + 0x2e58,0);
    }
    uVar12 = DAT_14caa8578;
    *(undefined8 *)(param_1 + 0x2e68) = DAT_14caa8578;
    *(undefined8 *)(param_1 + 0x2e70) = uVar12;
    *(undefined8 *)(param_1 + 0x2e78) = 0;
    *(undefined8 *)(param_1 + 0x2e80) = uVar12;
    *(undefined8 *)(param_1 + 0x2e88) = uVar12;
    *(undefined8 *)(param_1 + 0x2e90) = uVar12;
    *(undefined4 *)(param_1 + 0x2ea0) = 0;
    if (*(int *)(param_1 + 0x2ea4) < 0) {
      FUN_1403de8ba(param_1 + 0x2e98,0);
    }
    *(undefined4 *)(param_1 + 0x2eb0) = 0;
    if (*(int *)(param_1 + 0x2eb4) < 0) {
      FUN_1403de8ba(param_1 + 0x2ea8,0);
    }
  }
  else {
    if (*(char *)(param_1 + -0xf38) == '\x03') {
      if (*(char *)(lVar9 + 0x758) == '\x01') {
        uVar12 = FUN_144a8232a(&DAT_14cb767c8);
        FUN_140640638(param_1 + -0x10,uVar12,&DAT_14cb7c588);
        lVar9 = *(longlong *)(param_1 + 0x2ec0);
      }
      if (*(char *)(lVar9 + 0x759) == '\x01') {
        uVar12 = FUN_144a8232a(&DAT_14cb767e0);
        FUN_140640638(param_1 + -0x10,uVar12,&DAT_14cb7c588);
      }
    }
    if ((ppcVar11 != (code **)0x0) &&
       ((bVar3 = *(byte *)((longlong)ppcVar11 + 0x152), bVar3 == 1 ||
        ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))))) {
      if ((*(longlong *)(param_1 + 0x2ec0) != 0) &&
         ((*(longlong *)(*(longlong *)(param_1 + 0x2ec0) + 0x1090) != 0 &&
          (*(longlong *)(param_1 + 0x88c8) == 0)))) {
        uVar12 = FUN_140658604();
        FUN_1406585a8(param_1 + 0x88c8,uVar12,0,0);
      }
      FUN_140cc0454(plVar2);
    }
    lVar9 = *(longlong *)(param_1 + 0x2ec0);
    if (lVar9 == 0) goto LAB_14034dd0e;
    *(undefined8 *)(param_1 + 0x2e10) = *(undefined8 *)(lVar9 + 0xf50);
    *(undefined8 *)(param_1 + 0x2e18) = *(undefined8 *)(lVar9 + 0xf58);
    *(undefined8 *)(param_1 + 0x2e20) = *(undefined8 *)(lVar9 + 0xf60);
    FUN_1403de7ba(param_1 + 0x2e28,lVar9 + 0xf68);
    FUN_1403de7ba(param_1 + 0x2e48,*(longlong *)(param_1 + 0x2ec0) + 0xf88);
    *(undefined8 *)(param_1 + 0x2e68) = *(undefined8 *)(*(longlong *)(param_1 + 0x2ec0) + 0xfa8);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2ec0) + 0xfb0);
    *(longlong *)(param_1 + 0x2e70) = lVar9;
    if (lVar9 != 0) {
      uVar12 = FUN_1405c673d();
      FUN_14034ef80(uVar12,&local_d8,(longlong *)(param_1 + 0x2e70),0);
      *(code **)(param_1 + 0x2e78) = local_d8;
      if (local_d8 == (code *)0x0) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        lVar9 = DAT_14caa8580;
        lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14caa8580 + 0x250);
        EnterCriticalSection(lpCriticalSection);
        if (*(int *)(lVar9 + 0x130) == *(int *)(lVar9 + 0x15c)) {
LAB_14034ecd2:
          puVar22 = (undefined8 *)0x0;
        }
        else {
          lVar10 = *(longlong *)(param_1 + 0x2e70);
          uVar4 = (uint)((ulonglong)lVar10 >> 0x10);
          uVar18 = (uint)lVar10 & 0xffff;
          lVar14 = lVar9 + 0x160;
          if (*(longlong *)(lVar9 + 0x168) != 0) {
            lVar14 = *(longlong *)(lVar9 + 0x168);
          }
          iVar8 = *(int *)(lVar14 + (ulonglong)
                                    (*(int *)(lVar9 + 0x170) - 1U &
                                    (int)((ulonglong)lVar10 >> 0x20) +
                                    ((uint)lVar10 << 0x10 | uVar18) +
                                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4)) * 4);
          if (iVar8 == -1) goto LAB_14034ecd2;
          puVar22 = (undefined8 *)0x0;
          do {
            lVar14 = *(longlong *)(lVar9 + 0x128) + (longlong)iVar8 * 0x20;
            if (*(longlong *)(*(longlong *)(lVar9 + 0x128) + (longlong)iVar8 * 0x20) == lVar10) {
              if ((lVar14 + 8U & 0xfffffffffffffff7) == 0) goto LAB_14034ecd2;
              puVar22 = *(undefined8 **)(lVar14 + 8);
              plVar13 = *(longlong **)(lVar14 + 0x10);
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                goto LAB_14034ecd8;
              }
              break;
            }
            iVar8 = *(int *)(lVar14 + 0x18);
          } while (iVar8 != -1);
        }
        plVar13 = (longlong *)0x0;
LAB_14034ecd8:
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        if (puVar22 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x2e78) = *puVar22;
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar13 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x2ec0);
    *(undefined8 *)(param_1 + 0x2e80) = *(undefined8 *)(lVar9 + 0xfb8);
    *(undefined8 *)(param_1 + 0x2e88) = *(undefined8 *)(lVar9 + 0xfc0);
    *(undefined8 *)(param_1 + 0x2e90) = *(undefined8 *)(lVar9 + 0xfc8);
    FUN_1403de7ba(param_1 + 0x2e98,lVar9 + 0xfd0);
  }
  FUN_140353da8(param_1,param_2);
  if ((ppcVar11 == (code **)0x0) ||
     ((bVar3 = *(byte *)((longlong)ppcVar11 + 0x152), bVar3 != 1 &&
      ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))))) goto LAB_14034e2ef;
  if (*(longlong **)(param_1 + 0x2ec0) == (longlong *)0x0) {
    pcVar5 = *(code **)(*plVar2 + 0x5e8);
    if (pcVar5 == FUN_140972dde) {
      lVar9 = *(longlong *)(param_1 + -0xd00);
      if (lVar9 != 0) goto LAB_14034e3b1;
      pcVar5 = *(code **)(*plVar2 + 0x5f8);
      if (pcVar5 == FUN_144784df4) {
        pcVar5 = *(code **)(*(longlong *)(param_1 + 0x2b70) + 0x18);
        if (pcVar5 == (code *)&LAB_144904684) {
          if (((((*(int *)(param_1 + 0x6504) != 0) &&
                (uVar4 = *(uint *)(param_1 + 0x6500), -1 < (int)uVar4)) &&
               ((int)uVar4 < DAT_14c9647dc)) &&
              ((plVar13 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x6504))))) &&
             ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar13;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = lVar9 + 0x110;
            goto LAB_14034e38b;
          }
        }
        else {
          lVar9 = (*pcVar5)(param_1 + 0x2b70);
LAB_14034e38b:
          if (lVar9 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20);
            goto LAB_14034e398;
          }
        }
      }
      else {
        lVar9 = (*pcVar5)(plVar2);
LAB_14034e398:
        if (lVar9 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x3b0);
          goto LAB_14034e3a8;
        }
      }
    }
    else {
      lVar9 = (*pcVar5)(plVar2);
LAB_14034e3a8:
      if (lVar9 != 0) {
LAB_14034e3b1:
        if ((*(byte *)(lVar9 + 0x39a) & 8) == 0) {
          FUN_1405e47c6(plVar2,0);
          if (*(longlong *)(param_1 + 0x57a0) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x57a0) + 0x1f8) = 0;
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2208) != 0) {
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2ec0) + 0x80))();
      if (cVar7 != '\0') {
        uVar12 = FUN_140f7e331();
        ppcVar11 = &local_d8;
        FUN_14111d472(uVar12,ppcVar11);
        if ((longlong)(int)plStack_d0 != 0) {
          pcVar5 = local_d8 + (longlong)(int)plStack_d0 * 8;
          pcVar20 = local_d8;
          do {
            lVar9 = (longlong)*(int *)(*(longlong *)pcVar20 + 0x1a8);
            if (lVar9 != 0) {
              ppcVar11 = *(code ***)(*(longlong *)pcVar20 + 0x1a0);
              lVar9 = lVar9 * 0x28;
              do {
                lVar10 = *(longlong *)(param_1 + 0x2208);
                uVar12 = FUN_1457125b0(ppcVar11);
                FUN_1470d7856(lVar10 + 0x1288,uVar12);
                ppcVar11 = ppcVar11 + 5;
                lVar9 = lVar9 + -0x28;
              } while (lVar9 != 0);
            }
            pcVar20 = pcVar20 + 8;
          } while (pcVar20 != pcVar5);
        }
        if (local_d8 != (code *)0x0) {
          FUN_1400020a8(local_d8);
        }
      }
    }
    FUN_14034fa2c(param_1 + 0x60f8,*(longlong *)(param_1 + 0x2ec0) + 0x768);
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x2ec0) + 0x754);
    FUN_14034f21c(param_1 + 0x60f8,CONCAT71((int7)((ulonglong)ppcVar11 >> 8),bVar3) & 0xffffffff);
    *(byte *)(param_1 + 0x30f5) = *(byte *)(param_1 + 0x30f5) & 0xfb | bVar3 * '\x04';
    *(byte *)(param_1 + 0x30f4) = *(byte *)(param_1 + 0x30f4) & 0xbf | (bVar3 ^ 1) << 6;
    FUN_14034ef3a(plVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x2ec0) + 0x757));
    local_d8 = (code *)0x0;
    plStack_d0 = (longlong *)0x0;
    uVar19 = 0;
    if (*(longlong **)(param_1 + 0x2ec0) != (longlong *)0x0) {
      local_78 = &local_d8;
      cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2ec0) + 0x80))();
      if (cVar7 != '\0') {
        uVar12 = FUN_140f7e331();
        FUN_14111d472(uVar12,&local_58);
        lVar9 = local_58;
        lVar10 = (longlong)(int)local_50;
        if (lVar10 != 0) {
          lVar14 = 0;
          do {
            FUN_14034fc3a(&local_78,*(longlong *)(lVar9 + lVar14) + 0x180);
            lVar14 = lVar14 + 8;
          } while (lVar10 * 8 != lVar14);
        }
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
      }
      FUN_14034fc3a(&local_78,*(longlong *)(param_1 + 0x2ec0) + 0xa68);
      if ((int)plStack_d0 != 0) {
        lVar9 = FUN_14050fd64();
        local_78 = (code **)0x0;
        uStack_70 = 0;
        local_f0 = &local_59;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        FUN_1457028c8(lVar9 + 0x1e8,&local_58,&local_d8);
        plVar13 = local_50;
        if ((longlong *)(param_1 + 0x6bb8) != &local_58) {
          *(longlong *)(param_1 + 0x6bb8) = local_58;
          local_58 = 0;
          plVar16 = *(longlong **)(param_1 + 0x6bc0);
          if (local_50 != plVar16) {
            local_50 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x6bc0) = plVar13;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar16 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar16)(plVar16);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
          }
        }
        plVar13 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_50 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        FUN_1449db362(&local_78);
        uVar19 = (ulonglong)plStack_d0 & 0xffffffff;
      }
    }
    FUN_140861e20(local_d8,uVar19);
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
    plVar13 = *(longlong **)(param_1 + 0x2ec0);
    if (*(char *)(param_1 + -0xf38) == '\x03') {
      cVar7 = (**(code **)(*plVar13 + 0x80))(plVar13);
      plVar13 = *(longlong **)(param_1 + 0x2ec0);
      if (cVar7 != '\0') {
        plVar16 = plVar13 + 0x142;
        lVar9 = FUN_14479d2ce(plVar16);
        if (lVar9 == 0) {
          if (plVar13[0x143] != 0) {
            lVar9 = FUN_140007850();
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar9 == 0) || (cVar7 == '\0')) {
              FUN_14485c47a(plVar16,lVar9);
              if (lVar9 == 0) goto LAB_14034eaa1;
            }
            else {
              uVar4 = *(uint *)(lVar9 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(plVar16,lVar9);
              }
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_14034e993;
          }
        }
        else {
LAB_14034e993:
          lVar10 = FUN_144a797b2();
          if ((((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
              (lVar10 = FUN_1458e0a4a(), lVar10 != 0)) &&
             (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) {
            lVar14 = 0;
            if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30) {
              lVar14 = lVar9;
            }
            if ((lVar14 == 0) || (DAT_14c950c29 == '\0')) {
              if (lVar14 == 0) goto LAB_14034eaa1;
            }
            else {
              FUN_1456cec3c(lVar14);
            }
            lVar10 = FUN_1458e0a4a();
            if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30)) {
              local_d8 = (code *)0x0;
              plStack_d0 = (longlong *)0x0;
              local_c8 = 0;
              uStack_c4 = 0;
              uStack_c0 = 0;
              uStack_bc = 0x3ff00000;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              uStack_94 = 0x3ff00000;
              uStack_90 = 0;
              uStack_8c = 0x3ff00000;
              local_88 = 0x3ff0000000000000;
              uStack_80 = 0;
              local_e0 = lVar9;
              if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar9);
              }
              local_108 = local_108 & 0xffffff00;
              FUN_140fae5dc(plVar2,&local_e0,0,&local_d8);
            }
          }
        }
LAB_14034eaa1:
        plVar13 = *(longlong **)(param_1 + 0x2ec0);
        if ((longlong)(int)plVar13[0x148] != 0) {
          lVar9 = plVar13[0x147];
          lVar10 = (longlong)(int)plVar13[0x148] * 0x18;
          do {
            uVar12 = (**(code **)(*(longlong *)(param_1 + 0x2970) + 0x10))
                               ((longlong *)(param_1 + 0x2970));
            uVar15 = FUN_14011c2be(lVar9);
            FUN_14036c7e6(uVar12,&local_d8,uVar15,0);
            lVar9 = lVar9 + 0x18;
            lVar10 = lVar10 + -0x18;
          } while (lVar10 != 0);
          plVar13 = *(longlong **)(param_1 + 0x2ec0);
        }
      }
    }
    lVar9 = plVar13[0x1ca];
    if (lVar9 == 0) {
      uVar12 = FUN_14034f1a8();
      lVar9 = FUN_14477b664(uVar12);
      plVar13[0x1ca] = lVar9;
    }
    lVar10 = param_1 + 0x5ee0;
    lVar14 = plVar13[0x1cb];
    if (lVar14 == 0) {
      if ((plVar13[0x1c9] == 0) || (lVar9 == 0)) {
        lVar14 = 0;
      }
      else {
        plVar16 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar7 == '\0')) {
          lVar14 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar14 = FUN_144aff482(uVar12,plVar13 + 0x1c9);
        }
        plVar13[0x1cb] = lVar14;
      }
    }
    uVar12 = FUN_14034f110(*(undefined8 *)(param_1 + 0x2ec0));
    FUN_14034f8a4(lVar10,uVar12,lVar14);
    plVar13 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14b95c1c0;
    plVar13[3] = 0;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[6] = 0;
    plVar13[7] = 0;
    bVar6 = true;
    plVar16 = plVar13 + 2;
    *plVar16 = (longlong)&PTR_FUN_14b95c1d8;
    if (plVar16 != (longlong *)0x0) {
      if (plVar13 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar21 = (longlong *)&DAT_00000020;
        plVar17 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_14034eb9a:
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
          *plVar21 = (longlong)plVar13;
          if (plVar13 != (longlong *)0x0) goto LAB_14034e024;
        }
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        plVar13[3] = (longlong)plVar16;
        if ((longlong *)plVar13[4] != plVar13) {
          LOCK();
          *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar13[4] != (longlong *)0x0) {
            plVar21 = plVar13 + 4;
            plVar17 = (longlong *)plVar13[4];
            goto LAB_14034eb9a;
          }
          plVar13[4] = (longlong)plVar13;
        }
LAB_14034e024:
        LOCK();
        plVar21 = plVar13 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        bVar6 = false;
      }
    }
    iVar8 = *(int *)(param_1 + 0x5fc8);
    *(uint *)(param_1 + 0x5fc8) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x5fcc) < iVar8 + 1U) {
      FUN_14034f33e((longlong *)(param_1 + 0x5fc0),iVar8);
    }
    lVar9 = *(longlong *)(param_1 + 0x5fc0);
    *(longlong **)(lVar9 + (longlong)iVar8 * 0x10) = plVar16;
    *(longlong **)(lVar9 + 8 + (longlong)iVar8 * 0x10) = plVar13;
    if (bVar6) {
      plVar13[6] = lVar10;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      plVar21 = plVar13 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      plVar13[6] = lVar10;
      LOCK();
      plVar21 = plVar13 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    FUN_14034f44c(plVar16,lVar10);
    *(char *)(param_1 + 0x7708) = (char)(*(longlong **)(param_1 + 0x2ec0))[0x1b3];
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2ec0) + 0x80))();
    if (cVar7 != '\0') {
      if (*(char *)(param_1 + -0xf38) == '\x03') {
        lVar9 = param_1 + 0x6500;
        cVar7 = FUN_144729dda(lVar9);
        if (cVar7 == '\0') {
          local_d8 = (code *)0x0;
          plStack_d0 = (longlong *)0x0;
          local_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0x3ff00000;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_94 = 0x3ff00000;
          uStack_90 = 0;
          uStack_8c = 0x3ff00000;
          local_88 = 0x3ff0000000000000;
          uStack_80 = 0;
          local_e8 = FUN_14596351c();
          if ((local_e8 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_e8);
          }
          local_108 = local_108 & 0xffffff00;
          lVar10 = FUN_140fae5dc(plVar2,&local_e8,0,&local_d8);
          if (lVar10 == 0) {
LAB_14034ee54:
            lVar10 = 0;
          }
          else {
            lVar14 = FUN_14596351c();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_14034ee54;
          }
          FUN_14485c47a(lVar9,lVar10);
          FUN_144a62f0c(plVar2,*(undefined8 *)(param_1 + -0x1088),0x44);
          uVar12 = FUN_14479d2ce(lVar9);
          FUN_14010ee68(plVar2,uVar12);
        }
        *(undefined1 *)(param_1 + 0x7a0c) = 1;
        if (*(char *)(param_1 + -0xf38) == '\x03') {
          iVar8 = *(int *)(param_1 + 0x3b24);
          if (iVar8 == 0) {
            FUN_1402a453c((int *)(param_1 + 0x3b24));
            iVar8 = *(int *)(param_1 + 0x3b24);
          }
          local_d8 = (code *)&LAB_141283a1e;
          plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
          FUN_145704556(DAT_14c9a3d60 + (longlong)iVar8 * 0x88 + -0x18,&local_58,plVar2);
          *(undefined4 *)(param_1 + 0x79b4) = *(undefined4 *)(param_1 + 0x3b28);
          FUN_144a62f0c(plVar2,*(undefined8 *)(param_1 + -0x1088),0x65);
          iVar8 = *(int *)(param_1 + 0x30d0);
          if (iVar8 == 0) {
            FUN_1402a453c((int *)(param_1 + 0x30d0));
            iVar8 = *(int *)(param_1 + 0x30d0);
          }
          local_d8 = (code *)&LAB_141283976;
          plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
          FUN_145704556(DAT_14c9a3d60 + (longlong)iVar8 * 0x88 + -0x18,&local_58,plVar2);
          *(undefined4 *)(param_1 + 0x79b8) = *(undefined4 *)(param_1 + 0x30d4);
          FUN_144a62f0c(plVar2,*(undefined8 *)(param_1 + -0x1088),0x66);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x7a0c) = 1;
      }
    }
    pcVar5 = *(code **)(*plVar2 + 0x5e8);
    if (pcVar5 == FUN_140972dde) {
      lVar9 = *(longlong *)(param_1 + -0xd00);
      if (lVar9 == 0) {
        pcVar5 = *(code **)(*plVar2 + 0x5f8);
        if (pcVar5 == FUN_144784df4) {
          pcVar5 = *(code **)(*(longlong *)(param_1 + 0x2b70) + 0x18);
          if (pcVar5 == (code *)&LAB_144904684) {
            if ((((*(int *)(param_1 + 0x6504) == 0) ||
                 (uVar4 = *(uint *)(param_1 + 0x6500), (int)uVar4 < 0)) ||
                (DAT_14c9647dc <= (int)uVar4)) ||
               (((plVar13 = (longlong *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(param_1 + 0x6504))) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14034e2a8;
            if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
              lVar9 = *plVar13;
            }
            else {
              lVar9 = 0;
            }
            lVar9 = lVar9 + 0x110;
          }
          else {
            lVar9 = (*pcVar5)(param_1 + 0x2b70);
          }
          if (lVar9 == 0) goto LAB_14034e2a8;
          lVar9 = *(longlong *)(lVar9 + 0x20);
        }
        else {
          lVar9 = (*pcVar5)(plVar2);
        }
        if (lVar9 == 0) goto LAB_14034e2a8;
        lVar9 = *(longlong *)(lVar9 + 0x3b0);
        goto LAB_14034e1b7;
      }
    }
    else {
      lVar9 = (*pcVar5)(plVar2);
LAB_14034e1b7:
      if (lVar9 == 0) goto LAB_14034e2a8;
    }
    if ((*(byte *)(lVar9 + 0x39a) & 8) == 0) {
      if (*(char *)(param_1 + 0x8e0) == '\x01') {
        (**(code **)(*(longlong *)(param_1 + -0x10b0) + 0x978))(plVar2,1,1);
        FUN_1405a76a4(plVar2,&local_d8);
        lVar9 = *(longlong *)(param_1 + 0x57a0);
        if (lVar9 != 0) {
          if (local_d8 != (code *)0x0) {
            cVar7 = FUN_140373d18(local_d8,0);
            if (cVar7 != '\0') goto LAB_14034e8ef;
            lVar9 = *(longlong *)(param_1 + 0x57a0);
          }
          *(undefined4 *)(lVar9 + 0x1f8) = 0x3f800000;
        }
LAB_14034e8ef:
        plVar13 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar16 = plStack_d0 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plStack_d0)(plStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        FUN_1405e47c6(plVar2,1);
        if (*(longlong *)(param_1 + 0x57a0) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x57a0) + 0x1f8) = 0x3f800000;
        }
      }
    }
  }
LAB_14034e2a8:
  plVar13 = (longlong *)FUN_1403ca102(plVar2);
  if (plVar13 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar13 + 0x498))(plVar13);
    if ((cVar7 == '\a') || (cVar7 = (**(code **)(*plVar13 + 0x498))(plVar13), cVar7 == '\b')) {
      uVar12 = FUN_14034eff0(plVar2);
      FUN_14034fece(plVar2,uVar12);
    }
    else if (*(longlong *)(param_1 + 0x2ec8) == 0) {
      local_d8 = FUN_14034fece;
      plStack_d0 = (longlong *)((ulonglong)plStack_d0 & 0xffffffff00000000);
      FUN_145706998(&local_58,plVar2);
      *(longlong *)(param_1 + 0x2ec8) = local_58;
    }
  }
LAB_14034e2ef:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14034ef3a FUN_14034ef3a body=69 status=ok
// SIG undefined FUN_14034ef3a(void)

void FUN_14034ef3a(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (param_2 == '\0') {
    bVar1 = 0;
  }
  else {
    FUN_14034f21c(param_1 + 0x71a8,1);
    *(byte *)(param_1 + 0x41a5) = *(byte *)(param_1 + 0x41a5) | 4;
    *(byte *)(param_1 + 0x41a4) = *(byte *)(param_1 + 0x41a4) & 0xbf;
    bVar1 = 0x80;
  }
  *(byte *)(param_1 + 0x73e8) = *(byte *)(param_1 + 0x73e8) & 0x7f | bVar1;
  return;
}



// FUNCTION 14034ef80 FUN_14034ef80 body=111 status=ok
// SIG undefined FUN_14034ef80(void)

void FUN_14034ef80(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    puVar1 = puVar2 + (longlong)*(int *)(param_1 + 200) * 5;
    do {
      if ((*param_3 != 0) && ((longlong)*(int *)(puVar2 + 2) != 0)) {
        lVar4 = 0;
        do {
          if (*(longlong *)(puVar2[1] + lVar4) == *param_3) goto LAB_14034efe2;
          lVar4 = lVar4 + 8;
        } while ((longlong)*(int *)(puVar2 + 2) * 8 != lVar4);
      }
      puVar2 = puVar2 + 5;
    } while (puVar2 != puVar1);
  }
  if (param_4 == '\0') {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0xd0);
LAB_14034efe2:
    uVar3 = *puVar2;
  }
  *param_2 = uVar3;
  return;
}



// FUNCTION 14034eff0 FUN_14034eff0 body=286 status=ok
// SIG undefined FUN_14034eff0(void)

longlong FUN_14034eff0(void)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) goto LAB_14034f047;
  }
  lVar1 = 0;
LAB_14034f047:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034f110 FUN_14034f110 body=151 status=ok
// SIG undefined FUN_14034f110(void)

longlong FUN_14034f110(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xe38);
  if (lVar4 == 0) {
    uVar3 = FUN_14034f1e2();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xe38) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xe40) == 0) {
    if ((*(longlong *)(param_1 + 0xe30) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xe30));
      }
      *(longlong *)(param_1 + 0xe40) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0xe40);
}



// FUNCTION 14034f1a8 FUN_14034f1a8 body=57 status=ok
// SIG undefined FUN_14034f1a8(void)

void FUN_14034f1a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62218 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62218 = FUN_140002ddd(FUN_1464f68fe,uVar1,L"GbxProgressGraphGroupDef");
  }
  return;
}



// FUNCTION 14034f1e2 FUN_14034f1e2 body=57 status=ok
// SIG undefined FUN_14034f1e2(void)

void FUN_14034f1e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62310 = FUN_140002ddd(FUN_1464f70bd,uVar1,L"GbxProgressionDef");
  }
  return;
}



// FUNCTION 14034f21c FUN_14034f21c body=289 status=ok
// SIG undefined FUN_14034f21c(void)

void FUN_14034f21c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = (char)param_2;
  if (((*(byte *)(param_1 + 0x240) & 4) == 0) == (bool)cVar6) {
    *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xfb | cVar6 * '\x04';
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FUN_145702894(*(longlong *)(param_1 + 0x238),param_2);
      plVar2 = *(longlong **)(param_1 + 0x238);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_140427846();
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
        if (plVar2 != (longlong *)0x0) {
          uVar1 = FUN_140427846();
          plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
          if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
            if (lVar4 != 0) {
              puVar5 = &DAT_14cb7c580;
              if (cVar6 != '\0') {
                puVar5 = &DAT_14cb7c588;
              }
              local_30 = *puVar5;
              local_28 = DAT_14cbc67a8;
              FUN_1401533ba(local_3c,&local_28,1);
              FUN_140bfca4e(lVar4,local_3c,&local_30,0);
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034f33e FUN_14034f33e body=269 status=ok
// SIG undefined FUN_14034f33e(void)

void FUN_14034f33e(longlong param_1,int param_2)

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



// FUNCTION 14034f44c FUN_14034f44c body=347 status=ok
// SIG undefined FUN_14034f44c(void)

void FUN_14034f44c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = FUN_144207e4c;
  local_48 = 0;
  FUN_14034f722(&local_40,param_1);
  FUN_14034f5a8(param_2 + 0x90,&local_50,&local_40);
  if (local_38 == 0) {
LAB_14034f4b1:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_14034f4b1;
  }
  local_50 = FUN_144207e4c;
  local_48 = 0;
  FUN_14034f722(&local_40,param_1);
  FUN_14034f5a8(param_2 + 0x78,&local_50,&local_40);
  if (local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_14034f507;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14034f507:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14034f5a8 FUN_14034f5a8 body=376 status=ok
// SIG undefined FUN_14034f5a8(void)

undefined8 * FUN_14034f5a8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar6);
              FUN_14005b248(param_1);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c(param_1);
        }
      }
    }
    plVar2 = (longlong *)*param_3;
    if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
      local_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    }
    *param_2 = local_38;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong *)(lVar3 + lVar7) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar7) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14034f722 FUN_14034f722 body=386 status=ok
// SIG undefined FUN_14034f722(void)

longlong * FUN_14034f722(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14034f833:
    *puVar5 = &PTR_LAB_14b9998a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999830;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14034f833;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9998a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b999830;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14034f8a4 FUN_14034f8a4 body=392 status=ok
// SIG undefined FUN_14034f8a4(void)

void FUN_14034f8a4(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  *(longlong *)(param_1 + 0x130) = param_3;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    iVar2 = *(int *)(param_1 + 0xb8);
    cVar1 = *(char *)(param_1 + 0xc0);
    iVar3 = *(int *)(param_1 + 0xec);
    FUN_140d9035b(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0xec) != 0)) {
      FUN_145ce0c76(param_1 + 0xe0,0);
    }
    FUN_1418a386e(param_1);
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_1415104c8(*(longlong *)(param_1 + 0x138),param_2);
    }
    if (param_2 != 0) {
      FUN_143e0a8e0(param_1,param_2);
    }
    if (param_3 != 0) {
      FUN_145ed121c(param_1,param_3,0);
      uVar4 = FUN_140fd591a();
      lVar5 = FUN_1489342c6(uVar4);
      if (lVar5 != 0) {
        FUN_145ed121c(param_1,lVar5,0);
      }
    }
    if ((iVar2 == 0) && (cVar1 == *(char *)(param_1 + 0xc0))) {
      *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      *(char *)(param_1 + 0xc0) = cVar1 + '\x01';
      FUN_1410cebe2(param_1 + 0x60,param_1);
    }
    *(undefined1 *)(param_1 + 0x129) = 1;
  }
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03';
    }
    FUN_143e0aa30(param_1 + 0xf0,param_2 + 0x18,bVar6);
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined2 *)(param_1 + 0x12a) = 0;
  FUN_1410cebe2(param_1 + 0x48,param_1);
  return;
}



// FUNCTION 14034fa2c FUN_14034fa2c body=468 status=ok
// SIG undefined FUN_14034fa2c(void)

void FUN_14034fa2c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar4 = FUN_14034fc00();
    lVar6 = FUN_14477b664(uVar4);
    param_2[1] = lVar6;
  }
  lVar5 = param_2[2];
  if (lVar5 != 0) {
    *(longlong *)(param_1 + 0x230) = lVar5;
    goto LAB_14034fa96;
  }
  if ((*param_2 == 0) || (lVar6 == 0)) {
LAB_14034fa5d:
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  else {
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      param_2[2] = 0;
      goto LAB_14034fa5d;
    }
    uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    *(longlong *)(param_1 + 0x230) = lVar5;
    if (lVar5 != 0) goto LAB_14034fa96;
  }
  plVar7 = (longlong *)(param_1 + 0x230);
  lVar3 = FUN_1403ca227();
  lVar6 = *(longlong *)(lVar3 + 0x328);
  if (lVar6 == 0) {
    uVar4 = FUN_14034fc00();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x328) = lVar6;
  }
  lVar5 = *(longlong *)(lVar3 + 0x330);
  if (lVar5 == 0) {
    if ((*(longlong *)(lVar3 + 800) == 0) || (lVar6 == 0)) {
      *plVar7 = 0;
      return;
    }
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0x330) = 0;
      *plVar7 = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 800));
    *(longlong *)(lVar3 + 0x330) = lVar5;
    *plVar7 = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    *plVar7 = lVar5;
  }
LAB_14034fa96:
  lVar6 = *(longlong *)(param_1 + 0x238);
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x4598) = *(byte *)(lVar6 + 0x4598) & 0xbf | *(char *)(lVar5 + 0x36) << 6;
  }
  return;
}



// FUNCTION 14034fc00 FUN_14034fc00 body=57 status=ok
// SIG undefined FUN_14034fc00(void)

void FUN_14034fc00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba08c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba08c8 = FUN_140002ddd(FUN_1465ab34f,uVar1,L"FFYLDef");
  }
  return;
}



// FUNCTION 14034fc3a FUN_14034fc3a body=659 status=ok
// SIG undefined FUN_14034fc3a(void)

void FUN_14034fc3a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  int iVar24;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar13 = *param_2;
    lVar1 = lVar13 + (longlong)(int)param_2[1] * 0x28;
    do {
      lVar10 = FUN_140d02256();
      if (lVar10 != 0) {
        lVar10 = FUN_140d02256(lVar13);
        iVar4 = *(int *)(lVar10 + 0x68);
        if (iVar4 == 0) {
          uVar21 = 1;
          uVar16 = 0;
          iVar24 = 0;
          iVar20 = 0;
        }
        else {
          puVar17 = *(uint **)(lVar10 + 0x60);
          if (*(uint **)(lVar10 + 0x60) == (uint *)0x0) {
            puVar17 = (uint *)(lVar10 + 0x50);
          }
          uVar15 = *puVar17;
          if (uVar15 == 0) {
            iVar20 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar20 = iVar4 + -1;
            }
            uVar16 = 0;
            uVar21 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar21 = uVar16;
            }
            iVar24 = 0;
            do {
              if (uVar21 == uVar16) goto LAB_14034fd18;
              iVar24 = iVar24 + 0x20;
              uVar15 = puVar17[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar16 = 0;
            iVar24 = 0;
          }
          uVar21 = (ulonglong)(-uVar15 & uVar15);
          uVar3 = uVar21 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar20 = (iVar24 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar20) {
            iVar20 = iVar4;
          }
        }
        if (iVar20 != iVar4) {
          uVar15 = 0xffffffff;
          do {
            lVar18 = *(longlong *)(lVar10 + 0x40);
            if (*(longlong *)(lVar18 + 0x10 + (longlong)iVar20 * 0x38) != 0) {
              plVar6 = (longlong *)*param_1;
              iVar5 = (int)plVar6[1];
              *(uint *)(plVar6 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
                FUN_1406f071e(plVar6,iVar5);
              }
              lVar18 = lVar18 + (longlong)iVar20 * 0x38;
              lVar19 = *plVar6;
              lVar22 = (longlong)iVar5 * 0x20;
              uVar7 = *(undefined4 *)(lVar18 + 0x14);
              uVar8 = *(undefined4 *)(lVar18 + 0x18);
              uVar9 = *(undefined4 *)(lVar18 + 0x1c);
              puVar2 = (undefined4 *)(lVar19 + lVar22);
              *puVar2 = *(undefined4 *)(lVar18 + 0x10);
              puVar2[1] = uVar7;
              puVar2[2] = uVar8;
              puVar2[3] = uVar9;
              *(undefined8 *)(lVar19 + 0x10 + lVar22) = 0;
              iVar20 = *(int *)(lVar18 + 0x28);
              _Src = *(void **)(lVar18 + 0x20);
              *(int *)(lVar19 + 0x18 + lVar22) = iVar20;
              if ((longlong)iVar20 == 0) {
                *(undefined4 *)(lVar19 + lVar22 + 0x1c) = 0;
              }
              else {
                puVar23 = (undefined8 *)(lVar22 + lVar19 + 0x10);
                FUN_1446dd670(puVar23,iVar20,0);
                memcpy((void *)*puVar23,_Src,(longlong)iVar20 * 2);
              }
            }
            uVar15 = uVar15 & ~(uint)uVar21;
            puVar17 = *(uint **)(lVar10 + 0x60);
            if (*(uint **)(lVar10 + 0x60) == (uint *)0x0) {
              puVar17 = (uint *)(lVar10 + 0x50);
            }
            iVar5 = *(int *)(lVar10 + 0x68);
            iVar20 = (int)uVar16;
            lVar18 = (longlong)iVar20;
            uVar14 = puVar17[lVar18] & uVar15;
            if (uVar14 == 0) {
              iVar11 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar11 = iVar5 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar24 = iVar24 + 0x20;
              iVar12 = iVar11;
              if (iVar11 < iVar20) {
                iVar12 = iVar20;
              }
              if (iVar20 < iVar11) {
                lVar19 = 0;
                do {
                  uVar14 = puVar17[lVar18 + lVar19 + 1];
                  if (uVar14 != 0) {
                    uVar16 = (ulonglong)(iVar20 + (int)lVar19 + 1);
                    uVar15 = 0xffffffff;
                    goto LAB_14034fe70;
                  }
                  iVar24 = iVar24 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar12 - lVar18 != lVar19);
                uVar15 = 0xffffffff;
                iVar20 = iVar12;
              }
              uVar16 = (ulonglong)(iVar20 + 1);
              iVar20 = iVar5;
            }
            else {
LAB_14034fe70:
              uVar21 = (ulonglong)(-uVar14 & uVar14);
              uVar3 = uVar21 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar20 = (iVar24 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar5 <= iVar20) {
                iVar20 = iVar5;
              }
            }
          } while (iVar20 != iVar4);
        }
      }
LAB_14034fd18:
      lVar13 = lVar13 + 0x28;
    } while (lVar13 != lVar1);
  }
  return;
}



// FUNCTION 14034fece FUN_14034fece body=3032 status=ok
// SIG undefined FUN_14034fece(void)

void FUN_14034fece(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0x7ef] != 0) {
    FUN_14480f766(&DAT_14cb7df50);
  }
  param_1[0x7ef] = 0;
  lVar8 = FUN_14497e828(param_1);
  if ((lVar8 != param_2) || (param_1[0x7ee] == 0)) goto LAB_1403502a4;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  local_60 = 0;
  uStack_58 = 0;
  lVar8 = 0;
  FUN_1446ddda2(&local_78,"pingable_character",0);
  if (DAT_14cb88fb8 != 0) {
    lVar8 = FUN_144815d88(DAT_14cb88fb8,&local_78);
  }
  param_1[0x77a] = lVar8;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
    (**(code **)(*param_1 + 0xb98))(param_1);
  }
  lVar8 = param_1[0x7ee];
  lVar11 = *(longlong *)(lVar8 + 0x1020);
  if (lVar11 == 0) {
    uVar9 = FUN_145702a16();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(lVar8 + 0x1020) = lVar11;
  }
  if (((*(longlong *)(lVar8 + 0x1028) == 0) && (lVar11 != 0)) &&
     (*(longlong *)(lVar8 + 0x1018) != 0)) {
    plVar10 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
      uVar9 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x1018));
    }
    *(undefined8 *)(lVar8 + 0x1028) = uVar9;
  }
  FUN_140351d34(param_1 + 0xf8f,param_1);
  cVar6 = FUN_140350ab4(param_1 + 0xf8f);
  *(byte *)((longlong)param_1 + 0x41a4) =
       *(byte *)((longlong)param_1 + 0x41a4) & 0x7f | (cVar6 == '\0') << 7;
  lVar8 = param_1[0x7ee];
  *(undefined4 *)(param_1 + 0x835) = *(undefined4 *)(lVar8 + 0x8c0);
  *(undefined4 *)((longlong)param_1 + 0x41ac) = *(undefined4 *)(lVar8 + 0x8c4);
  *(undefined4 *)(param_1 + 0x836) = *(undefined4 *)(lVar8 + 0x8c8);
  FUN_1409b52ac(param_1 + 0x752);
  FUN_140350af6(param_1 + 0xd12,param_1[0x7ee]);
  FUN_140350f1c(param_1);
  if (param_1[0x78] != 0) {
    lVar11 = FUN_144a5dd5e();
    lVar8 = param_1[0x78];
    if (((lVar8 != 0) && (lVar11 != 0)) &&
       ((lVar13 = *(longlong *)(lVar8 + 0x10), lVar13 != 0 &&
        ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar13 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)))))) {
      uVar9 = FUN_140eeb17a(lVar8);
      *(undefined8 *)(lVar8 + 0x3258) = uVar9;
      FUN_145703052(lVar8 + 0x3910);
    }
  }
  lVar8 = param_1[0x7ee];
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(lVar8 + 0xe2a);
    uVar3 = *(undefined1 *)(lVar8 + 0xe28);
    uVar4 = *(undefined1 *)(lVar8 + 0xe29);
    uVar9 = FUN_1447210f0(param_1);
    local_a8 = uVar3;
    local_a0 = uVar4;
    local_98 = uVar2;
    FUN_140b50c30(param_1 + 0x11f,uVar9,lVar8 + 0xe08,lVar8 + 0xe18);
    lVar8 = param_1[0x7ee];
  }
  lVar11 = *(longlong *)(lVar8 + 0x548);
  if (lVar11 == 0) {
    uVar9 = FUN_14570285a();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(lVar8 + 0x548) = lVar11;
  }
  if (*(longlong *)(lVar8 + 0x550) == 0) {
    if ((lVar11 != 0) && (*(longlong *)(lVar8 + 0x540) != 0)) {
      plVar10 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
        *(undefined8 *)(lVar8 + 0x550) = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x540));
        *(longlong *)(lVar8 + 0x550) = lVar11;
        if (lVar11 != 0) goto LAB_1403500ec;
      }
    }
  }
  else {
LAB_1403500ec:
    lVar8 = param_1[0x23e];
    lVar11 = param_1[0x7ee];
    lVar13 = *(longlong *)(lVar11 + 0x548);
    if (lVar13 == 0) {
      uVar9 = FUN_14570285a();
      lVar13 = FUN_14477b664(uVar9);
      *(longlong *)(lVar11 + 0x548) = lVar13;
    }
    lVar12 = *(longlong *)(lVar11 + 0x550);
    if (((lVar12 == 0) && (lVar12 = 0, lVar13 != 0)) && (*(longlong *)(lVar11 + 0x540) != 0)) {
      plVar10 = *(longlong **)(lVar13 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
        lVar12 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar12 = FUN_144aff482(uVar9,(longlong *)(lVar11 + 0x540));
      }
      *(longlong *)(lVar11 + 0x550) = lVar12;
    }
    FUN_140352754(param_1 + 0x128e,param_1,lVar12,lVar8);
  }
  lVar8 = param_1[0x87];
  if (lVar8 != 0) {
    *(undefined4 *)(param_1 + 0xead) = *(undefined4 *)(lVar8 + 0x640);
    *(undefined4 *)((longlong)param_1 + 0x756c) = *(undefined4 *)(lVar8 + 0x644);
  }
  if ((int)param_1[0xf84] != *(int *)((longlong)param_1 + 0x7c4c)) {
    FUN_14579ab1c(param_1 + 0xf83);
    FUN_14579a9fe(param_1 + 0xf83);
  }
  if ((longlong *)param_1[0x7ee] != (longlong *)0x0) {
    local_88 = param_1;
    local_80 = param_1;
    cVar6 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))();
    if (cVar6 != '\0') {
      uVar9 = FUN_140f7e331();
      FUN_14111d472(uVar9,&local_78);
      plVar10 = local_78;
      lVar8 = (longlong)(int)uStack_70;
      if (lVar8 != 0) {
        lVar11 = 0;
        do {
          lVar13 = *(longlong *)((longlong)plVar10 + lVar11);
          FUN_140351716(&local_80,lVar13 + 0x180);
          FUN_140351130(&local_88,lVar13 + 400);
          lVar11 = lVar11 + 8;
        } while (lVar8 * 8 != lVar11);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8(local_78);
      }
    }
    FUN_140351716(&local_80,param_1[0x7ee] + 0xa68);
    FUN_140351130(&local_88,param_1[0x7ee] + 0xa78);
  }
  FUN_140351016(param_1 + 0x1076);
  lVar8 = param_1[0x7ee];
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((char)param_1[0x2f] != '\x03') {
    FUN_140fbb1b2(param_1);
    lVar8 = param_1[0x7ee];
  }
  FUN_1406fa324(param_1 + 0xf2e,lVar8 + 0xca8);
  local_78 = *(longlong **)(param_1[0x7ee] + 0xc90);
  uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1[0x7ee] + 0xc98));
  local_68 = 0;
  lVar8 = FUN_140350bfe();
  param_1[0xf30] = lVar8;
  if ((char)param_1[0x2f] == '\x03') {
    lVar8 = (**(code **)(param_1[0x216] + 0x28))(param_1 + 0x216);
    if (*(int *)(lVar8 + 0xd4) == 0) {
LAB_14035074a:
      bVar18 = false;
    }
    else {
      uVar17 = *(uint *)(lVar8 + 0xd0);
      bVar18 = false;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar10 != (longlong *)0x0) &&
           ((((int)plVar10[2] == *(int *)(lVar8 + 0xd4) &&
             ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar8 = *plVar10, lVar8 != 0)))) {
          lVar11 = FUN_140485dc8();
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            bVar18 = *(longlong *)(lVar8 + 0x988) != 0;
            goto LAB_14035037a;
          }
        }
        goto LAB_14035074a;
      }
    }
LAB_14035037a:
    if ((bool)(char)param_1[0x126f] != bVar18) {
      *(bool *)(param_1 + 0x126f) = bVar18;
      (**(code **)(*param_1 + 0x578))();
      uVar5 = param_1[5];
      if (uVar5 < 0xffffffff00000000) {
        plVar10 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar10 = (longlong *)0x0;
        }
        (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar5,0x6a);
      }
      else {
        uVar17 = (uint)uVar5;
        if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c998088)) {
          puVar14 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar14 = DAT_14c998080;
          }
          if ((*(uint *)(puVar14 + ((uint)(uVar5 >> 3) & 0xffffffc)) >> (uVar17 & 0x1f) & 1) != 0) {
            lVar11 = DAT_14c998060 + (ulonglong)(uVar17 & 0x7fffffff) * 0x68;
            lVar8 = *(longlong *)(lVar11 + 0x18);
            if (*(longlong *)(lVar11 + 0x18) == 0) {
              lVar8 = lVar11 + 8;
            }
            *(uint *)(lVar8 + 0xc) = *(uint *)(lVar8 + 0xc) | 0x400;
            *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
          }
        }
      }
    }
  }
  if (((char)param_1[0x126f] == '\x01') && (param_1[0x1270] == 0)) {
    local_78 = (longlong *)0x0;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    FUN_1446efa72(&local_78,0,3,0x10);
    plVar10 = local_78;
    uStack_70 = CONCAT44(uStack_70._4_4_,3);
    *local_78 = (longlong)&PTR_LAB_14b95c330;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_78[2] = lVar11;
    *local_78 = (longlong)&PTR_FUN_14b95c2c0;
    local_78[3] = 0;
    iVar16 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar17 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar17;
      if ((int)uVar17 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar16 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar16 = *(int *)(lVar8 + 0x10);
        bVar18 = iVar16 == 0;
        if (bVar18) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar18) {
          iVar16 = iVar7;
        }
      }
    }
    *(int *)((longlong)plVar10 + 0x1c) = iVar16;
    plVar10[4] = (longlong)FUN_14126dcca;
    *(undefined4 *)(plVar10 + 5) = 0;
    if (((int)uStack_70 == 0) || (local_78 == (longlong *)0x0)) {
LAB_140350a16:
      if ((int)uStack_70 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14035064c;
      }
      if (local_78 != (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        goto LAB_14035063f;
      }
      plVar10 = (longlong *)0x0;
    }
    else {
      cVar6 = (**(code **)(*local_78 + 0x30))();
      if (cVar6 == '\0') {
        goto LAB_140350a16;
      }
      plVar1 = param_1 + 0x2b8;
      if (*(int *)((longlong)param_1 + 0x15d4) < 1) {
        iVar16 = (int)param_1[0x2b9];
        iVar7 = (int)param_1[0x2ba] + -1;
        *(int *)(param_1 + 0x2ba) = iVar7;
        if (iVar7 <= iVar16) {
          iVar7 = iVar16;
          if (0 < iVar16) {
            iVar15 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                  (plVar10 = *(longlong **)(*plVar1 + (longlong)iVar15 * 0x10),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar10 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar1,iVar15);
                FUN_14005b248(plVar1);
              }
              else {
                iVar15 = iVar15 + 1;
              }
              iVar7 = (int)param_1[0x2b9];
            } while (iVar15 < iVar7);
          }
          iVar15 = 2;
          if (2 < iVar7 * 2) {
            iVar15 = iVar7 * 2;
          }
          *(int *)(param_1 + 0x2ba) = iVar15;
          if ((iVar15 < iVar16) && (*(int *)((longlong)param_1 + 0x15cc) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      plVar10 = (longlong *)0x0;
      if (((int)uStack_70 != 0) && (local_78 != (longlong *)0x0)) {
        (**(code **)(*local_78 + 0x38))(local_78,&local_80);
        plVar10 = local_80;
      }
      iVar16 = (int)param_1[0x2b9];
      *(uint *)(param_1 + 0x2b9) = iVar16 + 1U;
      if (*(uint *)((longlong)param_1 + 0x15cc) < iVar16 + 1U) {
        FUN_1447a71f6(plVar1,iVar16);
      }
      lVar8 = *plVar1;
      lVar11 = (longlong)iVar16 * 0x10;
      *(undefined8 *)(lVar8 + lVar11) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar11) = 0;
      *(longlong **)(lVar8 + lVar11) = local_78;
      local_78 = (longlong *)0x0;
      *(int *)(lVar8 + 8 + lVar11) = (int)uStack_70;
LAB_14035063f:
      uStack_70 = uStack_70 & 0xffffffff00000000;
LAB_14035064c:
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    param_1[0x1270] = (longlong)plVar10;
    FUN_1406966b6(param_1,&DAT_14cbc1db8,(char)param_1[0x126f]);
  }
  lVar8 = param_1[0x7ee];
  lVar11 = *(longlong *)(lVar8 + 0xa00);
  if (lVar11 == 0) {
    uVar9 = FUN_140350ee2();
    lVar11 = FUN_14477b664(uVar9);
    *(longlong *)(lVar8 + 0xa00) = lVar11;
  }
  if (((*(longlong *)(lVar8 + 0xa08) == 0) && (lVar11 != 0)) && (*(longlong *)(lVar8 + 0x9f8) != 0))
  {
    plVar10 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
      uVar9 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x9f8));
    }
    *(undefined8 *)(lVar8 + 0xa08) = uVar9;
  }
  FUN_1403512e0(param_1 + 0x134a,param_1);
LAB_1403502a4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140350ab4 FUN_140350ab4 body=66 status=ok
// SIG undefined FUN_140350ab4(void)

bool FUN_140350ab4(longlong param_1)

{
  bool bVar1;
  
  if ((((*(longlong *)(param_1 + 0x148) == 0) || (*(longlong *)(param_1 + 0x140) == 0)) ||
      (*(longlong *)(param_1 + 0x168) == 0)) ||
     ((*(longlong *)(param_1 + 0x170) == 0 || (*(longlong *)(param_1 + 0x178) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(longlong *)(param_1 + 0x180) != 0;
  }
  return bVar1;
}



// FUNCTION 140350af6 FUN_140350af6 body=123 status=ok
// SIG undefined FUN_140350af6(void)

void FUN_140350af6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2);
  *(undefined1 *)(param_1 + 0x20b) = uVar1;
  lVar2 = FUN_140350b72(param_2);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x120) = lVar2;
  lVar2 = FUN_140350bb8(param_2);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x128) = lVar2;
  return;
}



// FUNCTION 140350b72 FUN_140350b72 body=70 status=ok
// SIG undefined FUN_140350b72(void)

longlong FUN_140350b72(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140350c88(param_1 + 0xaa8);
  if (lVar1 != 0) {
    lVar2 = FUN_1400d1e14();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140350bb8 FUN_140350bb8 body=70 status=ok
// SIG undefined FUN_140350bb8(void)

longlong FUN_140350bb8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140350c88(param_1 + 0xad0);
  if (lVar1 != 0) {
    lVar2 = FUN_1400d1e14();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140350bfe FUN_140350bfe body=136 status=ok
// SIG undefined FUN_140350bfe(void)

longlong FUN_140350bfe(undefined8 *param_1)

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
    if (DAT_14cb8bff0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb8bff0,local_40);
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



// FUNCTION 140350c88 FUN_140350c88 body=380 status=ok
// SIG undefined FUN_140350c88(void)

longlong FUN_140350c88(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140350e04();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140350e04 FUN_140350e04 body=221 status=ok
// SIG undefined FUN_140350e04(void)

longlong FUN_140350e04(void)

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
  if (DAT_14cad4128 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a3dad5;
    local_40 = FUN_1463c12dd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"CurveBase",&DAT_14cad4128,FUN_1463c12b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4128;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140350ee2 FUN_140350ee2 body=57 status=ok
// SIG undefined FUN_140350ee2(void)

void FUN_140350ee2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad370 = FUN_140002ddd(FUN_1465e5f7c,uVar1,L"OakOrderRewindDef");
  }
  return;
}



// FUNCTION 140350f1c FUN_140350f1c body=249 status=ok
// SIG undefined FUN_140350f1c(void)

void FUN_140350f1c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x3f70) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) {
    lVar3 = FUN_1410decb6();
    lVar1 = *(longlong *)(param_1 + 0x188);
    if ((lVar1 != 0) &&
       ((((lVar3 != 0 && (lVar4 = *(longlong *)(lVar1 + 0x10), lVar4 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      lVar3 = *(longlong *)(param_1 + 0x3c0);
      if (lVar3 != 0) {
        lVar4 = FUN_144a75eb4();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (*(longlong *)(lVar3 + 0x508) != 0)) {
          lVar4 = FUN_140dd10c4();
          plVar2 = *(longlong **)(lVar3 + 0x508);
          if (((plVar2 != (longlong *)0x0) && (lVar4 != 0)) &&
             ((lVar3 = plVar2[2], lVar3 != 0 &&
              ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)))))) {
            (**(code **)(*plVar2 + 0x310))(plVar2,*(longlong *)(param_1 + 0x3f70) + 0xb28);
          }
        }
      }
      FUN_140375764(lVar1,*(longlong *)(param_1 + 0x3f70) + 0xb48);
      return;
    }
  }
  return;
}



// FUNCTION 140351016 FUN_140351016 body=281 status=ok
// SIG undefined FUN_140351016(void)

void FUN_140351016(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar3 != 0)) {
    uVar5 = thunk_FUN_14050fd64();
    local_38 = 0;
    FUN_14088df30(uVar5,&local_30,lVar3,0);
    plVar2 = local_28;
    if (param_1 + 0x5c != &local_30) {
      param_1[0x5c] = local_30;
      local_30 = 0;
      plVar4 = (longlong *)param_1[0x5d];
      if (local_28 != plVar4) {
        local_28 = (longlong *)0x0;
        param_1[0x5d] = (longlong)plVar2;
        if (plVar4 != (longlong *)0x0) {
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
      }
    }
    plVar2 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140351130 FUN_140351130 body=354 status=ok
// SIG undefined FUN_140351130(void)

void FUN_140351130(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  if ((longlong)(int)param_2[1] != 0) {
    puVar13 = (undefined8 *)*param_2;
    puVar1 = puVar13 + (longlong)(int)param_2[1] * 5;
    lVar4 = *param_1;
    do {
      lVar10 = FUN_14096f566(puVar13);
      if ((lVar10 != 0) && ((longlong)*(int *)(lVar10 + 0x38) != 0)) {
        puVar12 = *(undefined8 **)(lVar10 + 0x30);
        lVar10 = (longlong)*(int *)(lVar10 + 0x38) << 3;
        do {
          uVar5 = *puVar12;
          uVar6 = (uint)((ulonglong)uVar5 >> 0x10);
          uVar14 = (uint)uVar5 & 0xffff;
          lVar11 = FUN_140d01a7c(lVar4 + 0x7c18,
                                 ((uint)uVar5 << 0x10 | uVar14) + (int)((ulonglong)uVar5 >> 0x20) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4),puVar12);
          iVar3 = *(int *)(lVar11 + 0x30);
          lVar16 = (longlong)iVar3;
          *(uint *)(lVar11 + 0x30) = iVar3 + 1U;
          if (*(uint *)(lVar11 + 0x34) < iVar3 + 1U) {
            FUN_148cd07a6(lVar11,iVar3);
          }
          if (*(longlong *)(lVar11 + 0x28) != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x28);
          }
          *(undefined8 *)(lVar11 + lVar16 * 0x28) = *puVar13;
          uVar7 = *(undefined4 *)((longlong)puVar13 + 0xc);
          uVar8 = *(undefined4 *)(puVar13 + 2);
          uVar9 = *(undefined4 *)((longlong)puVar13 + 0x14);
          puVar2 = (undefined4 *)(lVar11 + 8 + lVar16 * 0x28);
          *puVar2 = *(undefined4 *)(puVar13 + 1);
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          *(undefined8 *)(lVar11 + 0x18 + lVar16 * 0x28) = 0;
          iVar3 = *(int *)(puVar13 + 4);
          _Src = (void *)puVar13[3];
          *(int *)(lVar11 + 0x20 + lVar16 * 0x28) = iVar3;
          if ((longlong)iVar3 == 0) {
            *(undefined4 *)(lVar11 + lVar16 * 0x28 + 0x24) = 0;
          }
          else {
            puVar15 = (undefined8 *)(lVar11 + lVar16 * 0x28 + 0x18);
            FUN_1446dd670(puVar15,iVar3,0);
            memcpy((void *)*puVar15,_Src,(longlong)iVar3 * 2);
          }
          puVar12 = puVar12 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      puVar13 = puVar13 + 5;
    } while (puVar13 != puVar1);
  }
  return;
}



// FUNCTION 1403512e0 FUN_1403512e0 body=511 status=ok
// SIG undefined FUN_1403512e0(void)

void FUN_1403512e0(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar2 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar6;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar2;
    uVar3 = FUN_140a32494();
    lVar7 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (lVar7 != 0) {
      uVar3 = FUN_140a32494();
      lVar4 = FUN_144718840(lVar7,uVar3);
      if (lVar7 != lVar4) goto LAB_140351382;
    }
  }
  lVar4 = 0;
LAB_140351382:
  FUN_1403514e0(&local_40,lVar4);
  *(undefined4 *)(param_1 + 0x48) = local_40;
  *(undefined4 *)(param_1 + 0x4c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x50) = uStack_38;
  *(undefined4 *)(param_1 + 0x54) = uStack_34;
  *(longlong *)(param_1 + 0x40) = param_3;
  uVar5 = 0;
  if (param_3 != 0) {
    uVar5 = *(undefined4 *)(param_3 + 0x1c);
  }
  FUN_1403515ac(param_1 + 0x20,uVar5);
  if (param_2 != (longlong *)0x0) {
    lVar7 = FUN_140a40fb0(param_2);
    if (lVar7 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 0x5c) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar2 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar2 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar2 = iVar6;
        }
      }
    }
    *(int *)(param_1 + 0x60) = iVar2;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140351c8e(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403514e0 FUN_1403514e0 body=204 status=ok
// SIG undefined FUN_1403514e0(void)

uint * FUN_1403514e0(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1403515ac FUN_1403515ac body=355 status=ok
// SIG undefined FUN_1403515ac(void)

void FUN_1403515ac(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_2 < 1) {
    *(undefined8 *)(param_1 + 8) = 0;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_140351670;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x28);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b9615d0;
  uVar3 = (ulonglong)(param_2 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar6 = 1 << ((byte)lVar4 & 0x1f);
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(int *)(plVar5 + 4) = iVar6;
  FUN_14035265e(plVar5 + 3);
  memset((void *)plVar5[3],0,(longlong)iVar6 << 4);
  *(int *)(plVar5 + 2) = (int)plVar5[4] + -1;
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x10);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 8) = plVar5 + 2;
    plVar7 = *(longlong **)(param_1 + 0x10);
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
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      goto LAB_140351670;
    }
    *(longlong **)(param_1 + 0x10) = plVar5;
    if (plVar7 == (longlong *)0x0) goto LAB_140351670;
  }
  LOCK();
  plVar2 = plVar7 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
LAB_140351670:
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014035169b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140351710 thunk_FUN_14050fd64 body=5 status=ok
// SIG undefined thunk_FUN_14050fd64(void)

void thunk_FUN_14050fd64(void)

{
  if (*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0) {
    return;
  }
  FUN_140033559(".\\Runtime/Engine/Private/AssetManager.cpp",0x1e5,
                L"Cannot use AssetManager if no AssetManagerClassName is defined!");
  FUN_14795019f(DAT_14c951640);
  return;
}



// FUNCTION 140351716 FUN_140351716 body=1398 status=ok
// SIG undefined FUN_140351716(void)

void FUN_140351716(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  void *pvVar21;
  longlong lVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_f8 [40];
  uint *local_d0;
  void *local_c8;
  uint *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    local_a0 = lVar9 + (longlong)(int)param_2[1] * 0x28;
    local_a8 = *param_1 + 0x7c18;
    do {
      local_b8 = lVar9;
      lVar9 = FUN_140d02256(lVar9);
      if (lVar9 != 0) {
        lVar9 = FUN_140d02256(local_b8);
        local_b0 = lVar9;
        if ((longlong)*(int *)(lVar9 + 0x38) != 0) {
          puVar14 = *(uint **)(lVar9 + 0x30);
          local_d0 = puVar14 + (longlong)*(int *)(lVar9 + 0x38) * 2;
          do {
            lVar22 = *(longlong *)puVar14;
            if (lVar22 != 0) {
              local_98 = 0;
              uStack_90 = 0;
              local_c0 = puVar14;
              FUN_1400bbfc4(&local_80);
              iVar17 = local_68;
              local_98 = local_80;
              uStack_90 = CONCAT44(uStack_74,uStack_78);
              local_c8 = local_70;
              cVar8 = (*(code *)PTR_FUN_14c758760)();
              uVar3 = *(uint *)(lVar22 + 0xc);
              if (cVar8 == '\0') {
LAB_14035183c:
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                uVar23 = uVar3;
                iVar20 = *(int *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar20 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar11 = DAT_14c964868 + 1;
                  bVar24 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar20;
                  if (bVar24) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar11);
                  }
                  LOCK();
                  iVar20 = *(int *)(lVar9 + 0x10);
                  bVar24 = iVar20 == 0;
                  if (bVar24) {
                    *(int *)(lVar9 + 0x10) = iVar11;
                    iVar20 = 0;
                  }
                  UNLOCK();
                  if (bVar24) {
                    iVar20 = iVar11;
                  }
                }
              }
              else {
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                uVar23 = 0;
                iVar20 = 0;
                if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) goto LAB_14035183c;
              }
              iVar11 = *(int *)(lVar22 + 0x38);
              if ((longlong)iVar11 != 0) {
                lVar9 = *(longlong *)(lVar22 + 0x30);
                lVar22 = 0;
                do {
                  local_80 = *(undefined8 *)(lVar9 + lVar22);
                  uVar3 = (uint)((ulonglong)local_80 >> 0x10);
                  uVar15 = (uint)local_80 & 0xffff;
                  lVar10 = FUN_140d01a7c(local_a8,((uint)local_80 << 0x10 | uVar15) +
                                                  (int)((ulonglong)local_80 >> 0x20) +
                                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar15 >> 4),
                                         &local_80);
                  iVar12 = *(int *)(lVar10 + 0x30);
                  lVar18 = (longlong)iVar12;
                  *(uint *)(lVar10 + 0x30) = iVar12 + 1U;
                  if (*(uint *)(lVar10 + 0x34) < iVar12 + 1U) {
                    FUN_148cd07a6(lVar10,iVar12);
                  }
                  if (*(longlong *)(lVar10 + 0x28) != 0) {
                    lVar10 = *(longlong *)(lVar10 + 0x28);
                  }
                  *(ulonglong *)(lVar10 + lVar18 * 0x28) = CONCAT44(iVar20,uVar23);
                  puVar2 = (undefined4 *)(lVar10 + 8 + lVar18 * 0x28);
                  *puVar2 = (undefined4)local_98;
                  puVar2[1] = local_98._4_4_;
                  puVar2[2] = (undefined4)uStack_90;
                  puVar2[3] = uStack_90._4_4_;
                  *(undefined8 *)(lVar10 + 0x18 + lVar18 * 0x28) = 0;
                  *(int *)(lVar10 + 0x20 + lVar18 * 0x28) = iVar17;
                  if (iVar17 == 0) {
                    *(undefined4 *)(lVar10 + lVar18 * 0x28 + 0x24) = 0;
                  }
                  else {
                    puVar19 = (undefined8 *)(lVar10 + lVar18 * 0x28 + 0x18);
                    FUN_1446dd670(puVar19,iVar17,0);
                    memcpy((void *)*puVar19,local_c8,(longlong)iVar17 * 2);
                  }
                  lVar22 = lVar22 + 8;
                } while ((longlong)iVar11 * 8 != lVar22);
              }
              lVar9 = local_b0;
              puVar14 = local_c0;
              if (local_c8 != (void *)0x0) {
                FUN_1400020a8();
                lVar9 = local_b0;
                puVar14 = local_c0;
              }
            }
            puVar14 = puVar14 + 2;
          } while (puVar14 != local_d0);
        }
        uVar3 = *(uint *)(lVar9 + 0x68);
        if (uVar3 == 0) {
          uVar16 = 1;
          pvVar21 = (void *)0x0;
          iVar17 = 0;
          uVar23 = 0;
        }
        else {
          puVar14 = *(uint **)(lVar9 + 0x60);
          if (*(uint **)(lVar9 + 0x60) == (uint *)0x0) {
            puVar14 = (uint *)(lVar9 + 0x50);
          }
          uVar23 = *puVar14;
          if (uVar23 == 0) {
            iVar17 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar17 = uVar3 - 1;
            }
            pvVar21 = (void *)0x0;
            pvVar13 = (void *)(ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              pvVar13 = pvVar21;
            }
            iVar17 = 0;
            do {
              if (pvVar13 == pvVar21) goto LAB_140351a68;
              iVar17 = iVar17 + 0x20;
              uVar23 = puVar14[(longlong)pvVar21 + 1];
              pvVar21 = (void *)((longlong)pvVar21 + 1);
            } while (uVar23 == 0);
          }
          else {
            pvVar21 = (void *)0x0;
            iVar17 = 0;
          }
          uVar16 = (ulonglong)(-uVar23 & uVar23);
          uVar1 = uVar16 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar23 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar23) {
            uVar23 = uVar3;
          }
        }
        if (uVar23 != uVar3) {
          uVar15 = 0xffffffff;
          local_d0 = (uint *)(ulonglong)uVar3;
          local_c0 = (uint *)(lVar9 + 0x50);
          do {
            lVar22 = *(longlong *)(lVar9 + 0x40) + (longlong)(int)uVar23 * 0x38;
            uVar4 = *(undefined8 *)(*(longlong *)(lVar9 + 0x40) + (longlong)(int)uVar23 * 0x38);
            uVar3 = (uint)((ulonglong)uVar4 >> 0x10);
            uVar23 = (uint)uVar4 & 0xffff;
            local_c8 = pvVar21;
            lVar10 = FUN_140d01a7c(local_a8,((uint)uVar4 << 0x10 | uVar23) +
                                            (int)((ulonglong)uVar4 >> 0x20) +
                                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar23 >> 4),lVar22)
            ;
            iVar20 = *(int *)(lVar10 + 0x30);
            lVar18 = (longlong)iVar20;
            *(uint *)(lVar10 + 0x30) = iVar20 + 1U;
            if (*(uint *)(lVar10 + 0x34) < iVar20 + 1U) {
              FUN_148cd07a6(lVar10,iVar20);
            }
            if (*(longlong *)(lVar10 + 0x28) != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x28);
            }
            *(undefined8 *)(lVar10 + lVar18 * 0x28) = *(undefined8 *)(lVar22 + 8);
            uVar5 = *(undefined4 *)(lVar22 + 0x14);
            uVar6 = *(undefined4 *)(lVar22 + 0x18);
            uVar7 = *(undefined4 *)(lVar22 + 0x1c);
            puVar2 = (undefined4 *)(lVar10 + 8 + lVar18 * 0x28);
            *puVar2 = *(undefined4 *)(lVar22 + 0x10);
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            *(undefined8 *)(lVar10 + 0x18 + lVar18 * 0x28) = 0;
            iVar20 = *(int *)(lVar22 + 0x28);
            pvVar21 = *(void **)(lVar22 + 0x20);
            *(int *)(lVar10 + 0x20 + lVar18 * 0x28) = iVar20;
            if ((longlong)iVar20 == 0) {
              *(undefined4 *)(lVar10 + lVar18 * 0x28 + 0x24) = 0;
            }
            else {
              puVar19 = (undefined8 *)(lVar10 + lVar18 * 0x28 + 0x18);
              FUN_1446dd670(puVar19,iVar20,0);
              memcpy((void *)*puVar19,pvVar21,(longlong)iVar20 * 2);
            }
            uVar15 = uVar15 & ~(uint)uVar16;
            puVar14 = *(uint **)(lVar9 + 0x60);
            if (*(uint **)(lVar9 + 0x60) == (uint *)0x0) {
              puVar14 = local_c0;
            }
            uVar3 = *(uint *)(lVar9 + 0x68);
            iVar20 = (int)local_c8;
            lVar22 = (longlong)iVar20;
            uVar23 = puVar14[lVar22] & uVar15;
            pvVar21 = local_c8;
            if (uVar23 == 0) {
              iVar11 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar11 = uVar3 - 1;
              }
              iVar11 = iVar11 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar12 = iVar11;
              if (iVar11 < iVar20) {
                iVar12 = iVar20;
              }
              if (iVar20 < iVar11) {
                lVar10 = 0;
                do {
                  uVar23 = puVar14[lVar22 + lVar10 + 1];
                  if (uVar23 != 0) {
                    pvVar21 = (void *)(ulonglong)(iVar20 + (int)lVar10 + 1);
                    uVar15 = 0xffffffff;
                    goto LAB_140351bf7;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar10 = lVar10 + 1;
                } while (iVar12 - lVar22 != lVar10);
                uVar15 = 0xffffffff;
                iVar20 = iVar12;
              }
              pvVar21 = (void *)(ulonglong)(iVar20 + 1);
              lVar9 = local_b0;
              uVar23 = uVar3;
            }
            else {
LAB_140351bf7:
              uVar16 = (ulonglong)(-uVar23 & uVar23);
              uVar1 = uVar16 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              uVar23 = (iVar17 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar23) {
                uVar23 = uVar3;
              }
            }
          } while (uVar23 != (uint)local_d0);
        }
      }
LAB_140351a68:
      lVar9 = local_b8 + 0x28;
    } while (lVar9 != local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140351c8e FUN_140351c8e body=165 status=ok
// SIG undefined FUN_140351c8e(void)

void FUN_140351c8e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x3c))) &&
       (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 && (*(longlong *)(param_1 + 0x50) != 0)))) {
      if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x4c))) &&
            ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) &&
           ((*(longlong *)(param_1 + 0x40) != 0 && (*(char *)(param_1 + 0x58) != '\x01')))) {
          FUN_1407c9f6e(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140351d34 FUN_140351d34 body=1957 status=ok
// SIG undefined FUN_140351d34(void)

void FUN_140351d34(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
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
  code *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x140) = param_3;
  if ((param_2 == 0) || ((bVar4 & 1) == 0)) {
    if (param_2 != 0) goto LAB_140351d9b;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    bVar3 = true;
LAB_1403523a1:
    lVar8 = 0;
  }
  else {
    FUN_1456cec3c(param_2);
LAB_140351d9b:
    uVar7 = FUN_140b040c0();
    uVar7 = FUN_144718840(param_2,uVar7);
    if (DAT_14c950c29 == 1 && param_2 != 0) {
      FUN_1456cec3c(param_2);
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x158) = param_2;
    *(undefined8 *)(param_1 + 0x160) = uVar7;
    if ((param_2 != 0) && ((bVar4 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    uVar7 = FUN_1407ca880();
    uVar7 = FUN_144718840(param_2,uVar7);
    if (DAT_14c950c29 == 1 && param_2 != 0) {
      FUN_1456cec3c(param_2);
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x168) = param_2;
    *(undefined8 *)(param_1 + 0x170) = uVar7;
    if ((param_2 != 0) && ((bVar4 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    if (DAT_14cb56270 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_148630fef;
      local_80 = FUN_1464b6a91;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    uVar7 = FUN_144718840(param_2,DAT_14cb56270);
    if (DAT_14c950c29 == 1 && param_2 != 0) {
      FUN_1456cec3c(param_2);
    }
    bVar4 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x178) = param_2;
    *(undefined8 *)(param_1 + 0x180) = uVar7;
    if ((param_2 != 0) && ((bVar4 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    uVar7 = FUN_14072d970();
    uVar7 = FUN_144718840(param_2,uVar7);
    if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x188) = param_2;
    *(undefined8 *)(param_1 + 400) = uVar7;
    if (DAT_14cba8288 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = (code *)&LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = (code *)&LAB_140f21842;
      local_88 = L"Game";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      bVar3 = false;
      goto LAB_1403523a1;
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    bVar3 = false;
    lVar8 = param_2;
  }
  *(longlong *)(param_1 + 0x150) = lVar8;
  if (((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong **)(param_1 + 0x180) != (longlong *)0x0)
      ) && (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))(), lVar8 != 0)) {
    local_50 = (code *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    *(undefined ***)local_50 = &PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    *(longlong *)(local_50 + 0x10) = lVar10;
    *(undefined ***)local_50 = &PTR_FUN_14b975b70;
    *(longlong *)(local_50 + 0x18) = param_1;
    *(code **)(local_50 + 0x20) = FUN_140e29b36;
    FUN_1403524de(lVar8 + 0xf8,local_40,&local_50);
    if (local_48 != 0) {
      if (local_50 == (code *)0x0) goto LAB_140351fde;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140351fde:
  uVar9 = 0;
  do {
    if (uVar9 < 6) {
      *(undefined8 *)(param_1 + 0x1d0 + uVar9 * 4) = 0xbf800000bf800000;
    }
    uVar9 = uVar9 + 2;
  } while (uVar9 != 6);
  if ((bVar3) || (lVar8 = FUN_140a40fb0(param_2), lVar8 == 0)) goto LAB_14035217a;
  local_50 = (code *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *(undefined ***)local_50 = &PTR_LAB_14ab9f910;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  *(longlong *)(local_50 + 0x10) = lVar10;
  *(undefined ***)local_50 = &PTR_FUN_14b975be0;
  *(longlong *)(local_50 + 0x18) = param_1;
  *(undefined1 **)(local_50 + 0x20) = &LAB_1409a7bea;
  if ((local_50 == (code *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (code *)0x0) goto LAB_14035217a;
      (*(code *)**(undefined8 **)local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140352161;
    }
  }
  else {
    plVar13 = (longlong *)(lVar8 + 0x1258);
    if (*(int *)(lVar8 + 0x126c) < 1) {
      iVar1 = *(int *)(lVar8 + 0x1260);
      iVar6 = *(int *)(lVar8 + 0x1268) + -1;
      *(int *)(lVar8 + 0x1268) = iVar6;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
        if (0 < iVar1) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar13 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar13 + (longlong)iVar11 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar13,iVar11);
              FUN_14005b248(plVar13);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar6 = *(int *)(lVar8 + 0x1260);
          } while (iVar11 < iVar6);
        }
        iVar11 = 2;
        if (2 < iVar6 * 2) {
          iVar11 = iVar6 * 2;
        }
        *(int *)(lVar8 + 0x1268) = iVar11;
        if ((iVar11 < iVar1) && (*(int *)(lVar8 + 0x1264) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_50 + 0x38))(local_50,local_40);
    }
    iVar1 = *(int *)(lVar8 + 0x1260);
    *(uint *)(lVar8 + 0x1260) = iVar1 + 1U;
    if (*(uint *)(lVar8 + 0x1264) < iVar1 + 1U) {
      FUN_1447a71f6(plVar13,iVar1);
    }
    lVar8 = *plVar13;
    lVar12 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar8 + lVar12) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar12) = 0;
    *(code **)(lVar8 + lVar12) = local_50;
    local_50 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar12) = local_48;
LAB_140352161:
    local_48 = 0;
  }
  if (local_50 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14035217a:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403524de FUN_1403524de body=370 status=ok
// SIG undefined FUN_1403524de(void)

undefined8 * FUN_1403524de(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14035265e FUN_14035265e body=246 status=ok
// SIG undefined FUN_14035265e(void)

void FUN_14035265e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 140352754 FUN_140352754 body=2306 status=ok
// SIG undefined FUN_140352754(void)

void FUN_140352754(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  longlong local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined1 local_89;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  void *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140893a5c();
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x20) = param_2;
    plVar16 = (longlong *)(param_2 + 0x10e8);
    lVar8 = (**(code **)(*(longlong *)(param_2 + 0x10e8) + 0x10))(plVar16);
    if (lVar8 != 0) {
      lVar8 = (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_140816b78(param_1 + 0x58,lVar8 + 0x50);
    }
  }
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x28) = param_3;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    iVar12 = *(int *)(param_3 + 0x28);
    local_d0 = param_4;
    if (iVar12 < 0) {
LAB_140352f13:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar12 != 0) {
      FUN_140353058(&local_58);
      if ((longlong)*(int *)(param_3 + 0x28) != 0) {
        plVar16 = *(longlong **)(param_3 + 0x20);
        plVar14 = plVar16 + (longlong)*(int *)(param_3 + 0x28) * 3;
        do {
          local_c0 = (void *)0x0;
          local_c8 = *plVar16;
          local_b8 = 0;
          uVar9 = FUN_14477b664(plVar16[1]);
          local_c0 = (void *)FUN_14477b664(uVar9);
          local_b8 = plVar16[2];
          if (local_c0 == (void *)0x0) {
            uVar9 = FUN_145d838a4();
            local_c0 = (void *)FUN_14477b664(uVar9);
          }
          if (local_b8 == 0) {
            local_b8 = 0;
            if ((((local_c0 != (void *)0x0) && (local_c8 != 0)) &&
                (plVar2 = *(longlong **)((longlong)local_c0 + 0xb8), plVar2 != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 != '\0')) {
              uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
              local_b8 = FUN_144aff482(uVar9,&local_c8);
              if (local_b8 != 0) goto LAB_1403528ca;
            }
          }
          else {
LAB_1403528ca:
            uVar5 = uStack_50;
            lVar8 = local_b8;
            lVar13 = (longlong)(int)uStack_50;
            uVar7 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
            if (uStack_50._4_4_ < uVar7) {
              FUN_1488bec52(&local_58,uVar5 & 0xffffffff);
            }
            *(longlong *)((longlong)local_58 + lVar13 * 8) = lVar8;
          }
          plVar16 = plVar16 + 3;
        } while (plVar16 != plVar14);
      }
    }
    local_68 = (void *)0x0;
    uStack_60 = 0;
    iVar12 = *(int *)(param_3 + 0x38);
    if (iVar12 < 0) goto LAB_140352f13;
    if (iVar12 != 0) {
      FUN_140353058(&local_68);
      if ((longlong)*(int *)(param_3 + 0x38) != 0) {
        plVar14 = *(longlong **)(param_3 + 0x30);
        plVar16 = plVar14 + (longlong)*(int *)(param_3 + 0x38) * 3;
        do {
          local_c0 = (void *)0x0;
          local_c8 = *plVar14;
          local_b8 = 0;
          uVar9 = FUN_14477b664(plVar14[1]);
          local_c0 = (void *)FUN_14477b664(uVar9);
          local_b8 = plVar14[2];
          if (local_c0 == (void *)0x0) {
            uVar9 = FUN_145d838a4();
            local_c0 = (void *)FUN_14477b664(uVar9);
          }
          if (local_b8 == 0) {
            local_b8 = 0;
            if (((local_c0 != (void *)0x0) && (local_c8 != 0)) &&
               ((plVar2 = *(longlong **)((longlong)local_c0 + 0xb8), plVar2 != (longlong *)0x0 &&
                (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 != '\0')))) {
              uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
              local_b8 = FUN_144aff482(uVar9,&local_c8);
              if (local_b8 != 0) goto LAB_140352ddd;
            }
          }
          else {
LAB_140352ddd:
            uVar5 = uStack_60;
            lVar8 = local_b8;
            lVar13 = (longlong)(int)uStack_60;
            uVar7 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
            if (uStack_60._4_4_ < uVar7) {
              FUN_1488bec52(&local_68,uVar5 & 0xffffffff);
            }
            *(longlong *)((longlong)local_68 + lVar13 * 8) = lVar8;
          }
          plVar14 = plVar14 + 3;
        } while (plVar14 != plVar16);
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1403532ba(&local_78,&local_58);
    FUN_1403532ba(&local_78,&local_68);
    param_4 = local_d0;
    if (0 < (int)uStack_70) {
      lVar8 = FUN_14050fd64();
      pvVar4 = local_58;
      local_c0 = (void *)0x0;
      lVar13 = (longlong)(int)uStack_50;
      local_b8 = CONCAT44(local_b8._4_4_,(int)uStack_50);
      local_c8 = param_1;
      if (lVar13 == 0) {
        local_b8 = uStack_50 & 0xffffffff;
      }
      else {
        FUN_140353188(&local_c0,uStack_50 & 0xffffffff);
        memcpy(local_c0,pvVar4,lVar13 << 3);
      }
      pvVar4 = local_68;
      local_b0 = (void *)0x0;
      lVar13 = (longlong)(int)uStack_60;
      local_a8 = CONCAT44(local_a8._4_4_,(int)uStack_60);
      if (lVar13 == 0) {
        local_a8 = uStack_60 & 0xffffffff;
      }
      else {
        FUN_140353188(&local_b0,uStack_60 & 0xffffffff);
        memcpy(local_b0,pvVar4,lVar13 << 3);
      }
      lVar13 = *(longlong *)(param_1 + 0x20);
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,5,0x10);
      puVar3 = local_a0;
      local_98 = 5;
      *local_a0 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_a0[2] = lVar10;
      *local_a0 = &PTR_FUN_14b40fb90;
      local_a0[3] = 0;
      iVar12 = 0;
      if (lVar13 != 0) {
        uVar7 = *(uint *)(lVar13 + 0xc);
        *(uint *)(local_a0 + 3) = uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar12 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar12 = *(int *)(lVar13 + 0x10);
          bVar17 = iVar12 == 0;
          if (bVar17) {
            *(int *)(lVar13 + 0x10) = iVar15;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar12 = iVar15;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar12;
      puVar3[4] = local_c8;
      puVar3[5] = local_c0;
      local_c0 = (void *)0x0;
      *(undefined4 *)(puVar3 + 6) = (undefined4)local_b8;
      *(undefined4 *)((longlong)puVar3 + 0x34) = local_b8._4_4_;
      local_b8 = 0;
      puVar3[7] = local_b0;
      local_b0 = (void *)0x0;
      *(undefined4 *)(puVar3 + 8) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar3 + 0x44) = local_a8._4_4_;
      local_a8 = 0;
      local_e0 = &local_89;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_1457028c8(lVar8 + 0x1e8,&local_88,&local_78,&local_a0);
      plVar16 = local_80;
      if ((undefined8 *)(param_1 + 0x338) != &local_88) {
        *(undefined8 *)(param_1 + 0x338) = local_88;
        local_88 = 0;
        plVar14 = *(longlong **)(param_1 + 0x340);
        if (local_80 != plVar14) {
          local_80 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x340) = plVar16;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar14 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
      }
      plVar16 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_80 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      if (local_98 == 0) {
LAB_140352ba5:
        if (local_a0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_a0 != (undefined8 *)0x0) {
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
        goto LAB_140352ba5;
      }
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140861e20(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x30) = param_4;
  lVar13 = FUN_1405bbea6();
  lVar8 = *(longlong *)(lVar13 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar13);
    lVar8 = *(longlong *)(lVar13 + 0x110);
    if (lVar8 == 0) goto LAB_140352c91;
  }
  lVar13 = *(longlong *)(lVar8 + 0x48);
  if (lVar13 == 0) {
    uVar9 = FUN_1405bb4b8();
    lVar13 = FUN_14477b664(uVar9);
    *(longlong *)(lVar8 + 0x48) = lVar13;
  }
  lVar11 = *(longlong *)(lVar8 + 0x40);
  if (*(longlong *)(lVar8 + 0x50) == 0) {
    if ((lVar13 == 0) || (lVar11 == 0)) goto LAB_140352c91;
    plVar16 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar16 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar6 == '\0')) {
      *(undefined8 *)(lVar8 + 0x50) = 0;
      goto LAB_140352c91;
    }
    uVar9 = (**(code **)(*plVar16 + 0x110))(plVar16);
    lVar13 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x40));
    *(longlong *)(lVar8 + 0x50) = lVar13;
    if (lVar13 == 0) goto LAB_140352c91;
    lVar11 = *(longlong *)(lVar8 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x2f0) != lVar11) {
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  *(longlong *)(param_1 + 0x2f0) = lVar11;
  if (*(longlong *)(param_1 + 0x2f8) != *(longlong *)(lVar8 + 0x48)) {
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  uVar9 = FUN_14477b664();
  uVar9 = FUN_14477b664(uVar9);
  *(undefined8 *)(param_1 + 0x2f8) = uVar9;
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(lVar8 + 0x50);
LAB_140352c91:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140353058 FUN_140353058 body=304 status=ok
// SIG undefined FUN_140353058(void)

void FUN_140353058(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403530b9;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1403530b9:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140353188 FUN_140353188 body=306 status=ok
// SIG undefined FUN_140353188(void)

void FUN_140353188(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1403531ea;
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
LAB_1403531ea:
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



// FUNCTION 1403532ba FUN_1403532ba body=1826 status=ok
// SIG undefined FUN_1403532ba(void)

/* WARNING: Removing unreachable block (ram,0x000140353814) */
/* WARNING: Removing unreachable block (ram,0x0001403538f2) */

void FUN_1403532ba(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_e8 [32];
  int *local_c8;
  longlong *local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  void *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    local_c0 = plVar12 + (int)param_2[1];
    local_c8 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    do {
      lVar16 = DAT_14cb81480;
      lVar17 = *plVar12;
      if (lVar17 != 0) {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        iVar2 = *local_c8;
        if (iVar2 == 0x40000002) {
          uVar11 = 0;
        }
        else {
          bVar19 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
            if (iVar2 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              bVar19 = DVar9 == DVar10;
            }
            else {
              bVar19 = false;
            }
          }
          uVar11 = (ulonglong)(bVar19 ^ 1);
        }
        iVar2 = *(int *)(lVar17 + 0x40);
        if ((*(char *)(lVar16 + uVar11) == '\x01') && (0 < iVar2)) {
          puVar15 = *(undefined8 **)(lVar17 + 0x38);
          uStack_70 = CONCAT44(uStack_70._4_4_,1);
          FUN_140353c32(&local_78,0);
          *local_78 = *puVar15;
          uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
          uVar6 = *(undefined4 *)(puVar15 + 2);
          uVar7 = *(undefined4 *)((longlong)puVar15 + 0x14);
          *(undefined4 *)(local_78 + 1) = *(undefined4 *)(puVar15 + 1);
          *(undefined4 *)((longlong)local_78 + 0xc) = uVar5;
          *(undefined4 *)(local_78 + 2) = uVar6;
          *(undefined4 *)((longlong)local_78 + 0x14) = uVar7;
          local_78[3] = 0;
          iVar2 = *(int *)(puVar15 + 4);
          pvVar4 = (void *)puVar15[3];
          *(int *)(local_78 + 4) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)local_78 + 0x24) = 0;
          }
          else {
            puVar15 = local_78 + 3;
            FUN_1446dd670(puVar15,iVar2,0);
            memcpy((void *)*puVar15,pvVar4,(longlong)iVar2 * 2);
          }
        }
        else if (iVar2 != 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar2);
          FUN_140353c32(&local_78,0);
          FUN_140353ab4(local_78,*(undefined8 *)(lVar17 + 0x38));
        }
        uVar11 = uStack_70;
        uVar8 = *(uint *)(lVar17 + 0x98);
        if (uVar8 != 0) {
          iVar2 = (int)uStack_70;
          lVar16 = (longlong)(int)uStack_70;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8 + (int)uStack_70);
          if (uStack_70._4_4_ - iVar2 < uVar8) {
            FUN_140353c32(&local_78,uVar11 & 0xffffffff);
          }
          FUN_140353bb2(local_78 + lVar16 * 5,*(undefined8 *)(lVar17 + 0x90));
        }
        uVar11 = uStack_70;
        uVar8 = *(uint *)(lVar17 + 200);
        if (uVar8 != 0) {
          iVar2 = (int)uStack_70;
          lVar16 = (longlong)(int)uStack_70;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8 + (int)uStack_70);
          if (uStack_70._4_4_ - iVar2 < uVar8) {
            FUN_140353c32(&local_78,uVar11 & 0xffffffff);
          }
          FUN_140353b33(local_78 + lVar16 * 5,*(undefined8 *)(lVar17 + 0xc0));
        }
        iVar2 = *(int *)(lVar17 + 0x130);
        if ((longlong)iVar2 != 0) {
          lVar17 = *(longlong *)(lVar17 + 0x128);
          lVar16 = 0;
          do {
            if (*(longlong *)(lVar17 + 8 + lVar16) != 0) {
              lVar13 = lVar16 + lVar17 + 0x48;
              local_a0 = *(undefined8 *)(lVar13 + -0x48);
              local_98 = *(uint *)(lVar13 + -0x40);
              uStack_94 = *(uint *)(lVar13 + -0x3c);
              uStack_90 = *(uint *)(lVar13 + -0x38);
              uStack_8c = *(uint *)(lVar13 + -0x34);
              local_88 = (void *)0x0;
              uVar8 = *(uint *)(lVar13 + -0x28);
              pvVar4 = *(void **)(lVar13 + -0x30);
              local_80 = CONCAT44(local_80._4_4_,uVar8);
              if ((longlong)(int)uVar8 == 0) {
                local_80 = (ulonglong)uVar8;
              }
              else {
                FUN_1446dd670(&local_88,uVar8,0);
                memcpy(local_88,pvVar4,(longlong)(int)uVar8 * 2);
              }
              uVar11 = uStack_70;
              lVar13 = (longlong)(int)uStack_70;
              uVar8 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
              if (uStack_70._4_4_ < uVar8) {
                FUN_140353c32(&local_78,uVar11 & 0xffffffff);
              }
              local_78[lVar13 * 5] = local_a0;
              puVar1 = (uint *)(local_78 + lVar13 * 5 + 1);
              *puVar1 = local_98;
              puVar1[1] = uStack_94;
              puVar1[2] = uStack_90;
              puVar1[3] = uStack_8c;
              local_78[lVar13 * 5 + 3] = 0;
              local_78[lVar13 * 5 + 3] = local_88;
              local_88 = (void *)0x0;
              *(int *)(local_78 + lVar13 * 5 + 4) = (int)local_80;
              *(undefined4 *)((longlong)local_78 + lVar13 * 0x28 + 0x24) = local_80._4_4_;
              local_80 = 0;
            }
            if (*(longlong *)(lVar17 + 0x30 + lVar16) != 0) {
              puVar1 = (uint *)(lVar16 + lVar17 + 0x48);
              local_a0 = *(undefined8 *)(puVar1 + -8);
              local_98 = puVar1[-6];
              uStack_94 = puVar1[-5];
              uStack_90 = puVar1[-4];
              uStack_8c = puVar1[-3];
              local_88 = (void *)0x0;
              uVar8 = *puVar1;
              pvVar4 = *(void **)(puVar1 + -2);
              local_80 = CONCAT44(local_80._4_4_,uVar8);
              if ((longlong)(int)uVar8 == 0) {
                local_80 = (ulonglong)uVar8;
              }
              else {
                FUN_1446dd670(&local_88,uVar8,0);
                memcpy(local_88,pvVar4,(longlong)(int)uVar8 * 2);
              }
              uVar11 = uStack_70;
              lVar13 = (longlong)(int)uStack_70;
              uVar8 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
              if (uStack_70._4_4_ < uVar8) {
                FUN_140353c32(&local_78,uVar11 & 0xffffffff);
              }
              local_78[lVar13 * 5] = local_a0;
              puVar1 = (uint *)(local_78 + lVar13 * 5 + 1);
              *puVar1 = local_98;
              puVar1[1] = uStack_94;
              puVar1[2] = uStack_90;
              puVar1[3] = uStack_8c;
              local_78[lVar13 * 5 + 3] = 0;
              local_78[lVar13 * 5 + 3] = local_88;
              local_88 = (void *)0x0;
              *(int *)(local_78 + lVar13 * 5 + 4) = (int)local_80;
              *(undefined4 *)((longlong)local_78 + lVar13 * 0x28 + 0x24) = local_80._4_4_;
              local_80 = 0;
            }
            lVar13 = DAT_14cb81480;
            iVar3 = *local_c8;
            if (iVar3 == 0x40000002) {
              uVar11 = 0;
            }
            else {
              bVar19 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
                if (iVar3 == 1) {
                  DVar9 = FUN_140ad26c0();
                  DVar10 = GetCurrentThreadId();
                  bVar19 = DVar9 == DVar10;
                }
                else {
                  bVar19 = false;
                }
              }
              uVar11 = (ulonglong)(bVar19 ^ 1);
            }
          } while ((*(char *)(lVar13 + uVar11) == '\0') &&
                  (bVar19 = (longlong)iVar2 * 0x98 + -0x98 != lVar16, lVar16 = lVar16 + 0x98, bVar19
                  ));
        }
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uStack_70 & 0xffffffff);
        }
        if ((uStack_70 & 0xffffffff) != 0) {
          FUN_1403539de(&local_b8);
          if ((longlong)(int)uStack_70 != 0) {
            puVar15 = local_78 + (longlong)(int)uStack_70 * 5;
            puVar14 = local_78;
            do {
              local_a0 = *puVar14;
              local_98 = *(uint *)(puVar14 + 1);
              uStack_94 = *(uint *)((longlong)puVar14 + 0xc);
              uStack_90 = *(uint *)(puVar14 + 2);
              uStack_8c = *(uint *)((longlong)puVar14 + 0x14);
              local_88 = (void *)0x0;
              uVar8 = *(uint *)(puVar14 + 4);
              pvVar4 = (void *)puVar14[3];
              local_80 = CONCAT44(local_80._4_4_,uVar8);
              if ((longlong)(int)uVar8 == 0) {
                local_80 = (ulonglong)uVar8;
              }
              else {
                FUN_1446dd670(&local_88,uVar8,0);
                memcpy(local_88,pvVar4,(longlong)(int)uVar8 * 2);
              }
              uVar11 = uStack_b0;
              lVar17 = (longlong)(int)(uint)uStack_b0;
              uVar8 = (uint)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
              if (uStack_b0._4_4_ < uVar8) {
                FUN_1406f071e(&local_b8,uVar11 & 0xffffffff);
              }
              pvVar4 = local_88;
              lVar17 = lVar17 * 0x20;
              puVar1 = (uint *)((longlong)local_b8 + lVar17);
              *puVar1 = local_98;
              puVar1[1] = uStack_94;
              puVar1[2] = uStack_90;
              puVar1[3] = uStack_8c;
              *(undefined8 *)((longlong)local_b8 + lVar17 + 0x10) = 0;
              lVar16 = (longlong)(int)local_80;
              *(int *)((longlong)local_b8 + lVar17 + 0x18) = (int)local_80;
              if (lVar16 == 0) {
                *(undefined4 *)((longlong)local_b8 + lVar17 + 0x1c) = 0;
              }
              else {
                puVar18 = (undefined8 *)((longlong)local_b8 + lVar17 + 0x10);
                FUN_1446dd670(puVar18,local_80 & 0xffffffff,0);
                memcpy((void *)*puVar18,pvVar4,lVar16 * 2);
              }
              if (local_88 != (void *)0x0) {
                FUN_1400020a8();
              }
              puVar14 = puVar14 + 5;
            } while (puVar14 != puVar15);
          }
        }
        FUN_140595ef6(local_78);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        lVar17 = (longlong)(int)(uint)uStack_b0;
        if (lVar17 != 0) {
          iVar2 = (int)param_1[1];
          *(uint *)(param_1 + 1) = (uint)uStack_b0 + iVar2;
          if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < (uint)uStack_b0) {
            FUN_1406f071e(param_1,iVar2);
          }
          memmove((void *)((longlong)iVar2 * 0x20 + *param_1),local_b8,lVar17 << 5);
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
        }
        FUN_140861e20(local_b8);
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_c0);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403539de FUN_1403539de body=214 status=ok
// SIG undefined FUN_1403539de(void)

void FUN_1403539de(longlong param_1,int param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 140353ab4 FUN_140353ab4 body=127 status=ok
// SIG undefined FUN_140353ab4(void)

void FUN_140353ab4(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar5[-3] = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
    *(undefined4 *)(puVar5 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
    *puVar5 = 0;
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(puVar5 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar5,iVar1,0);
      memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
    }
    param_2 = param_2 + 5;
    puVar5 = puVar5 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140353b33 FUN_140353b33 body=127 status=ok
// SIG undefined FUN_140353b33(void)

void FUN_140353b33(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar5[-3] = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
    *(undefined4 *)(puVar5 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
    *puVar5 = 0;
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(puVar5 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar5,iVar1,0);
      memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
    }
    param_2 = param_2 + 5;
    puVar5 = puVar5 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140353bb2 FUN_140353bb2 body=127 status=ok
// SIG undefined FUN_140353bb2(void)

void FUN_140353bb2(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar5[-3] = *param_2;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 2);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
    *(undefined4 *)(puVar5 + -1) = uVar3;
    *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
    *puVar5 = 0;
    iVar1 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(puVar5 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar5,iVar1,0);
      memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
    }
    param_2 = param_2 + 5;
    puVar5 = puVar5 + 5;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140353c32 FUN_140353c32 body=373 status=ok
// SIG undefined FUN_140353c32(void)

void FUN_140353c32(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140353cbb;
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
LAB_140353cbb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140353da8 FUN_140353da8 body=7635 status=ok
// SIG undefined FUN_140353da8(void)

void FUN_140353da8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong **pplVar23;
  wchar_t *pwVar24;
  undefined1 uVar25;
  byte bVar26;
  uint uVar27;
  longlong *plVar28;
  uint uVar29;
  int iVar30;
  short sVar31;
  ulonglong uVar32;
  undefined1 uVar33;
  uint *puVar34;
  undefined8 in_R11;
  int iVar35;
  longlong **pplVar36;
  ulonglong uVar37;
  bool bVar38;
  double dVar39;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  longlong ***local_190;
  code *local_188;
  code *local_180;
  longlong **local_178;
  uint local_170;
  undefined4 local_16c;
  uint *local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong local_150;
  longlong **local_148;
  longlong lStack_140;
  longlong *local_138;
  code *local_128;
  longlong ***local_120;
  longlong **local_118;
  longlong lStack_110;
  longlong local_108;
  longlong local_f8;
  short local_f0;
  longlong local_e8;
  longlong **local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong **local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((longlong *)param_1[0x69] != (longlong *)0x0) {
    uVar12 = (**(code **)(*(longlong *)param_1[0x69] + 0xe0))();
    FUN_140358e3e(param_1 + 0x1c6,uVar12);
  }
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
LAB_140353e35:
    plVar28 = (longlong *)0x0;
  }
  else {
    lVar13 = (**(code **)(*param_2 + 8))();
    lVar14 = FUN_140355b7c();
    if ((lVar14 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar14 + 0x38))) goto LAB_140353e35;
    plVar28 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
        lVar14 + 0x30) {
      plVar28 = param_2;
    }
  }
  pplVar36 = (longlong **)(param_1 + -0x216);
  param_1[0x69] = (longlong)plVar28;
  if (param_1[-0x1a0] != 0) {
    FUN_14140e650(pplVar36);
    plVar28 = (longlong *)param_1[0x69];
  }
  if (plVar28 != (longlong *)0x0) {
    FUN_14078a36a(param_1 + 0x3a,param_1 + -1);
    uVar12 = (**(code **)(*(longlong *)param_1[0x69] + 0xe0))();
    FUN_14035fd50(param_1 + 0x1c6,uVar12,1);
    if ((*(byte *)((longlong)param_1 + -0x104b) & 0x18) == 0x10) {
      FUN_1409b534c(param_1 + 0x1c9,param_1 + 0xe);
    }
  }
  if ((param_1[0x441] != 0) && (param_1[0x69] != 0)) {
    *(undefined1 *)(param_1[0x441] + 0x17fe) = *(undefined1 *)(param_1[0x69] + 0x1da);
    lVar13 = FUN_1408c3c8e(param_1[0x69] + 0x218);
    if (lVar13 != 0) {
      lVar13 = param_1[0x441];
      uVar12 = FUN_1408c3c8e(param_1[0x69] + 0x218);
      FUN_145849808(lVar13,uVar12,1);
    }
  }
  FUN_1406c9d00(param_1 + 0x48,&local_a8);
  if (uStack_a0 == (longlong *)0x0) {
    uVar12 = FUN_140927942();
    uStack_a0 = (longlong *)FUN_14477b664(uVar12);
  }
  plVar28 = local_98;
  local_178 = pplVar36;
  if (local_98 == (longlong *)0x0) {
    if (local_a8 == (longlong **)0x0) {
      plVar28 = (longlong *)0x0;
    }
    else if (uStack_a0 == (longlong *)0x0) {
      plVar28 = (longlong *)0x0;
    }
    else {
      plVar28 = (longlong *)uStack_a0[0x17];
      if ((plVar28 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar28 + 0x108))(plVar28), cVar7 == '\0')) {
        plVar28 = (longlong *)0x0;
        local_98 = plVar28;
      }
      else {
        uVar12 = (**(code **)(*plVar28 + 0x110))(plVar28);
        plVar28 = (longlong *)FUN_144aff482(uVar12,&local_a8);
        local_98 = plVar28;
      }
    }
  }
  pwVar24 = (wchar_t *)local_178;
  FUN_14035c1e0(param_1 + 0x510,local_178,plVar28,param_1 + 100);
  plVar28 = (longlong *)param_1[100];
  if (plVar28 == (longlong *)0x0) {
LAB_140353f6c:
    FUN_140355ca0(param_1 + 0x4d3);
  }
  else {
    lVar13 = (**(code **)(*plVar28 + 8))(plVar28);
    lVar14 = FUN_140355bb6();
    if ((((lVar14 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar14 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
         lVar14 + 0x30)) || (param_1[0x69] == 0)) goto LAB_140353f6c;
    FUN_1414f0e2c(param_1 + 0x4d3,plVar28);
  }
  FUN_140356d34(pwVar24);
  if ((param_1[0x69] != 0) &&
     (cVar7 = (*(code *)(*(longlong **)pwVar24)[0x135])(pwVar24), cVar7 != '\0')) {
    (**(code **)(*(longlong *)param_1[0x69] + 0x168))((longlong *)param_1[0x69],&local_a8);
    uVar12 = FUN_1447210f0(pwVar24);
    local_e0 = local_a8;
    local_d8 = (undefined4)uStack_a0;
    local_d0 = 0;
    local_1c8 = CONCAT31(local_1c8._1_3_,1);
    FUN_14035b3c6(&local_c8,&local_e0,param_1 + 0x18,uVar12);
    plVar28 = plStack_c0;
    if ((longlong **)(param_1 + 0x4a4) != &local_c8) {
      param_1[0x4a4] = (longlong)local_c8;
      local_c8 = (longlong *)0x0;
      plVar5 = (longlong *)param_1[0x4a5];
      if (plStack_c0 != plVar5) {
        plStack_c0 = (longlong *)0x0;
        param_1[0x4a5] = (longlong)plVar28;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar28 = plVar5 + 1;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)*plVar28 == 0) {
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
    }
    plVar28 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_c0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
        }
      }
    }
  }
  local_158 = param_1 + 3;
  FUN_14078a0a0(local_158,0);
  if (param_1[0x69] == 0) {
    FUN_140355e94(param_1 + 0x7b);
    FUN_1405213ee(param_1 + -0xf7);
  }
  else {
    FUN_14035b082(param_1[0x69],&local_a8);
    FUN_14078b280(param_1 + 0x7b,pwVar24,&local_a8);
    if (local_a8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (((char)param_1[-0x1e7] == '\x03') &&
       ((param_1[-0xff] == 0 || ((-1 < (short)param_1[-0xfe] && (param_1[-0xfd] == 0)))))) {
      lVar13 = (**(code **)(*(longlong *)param_1[0x69] + 0x78))();
      lVar14 = FUN_14492b4b4(param_1[-0x1e9]);
      if (lVar14 == 0) {
        lVar14 = 0;
        lVar18 = lVar13;
        sVar31 = -1;
      }
      else {
        lVar18 = *(longlong *)(lVar14 + 0x20);
        pwVar24 = (wchar_t *)local_178;
        if (lVar18 != 0) {
          sVar31 = *(short *)(lVar14 + 0x28);
          lVar14 = *(longlong *)(lVar14 + 0x30);
          if ((sVar31 < 0) || (lVar14 != 0)) goto LAB_14035472c;
        }
        lVar14 = 0;
        lVar18 = lVar13;
        sVar31 = -1;
      }
LAB_14035472c:
      uVar12 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar13 = FUN_14492b4b4(uVar12);
      local_e8 = lVar14;
      local_f8 = lVar18;
      local_f0 = sVar31;
      if ((lVar13 != 0) && (lVar19 = *(longlong *)(lVar13 + 0x20), lVar19 != 0)) {
        local_f0 = *(short *)(lVar13 + 0x28);
        local_e8 = *(longlong *)(lVar13 + 0x30);
        local_f8 = lVar19;
        if ((-1 < local_f0) && (local_e8 == 0)) {
          local_e8 = lVar14;
          local_f8 = lVar18;
          local_f0 = sVar31;
        }
      }
      FUN_140365ba6(param_1 + -0x103,&local_f8,1);
    }
    FUN_140355bf0(param_1 + -0x103,*(undefined1 *)(param_1[0x69] + 0x1b8),
                  *(undefined1 *)(param_1[0x69] + 0x1b9));
    *(undefined1 *)((longlong)param_1 + -0x7c6) = *(undefined1 *)(param_1[0x69] + 0x1ba);
    *(undefined1 *)((longlong)param_1 + -0x7c5) = *(undefined1 *)(param_1[0x69] + 0x582);
    FUN_1404596f4(pwVar24);
    if (param_1[0x52c] == 0) {
      if (param_1[0x69] != 0) {
        lVar13 = param_1[0x69] + 0x4f0;
        goto LAB_14035413a;
      }
      lVar13 = 0;
      lVar14 = 0;
    }
    else {
      lVar13 = param_1[0x52c] + 200;
LAB_14035413a:
      lVar14 = FUN_140356e36(lVar13);
      lVar13 = param_1[0x69];
    }
    param_1[-0x24] = lVar14;
    uVar12 = FUN_1403580ac(lVar13 + 0x498);
    FUN_14035877e(param_1 + 0x300,pwVar24,uVar12);
    uVar12 = FUN_14011c2be(param_1[0x69] + 0x3b0);
    FUN_14035a536(param_1 + 0x47b,pwVar24,uVar12);
    if (param_1[0x27] != 0) {
      local_c8 = *(longlong **)(param_1[0x69] + 0x368);
      FUN_1446dcdd4(&local_a8);
      if (DAT_14cb75d60 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = FUN_144815d88(DAT_14cb75d60,&local_a8);
      }
      if (CONCAT44(iStack_8c,uStack_90) != 0) {
        FUN_1400020a8();
      }
      if (lVar13 != 0) {
        (**(code **)(*(longlong *)param_1[0x27] + 0xcf0))((longlong *)param_1[0x27],lVar13);
      }
    }
    lVar13 = param_1[0x50c];
    if ((char)param_1[-0x1e7] == '\x03') {
      if (lVar13 == 0) {
        FUN_1403629b4(pwVar24,&local_a8,param_1[0x69]);
        FUN_14035d9aa(pwVar24,&local_a8);
        goto LAB_1403547b8;
      }
LAB_1403547c8:
      FUN_140b3e45e();
    }
    else if (lVar13 != 0) {
      if ((*(longlong *)(lVar13 + 0x48) == 0) ||
         (((*(uint *)(lVar13 + 8) & 0x10) == 0 &&
          (*(longlong *)(lVar13 + 0x48) == *(longlong *)(lVar13 + 0x20))))) {
        FUN_14887fa52();
      }
LAB_1403547b8:
      if (param_1[0x50c] != 0) goto LAB_1403547c8;
    }
  }
  uVar25 = 1;
  if (param_1[0x69] != 0) {
    uVar25 = *(undefined1 *)(param_1[0x69] + 0x4c0);
  }
  FUN_140356874(pwVar24,uVar25);
  if (param_1[0x69] != 0) {
    plVar28 = (longlong *)(param_1[0x69] + 0x90);
    if (*(char *)((longlong)param_1 + 0x2969) != '\0') {
      plVar28 = param_1 + 0x52d;
    }
    FUN_14035b7a0(pwVar24,(char)*plVar28);
    if (*(char *)((longlong)param_1 + 0x2969) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x2969) = 0;
    }
  }
  uVar12 = FUN_1447210f0(pwVar24);
  uVar15 = (**(code **)(param_1[0x1c] + 0x10))(param_1 + 0x1c);
  FUN_140c889d4(uVar12,uVar15);
  lVar13 = DAT_14cb71258;
  iVar30 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar30 == 0x40000002) {
    uVar16 = 0;
  }
  else {
    bVar38 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar30 != 2)) {
      if (iVar30 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        bVar38 = DVar10 == DVar11;
        pwVar24 = (wchar_t *)local_178;
      }
      else {
        bVar38 = false;
      }
    }
    uVar16 = (ulonglong)(bVar38 ^ 1);
  }
  if (((*(char *)(lVar13 + uVar16) == '\x01') && (lVar13 = param_1[0x69], lVar13 != 0)) &&
     (*(char *)(lVar13 + 0x660) != '\0')) {
LAB_14035435d:
    FUN_14035e9a8(pwVar24,*(undefined1 *)(lVar13 + 0x90));
    lVar13 = param_1[0x69];
    if (lVar13 == 0) {
      uVar25 = 1;
      uVar33 = 1;
    }
    else {
      uVar25 = *(undefined1 *)(lVar13 + 0x580);
      uVar33 = *(undefined1 *)(lVar13 + 0x581);
    }
  }
  else {
    lVar13 = (**(code **)(param_1[0x1d] + 0x20))(param_1 + 0x1d);
    if (lVar13 != 0) {
      if (param_1[0x11d] == 0) {
        FUN_1446f470e(&local_a8,L"FaceFXComponent",1);
        local_1c0 = 0;
        local_1c8 = local_1c8 & 0xffffff00;
        lVar13 = FUN_140359d04(pwVar24,local_a8,0x40,0);
        if ((lVar13 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar13);
        }
        param_1[0x11d] = lVar13;
      }
      lVar13 = FUN_1447210f0(pwVar24);
      if (((lVar13 != 0) && (param_1[0x11d] != 0)) && ((*(byte *)(param_1[0x11d] + 0x9c) & 1) == 0))
      {
        FUN_140b506a4();
      }
      FUN_140356ec2(param_1 + 0x1d);
    }
    lVar13 = param_1[0x69];
    uVar25 = 1;
    uVar33 = 1;
    if (lVar13 != 0) goto LAB_14035435d;
  }
  FUN_14035925a(param_1 + -0xf7,pwVar24,uVar25,uVar33);
  pplVar23 = (longlong **)param_1[-0x216];
  pplVar36 = pplVar23 + 0xbd;
  if ((code *)*pplVar36 == FUN_140972dde) {
    lVar13 = param_1[-0x1a0];
    if (lVar13 != 0) goto LAB_1403548b3;
    pplVar36 = pplVar23 + 0xbf;
    if ((code *)*pplVar36 == FUN_144784df4) {
      if (*(code **)(param_1[0x56e] + 0x18) == (code *)&LAB_144904684) {
        pplVar23 = (longlong **)&LAB_144904684;
        if (*(int *)((longlong)param_1 + 0x6504) != 0) {
          uVar29 = *(uint *)(param_1 + 0xca0);
          pplVar23 = (longlong **)(ulonglong)uVar29;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            pplVar23 = (longlong **)(ulonglong)(uVar29 >> 0x10);
            plVar28 = (longlong *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (longlong)pplVar23 * 8));
            if ((plVar28 != (longlong *)0x0) &&
               (((int)plVar28[2] == *(int *)((longlong)param_1 + 0x6504) &&
                ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar28 + 1) & 0x10200000) == 0) {
                lVar13 = *plVar28;
              }
              else {
                lVar13 = 0;
              }
              lVar13 = lVar13 + 0x110;
              goto LAB_14035488d;
            }
          }
        }
      }
      else {
        pplVar23 = (longlong **)(param_1 + 0x56e);
        lVar13 = (**(code **)(param_1[0x56e] + 0x18))(pplVar23);
LAB_14035488d:
        if (lVar13 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x20);
          goto LAB_14035489a;
        }
      }
    }
    else {
      pplVar23 = (longlong **)pwVar24;
      lVar13 = (*(code *)*pplVar36)(pwVar24);
LAB_14035489a:
      if (lVar13 != 0) {
        lVar13 = *(longlong *)(lVar13 + 0x3b0);
        goto LAB_1403548aa;
      }
    }
LAB_140354441:
    uVar16 = CONCAT71((int7)((ulonglong)in_R11 >> 8),4);
    local_16c = 0;
    pwVar24 = (wchar_t *)pplVar23;
  }
  else {
    pplVar23 = (longlong **)pwVar24;
    lVar13 = (*(code *)*pplVar36)(pwVar24);
LAB_1403548aa:
    if (lVar13 == 0) goto LAB_140354441;
LAB_1403548b3:
    if (((*(byte *)(lVar13 + 0x39a) & 8) != 0) ||
       (uVar12 = (*(code *)(*(longlong **)pwVar24)[0xe0])(pwVar24), pplVar23 = (longlong **)pwVar24,
       (char)uVar12 == '\0')) goto LAB_140354441;
    local_16c = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    uVar16 = 0;
  }
  if (DAT_14cb63950 == 0) {
    local_a8 = (longlong **)FUN_144a7958c;
    local_180 = FUN_14081d0ea;
    local_188 = (code *)&LAB_1464ec72a;
    local_190 = &local_a8;
    local_198 = &LAB_1486f5f75;
    local_1a0 = &LAB_140945686;
    local_1a8 = L"Engine";
    local_1b0 = 0;
    local_1b8 = 0x10000004;
    local_1c0 = CONCAT44(local_1c0._4_4_,0x10);
    local_1c8 = 0x19d0;
    pwVar24 = L"/Script/GbxGame";
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    uVar16 = uVar16 & 0xffffffff;
  }
  lVar13 = DAT_14cb63950;
  if ((DAT_14cb63950 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cb63950 != 0) goto LAB_140354477;
    uVar32 = uVar16 & 0xffffffff;
    local_160 = CONCAT71((int7)((ulonglong)pwVar24 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140354c9b;
LAB_140354d37:
    lVar14 = 0;
LAB_1403544b6:
    bVar26 = lVar13 != 0 & DAT_14c950c29;
    uVar16 = uVar32;
    if (lVar14 != DAT_14cad00c8) {
joined_r0x000140354d5b:
      if (bVar26 != 0) {
        FUN_1456cec3c(lVar13);
        uVar16 = uVar16 & 0xffffffff;
      }
      goto LAB_1403544d3;
    }
    if (bVar26 != 0) {
      FUN_1456cec3c(lVar13);
    }
    pplVar36 = (longlong **)(param_1 + -0x1ce);
    plVar28 = param_1 + -0x1cc;
    local_c8 = (longlong *)&DAT_100000000;
    local_b8 = 0xffffffff;
    uStack_b0 = 0;
    plStack_c0 = plVar28;
    if ((int)param_1[-0x1c9] == 0) {
      iVar30 = 0;
    }
    else {
      FUN_1449c0562(&local_c8);
      iVar30 = (int)param_1[-0x1c9];
    }
    uStack_90 = (uint)local_b8;
    iStack_8c = local_b8._4_4_;
    local_88 = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = local_c8;
    local_98 = plStack_c0;
    local_a8 = pplVar36;
    if ((local_b8._4_4_ != iVar30) || (plStack_c0 != plVar28)) {
      do {
        lVar13 = (*local_a8)[(longlong)iStack_8c * 2];
        if ((lVar13 != 0) && (*(char *)(lVar13 + 0x11c8) == '\x01')) {
          *(char *)(lVar13 + 0x89c) = (char)uVar32;
          FUN_140355c10(lVar13,local_16c,&DAT_14cb712b8);
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        FUN_1449c0562(&uStack_a0);
      } while (local_a8 != pplVar36 || (local_98 != plVar28 || iStack_8c != iVar30));
    }
  }
  else {
    FUN_1456cec3c(DAT_14cb63950);
    uVar16 = uVar16 & 0xffffffff;
LAB_140354477:
    if (DAT_14cad00c8 == 0) {
      local_a8 = (longlong **)FUN_144a7958c;
      local_180 = FUN_14081d0ea;
      local_188 = FUN_14081d0ea;
      local_190 = &local_a8;
      local_198 = &LAB_1479b7a0c;
      local_1a0 = &LAB_1463b464e;
      local_1a8 = L"Engine";
      local_1b0 = 0;
      local_1b8 = 0x10000005;
      local_1c0 = CONCAT44(local_1c0._4_4_,8);
      local_1c8 = 0x110;
      uVar32 = uVar16 & 0xffffffff;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      uVar16 = uVar16 & 0xffffffff;
      if (DAT_14cad00c8 == 0) {
        local_160 = 0;
LAB_140354c9b:
        local_a8 = (longlong **)FUN_144a7958c;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_14081d0ea;
        local_190 = &local_a8;
        local_198 = &LAB_1479b7a0c;
        local_1a0 = &LAB_1463b464e;
        local_1a8 = L"Engine";
        local_1b0 = 0;
        local_1b8 = 0x10000005;
        local_1c0 = CONCAT44(local_1c0._4_4_,8);
        local_1c8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        goto LAB_140354d37;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar13 + 0x38)) {
      local_160 = 0;
      lVar14 = 0;
      uVar32 = uVar16;
      if (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar14 = lVar13;
      }
      goto LAB_1403544b6;
    }
    local_160 = 0;
    bVar26 = DAT_14c950c29;
    if (lVar13 != 0) goto joined_r0x000140354d5b;
LAB_1403544d3:
    puVar34 = (uint *)(param_1 + -0x1cc);
    iVar30 = (int)param_1[-0x1c9];
    if (iVar30 == 0) {
      uVar37 = 1;
      uVar32 = 0;
      iVar8 = 0;
      iVar35 = 0;
    }
    else {
      puVar17 = (uint *)param_1[-0x1ca];
      if ((uint *)param_1[-0x1ca] == (uint *)0x0) {
        puVar17 = puVar34;
      }
      uVar29 = *puVar17;
      if (uVar29 == 0) {
        iVar8 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar8 = iVar30 + -1;
        }
        uVar32 = 0;
        uVar37 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar37 = uVar32;
        }
        iVar35 = 0;
        do {
          if (uVar37 == uVar32) goto LAB_140354ea6;
          iVar35 = iVar35 + 0x20;
          uVar29 = puVar17[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar29 == 0);
      }
      else {
        uVar32 = 0;
        iVar35 = 0;
      }
      uVar37 = (ulonglong)(-uVar29 & uVar29);
      uVar3 = uVar37 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar35 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar30 <= iVar8) {
        iVar8 = iVar30;
      }
    }
    if (iVar8 != iVar30) {
      uVar29 = 0xffffffff;
      local_168 = puVar34;
      do {
        lVar14 = *(longlong *)(param_1[-0x1ce] + (longlong)iVar8 * 0x10);
        if (lVar14 != 0) {
          if ((lVar13 != 0) && (DAT_14c950c29 != 0)) {
            local_170 = (uint)uVar16;
            FUN_1456cec3c(lVar13);
            uVar16 = (ulonglong)local_170;
            puVar34 = local_168;
          }
          if ((char)local_160 == '\0') {
            if (DAT_14cad00c8 == 0) {
              local_a8 = (longlong **)FUN_144a7958c;
              local_180 = FUN_14081d0ea;
              local_188 = FUN_14081d0ea;
              local_190 = &local_a8;
              local_198 = &LAB_1479b7a0c;
              local_1a0 = &LAB_1463b464e;
              local_1a8 = L"Engine";
              local_1b0 = 0;
              local_1b8 = 0x10000005;
              local_1c0 = CONCAT44(local_1c0._4_4_,8);
              local_1c8 = 0x110;
              local_170 = (uint)uVar16;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              uVar16 = (ulonglong)local_170;
              puVar34 = local_168;
              if (DAT_14cad00c8 == 0) goto LAB_140354b2f;
            }
            if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140354b2f;
            lVar18 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar18 = lVar13;
            }
          }
          else {
LAB_140354b2f:
            lVar18 = 0;
          }
          if (((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) &&
             (*(char *)(lVar14 + 0x11c8) == '\x01')) {
            *(char *)(lVar14 + 0x89c) = (char)uVar16;
            uVar16 = uVar16 & 0xffffffff;
            FUN_140355c10(lVar14,local_16c,&DAT_14cb712b8);
            puVar34 = local_168;
          }
        }
        uVar29 = uVar29 & ~(uint)uVar37;
        puVar17 = (uint *)param_1[-0x1ca];
        if ((uint *)param_1[-0x1ca] == (uint *)0x0) {
          puVar17 = puVar34;
        }
        iVar4 = (int)param_1[-0x1c9];
        iVar8 = (int)uVar32;
        lVar14 = (longlong)iVar8;
        uVar27 = puVar17[lVar14] & uVar29;
        if (uVar27 == 0) {
          iVar21 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar21 = iVar4 + -1;
          }
          iVar21 = iVar21 >> 5;
          iVar35 = iVar35 + 0x20;
          iVar22 = iVar21;
          if (iVar21 < iVar8) {
            iVar22 = iVar8;
          }
          puVar34 = local_168;
          if (iVar8 < iVar21) {
            lVar18 = 0;
            do {
              uVar27 = puVar17[lVar14 + lVar18 + 1];
              if (uVar27 != 0) {
                uVar32 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                uVar29 = 0xffffffff;
                goto LAB_14035465a;
              }
              iVar35 = iVar35 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar22 - lVar14 != lVar18);
            uVar29 = 0xffffffff;
            iVar8 = iVar22;
          }
          uVar32 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_14035465a:
          uVar37 = (ulonglong)(-uVar27 & uVar27);
          uVar3 = uVar37 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar35 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
        }
      } while (iVar8 != iVar30);
    }
  }
LAB_140354ea6:
  pplVar36 = local_178;
  if ((char)param_1[-0x1e7] == '\x03') {
    pcVar6 = (code *)(*local_178)[0xbd];
    if (pcVar6 == FUN_140972dde) {
      lVar13 = param_1[-0x1a0];
      if (lVar13 != 0) goto LAB_140355769;
      pcVar6 = (code *)(*local_178)[0xbf];
      if (pcVar6 == FUN_144784df4) {
        if (*(code **)(param_1[0x56e] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_1 + 0x6504) != 0) &&
               (uVar29 = *(uint *)(param_1 + 0xca0), -1 < (int)uVar29)) &&
              (((int)uVar29 < DAT_14c9647dc &&
               ((plVar28 = (longlong *)
                           ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                plVar28 != (longlong *)0x0 &&
                ((int)plVar28[2] == *(int *)((longlong)param_1 + 0x6504))))))) &&
             ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar28 + 1) & 0x10200000) == 0) {
              lVar13 = *plVar28;
            }
            else {
              lVar13 = 0;
            }
            lVar13 = lVar13 + 0x110;
            goto LAB_140355743;
          }
        }
        else {
          lVar13 = (**(code **)(param_1[0x56e] + 0x18))(param_1 + 0x56e);
LAB_140355743:
          if (lVar13 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x20);
            goto LAB_140355750;
          }
        }
      }
      else {
        lVar13 = (*pcVar6)(local_178);
LAB_140355750:
        if (lVar13 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x3b0);
          goto LAB_140355760;
        }
      }
    }
    else {
      lVar13 = (*pcVar6)(local_178);
LAB_140355760:
      if (lVar13 != 0) {
LAB_140355769:
        if ((*(byte *)(lVar13 + 0x39a) & 8) == 0) goto LAB_140355013;
      }
    }
    lVar13 = FUN_14035f5a8(pplVar36);
    if (lVar13 == 0) {
      *(undefined4 *)(param_1 + 0x2f5) = 0;
      iVar30 = 0;
    }
    else {
      uVar29 = *(uint *)(lVar13 + 0xc);
      *(uint *)(param_1 + 0x2f5) = uVar29;
      if ((int)uVar29 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar30 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar30 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar38 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar30;
        if (bVar38) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar30 = *(int *)(lVar13 + 0x10);
        bVar38 = iVar30 == 0;
        if (bVar38) {
          *(int *)(lVar13 + 0x10) = iVar8;
          iVar30 = 0;
        }
        UNLOCK();
        pplVar36 = local_178;
        if (bVar38) {
          iVar30 = iVar8;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x17ac) = iVar30;
    lVar13 = param_1[-0x19e];
    if (lVar13 != 0) {
      lVar14 = FUN_1449f3324();
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
        FUN_1487c4892(lVar13,0);
        FUN_1487c4892(lVar13,1);
        goto LAB_140355013;
      }
    }
    FUN_1403569b4(param_1 + 0x124);
    local_a8 = (longlong **)0x0;
    if ((pplVar36 == (longlong **)0x0) || (DAT_14c950c29 == 0)) {
      if (pplVar36 != (longlong **)0x0) goto LAB_140354ffb;
      uStack_a0 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c(pplVar36);
LAB_140354ffb:
      uStack_a0 = param_1 + 0xd;
    }
    local_a8 = pplVar36;
    FUN_1403588d0(param_1 + 0x124);
  }
LAB_140355013:
  plVar28 = (longlong *)param_1[0x27];
  if (plVar28 != (longlong *)0x0) {
    uVar9 = (**(code **)(*plVar28 + 0xbf0))(plVar28);
    (**(code **)(*plVar28 + 0x7c0))(plVar28,uVar9);
  }
  if (param_1[0x69] != 0) {
    lVar13 = FUN_140161d51();
    if (*(longlong *)(param_1[0x69] + 0x3a8) == *(longlong *)(lVar13 + 0x20)) {
      FUN_140357eea();
    }
    else {
      FUN_1413232d0(param_1 + 0x15);
    }
  }
  if ((*(byte *)((longlong)param_1 + -0x104b) & 0x18) == 0x10) {
    if (param_1[0x69] == 0) goto LAB_140355085;
    if (((*(char *)(param_1[0x69] + 0x1bb) == '\x01') && ((char)param_1[-0x1e7] == '\x03')) &&
       (pplVar36 != (longlong **)0x0)) {
      uVar12 = FUN_140757e32();
      plVar28 = (longlong *)FUN_144718840(pplVar36,uVar12);
      if (plVar28 != (longlong *)0x0) {
        uVar12 = (**(code **)(*plVar28 + 0x10))(plVar28);
        FUN_14045a684(uVar12,1);
      }
    }
  }
  if (param_1[0x69] == 0) goto LAB_140355085;
  if (param_1[0x27] != 0) {
    *(undefined4 *)(param_1[0x27] + 0x360) = *(undefined4 *)(param_1[0x69] + 0x120);
  }
  if (param_1[0x441] == 0) goto LAB_140355085;
  lVar13 = FUN_140654c40(param_1[0x69] + 0x128);
  if (lVar13 != 0) {
    plVar28 = (longlong *)param_1[0x441];
    uVar12 = FUN_140654c40(param_1[0x69] + 0x128);
    (**(code **)(*plVar28 + 0xaa0))(plVar28,uVar12,0,0);
  }
  lVar13 = param_1[0x69];
  local_118 = (longlong **)0x0;
  lStack_110 = 0;
  local_108 = 0;
  uVar12 = FUN_140927942();
  lStack_110 = FUN_14477b664(uVar12);
  lVar14 = FUN_140355b7c();
  uVar12 = FUN_140355b7c();
  FUN_1402d1bfa(&local_a8,uVar12,lVar13);
  if (local_118 != local_a8) {
    local_108 = 0;
  }
  local_118 = local_a8;
  lVar18 = FUN_140927942();
  if (lVar14 == 0) {
LAB_1403551fe:
    lVar18 = lVar14;
  }
  else if (lVar18 == 0) {
    lVar18 = 0;
  }
  else if ((*(int *)(lVar18 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
           lVar18 + 0x30)) goto LAB_1403551fe;
  if (lStack_110 != lVar18) {
    local_108 = 0;
  }
  uVar12 = FUN_14477b664(lVar18);
  lStack_110 = FUN_14477b664(uVar12);
  if ((lStack_110 != 0) && (local_118 != (longlong **)0x0)) {
    local_108 = lVar13;
  }
  uVar9 = FUN_14035857b(&local_118);
  lVar13 = FUN_140ce301e(param_1[0x441]);
  if (lVar13 != 0) {
    local_c8 = (longlong *)param_1[0x69];
    local_a8 = &local_c8;
    local_128 = FUN_143c9bc62;
    local_120 = &local_a8;
    FUN_140355dbc(lVar13,uVar9,&DAT_14c9abbf0);
    plVar28 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      local_148 = (longlong **)0x0;
      lStack_140 = 0;
      local_138 = (longlong *)0x0;
      uVar12 = FUN_140927942();
      lStack_140 = FUN_14477b664(uVar12);
      lVar13 = FUN_140927942();
      uVar12 = FUN_140927942();
      FUN_1402d1bfa(&local_a8,uVar12,plVar28);
      if (local_148 != local_a8) {
        local_138 = (longlong *)0x0;
      }
      local_148 = local_a8;
      lVar14 = FUN_140927942();
      if (lVar13 == 0) {
LAB_140355357:
        lVar14 = lVar13;
      }
      else if (lVar14 == 0) {
        lVar14 = 0;
      }
      else if ((*(int *)(lVar14 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
               == lVar14 + 0x30)) goto LAB_140355357;
      if (lStack_140 != lVar14) {
        local_138 = (longlong *)0x0;
      }
      uVar12 = FUN_14477b664(lVar14);
      lStack_140 = FUN_14477b664(uVar12);
      if ((lStack_140 != 0) && (local_148 != (longlong **)0x0)) {
        local_138 = plVar28;
      }
      uVar9 = FUN_14035857b(&local_148);
    }
  }
  FUN_140355c66(param_1[0x441],uVar9,param_1[0x69] + 0x150);
  lVar13 = FUN_14025708c(param_1[0x441],DAT_14c9abbf0);
  if (lVar13 != 0) {
    *(undefined1 *)(lVar13 + 0x198) = 1;
    dVar39 = (double)*(float *)(param_1[0x69] + 0x120);
    *(double *)(lVar13 + 0x1a0) = dVar39;
    *(double *)(lVar13 + 0x1a8) = dVar39;
    *(double *)(lVar13 + 0x1b0) = dVar39;
  }
  lVar13 = param_1[0x441];
  uVar9 = *(undefined4 *)(param_1[0x69] + 0x120);
  pbVar2 = (byte *)(lVar13 + 0x418);
  *pbVar2 = *pbVar2 | 2;
  *(undefined4 *)(lVar13 + 0x4ac) = uVar9;
  lVar13 = (**(code **)(param_1[3] + 0x38))(local_158);
  pplVar36 = local_178;
  if (lVar13 == 0) {
LAB_14035548d:
    lVar18 = FUN_1401f6e4a(param_1[0x69] + 0x1a0);
  }
  else {
    lVar14 = *(longlong *)(lVar13 + 0x1c8);
    if (lVar14 == 0) {
      uVar12 = FUN_1405bb4b8();
      lVar14 = FUN_14477b664(uVar12);
      *(longlong *)(lVar13 + 0x1c8) = lVar14;
    }
    plVar28 = (longlong *)(lVar13 + 0x1c0);
    lVar18 = *(longlong *)(lVar13 + 0x1d0);
    if (lVar18 == 0) {
      if ((*plVar28 != 0) && (lVar14 != 0)) {
        plVar5 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(lVar13 + 0x1d0) = 0;
          pplVar36 = local_178;
        }
        else {
          uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar18 = FUN_144aff482(uVar12,plVar28);
          *(longlong *)(lVar13 + 0x1d0) = lVar18;
          pplVar36 = local_178;
          if (lVar18 != 0) {
            lVar14 = *(longlong *)(lVar13 + 0x1c8);
            goto LAB_140355973;
          }
        }
      }
      goto LAB_14035548d;
    }
LAB_140355973:
    pplVar36 = local_178;
    if (lVar14 == 0) {
      uVar12 = FUN_1405bb4b8();
      lVar14 = FUN_14477b664(uVar12);
      *(longlong *)(lVar13 + 0x1c8) = lVar14;
      lVar18 = *(longlong *)(lVar13 + 0x1d0);
      if (((lVar18 == 0) && (lVar18 = 0, pplVar36 = local_178, lVar14 != 0)) && (*plVar28 != 0)) {
        plVar5 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          lVar18 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar18 = FUN_144aff482(uVar12,plVar28);
        }
        *(longlong *)(lVar13 + 0x1d0) = lVar18;
        pplVar36 = local_178;
      }
    }
  }
  lVar14 = param_1[0x441];
  if (*(longlong *)(lVar14 + 0x1590) == 0) {
    uVar12 = FUN_1405bb4b8();
    uVar12 = FUN_14477b664(uVar12);
    *(undefined8 *)(lVar14 + 0x1590) = uVar12;
  }
  lVar19 = FUN_1405bb4b8();
  uVar12 = FUN_1405bb4b8();
  FUN_1402d1bfa(&local_a8,uVar12,lVar18);
  if (*(longlong ***)(lVar14 + 0x1588) != local_a8) {
    *(undefined8 *)(lVar14 + 0x1598) = 0;
  }
  *(longlong ***)(lVar14 + 0x1588) = local_a8;
  lVar20 = FUN_1405bb4b8();
  if (lVar19 == 0) {
LAB_140355536:
    lVar20 = lVar19;
  }
  else if (lVar20 == 0) {
    lVar20 = 0;
  }
  else if ((*(int *)(lVar20 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
           lVar20 + 0x30)) goto LAB_140355536;
  if (*(longlong *)(lVar14 + 0x1590) != lVar20) {
    *(undefined8 *)(lVar14 + 0x1598) = 0;
  }
  uVar12 = FUN_14477b664(lVar20);
  lVar19 = FUN_14477b664(uVar12);
  *(longlong *)(lVar14 + 0x1590) = lVar19;
  if ((lVar19 != 0) && (*(longlong *)(lVar14 + 0x1588) != 0)) {
    *(longlong *)(lVar14 + 0x1598) = lVar18;
  }
  if (lVar13 != 0) {
    FUN_1406545c2(param_1[0x441] + 0x15a0,lVar13 + 0x1d8);
  }
  lVar13 = FUN_140358228(param_1[0x69]);
  param_1[0x28] = lVar13;
  FUN_14035842f(param_1[0x441],lVar13);
  lVar13 = param_1[-399];
  if ((lVar13 != 0) && (*(char *)(param_1[0x69] + 0x1d8) != '\0')) {
    local_78 = (double)((float)*(double *)(lVar13 + 0x290) * *(float *)(lVar13 + 0x640));
    local_a8 = (longlong **)0x0;
    uStack_a0 = (longlong *)0x0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    iStack_8c = 0x3ff00000;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0x3ff0000000000000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
    local_150 = FUN_1457032be();
    if ((local_150 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_150);
    }
    local_1c8 = local_1c8 & 0xffffff00;
    plVar28 = (longlong *)FUN_140fae5dc(pplVar36,&local_150,0,&local_a8);
    if (plVar28 != (longlong *)0x0) {
      lVar14 = FUN_1457032be();
      if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar28[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar28[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30)) {
        dVar39 = *(double *)(lVar13 + 0x280);
        if (*(double *)(lVar13 + 0x288) <= *(double *)(lVar13 + 0x280)) {
          dVar39 = *(double *)(lVar13 + 0x288);
        }
        FUN_140d491fc(plVar28,(float)dVar39 * *(float *)(lVar13 + 0x644),
                      (float)*(double *)(lVar13 + 0x290) * *(float *)(lVar13 + 0x640),1);
        local_c8 = (longlong *)CONCAT44(local_c8._4_4_,0x1000000);
        (**(code **)(*plVar28 + 0x490))(plVar28,param_1[0x441],&local_c8,0);
      }
    }
  }
LAB_140355085:
  FUN_140355e00(param_1 + 0x4ac,pplVar36);
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140355b7c FUN_140355b7c body=57 status=ok
// SIG undefined FUN_140355b7c(void)

void FUN_140355b7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b668 = FUN_140002ddd(FUN_1464cfd9d,uVar1,L"GbxCharacterDef");
  }
  return;
}



// FUNCTION 140355bb6 FUN_140355bb6 body=57 status=ok
// SIG undefined FUN_140355bb6(void)

void FUN_140355bb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb550a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb550a0 = FUN_140002ddd(FUN_1464b0821,uVar1,L"GbxActorAvatarInstanceData");
  }
  return;
}



// FUNCTION 140355bf0 FUN_140355bf0 body=32 status=ok
// SIG undefined FUN_140355bf0(void)

void FUN_140355bf0(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  wchar_t *pwStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  code **ppcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  int iStack_40;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined2 uStack_2c;
  ulonglong uStack_28;
  
  if ((*(char *)(param_1 + 0x50) == param_2) && (*(char *)(param_1 + 0x51) == param_3)) {
    return;
  }
  *(char *)(param_1 + 0x50) = param_2;
  *(char *)(param_1 + 0x51) = param_3;
  if (param_2 == '\0') {
    FUN_147f5e678();
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 == 0) goto LAB_140357629;
  if (DAT_14cac9ca8 == 0) {
    ppcStack_60 = &pcStack_48;
    pcStack_48 = FUN_141030f22;
    pcStack_50 = FUN_14081d0ea;
    pcStack_58 = FUN_14081d0ea;
    puStack_68 = &LAB_1478c0a72;
    puStack_70 = &LAB_1417b2375;
    pwStack_78 = L"Engine";
    uStack_80 = 0x1000000000;
    uStack_88 = 0x10000004;
    uStack_90 = 8;
    uStack_98 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (lVar10 == 0) goto LAB_140357629;
  }
  if ((((DAT_14cac9ca8 == 0) || (lVar9 = *(longlong *)(lVar10 + 0x10), lVar9 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) goto LAB_140357629;
  if ((((*(char *)(param_1 + 0x50) != '\x01') || (lVar9 = *(longlong *)(param_1 + 0x20), lVar9 == 0)
       ) || ((-1 < *(short *)(param_1 + 0x28) && (*(longlong *)(param_1 + 0x30) == 0)))) ||
     (*(char *)(lVar9 + 0x88) != '\x01')) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1470fc33c(lVar10);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14480f766(lVar10 + 0x300);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    goto LAB_140357629;
  }
  bVar2 = *(byte *)(lVar9 + 0x89);
  uStack_2c = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)&uStack_30 + (ulonglong)bVar2) = 1;
  }
  if (*(longlong *)(lVar10 + 0x1c8) != 0) {
    FUN_140bc9c7c(*(longlong *)(lVar10 + 0x1c8),(ulonglong)bVar2,&uStack_30,1);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) goto LAB_140357629;
  pcStack_48 = (code *)0x0;
  iStack_40 = 0;
  FUN_1446efa72(&pcStack_48,0,2,0x10);
  iStack_40 = 2;
  *(undefined ***)pcStack_48 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  *(longlong *)(pcStack_48 + 0x10) = lVar7;
  *(undefined ***)pcStack_48 = &PTR_FUN_14ac8d980;
  *(longlong *)(pcStack_48 + 0x18) = param_1;
  if ((pcStack_48 == (code *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)pcStack_48 + 0x30))(), cVar5 == '\0')) {
    if (iStack_40 != 0) {
      if (pcStack_48 == (code *)0x0) goto LAB_140357629;
      (*(code *)**(undefined8 **)pcStack_48)(pcStack_48,0);
      FUN_1446efa72(&pcStack_48,0,0,0x10);
      goto LAB_140357613;
    }
  }
  else {
    plVar1 = (longlong *)(lVar10 + 0x300);
    if (*(int *)(lVar10 + 0x314) < 1) {
      iVar3 = *(int *)(lVar10 + 0x308);
      iVar6 = *(int *)(lVar10 + 0x310) + -1;
      *(int *)(lVar10 + 0x310) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(lVar10 + 0x308);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(lVar10 + 0x310) = iVar8;
        if ((iVar8 < iVar3) && (*(int *)(lVar10 + 0x30c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((iStack_40 != 0) && (pcStack_48 != (code *)0x0)) {
      (**(code **)(*(longlong *)pcStack_48 + 0x38))(pcStack_48,auStack_38);
    }
    iVar3 = *(int *)(lVar10 + 0x308);
    *(uint *)(lVar10 + 0x308) = iVar3 + 1U;
    if (*(uint *)(lVar10 + 0x30c) < iVar3 + 1U) {
      FUN_1447a71f6(plVar1,iVar3);
    }
    lVar10 = *plVar1;
    lVar9 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar10 + lVar9) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar9) = 0;
    *(code **)(lVar10 + lVar9) = pcStack_48;
    pcStack_48 = (code *)0x0;
    *(int *)(lVar10 + 8 + lVar9) = iStack_40;
LAB_140357613:
    iStack_40 = 0;
  }
  if (pcStack_48 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140357629:
  if ((uStack_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140355c10 FUN_140355c10 body=85 status=ok
// SIG undefined FUN_140355c10(void)

void FUN_140355c10(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = param_1 + 0x241;
  lVar2 = param_1[0x241];
  if (param_2 == '\0') {
    FUN_1400bc8c2(plVar1,param_3);
  }
  else {
    FUN_1400bc96c(plVar1,param_3);
  }
  if (((char)lVar2 == '\0') && ((char)*plVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140355c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcf0))(param_1);
    return;
  }
  return;
}



// FUNCTION 140355c66 FUN_140355c66 body=58 status=ok
// SIG undefined FUN_140355c66(void)

void FUN_140355c66(longlong param_1,undefined4 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  
  if ((*(char *)(param_1 + 0x1970) == '\0') && (*(longlong *)(param_1 + 0x1968) == 0)) {
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x1630) + 0x98);
    if (*(longlong *)(param_1 + 0x1630) == 0) {
      plVar14 = (longlong *)(param_1 + 0x1968);
    }
    if (*plVar14 == 0) {
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))();
      iVar2 = (int)param_3[5];
      if (iVar2 == 0) {
        uVar16 = 1;
        uVar9 = 0;
        iVar15 = 0;
        iVar8 = 0;
      }
      else {
        puVar11 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_3 + 2);
        }
        uVar5 = *puVar11;
        if (uVar5 == 0) {
          iVar15 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar15 = iVar2 + -1;
          }
          uVar9 = 0;
          uVar16 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar16 = uVar9;
          }
          iVar8 = 0;
          do {
            if (uVar16 == uVar9) goto LAB_1403591ee;
            iVar8 = iVar8 + 0x20;
            uVar5 = puVar11[uVar9 + 1];
            uVar9 = uVar9 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar9 = 0;
          iVar8 = 0;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar15 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar15) {
          iVar15 = iVar2;
        }
      }
      if (iVar15 != iVar2) {
        uVar5 = 0xffffffff;
        do {
          FUN_1402c74da(uVar4,*(undefined8 *)(*param_3 + (longlong)iVar15 * 0x1f0));
          uVar5 = ~(uint)uVar16 & uVar5;
          puVar11 = (uint *)param_3[4];
          if ((uint *)param_3[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_3 + 2);
          }
          iVar3 = (int)param_3[5];
          iVar15 = (int)uVar9;
          lVar12 = (longlong)iVar15;
          uVar10 = puVar11[lVar12] & uVar5;
          if (uVar10 == 0) {
            iVar6 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar6 = iVar3 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar8 = iVar8 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar15) {
              iVar7 = iVar15;
            }
            if (iVar15 < iVar6) {
              lVar13 = 0;
              do {
                uVar10 = puVar11[lVar12 + lVar13 + 1];
                if (uVar10 != 0) {
                  uVar9 = (ulonglong)(iVar15 + (int)lVar13 + 1);
                  uVar5 = 0xffffffff;
                  goto LAB_1403591b4;
                }
                iVar8 = iVar8 + 0x20;
                lVar13 = lVar13 + 1;
              } while (iVar7 - lVar12 != lVar13);
              uVar5 = 0xffffffff;
              iVar15 = iVar7;
            }
            uVar9 = (ulonglong)(iVar15 + 1);
            iVar15 = iVar3;
          }
          else {
LAB_1403591b4:
            uVar16 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar16 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar15 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar15) {
              iVar15 = iVar3;
            }
          }
        } while (iVar15 != iVar2);
      }
LAB_1403591ee:
      FUN_14036083c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014035921a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x28))(param_1 + 0x1238,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140355ca0 FUN_140355ca0 body=121 status=ok
// SIG undefined FUN_140355ca0(void)

void FUN_140355ca0(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x140) != (longlong *)0x0) && (*(int *)(param_1 + 0x13c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x138);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140355d02;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x13c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))();
      goto LAB_140355d02;
    }
  }
  uVar2 = 0;
LAB_140355d02:
  FUN_143ccc516(param_1,uVar2);
  return;
}



// FUNCTION 140355d1a FUN_140355d1a body=162 status=ok
// SIG undefined FUN_140355d1a(void)

longlong FUN_140355d1a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x268);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x1c8);
  if (lVar5 == 0) {
    uVar4 = FUN_140358896();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x1c8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x1d0) != 0) {
    return *(longlong *)(lVar1 + 0x1d0);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x1c0) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x1c0));
    }
    *(longlong *)(lVar1 + 0x1d0) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 140355dbc FUN_140355dbc body=68 status=ok
// SIG undefined FUN_140355dbc(void)

longlong FUN_140355dbc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  do {
    uVar1 = FUN_140ce2ed6(param_2,param_3);
    lVar2 = FUN_140ce2d9e(param_1,uVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
    param_2 = (*(code *)*param_4)(param_4[1]);
  } while (param_2 != 0);
  return 0;
}



// FUNCTION 140355e00 FUN_140355e00 body=148 status=ok
// SIG undefined FUN_140355e00(void)

void FUN_140355e00(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  return;
}



// FUNCTION 140355e94 FUN_140355e94 body=161 status=ok
// SIG undefined FUN_140355e94(void)

void FUN_140355e94(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (0 < iVar2) {
    FUN_14035781a(param_1);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      FUN_1405691ed(*(undefined8 *)(lVar1 + lVar3),0x35);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) < 0) {
    FUN_1487c04e8((longlong *)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_140b520ec(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0;
  *(undefined8 *)(param_1 + 0x61) = 0;
  return;
}



// FUNCTION 140355f36 FUN_140355f36 body=182 status=ok
// SIG undefined FUN_140355f36(void)

longlong FUN_140355f36(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x10))(param_1 + -0xe0);
  lVar2 = FUN_14035652c(uVar1);
  if (lVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x260) != 0) &&
       (lVar2 = FUN_1403562ce(*(longlong *)(param_1 + 0x260) + 0x638), lVar2 != 0)) {
      lVar2 = FUN_1403562ce(*(longlong *)(param_1 + 0x260) + 0x638);
      return lVar2;
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0xd0) + 0x38))(param_1 + -0xd0);
    if (plVar3 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar4 = FUN_140356032();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        return plVar3[0x4e];
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140355fec FUN_140355fec body=41 status=ok
// SIG undefined FUN_140355fec(void)

undefined8 FUN_140355fec(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014035600a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140356032 FUN_140356032 body=57 status=ok
// SIG undefined FUN_140356032(void)

void FUN_140356032(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b4e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b4e8 = FUN_140002ddd(FUN_1464cf6b6,uVar1,L"GbxCharacterBodySettings");
  }
  return;
}



// FUNCTION 14035606c FUN_14035606c body=380 status=ok
// SIG undefined FUN_14035606c(void)

longlong FUN_14035606c(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1403561e8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1403561e8 FUN_1403561e8 body=228 status=ok
// SIG undefined FUN_1403561e8(void)

longlong FUN_1403561e8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5b4f8 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_14867a481;
    local_40 = FUN_1464cf716;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacterBodyData",&DAT_14cb5b4f8,&DAT_14867a480);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5b4f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403562ce FUN_1403562ce body=375 status=ok
// SIG undefined FUN_1403562ce(void)

longlong FUN_1403562ce(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140356446();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140356446 FUN_140356446 body=228 status=ok
// SIG undefined FUN_140356446(void)

longlong FUN_140356446(void)

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
  if (DAT_14cb265b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d6516;
    local_38 = &LAB_147f8551d;
    local_40 = FUN_140fd1f09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXActor",&DAT_14cb265b8,&DAT_147f8551c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb265b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035652c FUN_14035652c body=397 status=ok
// SIG undefined FUN_14035652c(void)

undefined8 FUN_14035652c(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8 [5];
  undefined8 local_80;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0;
  puVar9 = &DAT_14caa8558;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_1403de7ba(local_a8,puVar9);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar6 != 0) {
    local_78 = FUN_143c9954a;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b3e7090;
    local_50 = &local_80;
    local_48 = local_a8;
    uVar4 = FUN_1403566ba();
    plVar5 = (longlong *)FUN_1403566f4(lVar6,uVar4);
    if ((longlong)(int)plVar5[1] == 0) {
      pppuVar8 = (undefined ***)0x0;
    }
    else {
      plVar11 = (longlong *)*plVar5;
      plVar5 = plVar11 + (int)plVar5[1];
      do {
        plVar1 = (longlong *)*plVar11;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar7 = FUN_1403566ba();
          pcVar2 = local_78;
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            pppuVar8 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar8 = &local_58;
            }
            uVar4 = (*(code *)(*pppuVar8)[1])();
            cVar3 = (*pcVar2)(uVar4,plVar1);
            if (cVar3 == '\0') break;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar5);
      pppuVar8 = local_68;
      if (local_78 == (code *)0x0) goto LAB_140356663;
    }
    pppuVar10 = &local_58;
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar10 = pppuVar8;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
LAB_140356663:
  uVar4 = local_80;
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1403566ba FUN_1403566ba body=57 status=ok
// SIG undefined FUN_1403566ba(void)

void FUN_1403566ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58688 = FUN_140002ddd(FUN_1464c1cd8,uVar1,L"GbxActorPartDef_FaceFX");
  }
  return;
}



// FUNCTION 1403566f4 FUN_1403566f4 body=383 status=ok
// SIG undefined FUN_1403566f4(void)

undefined8 * FUN_1403566f4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb70ff0) && (FUN_144b3d300(&DAT_14cb70ff0), DAT_14cb70ff0 == -1)) {
    DAT_14cb70fe0 = 0;
    uRam000000014cb70fe8 = 0;
    atexit((_func_5014 *)&LAB_143c960cc);
    _Init_thread_footer(&DAT_14cb70ff0);
  }
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar6;
      }
    }
  }
  local_30 = CONCAT44(uVar2,uVar5);
  iVar1 = FUN_14050ef0e((longlong *)(param_1 + 0x68),uVar2 ^ uVar5);
  if (iVar1 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x68);
  }
  puVar4 = (undefined8 *)(lVar7 + 8);
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar3 = &DAT_14cb70fe0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar3;
}



// FUNCTION 140356874 FUN_140356874 body=316 status=ok
// SIG undefined FUN_140356874(void)

void FUN_140356874(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(char *)(param_1 + 0x890) != param_2) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    *(char *)(param_1 + 0x890) = param_2;
    if (param_2 == '\0') {
      FUN_14035d552(param_1 + 0xac0);
      FUN_140457ffc(param_1 + 0xac0,param_1);
      FUN_14035cf04(param_1 + 0xf98);
      if (*(longlong *)(param_1 + 0xeb0) != 0) {
        FUN_140a19d0e(param_1 + 0xea0,0);
        *(undefined8 *)(param_1 + 0xe88) = 0;
        *(undefined8 *)(param_1 + 0xe90) = 0;
        *(undefined8 *)(param_1 + 0xe98) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
    else {
      FUN_140359e06(param_1 + 0xe70,param_1);
      FUN_14035ca24(param_1 + 0xf98,param_1);
      FUN_14035d02e(param_1 + 0xac0,param_1);
      local_38 = &LAB_1438696e4;
      local_30 = 0;
      FUN_14035a1e2(param_1 + 0xac0,local_28,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403569b4 FUN_1403569b4 body=298 status=ok
// SIG undefined FUN_1403569b4(void)

void FUN_1403569b4(undefined8 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = 3;
  do {
    iVar4 = iVar4 + -1;
    FUN_140356f00(param_1,iVar4,4);
  } while (iVar4 != 0);
  FUN_140356b2c(param_1 + 0x9c);
  lVar3 = param_1[0x8a];
  iVar4 = *(int *)(param_1 + 0x8b);
  uVar2 = 0;
  if ((longlong)iVar4 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x20))();
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x8b);
    lVar3 = param_1[0x8a];
  }
  iVar4 = *(int *)((longlong)param_1 + 0x45c);
  FUN_140356ae1(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_1 + 0x45c) != 0)) {
    FUN_147f5b3dc(param_1 + 0x8a,0);
  }
  FUN_140356b2c(param_1 + 0x9c);
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = FUN_14493c216(&local_48,0);
  if (cVar1 == '\0') {
    uStack_40 = 0;
  }
  *param_1 = local_48;
  param_1[1] = uStack_40;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140356ae0 FUN_140356ae0 body=1 status=ok
// SIG undefined FUN_140356ae0(void)

void FUN_140356ae0(void)

{
  return;
}



// FUNCTION 140356ae1 FUN_140356ae1 body=75 status=ok
// SIG undefined FUN_140356ae1(void)

void FUN_140356ae1(longlong param_1,int param_2)

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



// FUNCTION 140356b2c FUN_140356b2c body=501 status=ok
// SIG undefined FUN_140356b2c(void)

void FUN_140356b2c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (uint *)param_1[2];
  if (puVar3 == (uint *)0x0) goto LAB_140356b4e;
  if (puVar3[1] == 0) {
LAB_140356cfe:
    uVar8 = 0;
  }
  else {
    uVar2 = *puVar3;
    uVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((*(uint *)(plVar9 + 2) != puVar3[1] || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
          ((longlong *)*plVar9 == (longlong *)0x0)))) goto LAB_140356cfe;
      uVar8 = (**(code **)(*(longlong *)*plVar9 + 0x180))();
    }
  }
  FUN_140358d06(&local_48,uVar8);
  if (plStack_40 == (longlong *)0x0) {
LAB_140356cb1:
    if ((char)param_1[4] != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      goto LAB_140356b4e;
    }
    bVar10 = true;
    plVar9 = (longlong *)0x0;
LAB_140356cbb:
    plVar4 = (longlong *)param_1[1];
    *(longlong **)(*param_1 + 8) = plVar4;
    *plVar4 = *param_1;
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    *(undefined2 *)(param_1 + 4) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_140356b2c();
    if (bVar10) goto LAB_140356b4e;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)plStack_40[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar9 = plStack_40;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_40 + 0x10))();
    }
    lVar5 = local_48;
    if (plVar9 == (longlong *)0x0) goto LAB_140356cb1;
    if (local_48 == 0) {
      if ((char)param_1[4] == '\x01') {
LAB_140356d21:
        *(undefined1 *)((longlong)param_1 + 0x21) = 1;
        goto LAB_140356c74;
      }
      bVar10 = false;
      goto LAB_140356cbb;
    }
    if (param_1[2] != 0) {
      if ((char)param_1[4] == '\x01') goto LAB_140356d21;
      plVar4 = (longlong *)param_1[1];
      *(longlong **)(*param_1 + 8) = plVar4;
      *plVar4 = *param_1;
      local_28 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      *(undefined2 *)(param_1 + 4) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      FUN_140356b2c();
      *(int *)(lVar5 + 0x40) = *(int *)(lVar5 + 0x40) + -1;
    }
  }
LAB_140356c74:
  LOCK();
  plVar4 = plVar9 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
LAB_140356b4e:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140356d34 FUN_140356d34 body=257 status=ok
// SIG undefined FUN_140356d34(void)

void FUN_140356d34(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x858);
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x13f8) == 0) {
    return;
  }
  uVar3 = FUN_140c7b0c2();
  FUN_14035a9fa(lVar1 + 0x1288,param_1,uVar3);
  lVar2 = *(longlong *)(param_1 + 0x3c0);
  if (lVar2 != 0) {
    lVar4 = FUN_1449f3324();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      bVar5 = *(longlong *)(lVar2 + 0xa08) == param_1;
      goto LAB_140356d99;
    }
  }
  bVar5 = false;
LAB_140356d99:
  if ((*(longlong *)(lVar1 + 0x1418) != 0 || *(char *)(param_1 + 0x178) != '\x03') &&
     (!(bool)(bVar5 | (*(longlong *)(lVar1 + 0x1418) == 0 && *(char *)(param_1 + 0x178) != '\x03')))
     ) {
    return;
  }
  uVar3 = FUN_140c7b0c2(*(undefined8 *)(param_1 + 0x13f8));
  uVar3 = FUN_140de1ade(uVar3);
  FUN_141077e62(lVar1 + 0x1288,uVar3,0);
  return;
}



// FUNCTION 140356e36 FUN_140356e36 body=138 status=ok
// SIG undefined FUN_140356e36(void)

longlong FUN_140356e36(undefined8 *param_1)

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
    if (DAT_14cb24378 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb24378,local_40);
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



// FUNCTION 140356ec2 FUN_140356ec2 body=61 status=ok
// SIG undefined FUN_140356ec2(void)

void FUN_140356ec2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_1403582f0();
  return;
}



// FUNCTION 140356f00 FUN_140356f00 body=1269 status=ok
// SIG undefined FUN_140356f00(void)

void FUN_140356f00(uint *param_1,byte param_2,undefined4 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  undefined1 auStack_c8 [36];
  uint local_a4;
  uint *local_a0;
  longlong local_98;
  char *local_90;
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  longlong *local_70;
  int local_68;
  uint *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar16 = (ulonglong)param_2;
  lVar17 = uVar16 * 0x138;
  if (0 < (int)param_1[uVar16 * 0x4e + 0x24]) {
    plVar10 = (longlong *)**(longlong **)(param_1 + uVar16 * 0x4e + 0x22);
    if ((plVar10 != (longlong *)0x0) && (*(char *)((longlong)param_1 + lVar17 + 0x14f) == '\0')) {
      *(undefined1 *)((longlong)param_1 + lVar17 + 0x14f) = 1;
      local_58 = param_1[5];
      local_54 = 0;
      local_50 = 0 < (int)param_1[0x142];
      local_4f = 0;
      local_60 = param_1;
      if (((param_1[1] != 0) &&
          ((((uVar3 = *param_1, -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
            (plVar9 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            plVar9 != (longlong *)0x0)) &&
           ((*(uint *)(plVar9 + 2) == param_1[1] && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0))))))
         && ((longlong *)*plVar9 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*plVar9 + 0x180))();
      }
      cVar5 = *(char *)((longlong)param_1 + lVar17 + 0x14d);
      if (cVar5 != -1) {
        *(char *)((longlong)param_1 + lVar17 + 0x14d) = cVar5 + '\x01';
      }
      if ((((char)param_3 == '\x04') ||
          (cVar5 = (**(code **)(*plVar10 + 0x28))(plVar10), cVar5 == '\0')) ||
         (cVar5 = (**(code **)(*plVar10 + 0xa8))(plVar10,&local_60,param_3), cVar5 != '\0')) {
        bVar6 = FUN_14065d9ca(plVar10,&local_60,param_3);
      }
      else {
        bVar6 = 0;
      }
      cVar5 = *(char *)((longlong)param_1 + lVar17 + 0x14d);
      if (cVar5 == '\0') {
        cVar5 = '\0';
      }
      else {
        cVar5 = cVar5 + -1;
        *(char *)((longlong)param_1 + lVar17 + 0x14d) = cVar5;
      }
      if ((int)param_1[uVar16 * 0x4e + 0x24] < 1) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)**(undefined8 **)(param_1 + uVar16 * 0x4e + 0x22);
      }
      if (plVar9 != plVar10) {
        *(undefined1 *)((longlong)param_1 + lVar17 + 0x14f) = 0;
        goto LAB_1403570eb;
      }
      if ((bVar6 & cVar5 == '\0') == 0) {
        uVar3 = param_1[0x112];
        lVar8 = (longlong)(int)uVar3;
        param_1[0x112] = uVar3 + 1;
        if (param_1[0x113] < uVar3 + 1) {
          FUN_147f5b43c(param_1 + 0xf2,uVar3);
        }
        puVar19 = param_1 + 0xf2;
        if (*(uint **)(param_1 + 0x110) != (uint *)0x0) {
          puVar19 = *(uint **)(param_1 + 0x110);
        }
        *(byte *)(puVar19 + lVar8 * 10) = param_2;
        *(char *)((longlong)puVar19 + lVar8 * 0x28 + 1) = (char)param_3;
        puVar2 = puVar19 + lVar8 * 10 + 2;
        puVar2[0] = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar19 = puVar19 + lVar8 * 10 + 5;
        puVar19[0] = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        *(undefined1 *)((longlong)param_1 + lVar17 + 0x14f) = 0;
        goto LAB_140356f61;
      }
      plVar9 = (longlong *)plVar10[0x10];
      plVar10[0x10] = 0;
      lVar8 = plVar10[0x11];
      *(undefined4 *)(plVar10 + 0x11) = 0;
      local_70 = plVar9;
      local_68 = (int)lVar8;
      (**(code **)(*(longlong *)(param_1 + uVar16 * 0x4e + 6) + 0x18))(param_1 + uVar16 * 0x4e + 6);
      *(undefined1 *)((longlong)param_1 + lVar17 + 0x14f) = 0;
      uVar3 = param_1[0x112];
      lVar18 = (longlong)(int)uVar3;
      iVar20 = (int)lVar8;
      if (lVar18 != 0) {
        local_a0 = param_1 + 0xf2;
        if (*(uint **)(param_1 + 0x110) != (uint *)0x0) {
          local_a0 = *(uint **)(param_1 + 0x110);
        }
        local_90 = (char *)((longlong)local_a0 + 0x29);
        uVar7 = 0;
        bVar11 = (byte)*local_a0 == param_2 && *(char *)((longlong)local_a0 + 1) != '\0';
        uVar12 = 0;
        local_98 = lVar17;
        do {
          lVar17 = (longlong)(int)uVar12;
          uVar4 = uVar12 + 1;
          if ((int)(uVar12 + 1) < (int)uVar3) {
            uVar4 = uVar3;
          }
          pcVar15 = local_90 + lVar17 * 0x28;
          uVar13 = uVar12;
          lVar8 = lVar17;
          do {
            lVar8 = lVar8 + 1;
            uVar14 = uVar4;
            if (lVar18 <= lVar8) break;
            cVar5 = *pcVar15;
            pbVar1 = (byte *)(pcVar15 + -1);
            uVar13 = uVar13 + 1;
            pcVar15 = pcVar15 + 0x28;
            uVar14 = uVar13;
          } while (bVar11 == (*pbVar1 == param_2 && cVar5 != '\0'));
          iVar20 = uVar14 - uVar12;
          local_a4 = uVar7;
          if (bVar11 == false) {
            if (uVar7 != uVar12) {
              memmove(local_a0 + (longlong)(int)uVar7 * 10,local_a0 + lVar17 * 10,
                      (longlong)iVar20 * 0x28);
            }
            uVar7 = local_a4 + iVar20;
          }
          else {
            FUN_1400e1ba8(local_a0 + lVar17 * 10,iVar20);
            uVar7 = local_a4;
          }
          bVar11 = (bool)(bVar11 ^ 1);
          uVar12 = uVar14;
        } while (lVar8 < lVar18);
        param_1[0x112] = uVar7;
        lVar17 = local_98;
        plVar9 = local_70;
        iVar20 = local_68;
      }
      if (plVar9 == (longlong *)0x0 || iVar20 == 0) {
LAB_14035733d:
        if (iVar20 != 0) {
          if (plVar9 == (longlong *)0x0) goto LAB_140356f61;
          goto LAB_14035734a;
        }
      }
      else {
        cVar5 = (**(code **)(*plVar9 + 0x30))(plVar9);
        if (cVar5 != '\0') {
          local_80 = param_1[5];
          local_7c = 0;
          local_78 = 0 < (int)param_1[0x142];
          local_77 = 0;
          local_88 = param_1;
          if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) &&
               ((int)uVar3 < DAT_14c9647dc)) &&
              ((plVar10 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == param_1[1])))) &&
             (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
              ((longlong *)*plVar10 != (longlong *)0x0)))) {
            (**(code **)(*(longlong *)*plVar10 + 0x180))();
          }
          (**(code **)(*plVar9 + 0x58))(plVar9,0,&local_88,6);
          plVar9 = local_70;
          iVar20 = local_68;
          goto LAB_14035733d;
        }
LAB_14035734a:
        (**(code **)*plVar9)(plVar9,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        local_68 = 0;
        plVar9 = local_70;
      }
      if (plVar9 != (longlong *)0x0) {
        FUN_1400020a8(plVar9);
      }
    }
  }
LAB_140356f61:
  if ((byte)param_1[0xf0] == param_2) {
    lVar17 = (longlong)param_1 + lVar17 + 0x18;
    do {
      *(char *)(param_1 + 0xf0) = (char)uVar16;
      lVar8 = FUN_1402b91c4(lVar17);
      if ((longlong)uVar16 < 1) break;
      uVar16 = uVar16 - 1;
      lVar17 = lVar17 + -0x138;
    } while (lVar8 == 0);
  }
  lVar17 = FUN_140358a34(param_1);
  if (lVar17 == 0) {
    lVar17 = 0;
    do {
      if ((0 < *(int *)((longlong)param_1 + lVar17 + 0x90)) &&
         (**(longlong **)((longlong)param_1 + lVar17 + 0x88) != 0)) goto LAB_1403570eb;
      lVar17 = lVar17 + 0x138;
    } while (lVar17 != 0x3a8);
    FUN_140356b2c(param_1 + 0x138);
  }
LAB_1403570eb:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403573f6 FUN_1403573f6 body=1059 status=ok
// SIG undefined FUN_1403573f6(void)

void FUN_1403573f6(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  int local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 == 0) goto LAB_140357629;
  if (DAT_14cac9ca8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1478c0a72;
    local_70 = &LAB_1417b2375;
    local_78 = L"Engine";
    local_80 = 0x1000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (lVar10 == 0) goto LAB_140357629;
  }
  if ((((DAT_14cac9ca8 == 0) || (lVar9 = *(longlong *)(lVar10 + 0x10), lVar9 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
      DAT_14cac9ca8 + 0x30)) goto LAB_140357629;
  if ((((*(char *)(param_1 + 0x50) != '\x01') || (lVar9 = *(longlong *)(param_1 + 0x20), lVar9 == 0)
       ) || ((-1 < *(short *)(param_1 + 0x28) && (*(longlong *)(param_1 + 0x30) == 0)))) ||
     (*(char *)(lVar9 + 0x88) != '\x01')) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1470fc33c(lVar10);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14480f766(lVar10 + 0x300);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    goto LAB_140357629;
  }
  bVar2 = *(byte *)(lVar9 + 0x89);
  local_2c = 0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    *(undefined1 *)((longlong)&local_30 + (ulonglong)bVar2) = 1;
  }
  if (*(longlong *)(lVar10 + 0x1c8) != 0) {
    FUN_140bc9c7c(*(longlong *)(lVar10 + 0x1c8),(ulonglong)bVar2,&local_30,1);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) goto LAB_140357629;
  local_48 = (code *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *(undefined ***)local_48 = &PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  *(longlong *)(local_48 + 0x10) = lVar7;
  *(undefined ***)local_48 = &PTR_FUN_14ac8d980;
  *(longlong *)(local_48 + 0x18) = param_1;
  if ((local_48 == (code *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)local_48 + 0x30))(), cVar5 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (code *)0x0) goto LAB_140357629;
      (*(code *)**(undefined8 **)local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_140357613;
    }
  }
  else {
    plVar1 = (longlong *)(lVar10 + 0x300);
    if (*(int *)(lVar10 + 0x314) < 1) {
      iVar3 = *(int *)(lVar10 + 0x308);
      iVar6 = *(int *)(lVar10 + 0x310) + -1;
      *(int *)(lVar10 + 0x310) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(lVar10 + 0x308);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(lVar10 + 0x310) = iVar8;
        if ((iVar8 < iVar3) && (*(int *)(lVar10 + 0x30c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_48 + 0x38))(local_48,local_38);
    }
    iVar3 = *(int *)(lVar10 + 0x308);
    *(uint *)(lVar10 + 0x308) = iVar3 + 1U;
    if (*(uint *)(lVar10 + 0x30c) < iVar3 + 1U) {
      FUN_1447a71f6(plVar1,iVar3);
    }
    lVar10 = *plVar1;
    lVar9 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar10 + lVar9) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar9) = 0;
    *(code **)(lVar10 + lVar9) = local_48;
    local_48 = (code *)0x0;
    *(int *)(lVar10 + 8 + lVar9) = local_40;
LAB_140357613:
    local_40 = 0;
  }
  if (local_48 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140357629:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035781a FUN_14035781a body=1480 status=ok
// SIG undefined FUN_14035781a(void)

void FUN_14035781a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_328 [32];
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f0;
  undefined **local_2e8 [11];
  longlong *local_290;
  longlong local_270;
  undefined1 local_230 [184];
  longlong local_178;
  longlong lStack_170;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined1 local_110;
  undefined8 local_10c;
  char local_104;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2f0 = (longlong *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_1403d7c40(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_1487c0548(local_2f0);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar8);
      if (lVar7 != 0) {
        local_104 = '\0';
        local_178 = 0;
        lStack_170 = 0;
        local_168 = 0;
        lStack_160 = 0;
        local_158 = 0;
        lStack_150 = 0;
        local_148 = 0;
        lStack_140 = 0;
        local_138 = 0;
        lStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        uStack_11f = 0;
        local_118 = 0;
        uStack_114 = 0;
        local_110 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        lVar4 = *(longlong *)(lVar7 + 0x10);
        if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar4);
        }
        local_178 = lVar4;
        FUN_140357de4(local_2e8,lVar7,&local_178);
        iVar2 = (int)local_168;
        if (DAT_14c763848 == -1) {
          local_74 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          uStack_88 = 0;
          uStack_87 = 0;
          local_70 = 0;
          uStack_68 = 0;
          FUN_140357de4(local_230,0);
          plVar6 = (longlong *)FUN_140789e1e();
          lVar7 = plVar6[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar7 = plVar6[0x22];
          }
          local_300 = 0;
          local_308 = lVar7;
          FUN_14496b17c(plVar6,local_230,lVar7,plVar6);
          DAT_14c763848 = (int)local_d8;
          FUN_144a7fc42(local_230);
          FUN_1403d8344(&local_e8);
        }
        if ((iVar2 <= DAT_14c763848) &&
           (uVar5 = local_168 >> 0x20, local_168 = local_168 & 0xffffffff00000000, (int)uVar5 != 0))
        {
          FUN_144893a1c(&lStack_170,0);
        }
        plVar6 = local_290;
        local_2e8[0] = &PTR__purecall_149e35f70;
        if (local_290 != (longlong *)0x0) {
          if (*local_290 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar6);
        }
        lVar7 = local_270;
        if (local_270 != 0) {
          if (*(longlong *)(local_270 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar7);
        }
        if (0 < (int)local_168) {
          iVar2 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
            FUN_145703cee(local_2f0,iVar2);
          }
          lVar7 = *local_2f0;
          *(longlong *)(lVar7 + (longlong)iVar2 * 0x88) = local_178;
          if ((local_178 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          lVar7 = lVar7 + (longlong)iVar2 * 0x88;
          *(undefined8 *)(lVar7 + 8) = 0;
          *(longlong *)(lVar7 + 8) = lStack_170;
          lStack_170 = 0;
          *(int *)(lVar7 + 0x10) = (int)local_168;
          *(undefined4 *)(lVar7 + 0x14) = local_168._4_4_;
          local_168 = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(longlong *)(lVar7 + 0x18) = lStack_160;
          lStack_160 = 0;
          *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_158;
          *(undefined4 *)(lVar7 + 0x24) = local_158._4_4_;
          local_158 = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(longlong *)(lVar7 + 0x28) = lStack_150;
          lStack_150 = 0;
          *(undefined4 *)(lVar7 + 0x30) = (undefined4)local_148;
          *(undefined4 *)(lVar7 + 0x34) = local_148._4_4_;
          local_148 = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          *(longlong *)(lVar7 + 0x38) = lStack_140;
          lStack_140 = 0;
          *(undefined4 *)(lVar7 + 0x40) = (undefined4)local_138;
          *(undefined4 *)(lVar7 + 0x44) = local_138._4_4_;
          local_138 = 0;
          *(undefined8 *)(lVar7 + 0x48) = 0;
          *(longlong *)(lVar7 + 0x48) = lStack_130;
          lStack_130 = 0;
          *(undefined4 *)(lVar7 + 0x50) = (undefined4)local_128;
          *(undefined4 *)(lVar7 + 0x54) = local_128._4_4_;
          local_128 = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(ulonglong *)(lVar7 + 0x58) = CONCAT71(uStack_11f,uStack_120);
          uStack_120 = 0;
          uStack_11f = 0;
          *(undefined4 *)(lVar7 + 0x60) = local_118;
          *(undefined4 *)(lVar7 + 100) = uStack_114;
          local_118 = 0;
          uStack_114 = 0;
          *(undefined1 *)(lVar7 + 0x68) = local_110;
          *(char *)(lVar7 + 0x74) = local_104;
          if (local_104 == '\x01') {
            *(undefined8 *)(lVar7 + 0x6c) = local_10c;
          }
          *(undefined8 *)(lVar7 + 0x78) = 0;
          *(longlong *)(lVar7 + 0x78) = local_100;
          local_100 = 0;
          *(undefined4 *)(lVar7 + 0x80) = (undefined4)uStack_f8;
          *(undefined4 *)(lVar7 + 0x84) = uStack_f8._4_4_;
          uStack_f8 = 0;
        }
        if (local_100 != 0) {
          FUN_1400020a8();
        }
        if (local_104 == '\x01') {
          local_104 = '\0';
        }
        if (CONCAT71(uStack_11f,uStack_120) != 0) {
          FUN_1400020a8();
        }
        if (lStack_130 != 0) {
          FUN_1400020a8();
        }
        if (lStack_140 != 0) {
          FUN_1400020a8();
        }
        if (lStack_150 != 0) {
          FUN_1400020a8();
        }
        if (lStack_160 != 0) {
          FUN_1400020a8();
        }
        if (lStack_170 != 0) {
          FUN_1400020a8();
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140357de4 FUN_140357de4 body=260 status=ok
// SIG undefined FUN_140357de4(void)

undefined8 * FUN_140357de4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined **local_1c0;
  undefined8 *local_1b8;
  undefined ***local_1b0;
  undefined8 **local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = param_3 + 8;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = &PTR_FUN_14b3e6b70;
  param_1[0x15] = param_2;
  param_1[0x16] = param_3;
  *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 0x20;
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_1d8 = FUN_144938c96(param_2);
    local_1a8 = &local_1b0;
    local_1c0 = &PTR_FUN_149e37810;
    local_1b0 = &local_1c0;
    local_1d0 = 0;
    local_1b8 = param_1;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,local_1a8,param_1[0x15],plVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140357eea FUN_140357eea body=188 status=ok
// SIG undefined FUN_140357eea(void)

void FUN_140357eea(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(*param_1 + 0x18))();
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e40420(uVar3,&local_48,0);
  lVar1 = local_48;
  lVar4 = (longlong)(int)uStack_40;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar1 + lVar5);
      FUN_140357fa8(uVar3,0x7f800000,2);
      bVar2 = FUN_140358036(param_1);
      FUN_140357fa8(uVar3,1 << (bVar2 & 0x1f),1);
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140357fa8 FUN_140357fa8 body=142 status=ok
// SIG undefined FUN_140357fa8(void)

void FUN_140357fa8(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x5c8);
  if (param_3 == '\x01') {
    param_2 = param_2 | uVar1;
  }
  else if (param_3 == '\x02') {
    param_2 = ~param_2 & uVar1;
  }
  if ((param_2 != uVar1) &&
     (*(uint *)(param_1 + 0x5c8) = param_2, (~*(byte *)(param_1 + 0x9c) & 3) == 0)) {
    bVar2 = *(byte *)(param_1 + 0x9d);
    if ((bVar2 & 1) == 0) {
LAB_140358008:
      *(byte *)(param_1 + 0x9d) = bVar2 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) {
        bVar2 = *(byte *)(param_1 + 0x9d);
        goto LAB_140358008;
      }
    }
  }
  return;
}



// FUNCTION 140358036 FUN_140358036 body=117 status=ok
// SIG undefined FUN_140358036(void)

undefined1 FUN_140358036(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))();
  lVar2 = *plVar4;
  lVar5 = FUN_140161d51();
  uVar6 = (ulonglong)*(int *)(lVar5 + 0x48);
  if ((longlong)uVar6 < 1) {
    plVar4 = (longlong *)(lVar5 + 0x20);
  }
  else {
    plVar4 = *(longlong **)(lVar5 + 0x40);
    if (*plVar4 != lVar2) {
      plVar7 = plVar4;
      uVar3 = 1;
      do {
        uVar9 = uVar3;
        plVar8 = plVar4 + uVar6 * 4 + -4;
        if (uVar6 == uVar9) break;
        plVar8 = plVar7 + 4;
        plVar1 = plVar7 + 4;
        plVar7 = plVar8;
        uVar3 = uVar9 + 1;
      } while (*plVar1 != lVar2);
      plVar4 = (longlong *)(lVar5 + 0x20);
      if (uVar9 < uVar6) {
        plVar4 = plVar8;
      }
    }
  }
  return (char)plVar4[1];
}



// FUNCTION 1403580ac FUN_1403580ac body=380 status=ok
// SIG undefined FUN_1403580ac(void)

longlong FUN_1403580ac(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14035834a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140358228 FUN_140358228 body=200 status=ok
// SIG undefined FUN_140358228(void)

longlong FUN_140358228(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x560) != 0) {
    uVar4 = FUN_141248bfa((longlong *)(param_1 + 0x558),0,0xbf800000);
    if ((int)uVar4 < 0) {
      return 0;
    }
    if ((int)uVar4 < *(int *)(param_1 + 0x560)) {
      lVar6 = *(longlong *)(param_1 + 0x558);
      plVar1 = (longlong *)(lVar6 + (ulonglong)uVar4 * 0x20);
      lVar6 = *(longlong *)(lVar6 + 8 + (ulonglong)uVar4 * 0x20);
      if (lVar6 == 0) {
        uVar5 = FUN_1405bc036();
        lVar6 = FUN_14477b664(uVar5);
        plVar1[1] = lVar6;
      }
      if (plVar1[2] != 0) {
        return plVar1[2];
      }
      if (lVar6 == 0) {
        return 0;
      }
      if (*plVar1 != 0) {
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,plVar1);
        }
        plVar1[2] = lVar6;
        return lVar6;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1403582f0 FUN_1403582f0 body=89 status=ok
// SIG undefined FUN_1403582f0(void)

void FUN_1403582f0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1403604d0(param_2,param_3,0,param_4,0,1,1,1,1,0);
  }
  *(undefined1 *)(param_2 + 0x151) = 0;
  return;
}



// FUNCTION 14035834a FUN_14035834a body=228 status=ok
// SIG undefined FUN_14035834a(void)

longlong FUN_14035834a(void)

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
  if (DAT_14cb572b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14863f0b5;
    local_40 = FUN_1418477b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x790;
    FUN_14081cfa3(L"/Script/GbxGame",L"AIDodgeData",&DAT_14cb572b0,&DAT_14863f0b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb572b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035842f FUN_14035842f body=331 status=ok
// SIG undefined FUN_14035842f(void)

void FUN_14035842f(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0 && param_1 != 0) && ((longlong)*(int *)(param_2 + 0x88) != 0)) {
    lVar4 = *(longlong *)(param_2 + 0x80) + 0x50;
    lVar6 = (longlong)*(int *)(param_2 + 0x88) * 0x90;
    do {
      switch(*(undefined1 *)(lVar4 + -0x30)) {
      case 1:
        lVar1 = 0x30;
        lVar2 = 0x2c;
        lVar3 = 0x28;
        lVar5 = 0x24;
        goto LAB_1403584d3;
      case 2:
        FUN_140a1d5a8(param_1,*(undefined8 *)(lVar4 + -0x50),*(undefined4 *)(lVar4 + -0x1c));
        break;
      case 3:
        lVar1 = 0x4c;
        lVar2 = 0x48;
        lVar3 = 0x44;
        lVar5 = 0x40;
LAB_1403584d3:
        local_40 = *(undefined4 *)(lVar4 + -0x50 + lVar5);
        local_3c = *(undefined4 *)(lVar4 + -0x50 + lVar3);
        local_38 = *(undefined4 *)(lVar4 + -0x50 + lVar2);
        local_34 = *(undefined4 *)(lVar4 + -0x50 + lVar1);
        FUN_140654ea0(param_1,*(undefined8 *)(lVar4 + -0x50),&local_40);
        break;
      case 4:
        lVar1 = FUN_140832a06(lVar4);
        if (lVar1 != 0) {
          FUN_1479e6c58(param_1,*(undefined8 *)(lVar4 + -0x50),lVar1);
        }
      }
      lVar4 = lVar4 + 0x90;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035857b FUN_14035857b body=514 status=ok
// SIG undefined FUN_14035857b(void)

ulonglong FUN_14035857b(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar10 = param_1[1];
  if (lVar10 == 0) {
    uVar4 = FUN_140927942();
    lVar10 = FUN_14477b664(uVar4);
    param_1[1] = lVar10;
  }
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    uVar9 = 0;
    if ((lVar10 == 0) || (*param_1 == 0)) goto LAB_140358663;
    plVar1 = *(longlong **)(lVar10 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_1);
        param_1[2] = lVar5;
        if (lVar5 == 0) goto LAB_140358663;
        lVar10 = param_1[1];
        goto LAB_1403585ae;
      }
    }
    param_1[2] = 0;
    uVar9 = 0;
    goto LAB_140358663;
  }
LAB_1403585ae:
  if (lVar10 == 0) {
    uVar4 = FUN_140927942();
    lVar10 = FUN_14477b664(uVar4);
    param_1[1] = lVar10;
    lVar5 = param_1[2];
    if (((lVar5 == 0) && (lVar5 = 0, lVar10 != 0)) && (*param_1 != 0)) {
      plVar1 = *(longlong **)(lVar10 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_14035877a:
        lVar5 = 0;
      }
      else {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 == '\0') goto LAB_14035877a;
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,param_1);
      }
      param_1[2] = lVar5;
    }
  }
  puVar6 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(lVar5 + 8);
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1400b2348(puVar6,&local_38);
  uVar9 = 0;
  iVar7 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    puVar3 = &DAT_149dfb77a;
    if ((int)uStack_30 != 0) {
      puVar3 = local_38;
    }
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar3[lVar10] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar10]) -
              0x20;
      uVar11 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar8) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar10 = lVar10 + 1;
    } while (iVar7 != (int)lVar10);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140358663:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035877e FUN_14035877e body=279 status=ok
// SIG undefined FUN_14035877e(void)

void FUN_14035877e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_140d4a888(param_1 + 0x48,0);
  }
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x30) = param_2;
  if ((param_2 == 0) || ((bVar2 & 1) == 0)) {
    *(longlong *)(param_1 + 0x38) = param_2;
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x38) = param_2;
  }
  uVar3 = FUN_140a2a00c();
  uVar3 = FUN_144718840(param_2,uVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  FUN_1403610b6(param_1);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  FUN_14035e1f0(param_1,param_3);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    *(longlong **)(param_1 + 0x60) = &DAT_14cb78ba8;
    *(longlong *)(param_1 + 0x58) = param_1;
    lVar4 = DAT_14cb78ba8;
    while( true ) {
      *(longlong *)(param_1 + 0x48) = lVar4;
      LOCK();
      lVar5 = **(longlong **)(param_1 + 0x60);
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        **(longlong **)(param_1 + 0x60) = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      *(longlong *)(param_1 + 0x48) = lVar5;
      lVar4 = **(longlong **)(param_1 + 0x60);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140358896 FUN_140358896 body=57 status=ok
// SIG undefined FUN_140358896(void)

void FUN_140358896(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e3c0 = FUN_140002ddd(FUN_14653aacd,uVar1,L"PerchUserDef");
  }
  return;
}



// FUNCTION 1403588d0 FUN_1403588d0 body=355 status=ok
// SIG undefined FUN_1403588d0(void)

void FUN_1403588d0(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(*param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  plVar3 = (longlong *)0x0;
  if (*param_2 != 0) {
    plVar3 = (longlong *)param_2[1];
  }
  *(longlong **)(param_1 + 2) = plVar3;
  if ((((((plVar3 != (longlong *)0x0) && (uVar2 != 0)) && (uVar4 = *param_1, -1 < (int)uVar4)) &&
       (((int)uVar4 < DAT_14c9647dc &&
        (lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar5 != 0)))) &&
      ((*(uint *)(lVar5 + 0x10) == uVar2 &&
       (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
        (lVar5 = (**(code **)(*plVar3 + 0x18))(), lVar5 != 0)))))) &&
     ((*(char *)(lVar5 + 8) == '\x01' && (lVar5 = FUN_140f4df0c(*param_2), lVar5 != 0)))) {
    FUN_140608954(lVar5 + 0x78,&DAT_14cb23f48);
  }
  lVar5 = FUN_140358a34(param_1);
  if (lVar5 != 0) {
    FUN_14035a7fc(param_1 + 0x138,param_1);
    return;
  }
  return;
}



// FUNCTION 140358a34 FUN_140358a34 body=116 status=ok
// SIG undefined FUN_140358a34(void)

undefined8 FUN_140358a34(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 2) + 0x18))();
        if (lVar3 != 0) {
          uVar2 = FUN_140358aa8(lVar3 + 0x10);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140358aa8 FUN_140358aa8 body=375 status=ok
// SIG undefined FUN_140358aa8(void)

longlong FUN_140358aa8(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140358c20();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140358c20 FUN_140358c20 body=228 status=ok
// SIG undefined FUN_140358c20(void)

longlong FUN_140358c20(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb21a48 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_147f22901;
    local_40 = FUN_146435282;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxBrainTaskData",&DAT_14cb21a48,&DAT_147f22900);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb21a48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140358d06 FUN_140358d06 body=310 status=ok
// SIG undefined FUN_140358d06(void)

longlong * FUN_140358d06(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb241a8;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140358e3e FUN_140358e3e body=423 status=ok
// SIG undefined FUN_140358e3e(void)

void FUN_140358e3e(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *_Buf1;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (0 < (longlong)(int)param_1[1]) {
    bVar7 = false;
    uVar11 = (longlong)(int)param_1[1];
LAB_140358e63:
    do {
      uVar12 = uVar11 - 1;
      lVar6 = *param_1;
      pvVar10 = (void *)(lVar6 + uVar12 * 0x58);
      if ((longlong)(int)param_2[1] != 0) {
        _Buf1 = (undefined8 *)(*param_2 + 8);
        lVar9 = 0;
        do {
          if (_Buf1[6] == *(longlong *)((longlong)pvVar10 + 0x38)) {
            if (*param_2 != lVar9) {
              pbVar1 = (byte *)(_Buf1 + 4);
              if (*pbVar1 != *(byte *)((longlong)pvVar10 + 0x28)) goto LAB_140358f78;
              if (*(ushort *)((longlong)pvVar10 + 0x20) < 0x19) {
                pvVar10 = (void *)((longlong)pvVar10 + 8);
              }
              else {
                pvVar10 = *(void **)((longlong)pvVar10 + 8);
              }
              if (0x18 < *(ushort *)(_Buf1 + 3)) {
                _Buf1 = (undefined8 *)*_Buf1;
              }
              uVar5 = (ulonglong)((uint)*pbVar1 * 0x120);
              if (*(code **)(&DAT_14c9a85e0 + uVar5) == (code *)0x0) {
                iVar4 = memcmp(_Buf1,pvVar10,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
                if (iVar4 != 0) goto LAB_140358f78;
              }
              else {
                cVar3 = (**(code **)(&DAT_14c9a85e0 + uVar5))();
                if (cVar3 == '\0') goto LAB_140358f78;
                lVar6 = *param_1;
              }
              pvVar10 = (void *)(lVar6 + uVar12 * 0x58);
              FUN_140358fe5(pvVar10);
              uVar8 = *(uint *)(param_1 + 1);
              goto LAB_140358f1b;
            }
            break;
          }
          _Buf1 = _Buf1 + 0xb;
          lVar9 = lVar9 + -0x58;
        } while ((longlong)(int)param_2[1] * -0x58 - lVar9 != 0);
      }
      if (*(char *)((longlong)pvVar10 + 0x55) == '\x01') {
        FUN_140358fe5(pvVar10);
        uVar8 = *(uint *)(param_1 + 1);
LAB_140358f1b:
        if (uVar11 != uVar8) {
          memmove(pvVar10,(void *)((longlong)pvVar10 + 0x58),
                  (longlong)(int)(uVar8 - (int)uVar11) * 0x58);
          uVar8 = *(uint *)(param_1 + 1);
        }
        iVar4 = uVar8 - 1;
        *(int *)(param_1 + 1) = iVar4;
        bVar7 = true;
        bVar2 = (longlong)uVar11 < 2;
        uVar11 = uVar12;
        if (bVar2) goto LAB_140358f32;
        goto LAB_140358e63;
      }
LAB_140358f78:
      bVar2 = 1 < (longlong)uVar11;
      uVar11 = uVar12;
    } while (bVar2);
    if (bVar7) {
      iVar4 = (int)param_1[1];
LAB_140358f32:
      *(undefined4 *)(param_1 + 2) = 0;
      if (iVar4 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          uVar8 = uVar8 | *(uint *)(*param_1 + 0x50 + lVar6);
          *(uint *)(param_1 + 2) = uVar8;
          lVar6 = lVar6 + 0x58;
        } while ((longlong)iVar4 * 0x58 - lVar6 != 0);
      }
    }
  }
  return;
}



// FUNCTION 140358fe5 FUN_140358fe5 body=119 status=ok
// SIG undefined FUN_140358fe5(void)

void FUN_140358fe5(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar3[7] != 0) {
        FUN_1400020a8();
      }
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
      puVar3 = puVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14035905c FUN_14035905c body=510 status=ok
// SIG undefined FUN_14035905c(void)

void FUN_14035905c(longlong param_1,undefined4 param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))();
  iVar2 = (int)param_3[5];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar9 = 0;
    iVar14 = 0;
    iVar8 = 0;
  }
  else {
    puVar11 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_3 + 2);
    }
    uVar5 = *puVar11;
    if (uVar5 == 0) {
      iVar14 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar14 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar9;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar9) goto LAB_1403591ee;
        iVar8 = iVar8 + 0x20;
        uVar5 = puVar11[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar14 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar14) {
      iVar14 = iVar2;
    }
  }
  if (iVar14 != iVar2) {
    uVar5 = 0xffffffff;
    do {
      FUN_1402c74da(uVar4,*(undefined8 *)(*param_3 + (longlong)iVar14 * 0x1f0));
      uVar5 = ~(uint)uVar15 & uVar5;
      puVar11 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_3 + 2);
      }
      iVar3 = (int)param_3[5];
      iVar14 = (int)uVar9;
      lVar12 = (longlong)iVar14;
      uVar10 = puVar11[lVar12] & uVar5;
      if (uVar10 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar6) {
          lVar13 = 0;
          do {
            uVar10 = puVar11[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar9 = (ulonglong)(iVar14 + (int)lVar13 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1403591b4;
            }
            iVar8 = iVar8 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar12 != lVar13);
          uVar5 = 0xffffffff;
          iVar14 = iVar7;
        }
        uVar9 = (ulonglong)(iVar14 + 1);
        iVar14 = iVar3;
      }
      else {
LAB_1403591b4:
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar14 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar14) {
          iVar14 = iVar3;
        }
      }
    } while (iVar14 != iVar2);
  }
LAB_1403591ee:
  FUN_14036083c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014035921a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x28))(param_1 + 0x1238,param_2);
  return;
}



// FUNCTION 14035925a FUN_14035925a body=1226 status=ok
// SIG undefined FUN_14035925a(void)

void FUN_14035925a(code *param_1,longlong *param_2,code param_3,code param_4)

{
  double dVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  code cVar12;
  double dVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405213ee();
  if (param_2 == (longlong *)0x0) {
    *(uint *)param_1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)param_1 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar4 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar4 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar4 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar4 = uVar9;
      }
    }
  }
  *(uint *)(param_1 + 4) = uVar4;
  uVar5 = FUN_14069ce7c();
  uVar5 = FUN_144718840(param_2,uVar5);
  FUN_140359726(&local_50,uVar5);
  *(code **)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0) {
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_142b4754c;
      local_78 = &LAB_147c45ce0;
      local_80 = &LAB_1463f1ff4;
      local_88 = &DAT_149e063b2;
      local_90 = 0x4000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x428;
      local_70 = &local_50;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      pcVar2 = *(code **)(*param_2 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        lVar10 = param_2[0x76];
        if (lVar10 == 0) {
          pcVar2 = *(code **)(*param_2 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (*(int *)((longlong)param_2 + 0x75b4) != 0) {
                uVar4 = *(uint *)(param_2 + 0xeb6);
                lVar10 = 0;
                if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140359586;
                plVar8 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                if ((plVar8 != (longlong *)0x0) &&
                   (((int)plVar8[2] == *(int *)((longlong)param_2 + 0x75b4) &&
                    ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                    lVar10 = *plVar8;
                  }
                  else {
                    lVar10 = 0;
                  }
                  lVar10 = lVar10 + 0x110;
                  goto LAB_1403595db;
                }
              }
            }
            else {
              lVar10 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
LAB_1403595db:
              if (lVar10 != 0) {
                lVar10 = *(longlong *)(lVar10 + 0x20);
                goto LAB_1403595e4;
              }
            }
          }
          else {
            lVar10 = (*pcVar2)(param_2);
LAB_1403595e4:
            if (lVar10 != 0) {
              lVar10 = *(longlong *)(lVar10 + 0x3b0);
              goto LAB_140359586;
            }
          }
          lVar10 = 0;
        }
      }
      else {
        lVar10 = (*pcVar2)(param_2);
      }
LAB_140359586:
      cVar12 = (code)(lVar10 != 0);
      goto LAB_14035932f;
    }
  }
  cVar12 = (code)0x0;
LAB_14035932f:
  param_1[0x18e] = cVar12;
  param_1[0x189] = param_3;
  param_1[0x18a] = param_4;
  if (param_3 == (code)0x0) {
    FUN_1400bc96c(param_1 + 0x18,&DAT_14cb24430);
    param_4 = param_1[0x18a];
  }
  if (param_4 == (code)0x0) {
    FUN_1400bc96c(param_1 + 0x40,&DAT_14cb24430);
  }
  if (*(longlong *)(param_1 + 0x1b8) == 0) {
    pcVar2 = param_1 + 0x1a8;
    *(longlong **)(param_1 + 0x1c0) = &DAT_14cb246c8;
    *(code **)(param_1 + 0x1b8) = param_1;
    lVar10 = DAT_14cb246c8;
    while( true ) {
      *(longlong *)(param_1 + 0x1a8) = lVar10;
      LOCK();
      lVar6 = **(longlong **)(param_1 + 0x1c0);
      bVar11 = lVar10 == lVar6;
      if (bVar11) {
        **(longlong **)(param_1 + 0x1c0) = (longlong)pcVar2;
        lVar6 = lVar10;
      }
      UNLOCK();
      if (bVar11) break;
      *(longlong *)(param_1 + 0x1a8) = lVar6;
      lVar10 = **(longlong **)(param_1 + 0x1c0);
    }
    if (*(longlong *)pcVar2 != 0) {
      *(code **)(*(longlong *)pcVar2 + 8) = pcVar2;
    }
  }
  local_50 = param_1;
  FUN_1403597f2(&local_50,param_1 + 0xb8,param_1 + 0xa8);
  FUN_1403597f2(&local_50,param_1 + 0x128,param_1 + 0x118);
  if ((((*(uint *)(param_1 + 4) != 0) && (uVar4 = *(uint *)param_1, -1 < (int)uVar4)) &&
      ((int)uVar4 < DAT_14c9647dc)) &&
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && (*(uint *)(plVar8 + 2) == *(uint *)(param_1 + 4))) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
       (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
    (**(code **)(*plVar8 + 0x588))(plVar8,param_1 + 400,&local_50);
    lVar10 = plVar8[0x39];
    if (lVar10 == 0) {
      pdVar7 = (double *)&DAT_14c8464e0;
      dVar13 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar10 + 0x260);
      dVar13 = *(double *)(lVar10 + 0x270);
    }
    dVar1 = pdVar7[1];
    *(double *)(param_1 + 400) = *(double *)(param_1 + 400) - *pdVar7;
    *(double *)(param_1 + 0x198) = *(double *)(param_1 + 0x198) - dVar1;
    *(double *)(param_1 + 0x1a0) = *(double *)(param_1 + 0x1a0) - dVar13;
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140359726 FUN_140359726 body=204 status=ok
// SIG undefined FUN_140359726(void)

uint * FUN_140359726(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1403597f2 FUN_1403597f2 body=753 status=ok
// SIG undefined FUN_1403597f2(void)

void FUN_1403597f2(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  byte bVar16;
  bool bVar17;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong local_128;
  ulonglong local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar2 = (uint *)*param_1;
  *(undefined4 *)(param_2 + 0x58) = 0;
  local_130 = param_3;
  if (*(int *)(param_2 + 0x5c) < 0) {
    FUN_14089e18e(param_2,0);
  }
  uVar4 = puVar2[1];
  if (((((uVar4 != 0) && (uVar1 = *puVar2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == uVar4)))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1800000000;
    FUN_140a44582(*plVar6,local_118,0);
    uVar4 = *(uint *)(local_130 + 1);
    if ((int)uVar4 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4 + 1);
    }
    if (*(int *)(param_2 + 0x5c) <= (int)uVar4) {
      FUN_14089e18e(param_2);
      uVar4 = *(uint *)(local_130 + 1);
    }
    local_128 = param_2;
    if (0 < (int)uVar4) {
      local_120 = (ulonglong)uVar4;
      uVar14 = 0;
      bVar15 = 0;
      do {
        lVar9 = *local_130;
        bVar16 = 1;
        uVar7 = (undefined4)uVar14;
        if (((bVar15 & 1) == 0) && (bVar16 = *(byte *)(lVar9 + 0x49 + uVar14 * 0x50), bVar16 != 0))
        {
          uVar7 = 0xffffffff;
        }
        if (*(longlong *)(lVar9 + 0x38 + uVar14 * 0x50) != 0) {
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          lVar13 = (longlong)(int)local_50;
          if (lVar13 != 0) {
            puVar11 = (undefined8 *)(lVar9 + uVar14 * 0x50 + 0x38);
            lVar9 = 0;
            do {
              plVar6 = *(longlong **)(puVar10 + lVar9);
              if ((plVar6 != (longlong *)0x0) &&
                 (cVar3 = (**(code **)(*plVar6 + 0x4c8))(plVar6,*puVar11), lVar12 = local_128,
                 cVar3 != '\0')) {
                iVar5 = *(int *)(local_128 + 0x58);
                lVar9 = (longlong)iVar5;
                *(uint *)(local_128 + 0x58) = iVar5 + 1U;
                if (*(uint *)(local_128 + 0x5c) < iVar5 + 1U) {
                  FUN_147f5ff1a(local_128,iVar5);
                }
                lVar13 = *(longlong *)(lVar12 + 0x50);
                if (lVar13 == 0) {
                  lVar13 = lVar12;
                }
                *(undefined8 *)(lVar13 + lVar9 * 0x14) = 0;
                uVar4 = *(uint *)((longlong)plVar6 + 0xc);
                *(uint *)(lVar13 + lVar9 * 0x14) = uVar4;
                if ((int)uVar4 < DAT_14c9647dc) {
                  lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                }
                else {
                  lVar12 = 0;
                }
                iVar5 = *(int *)(lVar12 + 0x10);
                if (*(int *)(lVar12 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar8 = DAT_14c964868 + 1;
                  bVar17 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar17) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar8);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar12 + 0x10);
                  bVar17 = iVar5 == 0;
                  if (bVar17) {
                    *(int *)(lVar12 + 0x10) = iVar8;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  if (bVar17) {
                    iVar5 = iVar8;
                  }
                }
                lVar13 = lVar13 + lVar9 * 0x14;
                *(int *)(lVar13 + 4) = iVar5;
                *(undefined8 *)(lVar13 + 8) = *puVar11;
                *(undefined4 *)(lVar13 + 0x10) = uVar7;
                break;
              }
              lVar9 = lVar9 + 8;
            } while (lVar13 * 8 != lVar9);
          }
        }
        uVar14 = uVar14 + 1;
        bVar15 = bVar16;
      } while (uVar14 != local_120);
    }
    if ((*(int *)(local_128 + 0x58) < 1) &&
       (*(undefined4 *)(local_128 + 0x58) = 0, *(int *)(local_128 + 0x5c) != 0)) {
      FUN_14089e18e(local_128,0);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140359ae6 FUN_140359ae6 body=541 status=ok
// SIG undefined FUN_140359ae6(void)

void FUN_140359ae6(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  code *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
  if (puVar3 != (undefined8 *)0x0) {
    if (*DAT_14cb76150 == '\x01') {
      if (*(int *)(puVar3 + 3) != *(int *)((longlong)puVar3 + 0x44)) {
        uVar1 = (uint)((ulonglong)DAT_14c9abbf0 >> 0x10);
        uVar7 = (uint)DAT_14c9abbf0 & 0xffff;
        puVar4 = puVar3 + 9;
        if ((undefined8 *)puVar3[10] != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)puVar3[10];
        }
        iVar8 = *(int *)((longlong)puVar4 +
                        (ulonglong)
                        (*(int *)(puVar3 + 0xb) - 1U &
                        (int)((ulonglong)DAT_14c9abbf0 >> 0x20) +
                        ((uint)DAT_14c9abbf0 << 0x10 | uVar7) + (uVar1 << 0x13 | uVar1 & 0xffff) +
                        (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(puVar3[2] + (longlong)iVar8 * 0x460) == DAT_14c9abbf0)
            goto LAB_140359be1;
            iVar8 = *(int *)((longlong)iVar8 * 0x460 + puVar3[2] + 0x450);
          } while (iVar8 != -1);
        }
      }
      lVar2 = DAT_14c9abbe8;
      if (DAT_14c9abbe8 == 0) {
        plVar6 = (longlong *)FUN_145a10a92();
        lVar2 = plVar6[0x22];
        if (plVar6[0x22] == 0) {
          (**(code **)(*plVar6 + 1000))(plVar6);
          lVar2 = plVar6[0x22];
        }
      }
      DAT_14c9abbe8 = lVar2;
      lVar2 = DAT_14c9abbe8;
      FUN_145702a50(puVar3,DAT_14c9abbf0);
      lVar5 = FUN_145702ad2(puVar3,DAT_14c9abbf0);
      *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)(lVar2 + 0x48);
      *(undefined4 *)(lVar5 + 0xd4) = *(undefined4 *)(lVar2 + 0x4c);
    }
LAB_140359be1:
    *puVar3 = param_1;
    *(undefined4 *)(puVar3 + 1) = param_2;
    local_38 = &local_41;
    local_40 = FUN_142b5187e;
    FUN_1408d6bd2(puVar3,DAT_14c9abbf8);
    lVar2 = DAT_14c9abbf0;
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    if (*(int *)(lVar5 + 0x18) != *(int *)(lVar5 + 0x44)) {
      uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar7 = (uint)lVar2 & 0xffff;
      lVar9 = lVar5 + 0x48;
      if (*(longlong *)(lVar5 + 0x50) != 0) {
        lVar9 = *(longlong *)(lVar5 + 0x50);
      }
      iVar8 = *(int *)(lVar9 + (ulonglong)
                               (*(int *)(lVar5 + 0x58) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar9 = *(longlong *)(lVar5 + 0x10) + (longlong)iVar8 * 0x460;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar8 * 0x460) == lVar2) {
            if (lVar9 != 0) {
              *(undefined1 *)(lVar9 + 0xfc) = 1;
            }
            break;
          }
          iVar8 = *(int *)(lVar9 + 0x450);
        } while (iVar8 != -1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140359d04 FUN_140359d04 body=257 status=ok
// SIG undefined FUN_140359d04(void)

undefined8
FUN_140359d04(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140b0ae5c();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140359e06 FUN_140359e06 body=783 status=ok
// SIG undefined FUN_140359e06(void)

void FUN_140359e06(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140a19d0e(param_1 + 0x30,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar6;
  if (DAT_14cb22108 == 0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147f28909;
    local_70 = FUN_1464376d6;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
  }
  uVar7 = FUN_144718840(param_2,DAT_14cb22108);
  FUN_14035a116(&local_38,uVar7);
  *(undefined4 *)(param_1 + 0x20) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x28) = uStack_30;
  *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar10 = (longlong *)(param_1 + 0x30);
    *(longlong **)(param_1 + 0x48) = &DAT_14cb24328;
    *(longlong *)(param_1 + 0x40) = param_1;
    lVar11 = DAT_14cb24328;
    while( true ) {
      *(longlong *)(param_1 + 0x30) = lVar11;
      LOCK();
      lVar8 = **(longlong **)(param_1 + 0x48);
      bVar12 = lVar11 == lVar8;
      if (bVar12) {
        **(longlong **)(param_1 + 0x48) = (longlong)plVar10;
        lVar8 = lVar11;
      }
      UNLOCK();
      if (bVar12) break;
      *(longlong *)(param_1 + 0x30) = lVar8;
      lVar11 = **(longlong **)(param_1 + 0x48);
    }
    if (*plVar10 != 0) {
      *(longlong **)(*plVar10 + 8) = plVar10;
    }
  }
  uVar7 = FUN_1447210f0(param_2);
  FUN_14019d0a4(&local_38,uVar7);
  plVar10 = (longlong *)CONCAT44(uStack_2c,uStack_30);
  if (plVar10 != (longlong *)0x0) {
    iVar6 = (int)plVar10[1];
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plVar10[1];
      bVar12 = iVar6 == iVar9;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar9 = iVar6;
      }
      iVar6 = iVar9;
      UNLOCK();
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_2c,uStack_30) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_2c,uStack_30) + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      if (local_38 != (code *)0x0) {
        local_48 = *(undefined4 *)(param_1 + 0x20);
        uStack_44 = *(undefined4 *)(param_1 + 0x24);
        uStack_40 = *(undefined4 *)(param_1 + 0x28);
        uStack_3c = *(undefined4 *)(param_1 + 0x2c);
        pcVar2 = local_38 + 0x40;
        iVar6 = *(int *)(local_38 + 0x48);
        *(uint *)(local_38 + 0x48) = iVar6 + 1U;
        if (*(uint *)(local_38 + 0x4c) < iVar6 + 1U) {
          FUN_1457034d2(pcVar2,iVar6);
        }
        puVar4 = (undefined4 *)(*(longlong *)pcVar2 + (longlong)iVar6 * 0x10);
        *puVar4 = local_48;
        puVar4[1] = uStack_44;
        puVar4[2] = uStack_40;
        puVar4[3] = uStack_3c;
      }
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035a116 FUN_14035a116 body=204 status=ok
// SIG undefined FUN_14035a116(void)

uint * FUN_14035a116(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14035a1e2 FUN_14035a1e2 body=772 status=ok
// SIG undefined FUN_14035a1e2(void)

undefined8 * FUN_14035a1e2(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14ac89870;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14ac88b60;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14035a396;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14035a380;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14035a380:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14035a396:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14035a536 FUN_14035a536 body=708 status=ok
// SIG undefined FUN_14035a536(void)

void FUN_14035a536(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x128) = param_2, param_3 != 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    cVar4 = FUN_14486ea84(puVar1);
    if (cVar4 == '\0') {
      uVar5 = FUN_1403c7982();
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar5);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_1403c7982();
        plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
        if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
          if ((*(longlong *)(param_1 + 0x128) != 0) &&
             (*(char *)(*(longlong *)(param_1 + 0x128) + 0x178) == '\x03')) {
            uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
            FUN_14036c7e6(uVar5,&local_50,param_3,1);
            *(undefined8 *)(param_1 + 0x60) = local_40;
            *(undefined8 *)(param_1 + 0x68) = uStack_38;
            *puVar1 = (undefined4)local_50;
            *(undefined4 *)(param_1 + 0x54) = local_50._4_4_;
            *(undefined4 *)(param_1 + 0x58) = uStack_48;
            *(undefined4 *)(param_1 + 0x5c) = uStack_44;
          }
          cVar4 = FUN_14486ea84(puVar1);
          if (cVar4 != '\0') {
            if (*(longlong *)(param_1 + 0x110) == 0) {
              lVar8 = FUN_14008e0ae(puVar1);
              uVar5 = *(undefined8 *)(param_1 + 0x128);
              local_50 = (undefined8 *)0x0;
              uStack_48 = 0;
              FUN_1446efa72(&local_50,0,3,0x10);
              puVar2 = local_50;
              uStack_48 = 3;
              *local_50 = &PTR_LAB_14b3f7890;
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 1;
              lVar3 = DAT_14c758608 + 1;
              if (lVar9 == 0) {
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 2;
                lVar3 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar3;
              local_50[2] = lVar9;
              *local_50 = &PTR_FUN_14b41f330;
              local_50[3] = 0;
              FUN_14485c47a(local_50 + 3,uVar5);
              puVar2[4] = param_1;
              FUN_14036a282(lVar8 + 0x168,&local_58,&local_50);
              FUN_1449db362(&local_50);
              *(undefined8 *)(param_1 + 0x110) = local_58;
            }
            if (*(longlong *)(param_1 + 0x118) == 0) {
              lVar8 = FUN_14008e0ae(puVar1);
              uVar5 = *(undefined8 *)(param_1 + 0x128);
              local_50 = (undefined8 *)0x0;
              uStack_48 = 0;
              FUN_1446efa72(&local_50,0,3,0x10);
              puVar2 = local_50;
              uStack_48 = 3;
              *local_50 = &PTR_LAB_14b3f7890;
              LOCK();
              UNLOCK();
              lVar9 = DAT_14c758608 + 1;
              lVar3 = DAT_14c758608 + 1;
              if (lVar9 == 0) {
                LOCK();
                UNLOCK();
                lVar9 = DAT_14c758608 + 2;
                lVar3 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar3;
              local_50[2] = lVar9;
              *local_50 = &PTR_FUN_14b41f3a0;
              local_50[3] = 0;
              FUN_14485c47a(local_50 + 3,uVar5);
              puVar2[4] = param_1;
              FUN_14036a282(lVar8 + 0x180,&local_58,&local_50);
              FUN_1449db362(&local_50);
              *(undefined8 *)(param_1 + 0x118) = local_58;
            }
          }
        }
      }
      FUN_14064ce08(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035a7fc FUN_14035a7fc body=378 status=ok
// SIG undefined FUN_14035a7fc(void)

void FUN_14035a7fc(longlong *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((uint *)param_1[2] == param_2) goto LAB_14035a81d;
  if (param_2[1] == 0) {
LAB_14035a95e:
    uVar7 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((*(uint *)(plVar8 + 2) != param_2[1] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
          ((longlong *)*plVar8 == (longlong *)0x0)))) goto LAB_14035a95e;
      uVar7 = (**(code **)(*(longlong *)*plVar8 + 0x180))();
    }
  }
  FUN_140358d06(&local_38,uVar7);
  if (local_30 != (longlong *)0x0) {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_30[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_38 != 0) {
        if ((uint *)param_1[2] != param_2) {
          FUN_14035a978(local_38,param_1);
          param_1[2] = (longlong)param_2;
          plVar3 = *(longlong **)(local_38 + 0x38);
          lVar4 = *plVar3;
          *param_1 = lVar4;
          param_1[1] = (longlong)plVar3;
          *(longlong **)(lVar4 + 8) = param_1;
          *(longlong **)param_1[1] = param_1;
          *(int *)(local_38 + 0x40) = *(int *)(local_38 + 0x40) + 1;
        }
        *(undefined1 *)((longlong)param_1 + 0x21) = 0;
      }
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
LAB_14035a81d:
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035a978 FUN_14035a978 body=129 status=ok
// SIG undefined FUN_14035a978(void)

void FUN_14035a978(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2[2] != 0) {
    if ((char)param_2[4] == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x21) = 1;
    }
    else {
      plVar1 = (longlong *)param_2[1];
      *(longlong **)(*param_2 + 8) = plVar1;
      *plVar1 = *param_2;
      local_18 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = 0;
      uStack_30 = 0;
      *(undefined2 *)(param_2 + 4) = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      FUN_140356b2c();
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035a9fa FUN_14035a9fa body=880 status=ok
// SIG undefined FUN_14035a9fa(void)

void FUN_14035a9fa(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    iVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xa8) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)(param_1 + 0xac) = iVar5;
  FUN_14035adc8((longlong *)(param_1 + 0xb0),param_3);
  FUN_14035ad6a(param_1 + 0x100,param_3 + 0x50);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_3 + 0x60);
  FUN_14035ae62(param_1);
  if (*(char *)(param_1 + 0x118) == '\0') {
    uVar6 = FUN_144836af6(param_1);
    FUN_1448367ba(param_1,uVar6);
  }
  if (((*(char *)(param_1 + 0x160) == '\x01') &&
      (4 < DAT_14c872be0 - *(longlong *)(param_1 + 0x158))) &&
     ((*(longlong *)(param_1 + 0x150) + 4U <= DAT_14c872be0 || (*(char *)(param_1 + 0x148) == '\0'))
     )) {
    FUN_14012b994(param_1);
  }
  if (*(char *)(param_1 + 0x174) == '\x01') {
    if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
      lVar10 = *(longlong *)(param_1 + 0x16c);
      uVar2 = (uint)((ulonglong)lVar10 >> 0x10);
      uVar8 = (uint)lVar10 & 0xffff;
      lVar7 = param_1 + 0xe8;
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xf0);
      }
      iVar5 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0xf8) - 1U &
                               (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar8) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 0x28);
          if (*plVar1 == lVar10) {
            if ((plVar1 != (longlong *)0x0) && (plVar1 != (longlong *)&DAT_fffffffffffffff8)) {
              lVar10 = FUN_14058d91e();
              goto LAB_14035aaf7;
            }
            break;
          }
          iVar5 = (int)plVar1[4];
        } while (iVar5 != -1);
      }
    }
    goto LAB_14035ab0e;
  }
  lVar7 = *(longlong *)(param_1 + 0x180);
  if (lVar7 == 0) {
    uVar6 = FUN_140bed5ca();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x180) = lVar7;
  }
  plVar1 = (longlong *)(param_1 + 0x178);
  lVar10 = *(longlong *)(param_1 + 0x188);
  if (lVar10 == 0) {
    if ((((*plVar1 == 0) || (lVar7 == 0)) ||
        (plVar3 = *(longlong **)(lVar7 + 0xb8), plVar3 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) goto LAB_14035ab0e;
    uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar10 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_1 + 0x188) = lVar10;
    if (lVar10 == 0) goto LAB_14035ab0e;
    lVar7 = *(longlong *)(param_1 + 0x180);
  }
  if (lVar7 == 0) {
    uVar6 = FUN_140bed5ca();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x180) = lVar7;
    lVar10 = *(longlong *)(param_1 + 0x188);
    if (((lVar10 == 0) && (lVar10 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_1 + 0x188) = lVar10;
    }
  }
LAB_14035aaf7:
  FUN_141077e62(param_1,lVar10,0);
LAB_14035ab0e:
  *(undefined8 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 14035ad6a FUN_14035ad6a body=93 status=ok
// SIG undefined FUN_14035ad6a(void)

undefined8 * FUN_14035ad6a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14052c7cd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145703460(param_1,iVar1);
      FUN_140367e45(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14035adc8 FUN_14035adc8 body=154 status=ok
// SIG undefined FUN_14035adc8(void)

longlong FUN_14035adc8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14035ae1d;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14035ae1d:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14035af14(param_1,param_2);
  return param_1;
}



// FUNCTION 14035ae62 FUN_14035ae62 body=178 status=ok
// SIG undefined FUN_14035ae62(void)

void FUN_14035ae62(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    uVar1 = rand();
    iVar2 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 65535.0);
    iVar4 = 0xfffe;
    if (iVar2 < 0xfffe) {
      iVar4 = iVar2;
    }
    *(int *)(param_1 + 0x110) = iVar4 + 1;
  }
  if (0 < *(int *)(param_1 + 0x108)) {
    uVar3 = FUN_14479d2ce(param_1 + 0xa8);
    uVar1 = FUN_1403746d4((longlong *)(param_1 + 0x100),uVar3,0xbf800000);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x108))) {
      FUN_145703f6e(param_1 + 0xb0,*(longlong *)(param_1 + 0x100) + (ulonglong)uVar1 * 0x98 + 0x48);
      return;
    }
  }
  return;
}



// FUNCTION 14035af14 FUN_14035af14 body=365 status=ok
// SIG undefined FUN_14035af14(void)

longlong * FUN_14035af14(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14052c86e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar6 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      FUN_1446efbd8(param_1 + 2);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar7 = 0;
      uVar9 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar3 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar3 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar3 + lVar7);
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar3 + 8 + lVar7);
          *(undefined4 *)(lVar4 + 0x10 + lVar7) = *(undefined4 *)(lVar3 + 0x10 + lVar7);
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = 0;
          *(undefined8 *)(lVar4 + 0x20 + lVar7) = *(undefined8 *)(lVar3 + 0x20 + lVar7);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 14035b082 FUN_14035b082 body=834 status=ok
// SIG undefined FUN_14035b082(void)

longlong * FUN_14035b082(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x328) + 8);
    lVar11 = (longlong)*(int *)(param_1 + 0x330) * 0x28;
    do {
      puVar1 = (uint *)(plVar10 + -1);
      if (((((*(int *)((longlong)plVar10 + -4) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)plVar10 + -4))))) ||
         (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (lVar6 = *plVar9, lVar6 == 0)))) {
        if (*plVar10 != 0) {
          lVar6 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar6 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(puVar1,lVar6);
            if (lVar6 == 0) goto LAB_14035b1f7;
          }
          else {
            uVar2 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(puVar1,lVar6);
            }
          }
          if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) goto LAB_14035b136;
        }
      }
      else {
LAB_14035b136:
        if (DAT_14c949118 == 0) {
          local_50 = FUN_140631fbe;
          lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar5;
          FUN_1446f470e(local_48,L"Class",1);
          local_68 = &LAB_146891e90;
          local_70 = &LAB_146273097;
          local_80 = L"Engine";
          local_78 = 199;
          local_88 = 0x20;
          local_90 = 0x10000000;
          local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
          local_60 = &local_50;
          FUN_14574b4b2(lVar5);
          DAT_14c949118 = lVar5;
          uVar7 = FUN_144a7a812();
          lVar5 = DAT_14c949118;
          uVar8 = FUN_1449e2fb2();
          local_98 = L"Class";
          FUN_14574b446(uVar8,lVar5,uVar7,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
            (lVar5 = FUN_140789e1e(), lVar5 != 0)) &&
           (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) {
          lVar12 = 0;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar12 = lVar6;
          }
          if ((lVar12 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar12 == 0) goto LAB_14035b1f7;
          }
          else {
            FUN_1456cec3c(lVar12);
          }
          lVar5 = FUN_140789e1e();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140789f3e(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar6;
            if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar6);
            }
          }
        }
      }
LAB_14035b1f7:
      plVar10 = plVar10 + 5;
      lVar11 = lVar11 + -0x28;
    } while (lVar11 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14035b3c6 FUN_14035b3c6 body=985 status=ok
// SIG undefined FUN_14035b3c6(void)

longlong *
FUN_14035b3c6(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_14035b54b;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_14035b576:
    plVar6 = (longlong *)FUN_14001cc68(0x6c0);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b3e7a80;
    plVar8 = plVar6 + 2;
    memset(plVar8,0,0x6b0);
    FUN_140a3ff80(plVar8);
    local_80 = plVar8;
    local_78 = plVar6;
    FUN_1487c0a5c(&local_80,plVar8);
    plVar8 = local_80;
    local_80[5] = param_4;
    FUN_14078c658(&local_58,param_3);
    *(undefined4 *)(plVar8 + 3) = local_58;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_54;
    *(undefined4 *)(plVar8 + 4) = uStack_50;
    *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_4c;
    FUN_14485c47a(local_80 + 6,param_4);
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      *param_1 = (longlong)local_80;
      plVar6 = (longlong *)param_1[1];
      if (plVar6 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14035b667:
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x00014035b75d:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      *param_1 = (longlong)local_80;
      plVar6 = (longlong *)param_1[1];
      if (local_78 == plVar6) {
        LOCK();
        plVar6 = local_78 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar8;
          goto joined_r0x00014035b75d;
        }
      }
      else {
        param_1[1] = (longlong)local_78;
        if (plVar6 != (longlong *)0x0) goto LAB_14035b667;
      }
    }
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_78 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14035b54b;
  }
  else {
    uVar5 = FUN_1407f6684();
    local_70 = *param_2;
    local_68 = (undefined4)param_2[1];
    local_60 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_58,&local_70,uVar5,param_3);
    lVar7 = CONCAT44(uStack_54,local_58);
    if (lVar7 != 0) {
      uVar5 = FUN_1407f6684();
      cVar4 = FUN_1448093f4(lVar7,uVar5);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_54,local_58);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar6 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_54,local_58);
          if (plVar8 == plVar6) {
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_14035b6e0:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar6 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar7 = *plVar6;
                  plVar8 = plVar6;
                  goto LAB_14035b6e0;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_54,local_58);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14035b576;
  }
  plVar8 = (longlong *)param_1[1];
  local_90 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_88 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((param_5 != '\0') &&
     (plVar8 = (longlong *)*param_1, *(char *)((longlong)plVar8 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_14035b54b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035b7a0 FUN_14035b7a0 body=1494 status=ok
// SIG undefined FUN_14035b7a0(void)

void FUN_14035b7a0(code *param_1,code param_2)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code cVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  code *local_48;
  undefined1 local_40;
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0x13f8) == 0) ||
     (lVar11 = *(longlong *)(param_1 + 0x858), lVar11 == 0)) {
    param_1[0x3a18] = param_2;
    param_1[0x3a19] = (code)0x1;
    goto LAB_14035b965;
  }
  cVar9 = (**(code **)(*(longlong *)param_1 + 0x708))(param_1);
  cVar14 = (code)0x1;
  if (cVar9 == '\0') {
    cVar14 = param_2;
  }
  lVar12 = lVar11 + 0x1288;
  if (*(char *)(lVar11 + 0x13a0) == '\0') {
    uVar10 = FUN_144836af6(lVar12);
    FUN_1448367ba(lVar12,uVar10);
  }
  if (((*(char *)(lVar11 + 0x13e8) == '\x01') &&
      (4 < DAT_14c872be0 - *(longlong *)(lVar11 + 0x13e0))) &&
     ((*(longlong *)(lVar11 + 0x13d8) + 4U <= DAT_14c872be0 || (*(char *)(lVar11 + 0x13d0) == '\0'))
     )) {
    FUN_14012b994(lVar12);
  }
  FUN_14035bd78(lVar11,cVar14,*(undefined1 *)(*(longlong *)(param_1 + 0x13f8) + 0x91));
  lVar12 = *(longlong *)(param_1 + 0x13f8);
  *(undefined4 *)(lVar11 + 0x1510) = *(undefined4 *)(lVar12 + 0x528);
  uVar16 = *(undefined4 *)(lVar12 + 0x508);
  uVar17 = *(undefined4 *)(lVar12 + 0x50c);
  uVar4 = *(undefined4 *)(lVar12 + 0x510);
  uVar5 = *(undefined4 *)(lVar12 + 0x514);
  uVar6 = *(undefined4 *)(lVar12 + 0x51c);
  uVar7 = *(undefined4 *)(lVar12 + 0x520);
  uVar8 = *(undefined4 *)(lVar12 + 0x524);
  *(undefined4 *)(lVar11 + 0x1500) = *(undefined4 *)(lVar12 + 0x518);
  *(undefined4 *)(lVar11 + 0x1504) = uVar6;
  *(undefined4 *)(lVar11 + 0x1508) = uVar7;
  *(undefined4 *)(lVar11 + 0x150c) = uVar8;
  *(undefined4 *)(lVar11 + 0x14f0) = uVar16;
  *(undefined4 *)(lVar11 + 0x14f4) = uVar17;
  *(undefined4 *)(lVar11 + 0x14f8) = uVar4;
  *(undefined4 *)(lVar11 + 0x14fc) = uVar5;
  cVar9 = (**(code **)(**(longlong **)(param_1 + 0x13f8) + 0x80))();
  if ((cVar9 != '\0') && (lVar11 = FUN_1457036a6(param_1), lVar11 == 0)) {
    lVar11 = *(longlong *)(param_1 + 0x438);
    local_b8 = (code *)0x0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_74 = 0x3ff00000;
    uStack_70 = 0;
    uStack_6c = 0x3ff00000;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0;
    local_c0 = FUN_145702f6c();
    if ((local_c0 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_c0);
    }
    local_118 = local_118 & 0xffffff00;
    lVar12 = FUN_140fae5dc(param_1,&local_c0,0,&local_b8);
    if (lVar12 != 0) {
      lVar13 = FUN_145702f6c();
      if (((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) && (lVar11 != 0)) {
        dVar2 = *(double *)(lVar11 + 0x280);
        uVar16 = SUB84(dVar2,0);
        uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *(double *)(lVar11 + 0x288);
        if (dVar3 <= dVar2) {
          uVar16 = SUB84(dVar3,0);
          uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        *(float *)(lVar12 + 0x644) =
             (float)(double)CONCAT44(uVar17,uVar16) * *(float *)(lVar11 + 0x644);
        *(float *)(lVar12 + 0x648) = (float)*(double *)(lVar11 + 0x290) * *(float *)(lVar11 + 0x640)
        ;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x13f8) == 0) ||
     (cVar9 = *(char *)(*(longlong *)(param_1 + 0x13f8) + 0x2e0), cVar9 == '\0'))
  goto LAB_14035b965;
  if (*(longlong *)(param_1 + 0x428) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x428) + 0xc61);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  bVar15 = cVar9 == '\x01';
  if (DAT_14cac6e60 == 0) {
    local_e0 = &local_b8;
    local_b8 = FUN_144a7958c;
    local_d0 = FUN_14081d0ea;
    local_d8 = FUN_142b47bc4;
    local_e8 = &LAB_1478989f1;
    local_f0 = &LAB_146391124;
    local_f8 = L"Engine";
    local_100 = 0x10000000000;
    local_108 = 0x10000005;
    local_110 = 0x10;
    local_118 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  lVar11 = DAT_14cac6e60;
  if ((DAT_14cac6e60 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cac6e60 != 0) goto LAB_14035b8ea;
    if (DAT_14cad00c8 == 0) goto LAB_14035bc55;
    lVar12 = 0;
LAB_14035b919:
    if (lVar12 == DAT_14cad00c8) {
      uStack_b0 = CONCAT71(uStack_b0._1_7_,bVar15);
      local_38 = lVar11;
      local_b8 = param_1;
      if ((~DAT_14c950c29 & 1) == 0 && lVar11 != 0) {
        FUN_1456cec3c(lVar11);
      }
      FUN_143c9b81c(param_1,&local_38,&local_b8);
      goto LAB_14035b965;
    }
  }
  else {
    FUN_1456cec3c(DAT_14cac6e60);
LAB_14035b8ea:
    if (DAT_14cad00c8 == 0) {
      local_e0 = &local_30;
      local_30 = FUN_144a7958c;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_1479b7a0c;
      local_f0 = &LAB_1463b464e;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x10000005;
      local_110 = 8;
      local_118 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
LAB_14035bc55:
        local_e0 = &local_30;
        local_30 = FUN_144a7958c;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1479b7a0c;
        local_f0 = &LAB_1463b464e;
        local_f8 = L"Engine";
        local_100 = 0;
        local_108 = 0x10000005;
        local_110 = 8;
        local_118 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar12 = 0;
        goto LAB_14035b919;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar11 + 0x38)) {
      lVar12 = 0;
      if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar12 = lVar11;
      }
      goto LAB_14035b919;
    }
  }
  local_50 = lVar11;
  local_48 = param_1;
  local_40 = bVar15;
  if ((lVar11 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar11);
  }
  FUN_14035dc7c(param_1,&local_50,&local_48);
LAB_14035b965:
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035bd78 FUN_14035bd78 body=322 status=ok
// SIG undefined FUN_14035bd78(void)

void FUN_14035bd78(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x1539);
  *(undefined1 *)(param_1 + 0x1538) = param_3;
  *(char *)(param_1 + 0x1539) = param_2;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    *(char *)(param_1 + 0x153a) = param_2;
    uVar2 = *(ulonglong *)(param_1 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar2,2);
    }
    else {
      uVar7 = (uint)uVar2;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 4;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
  }
  if (((*(byte *)(param_1 + 0x9f) & 0x20) != 0) &&
     ((param_2 != '\0') != (cVar1 != '\0') || cVar1 != '\0' && cVar1 != param_2)) {
    FUN_140e286c0(param_1);
    FUN_140f30084(param_1);
  }
  FUN_14035beba(param_1);
  return;
}



// FUNCTION 14035beba FUN_14035beba body=250 status=ok
// SIG undefined FUN_14035beba(void)

void FUN_14035beba(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0xbd0))();
  uVar3 = 6;
  if ((char)(bVar1 - 6) < '\0') {
    uVar3 = (uint)bVar1;
  }
  bVar2 = (byte)uVar3;
  *(byte *)(param_1 + 0xb5) = bVar2;
  if ((0xfffffffd < uVar3 - 3) &&
     (*(byte *)((longlong)param_1 + 0x5aa) = bVar2,
     *(byte *)((longlong)param_1 + 0x291) != bVar2 &&
     0xfffffffd < *(byte *)((longlong)param_1 + 0x291) - 3)) {
    (**(code **)(*param_1 + 0x5d0))(param_1,uVar3,0);
  }
  *(byte *)(param_1 + 0x221) = bVar1;
  if ((int)param_1[0x229] == 0) {
    bVar1 = (**(code **)(*param_1 + 0xbd0))(param_1);
    uVar3 = 6;
    if ((char)(bVar1 - 6) < '\0') {
      uVar3 = (uint)bVar1;
    }
    bVar2 = (byte)uVar3;
    *(byte *)(param_1 + 0xb5) = bVar2;
    if ((0xfffffffd < uVar3 - 3) &&
       (*(byte *)((longlong)param_1 + 0x5aa) = bVar2,
       *(byte *)((longlong)param_1 + 0x291) != bVar2 &&
       0xfffffffd < *(byte *)((longlong)param_1 + 0x291) - 3)) {
      (**(code **)(*param_1 + 0x5d0))(param_1,uVar3,0);
    }
    *(byte *)(param_1 + 0x221) = bVar1;
    FUN_14035bfb4(param_1);
    return;
  }
  return;
}



// FUNCTION 14035bfb4 FUN_14035bfb4 body=498 status=ok
// SIG undefined FUN_14035bfb4(void)

void FUN_14035bfb4(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 uVar7;
  double dVar8;
  
  cVar6 = (**(code **)(param_1[0x2f] + 0x128))(param_1 + 0x2f);
  if ((cVar6 == '\0') || (cVar6 = (**(code **)(*param_1 + 0x4b8))(param_1), cVar6 == '\0')) {
    if (param_1[0x3e] == 0) {
      cVar6 = (char)param_1[0xb5];
    }
    else {
      cVar6 = (char)param_1[0xb5];
      if (*(char *)((longlong)param_1 + 0x291) == cVar6) {
        return;
      }
    }
    dVar1 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x26];
    dVar3 = (double)param_1[0x47];
    dVar4 = (double)param_1[0x25];
    dVar8 = (double)param_1[0x27];
    dVar5 = (double)param_1[0x48];
    (**(code **)(*param_1 + 0x5d0))(param_1,cVar6,0);
    if ((*(char *)((longlong)param_1 + 0x291) != '\x01') ||
       ((param_1[0x3e] != 0 && (*(longlong *)(param_1[0x3e] + 0x450) != 0)))) {
      return;
    }
    dVar8 = (double)(float)((-dVar1 * dVar4 - dVar2 * dVar3) - dVar8 * dVar5);
    dVar1 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x47];
    dVar3 = (double)param_1[0x48];
    dVar4 = (double)param_1[0x27] * dVar3 +
            (double)param_1[0x25] * dVar1 + dVar2 * (double)param_1[0x26];
    param_1[0x25] = (longlong)(((double)param_1[0x25] - dVar4 * dVar1) - dVar1 * dVar8);
    param_1[0x26] = (longlong)(((double)param_1[0x26] - dVar2 * dVar4) - dVar2 * dVar8);
    param_1[0x27] = (longlong)(((double)param_1[0x27] - dVar3 * dVar4) - dVar3 * dVar8);
    uVar7 = 3;
  }
  else {
    uVar7 = *(undefined1 *)((longlong)param_1 + 0x5a9);
  }
                    /* WARNING: Could not recover jumptable at 0x00014035c18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5d0))(param_1,uVar7,0);
  return;
}



// FUNCTION 14035c1a6 FUN_14035c1a6 body=22 status=ok
// SIG undefined FUN_14035c1a6(void)

undefined8 FUN_14035c1a6(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x30))();
  uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff08;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
}



// FUNCTION 14035c1bc FUN_14035c1bc body=35 status=ok
// SIG undefined FUN_14035c1bc(void)

ulonglong FUN_14035c1bc(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x4a0))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x3d4)) &
            0xffffffffffffff01;
  }
  return uVar2;
}



// FUNCTION 14035c1e0 FUN_14035c1e0 body=2114 status=ok
// SIG undefined FUN_14035c1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035c1e0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_74;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar14 = 0;
  }
  else {
    uVar5 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x1c) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    iVar14 = *(int *)(lVar19 + 0x10);
    if (*(int *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar14 = *(int *)(lVar19 + 0x10);
      bVar25 = iVar14 == 0;
      if (bVar25) {
        *(int *)(lVar19 + 0x10) = iVar6;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar25) {
        iVar14 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x20) = iVar14;
  *(longlong **)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar10 = *(longlong **)(param_1 + 0x48);
  if (plVar10 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (param_2 == (longlong *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    cVar4 = FUN_14493c216(&local_58,0);
    if (cVar4 == '\0') {
      uStack_50 = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = local_58;
    *(undefined8 *)(param_1 + 0x30) = uStack_50;
    local_78 = (undefined4)CONCAT71((int7)((ulonglong)uStack_50 >> 8),1);
LAB_14035c3d6:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_1401fa540();
    lVar19 = (**(code **)(*param_2 + 0x288))(param_2,uVar8);
    if (lVar19 == 0) {
LAB_14035c2e1:
      local_58 = 0;
      uStack_50 = 0;
      cVar4 = FUN_14493c216(&local_58,0);
      if (cVar4 == '\0') {
        uStack_50 = 0;
      }
      *(undefined8 *)(param_1 + 0x28) = local_58;
      *(undefined8 *)(param_1 + 0x30) = uStack_50;
    }
    else {
      uVar8 = FUN_1401fa540();
      lVar9 = FUN_144718840(lVar19,uVar8);
      if (lVar19 == lVar9) goto LAB_14035c2e1;
      FUN_141865dfc(&local_58,lVar9);
      *(undefined4 *)(param_1 + 0x28) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0x2c) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_50;
      *(undefined4 *)(param_1 + 0x34) = uStack_50._4_4_;
    }
    uVar8 = FUN_1401b0f18();
    plVar10 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar8);
    local_78 = (undefined4)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
    if (plVar10 == (longlong *)0x0) goto LAB_14035c3d6;
    uVar8 = FUN_1401b0f18();
    plVar11 = (longlong *)FUN_144718840(plVar10,uVar8);
    if (plVar10 == plVar11) goto LAB_14035c3d6;
    puVar15 = &DAT_14caa8558;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
    }
    if (plVar11 == (longlong *)0x0) goto LAB_14035c3d6;
    if (*(int *)(puVar15 + 1) != 0) {
      lVar19 = (**(code **)(*plVar11 + 0x28))(plVar11);
      FUN_143271da0(lVar19 + 0x78,puVar15);
    }
    local_78 = 0;
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    FUN_143c9aae4(param_1 + 0x50);
    FUN_140c78912(param_1 + 0x50);
  }
  if ((((param_3 == (longlong *)0x0) ||
       (lVar19 = (**(code **)(*param_3 + 0x128))(param_3), lVar19 == 0)) ||
      (cVar4 = FUN_1402611f4(lVar19), cVar4 == '\0')) || (lVar19 = *param_4, lVar19 == 0))
  goto LAB_14035c67f;
  uVar8 = FUN_1418497d8();
  cVar4 = FUN_1448093f4(lVar19,uVar8);
  if (cVar4 == '\0') goto LAB_14035c67f;
  lVar19 = *param_4;
  plVar10 = (longlong *)param_4[1];
  if (plVar10 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x40) = lVar19;
    plVar23 = *(longlong **)(param_1 + 0x48);
    if (plVar23 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
LAB_14035c496:
      LOCK();
      plVar10 = plVar23 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
joined_r0x00014035c4c8:
        if (iVar14 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x40) = lVar19;
    plVar23 = *(longlong **)(param_1 + 0x48);
    if (plVar10 == plVar23) {
      LOCK();
      plVar23 = plVar10 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar14 = *piVar1;
        UNLOCK();
        plVar23 = plVar10;
        goto joined_r0x00014035c4c8;
      }
    }
    else {
      *(longlong **)(param_1 + 0x48) = plVar10;
      if (plVar23 != (longlong *)0x0) goto LAB_14035c496;
    }
  }
  if (param_2 != (longlong *)0x0) {
    cVar4 = (char)param_2[0x2f];
    if ((cVar4 == '\x03') && (*param_4 != 0)) {
      FUN_14099a466(param_1 + 0xa0,*(longlong *)(param_1 + 0x40) + 0x38);
      if ((((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
           ((*(int *)(param_1 + 0x2c) != 0 && (uVar5 = *(uint *)(param_1 + 0x28), -1 < (int)uVar5)))
           ) && ((int)uVar5 < DAT_14c9647dc)) &&
         (((lVar19 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar19 != 0 &&
           (*(int *)(lVar19 + 0x10) == *(int *)(param_1 + 0x2c))) &&
          ((*(uint *)(lVar19 + 8) & 0x10200000) == 0)))) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
      }
      cVar4 = (char)param_2[0x2f];
    }
    if ((cVar4 != '\x03') && (*(int *)(param_1 + 0xa8) != 0)) {
      FUN_1411ea90c(param_1,param_1 + 0xa0);
    }
  }
  local_68 = plVar11;
  FUN_143c960de(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb70fc0) && (FUN_144b3d300(&DAT_14cb70fc0), DAT_14cb70fc0 == -1)) {
    DAT_14cb70f90 = (uint *)0x0;
    DAT_14cb70f98 = 0;
    DAT_14cb70f70 = 0;
    _DAT_14cb70f78 = 0;
    _DAT_14cb70f9c = 0xffffffff00000080;
    _DAT_14cb70fa4 = 0;
    DAT_14cb70fb0 = 0;
    _DAT_14cb70fb8 = 0;
    atexit(FUN_143c96072);
    _Init_thread_footer(&DAT_14cb70fc0);
  }
  if (DAT_14cb70fc4 == '\0') {
    DAT_14cb70fc4 = '\x01';
    FUN_1459d1e1c();
    if ((longlong)DAT_14cb70fd0 != 0) {
      puVar17 = DAT_14cb70fc8 + (longlong)DAT_14cb70fd0 * 8;
      puVar15 = DAT_14cb70fc8;
      do {
        pcVar3 = (code *)*puVar15;
        plVar10 = puVar15 + 4;
        if ((longlong *)puVar15[2] != (longlong *)0x0) {
          plVar10 = (longlong *)puVar15[2];
        }
        uVar8 = (**(code **)(*plVar10 + 8))();
        (*pcVar3)(uVar8,&DAT_14cb70f70);
        puVar15 = puVar15 + 8;
      } while (puVar15 != puVar17);
    }
  }
  if (DAT_14cb70f98 == 0) {
    uVar16 = 1;
    uVar24 = 0;
    iVar14 = 0;
    uVar5 = 0;
  }
  else {
    puVar20 = &DAT_14cb70f80;
    if (DAT_14cb70f90 != (uint *)0x0) {
      puVar20 = DAT_14cb70f90;
    }
    uVar5 = *puVar20;
    if (uVar5 == 0) {
      iVar14 = DAT_14cb70f98 + 0x1e;
      if (-1 < (int)(DAT_14cb70f98 - 1)) {
        iVar14 = DAT_14cb70f98 - 1;
      }
      uVar24 = 0;
      uVar16 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar16 = uVar24;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar24) goto LAB_14035c645;
        iVar14 = iVar14 + 0x20;
        uVar5 = puVar20[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar24 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar2 = uVar16 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar5 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14cb70f98 <= (int)uVar5) {
      uVar5 = DAT_14cb70f98;
    }
  }
  if (uVar5 != DAT_14cb70f98) {
    uVar22 = 0xffffffff;
    local_70 = (ulonglong)DAT_14cb70f98;
    local_60 = param_1;
    do {
      iVar6 = *(int *)(DAT_14cb70f70 + 4 + (longlong)(int)uVar5 * 0x60);
      if (iVar6 != 0) {
        puVar20 = (uint *)(DAT_14cb70f70 + (longlong)(int)uVar5 * 0x60);
        uVar5 = *puVar20;
        if ((((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) &&
            (plVar10 = (longlong *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
            plVar10 != (longlong *)0x0)) &&
           ((((int)plVar10[2] == iVar6 &&
             (lVar19 = *(longlong *)(param_1 + 0x40), (*(uint *)(plVar10 + 1) & 0x10200000) == 0))
            && (*plVar10 != 0)))) {
          uVar5 = *(uint *)(*plVar10 + 0xc);
          if ((int)uVar5 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar7 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            uVar18 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar25) {
              local_74 = uVar18;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar18);
              uVar18 = local_74;
            }
            LOCK();
            uVar7 = *(uint *)(lVar9 + 0x10);
            bVar25 = uVar7 == 0;
            if (bVar25) {
              *(uint *)(lVar9 + 0x10) = uVar18;
              uVar7 = 0;
            }
            UNLOCK();
            if (bVar25) {
              uVar7 = uVar18;
            }
          }
          local_58 = CONCAT44(uVar7,uVar5);
          iVar6 = FUN_14050ef0e(lVar19 + 0x68,uVar5 ^ uVar7,&local_58);
          param_1 = local_60;
          if (iVar6 != -1) {
            pcVar3 = *(code **)(puVar20 + 4);
            puVar21 = puVar20 + 0xc;
            if (*(uint **)(puVar20 + 8) != (uint *)0x0) {
              puVar21 = *(uint **)(puVar20 + 8);
            }
            uVar8 = (**(code **)(*(longlong *)puVar21 + 8))(puVar21);
            (*pcVar3)(uVar8,param_1);
          }
        }
      }
      uVar22 = uVar22 & ~(uint)uVar16;
      puVar20 = DAT_14cb70f90;
      if (DAT_14cb70f90 == (uint *)0x0) {
        puVar20 = &DAT_14cb70f80;
      }
      iVar6 = (int)uVar24;
      lVar19 = (longlong)iVar6;
      uVar5 = puVar20[lVar19] & uVar22;
      if (uVar5 == 0) {
        iVar12 = DAT_14cb70f98 + 0x1e;
        if (-1 < (int)(DAT_14cb70f98 - 1)) {
          iVar12 = DAT_14cb70f98 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar9 = 0;
          do {
            uVar5 = puVar20[lVar19 + lVar9 + 1];
            if (uVar5 != 0) {
              uVar24 = (ulonglong)(iVar6 + (int)lVar9 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14035c857;
            }
            iVar14 = iVar14 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar13 - lVar19 != lVar9);
          uVar22 = 0xffffffff;
          iVar6 = iVar13;
        }
        uVar24 = (ulonglong)(iVar6 + 1);
        uVar5 = DAT_14cb70f98;
      }
      else {
LAB_14035c857:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar16 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar5 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb70f98 <= (int)uVar5) {
          uVar5 = DAT_14cb70f98;
        }
      }
    } while (uVar5 != (uint)local_70);
  }
LAB_14035c645:
  puVar15 = &DAT_14caa8558;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18);
  }
  if (((char)local_78 == '\0') && (*(int *)(puVar15 + 1) != 0)) {
    lVar19 = (**(code **)(*local_68 + 0x28))();
    FUN_14094f414(lVar19 + 0x78,puVar15);
  }
LAB_14035c67f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035ca24 FUN_14035ca24 body=1246 status=ok
// SIG undefined FUN_14035ca24(void)

void FUN_14035ca24(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
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
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14035cf04();
  if (param_2 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x105) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = 0;
    goto LAB_14035cbe6;
  }
  if (DAT_14caf64b8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_142b4754c;
    local_68 = &LAB_147c45ce0;
    local_70 = (code *)&LAB_1463f1ff4;
    local_78 = L"Game";
    local_80 = 0x4000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) goto LAB_14035cb34;
  pcVar1 = *(code **)(*param_2 + 0x5e8);
  if (pcVar1 == FUN_140972dde) {
    lVar4 = param_2[0x76];
    if (lVar4 != 0) goto LAB_14035cca6;
    pcVar1 = *(code **)(*param_2 + 0x5f8);
    if (pcVar1 == FUN_144784df4) {
      if (*(code **)(param_2[0x784] + 0x18) != (code *)&LAB_144904684) {
        lVar4 = (**(code **)(param_2[0x784] + 0x18))(param_2 + 0x784);
LAB_14035cc80:
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x20);
          goto LAB_14035cc8d;
        }
        goto LAB_14035cb34;
      }
      if (*(int *)((longlong)param_2 + 0x75b4) == 0) goto LAB_14035cb34;
      uVar6 = *(uint *)(param_2 + 0xeb6);
      bVar8 = false;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar3 != (longlong *)0x0) &&
           (((int)plVar3[2] == *(int *)((longlong)param_2 + 0x75b4) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar3;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
          goto LAB_14035cc80;
        }
        goto LAB_14035cb34;
      }
    }
    else {
      lVar4 = (*pcVar1)(param_2);
LAB_14035cc8d:
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
        goto LAB_14035cc9d;
      }
LAB_14035cb34:
      bVar8 = false;
    }
  }
  else {
    lVar4 = (*pcVar1)(param_2);
LAB_14035cc9d:
    if (lVar4 == 0) goto LAB_14035cb34;
LAB_14035cca6:
    bVar8 = (*(byte *)(lVar4 + 0x39a) & 8) == 0;
  }
  *(bool *)(param_1 + 0x105) = bVar8;
  if (DAT_14cb20e58 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147f14d13;
    local_70 = FUN_1464313b0;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
  }
  lVar4 = FUN_144718840(param_2,DAT_14cb20e58);
  if (lVar4 == 0) {
    uVar6 = 0;
    iVar2 = 0;
  }
  else {
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar2 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar2 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar2 = iVar5;
      }
    }
  }
  *(uint *)(param_1 + 0x88) = uVar6;
  *(int *)(param_1 + 0x8c) = iVar2;
  *(longlong *)(param_1 + 0x90) = lVar4;
  uVar6 = *(uint *)((longlong)param_2 + 0xc);
  *(uint *)(param_1 + 0x98) = uVar6;
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar8) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
    }
    LOCK();
    iVar2 = *(int *)(lVar4 + 0x10);
    bVar8 = iVar2 == 0;
    if (bVar8) {
      *(int *)(lVar4 + 0x10) = iVar5;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar8) {
      iVar2 = iVar5;
    }
  }
LAB_14035cbe6:
  *(int *)(param_1 + 0x9c) = iVar2;
  if (*(longlong *)(param_1 + 200) == 0) {
    plVar3 = (longlong *)(param_1 + 0xb8);
    *(longlong **)(param_1 + 0xd0) = &DAT_14cb23a80;
    *(longlong *)(param_1 + 200) = param_1;
    lVar4 = DAT_14cb23a80;
    while( true ) {
      *(longlong *)(param_1 + 0xb8) = lVar4;
      LOCK();
      lVar7 = **(longlong **)(param_1 + 0xd0);
      bVar8 = lVar4 == lVar7;
      if (bVar8) {
        **(longlong **)(param_1 + 0xd0) = (longlong)plVar3;
        lVar7 = lVar4;
      }
      UNLOCK();
      if (bVar8) break;
      *(longlong *)(param_1 + 0xb8) = lVar7;
      lVar4 = **(longlong **)(param_1 + 0xd0);
    }
    if (*plVar3 != 0) {
      *(longlong **)(*plVar3 + 8) = plVar3;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035cf04 FUN_14035cf04 body=107 status=ok
// SIG undefined FUN_14035cf04(void)

void FUN_14035cf04(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  FUN_145702b5e();
  FUN_140cbaf82(param_1 + 0xb8,0);
  plVar2 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14035cf70(param_1);
  return;
}



// FUNCTION 14035cf70 FUN_14035cf70 body=119 status=ok
// SIG undefined FUN_14035cf70(void)

void FUN_14035cf70(longlong param_1)

{
  FUN_14035cfe8(param_1 + 0x18);
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_147f49874(param_1 + 0x68,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if ((*(char *)(param_1 + 0x104) == '\x01') &&
     (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c))) {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_140155fa6(param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 14035cfe8 FUN_14035cfe8 body=70 status=ok
// SIG undefined FUN_14035cfe8(void)

void FUN_14035cfe8(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14035fc18();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140cbb3a0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14035d02e FUN_14035d02e body=1314 status=ok
// SIG undefined FUN_14035d02e(void)

void FUN_14035d02e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  uint local_68;
  int local_64;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14035d552();
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
LAB_14035d31c:
    plStack_50 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
LAB_14035d31e:
    local_58 = (code *)0x0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 0x60) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar9;
      }
    }
    *(int *)(param_1 + 100) = iVar4;
    if (DAT_14cb22240 == 0) {
      local_80 = &local_58;
      local_58 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464376fa;
      local_88 = &LAB_147f28935;
      local_90 = FUN_146437c39;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb22240);
    if (plVar5 == (longlong *)0x0) goto LAB_14035d31c;
    if (DAT_14cb22240 == 0) {
      local_80 = &local_58;
      local_58 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464376fa;
      local_88 = &LAB_147f28935;
      local_90 = FUN_146437c39;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb22240);
    if (plVar5 == plVar6) goto LAB_14035d31c;
    local_58 = (code *)0x0;
    plStack_50 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) goto LAB_14035d31c;
    lVar10 = (**(code **)(*plVar6 + 8))(plVar6);
    if (lVar10 == 0) goto LAB_14035d31e;
    uVar2 = *(uint *)(lVar10 + 0xc);
    local_58 = (code *)CONCAT44(local_58._4_4_,uVar2);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar9;
      }
    }
  }
  local_58 = (code *)CONCAT44(iVar4,(undefined4)local_58);
  cVar3 = FUN_14493c216(&local_58,0);
  if (cVar3 == '\0') {
    plStack_50 = plVar6;
  }
  *(code **)(param_1 + 0x68) = local_58;
  *(longlong **)(param_1 + 0x70) = plStack_50;
  if (*(int *)(param_1 + 100) != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14035d1ec;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 100) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      uVar7 = FUN_1447210f0();
      goto LAB_14035d1ec;
    }
  }
  uVar7 = 0;
LAB_14035d1ec:
  FUN_1402b6034(&local_58,uVar7);
  if (plStack_50 != (longlong *)0x0) {
    iVar4 = (int)plStack_50[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plStack_50[1];
      bVar11 = iVar4 == iVar9;
      if (bVar11) {
        *(int *)(plStack_50 + 1) = iVar4 + 1;
        iVar9 = iVar4;
      }
      iVar4 = iVar9;
      UNLOCK();
      plVar5 = plStack_50;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
    }
    lVar10 = (longlong)local_58;
    if (plVar5 != (longlong *)0x0) {
      if (local_58 != (code *)0x0) {
        iVar4 = *(int *)(param_1 + 0x6c);
        plVar6 = *(longlong **)(param_1 + 0x70);
        if ((((iVar4 != 0 && plVar6 != (longlong *)0x0) &&
             (uVar2 = *(uint *)(param_1 + 0x68), -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             ((lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 != 0 &&
              (*(int *)(lVar8 + 0x10) == iVar4)))))) && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0))
        {
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_58,1);
          local_68 = uVar2;
          local_64 = iVar4;
          local_60 = plVar6;
          FUN_140363e36(lVar10,&local_68,&local_58);
        }
      }
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035d552 FUN_14035d552 body=191 status=ok
// SIG undefined FUN_14035d552(void)

void FUN_14035d552(longlong param_1)

{
  FUN_14035d612();
  FUN_1403caf1a(param_1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_147f61d1c(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x94) < 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_147f61d1c(param_1 + 0x88,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_147f61d1c(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(undefined8 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)(param_1 + 0xbd) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14035d612 FUN_14035d612 body=302 status=ok
// SIG undefined FUN_14035d612(void)

void FUN_14035d612(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0xb4) != 0) && (uVar1 = *(uint *)(param_1 + 0xb0), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0xb4))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
      uVar2 = FUN_14069ce7c();
      plVar3 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = FUN_14069ce7c();
        plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
        if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
          if (lVar5 != 0) {
            local_38 = *(undefined4 *)(param_1 + 0x68);
            uStack_34 = *(undefined4 *)(param_1 + 0x6c);
            uStack_30 = *(undefined4 *)(param_1 + 0x70);
            uStack_2c = *(undefined4 *)(param_1 + 0x74);
            FUN_14035d742(lVar5);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x3a0) != 0) {
        FUN_14480f766(plVar6 + 0x57);
      }
      if (*(longlong *)(param_1 + 0x3a8) != 0) {
        FUN_14480f766(plVar6 + 0x5a);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035d742 FUN_14035d742 body=614 status=ok
// SIG undefined FUN_14035d742(void)

void FUN_14035d742(uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong **)(param_1 + 4) != (longlong *)0x0) && (param_1[3] != 0)) {
    uVar1 = param_1[2];
    plVar4 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14035d7c4;
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(uint *)(lVar6 + 0x10) == param_1[3])) {
      plVar4 = (longlong *)0x0;
      if ((*(uint *)(lVar6 + 8) & 0x10200000) == 0) {
        plVar4 = *(longlong **)(param_1 + 4);
      }
      goto LAB_14035d7c4;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14035d7c4:
  plVar2 = *(longlong **)(param_2 + 2);
  if (((((plVar2 != (longlong *)0x0) && (param_2[1] != 0)) && (uVar1 = *param_2, -1 < (int)uVar1))
      && (((int)uVar1 < DAT_14c9647dc &&
          (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)))) &&
     ((*(uint *)(lVar6 + 0x10) == param_2[1] &&
      ((plVar4 != (longlong *)0x0 && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) {
    uVar1 = param_1[0x1c];
    if ((longlong)(int)uVar1 == 0) {
LAB_14035d994:
      param_1[0x1e] = 0xbf800000;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x1a);
      iVar5 = 1;
      lVar8 = 0;
      lVar7 = 0;
      do {
        if (*(longlong **)(lVar6 + 8 + lVar8) == plVar2) {
          if (iVar5 != 0) {
            lVar7 = (lVar7 >> 0x20) * 0x10;
            memmove((void *)(lVar6 + lVar7),(void *)(lVar6 + lVar7 + 0x10),
                    (longlong)(int)(uVar1 - iVar5) << 4);
            param_1[0x1c] = param_1[0x1c] - 1;
            if (param_1[1] == 0) {
LAB_14035d99d:
              uVar9 = 0;
            }
            else {
              uVar1 = *param_1;
              uVar9 = 0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar3 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar3 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar3 + 2) != param_1[1] ||
                    ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_14035d99d;
                uVar9 = *puVar3;
              }
            }
            lVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
            if (*(int *)(lVar6 + 0x1c) == 0) {
LAB_14035d9a5:
              local_40 = 0;
            }
            else {
              uVar1 = *(uint *)(lVar6 + 0x18);
              local_40 = 0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar3 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar3 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar3 + 2) != *(int *)(lVar6 + 0x1c) ||
                    ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_14035d9a5;
                local_40 = *puVar3;
              }
            }
            local_30 = 0;
            local_38 = uVar9;
            (**(code **)(*plVar4 + 0x18))(plVar4);
            if (param_1[0x1c] == 0) goto LAB_14035d994;
          }
          break;
        }
        lVar7 = lVar7 + 0x100000000;
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)(int)uVar1 << 4 != lVar8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035d9aa FUN_14035d9aa body=505 status=ok
// SIG undefined FUN_14035d9aa(void)

void FUN_14035d9aa(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (lVar2 = FUN_140115352(lVar2), lVar2 != 0)) {
    if (*(longlong *)(param_1 + 0x3910) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (((((*(char *)(param_1 + 0x178) == '\x03') &&
          (FUN_14035dbb8(lVar2,&local_30,param_1 + 0x1188,param_2), local_28 != (longlong *)0x0)) &&
         (local_2c != 0)) && ((-1 < (int)local_30 && ((int)local_30 < DAT_14c9647dc)))) &&
       ((lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8), lVar2 != 0 &&
        ((*(int *)(lVar2 + 0x10) == local_2c && ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))))) {
      plVar5 = (longlong *)0x0;
      if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
        plVar5 = local_28;
      }
      lVar2 = (**(code **)(*plVar5 + 8))();
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      *(longlong *)(param_1 + 0x3910) = lVar2;
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar5 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x27);
      }
      else {
        uVar6 = (uint)uVar1;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
          puVar4 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar4 = DAT_14c998080;
          }
          if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
            lVar3 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              lVar2 = lVar3 + 8;
            }
            *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) | 0x80;
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
          }
        }
      }
      FUN_140dfc40c(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035dbb8 FUN_14035dbb8 body=195 status=ok
// SIG undefined FUN_14035dbb8(void)

undefined8 *
FUN_14035dbb8(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_4[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    param_4[1] = lVar4;
  }
  if (param_4[2] == 0) {
    if ((lVar4 != 0) && (*param_4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_4[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_4);
        param_4[2] = lVar4;
        if (lVar4 != 0) goto LAB_14035dbf0;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
LAB_14035dbf0:
  FUN_14110826c(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4,0);
  FUN_140e5b680(*(undefined8 *)(param_1 + 0x40),param_2);
  return param_2;
}



// FUNCTION 14035dc7c FUN_14035dc7c body=1395 status=ok
// SIG undefined FUN_14035dc7c(void)

void FUN_14035dc7c(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  uint *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar16 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_150 = param_3;
  local_148 = param_2;
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar8 = puVar16;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar17 == uVar18) goto LAB_14035e1b8;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar8[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar17 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar15 = 0xffffffff;
    local_158 = puVar16;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar6 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar9 = *local_148;
        if ((lVar9 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar9);
          puVar16 = local_158;
LAB_14035ddb3:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_160 = FUN_14081d0ea;
            local_168 = FUN_14081d0ea;
            local_170 = &local_120;
            local_178 = &LAB_1479b7a0c;
            local_180 = (code *)&LAB_1463b464e;
            local_188 = L"Engine";
            local_190 = 0;
            local_198 = 0x10000005;
            local_1a0 = 8;
            local_1a8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar16 = local_158;
            if (DAT_14cad00c8 == 0) goto LAB_14035ddcd;
          }
          if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_14035ddcd;
          if (*(longlong *)
               (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar9 = 0;
          }
        }
        else {
          if (lVar9 != 0) goto LAB_14035ddb3;
LAB_14035ddcd:
          lVar9 = 0;
        }
        if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
             == lVar9 + 0x30)) &&
           ((*(longlong **)(*local_150 + 0x1c8) != plVar4 || ((char)local_150[1] == '\0')))) {
          if ((*(byte *)((longlong)plVar4 + 0x2d3) & 8) != 0) {
            *(byte *)((longlong)plVar4 + 0x2d3) = *(byte *)((longlong)plVar4 + 0x2d3) & 0xf7;
            (**(code **)(*plVar4 + 0x958))(plVar4);
            puVar16 = local_158;
          }
          *(byte *)((longlong)plVar4 + 0x1f9) = *(byte *)((longlong)plVar4 + 0x1f9) & 0xfb;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_142b47bc4;
          local_170 = &local_120;
          local_178 = &LAB_147860ffd;
          local_180 = FUN_1463713dc;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000005;
          local_1a0 = 0x10;
          local_1a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar16 = local_158;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar9 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar16 = local_158,
           lVar9 != 0)) {
          lVar13 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar13 * 8) = lVar9;
          puVar16 = local_158;
        }
      }
      plVar4 = local_150;
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar8 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar8 = puVar16;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar6 = (int)uVar18;
      lVar9 = (longlong)iVar6;
      uVar7 = puVar8[lVar9] & uVar15;
      if (uVar7 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar13 = 0;
          do {
            uVar7 = puVar8[lVar9 + lVar13 + 1];
            if (uVar7 != 0) {
              uVar18 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14035df49;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar12 - lVar9 != lVar13);
          uVar15 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar18 = (ulonglong)(iVar6 + 1);
        puVar16 = local_158;
        iVar6 = iVar3;
      }
      else {
LAB_14035df49:
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar17 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
    lVar9 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar9 != 0) {
      lVar13 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar10 + lVar13);
        local_138 = (undefined4)*plVar4;
        uStack_134 = *(undefined4 *)((longlong)plVar4 + 4);
        uStack_130 = (undefined4)plVar4[1];
        uStack_12c = *(undefined4 *)((longlong)plVar4 + 0xc);
        local_140 = *local_148;
        if ((local_140 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14035dc7c(uVar5,&local_140,&local_138);
        lVar13 = lVar13 + 8;
      } while (lVar9 * 8 != lVar13);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14035e1b8:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035e1f0 FUN_14035e1f0 body=1379 status=ok
// SIG undefined FUN_14035e1f0(void)

void FUN_14035e1f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != param_2)) {
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    *(undefined1 *)(param_1 + 0x7a0) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x798) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x788) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x78c) = uVar1;
    *(undefined4 *)(param_1 + 0x790) = uVar2;
    *(undefined4 *)(param_1 + 0x794) = uVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0xc0) = param_2;
    FUN_144983130(param_1 + 200,param_2 + 0x30);
    lVar4 = *(longlong *)(param_2 + 0x68);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x68);
      }
    }
    *(longlong *)(param_1 + 0x100) = lVar4;
    FUN_1401f3db8(param_1 + 0x108,param_2 + 0x70);
    lVar4 = *(longlong *)(param_2 + 0x88);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x88);
      }
    }
    *(longlong *)(param_1 + 0x120) = lVar4;
    FUN_144983130(param_1 + 0x128,param_2 + 0x90);
    FUN_144983130(param_1 + 0x160,param_2 + 200);
    *(undefined2 *)(param_1 + 0x198) = *(undefined2 *)(param_2 + 0x100);
    *(undefined1 *)(param_1 + 0x19a) = *(undefined1 *)(param_2 + 0x102);
    FUN_144983130(param_1 + 0x1a0,param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x140);
    FUN_144983130(param_1 + 0x1e0,param_2 + 0x148);
    FUN_144983130(param_1 + 0x218,param_2 + 0x180);
    uVar1 = *(undefined4 *)(param_2 + 0x1bc);
    uVar2 = *(undefined4 *)(param_2 + 0x1c0);
    uVar3 = *(undefined4 *)(param_2 + 0x1c4);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x254) = uVar1;
    *(undefined4 *)(param_1 + 600) = uVar2;
    *(undefined4 *)(param_1 + 0x25c) = uVar3;
    *(undefined8 *)(param_1 + 0x25d) = *(undefined8 *)(param_2 + 0x1c5);
    FUN_144983130(param_1 + 0x268,param_2 + 0x1d0);
    lVar4 = *(longlong *)(param_2 + 0x208);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x208);
      }
    }
    *(longlong *)(param_1 + 0x2a0) = lVar4;
    FUN_1401f3db8(param_1 + 0x2a8,param_2 + 0x210);
    lVar4 = *(longlong *)(param_2 + 0x228);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x228);
      }
    }
    *(longlong *)(param_1 + 0x2c0) = lVar4;
    FUN_144983130(param_1 + 0x2c8,param_2 + 0x230);
    FUN_144983130(param_1 + 0x300,param_2 + 0x268);
    *(undefined2 *)(param_1 + 0x338) = *(undefined2 *)(param_2 + 0x2a0);
    *(undefined1 *)(param_1 + 0x33a) = *(undefined1 *)(param_2 + 0x2a2);
    FUN_144983130(param_1 + 0x340,param_2 + 0x2a8);
    *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x2e0);
    FUN_144983130(param_1 + 0x380,param_2 + 0x2e8);
    FUN_144983130(param_1 + 0x3b8,param_2 + 800);
    uVar1 = *(undefined4 *)(param_2 + 0x35c);
    uVar2 = *(undefined4 *)(param_2 + 0x360);
    uVar3 = *(undefined4 *)(param_2 + 0x364);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x358);
    *(undefined4 *)(param_1 + 0x3f4) = uVar1;
    *(undefined4 *)(param_1 + 0x3f8) = uVar2;
    *(undefined4 *)(param_1 + 0x3fc) = uVar3;
    *(undefined8 *)(param_1 + 0x3fd) = *(undefined8 *)(param_2 + 0x365);
    FUN_144983130(param_1 + 0x408,param_2 + 0x370);
    lVar4 = *(longlong *)(param_2 + 0x3a8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x3a8);
      }
    }
    *(longlong *)(param_1 + 0x440) = lVar4;
    FUN_1401f3db8(param_1 + 0x448,param_2 + 0x3b0);
    lVar4 = *(longlong *)(param_2 + 0x3c8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x3c8);
      }
    }
    *(longlong *)(param_1 + 0x460) = lVar4;
    FUN_144983130(param_1 + 0x468,param_2 + 0x3d0);
    FUN_144983130(param_1 + 0x4a0,param_2 + 0x408);
    *(undefined2 *)(param_1 + 0x4d8) = *(undefined2 *)(param_2 + 0x440);
    *(undefined1 *)(param_1 + 0x4da) = *(undefined1 *)(param_2 + 0x442);
    FUN_144983130(param_1 + 0x4e0,param_2 + 0x448);
    *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_2 + 0x480);
    FUN_144983130(param_1 + 0x520,param_2 + 0x488);
    lVar4 = *(longlong *)(param_2 + 0x4c0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x4c0);
      }
    }
    *(longlong *)(param_1 + 0x558) = lVar4;
    FUN_1401f3db8(param_1 + 0x560,param_2 + 0x4c8);
    lVar4 = *(longlong *)(param_2 + 0x4e0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *(longlong *)(param_2 + 0x4e0);
      }
    }
    *(longlong *)(param_1 + 0x578) = lVar4;
    FUN_144983130(param_1 + 0x580,param_2 + 0x4e8);
    FUN_144983130(param_1 + 0x5b8,param_2 + 0x520);
    *(undefined2 *)(param_1 + 0x5f0) = *(undefined2 *)(param_2 + 0x558);
    *(undefined1 *)(param_1 + 0x5f2) = *(undefined1 *)(param_2 + 0x55a);
    FUN_144983130(param_1 + 0x5f8,param_2 + 0x560);
    *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x598);
    FUN_144983130(param_1 + 0x638,param_2 + 0x5a0);
    FUN_144983130(param_1 + 0x670,param_2 + 0x5d8);
    uVar1 = *(undefined4 *)(param_2 + 0x614);
    uVar2 = *(undefined4 *)(param_2 + 0x618);
    uVar3 = *(undefined4 *)(param_2 + 0x61c);
    *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_2 + 0x610);
    *(undefined4 *)(param_1 + 0x6ac) = uVar1;
    *(undefined4 *)(param_1 + 0x6b0) = uVar2;
    *(undefined4 *)(param_1 + 0x6b4) = uVar3;
    *(undefined8 *)(param_1 + 0x6b5) = *(undefined8 *)(param_2 + 0x61d);
    FUN_144983130(param_1 + 0x6c0,param_2 + 0x6e8);
    FUN_144983130(param_1 + 0x6f8,param_2 + 0x720);
    FUN_144983130(param_1 + 0x730,param_2 + 0x758);
    FUN_14035e754(param_1);
    return;
  }
  return;
}



// FUNCTION 14035e754 FUN_14035e754 body=594 status=ok
// SIG undefined FUN_14035e754(void)

void FUN_14035e754(undefined8 ***param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined2 local_c8 [2];
  undefined4 local_c4;
  undefined8 ***local_c0;
  undefined4 local_b8;
  ushort local_a8;
  byte local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_70;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_1[0x88] != (undefined8 **)0x0) && (param_1[6] != (undefined8 **)0x0)) {
    lVar6 = FUN_1447210f0();
    if (lVar6 != 0) {
      local_98 = local_98 & 0xffffffffffffff00;
      local_70 = 0;
      FUN_1456bb102(&local_98,param_1[6]);
      FUN_1447c3578(param_1 + 0x81,&local_c0,&local_98);
      fVar10 = (float)FUN_144a7ecd0(&local_c0);
      fVar11 = 0.1;
      if (0.1 <= fVar10) {
        fVar11 = fVar10;
      }
      *(float *)((longlong)param_1 + 0x51c) = fVar11;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar9 = &local_c0;
        if (0x18 < local_a8) {
          ppppuVar9 = (undefined8 ****)local_c0;
        }
        (*pcVar2)(ppppuVar9);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0);
      }
      FUN_144a5ac3a(&local_98);
      if (*(longlong *)(lVar6 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar6 + 0x1f0) + 0xf0);
      }
      uVar3 = *puVar7;
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x51c);
      ppuVar4 = param_1[6];
      local_c0 = (undefined8 ****)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      pppuVar5 = local_c0;
      local_b8 = 3;
      *local_c0 = (undefined8 **)&PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      pppuVar8 = (undefined8 ***)(DAT_14c758608 + 1);
      lVar6 = DAT_14c758608 + 1;
      if (pppuVar8 == (undefined8 ***)0x0) {
        LOCK();
        UNLOCK();
        pppuVar8 = (undefined8 ***)(DAT_14c758608 + 2);
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_c0[2] = pppuVar8;
      *local_c0 = (undefined8 **)&PTR_FUN_14b3fb4e0;
      local_c0[3] = (undefined8 ***)0x0;
      FUN_14485c47a(local_c0 + 3,ppuVar4);
      pppuVar5[4] = param_1;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_c0);
      local_58 = 1;
      local_d8 = local_c8;
      local_c8[0] = 0;
      local_c4 = 0xbf800000;
      FUN_1406f4044(uVar3,param_1 + 0xfd,&local_98,uVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_c0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035e9a8 FUN_14035e9a8 body=2168 status=ok
// SIG undefined FUN_14035e9a8(void)

void FUN_14035e9a8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined1 *local_c8;
  undefined8 **local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined1 **local_a8;
  code *local_a0;
  longlong **local_98;
  code **local_90;
  code *local_88;
  code ***local_80;
  undefined8 local_78;
  byte local_53;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x27f] == 0) goto LAB_14035ee38;
  lVar6 = FUN_14035f346(param_1[0x27f] + 0x300);
  if (lVar6 != 0) {
    plVar1 = param_1 + 0x301;
    FUN_140e39776(plVar1);
    FUN_140361c16(plVar1,*(undefined8 *)(lVar6 + 0x30),param_1);
    if (0 < (int)param_1[0x310]) {
      if (param_1[0x23d] != 0) {
        pcVar3 = *(code **)(*param_1 + 0x5e8);
        if (pcVar3 == FUN_140972dde) {
          lVar14 = param_1[0x76];
          if (lVar14 != 0) goto LAB_14035ef1b;
          pcVar3 = *(code **)(*param_1 + 0x5f8);
          if (pcVar3 == FUN_144784df4) {
            if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                    (uVar2 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar2)) &&
                   ((int)uVar2 < DAT_14c9647dc)) &&
                  ((plVar10 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0 &&
                   ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x75b4))))) &&
                 ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                  lVar14 = *plVar10;
                }
                else {
                  lVar14 = 0;
                }
                lVar14 = lVar14 + 0x110;
                goto LAB_14035eef5;
              }
            }
            else {
              lVar14 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_14035eef5:
              if (lVar14 != 0) {
                lVar14 = *(longlong *)(lVar14 + 0x20);
                goto LAB_14035ef02;
              }
            }
          }
          else {
            lVar14 = (*pcVar3)(param_1);
LAB_14035ef02:
            if (lVar14 != 0) {
              lVar14 = *(longlong *)(lVar14 + 0x3b0);
              goto LAB_14035ef12;
            }
          }
LAB_14035ead6:
          cVar4 = (**(code **)(*param_1 + 0x708))(param_1);
          if ((cVar4 != '\0') && (lVar14 = FUN_144a782da(plVar1,&DAT_14cb72620), lVar14 != 0)) {
            FUN_1437f469a(&local_88);
            lVar13 = FUN_144a782da(plVar1,&DAT_14cb72628);
            if (lVar13 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x48);
              uVar7 = FUN_144af695c();
              bVar5 = FUN_1448093f4(lVar13,uVar7);
              if ((lVar13 != 0 & bVar5) == 1) {
                local_53 = local_53 | 1;
                local_78 = *(undefined8 *)(lVar13 + 0x48);
              }
            }
            FUN_14056efae(lVar14 + 0x5d0,&DAT_14cb71288,&local_88);
          }
        }
        else {
          lVar14 = (*pcVar3)(param_1);
LAB_14035ef12:
          if (lVar14 == 0) goto LAB_14035ead6;
LAB_14035ef1b:
          if ((*(byte *)(lVar14 + 0x39a) & 8) != 0) goto LAB_14035ead6;
          lVar14 = FUN_144a782da(plVar1,&DAT_14cb72618);
          if (lVar14 != 0) {
            lVar13 = param_1[0x23d];
            if ((lVar13 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar13);
            }
            local_a0 = (code *)0x0;
            FUN_14485c47a(&local_a0,lVar13);
            FUN_145702c0e(&local_88,&local_a0);
            FUN_1406ebff6(lVar14,5,&local_88);
          }
          lVar14 = FUN_144a782da(plVar1,&DAT_14cb72620);
          if ((lVar14 != 0) && ((char)param_1[0x2f] == '\x03')) {
            lVar13 = param_1[0x78];
            if ((lVar13 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar13);
            }
            local_a0 = (code *)0x0;
            FUN_14485c47a(&local_a0,lVar13);
            FUN_14598098a(&local_88,&local_a0);
            FUN_1406ebff6(lVar14,5,&local_88);
          }
        }
        cVar4 = (**(code **)(*param_1 + 0x708))(param_1);
        if (((byte)(param_2 - 1U) < 2) || (cVar4 != '\0')) {
          local_d8 = &local_e0;
          local_e0 = DAT_14cb72618;
          local_d0 = &local_b8;
          local_b8 = 0;
          local_c0 = &local_d8;
          local_c8 = &LAB_143cbcae0;
          if (param_1[0x309] != 0) {
            local_98 = &local_b0;
            local_a8 = &local_c8;
            local_90 = &local_a0;
            local_a0 = FUN_143cbca2e;
            local_80 = &local_90;
            local_88 = FUN_1487df56e;
            local_b0 = plVar1;
            FUN_1447c5ba2();
            lVar14 = local_b8;
            if (local_b8 != 0) {
              lVar13 = param_1[0x23d];
              local_88 = (code *)0x0;
              local_80 = (code ***)((ulonglong)local_80 & 0xffffffff00000000);
              FUN_1446efa72(&local_88,0,3,0x10);
              pcVar3 = local_88;
              local_80 = (code ***)CONCAT44(local_80._4_4_,3);
              *(undefined ***)local_88 = &PTR_LAB_14b3e7880;
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 1;
              lVar9 = DAT_14c758608 + 1;
              if (lVar8 == 0) {
                LOCK();
                UNLOCK();
                lVar8 = DAT_14c758608 + 2;
                lVar9 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar9;
              *(longlong *)(local_88 + 0x10) = lVar8;
              *(undefined ***)local_88 = &PTR_FUN_14b3e7810;
              *(undefined8 *)(local_88 + 0x18) = 0;
              iVar12 = 0;
              if (lVar13 != 0) {
                uVar2 = *(uint *)(lVar13 + 0xc);
                *(uint *)(local_88 + 0x18) = uVar2;
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar13 = 0;
                }
                iVar12 = *(int *)(lVar13 + 0x10);
                if (*(int *)(lVar13 + 0x10) == 0) {
                  LOCK();
                  iVar12 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar15 = DAT_14c964868 + 1;
                  bVar17 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar12;
                  if (bVar17) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar15);
                  }
                  LOCK();
                  iVar12 = *(int *)(lVar13 + 0x10);
                  bVar17 = iVar12 == 0;
                  if (bVar17) {
                    *(int *)(lVar13 + 0x10) = iVar15;
                    iVar12 = 0;
                  }
                  UNLOCK();
                  if (bVar17) {
                    iVar12 = iVar15;
                  }
                }
              }
              *(int *)(pcVar3 + 0x1c) = iVar12;
              *(code **)(pcVar3 + 0x20) = FUN_14019ab6c;
              *(undefined4 *)(pcVar3 + 0x28) = 0;
              lVar13 = lVar14 + 0x60;
              lVar8 = *(longlong *)(lVar14 + 0xc0);
              lVar9 = lVar8;
              if (lVar8 == 0) {
                lVar9 = lVar13;
              }
              iVar12 = *(int *)(lVar14 + 200);
              lVar16 = (longlong)iVar12;
              if (lVar16 != 0) {
                lVar11 = lVar16 * 0x18;
                do {
                  if (*(longlong *)(lVar9 + 0x10) == DAT_14cb71278) {
                    if (lVar9 != 0) goto LAB_14035ecf2;
                    break;
                  }
                  lVar9 = lVar9 + 0x18;
                  lVar11 = lVar11 + -0x18;
                } while (lVar11 != 0);
              }
              *(uint *)(lVar14 + 200) = iVar12 + 1U;
              if (*(uint *)(lVar14 + 0xcc) < iVar12 + 1U) {
                FUN_1487c0b04(lVar13,iVar12);
                lVar8 = *(longlong *)(lVar14 + 0xc0);
              }
              if (lVar8 == 0) {
                lVar8 = lVar13;
              }
              lVar16 = lVar16 * 0x18;
              *(undefined8 *)(lVar8 + lVar16) = 0;
              ((undefined8 *)(lVar8 + lVar16))[1] = 0;
              *(undefined8 *)(lVar8 + 0x10 + lVar16) = 0;
              lVar8 = *(longlong *)(lVar14 + 0xc0);
              if (*(longlong *)(lVar14 + 0xc0) == 0) {
                lVar8 = lVar13;
              }
              lVar9 = lVar8 + lVar16;
              *(longlong *)(lVar8 + 0x10 + lVar16) = DAT_14cb71278;
LAB_14035ecf2:
              FUN_144966e2e(lVar9,&local_88);
              if ((int)local_80 != 0) {
                if (local_88 == (code *)0x0) goto LAB_14035ed1d;
                (*(code *)**(undefined8 **)local_88)(local_88,0);
                FUN_1446efa72(&local_88,0,0,0x10);
                local_80 = (code ***)((ulonglong)local_80 & 0xffffffff00000000);
              }
              if (local_88 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
LAB_14035ed1d:
      local_88 = (code *)0x0;
      local_80 = (code ***)((ulonglong)local_80 & 0xffffffff00000000);
      FUN_1446efa72(&local_88,0,3,0x10);
      pcVar3 = local_88;
      local_80 = (code ***)CONCAT44(local_80._4_4_,3);
      *(undefined ***)local_88 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      *(longlong *)(local_88 + 0x10) = lVar13;
      *(undefined ***)local_88 = &PTR_FUN_14b3e77a0;
      *(undefined8 *)(local_88 + 0x18) = 0;
      iVar12 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_88 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar12 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar12 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar12;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar12 = *(int *)(lVar14 + 0x10);
          bVar17 = iVar12 == 0;
          if (bVar17) {
            *(int *)(lVar14 + 0x10) = iVar15;
            iVar12 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar12 = iVar15;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar12;
      *(code **)(pcVar3 + 0x20) = FUN_140a2b0e4;
      *(undefined4 *)(pcVar3 + 0x28) = 0;
      FUN_1448b6402(param_1 + 0x327,&local_a0,&local_88);
      if ((int)local_80 != 0) {
        if (local_88 == (code *)0x0) goto LAB_14035ee1d;
        (*(code *)**(undefined8 **)local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        local_80 = (code ***)((ulonglong)local_80 & 0xffffffff00000000);
      }
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14035ee1d:
  if (param_1[0x23d] != 0) {
    FUN_14035f222(param_1[0x23d] + 0x3ae0,lVar6);
  }
LAB_14035ee38:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14035f222 FUN_14035f222 body=105 status=ok
// SIG undefined FUN_14035f222(void)

void FUN_14035f222(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (param_2 != 0) {
    lVar1 = FUN_14035f28c(*(undefined8 *)(param_2 + 0x30));
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(lVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar1 + 0x44);
      *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(lVar1 + 0x50);
      if (*(char *)(lVar1 + 0x48) == '\x01') {
        *(float *)(param_1 + 0x70) = *(float *)(lVar1 + 0x4c) * 0.017453292;
        *(undefined1 *)(param_1 + 0x74) = 1;
      }
      else if (*(char *)(param_1 + 0x74) == '\x01') {
        *(undefined1 *)(param_1 + 0x74) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14035f28c FUN_14035f28c body=128 status=ok
// SIG undefined FUN_14035f28c(void)

longlong * FUN_14035f28c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((0 < *(int *)(param_1 + 0x30)) &&
     (plVar1 = (longlong *)**(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    if (DAT_14cb62bb0 == 0) {
      uVar3 = FUN_140325e72();
      DAT_14cb62bb0 = FUN_140002ddd(FUN_1464fa24d,uVar3,L"GbxRotationChannelSettings_Body");
      if (DAT_14cb62bb0 == 0) {
        return (longlong *)0x0;
      }
    }
    if (*(int *)(DAT_14cb62bb0 + 0x38) <= *(int *)(lVar2 + 0x38)) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb62bb0 + 0x38) * 8)
          == DAT_14cb62bb0 + 0x30) {
        return plVar1;
      }
      return (longlong *)0x0;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14035f30c FUN_14035f30c body=57 status=ok
// SIG undefined FUN_14035f30c(void)

void FUN_14035f30c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62bb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62bb0 = FUN_140002ddd(FUN_1464fa24d,uVar1,L"GbxRotationChannelSettings_Body");
  }
  return;
}



// FUNCTION 14035f346 FUN_14035f346 body=380 status=ok
// SIG undefined FUN_14035f346(void)

longlong FUN_14035f346(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14035f4c2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 14035f4c2 FUN_14035f4c2 body=228 status=ok
// SIG undefined FUN_14035f4c2(void)

longlong FUN_14035f4c2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb62c80 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_1486ed3d3;
    local_40 = FUN_1418564c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxRotationData",&DAT_14cb62c80,&DAT_1486ed3d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035f5a8 FUN_14035f5a8 body=1543 status=ok
// SIG undefined FUN_14035f5a8(void)

longlong FUN_14035f5a8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x18))(param_1 + 0x10b0);
  if ((((*(int *)(param_1 + 0x13c4) != 0) && (uVar1 = *(uint *)(param_1 + 0x13c0), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x13c4))) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
       ((lVar4 = *plVar7, lVar4 != lVar2 && lVar4 != 0 &&
        (plVar7 = *(longlong **)(lVar4 + 0xa8), plVar7 != (longlong *)0x0)))))))) {
    if (DAT_14cb22468 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f2c44f;
      local_60 = FUN_146438a21;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22468);
    if (plVar7 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f2c44f;
        local_60 = FUN_146438a21;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar3 = (longlong *)FUN_144718840(plVar7,DAT_14cb22468);
      if (((plVar7 != plVar3) && (plVar3 != (longlong *)0x0)) &&
         (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)) goto LAB_14035f73a;
    }
  }
  if ((lVar2 == 0) || (plVar7 = *(longlong **)(lVar2 + 0xa8), plVar7 == (longlong *)0x0)) {
LAB_14035f9ed:
    lVar6 = 0;
  }
  else {
    if (DAT_14cb22468 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f2c44f;
      local_60 = FUN_146438a21;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar3 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22468);
    if (plVar3 == (longlong *)0x0) {
LAB_14035f9dc:
      lVar6 = FUN_14035fbb0(plVar7);
      if (lVar6 == 0) goto LAB_14035f9ed;
    }
    else {
      if (DAT_14cb22468 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f2c44f;
        local_60 = FUN_146438a21;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar5 = (longlong *)FUN_144718840(plVar3,DAT_14cb22468);
      if (((plVar3 == plVar5) || (plVar5 == (longlong *)0x0)) ||
         (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 == 0)) goto LAB_14035f9dc;
    }
    lVar4 = lVar6;
    if (*(char *)(lVar2 + 0x830) != '\x01') goto LAB_14035f73a;
  }
  plVar7 = *(longlong **)(param_1 + 0x1b0);
  if (plVar7 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f2c44f;
      local_60 = FUN_146438a21;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar3 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22468);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f2c44f;
        local_60 = FUN_146438a21;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar5 = (longlong *)FUN_144718840(plVar3,DAT_14cb22468);
      if (((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) &&
         (lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar4 != 0)) goto LAB_14035f73a;
    }
    lVar4 = FUN_14035fbb0(plVar7);
    if (lVar4 != 0) goto LAB_14035f73a;
  }
  lVar2 = FUN_14035fbb0(param_1);
  lVar4 = lVar6;
  if (lVar2 != 0) {
    lVar4 = lVar2;
  }
LAB_14035f73a:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14035fbb0 FUN_14035fbb0 body=102 status=ok
// SIG undefined FUN_14035fbb0(void)

void FUN_14035fbb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1407fc1c8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14035fc18 FUN_14035fc18 body=311 status=ok
// SIG undefined FUN_14035fc18(void)

void FUN_14035fc18(longlong *param_1)

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
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x30 + (longlong)iVar4 * 0x34) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_60._4_4_ != iVar6);
      } while (((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1) || (local_78 != param_1));
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



// FUNCTION 14035fd50 FUN_14035fd50 body=1761 status=ok
// SIG undefined FUN_14035fd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035fd50(longlong *param_1,undefined8 *param_2,byte param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar27;
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar23 = *(uint *)(param_2 + 1);
  if ((int)uVar23 < 1) goto LAB_14035fdc7;
  local_f8 = (undefined1  [16])0x0;
  iVar19 = (int)param_1[1] + uVar23;
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19);
  }
  if (iVar19 == 0) {
    iVar19 = 0;
LAB_14035fe74:
    local_f8._8_4_ = iVar19 + uVar23;
    if ((uint)(local_f8._12_4_ - iVar19) < uVar23) {
      FUN_140786566(local_f8,iVar19);
    }
    FUN_140360432((longlong)iVar19 * 0x58 + local_f8._0_8_,*param_2);
  }
  else {
    FUN_1407866d8(local_f8);
    uVar23 = *(uint *)(param_2 + 1);
    iVar19 = local_f8._8_4_;
    if (uVar23 != 0) goto LAB_14035fe74;
  }
  auVar14 = _DAT_149931e80;
  if (local_f8._8_4_ != 0) {
    uVar15 = (longlong)(int)local_f8._8_4_ * 0x58 - 0x58;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar15;
    uVar25 = SUB164(auVar28 * ZEXT816(0x2e8ba2e8ba2e8ba3),8);
    uVar27 = (undefined4)(uVar15 / 0x580000000);
    auVar29._0_8_ = CONCAT44(uVar27,uVar25);
    auVar29._8_4_ = uVar25;
    auVar29._12_4_ = uVar27;
    auVar26._0_8_ = auVar29._0_8_ >> 4;
    auVar26._8_8_ = auVar29._8_8_ >> 4;
    puVar16 = (undefined1 *)(local_f8._0_8_ + 0x57d);
    uVar17 = 0;
    auVar28 = pmovsxbq(in_XMM1,0xf0e);
    auVar29 = pmovsxbq(in_XMM2,0xd0c);
    auVar30 = pmovsxbq(in_XMM3,0xb0a);
    auVar31 = pmovsxbq(in_XMM4,0x908);
    auVar32 = pmovsxbq(in_XMM5,0x706);
    auVar33 = pmovsxbq(unaff_XMM6,0x504);
    auVar34 = pmovsxbq(unaff_XMM7,0x302);
    auVar35 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar36._8_4_ = (int)uVar17;
      auVar36._0_8_ = uVar17;
      auVar36._12_4_ = (int)(uVar17 >> 0x20);
      auVar38 = auVar26 | auVar14;
      auVar39 = (auVar36 | auVar35) ^ auVar14;
      lVar22 = auVar38._0_8_;
      auVar40._0_8_ = -(ulonglong)(lVar22 < auVar39._0_8_);
      lVar20 = auVar38._8_8_;
      auVar40._8_8_ = -(ulonglong)(lVar20 < auVar39._8_8_);
      auVar47 = pshuflw(unaff_XMM14,auVar40,0xe8);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar47 ^ auVar39,auVar47 ^ auVar39);
      if ((auVar39._0_4_ & 1) != 0) {
        puVar16[-0x528] = 1;
      }
      auVar40 = packssdw(auVar40,auVar40);
      auVar47._8_4_ = 0xffffffff;
      auVar47._0_8_ = 0xffffffffffffffff;
      auVar47._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar47,auVar40 ^ auVar47);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[1] & 1) != 0) {
        puVar16[-0x4d0] = 1;
      }
      auVar40 = (auVar36 | auVar34) ^ auVar14;
      auVar41._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = packssdw(auVar39,auVar41);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar1,auVar39 ^ auVar1);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[2] & 1) != 0) {
        puVar16[-0x478] = 1;
      }
      auVar40 = pshufhw(auVar41,auVar41,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar2,auVar40 ^ auVar2);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[3] & 1) != 0) {
        puVar16[-0x420] = 1;
      }
      auVar40 = (auVar36 | auVar33) ^ auVar14;
      auVar42._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = pshuflw(auVar39,auVar42,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar3,auVar39 ^ auVar3);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[4] & 1) != 0) {
        puVar16[-0x3c8] = 1;
      }
      auVar40 = packssdw(auVar42,auVar42);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar4,auVar40 ^ auVar4);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[5] & 1) != 0) {
        puVar16[-0x370] = 1;
      }
      auVar40 = (auVar36 | auVar32) ^ auVar14;
      auVar43._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = packssdw(auVar39,auVar43);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar5,auVar39 ^ auVar5);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[6] & 1) != 0) {
        puVar16[-0x318] = 1;
      }
      auVar40 = pshufhw(auVar43,auVar43,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar6,auVar40 ^ auVar6);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[7] & 1) != 0) {
        puVar16[-0x2c0] = 1;
      }
      auVar40 = (auVar36 | auVar31) ^ auVar14;
      auVar44._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar44._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = pshuflw(auVar39,auVar44,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar7,auVar39 ^ auVar7);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[8] & 1) != 0) {
        puVar16[-0x268] = 1;
      }
      auVar40 = packssdw(auVar44,auVar44);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar8,auVar40 ^ auVar8);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[9] & 1) != 0) {
        puVar16[-0x210] = 1;
      }
      auVar40 = (auVar36 | auVar30) ^ auVar14;
      auVar45._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar45._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = packssdw(auVar39,auVar45);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar9,auVar39 ^ auVar9);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[10] & 1) != 0) {
        puVar16[-0x1b8] = 1;
      }
      auVar40 = pshufhw(auVar45,auVar45,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar10,auVar40 ^ auVar10);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[0xb] & 1) != 0) {
        puVar16[-0x160] = 1;
      }
      auVar40 = (auVar36 | auVar29) ^ auVar14;
      auVar46._0_8_ = -(ulonglong)(lVar22 < auVar40._0_8_);
      auVar46._8_8_ = -(ulonglong)(lVar20 < auVar40._8_8_);
      auVar39 = pshuflw(auVar39,auVar46,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar11,auVar39 ^ auVar11);
      unaff_XMM14 = packsswb(auVar39,auVar39);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar16[-0x108] = 1;
      }
      auVar39 = packssdw(auVar46,auVar46);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar12,auVar39 ^ auVar12);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[0xd] & 1) != 0) {
        puVar16[-0xb0] = 1;
      }
      auVar39 = (auVar36 | auVar28) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar22 < auVar39._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar20 < auVar39._8_8_);
      auVar39 = packssdw(auVar38,auVar37);
      auVar38._8_4_ = 0xffffffff;
      auVar38._0_8_ = 0xffffffffffffffff;
      auVar38._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar38,auVar39 ^ auVar38);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[0xe] & 1) != 0) {
        puVar16[-0x58] = 1;
      }
      auVar39 = pshufhw(auVar37,auVar37,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar39 = packssdw(auVar39 ^ auVar13,auVar39 ^ auVar13);
      auVar39 = packsswb(auVar39,auVar39);
      if ((auVar39[0xf] & 1) != 0) {
        *puVar16 = 1;
      }
      uVar17 = uVar17 + 0x10;
      puVar16 = puVar16 + 0x580;
    } while ((uVar15 / 0x58 + 0x10 & 0xfffffffffffffff0) != uVar17);
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar22 = *param_1;
    lVar20 = (longlong)(int)param_1[1] * 0x58 + lVar22;
    do {
      uVar25 = local_f8._8_4_;
      lVar24 = (longlong)(int)local_f8._8_4_;
      if (lVar24 != 0) {
        lVar21 = lVar24 * 0x58;
        lVar18 = local_f8._0_8_;
        do {
          if (*(longlong *)(lVar18 + 0x38) == *(longlong *)(lVar22 + 0x38)) {
            if (lVar18 != 0) {
              FUN_1403719a4(lVar18,lVar22);
              goto LAB_140360379;
            }
            break;
          }
          lVar18 = lVar18 + 0x58;
          lVar21 = lVar21 + -0x58;
        } while (lVar21 != 0);
      }
      if ((byte)(*(byte *)(lVar22 + 0x55) ^ 1 | param_3) == 1) {
        uVar23 = local_f8._8_4_ + 1;
        local_f8._8_4_ = uVar23;
        lVar18 = local_f8._0_8_;
        if ((uint)local_f8._12_4_ < uVar23) {
          FUN_140786566(local_f8,uVar25);
          lVar18 = local_f8._0_8_;
        }
        lVar24 = lVar24 * 0x58;
        FUN_140382e86(lVar24 + lVar18,lVar22);
        *(undefined8 *)(lVar18 + 0x38 + lVar24) = *(undefined8 *)(lVar22 + 0x38);
        *(undefined8 *)(lVar18 + 0x40 + lVar24) = 0;
        *(undefined8 *)(lVar18 + 0x40 + lVar24) = *(undefined8 *)(lVar22 + 0x40);
        *(undefined8 *)(lVar22 + 0x40) = 0;
        *(undefined4 *)(lVar18 + 0x48 + lVar24) = *(undefined4 *)(lVar22 + 0x48);
        *(undefined4 *)(lVar18 + 0x4c + lVar24) = *(undefined4 *)(lVar22 + 0x4c);
        *(undefined8 *)(lVar22 + 0x48) = 0;
        *(undefined2 *)(lVar18 + 0x54 + lVar24) = *(undefined2 *)(lVar22 + 0x54);
        *(undefined4 *)(lVar18 + 0x50 + lVar24) = *(undefined4 *)(lVar22 + 0x50);
      }
LAB_140360379:
      lVar22 = lVar22 + 0x58;
    } while (lVar22 != lVar20);
  }
  iVar19 = (int)param_1[1];
  lVar22 = *param_1;
  if ((longlong *)local_f8 != param_1) {
    FUN_140358fe5();
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    lVar22 = local_f8._0_8_;
    *param_1 = local_f8._0_8_;
    iVar19 = local_f8._8_4_;
    *(undefined4 *)(param_1 + 1) = local_f8._8_4_;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_f8._12_4_;
    local_f8 = ZEXT816(0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (iVar19 != 0) {
    lVar20 = 0;
    uVar23 = 0;
    do {
      uVar23 = uVar23 | *(uint *)(lVar22 + 0x50 + lVar20);
      *(uint *)(param_1 + 2) = uVar23;
      lVar20 = lVar20 + 0x58;
    } while ((longlong)iVar19 * 0x58 - lVar20 != 0);
  }
  FUN_140358fe5(local_f8._0_8_,local_f8._8_4_);
  if (local_f8._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_14035fdc7:
  if ((local_e0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140360432 FUN_140360432 body=158 status=ok
// SIG undefined FUN_140360432(void)

void FUN_140360432(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14034cca6(param_1,param_2);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    iVar1 = *(int *)(param_2 + 0x48);
    _Src = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x40),iVar1,0);
      memcpy(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 * 2);
    }
    *(undefined2 *)(param_1 + 0x54) = *(undefined2 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1403604d0 FUN_1403604d0 body=874 status=ok
// SIG undefined FUN_1403604d0(void)

undefined8
FUN_1403604d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,byte param_5,
             char param_6,char param_7,char param_8,char param_9)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_d8 [40];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  longlong lStack_88;
  void *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == 0 || param_2 == 0) goto LAB_140360780;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x140) + uVar5) == param_2) {
        iVar8 = (int)(uVar5 >> 3) * 0x38e38e39;
        if (iVar8 != -1) goto LAB_14036075d;
        break;
      }
      uVar5 = uVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0x148) * 0x48 != uVar5);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1400bbfc4(&local_90,param_4);
  iVar8 = local_78;
  local_a8 = local_90;
  uStack_a0 = lStack_88;
  local_b0 = local_80;
  cVar4 = (*(code *)PTR_FUN_14c758760)();
  uVar2 = *(uint *)(param_4 + 0xc);
  if (cVar4 == '\0') {
LAB_1403605d5:
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar7 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar7 = *(uint *)(lVar6 + 0x10);
      bVar10 = uVar7 == 0;
      if (bVar10) {
        *(uint *)(lVar6 + 0x10) = uVar9;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar7 = uVar9;
      }
    }
    uVar5 = (ulonglong)uVar7;
    uVar7 = uVar2;
  }
  else {
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar5 = 0;
    uVar7 = 0;
    if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) goto LAB_1403605d5;
  }
  local_80 = (void *)((ulonglong)uVar7 | uVar5 << 0x20);
  local_78 = (int)local_a8;
  uStack_74 = local_a8._4_4_;
  uStack_70 = (undefined4)uStack_a0;
  uStack_6c = uStack_a0._4_4_;
  local_68 = (void *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar8);
  local_90 = param_2;
  lStack_88 = param_3;
  if (iVar8 == 0) {
    local_60 = 0;
  }
  else {
    FUN_1446dd670(&local_68,iVar8,0);
    memcpy(local_68,local_b0,(longlong)iVar8 * 2);
  }
  local_58 = 0;
  local_50 = param_9 << 4 | param_8 << 3 | param_7 << 2 | param_6 * '\x02' | param_5 |
             local_50 & 0xe0;
  iVar8 = *(int *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x148) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x14c) < iVar8 + 1U) {
    FUN_14181b752((longlong *)(param_1 + 0x140),iVar8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar8 * 0x48);
  *plVar1 = local_90;
  plVar1[1] = lStack_88;
  plVar1[2] = (longlong)local_80;
  *(int *)(plVar1 + 3) = local_78;
  *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_74;
  *(undefined4 *)(plVar1 + 4) = uStack_70;
  *(undefined4 *)((longlong)plVar1 + 0x24) = uStack_6c;
  plVar1[5] = 0;
  plVar1[5] = (longlong)local_68;
  local_68 = (void *)0x0;
  *(undefined4 *)(plVar1 + 6) = (undefined4)local_60;
  *(undefined4 *)((longlong)plVar1 + 0x34) = local_60._4_4_;
  local_60 = 0;
  plVar1[7] = local_58;
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(byte *)(plVar1 + 8) = local_50;
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14036075d:
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    FUN_14169f27a(param_1,(longlong)iVar8 * 0x48 + *(longlong *)(param_1 + 0x140));
  }
LAB_140360780:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14036083c FUN_14036083c body=2168 status=ok
// SIG undefined FUN_14036083c(void)

void FUN_14036083c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  uint local_b4;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  uint *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  longlong lStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140c89340(local_98,param_1);
  local_c8 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  plVar1 = (longlong *)(param_1 + 0x1538);
  lVar5 = param_1 + 0x1548;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  iVar13 = 0;
  lStack_60 = lVar5;
  if (*(int *)(param_1 + 0x1560) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x1560);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  lStack_80 = lStack_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar13) || (lStack_60 != lVar5)) {
    do {
      do {
        FUN_145702c66(local_c8,*(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x10));
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar13);
    } while ((lStack_80 != lVar5) || (local_90 != plVar1));
  }
  local_ac = *(int *)(param_1 + 0x1540);
  local_b0 = *(int *)(param_1 + 0x156c);
  iVar13 = *(int *)(param_1 + 0x1580);
  local_a8 = plVar1;
  if (iVar13 < 2) {
    lVar4 = param_1 + 0x1570;
    if (*(longlong *)(param_1 + 0x1578) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1578);
    }
    iVar14 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar14 = iVar13;
    }
    if (local_ac - local_b0 < iVar14 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      iStack_54 = 0;
      uStack_50 = 0;
      if (*(int *)(param_1 + 0x1560) == 0) {
        iVar13 = 0;
        lStack_60 = lVar5;
      }
      else {
        lStack_60 = lVar5;
        FUN_1449c0562(&local_68);
        iVar13 = *(int *)(param_1 + 0x1560);
      }
      local_78 = local_58;
      iStack_74 = iStack_54;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      lStack_80 = lStack_60;
      local_90 = plVar1;
      if ((iStack_54 != iVar13) || (lStack_60 != lVar5)) {
        do {
          *(undefined4 *)
           (lVar4 + (longlong)*(int *)(*local_90 + 0xc + (longlong)iStack_74 * 0x10) * 4) =
               0xffffffff;
          local_78 = local_78 & ~local_88._4_4_;
          FUN_1449c0562(&local_88);
        } while (local_90 != plVar1 || (lStack_80 != lVar5 || iStack_74 != iVar13));
      }
    }
    else if (iVar13 == 1) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar4 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x1580));
    }
    FUN_1403c4002(plVar1,0);
  }
  else {
    FUN_1403c4002(plVar1,0);
    *(undefined4 *)(param_1 + 0x1580) = 1;
    FUN_145703794(plVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x1660) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x1658);
    plVar1 = plVar15 + *(int *)(param_1 + 0x1660);
    do {
      lVar5 = *plVar15;
      if (lVar5 != 0) {
        lVar4 = FUN_140832528();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          iVar13 = *(int *)(lVar5 + 0x5e0);
          if (iVar13 == 0) {
            uVar18 = 1;
            uVar12 = 0;
            iVar14 = 0;
            iVar11 = 0;
          }
          else {
            puVar6 = *(uint **)(lVar5 + 0x5d8);
            if (*(uint **)(lVar5 + 0x5d8) == (uint *)0x0) {
              puVar6 = (uint *)(lVar5 + 0x5c8);
            }
            uVar3 = *puVar6;
            if (uVar3 == 0) {
              iVar14 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar14 = iVar13 + -1;
              }
              uVar12 = 0;
              uVar9 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar9 = uVar12;
              }
              iVar14 = 0;
              do {
                if (uVar9 == uVar12) goto LAB_140360a08;
                iVar14 = iVar14 + 0x20;
                uVar3 = puVar6[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar3 == 0);
            }
            else {
              uVar12 = 0;
              iVar14 = 0;
            }
            uVar18 = (ulonglong)(-uVar3 & uVar3);
            uVar9 = uVar18 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar9 != 0) {
              for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar11 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar11) {
              iVar11 = iVar13;
            }
          }
          if (iVar11 != iVar13) {
            uVar3 = 0xffffffff;
            local_a0 = (uint *)(lVar5 + 0x5c8);
LAB_140360bcc:
            local_c0 = (longlong *)(*(longlong *)(lVar5 + 0x5b8) + (longlong)iVar11 * 0x1f0);
            lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x5b8) + (longlong)iVar11 * 0x1f0);
            local_b4 = uVar3;
            if (*(int *)(local_c8 + 0x18) != *(int *)(local_c8 + 0x44)) {
              uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
              uVar10 = (uint)lVar4 & 0xffff;
              uVar3 = (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar10) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4);
              lVar16 = local_c8 + 0x48;
              if (*(longlong *)(local_c8 + 0x50) != 0) {
                lVar16 = *(longlong *)(local_c8 + 0x50);
              }
              iVar11 = *(int *)(lVar16 + (ulonglong)(*(int *)(local_c8 + 0x58) - 1U & uVar3) * 4);
              if (iVar11 != -1) {
                do {
                  lVar16 = *(longlong *)(local_c8 + 0x10) + (longlong)iVar11 * 0x460;
                  if (*(longlong *)(*(longlong *)(local_c8 + 0x10) + (longlong)iVar11 * 0x460) ==
                      lVar4) {
                    if (lVar16 != 0) {
                      if (*(int *)(param_1 + 0x14f0) == *(int *)(param_1 + 0x151c))
                      goto LAB_140361066;
                      lVar17 = param_1 + 0x1520;
                      if (*(longlong *)(param_1 + 0x1528) != 0) {
                        lVar17 = *(longlong *)(param_1 + 0x1528);
                      }
                      iVar11 = *(int *)(lVar17 + (ulonglong)
                                                 (*(int *)(param_1 + 0x1530) - 1U & uVar3) * 4);
                      if (iVar11 == -1) goto LAB_140361066;
                      lVar17 = *(longlong *)(param_1 + 0x14e8);
                      goto LAB_140361042;
                    }
                    break;
                  }
                  iVar11 = *(int *)(lVar16 + 0x450);
                } while (iVar11 != -1);
              }
            }
            goto LAB_140360c8f;
          }
        }
      }
LAB_140360a08:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x14e8);
  lVar5 = param_1 + 0x14f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  iVar13 = 0;
  lStack_60 = lVar5;
  if (*(int *)(param_1 + 0x1510) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x1510);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  lStack_80 = lStack_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar13) || (lStack_60 != lVar5)) {
    do {
      plVar15 = (longlong *)((longlong)iStack_74 * 0x1f0 + *local_90);
      if (*(int *)(param_1 + 0x1540) == *(int *)(param_1 + 0x156c)) {
        lVar4 = *plVar15;
      }
      else {
        lVar4 = *plVar15;
        uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar10 = (uint)lVar4 & 0xffff;
        lVar16 = param_1 + 0x1570;
        if (*(longlong *)(param_1 + 0x1578) != 0) {
          lVar16 = *(longlong *)(param_1 + 0x1578);
        }
        iVar14 = *(int *)(lVar16 + (ulonglong)
                                   (*(int *)(param_1 + 0x1580) - 1U &
                                   (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar10)
                                   + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar14 != -1) {
          do {
            if (*(longlong *)(*local_a8 + (longlong)iVar14 * 0x10) == lVar4) goto LAB_140360fb4;
            iVar14 = *(int *)((longlong)iVar14 * 0x10 + *local_a8 + 8);
          } while (iVar14 != -1);
        }
      }
      lVar4 = FUN_1402c74da(local_c8,lVar4,plVar15 + 1);
      *(undefined1 *)(lVar4 + 0x361) = 1;
LAB_140360fb4:
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar13) || (lStack_80 != lVar5)) || (local_90 != plVar1));
  }
  if (((local_ac != local_b0) || (*(int *)(param_1 + 0x1540) != *(int *)(param_1 + 0x156c))) &&
     (plVar1 = *(longlong **)(param_1 + 0xae8), plVar1 != (longlong *)0x0)) {
    lVar5 = FUN_140a87838();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      FUN_145702caa(plVar1);
      (**(code **)(*plVar1 + 0x388))(plVar1);
    }
  }
  FUN_140c8931a(local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar11 = *(int *)((longlong)iVar11 * 0x1f0 + lVar17 + 0x1e8), iVar11 != -1) {
LAB_140361042:
    if (*(longlong *)(lVar17 + (longlong)iVar11 * 0x1f0) == lVar4) goto LAB_140360c8f;
  }
LAB_140361066:
  local_88 = lVar16 + 0x10;
  local_90 = local_c0;
  FUN_1470f3992((longlong *)(param_1 + 0x14e8),&local_68,&local_90,0);
  lVar4 = *local_c0;
LAB_140360c8f:
  lVar4 = FUN_1402c74da(local_c8,lVar4,local_c0 + 1);
  *(undefined1 *)(lVar4 + 0x361) = 1;
  FUN_14036396c(local_a8,&local_90,local_c0,0);
  uVar3 = local_b4 & ~(uint)uVar18;
  puVar6 = *(uint **)(lVar5 + 0x5d8);
  if (*(uint **)(lVar5 + 0x5d8) == (uint *)0x0) {
    puVar6 = local_a0;
  }
  iVar2 = *(int *)(lVar5 + 0x5e0);
  iVar11 = (int)uVar12;
  lVar4 = (longlong)iVar11;
  uVar10 = puVar6[lVar4] & uVar3;
  if (uVar10 == 0) {
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    iVar14 = iVar14 + 0x20;
    iVar8 = iVar7;
    if (iVar7 < iVar11) {
      iVar8 = iVar11;
    }
    if (iVar11 < iVar7) {
      lVar16 = 0;
      do {
        uVar10 = puVar6[lVar4 + lVar16 + 1];
        if (uVar10 != 0) {
          uVar12 = (ulonglong)(iVar11 + (int)lVar16 + 1);
          uVar3 = 0xffffffff;
          goto LAB_140360d35;
        }
        iVar14 = iVar14 + 0x20;
        lVar16 = lVar16 + 1;
      } while (iVar8 - lVar4 != lVar16);
      uVar3 = 0xffffffff;
      iVar11 = iVar8;
    }
    uVar12 = (ulonglong)(iVar11 + 1);
    iVar11 = iVar2;
  }
  else {
LAB_140360d35:
    uVar18 = (ulonglong)(-uVar10 & uVar10);
    uVar9 = uVar18 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar11 = (iVar14 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 == iVar13) goto LAB_140360a08;
  goto LAB_140360bcc;
}



// FUNCTION 1403610b6 FUN_1403610b6 body=2707 status=ok
// SIG undefined FUN_1403610b6(void)

void FUN_1403610b6(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 == (longlong *)0x0) {
LAB_140361a6c:
    lVar8 = 0;
  }
  else {
    uVar6 = FUN_1407ca880();
    lVar7 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar6);
    if (lVar7 == 0) goto LAB_140361a6c;
    uVar6 = FUN_1407ca880();
    lVar8 = FUN_144718840(lVar7,uVar6);
    if (lVar7 == lVar8) goto LAB_140361a6c;
  }
  FUN_1407be368(&local_48,lVar8);
  *(undefined4 *)(param_1 + 0x7f0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x7f4) = local_48._4_4_;
  *(int *)(param_1 + 0x7f8) = (int)uStack_40;
  *(undefined4 *)(param_1 + 0x7fc) = uStack_40._4_4_;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 == (longlong *)0x0) {
LAB_140361a73:
    lVar8 = 0;
  }
  else {
    uVar6 = FUN_140b040c0();
    lVar7 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar6);
    if (lVar7 == 0) goto LAB_140361a73;
    uVar6 = FUN_140b040c0();
    lVar8 = FUN_144718840(lVar7,uVar6);
    if (lVar7 == lVar8) goto LAB_140361a73;
  }
  FUN_140361b4a(&local_48,lVar8);
  *(undefined4 *)(param_1 + 0x808) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x80c) = local_48._4_4_;
  *(int *)(param_1 + 0x810) = (int)uStack_40;
  *(undefined4 *)(param_1 + 0x814) = uStack_40._4_4_;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 == (longlong *)0x0) {
LAB_140361a7a:
    lVar8 = 0;
  }
  else {
    if (DAT_14cb223d8 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147f29feb;
      local_70 = FUN_1464384fe;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    lVar7 = (**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb223d8);
    if (lVar7 == 0) goto LAB_140361a7a;
    if (DAT_14cb223d8 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_147f29feb;
      local_70 = FUN_1464384fe;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    lVar8 = FUN_144718840(lVar7,DAT_14cb223d8);
    if (lVar7 == lVar8) goto LAB_140361a7a;
  }
  FUN_140919964(&local_48,lVar8);
  *(undefined4 *)(param_1 + 0x818) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x81c) = local_48._4_4_;
  *(int *)(param_1 + 0x820) = (int)uStack_40;
  *(undefined4 *)(param_1 + 0x824) = uStack_40._4_4_;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 == (longlong *)0x0) {
LAB_140361a81:
    lVar8 = 0;
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148630fef;
      local_70 = FUN_1464b6a91;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar7 = (**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb56270);
    if (lVar7 == 0) goto LAB_140361a81;
    if (DAT_14cb56270 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148630fef;
      local_70 = FUN_1464b6a91;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar8 = FUN_144718840(lVar7,DAT_14cb56270);
    if (lVar7 == lVar8) goto LAB_140361a81;
  }
  FUN_14069eee6(&local_48,lVar8);
  *(undefined4 *)(param_1 + 0x828) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x82c) = local_48._4_4_;
  *(int *)(param_1 + 0x830) = (int)uStack_40;
  *(undefined4 *)(param_1 + 0x834) = uStack_40._4_4_;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 == (longlong *)0x0) {
LAB_140361a91:
    uStack_40 = (longlong *)0x0;
    plVar10 = (longlong *)0x0;
LAB_140361a93:
    local_48 = (code *)0x0;
    iVar4 = 0;
  }
  else {
    if (DAT_14cb22240 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464376fa;
      local_68 = &LAB_147f28935;
      local_70 = FUN_146437c39;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb22240);
    if (plVar9 == (longlong *)0x0) goto LAB_140361a91;
    if (DAT_14cb22240 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464376fa;
      local_68 = &LAB_147f28935;
      local_70 = FUN_146437c39;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb22240);
    if (plVar9 == plVar10) goto LAB_140361a91;
    local_48 = (code *)0x0;
    uStack_40 = (longlong *)0x0;
    if (plVar10 == (longlong *)0x0) goto LAB_140361a91;
    lVar7 = (**(code **)(*plVar10 + 8))(plVar10);
    if (lVar7 == 0) goto LAB_140361a93;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_48 = (code *)CONCAT44(local_48._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar5;
      }
    }
  }
  local_48 = (code *)CONCAT44(iVar4,(undefined4)local_48);
  cVar3 = FUN_14493c216(&local_48,0);
  if (cVar3 == '\0') {
    uStack_40 = plVar10;
  }
  *(code **)(param_1 + 0x838) = local_48;
  *(longlong **)(param_1 + 0x840) = uStack_40;
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 == 0) goto LAB_14036154a;
  if (DAT_14cb5b388 == 0) {
    local_48 = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = (code *)&LAB_146431698;
    local_68 = &LAB_1486775cb;
    local_70 = (code *)&LAB_1464cee35;
    local_78 = L"Game";
    local_80 = 0;
    local_88 = 0x10000005;
    local_90 = 0x10;
    local_98 = 0x3a20;
    local_60 = &local_48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) goto LAB_14036154a;
  }
  if ((((DAT_14cb5b388 == 0) || (lVar8 = *(longlong *)(lVar7 + 0x10), lVar8 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
      DAT_14cb5b388 + 0x30)) goto LAB_14036154a;
  lVar8 = *(longlong *)(lVar7 + 0x11e8);
  if (lVar8 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar8);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x800) = lVar8;
  lVar7 = *(longlong *)(lVar7 + 0x858);
  if ((lVar7 == 0) || ((bVar2 & 1) == 0)) {
    *(longlong *)(param_1 + 0x848) = lVar7;
    if (lVar7 == 0) goto LAB_14036154a;
  }
  else {
    FUN_1456cec3c(lVar7);
    *(longlong *)(param_1 + 0x848) = lVar7;
  }
  local_48 = (code *)0x0;
  uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
  FUN_1446efa72(&local_48,0,3,0x10);
  uStack_40 = (longlong *)CONCAT44(uStack_40._4_4_,3);
  *(undefined ***)local_48 = &PTR_LAB_14ab9f910;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_48 + 0x10) = lVar11;
  *(undefined ***)local_48 = &PTR_FUN_14b3fb550;
  *(longlong *)(local_48 + 0x18) = param_1;
  *(undefined1 **)(local_48 + 0x20) = &LAB_14098d974;
  iVar4 = 3;
  if (local_48 == (code *)0x0) {
LAB_140361ada:
    if (iVar4 != 0) {
      if (local_48 == (code *)0x0) goto LAB_14036154a;
      (*(code *)**(undefined8 **)local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_140361534;
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)local_48 + 0x30))();
    if (cVar3 == '\0') {
      iVar4 = (int)uStack_40;
      goto LAB_140361ada;
    }
    plVar9 = (longlong *)(lVar7 + 0x1258);
    if (*(int *)(lVar7 + 0x126c) < 1) {
      iVar4 = *(int *)(lVar7 + 0x1260);
      iVar5 = *(int *)(lVar7 + 0x1268) + -1;
      *(int *)(lVar7 + 0x1268) = iVar5;
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
        if (0 < iVar4) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar10 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                plVar10 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar10 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar9,iVar12);
              FUN_14005b248(plVar9);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x1260);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(lVar7 + 0x1268) = iVar12;
        if ((iVar12 < iVar4) && (*(int *)(lVar7 + 0x1264) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_40 != 0) && (local_48 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_48 + 0x38))(local_48,local_38);
    }
    iVar4 = *(int *)(lVar7 + 0x1260);
    *(uint *)(lVar7 + 0x1260) = iVar4 + 1U;
    if (*(uint *)(lVar7 + 0x1264) < iVar4 + 1U) {
      FUN_1447a71f6(plVar9,iVar4);
    }
    lVar7 = *plVar9;
    lVar8 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(code **)(lVar7 + lVar8) = local_48;
    local_48 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar8) = (int)uStack_40;
LAB_140361534:
    uStack_40 = (longlong *)((ulonglong)uStack_40 & 0xffffffff00000000);
  }
  if (local_48 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14036154a:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140361b4a FUN_140361b4a body=204 status=ok
// SIG undefined FUN_140361b4a(void)

uint * FUN_140361b4a(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140361c16 FUN_140361c16 body=3008 status=ok
// SIG undefined FUN_140361c16(void)

void FUN_140361c16(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  code *local_78;
  code *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == (longlong *)0x0) goto LAB_140362287;
  lVar9 = (**(code **)(*param_2 + 8))(param_2);
  lVar10 = FUN_1403627d8();
  if (((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
      lVar10 + 0x30)) goto LAB_140362287;
  FUN_1408f9d2c(param_1,param_2,param_3);
  if (param_3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    FUN_1407eff2c(&local_60,0);
    *(undefined4 *)(param_1 + 0x160) = (undefined4)local_60;
    *(undefined4 *)(param_1 + 0x164) = local_60._4_4_;
    *(int *)(param_1 + 0x168) = (int)uStack_58;
    *(undefined4 *)(param_1 + 0x16c) = uStack_58._4_4_;
    goto LAB_140362287;
  }
  if (DAT_14cac9ca8 == 0) {
    local_80 = &local_60;
    local_60 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1478c0a72;
    local_90 = (code *)&LAB_1417b2375;
    local_98 = L"Engine";
    local_a0 = 0x1000000000;
    local_a8 = 0x10000004;
    local_b0 = 8;
    local_b8 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((*(int *)(param_3[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
      != DAT_14cac9ca8 + 0x30)) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    iVar8 = 0;
  }
  else {
    uVar4 = *(uint *)((longlong)param_3 + 0xc);
    *(uint *)(param_1 + 0x158) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar9 + 0x10) = iVar18;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar8 = iVar18;
      }
    }
  }
  *(int *)(param_1 + 0x15c) = iVar8;
  uVar11 = FUN_1407725cc();
  uVar11 = FUN_144718840(param_3,uVar11);
  FUN_1407eff2c(&local_60,uVar11);
  *(undefined4 *)(param_1 + 0x160) = (undefined4)local_60;
  *(undefined4 *)(param_1 + 0x164) = local_60._4_4_;
  *(int *)(param_1 + 0x168) = (int)uStack_58;
  *(undefined4 *)(param_1 + 0x16c) = uStack_58._4_4_;
  uVar11 = FUN_140566488();
  plVar12 = (longlong *)FUN_144718840(param_3,uVar11);
  if (plVar12 == (longlong *)0x0) goto LAB_140362287;
  if (*(int *)(param_1 + 0x15c) == 0) {
LAB_140362404:
    lVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x158);
    lVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x15c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_140362404;
      lVar9 = *plVar13;
    }
  }
  cVar3 = *(char *)(lVar9 + 0x178);
  *(undefined2 *)(param_1 + 0x180) = 0x100;
  FUN_1448a8284(param_1 + 0x130);
  if (cVar3 == '\x03') {
    FUN_1400ba7ce(param_1 + 0x148);
    if ((((*(longlong **)(param_1 + 0x168) != (longlong *)0x0) && (*(int *)(param_1 + 0x164) != 0))
        && (uVar4 = *(uint *)(param_1 + 0x160), -1 < (int)uVar4)) &&
       ((((int)uVar4 < DAT_14c9647dc &&
         (lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar9 != 0)) &&
        ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x164) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))) {
      (**(code **)(**(longlong **)(param_1 + 0x168) + 0x18))();
    }
  }
  FUN_14106d110(param_1);
  lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12);
  if (lVar9 == 0) {
LAB_1403626f2:
    *(undefined4 *)(param_1 + 0x170) = 0;
    iVar8 = 0;
  }
  else {
    lVar9 = FUN_140849bbe(lVar9);
    if (lVar9 == 0) goto LAB_1403626f2;
    uVar4 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x170) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar18 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar18);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar9 + 0x10) = iVar18;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar8 = iVar18;
      }
    }
  }
  *(int *)(param_1 + 0x174) = iVar8;
  if (*(int *)(param_1 + 0x78) < 1) goto LAB_140362287;
  if (DAT_14cb1c498 == 0) {
    local_60 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_1427b09ee;
    local_88 = &LAB_147e36893;
    local_90 = FUN_146420564;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10004001;
    local_b0 = 8;
    local_b8 = 0x28;
    local_80 = &local_60;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
  }
  plVar12 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14cb1c498);
  if (plVar12 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_60 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_147e36893;
      local_90 = FUN_146420564;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      local_80 = &local_60;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    plVar13 = (longlong *)FUN_144718840(plVar12,DAT_14cb1c498);
    if ((plVar12 != plVar13) && (plVar13 != (longlong *)0x0)) {
      lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
      local_60 = (code *)0x0;
      uStack_58 = (undefined8 **)((ulonglong)uStack_58 & 0xffffffff00000000);
      FUN_1446efa72(&local_60,0,3,0x10);
      uStack_58 = (undefined8 **)CONCAT44(uStack_58._4_4_,3);
      plVar12 = *(longlong **)(param_1 + 0x10);
      if (plVar12 == (longlong *)0x0) {
LAB_14036202c:
        *(undefined ***)local_60 = &PTR_LAB_14aba0be0;
        LOCK();
        UNLOCK();
        lVar19 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar19 == 0) {
          LOCK();
          UNLOCK();
          lVar19 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        *(longlong *)((longlong)local_60 + 0x10) = lVar19;
        *(undefined ***)local_60 = &PTR_FUN_14b3eeef0;
        *(longlong *)((longlong)local_60 + 0x18) = 0;
        *(longlong *)((longlong)local_60 + 0x20) = 0;
        *(code **)((longlong)local_60 + 0x28) = FUN_143cbb02c;
      }
      else {
        iVar8 = (int)plVar12[1];
        do {
          if (iVar8 == 0) goto LAB_14036202c;
          LOCK();
          iVar18 = (int)plVar12[1];
          bVar20 = iVar8 == iVar18;
          if (bVar20) {
            *(int *)(plVar12 + 1) = iVar8 + 1;
            iVar18 = iVar8;
          }
          iVar8 = iVar18;
          UNLOCK();
        } while (!bVar20);
        lVar10 = *(longlong *)(param_1 + 8);
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *(undefined ***)local_60 = &PTR_LAB_14aba0be0;
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 1;
        lVar19 = DAT_14c758608 + 1;
        if (lVar17 == 0) {
          LOCK();
          UNLOCK();
          lVar17 = DAT_14c758608 + 2;
          lVar19 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar19;
        *(longlong *)((longlong)local_60 + 0x10) = lVar17;
        *(undefined ***)local_60 = &PTR_FUN_14b3eeef0;
        *(longlong *)((longlong)local_60 + 0x18) = lVar10;
        *(longlong **)((longlong)local_60 + 0x20) = plVar12;
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        *(code **)((longlong)local_60 + 0x28) = FUN_143cbb02c;
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        LOCK();
        plVar5 = plVar12 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_60 == (code *)0x0 || (int)uStack_58 == 0) {
LAB_140362093:
        if ((int)uStack_58 == 0) {
          uVar11 = 0;
          goto LAB_1403620d2;
        }
        if (local_60 != (code *)0x0) {
          uVar11 = 0;
          (*(code *)**(undefined8 **)local_60)(local_60,0);
          FUN_1446efa72(&local_60,0,0,0x10);
          goto LAB_1403620c2;
        }
        uVar11 = 0;
      }
      else {
        cVar7 = (**(code **)(*(longlong *)local_60 + 0x30))();
        if (cVar7 == '\0') {
          goto LAB_140362093;
        }
        plVar12 = (longlong *)(lVar9 + 0x48);
        if (*(int *)(lVar9 + 0x5c) < 1) {
          iVar8 = *(int *)(lVar9 + 0x50);
          iVar18 = *(int *)(lVar9 + 0x58) + -1;
          *(int *)(lVar9 + 0x58) = iVar18;
          if (iVar18 <= iVar8) {
            iVar18 = iVar8;
            if (0 < iVar8) {
              iVar16 = 0;
              do {
                if (((*(int *)(*plVar12 + 8 + (longlong)iVar16 * 0x10) == 0) ||
                    (plVar5 = *(longlong **)(*plVar12 + (longlong)iVar16 * 0x10),
                    plVar5 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar5 + 0x28))(), cVar7 != '\0')) {
                  FUN_14005b288(plVar12,iVar16);
                  FUN_14005b248(plVar12);
                }
                else {
                  iVar16 = iVar16 + 1;
                }
                iVar18 = *(int *)(lVar9 + 0x50);
              } while (iVar16 < iVar18);
            }
            iVar16 = 2;
            if (2 < iVar18 * 2) {
              iVar16 = iVar18 * 2;
            }
            *(int *)(lVar9 + 0x58) = iVar16;
            if ((iVar16 < iVar8) && (*(int *)(lVar9 + 0x54) != iVar18)) {
              FUN_14045812c(plVar12);
            }
          }
        }
        if (local_60 == (code *)0x0 || (int)uStack_58 == 0) {
          uVar11 = 0;
        }
        else {
          (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
          uVar11 = local_50;
        }
        iVar8 = *(int *)(lVar9 + 0x50);
        *(uint *)(lVar9 + 0x50) = iVar8 + 1U;
        if (*(uint *)(lVar9 + 0x54) < iVar8 + 1U) {
          FUN_1447a71f6(plVar12,iVar8);
        }
        lVar9 = *plVar12;
        lVar10 = (longlong)iVar8 * 0x10;
        *(undefined8 *)(lVar9 + lVar10) = 0;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        *(code **)(lVar9 + lVar10) = local_60;
        local_60 = (code *)0x0;
        *(int *)(lVar9 + 8 + lVar10) = (int)uStack_58;
LAB_1403620c2:
        uStack_58 = (undefined8 **)((ulonglong)uStack_58 & 0xffffffff00000000);
LAB_1403620d2:
        if (local_60 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(undefined8 *)(param_1 + 0x178) = uVar11;
      lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
      local_50 = *(undefined8 *)(lVar9 + 0x140);
      local_68 = &local_50;
      uStack_58 = &local_68;
      local_60 = (code *)&LAB_143cbc926;
      FUN_1400b7536(param_1);
    }
  }
  uVar11 = (**(code **)(*param_3 + 0x180))(param_3);
  FUN_140362812(&local_60,uVar11);
  ppuVar15 = uStack_58;
  if (uStack_58 != (undefined8 **)0x0) {
    iVar8 = *(int *)(uStack_58 + 1);
    do {
      if (iVar8 == 0) {
        ppuVar15 = (undefined8 **)0x0;
        break;
      }
      LOCK();
      iVar18 = *(int *)(ppuVar15 + 1);
      bVar20 = iVar8 == iVar18;
      if (bVar20) {
        *(int *)(ppuVar15 + 1) = iVar8 + 1;
        iVar18 = iVar8;
      }
      iVar8 = iVar18;
      UNLOCK();
    } while (!bVar20);
    ppuVar2 = uStack_58;
    LOCK();
    piVar1 = (int *)((longlong)uStack_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (*(code *)(*ppuVar2)[2])();
    }
    pcVar6 = local_60;
    if (ppuVar15 != (undefined8 **)0x0) {
      if (local_60 != (code *)0x0) {
        uVar11 = FUN_1407725cc();
        lVar9 = FUN_144718840(param_3,uVar11);
        if (lVar9 != 0) {
          uVar4 = *(uint *)((longlong)param_3 + 0xc);
          if ((int)uVar4 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar8 = *(int *)(lVar10 + 0x10);
          if (iVar8 == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar18 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar8 = *(int *)(lVar10 + 0x10);
            bVar20 = iVar8 == 0;
            if (bVar20) {
              *(int *)(lVar10 + 0x10) = iVar18;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar20) {
              iVar8 = iVar18;
            }
            if (iVar8 == 0) goto LAB_14036226f;
          }
          if (((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
             ((lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 != 0
              && (((*(int *)(lVar10 + 0x10) == iVar8 && ((*(uint *)(lVar10 + 8) & 0x10200000) == 0))
                  && (pcVar6[0x68] == (code)0x0)))))) {
            lVar10 = *(longlong *)(pcVar6 + 0x58);
            iVar18 = *(int *)(pcVar6 + 0x60);
            lVar19 = (longlong)iVar18;
            if (lVar19 != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)(lVar10 + 8 + uVar14) == lVar9) {
                  if ((int)(~uVar14 >> 4) != 0) goto LAB_14036226f;
                  break;
                }
                uVar14 = uVar14 + 0x10;
              } while (lVar19 << 4 != uVar14);
            }
            *(uint *)(pcVar6 + 0x60) = iVar18 + 1U;
            if (*(uint *)(pcVar6 + 100) < iVar18 + 1U) {
              FUN_14570370e(pcVar6 + 0x58,iVar18);
              lVar10 = *(longlong *)(pcVar6 + 0x58);
            }
            lVar19 = lVar19 * 0x10;
            *(uint *)(lVar10 + lVar19) = uVar4;
            *(int *)(lVar10 + 4 + lVar19) = iVar8;
            *(longlong *)(lVar10 + 8 + lVar19) = lVar9;
          }
        }
      }
LAB_14036226f:
      LOCK();
      ppuVar2 = ppuVar15 + 1;
      *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
      UNLOCK();
      if (*(int *)ppuVar2 == 0) {
        (*(code *)**ppuVar15)(ppuVar15);
        LOCK();
        piVar1 = (int *)((longlong)ppuVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppuVar15)[2])(ppuVar15);
        }
      }
    }
  }
  if (cVar3 != '\x03') {
    FUN_1408fd4ce(param_1);
  }
LAB_140362287:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403627d8 FUN_1403627d8 body=57 status=ok
// SIG undefined FUN_1403627d8(void)

void FUN_1403627d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62d18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62d18 = FUN_140002ddd(FUN_1464fad16,uVar1,L"GbxRotationSettings");
  }
  return;
}



// FUNCTION 140362812 FUN_140362812 body=310 status=ok
// SIG undefined FUN_140362812(void)

longlong * FUN_140362812(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb71da8;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14036294a FUN_14036294a body=106 status=ok
// SIG undefined FUN_14036294a(void)

bool FUN_14036294a(longlong *param_1,byte param_2,undefined4 param_3)

{
  longlong lVar1;
  DWORD DVar2;
  bool bVar3;
  
  lVar1 = param_1[0x1ec];
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else {
    DVar2 = GetCurrentThreadId();
    bVar3 = DVar2 != *(DWORD *)(lVar1 + 0x20);
    if ((param_2 & bVar3) == 1) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x1ec,1);
      (**(code **)(*param_1 + 0xcd0))(param_1,param_3);
      bVar3 = true;
    }
  }
  return bVar3;
}



// FUNCTION 1403629b4 FUN_1403629b4 body=1870 status=ok
// SIG undefined FUN_1403629b4(void)

longlong * FUN_1403629b4(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_1403631dc(&local_78,param_1 + 0x3930);
    if (local_70 == 0) {
      uVar8 = FUN_14043db3a();
      local_70 = FUN_14477b664(uVar8);
    }
    if (local_68 == 0) {
      if ((((local_70 != 0) && (local_78 != 0)) &&
          (plVar11 = *(longlong **)(local_70 + 0xb8), plVar11 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 != '\0')) {
        uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
        local_68 = FUN_144aff482(uVar8,&local_78);
        if (local_68 != 0) goto LAB_140362afb;
      }
LAB_140363059:
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      goto LAB_140362e01;
    }
LAB_140362afb:
    plVar11 = &local_78;
LAB_140362fd2:
    FUN_14107d9f8(param_2,plVar11);
  }
  else {
    lVar10 = *(longlong *)(param_3 + 0x5d0);
    local_78 = lVar10;
    uVar8 = FUN_14477b664(*(undefined8 *)(param_3 + 0x5d8));
    local_70 = FUN_14477b664(uVar8);
    lVar14 = *(longlong *)(param_3 + 0x5e0);
    local_68 = lVar14;
    if (local_70 == 0) {
      uVar8 = FUN_14043db3a();
      local_70 = FUN_14477b664(uVar8);
    }
    if (lVar14 == 0) {
      local_68 = 0;
      if ((lVar10 != 0) && (local_70 != 0)) {
        plVar11 = *(longlong **)(local_70 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
          local_68 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
          local_68 = FUN_144aff482(uVar8,&local_78);
          lVar10 = local_78;
          if (local_68 != 0) goto LAB_140362aab;
        }
      }
      lVar10 = FUN_14067bab8(param_1);
      if (*(longlong *)(param_1 + 0x11e8) != 0) {
        local_b8 = lVar10;
        FUN_14036351c(param_1,&local_90,*(undefined8 *)(*(longlong *)(param_1 + 0x11e8) + 0x13c8),
                      param_3);
        if (local_78 != local_90) {
          local_68 = 0;
        }
        local_78 = local_90;
        if (local_70 != local_88) {
          local_68 = 0;
        }
        uVar8 = FUN_14477b664();
        local_70 = FUN_14477b664(uVar8);
        local_68 = local_80;
        if (local_70 == 0) {
          uVar8 = FUN_14043db3a();
          local_70 = FUN_14477b664(uVar8);
        }
        if (local_68 != 0) {
LAB_140362f65:
          FUN_1418657ac(param_2,&local_78);
          goto LAB_140362e01;
        }
        local_68 = 0;
        if ((local_78 != 0) && (local_70 != 0)) {
          plVar11 = *(longlong **)(local_70 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
            local_68 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
            local_68 = FUN_144aff482(uVar8,&local_78);
            if (local_68 != 0) goto LAB_140362f65;
          }
        }
      }
      FUN_1403631dc(&local_90,param_1 + 0x3930);
      if (local_88 == 0) {
        uVar8 = FUN_14043db3a();
        local_88 = FUN_14477b664(uVar8);
      }
      if (local_80 != 0) {
LAB_140362fcd:
        plVar11 = &local_90;
        goto LAB_140362fd2;
      }
      if ((local_90 != 0) && (local_88 != 0)) {
        plVar11 = *(longlong **)(local_88 + 0xb8);
        if ((plVar11 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
          local_80 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
          local_80 = FUN_144aff482(uVar8,&local_90);
          if (local_80 != 0) goto LAB_140362fcd;
        }
      }
      if ((longlong)*(int *)(param_3 + 0x5c8) == 0) goto LAB_140363059;
      if (lVar10 != 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        plVar11 = *(longlong **)(param_3 + 0x5c0);
        lVar14 = (longlong)*(int *)(param_3 + 0x5c8) * 0x18;
        do {
          lVar13 = plVar11[1];
          if (lVar13 == 0) {
            uVar8 = FUN_14043db3a();
            lVar13 = FUN_14477b664(uVar8);
            plVar11[1] = lVar13;
          }
          lVar9 = plVar11[2];
          if (lVar9 == 0) {
            if ((lVar13 != 0) && (*plVar11 != 0)) {
              plVar2 = *(longlong **)(lVar13 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                plVar11[2] = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar9 = FUN_144aff482(uVar8,plVar11);
                plVar11[2] = lVar9;
                if (lVar9 != 0) goto LAB_140362c5a;
              }
            }
          }
          else {
LAB_140362c5a:
            cVar4 = FUN_140363104(lVar9,lVar10);
            uVar3 = uStack_a0;
            if (cVar4 != '\0') {
              lVar13 = (longlong)(int)uStack_a0;
              uVar5 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
              if (uStack_a0._4_4_ < uVar5) {
                FUN_1403633a6(&local_a8,uVar3 & 0xffffffff);
              }
              lVar9 = local_a8;
              puVar1 = (undefined8 *)(local_a8 + lVar13 * 0x18);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(local_a8 + 0x10 + lVar13 * 0x18) = 0;
              *(longlong *)(local_a8 + lVar13 * 0x18) = *plVar11;
              uVar8 = FUN_14477b664(plVar11[1]);
              uVar8 = FUN_14477b664(uVar8);
              *(undefined8 *)(lVar9 + 8 + lVar13 * 0x18) = uVar8;
              *(longlong *)(lVar9 + 0x10 + lVar13 * 0x18) = plVar11[2];
            }
          }
          plVar11 = plVar11 + 3;
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != 0);
        iVar6 = (int)uStack_a0;
        if (0 < (int)uStack_a0) {
          iVar12 = (int)uStack_a0 + -1;
          uVar5 = rand();
          iVar6 = (int)((float)iVar6 * ((float)(uVar5 & 0x7fff) / 32767.0));
          if (iVar6 < iVar12) {
            iVar12 = iVar6;
          }
          plVar11 = (longlong *)(local_a8 + (longlong)iVar12 * 0x18);
          if (local_78 != *plVar11) {
            local_68 = 0;
          }
          if (local_70 != plVar11[1]) {
            local_68 = 0;
          }
          local_78 = *plVar11;
          uVar8 = FUN_14477b664();
          local_70 = FUN_14477b664(uVar8);
          local_68 = plVar11[2];
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_70 == 0) {
        uVar8 = FUN_14043db3a();
        local_70 = FUN_14477b664(uVar8);
      }
      if (local_68 == 0) {
        if ((local_78 != 0) && (local_70 != 0)) {
          plVar11 = *(longlong **)(local_70 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
            local_68 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
            local_68 = FUN_144aff482(uVar8,&local_78);
            if (local_68 != 0) goto LAB_140362dd8;
          }
        }
        iVar6 = *(int *)(param_3 + 0x5c8);
        if (iVar6 < 1) {
          lVar10 = 0;
        }
        else {
          uVar5 = rand();
          iVar7 = (int)((float)iVar6 * ((float)(uVar5 & 0x7fff) / 32767.0));
          iVar12 = iVar6 + -1;
          if (iVar7 < iVar6 + -1) {
            iVar12 = iVar7;
          }
          lVar10 = (longlong)iVar12;
        }
        plVar11 = (longlong *)(*(longlong *)(param_3 + 0x5c0) + lVar10 * 0x18);
        if (local_78 != *plVar11) {
          local_68 = 0;
        }
        if (local_70 != plVar11[1]) {
          local_68 = 0;
        }
        local_78 = *plVar11;
        uVar8 = FUN_14477b664();
        local_70 = FUN_14477b664(uVar8);
        local_68 = plVar11[2];
      }
LAB_140362dd8:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = local_78;
    }
    else {
LAB_140362aab:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = lVar10;
    }
    uVar8 = FUN_14477b664(local_70);
    lVar10 = FUN_14477b664(uVar8);
    param_2[1] = lVar10;
    param_2[2] = local_68;
  }
LAB_140362e01:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140363104 FUN_140363104 body=68 status=ok
// SIG undefined FUN_140363104(void)

bool FUN_140363104(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140363148();
  bVar2 = true;
  if (((lVar1 != param_2) && (param_2 != 0)) && (lVar1 != 0)) {
    do {
      param_2 = FUN_1403155a4(param_2);
      bVar2 = param_2 != 0;
    } while (param_2 != lVar1 && bVar2);
  }
  return bVar2;
}



// FUNCTION 140363148 FUN_140363148 body=148 status=ok
// SIG undefined FUN_140363148(void)

void FUN_140363148(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 == 0) {
    uVar3 = FUN_141030812();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x80) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x78));
    }
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1403631dc FUN_1403631dc body=398 status=ok
// SIG undefined FUN_1403631dc(void)

undefined8 * FUN_1403631dc(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar9 = &DAT_14caa8558;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18);
  }
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_1403de7ba(local_98,puVar9);
  lVar6 = *(longlong *)(param_2 + 0x40);
  if (lVar6 != 0) {
    local_78 = FUN_143c9934a;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b3e7070;
    local_50 = param_1;
    local_48 = local_98;
    uVar4 = FUN_14036336c();
    plVar5 = (longlong *)FUN_1403566f4(lVar6,uVar4);
    if ((longlong)(int)plVar5[1] == 0) {
      pppuVar8 = (undefined ***)0x0;
    }
    else {
      plVar11 = (longlong *)*plVar5;
      plVar5 = plVar11 + (int)plVar5[1];
      do {
        plVar1 = (longlong *)*plVar11;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
          lVar7 = FUN_14036336c();
          pcVar2 = local_78;
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            pppuVar8 = local_68;
            if (local_68 == (undefined ***)0x0) {
              pppuVar8 = &local_58;
            }
            uVar4 = (*(code *)(*pppuVar8)[1])();
            cVar3 = (*pcVar2)(uVar4,plVar1);
            if (cVar3 == '\0') break;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar5);
      pppuVar8 = local_68;
      if (local_78 == (code *)0x0) goto LAB_140363317;
    }
    pppuVar10 = &local_58;
    if (pppuVar8 != (undefined ***)0x0) {
      pppuVar10 = pppuVar8;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
LAB_140363317:
  if (local_98[2] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14036336c FUN_14036336c body=57 status=ok
// SIG undefined FUN_14036336c(void)

void FUN_14036336c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58658 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58658 = FUN_140002ddd(FUN_1464c1be2,uVar1,L"GbxActorPartDef_DialogName");
  }
  return;
}



// FUNCTION 1403633a6 FUN_1403633a6 body=373 status=ok
// SIG undefined FUN_1403633a6(void)

void FUN_1403633a6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14036342f;
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
LAB_14036342f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14036351c FUN_14036351c body=868 status=ok
// SIG undefined FUN_14036351c(void)

undefined8 *
FUN_14036351c(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 != (longlong *)0x0) && (param_4 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x168);
    if (lVar2 != 0) {
      lVar4 = FUN_140363886();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (lVar2 = *(longlong *)(lVar2 + 0x3a0), lVar2 != 0)) {
        lVar4 = *(longlong *)(lVar2 + 0x908);
        if (lVar4 == 0) {
          uVar5 = FUN_14043db3a();
          lVar4 = FUN_14477b664(uVar5);
          *(longlong *)(lVar2 + 0x908) = lVar4;
        }
        if (*(longlong *)(lVar2 + 0x910) != 0) goto LAB_140363707;
        if ((*(longlong *)(lVar2 + 0x900) != 0) && (lVar4 != 0)) {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
            *(undefined8 *)(lVar2 + 0x910) = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0x900));
            *(longlong *)(lVar2 + 0x910) = lVar4;
            if (lVar4 != 0) goto LAB_140363707;
          }
        }
      }
    }
    if (param_5 == 0) {
      param_5 = FUN_14067bab8(param_1);
    }
    plVar1 = (longlong *)(param_4 + 0x5e8);
    lVar2 = param_4 + 0x5f8;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    iVar8 = 0;
    local_60 = lVar2;
    if (*(int *)(param_4 + 0x610) != 0) {
      FUN_1449c0562(&local_68);
      iVar8 = *(int *)(param_4 + 0x610);
    }
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_90 = plVar1;
    if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
      do {
        lVar4 = (longlong)iStack_74 * 0x28 + *local_90;
        cVar3 = (**(code **)(*param_3 + 0x18))(param_3,lVar4);
        if (cVar3 != '\0') {
          lVar6 = *(longlong *)(lVar4 + 0x10);
          if (lVar6 == 0) {
            uVar5 = FUN_14043db3a();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(lVar4 + 0x10) = lVar6;
          }
          local_a0 = (longlong *)(lVar4 + 8);
          lVar7 = *(longlong *)(lVar4 + 0x18);
          if (lVar7 == 0) {
            if ((lVar6 != 0) && (*local_a0 != 0)) {
              local_98 = *(longlong **)(lVar6 + 0xb8);
              if ((local_98 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*local_98 + 0x108))(), cVar3 == '\0')) {
                *(undefined8 *)(lVar4 + 0x18) = 0;
              }
              else {
                uVar5 = (**(code **)(*local_98 + 0x110))();
                lVar7 = FUN_144aff482(uVar5,local_a0);
                *(longlong *)(lVar4 + 0x18) = lVar7;
                if (lVar7 != 0) goto LAB_1403637dc;
              }
            }
          }
          else {
LAB_1403637dc:
            cVar3 = FUN_140363104(lVar7,param_5);
            if (cVar3 != '\0') {
              FUN_14107d9f8(param_2,local_a0);
              goto LAB_140363645;
            }
          }
        }
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (((iStack_74 != iVar8) || (local_80 != lVar2)) || (local_90 != plVar1));
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
LAB_140363645:
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
LAB_140363707:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 140363886 FUN_140363886 body=228 status=ok
// SIG undefined FUN_140363886(void)

longlong FUN_140363886(void)

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
  if (DAT_14cb58ef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a74308;
    local_38 = &LAB_14865a937;
    local_40 = &LAB_1464c4b5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x440;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAINode",&DAT_14cb58ef8,FUN_1464c4b34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58ef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14036396c FUN_14036396c body=338 status=ok
// SIG undefined FUN_14036396c(void)

undefined4 *
FUN_14036396c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1403677da(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140363ac0(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0xc) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145703794(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140363ac0 FUN_140363ac0 body=145 status=ok
// SIG undefined FUN_140363ac0(void)

void FUN_140363ac0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1470d9dd8(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140363ae4;
    }
  }
  uVar1 = 0;
LAB_140363ae4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140363b52 FUN_140363b52 body=240 status=ok
// SIG undefined FUN_140363b52(void)

void FUN_140363b52(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar13 = 0;
    bVar6 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    uVar10 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      uVar7 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar1) {
        uVar7 = uVar1;
      }
      lVar4 = uVar9 * 0x10;
      plVar8 = (longlong *)(lVar2 + 0x18 + lVar4);
      uVar11 = uVar10;
      do {
        uVar9 = uVar9 + 1;
        uVar12 = uVar7;
        if (lVar5 <= (longlong)uVar9) break;
        lVar3 = *plVar8;
        uVar11 = uVar11 + 1;
        plVar8 = plVar8 + 2;
        uVar12 = uVar11;
      } while (bVar6 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar6 == false) {
        if (uVar13 != uVar10) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)(int)(uVar12 - uVar10) << 4);
        }
        uVar13 = uVar13 + (uVar12 - uVar10);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar9 < lVar5);
    *(uint *)(param_1 + 1) = uVar13;
  }
  return;
}



// FUNCTION 140363c42 FUN_140363c42 body=480 status=ok
// SIG undefined FUN_140363c42(void)

undefined8 FUN_140363c42(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb20e58 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f14d13;
      local_50 = FUN_1464313b0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb20e58);
    if (lVar1 != 0) {
      if (DAT_14cb20e58 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f14d13;
        local_50 = FUN_1464313b0;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb20e58);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140363e36 FUN_140363e36 body=5747 status=ok
// SIG undefined FUN_140363e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140363e36(longlong param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong *plVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined8 *puVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  int *local_100;
  code *local_f8;
  code *local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int local_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  code *local_68;
  undefined4 local_60;
  longlong *local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_a8 = *param_3;
  iStack_a4 = param_3[1];
  iStack_a0 = param_3[2];
  iStack_9c = param_3[3];
  local_98 = param_3[4];
  plVar20 = (longlong *)FUN_14041cc7c();
  if (plVar20 == (longlong *)0x0) {
    local_d8 = *param_3;
    iStack_d4 = param_3[1];
    iStack_d0 = param_3[2];
    iStack_cc = param_3[3];
    local_c8 = param_3[4];
    if (((local_d8 == -1) && (cVar17 = FUN_14007c268(&iStack_d4,&DAT_14ac8da04), cVar17 != '\0')) &&
       (cVar17 = FUN_14007c310(&iStack_cc,&DAT_14ac8da0c), cVar17 != '\0')) goto LAB_140364692;
    piVar2 = (int *)(param_1 + 0xd08);
    cVar17 = FUN_140a7133a(piVar2);
    if (cVar17 == '\0') {
      uVar24 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
      FUN_1403679b6(&local_58,uVar24);
      plVar20 = (longlong *)CONCAT44(uStack_4c,local_50);
      if (plVar20 != (longlong *)0x0) {
        iVar29 = (int)plVar20[1];
        do {
          if (iVar29 == 0) {
            plVar20 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar18 = (int)plVar20[1];
          bVar36 = iVar29 == iVar18;
          if (bVar36) {
            *(int *)(plVar20 + 1) = iVar29 + 1;
            iVar18 = iVar29;
          }
          iVar29 = iVar18;
          UNLOCK();
        } while (!bVar36);
        LOCK();
        piVar1 = (int *)((longlong)CONCAT44(uStack_4c,local_50) + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
        }
        if (plVar20 != (longlong *)0x0) {
          if ((local_58 != (longlong *)0x0) && (lVar32 = FUN_141136cb6(), lVar32 != 0)) {
            iVar29 = *(int *)(lVar32 + 0x834);
            uVar9 = *(undefined4 *)(lVar32 + 0x838);
            uVar10 = *(undefined4 *)(lVar32 + 0x83c);
            uVar11 = *(undefined4 *)(lVar32 + 0x840);
            *(undefined4 *)(param_1 + 0xd18) = *(undefined4 *)(lVar32 + 0x844);
            *piVar2 = iVar29;
            *(undefined4 *)(param_1 + 0xd0c) = uVar9;
            *(undefined4 *)(param_1 + 0xd10) = uVar10;
            *(undefined4 *)(param_1 + 0xd14) = uVar11;
          }
          LOCK();
          plVar21 = plVar20 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
      }
    }
    local_88 = *piVar2;
    uStack_84 = *(undefined4 *)(param_1 + 0xd0c);
    uStack_7c = *(undefined4 *)(param_1 + 0xd14);
    uStack_80 = (undefined2)*(undefined4 *)(param_1 + 0xd10);
    uStack_7e = (undefined2)((uint)*(undefined4 *)(param_1 + 0xd10) >> 0x10);
    local_78 = *(undefined4 *)(param_1 + 0xd18);
    if (((local_d8 == local_88) && (cVar17 = FUN_14007c268(&iStack_d4,&uStack_84), cVar17 != '\0'))
       && (cVar17 = FUN_14007c310(&iStack_cc,&uStack_7c), cVar17 != '\0')) goto LAB_140364692;
    lVar32 = param_1 + 0x48;
    if (*(int *)(param_1 + 0xc74) == 0) {
      iVar29 = *(int *)(param_1 + 0xc50);
      *(int *)(param_1 + 0xc50) = iVar29 + 1;
      if (*(int *)(param_1 + 0xc54) == iVar29) {
        FUN_1457dfe56(lVar32,iVar29);
      }
      lVar33 = (longlong)iVar29;
      iVar18 = FUN_1407c4842(param_1 + 0xc58,1);
      lVar28 = *(longlong *)(param_1 + 0xc60);
      if (*(longlong *)(param_1 + 0xc60) == 0) {
        lVar28 = param_1 + 0xc58;
      }
      iVar27 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar27 = iVar18;
      }
      bVar8 = (byte)iVar18 & 0x1f;
      puVar3 = (uint *)(lVar28 + (longlong)(iVar27 >> 5) * 4);
      *puVar3 = *puVar3 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    }
    else {
      lVar28 = *(longlong *)(param_1 + 0xc48);
      if (*(longlong *)(param_1 + 0xc48) == 0) {
        lVar28 = lVar32;
      }
      iVar29 = *(int *)(param_1 + 0xc70);
      lVar33 = (longlong)iVar29;
      iVar18 = *(int *)(lVar28 + 4 + lVar33 * 0x30);
      *(int *)(param_1 + 0xc70) = iVar18;
      iVar27 = *(int *)(param_1 + 0xc74) + -1;
      *(int *)(param_1 + 0xc74) = iVar27;
      if (iVar27 != 0) {
        *(undefined4 *)(lVar28 + (longlong)iVar18 * 0x30) = 0xffffffff;
      }
    }
    lVar28 = param_1 + 0xc58;
    if (*(longlong *)(param_1 + 0xc60) != 0) {
      lVar28 = *(longlong *)(param_1 + 0xc60);
    }
    iVar18 = iVar29 + 0x1f;
    if (-1 < iVar29) {
      iVar18 = iVar29;
    }
    puVar3 = (uint *)(lVar28 + (longlong)(iVar18 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)iVar29 & 0x1f);
    lVar28 = *(longlong *)(param_1 + 0xc48);
    if (*(longlong *)(param_1 + 0xc48) == 0) {
      lVar28 = lVar32;
    }
    lVar33 = lVar33 * 0x30;
    puVar4 = (undefined4 *)(lVar28 + lVar33);
    *(undefined8 *)(lVar28 + lVar33) = CONCAT44(iStack_d4,local_d8);
    ((undefined8 *)(lVar28 + lVar33))[1] = CONCAT44(iStack_cc,iStack_d0);
    *(int *)(lVar28 + 0x10 + lVar33) = local_c8;
    puVar34 = (undefined8 *)(lVar28 + 0x18 + lVar33);
    *puVar34 = 0;
    puVar34[1] = 0;
    *(undefined4 *)(lVar28 + 0x28 + lVar33) = 0xffffffff;
    uVar30 = *(uint *)(lVar28 + 8 + lVar33) ^ *(uint *)(lVar28 + 4 + lVar33);
    uVar19 = uVar30 >> 0xd ^ *(int *)(lVar28 + lVar33) - uVar30;
    uVar25 = uVar19 << 8 ^ (-0x61c88647 - uVar30) - uVar19;
    uVar30 = uVar25 >> 0xd ^ (uVar30 - uVar19) - uVar25;
    uVar31 = uVar30 >> 0xc ^ (uVar19 - uVar25) - uVar30;
    uVar19 = uVar31 << 0x10 ^ (uVar25 - uVar30) - uVar31;
    uVar25 = uVar19 >> 5 ^ (uVar30 - uVar31) - uVar19;
    uVar30 = uVar25 >> 3 ^ (uVar31 - uVar19) - uVar25;
    uVar19 = uVar30 << 10 ^ (uVar19 - uVar25) - uVar30;
    uVar25 = uVar19 >> 0xf ^ uVar25 - (uVar30 + uVar19);
    uVar19 = 1;
    if (*(int *)(param_1 + 0xc50) - *(int *)(param_1 + 0xc74) == 1) {
LAB_1403640f7:
      uVar6 = (ulonglong)(((uVar19 >> 1) - 1) + (uint)(uVar19 >> 1 == 0)) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar27 = 1 << ((byte)lVar28 & 0x1f);
      if ((uint)lVar28 < 5) {
        iVar27 = 0x20;
      }
      if (uVar19 < 4) {
        iVar27 = 0x20;
      }
      iVar18 = iVar29;
      if (((int)uVar19 < 1) || (iVar27 <= *(int *)(param_1 + 0xd00))) {
        uVar25 = *(int *)(param_1 + 0xd00) - 1U & uVar25;
        puVar4[0xb] = uVar25;
        lVar28 = *(longlong *)(param_1 + 0xcf8);
        if (*(longlong *)(param_1 + 0xcf8) == 0) {
          lVar28 = param_1 + 0xc78;
        }
        puVar4[10] = *(undefined4 *)
                      (lVar28 + ((longlong)*(int *)(param_1 + 0xd00) - 1U & (longlong)(int)uVar25) *
                                4);
        lVar28 = *(longlong *)(param_1 + 0xcf8);
        if (*(longlong *)(param_1 + 0xcf8) == 0) {
          lVar28 = param_1 + 0xc78;
        }
        *(int *)(lVar28 + ((longlong)*(int *)(param_1 + 0xd00) - 1U & (longlong)(int)uVar25) * 4) =
             iVar29;
      }
      else {
        *(int *)(param_1 + 0xd00) = iVar27;
        FUN_140374a32(lVar32);
      }
    }
    else {
      iVar18 = FUN_14041cd56(lVar32,uVar25,puVar4);
      if (iVar18 == -1) {
        uVar19 = *(int *)(param_1 + 0xc50) - *(int *)(param_1 + 0xc74);
        goto LAB_1403640f7;
      }
      lVar28 = *(longlong *)(param_1 + 0xc48);
      if (*(longlong *)(param_1 + 0xc48) == 0) {
        lVar28 = lVar32;
      }
      puVar5 = (undefined4 *)(lVar28 + (longlong)iVar18 * 0x30);
      plVar20 = *(longlong **)(lVar28 + 0x20 + (longlong)iVar18 * 0x30);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      uVar13 = puVar4[4];
      uVar14 = puVar4[5];
      uVar15 = puVar4[6];
      uVar16 = puVar4[7];
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar4 + 8);
      puVar5[4] = uVar13;
      puVar5[5] = uVar14;
      puVar5[6] = uVar15;
      puVar5[7] = uVar16;
      *puVar5 = uVar9;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      FUN_147f61d8e(lVar32,iVar29);
    }
    if (*(longlong *)(param_1 + 0xc48) != 0) {
      lVar32 = *(longlong *)(param_1 + 0xc48);
    }
    lVar28 = (longlong)iVar18 * 0x30;
    puVar34 = (undefined8 *)(lVar32 + lVar28 + 0x18);
    plVar21 = (longlong *)FUN_14001cc68(0x210,0x10);
    plVar21[1] = (longlong)&DAT_100000001;
    *plVar21 = (longlong)&PTR_FUN_14ac8d960;
    plVar21[4] = 0;
    plVar21[5] = 0;
    plVar20 = plVar21 + 2;
    *plVar20 = (longlong)&PTR_FUN_14ac8d1d0;
    plVar21[3] = (longlong)&PTR_FUN_14ac8d1f0;
    plVar21[6] = 0;
    plVar21[7] = 0;
    *(undefined4 *)(plVar21 + 8) = 2;
    plVar21[10] = 0;
    plVar21[0xb] = 0;
    *(undefined8 *)((longlong)plVar21 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar21 + 0x4c) = 0;
    *(undefined2 *)(plVar21 + 0xb) = 0xffff;
    plVar21[0xe] = 0;
    plVar21[0xf] = 0;
    plVar21[0xc] = 0;
    plVar21[0xd] = 0;
    *(undefined2 *)(plVar21 + 0xe) = 0xffff;
    *(undefined4 *)((longlong)plVar21 + 0x7f) = 0;
    *(undefined1 *)((longlong)plVar21 + 0x83) = 1;
    plVar21[0x11] = 0;
    *(int *)(plVar21 + 0x14) = local_c8;
    *(int *)(plVar21 + 0x12) = local_d8;
    *(int *)((longlong)plVar21 + 0x94) = iStack_d4;
    *(int *)(plVar21 + 0x13) = iStack_d0;
    *(int *)((longlong)plVar21 + 0x9c) = iStack_cc;
    plVar21[0x19] = 0;
    *(undefined4 *)(plVar21 + 0x1a) = 0;
    plVar21[0x15] = 0;
    plVar21[0x16] = 0;
    *(undefined8 *)((longlong)plVar21 + 0xd4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar21 + 0xdc) = 0;
    plVar21[0x1d] = 0;
    *(undefined4 *)(plVar21 + 0x1e) = 0;
    plVar21[0x1f] = 0;
    plVar21[0x20] = 0;
    plVar21[0x21] = 0;
    plVar21[0x22] = 0;
    *(undefined4 *)(plVar21 + 0x23) = 2;
    plVar21[0x28] = 0;
    *(undefined4 *)(plVar21 + 0x29) = 0;
    *(undefined4 *)((longlong)plVar21 + 300) = 0;
    *(undefined8 *)((longlong)plVar21 + 0x11c) = 0;
    *(undefined8 *)((longlong)plVar21 + 0x124) = 0;
    *(undefined8 *)((longlong)plVar21 + 0x14c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar21 + 0x154) = 0;
    plVar21[0x2c] = 0;
    *(undefined4 *)(plVar21 + 0x2d) = 0;
    plVar21[0x3f] = 0;
    *(undefined4 *)(plVar21 + 0x40) = 0;
    plVar21[0x3a] = 0;
    plVar21[0x3b] = 0;
    plVar21[0x38] = 0;
    plVar21[0x39] = 0;
    plVar21[0x36] = 0;
    plVar21[0x37] = 0;
    plVar21[0x34] = 0;
    plVar21[0x35] = 0;
    plVar21[0x32] = 0;
    plVar21[0x33] = 0;
    plVar21[0x30] = 0;
    plVar21[0x31] = 0;
    plVar21[0x2e] = 0;
    plVar21[0x2f] = 0;
    *(undefined1 *)(plVar21 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar21 + 0x204) = 0xbf80000000000002;
    *(undefined2 *)((longlong)plVar21 + 0x20c) = 0;
    if (plVar20 == (longlong *)0x0) {
LAB_1403652ae:
      *puVar34 = plVar20;
      plVar26 = *(longlong **)(lVar32 + 0x20 + lVar28);
      if (plVar26 != (longlong *)0x0) {
        *(longlong **)(lVar32 + lVar28 + 0x20) = plVar21;
        bVar36 = true;
LAB_14036531f:
        LOCK();
        plVar20 = plVar26 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
        if (!bVar36) goto LAB_1403643bb;
        goto LAB_1403643c6;
      }
    }
    else {
      if (plVar21 == (longlong *)0x0) {
        _DAT_00000020 = 0x10;
        plVar26 = (longlong *)&DAT_00000028;
        plVar22 = _DAT_00000028;
        if (_DAT_00000028 != (longlong *)0x0) {
LAB_140365295:
          LOCK();
          piVar2 = (int *)((longlong)plVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))();
          }
          *plVar26 = (longlong)plVar21;
          if (plVar21 != (longlong *)0x0) goto LAB_140364385;
        }
        goto LAB_1403652ae;
      }
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      plVar21[4] = (longlong)plVar20;
      if ((longlong *)plVar21[5] != plVar21) {
        LOCK();
        *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar21[5] != (longlong *)0x0) {
          plVar26 = plVar21 + 5;
          plVar22 = (longlong *)plVar21[5];
          goto LAB_140365295;
        }
        plVar21[5] = (longlong)plVar21;
      }
LAB_140364385:
      LOCK();
      plVar26 = plVar21 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      *puVar34 = plVar20;
      plVar26 = *(longlong **)(lVar32 + 0x20 + lVar28);
      if (plVar21 != plVar26) {
        *(longlong **)(lVar32 + lVar28 + 0x20) = plVar21;
        if (plVar26 == (longlong *)0x0) goto LAB_1403643bb;
        bVar36 = false;
        goto LAB_14036531f;
      }
      LOCK();
      plVar20 = plVar21 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
LAB_1403643bb:
      LOCK();
      plVar20 = plVar21 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
LAB_1403643c6:
      plVar20 = (longlong *)*puVar34;
    }
    if (plVar20 == (longlong *)0x0) goto LAB_140364692;
    if ((*(longlong **)(param_2 + 2) == (longlong *)0x0) || (param_2[1] == 0)) goto LAB_140364900;
    uVar19 = *param_2;
    plVar21 = (longlong *)0x0;
    if (((int)uVar19 < 0) || (DAT_14c9647dc <= (int)uVar19)) goto LAB_140364496;
    lVar32 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    if (((lVar32 == 0) || (*(uint *)(lVar32 + 0x10) != param_2[1])) ||
       ((*(uint *)(lVar32 + 8) & 0x10200000) != 0)) {
LAB_140364900:
      plVar21 = (longlong *)0x0;
    }
    else {
      lVar32 = (**(code **)(**(longlong **)(param_2 + 2) + 0x28))();
      if (*(int *)(lVar32 + 0x1c) == 0) goto LAB_140364900;
      uVar19 = *(uint *)(lVar32 + 0x18);
      plVar21 = (longlong *)0x0;
      if ((-1 < (int)uVar19) && (plVar21 = (longlong *)0x0, (int)uVar19 < DAT_14c9647dc)) {
        puVar34 = (undefined8 *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
        if ((puVar34 == (undefined8 *)0x0) ||
           ((*(int *)(puVar34 + 2) != *(int *)(lVar32 + 0x1c) ||
            ((*(uint *)(puVar34 + 1) & 0x10200000) != 0)))) goto LAB_140364900;
        plVar21 = (longlong *)*puVar34;
      }
    }
LAB_140364496:
    lVar32 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
    uVar9 = DAT_14cb1ae68;
    if ((((((int)plVar20[0x12] == 0) ||
          (uVar19 = *(uint *)((longlong)plVar20 + 0x8c), (int)uVar19 < 0)) ||
         (DAT_14c9647dc <= (int)uVar19)) ||
        ((plVar26 = (longlong *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
         plVar26 == (longlong *)0x0 || ((int)plVar26[2] != (int)plVar20[0x12])))) ||
       (((*(uint *)(plVar26 + 1) & 0x10200000) != 0 || (*plVar26 == 0)))) {
      if (((((int)plVar20[0x11] == 0) ||
           (uVar19 = *(uint *)((longlong)plVar20 + 0x84), (int)uVar19 < 0)) ||
          (DAT_14c9647dc <= (int)uVar19)) ||
         ((((plVar26 = (longlong *)
                       ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
            plVar26 == (longlong *)0x0 || ((int)plVar26[2] != (int)plVar20[0x11])) ||
           ((*(uint *)(plVar26 + 1) & 0x10200000) != 0)) || (lVar28 = *plVar26, lVar28 == 0)))) {
        bVar35 = true;
        bVar36 = true;
        if (lVar32 != 0) {
          if (DAT_14c9a7d10 == (undefined8 *)0x0) {
            DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *DAT_14c9a7d10 = 0;
            DAT_14c9a7d10[1] = 0;
            DAT_14c9a7d10[2] = 0;
            DAT_14c9a7d10[3] = 0;
          }
          FUN_14005915a(DAT_14c9a7d10,&local_88,uVar9,lVar32);
          lVar32 = CONCAT44(uStack_84,local_88);
          if ((lVar32 == 0) ||
             (plVar26 = (longlong *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,uStack_80)),
             plVar26 == (longlong *)0x0)) {
            plVar26 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar26 + 0xc) = *(int *)((longlong)plVar26 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar22 = plVar26 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar26)(plVar26);
              LOCK();
              piVar2 = (int *)((longlong)plVar26 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar26 + 0x10))(plVar26);
              }
            }
          }
          plVar22 = (longlong *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,uStack_80));
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar22 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar2 = (int *)((longlong)plVar22 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
          if (plVar26 != (longlong *)0x0) {
            iVar29 = (int)plVar26[1];
            do {
              plVar22 = (longlong *)0x0;
              if (iVar29 == 0) break;
              LOCK();
              iVar18 = (int)plVar26[1];
              bVar37 = iVar29 == iVar18;
              if (bVar37) {
                *(int *)(plVar26 + 1) = iVar29 + 1;
                iVar18 = iVar29;
              }
              iVar29 = iVar18;
              UNLOCK();
              plVar22 = plVar26;
            } while (!bVar37);
            LOCK();
            piVar2 = (int *)((longlong)plVar26 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
            if (plVar22 != (longlong *)0x0) {
              if (lVar32 == 0) {
                plVar26 = (longlong *)0x0;
              }
              else {
                local_88 = (int)plVar20[0x10];
                uStack_84 = 0;
                uStack_80 = 0;
                uStack_7e = 0;
                uStack_7c = 0;
                local_78 = 0;
                FUN_140376498(lVar32,&local_58,&local_88);
                if (local_58 != (longlong *)0x0) {
                  for (puVar34 = (undefined8 *)local_58[0x95]; puVar34 != (undefined8 *)0x0;
                      puVar34 = (undefined8 *)*puVar34) {
                    iVar29 = *(int *)(puVar34[2] + 0x110);
                    if (((iVar29 != 0) && (uVar19 = *(uint *)(puVar34[2] + 0x10c), -1 < (int)uVar19)
                        ) && ((((int)uVar19 < DAT_14c9647dc &&
                               (((plVar26 = (longlong *)
                                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                                            *(longlong *)
                                             (DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                                 plVar26 != (longlong *)0x0 && ((int)plVar26[2] == iVar29)) &&
                                ((*(uint *)(plVar26 + 1) & 0x10200000) == 0)))) &&
                              (plVar26 = (longlong *)*plVar26, plVar26 != (longlong *)0x0)))) {
                      if (DAT_14cb223d8 == 0) {
                        local_88 = 0x449e2820;
                        uStack_84 = 1;
                        local_f0 = FUN_14081d0ea;
                        local_f8 = FUN_1427b09ee;
                        local_108 = &LAB_147f29feb;
                        local_110 = FUN_1464384fe;
                        local_118 = L"Engine";
                        local_120 = 0;
                        local_128 = 0x10004001;
                        local_130 = 8;
                        local_138 = 0x28;
                        local_100 = &local_88;
                        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                      }
                      plVar26 = (longlong *)(**(code **)(*plVar26 + 0x288))(plVar26,DAT_14cb223d8);
                      if (plVar26 != (longlong *)0x0) {
                        if (DAT_14cb223d8 == 0) {
                          local_88 = 0x449e2820;
                          uStack_84 = 1;
                          local_f0 = FUN_14081d0ea;
                          local_f8 = FUN_1427b09ee;
                          local_108 = &LAB_147f29feb;
                          local_110 = FUN_1464384fe;
                          local_118 = L"Engine";
                          local_120 = 0;
                          local_128 = 0x10004001;
                          local_130 = 8;
                          local_138 = 0x28;
                          local_100 = &local_88;
                          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                        }
                        plVar23 = (longlong *)FUN_144718840(plVar26,DAT_14cb223d8);
                        if ((((plVar26 != plVar23) && (plVar23 != (longlong *)0x0)) &&
                            ((plVar26 = (longlong *)(**(code **)(*plVar23 + 0x10))(plVar23),
                             plVar26 != (longlong *)0x0 && (plVar26[4] != 0)))) &&
                           (((short)plVar26[5] < 0 || (plVar26[6] != 0)))) goto LAB_140364c3c;
                      }
                    }
                  }
                }
                plVar26 = (longlong *)0x0;
LAB_140364c3c:
                plVar23 = (longlong *)CONCAT44(uStack_4c,local_50);
                if (plVar23 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plVar23 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plVar23)(plVar23);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar23 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar23 + 0x10))(plVar23);
                    }
                  }
                }
              }
              LOCK();
              plVar23 = plVar22 + 1;
              *(int *)plVar23 = (int)*plVar23 + -1;
              UNLOCK();
              if ((int)*plVar23 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar2 = (int *)((longlong)plVar22 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
              goto LAB_140364582;
            }
          }
        }
      }
      else {
        iVar29 = *(int *)(lVar28 + 0x498);
        bVar36 = true;
        bVar35 = true;
        if ((longlong)iVar29 != 0) {
          lVar32 = *(longlong *)(lVar28 + 0x490);
          lVar28 = 0;
          do {
            plVar26 = *(longlong **)(lVar32 + lVar28);
            if (plVar26 != (longlong *)0x0) {
              if (DAT_14cb223d8 == 0) {
                local_100 = &local_88;
                local_88 = 0x449e2820;
                uStack_84 = 1;
                local_f0 = FUN_14081d0ea;
                local_f8 = FUN_1427b09ee;
                local_108 = &LAB_147f29feb;
                local_110 = FUN_1464384fe;
                local_118 = L"Engine";
                local_120 = 0;
                local_128 = 0x10004001;
                local_130 = 8;
                local_138 = 0x28;
                FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
              }
              plVar26 = (longlong *)(**(code **)(*plVar26 + 0x288))(plVar26,DAT_14cb223d8);
              if (plVar26 != (longlong *)0x0) {
                if (DAT_14cb223d8 == 0) {
                  local_100 = &local_88;
                  local_88 = 0x449e2820;
                  uStack_84 = 1;
                  local_f0 = FUN_14081d0ea;
                  local_f8 = FUN_1427b09ee;
                  local_108 = &LAB_147f29feb;
                  local_110 = FUN_1464384fe;
                  local_118 = L"Engine";
                  local_120 = 0;
                  local_128 = 0x10004001;
                  local_130 = 8;
                  local_138 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                }
                plVar22 = (longlong *)FUN_144718840(plVar26,DAT_14cb223d8);
                if (((((plVar26 != plVar22) && (plVar22 != (longlong *)0x0)) &&
                     (plVar26 = (longlong *)(**(code **)(*plVar22 + 0x10))(plVar22),
                     plVar26 != (longlong *)0x0)) && (plVar26[4] != 0)) &&
                   (((short)plVar26[5] < 0 || (plVar26[6] != 0)))) goto LAB_140364582;
              }
            }
            lVar28 = lVar28 + 8;
          } while ((longlong)iVar29 * 8 != lVar28);
        }
      }
LAB_1403647d4:
      bVar36 = bVar35;
      plVar26 = (longlong *)0x0;
    }
    else {
      plVar26 = *(longlong **)(*plVar26 + 0x408);
      if (plVar26 == (longlong *)0x0) {
LAB_140364b28:
        bVar35 = false;
        goto LAB_1403647d4;
      }
      if (DAT_14cb223d8 == 0) {
        local_100 = &local_88;
        local_88 = 0x449e2820;
        uStack_84 = 1;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_1427b09ee;
        local_108 = &LAB_147f29feb;
        local_110 = FUN_1464384fe;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar22 = (longlong *)(**(code **)(*plVar26 + 0x288))(plVar26,DAT_14cb223d8);
      if (plVar22 == (longlong *)0x0) goto LAB_140364b28;
      if (DAT_14cb223d8 == 0) {
        local_100 = &local_88;
        local_88 = 0x449e2820;
        uStack_84 = 1;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_1427b09ee;
        local_108 = &LAB_147f29feb;
        local_110 = FUN_1464384fe;
        local_118 = L"Engine";
        local_120 = 0;
        local_128 = 0x10004001;
        local_130 = 8;
        local_138 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar23 = (longlong *)FUN_144718840(plVar22,DAT_14cb223d8);
      plVar26 = (longlong *)0x0;
      bVar36 = false;
      if ((plVar22 != plVar23) && (plVar23 != (longlong *)0x0)) {
        plVar26 = (longlong *)(**(code **)(*plVar23 + 0x10))(plVar23);
        bVar36 = false;
      }
    }
LAB_140364582:
    if ((plVar20[8] == 0) || ((-1 < (short)plVar20[9] && (plVar20[10] == 0)))) {
      if (plVar21 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_100 = &local_88;
          local_88 = 0x449e2820;
          uStack_84 = 1;
          local_f0 = FUN_14081d0ea;
          local_f8 = FUN_1427b09ee;
          local_108 = &LAB_147f29feb;
          local_110 = FUN_1464384fe;
          local_118 = L"Engine";
          local_120 = 0;
          local_128 = 0x10004001;
          local_130 = 8;
          local_138 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar21 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21,DAT_14cb223d8);
        if (plVar21 != (longlong *)0x0) {
          if (DAT_14cb223d8 == 0) {
            local_100 = &local_88;
            local_88 = 0x449e2820;
            uStack_84 = 1;
            local_f0 = FUN_14081d0ea;
            local_f8 = FUN_1427b09ee;
            local_108 = &LAB_147f29feb;
            local_110 = FUN_1464384fe;
            local_118 = L"Engine";
            local_120 = 0;
            local_128 = 0x10004001;
            local_130 = 8;
            local_138 = 0x28;
            FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
          }
          plVar26 = (longlong *)FUN_144718840(plVar21,DAT_14cb223d8);
          if ((plVar21 != plVar26) && (plVar26 != (longlong *)0x0)) {
            plVar26 = (longlong *)(**(code **)(*plVar26 + 0x10))(plVar26);
            goto LAB_1403645f2;
          }
        }
      }
    }
    else {
LAB_1403645f2:
      if (plVar26 != (longlong *)0x0) {
        local_88 = (int)plVar26[4];
        uStack_84 = (undefined4)((ulonglong)plVar26[4] >> 0x20);
        uStack_80 = (undefined2)plVar26[5];
        local_78 = (undefined4)plVar26[6];
        uStack_74 = (undefined4)((ulonglong)plVar26[6] >> 0x20);
        FUN_140365a56(plVar20);
        if (!bVar36) {
          local_68 = FUN_14570340c;
          local_60 = 0;
          FUN_145703d84(&local_58,plVar20);
          if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
             (cVar17 = (**(code **)(*local_58 + 0x30))(), cVar17 == '\0')) {
            if (local_50 != 0) {
              if (local_58 == (longlong *)0x0) goto LAB_140364628;
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              goto LAB_140364c13;
            }
          }
          else {
            if (*(int *)((longlong)plVar26 + 0x14) < 1) {
              iVar29 = (int)plVar26[1];
              iVar18 = (int)plVar26[2] + -1;
              *(int *)(plVar26 + 2) = iVar18;
              if (iVar18 <= iVar29) {
                iVar18 = iVar29;
                if (0 < iVar29) {
                  iVar27 = 0;
                  do {
                    if (((*(int *)(*plVar26 + 8 + (longlong)iVar27 * 0x10) == 0) ||
                        (plVar21 = *(longlong **)(*plVar26 + (longlong)iVar27 * 0x10),
                        plVar21 == (longlong *)0x0)) ||
                       (cVar17 = (**(code **)(*plVar21 + 0x28))(), cVar17 != '\0')) {
                      FUN_14005b288(plVar26,iVar27);
                      FUN_14005b248(plVar26);
                    }
                    else {
                      iVar27 = iVar27 + 1;
                    }
                    iVar18 = (int)plVar26[1];
                  } while (iVar27 < iVar18);
                }
                iVar27 = 2;
                if (2 < iVar18 * 2) {
                  iVar27 = iVar18 * 2;
                }
                *(int *)(plVar26 + 2) = iVar27;
                if ((iVar27 < iVar29) && (*(int *)((longlong)plVar26 + 0xc) != iVar18)) {
                  FUN_14045812c();
                }
              }
            }
            if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
              (**(code **)(*local_58 + 0x38))(local_58,&local_68);
            }
            iVar29 = (int)plVar26[1];
            *(uint *)(plVar26 + 1) = iVar29 + 1U;
            if (*(uint *)((longlong)plVar26 + 0xc) < iVar29 + 1U) {
              FUN_1447a71f6(plVar26,iVar29);
            }
            lVar32 = *plVar26;
            lVar28 = (longlong)iVar29 * 0x10;
            *(undefined8 *)(lVar32 + lVar28) = 0;
            *(undefined4 *)(lVar32 + 8 + lVar28) = 0;
            *(longlong **)(lVar32 + lVar28) = local_58;
            local_58 = (longlong *)0x0;
            *(int *)(lVar32 + 8 + lVar28) = local_50;
LAB_140364c13:
            local_50 = 0;
          }
          if (local_58 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
LAB_140364628:
    plVar21 = (longlong *)plVar20[3];
    bVar36 = true;
    if (plVar21 == (longlong *)0x0) {
LAB_1403647df:
      lVar32 = 0;
      plVar21 = (longlong *)0x0;
    }
    else {
      iVar29 = (int)plVar21[1];
      do {
        if (iVar29 == 0) goto LAB_1403647df;
        LOCK();
        iVar18 = (int)plVar21[1];
        bVar35 = iVar29 == iVar18;
        if (bVar35) {
          *(int *)(plVar21 + 1) = iVar29 + 1;
          iVar18 = iVar29;
        }
        iVar29 = iVar18;
        UNLOCK();
      } while (!bVar35);
      lVar32 = plVar20[2];
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      plVar26 = plVar21 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
      bVar36 = false;
    }
    plVar20[0x34] = lVar32;
    plVar26 = (longlong *)plVar20[0x35];
    if (plVar26 != plVar21) {
      if (!bVar36) {
        LOCK();
        *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
        UNLOCK();
        plVar26 = (longlong *)plVar20[0x35];
      }
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar26 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar26 + 0x10))();
        }
      }
      plVar20[0x35] = (longlong)plVar21;
    }
    if (!bVar36) {
      LOCK();
      plVar26 = plVar21 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
  }
  else {
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
  }
  FUN_1403654aa(plVar20);
LAB_140364692:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403654aa FUN_1403654aa body=937 status=ok
// SIG undefined FUN_1403654aa(void)

void FUN_1403654aa(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
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
  undefined8 local_48;
  longlong *plStack_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = *(longlong **)(param_2 + 2);
  if ((((plVar7 == (longlong *)0x0) || (param_2[1] == 0)) || (uVar2 = *param_2, (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 == 0)) ||
      ((*(uint *)(lVar8 + 0x10) != param_2[1] || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0))))))
  goto LAB_1403656a3;
  FUN_140365854(param_1 + 0xe8);
  lVar8 = (**(code **)(*plVar7 + 0x30))(plVar7);
  if (*(int *)(lVar8 + 100) == 0) {
LAB_1403656ca:
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(lVar8 + 0x60);
    plVar7 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((((int)plVar7[2] != *(int *)(lVar8 + 100) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
          || (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) goto LAB_1403656ca;
      if (DAT_14cb20e58 == 0) {
        local_60 = &local_30;
        local_30 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f14d13;
        local_70 = FUN_1464313b0;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      plVar5 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb20e58);
      if (plVar5 != (longlong *)0x0) {
        if (DAT_14cb20e58 == 0) {
          local_60 = &local_30;
          local_30 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_1427b09ee;
          local_68 = &LAB_147f14d13;
          local_70 = FUN_1464313b0;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
        }
        plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb20e58);
        if (((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
           (lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar8 != 0)) {
          plVar5 = *(longlong **)(param_1 + 0x18);
          if (plVar5 == (longlong *)0x0) {
LAB_140365826:
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
          }
          else {
            iVar4 = (int)plVar5[1];
            do {
              if (iVar4 == 0) goto LAB_140365826;
              LOCK();
              iVar3 = (int)plVar5[1];
              bVar9 = iVar4 == iVar3;
              if (bVar9) {
                *(int *)(plVar5 + 1) = iVar4 + 1;
                iVar3 = iVar4;
              }
              iVar4 = iVar3;
              UNLOCK();
            } while (!bVar9);
            local_48 = *(undefined8 *)(param_1 + 0x10);
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar5 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            plStack_40 = plVar5;
            if ((int)*plVar6 == 0) {
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
          FUN_1403658c4(lVar8,&local_48);
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0x90) != 0) && (uVar2 = *(uint *)(param_1 + 0x8c), -1 < (int)uVar2)) &&
     (((int)uVar2 < DAT_14c9647dc &&
      ((((plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x90))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
       ((*plVar5 != 0 && (*(longlong **)(*plVar5 + 0x408) == plVar7)))))))) {
    FUN_14570397a(param_1,plVar7);
  }
LAB_1403656a3:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140365854 FUN_140365854 body=112 status=ok
// SIG undefined FUN_140365854(void)

void FUN_140365854(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 8 + uVar5) == param_2[1]) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar6 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140365948(param_1,iVar2);
    lVar4 = *param_1;
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 1403658c4 FUN_1403658c4 body=132 status=ok
// SIG undefined FUN_1403658c4(void)

void FUN_1403658c4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x78) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x80);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x80) = plVar3;
    plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000140365944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140365948 FUN_140365948 body=269 status=ok
// SIG undefined FUN_140365948(void)

void FUN_140365948(longlong param_1,int param_2)

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



// FUNCTION 140365a56 FUN_140365a56 body=267 status=ok
// SIG undefined FUN_140365a56(void)

void FUN_140365a56(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_2;
  local_38 = *(undefined2 *)(param_2 + 1);
  local_30 = param_2[2];
  cVar1 = FUN_140365ba6(param_1 + 0x20,&local_40,CONCAT71((uint7)(byte)((ushort)local_38 >> 8),1));
  if (cVar1 != '\0') {
    FUN_140365b62(param_1 + 0x98);
    FUN_14035cf70(param_1 + 0xf8);
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
      lVar5 = (longlong)*(int *)(param_1 + 0xf0) << 4;
      do {
        if ((*(longlong *)(lVar4 + 8) != 0) && (cVar1 = FUN_144729dda(lVar4), cVar1 != '\0')) {
          lVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x30))();
          uVar3 = FUN_14479d2ce(lVar2 + 0x60);
          lVar2 = FUN_14492b4b4(uVar3);
          if (lVar2 != 0) {
            local_58 = *(undefined8 *)(param_1 + 0x40);
            local_50 = *(undefined2 *)(param_1 + 0x48);
            local_48 = *(undefined8 *)(param_1 + 0x50);
            FUN_140365ba6(lVar2,&local_58,1);
          }
        }
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140365b62 FUN_140365b62 body=68 status=ok
// SIG undefined FUN_140365b62(void)

void FUN_140365b62(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147f61690();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144a544ac(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140365ba6 FUN_140365ba6 body=136 status=ok
// SIG undefined FUN_140365ba6(void)

undefined8 FUN_140365ba6(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined2 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == '\0') || (*(longlong **)(param_1 + 0x18) == (longlong *)0x0)) {
LAB_140365bea:
    local_30 = *param_2;
    local_28 = *(undefined2 *)(param_2 + 1);
    local_20 = param_2[2];
    uVar3 = FUN_140365c30(param_1);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) goto LAB_140365bea;
    }
    uVar3 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140365c30 FUN_140365c30 body=100 status=ok
// SIG undefined FUN_140365c30(void)

ulonglong FUN_140365c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x20) == *param_2) &&
      (*(short *)(param_1 + 0x28) == (short)param_2[1])) &&
     (*(longlong *)(param_1 + 0x30) == param_2[2])) {
    uVar3 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x20);
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_2[1];
    lVar1 = param_2[2];
    *(longlong *)(param_1 + 0x20) = *param_2;
    *(short *)(param_1 + 0x28) = (short)lVar2;
    *(longlong *)(param_1 + 0x30) = lVar1;
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    FUN_140365c94(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140365c94 FUN_140365c94 body=60 status=ok
// SIG undefined FUN_140365c94(void)

void FUN_140365c94(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1403573f6(param_1);
  }
  if (param_2 != '\0') {
    FUN_140365f5e(param_1);
    FUN_140365cd0(param_1);
    return;
  }
  return;
}



// FUNCTION 140365cd0 FUN_140365cd0 body=488 status=ok
// SIG undefined FUN_140365cd0(void)

void FUN_140365cd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f29feb;
      local_50 = FUN_1464384fe;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb223d8);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f29feb;
        local_50 = FUN_1464384fe;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb223d8);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140365ebc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98,param_1 + 0x20);
}



// FUNCTION 140365ebc FUN_140365ebc body=162 status=ok
// SIG undefined FUN_140365ebc(void)

void FUN_140365ebc(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140365f49;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140365f49:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140365f5e FUN_140365f5e body=1137 status=ok
// SIG undefined FUN_140365f5e(void)

void FUN_140365f5e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb20e58 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f14d13;
      local_50 = FUN_1464313b0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb20e58);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb20e58 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f14d13;
        local_50 = FUN_1464313b0;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb20e58);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_140367586(lVar4,param_1 + 0x20);
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb22108 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f28909;
        local_50 = FUN_1464376d6;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
      }
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb22108);
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cb22108 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_147f28909;
          local_50 = FUN_1464376d6;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxPerceiver",&DAT_14cb22108,&DAT_147f28908);
        }
        plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb22108);
        if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x1c) == 0) {
LAB_140366165:
              plVar2 = (longlong *)0x0;
            }
            else {
              uVar1 = *(uint *)(lVar4 + 0x18);
              plVar2 = (longlong *)0x0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar6 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar6 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar6 + 2) != *(int *)(lVar4 + 0x1c) ||
                    ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_140366165;
                plVar2 = (longlong *)*puVar6;
              }
            }
            plVar3 = *(longlong **)(param_1 + 0x18);
            if (plVar3 != plVar2) goto LAB_140366046;
            FUN_1457030d6(lVar4);
          }
        }
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
LAB_140366046:
  if (plVar3 != (longlong *)0x0) {
    uVar5 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar5);
    if (plVar2 != (longlong *)0x0) {
      uVar5 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar5);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403663e2 FUN_1403663e2 body=2636 status=ok
// SIG undefined FUN_1403663e2(void)

void FUN_1403663e2(uint *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong *puVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_128 [44];
  uint local_fc;
  uint *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  uint local_d8;
  int local_d4;
  uint *local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  uint *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((param_1[1] == 0) || (uVar5 = *param_1, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
     || (((puVar22 = (ulonglong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          puVar22 == (ulonglong *)0x0 || ((uint)puVar22[2] != param_1[1])) ||
         (((puVar22[1] & 0x10200000) != 0 || (uVar26 = *puVar22, uVar26 == 0))))))
  goto LAB_140366459;
  if ((puVar22[1] & 0x10200000) == 0) {
    uVar6 = FUN_1447210f0(uVar26);
  }
  else {
    uVar6 = 0;
  }
  FUN_14019d0a4(&local_a8,uVar6);
  local_f0 = uVar26;
  if (plStack_a0 != (longlong *)0x0) {
    iVar16 = (int)plStack_a0[1];
    do {
      if (iVar16 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar24 = (int)plStack_a0[1];
      bVar27 = iVar16 == iVar24;
      if (bVar27) {
        *(int *)(plStack_a0 + 1) = iVar16 + 1;
        iVar24 = iVar16;
      }
      iVar16 = iVar24;
      UNLOCK();
      plVar14 = plStack_a0;
    } while (!bVar27);
    LOCK();
    piVar10 = (int *)((longlong)plStack_a0 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
    puVar15 = local_a8;
    if (plVar14 != (longlong *)0x0) {
      if (local_a8 != (uint *)0x0) {
        uVar5 = *(uint *)(uVar26 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar16 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar24 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar24);
          }
          LOCK();
          iVar16 = *(int *)(lVar19 + 0x10);
          bVar27 = iVar16 == 0;
          if (bVar27) {
            *(int *)(lVar19 + 0x10) = iVar24;
            iVar16 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar16 = iVar24;
          }
        }
        uVar11 = puVar15[0x46];
        puVar15[0x46] = uVar11 + 1;
        if (puVar15[0x47] < uVar11 + 1) {
          FUN_140155462(puVar15 + 0x44,uVar11);
        }
        *(ulonglong *)(*(longlong *)(puVar15 + 0x44) + (longlong)(int)uVar11 * 8) =
             CONCAT44(iVar16,uVar5);
        uVar26 = local_f0;
      }
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar10 = (int *)((longlong)plVar14 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  if (param_1[1] == 0) {
LAB_140366bae:
    uVar6 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar6 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) ||
          (*plVar14 == 0)))) goto LAB_140366bae;
      uVar6 = FUN_1447210f0();
    }
  }
  local_f8 = param_1;
  FUN_1402b6034(&local_a8,uVar6);
  if (plStack_a0 != (longlong *)0x0) {
    iVar16 = (int)plStack_a0[1];
    do {
      if (iVar16 == 0) {
        local_e0 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar24 = (int)plStack_a0[1];
      bVar27 = iVar16 == iVar24;
      if (bVar27) {
        *(int *)(plStack_a0 + 1) = iVar16 + 1;
        iVar24 = iVar16;
      }
      iVar16 = iVar24;
      UNLOCK();
      local_e0 = plStack_a0;
    } while (!bVar27);
    LOCK();
    piVar10 = (int *)((longlong)plStack_a0 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      if (local_a8 != (uint *)0x0) {
        puVar15 = local_a8 + 0x316;
        uVar5 = local_a8[0x31a];
        uVar8 = (ulonglong)uVar5;
        puVar20 = local_a8;
        if (uVar5 == 0) {
          uVar18 = 1;
          uVar25 = 0;
          uVar11 = 0;
          iVar16 = 0;
        }
        else {
          puVar7 = *(uint **)(local_a8 + 0x318);
          if (*(uint **)(local_a8 + 0x318) == (uint *)0x0) {
            puVar7 = puVar15;
          }
          uVar11 = *puVar7;
          uVar25 = 0;
          iVar16 = 0;
          if (uVar11 == 0) {
            iVar24 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar24 = uVar5 - 1;
            }
            uVar25 = 0;
            uVar18 = (ulonglong)(uint)(iVar24 >> 5);
            if (iVar24 >> 5 < 1) {
              uVar18 = uVar25;
            }
            do {
              if (uVar18 == uVar25) goto LAB_140366a74;
              iVar16 = iVar16 + 0x20;
              uVar11 = puVar7[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar11 == 0);
          }
          uVar18 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar18 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar11 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar11) {
            uVar11 = uVar5;
          }
        }
        if (uVar11 != uVar5) {
          local_b8 = local_a8 + 0x12;
          uVar4 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          uVar23 = 0xffffffff;
          local_c8 = (ulonglong)(int)(uVar4 >> 0x10 ^ uVar4);
          local_d0 = local_a8;
          local_c0 = uVar8;
          do {
            puVar7 = *(uint **)(puVar20 + 0x312);
            if (*(uint **)(puVar20 + 0x312) == (uint *)0x0) {
              puVar7 = local_b8;
            }
            lVar19 = *(longlong *)(puVar7 + (longlong)(int)uVar11 * 0xc + 6);
            local_d8 = uVar23;
            if (lVar19 != 0) {
              if (*(int *)(lVar19 + 0xa0) != *(int *)(lVar19 + 0xcc)) {
                lVar21 = lVar19 + 0xd0;
                if (*(longlong *)(lVar19 + 0xd8) != 0) {
                  lVar21 = *(longlong *)(lVar19 + 0xd8);
                }
                iVar24 = *(int *)(lVar21 + ((longlong)*(int *)(lVar19 + 0xe0) - 1U & local_c8) * 4);
                if (iVar24 != -1) {
                  lVar9 = *(longlong *)(lVar19 + 0x98);
LAB_140366780:
                  lVar2 = lVar9 + (longlong)iVar24 * 0x88;
                  if (*(ulonglong *)(lVar9 + (longlong)iVar24 * 0x88) != uVar26)
                  goto code_r0x00014036679c;
                  iVar12 = *(int *)(lVar21 + (longlong)*(int *)(lVar2 + 0x84) * 4);
                  if (iVar12 == iVar24) {
                    piVar10 = (int *)(lVar21 + (longlong)*(int *)(lVar2 + 0x84) * 4);
                  }
                  else {
                    do {
                      piVar10 = (int *)((longlong)iVar12 * 0x88 + lVar9 + 0x80);
                      iVar12 = *piVar10;
                    } while (iVar12 != iVar24);
                  }
                  *piVar10 = *(int *)(lVar2 + 0x80);
                  FUN_140367506();
                }
              }
LAB_1403667a8:
              local_d4 = iVar16;
              local_b0 = uVar25;
              if ((longlong)*(int *)(lVar19 + 0xf0) != 0) {
                puVar7 = *(uint **)(lVar19 + 0xe8);
                puVar17 = puVar7 + (longlong)*(int *)(lVar19 + 0xf0) * 4;
                do {
                  if ((((puVar7[1] != 0 && *(longlong **)(puVar7 + 2) != (longlong *)0x0) &&
                       (uVar5 = *puVar7, -1 < (int)uVar5)) &&
                      (((int)uVar5 < DAT_14c9647dc &&
                       ((lVar21 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                        lVar21 != 0 && (*(uint *)(lVar21 + 0x10) == puVar7[1])))))) &&
                     ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)) {
                    uVar8 = (**(code **)(**(longlong **)(puVar7 + 2) + 0x28))();
                    uVar5 = *(uint *)(uVar26 + 0xc);
                    if ((int)uVar5 < DAT_14c9647dc) {
                      lVar21 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                    }
                    else {
                      lVar21 = 0;
                    }
                    iVar16 = *(int *)(lVar21 + 0x10);
                    if (*(int *)(lVar21 + 0x10) == 0) {
                      LOCK();
                      iVar16 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar24 = DAT_14c964868 + 1;
                      bVar27 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar16;
                      if (bVar27) {
                        local_e8 = uVar8;
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar24);
                        uVar8 = local_e8;
                      }
                      LOCK();
                      iVar16 = *(int *)(lVar21 + 0x10);
                      bVar27 = iVar16 == 0;
                      if (bVar27) {
                        *(int *)(lVar21 + 0x10) = iVar24;
                        iVar16 = 0;
                      }
                      UNLOCK();
                      if (bVar27) {
                        iVar16 = iVar24;
                      }
                    }
                    iVar16 = FUN_14036717c(uVar8 + 0x50,CONCAT44(iVar16,uVar5));
                    uVar26 = local_f0;
                    *(bool *)(uVar8 + 0xa0) = 0 < iVar16;
                    puVar20 = local_d0;
                    if (0 < iVar16) {
                      local_a8 = (uint *)0x0;
                      plStack_a0 = (longlong *)0x0;
                      uVar5 = *(uint *)(local_f0 + 0xc);
                      local_e8 = (ulonglong)uVar5;
                      if ((int)uVar5 < DAT_14c9647dc) {
                        lVar21 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                      }
                      else {
                        lVar21 = 0;
                      }
                      uVar5 = *(uint *)(lVar21 + 0x10);
                      if (*(uint *)(lVar21 + 0x10) == 0) {
                        LOCK();
                        iVar16 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar11 = DAT_14c964868 + 1;
                        bVar27 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar16;
                        if (bVar27) {
                          local_fc = uVar11;
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar11);
                          uVar11 = local_fc;
                        }
                        LOCK();
                        uVar5 = *(uint *)(lVar21 + 0x10);
                        bVar27 = uVar5 == 0;
                        if (bVar27) {
                          *(uint *)(lVar21 + 0x10) = uVar11;
                          uVar5 = 0;
                        }
                        UNLOCK();
                        if (bVar27) {
                          uVar5 = uVar11;
                        }
                      }
                      plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,1);
                      FUN_140155462(&local_a8,0);
                      *(ulonglong *)local_a8 = ((ulonglong)uVar5 << 0x20) + local_e8;
                      if (0 < (int)plStack_a0) {
                        FUN_140367464(uVar8,&local_a8);
                      }
                      puVar20 = local_d0;
                      if (local_a8 != (uint *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  puVar7 = puVar7 + 4;
                } while (puVar7 != puVar17);
              }
              FUN_140366e30(lVar19 + 0xf8,uVar26);
              uVar5 = puVar20[0x31a];
              uVar8 = local_c0;
              uVar25 = local_b0;
              iVar16 = local_d4;
            }
            uVar23 = local_d8 & ~(uint)uVar18;
            puVar7 = *(uint **)(puVar20 + 0x318);
            if (*(uint **)(puVar20 + 0x318) == (uint *)0x0) {
              puVar7 = puVar15;
            }
            iVar24 = (int)uVar25;
            lVar19 = (longlong)iVar24;
            uVar11 = puVar7[lVar19] & uVar23;
            if (uVar11 == 0) {
              iVar12 = uVar5 + 0x1e;
              if (-1 < (int)(uVar5 - 1)) {
                iVar12 = uVar5 - 1;
              }
              iVar12 = iVar12 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar24) {
                iVar13 = iVar24;
              }
              if (iVar24 < iVar12) {
                lVar21 = 0;
                do {
                  uVar11 = puVar7[lVar19 + lVar21 + 1];
                  if (uVar11 != 0) {
                    uVar25 = (ulonglong)(iVar24 + (int)lVar21 + 1);
                    uVar23 = 0xffffffff;
                    goto LAB_14036699d;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar21 = lVar21 + 1;
                } while (iVar13 - lVar19 != lVar21);
                uVar23 = 0xffffffff;
                lVar19 = (longlong)iVar13;
              }
              uVar25 = lVar19 + 1U & 0xffffffff;
              uVar11 = uVar5;
            }
            else {
LAB_14036699d:
              uVar18 = (ulonglong)(-uVar11 & uVar11);
              uVar3 = uVar18 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uVar11 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if ((int)uVar5 <= (int)uVar11) {
                uVar11 = uVar5;
              }
            }
          } while (uVar11 != (uint)uVar8);
        }
LAB_140366a74:
        lVar19 = (**(code **)(*(longlong *)(puVar20 + 8) + 0x48))(puVar20 + 8);
        if (lVar19 != 0) {
          local_68 = lVar19;
          FUN_14036734e(&local_a8);
          lVar21 = local_80;
          lVar19 = local_98;
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
          UNLOCK();
          plVar14 = plStack_a0;
LAB_140366ac3:
          if (plVar14 != local_88) {
            FUN_140366e30(plVar14[2],local_f0);
            do {
              plVar14 = (longlong *)*plVar14;
              if (plVar14 == (longlong *)0x0) break;
              lVar9 = FUN_140367410(plVar14[2]);
            } while (lVar9 != *local_90);
            goto LAB_140366ac3;
          }
          LOCK();
          *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
          UNLOCK();
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
          UNLOCK();
        }
      }
      LOCK();
      plVar14 = local_e0 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_e0)();
        LOCK();
        piVar10 = (int *)((longlong)local_e0 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*local_e0 + 0x10))();
        }
      }
    }
  }
  uVar5 = local_f8[0x1c];
  if (0 < (longlong)(int)uVar5) {
    local_a8 = (uint *)0x0;
    _Src = *(void **)(local_f8 + 0x1a);
    plStack_a0 = (longlong *)CONCAT44(plStack_a0._4_4_,uVar5);
    FUN_145703074(&local_a8,uVar5,0);
    memcpy(local_a8,_Src,(longlong)(int)uVar5 << 4);
    uVar26 = local_f0;
    if ((longlong)(int)plStack_a0 != 0) {
      puVar20 = local_a8 + (longlong)(int)plStack_a0 * 4;
      puVar15 = local_a8;
      do {
        if (((((puVar15[1] != 0 && *(longlong **)(puVar15 + 2) != (longlong *)0x0) &&
              (uVar5 = *puVar15, -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
            ((lVar19 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar19 != 0 &&
             (*(uint *)(lVar19 + 0x10) == puVar15[1])))) &&
           (((*(uint *)(lVar19 + 8) & 0x10200000) == 0 && ((*(uint *)(lVar19 + 8) >> 0x1c & 1) == 0)
            ))) {
          uVar6 = (**(code **)(**(longlong **)(puVar15 + 2) + 0x30))();
          FUN_14036835e(uVar6,uVar26);
        }
        puVar15 = puVar15 + 4;
      } while (puVar15 != puVar20);
    }
    if (local_a8 != (uint *)0x0) {
      FUN_1400020a8(local_a8);
    }
    uVar5 = local_f8[0x1c];
  }
  if (uVar5 == 0) {
    local_f8[0x1e] = 0xbf800000;
  }
LAB_140366459:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014036679c:
  iVar24 = *(int *)(lVar2 + 0x80);
  if (iVar24 == -1) goto LAB_1403667a8;
  goto LAB_140366780;
}



// FUNCTION 140366e30 FUN_140366e30 body=259 status=ok
// SIG undefined FUN_140366e30(void)

void FUN_140366e30(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  FUN_140366f34(param_1 + 0x18,(ulonglong)uVar5 | uVar3 << 0x20);
  if ((*(char *)(param_1 + 0x104) == '\x01') &&
     (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c))) {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN_140155fa6(param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 140366f34 FUN_140366f34 body=272 status=ok
// SIG undefined FUN_140366f34(void)

undefined8 FUN_140366f34(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar3 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar3 != -1) {
      lVar5 = *param_1;
      lVar3 = lVar3 * 0x34;
      local_48 = *(undefined8 *)(lVar5 + lVar3);
      local_50 = param_2;
      cVar2 = FUN_14472d054();
      if (cVar2 == '\0') {
        lVar3 = lVar5 + lVar3;
        do {
          lVar5 = lVar3;
          lVar3 = (longlong)*(int *)(lVar5 + 0x2c);
          if (lVar3 == -1) goto LAB_140366f5c;
          lVar1 = *param_1;
          lVar3 = lVar3 * 0x34;
          local_48 = *(undefined8 *)(lVar1 + lVar3);
          local_50 = param_2;
          cVar2 = FUN_14472d054(&local_48,&local_50);
          lVar3 = lVar1 + lVar3;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar5 + 0x2c);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_140367046(param_1,*puVar6);
      uVar4 = 1;
    }
  }
LAB_140366f5c:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140367046 FUN_140367046 body=92 status=ok
// SIG undefined FUN_140367046(void)

void FUN_140367046(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x30 + (longlong)param_2 * 0x34);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x34 + 0x2c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x34 + 0x2c);
  FUN_1403670a2(param_1,param_2,1);
  return;
}



// FUNCTION 1403670a2 FUN_1403670a2 body=144 status=ok
// SIG undefined FUN_1403670a2(void)

void FUN_1403670a2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x34 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x34) = param_2;
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
      puVar7 = puVar7 + 0xd;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14036717c FUN_14036717c body=465 status=ok
// SIG undefined FUN_14036717c(void)

int FUN_14036717c(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = 0;
  }
  else {
    local_60 = param_1 + 7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = local_60;
    }
    piVar8 = (int *)((longlong)plVar5 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    iVar6 = 0;
    local_68 = param_1 + 2;
    do {
      if ((longlong)*piVar8 == -1) break;
      lVar7 = *param_1;
      lVar13 = (longlong)*piVar8 * 0x2b0;
      local_50 = *(undefined8 *)(lVar7 + lVar13);
      local_58 = param_2;
      cVar4 = FUN_14472d054(&local_50,&local_58);
      if (cVar4 == '\0') {
        piVar8 = (int *)(lVar7 + lVar13 + 0x2a8);
      }
      else {
        iVar2 = *piVar8;
        lVar7 = (longlong)iVar2 * 0x2b0;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = local_60;
        }
        lVar13 = *param_1;
        lVar12 = (longlong)*(int *)(lVar13 + 0x2ac + lVar7);
        iVar11 = *(int *)((longlong)plVar5 + lVar12 * 4);
        if (iVar11 == iVar2) {
          piVar10 = (int *)((longlong)plVar5 + lVar12 * 4);
        }
        else {
          do {
            piVar10 = (int *)((longlong)iVar11 * 0x2b0 + lVar13 + 0x2a8);
            iVar11 = *piVar10;
          } while (iVar11 != iVar2);
        }
        *piVar10 = *(int *)(lVar13 + lVar7 + 0x2a8);
        lVar13 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar13 + (longlong)(int)param_1[6] * 0x2b0) = iVar2;
        }
        *(undefined4 *)(lVar13 + lVar7) = 0xffffffff;
        uVar9 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar9 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar13 + lVar7 + 4) = uVar9;
        *(int *)(param_1 + 6) = iVar2;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = local_68;
        }
        iVar11 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar11 = iVar2;
        }
        bVar3 = (byte)iVar2 & 0x1f;
        puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar11 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        iVar6 = iVar6 + 1;
      }
    } while (cVar4 == '\0');
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 14036734e FUN_14036734e body=194 status=ok
// SIG undefined FUN_14036734e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14036734e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb23a88 = _DAT_14cb23a88 + 1;
  UNLOCK();
  param_1[1] = DAT_14cb23a80;
  param_1[2] = &DAT_14cb23a80;
  LOCK();
  _DAT_14cb23a88 = _DAT_14cb23a88 + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_140367410(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb23a80;
  LOCK();
  _DAT_14cb23a88 = _DAT_14cb23a88 + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_140367410(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  _DAT_14cb23a88 = _DAT_14cb23a88 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 140367410 FUN_140367410 body=84 status=ok
// SIG undefined FUN_140367410(void)

undefined8 FUN_140367410(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  if (((((*(int *)(param_1 + 0x9c) == 0) || (uVar1 = *(uint *)(param_1 + 0x98), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x9c))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar3 = *plVar6, lVar3 == 0)))) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(lVar3 + 0x20), lVar5 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = (code *)&LAB_14355090c;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_147b8e16d;
        pcStack_50 = (code *)&LAB_140810a38;
        pwStack_58 = L"Engine";
        uStack_60 = 0x800000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        ppcStack_40 = &pcStack_20;
        pcStack_20 = FUN_1449e2820;
        pcStack_30 = FUN_14081d0ea;
        pcStack_38 = FUN_14081d0ea;
        puStack_48 = &LAB_1468c5283;
        pcStack_50 = FUN_142809da0;
        pwStack_58 = L"Engine";
        uStack_60 = 0x400000000;
        uStack_68 = 0x10000000;
        uStack_70 = 8;
        uStack_78 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar7 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(lVar7 + 0xc0);
          goto LAB_1447211c7;
        }
      }
    }
  }
  uVar4 = 0;
LAB_1447211c7:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140367464 FUN_140367464 body=162 status=ok
// SIG undefined FUN_140367464(void)

void FUN_140367464(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1403674f1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1403674f1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140367506 FUN_140367506 body=128 status=ok
// SIG undefined FUN_140367506(void)

void FUN_140367506(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x88) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x88 + 4) = uVar4;
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



// FUNCTION 140367586 FUN_140367586 body=575 status=ok
// SIG undefined FUN_140367586(void)

void FUN_140367586(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [36];
  undefined1 local_54 [20];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14035cf70();
  plVar10 = *(longlong **)(param_1 + 0x80);
  if (plVar10 != (longlong *)0x0) {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) goto LAB_1403675df;
      LOCK();
      iVar3 = (int)plVar10[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + 0x78);
    LOCK();
    plVar6 = plVar10 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (lVar9 != 0) {
      cVar4 = FUN_14570329c(param_2,lVar9 + 0x40);
      if ((cVar4 == '\0') && (*(char *)(param_1 + 0x105) == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
      goto LAB_14036764e;
    }
  }
LAB_1403675df:
  if (*(int *)(param_1 + 0x9c) == 0) {
LAB_140367636:
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x98);
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         ((((int)plVar10[2] != *(int *)(param_1 + 0x9c) ||
           ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) || (*plVar10 == 0)))) goto LAB_140367636;
      uVar7 = FUN_1447210f0();
    }
  }
  FUN_1402b6034(&local_40,uVar7);
  if (local_38 != (longlong *)0x0) {
    iVar5 = (int)local_38[1];
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(local_38 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
      plVar10 = local_38;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      if ((local_40 != 0) &&
         (plVar6 = (longlong *)FUN_14479d2ce((uint *)(param_1 + 0x98)), plVar6 != (longlong *)0x0))
      {
        uVar7 = FUN_144a78ab8();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
        if (plVar6 != (longlong *)0x0) {
          uVar7 = FUN_144a78ab8();
          plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
          if ((plVar6 != plVar8) && (plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x10))(plVar8,local_54,1);
            lVar9 = FUN_14041cc7c(local_40,local_54);
            if ((lVar9 != 0) && (cVar4 = FUN_14570329c(lVar9 + 0x40,param_2), cVar4 != '\0')) {
              FUN_1456f10f0(param_1);
            }
          }
        }
      }
      LOCK();
      plVar6 = plVar10 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
LAB_14036764e:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403677da FUN_1403677da body=476 status=ok
// SIG undefined FUN_1403677da(void)

int * FUN_1403677da(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1403679b6 FUN_1403679b6 body=310 status=ok
// SIG undefined FUN_1403679b6(void)

longlong * FUN_1403679b6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb1ae68;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140367aee FUN_140367aee body=472 status=ok
// SIG undefined FUN_140367aee(void)

void FUN_140367aee(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar9 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar9 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar12 = 0;
      uVar14 = 1;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar10 = *puVar13;
      if (uVar10 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar14 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar14 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar12) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar13[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar12 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar14 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
    }
    if (iVar9 != iVar2) {
      uVar10 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x14) * 4) =
             0xffffffff;
        uVar10 = ~(uint)uVar14 & uVar10;
        puVar13 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar9 = (int)uVar12;
        lVar5 = (longlong)iVar9;
        uVar8 = puVar13[lVar5] & uVar10;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar9) {
            iVar7 = iVar9;
          }
          if (iVar9 < iVar6) {
            lVar15 = 0;
            do {
              uVar8 = puVar13[lVar5 + lVar15 + 1];
              if (uVar8 != 0) {
                uVar12 = (ulonglong)(iVar9 + (int)lVar15 + 1);
                uVar10 = 0xffffffff;
                goto LAB_140367c4d;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar7 - lVar5 != lVar15);
            uVar10 = 0xffffffff;
            iVar9 = iVar7;
          }
          uVar12 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar3;
        }
        else {
LAB_140367c4d:
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar14 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar9 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
      } while (iVar9 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 140367cc6 FUN_140367cc6 body=370 status=ok
// SIG undefined FUN_140367cc6(void)

undefined8 * FUN_140367cc6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140367e45 FUN_140367e45 body=237 status=ok
// SIG undefined FUN_140367e45(void)

void FUN_140367e45(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = 0;
      iVar2 = *(int *)(param_2 + 8 + lVar3);
      _Src = *(void **)(param_2 + lVar3);
      *(int *)(param_1 + 8 + lVar3) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc + lVar3) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_1 + lVar3),iVar2,0);
        memcpy(*(void **)(param_1 + lVar3),_Src,(longlong)iVar2 * 2);
      }
      FUN_14034cca6(param_1 + lVar3 + 0x10,param_2 + lVar3 + 0x10);
      lVar1 = param_1 + lVar3;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0xffffffff00000080;
      *(undefined4 *)(lVar1 + 0x7c) = 0;
      *(undefined8 *)(lVar1 + 0x88) = 0;
      *(undefined4 *)(lVar1 + 0x90) = 0;
      FUN_14035adc8((undefined8 *)(lVar1 + 0x48),param_2 + 0x48 + lVar3);
      lVar3 = lVar3 + 0x98;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140367f32 FUN_140367f32 body=55 status=ok
// SIG undefined FUN_140367f32(void)

void FUN_140367f32(longlong *param_1)

{
  FUN_140367f6a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140367f6a FUN_140367f6a body=121 status=ok
// SIG undefined FUN_140367f6a(void)

void FUN_140367f6a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 140367fe4 FUN_140367fe4 body=306 status=ok
// SIG undefined FUN_140367fe4(void)

undefined4 *
FUN_140367fe4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1403681ba(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  local_58 = param_4;
  cVar2 = FUN_140368118(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0xc) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14037622e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140368118 FUN_140368118 body=160 status=ok
// SIG undefined FUN_140368118(void)

void FUN_140368118(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar2 = FUN_1403682a2();
    if (iVar2 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 0x10) = *param_3;
      FUN_147a731aa(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_140368146;
    }
  }
  uVar1 = 0;
LAB_140368146:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403681ba FUN_1403681ba body=231 status=ok
// SIG undefined FUN_1403681ba(void)

int * FUN_1403681ba(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 1403682a2 FUN_1403682a2 body=186 status=ok
// SIG undefined FUN_1403682a2(void)

int FUN_1403682a2(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1403682cb;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1403682cb:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14036835e FUN_14036835e body=1591 status=ok
// SIG undefined FUN_14036835e(void)

void FUN_14036835e(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  
  if (*(int *)(param_1 + 0xac) == 0) {
LAB_1403683c9:
    lVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xa8);
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar6 == 0) ||
         ((*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0xac) ||
          ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) goto LAB_1403683c9;
      lVar6 = FUN_14479d2ce();
    }
  }
  if (lVar6 == param_2) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    FUN_140bf70b8(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  lVar6 = (longlong)iVar2;
  if (lVar6 == 0) {
    iVar17 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x78);
    if ((((*(int *)(lVar3 + 8) == 0) || (uVar1 = *(uint *)(lVar3 + 4), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       ((plVar7 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar3 + 8))))) {
      bVar18 = param_2 != 0;
LAB_1403688a7:
      bVar19 = false;
    }
    else {
      bVar19 = false;
      bVar18 = param_2 != 0;
      if ((bVar18) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
        bVar18 = true;
        if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) goto LAB_1403688a7;
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar11 = *plVar7;
        }
        else {
          lVar11 = 0;
        }
        bVar19 = lVar11 == param_2;
      }
    }
    iVar17 = 0;
    iVar15 = 0;
    do {
      bVar4 = bVar19;
      if (iVar15 + 1 < iVar2) {
        do {
          lVar13 = (longlong)iVar15;
          lVar14 = lVar13 + 2;
          piVar16 = (int *)(lVar13 * 0x30 + lVar3 + 0x38);
          bVar19 = true;
          lVar11 = -1;
          do {
            if ((((*piVar16 == 0) || (uVar1 = piVar16[-1], (int)uVar1 < 0)) ||
                (DAT_14c9647dc <= (int)uVar1)) ||
               (((plVar7 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *piVar16)) ||
                (((bool)((*(uint *)(plVar7 + 1) & 0x10200000) != 0 | bVar18 ^ 1U) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
              if (bVar4) {
                if (!bVar19) goto LAB_14036861d;
                iVar12 = iVar15 - (int)lVar11;
                goto LAB_14036859d;
              }
            }
            else {
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar8 = *plVar7;
              }
              else {
                lVar8 = 0;
              }
              if ((bool)(lVar8 == param_2 ^ bVar4)) {
                iVar12 = iVar15 - (int)lVar11;
                break;
              }
            }
            bVar19 = lVar14 < lVar6;
            lVar11 = lVar11 + -1;
            lVar14 = lVar14 + 1;
            piVar16 = piVar16 + 0xc;
            iVar12 = iVar2;
          } while (lVar13 - lVar6 != lVar11);
          bVar5 = !bVar4;
          iVar9 = iVar15;
          iVar10 = iVar12;
          bVar4 = bVar19;
          if (bVar5) break;
          if (!bVar19) goto LAB_14036861d;
LAB_14036859d:
          bVar4 = false;
          iVar9 = iVar12;
          iVar15 = iVar12;
          iVar10 = iVar12 + 1;
        } while (iVar12 + 1 < iVar2);
      }
      else {
        if (bVar4) break;
        iVar9 = iVar15;
        iVar10 = iVar15 + 1;
        bVar4 = false;
      }
      iVar15 = iVar10;
      if (iVar17 != iVar9) {
        memmove((void *)((longlong)iVar17 * 0x30 + lVar3),(void *)((longlong)iVar9 * 0x30 + lVar3),
                (longlong)(iVar15 - iVar9) * 0x30);
      }
      iVar17 = iVar17 + (iVar15 - iVar9);
      bVar19 = true;
    } while (bVar4);
LAB_14036861d:
    *(int *)(param_1 + 0x80) = iVar17;
    iVar17 = iVar17 - iVar2;
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar17;
  iVar2 = *(int *)(param_1 + 0xa0);
  lVar6 = (longlong)iVar2;
  if (lVar6 == 0) goto LAB_14036887c;
  lVar3 = *(longlong *)(param_1 + 0x98);
  if (((*(int *)(lVar3 + 8) == 0) || (uVar1 = *(uint *)(lVar3 + 4), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar3 + 8))))))) {
    bVar18 = param_2 != 0;
LAB_1403688b9:
    bVar19 = false;
  }
  else {
    bVar19 = false;
    bVar18 = param_2 != 0;
    if ((bVar18) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      bVar18 = true;
      if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) goto LAB_1403688b9;
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar11 = *plVar7;
      }
      else {
        lVar11 = 0;
      }
      bVar19 = lVar11 == param_2;
    }
  }
  iVar17 = 0;
  iVar15 = 0;
  do {
    bVar4 = bVar19;
    if (iVar15 + 1 < iVar2) {
      do {
        lVar13 = (longlong)iVar15;
        lVar14 = lVar13 + 2;
        piVar16 = (int *)(lVar13 * 0x30 + lVar3 + 0x38);
        bVar19 = true;
        lVar11 = -1;
        do {
          if ((((*piVar16 == 0) || (uVar1 = piVar16[-1], (int)uVar1 < 0)) ||
              (DAT_14c9647dc <= (int)uVar1)) ||
             (((plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *piVar16)) ||
              (((bool)((*(uint *)(plVar7 + 1) & 0x10200000) != 0 | bVar18 ^ 1U) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))))) {
            if (bVar4) {
              if (!bVar19) goto LAB_140368870;
              iVar12 = iVar15 - (int)lVar11;
              goto LAB_1403687f4;
            }
          }
          else {
            if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar7;
            }
            else {
              lVar8 = 0;
            }
            if ((bool)(lVar8 == param_2 ^ bVar4)) {
              iVar12 = iVar15 - (int)lVar11;
              break;
            }
          }
          bVar19 = lVar14 < lVar6;
          lVar11 = lVar11 + -1;
          lVar14 = lVar14 + 1;
          piVar16 = piVar16 + 0xc;
          iVar12 = iVar2;
        } while (lVar13 - lVar6 != lVar11);
        bVar5 = !bVar4;
        iVar9 = iVar12;
        iVar10 = iVar15;
        bVar4 = bVar19;
        if (bVar5) break;
        if (!bVar19) goto LAB_140368870;
LAB_1403687f4:
        bVar4 = false;
        iVar9 = iVar12 + 1;
        iVar10 = iVar12;
        iVar15 = iVar12;
      } while (iVar12 + 1 < iVar2);
    }
    else {
      if (bVar4) break;
      iVar9 = iVar15 + 1;
      iVar10 = iVar15;
      bVar4 = false;
    }
    iVar15 = iVar9;
    if (iVar17 != iVar10) {
      memmove((void *)((longlong)iVar17 * 0x30 + lVar3),(void *)((longlong)iVar10 * 0x30 + lVar3),
              (longlong)(iVar15 - iVar10) * 0x30);
    }
    iVar17 = iVar17 + (iVar15 - iVar10);
    bVar19 = true;
  } while (bVar4);
LAB_140368870:
  *(int *)(param_1 + 0xa0) = iVar17;
LAB_14036887c:
  if ((*(char *)(param_1 + 0x378) == '\x01') &&
     (lVar6 = FUN_14479d2ce(param_1 + 0xb0), lVar6 == param_2)) {
    *(undefined4 *)(param_1 + 0x398) = 0;
    if (*(int *)(param_1 + 0x39c) != 0) {
      FUN_140254dde(param_1 + 0x380,0);
    }
    *(undefined1 *)(param_1 + 0x378) = 0;
    FUN_145703f30(param_1);
  }
  FUN_140bf70b8(param_1);
  return;
}



// FUNCTION 140368996 FUN_140368996 body=132 status=ok
// SIG undefined FUN_140368996(void)

undefined8 FUN_140368996(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_14570425a((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 140368a1a FUN_140368a1a body=315 status=ok
// SIG undefined FUN_140368a1a(void)

undefined8 FUN_140368a1a(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (((int)param_2 < 0) || ((int)param_1[0xf1e] <= (int)param_2)) {
LAB_140368afb:
    uVar5 = 0;
  }
  else {
    lVar2 = param_1[0xf1d];
    uVar4 = (ulonglong)param_2;
    if (*(int *)(lVar2 + 0xc + uVar4 * 0x48) == -1) {
      pcVar3 = *(code **)(*param_1 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        if (param_1[0x76] != 0) goto LAB_140368afb;
        pcVar3 = *(code **)(*param_1 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
                  (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) &&
                 ((int)uVar1 < DAT_14c9647dc)) &&
                ((plVar7 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar7 != (longlong *)0x0 &&
                 ((int)plVar7[2] == *(int *)((longlong)param_1 + 0x75b4))))) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
                lVar6 = *plVar7;
              }
              else {
                lVar6 = 0;
              }
              lVar6 = lVar6 + 0x110;
              goto LAB_140368b15;
            }
          }
          else {
            lVar6 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140368b15:
            if (lVar6 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x20);
              goto LAB_140368b1e;
            }
          }
        }
        else {
          lVar6 = (*pcVar3)();
LAB_140368b1e:
          if (lVar6 != 0) {
            lVar6 = *(longlong *)(lVar6 + 0x3b0);
            goto LAB_140368b2a;
          }
        }
      }
      else {
        lVar6 = (*pcVar3)();
LAB_140368b2a:
        if (lVar6 != 0) goto LAB_140368afb;
      }
      uVar4 = lVar2 + uVar4 * 0x48;
      if ((*(longlong *)(uVar4 + 0x20) == 0) || (*(longlong *)(uVar4 + 0x28) == 0))
      goto LAB_140368afb;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 140368b56 FUN_140368b56 body=184 status=ok
// SIG undefined FUN_140368b56(void)

void FUN_140368b56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140368e06();
  FUN_1401d9a90(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140368c0e(param_1 + 0x40);
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140368c0e FUN_140368c0e body=55 status=ok
// SIG undefined FUN_140368c0e(void)

void FUN_140368c0e(longlong *param_1)

{
  FUN_1403691d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140368c45 FUN_140368c45 body=79 status=ok
// SIG undefined FUN_140368c45(void)

void FUN_140368c45(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*puVar4;
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
      puVar4 = puVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140368c94 FUN_140368c94 body=370 status=ok
// SIG undefined FUN_140368c94(void)

undefined8 * FUN_140368c94(int *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0x8000000000;
  param_2[0xe] = 0xffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0xf;
  *(undefined2 *)(param_2 + 0x18) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *param_2 = *(undefined8 *)(param_1 + 2);
  FUN_140b96472(param_2,1,1);
  param_2[1] = *(undefined8 *)(param_1 + 4);
  FUN_140b96472(param_2,1,1);
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 4);
    FUN_140b96472(param_2,1,1);
    FUN_143da44ba(lVar3,param_3,*param_1,param_2 + 2,uVar2,param_1 + 6,param_1 + 10,param_1 + 0xe,
                  param_4);
  }
  iVar1 = param_1[0x18];
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x16);
    lVar4 = 0;
    do {
      FUN_1488cb966(param_2,*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *param_1;
  lVar3 = FUN_140b47a16(param_2,&DAT_14cb843e8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 8) == '\0')) {
    *(longlong *)(lVar3 + 0x28) = (longlong)iVar1;
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  FUN_140cd1b28(param_2);
  return param_2;
}



// FUNCTION 140368e06 FUN_140368e06 body=517 status=ok
// SIG undefined FUN_140368e06(void)

void FUN_140368e06(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x50);
    }
    uVar14 = *puVar3;
    if (uVar14 == 0) {
      iVar7 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar7 = iVar1 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar10 == uVar12) goto LAB_140368f40;
        iVar7 = iVar7 + 0x20;
        uVar14 = puVar3[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar10 = uVar13 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 != iVar1) {
    uVar14 = 0xffffffff;
    iVar2 = iVar1;
    do {
      lVar9 = *(longlong *)(param_1 + 0x40);
      lVar11 = *(longlong *)(lVar9 + 8 + (longlong)iVar8 * 0x18);
      if (lVar11 != 0) {
        if (*(longlong *)(lVar11 + 0x38) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar11);
        *(undefined8 *)(lVar9 + (longlong)iVar8 * 0x18 + 8) = 0;
        iVar2 = *(int *)(param_1 + 0x68);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar3 = *(uint **)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x50);
      }
      iVar8 = (int)uVar12;
      lVar9 = (longlong)iVar8;
      uVar4 = puVar3[lVar9] & uVar14;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar8 < iVar5) {
          lVar11 = 0;
          do {
            uVar4 = puVar3[lVar9 + lVar11 + 1];
            if (uVar4 != 0) {
              uVar12 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140368f04;
            }
            iVar7 = iVar7 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar9 != lVar11);
          uVar14 = 0xffffffff;
          lVar9 = (longlong)iVar6;
        }
        uVar12 = lVar9 + 1U & 0xffffffff;
        iVar8 = iVar2;
      }
      else {
LAB_140368f04:
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar10 = uVar13 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar8 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
    } while (iVar8 != iVar1);
  }
LAB_140368f40:
  FUN_14036900c((longlong *)(param_1 + 0x40),0);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  return;
}



// FUNCTION 14036900c FUN_14036900c body=431 status=ok
// SIG undefined FUN_14036900c(void)

void FUN_14036900c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  iVar6 = 1;
  if (3 < param_2) {
    uVar4 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar3 = (int)param_1[9];
  if (iVar3 < iVar6 && 0 < (int)param_2 || iVar6 < iVar3) {
    FUN_1403691d2(param_1,param_2);
    *(int *)(param_1 + 9) = iVar6;
    if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1403692e0(param_1);
    return;
  }
  plVar7 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[8];
  }
  iVar6 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar6 = iVar3;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar6 >> 2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_1[5];
    }
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar2 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar3 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar6) || (local_68 = local_48, uStack_50 != plVar1)) {
      do {
        local_68 = uVar2;
        *(undefined4 *)
         ((longlong)plVar7 + (longlong)*(int *)(*local_80 + 0x14 + (longlong)iVar3 * 0x18) * 4) =
             0xffffffff;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
    }
  }
  else if (0 < iVar3) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)plVar7 + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[9]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1403691d2 FUN_1403691d2 body=123 status=ok
// SIG undefined FUN_1403691d2(void)

void FUN_1403691d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14036924e FUN_14036924e body=145 status=ok
// SIG undefined FUN_14036924e(void)

void FUN_14036924e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403692e0 FUN_1403692e0 body=627 status=ok
// SIG undefined FUN_1403692e0(void)

void FUN_1403692e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
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
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0);
    }
LAB_140369334:
    uVar4 = 0;
    do {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar8 != uVar4);
  }
  else {
    if (uVar8 == 0) goto LAB_1403693a5;
    FUN_1446efa72(plVar6,0);
    if (0 < (int)uVar8) goto LAB_140369334;
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
        if (uVar10 == uVar7) goto LAB_140369377;
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
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar9 <= local_3c) {
      local_3c = iVar9;
    }
  }
LAB_140369377:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar9) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c;
      uVar3 = *(undefined8 *)(lVar2 + lVar5 * 0x18);
      uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar4 = (uint)uVar3 & 0xffff;
      uVar10 = (longlong)
               (int)(((uint)uVar3 << 0x10 | uVar4) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar9 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1403693a5:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140369554 FUN_140369554 body=9 status=ok
// SIG undefined FUN_140369554(void)

void FUN_140369554(longlong param_1)

{
  FUN_140944000(param_1 + 0x10);
  return;
}



// FUNCTION 14036955e FUN_14036955e body=77 status=ok
// SIG undefined FUN_14036955e(void)

void FUN_14036955e(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  *(byte *)(param_1 + 6) = bVar1 & 0xfe | param_2;
  if (((bVar1 & 0x10) >> 4 & param_2) != 1) {
    return;
  }
  if (((bVar1 & 2) != 0) && (*(char *)(param_1 + 1) == '\0')) {
    (**(code **)(*(longlong *)*param_1 + 0x2a8))();
  }
  FUN_140ebeee8(param_1);
  return;
}



// FUNCTION 1403695ab FUN_1403695ab body=761 status=ok
// SIG undefined FUN_1403695ab(void)

void FUN_1403695ab(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,longlong *param_11)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_130;
  undefined1 local_128 [96];
  longlong local_c8;
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined2 *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((param_2[1] != 0) && (1 < (int)param_2[2] + 1U)) || (param_2[5] != 0)) ||
     (cVar6 = (**(code **)(*param_2 + 8))(param_2), cVar6 != '\0')) {
    iVar1 = (int)param_1[1];
    lVar9 = (longlong)iVar1;
    cVar6 = (**(code **)(*param_2 + 8))(param_2);
    if (cVar6 != '\0') {
      FUN_140e45f8a(local_128,param_2 + 8);
      lVar5 = param_11[1];
      if ((longlong)(int)lVar5 != 0) {
        lVar2 = *param_11;
        lVar8 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar2 + lVar8);
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,local_128,param_4);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar8);
      }
      local_130 = param_10;
      local_140 = param_9;
      local_150 = param_8;
      local_158 = param_7;
      local_138 = 0;
      FUN_14036c2de(param_1,local_128,param_3,param_4);
      FUN_140060f6a(local_78);
      local_98 = &DAT_14a171d50;
      local_80 = 0;
      if (local_7c != 0) {
        FUN_140115c12(&local_88,0);
      }
      local_90 = 0;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_b8 = &DAT_14a171d50;
      local_a0 = 0;
      if (local_9c != 0) {
        FUN_140115c12(&local_a8,0);
      }
      local_b0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
    if (((int)param_1[1] == iVar1) &&
       (((param_2[1] != 0 && ((int)param_2[2] - 1U < 0xfffffffe)) || (param_2[5] != 0)))) {
      local_130 = param_10;
      local_138 = param_9;
      local_150 = param_6;
      local_158 = param_5;
      local_148 = param_7;
      local_140 = param_8;
      FUN_140371a87(param_1,param_2 + 1,param_3,param_4);
      iVar7 = (int)param_1[1];
      if (iVar1 < iVar7) {
        do {
          lVar5 = param_11[1];
          if ((longlong)(int)lVar5 != 0) {
            lVar2 = *param_11;
            lVar8 = 0;
            do {
              plVar3 = *(longlong **)(lVar2 + lVar8);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 8))(plVar3,*param_1 + lVar9 * 0x68,param_4);
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)(int)lVar5 * 8 != lVar8);
            iVar7 = (int)param_1[1];
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403698a6 FUN_1403698a6 body=148 status=ok
// SIG undefined FUN_1403698a6(void)

void FUN_1403698a6(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  return;
}



// FUNCTION 14036993a FUN_14036993a body=267 status=ok
// SIG undefined FUN_14036993a(void)

void FUN_14036993a(longlong param_1,longlong *param_2,undefined8 *param_3,uint param_4,char param_5)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar7 = FUN_1409e8768();
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar8 = (uint *)*param_3;
    puVar1 = puVar8 + *(int *)(param_3 + 1);
    lVar9 = (longlong)*(int *)(param_1 + 0x38) * 0x24 + *(longlong *)(lVar7 + 0x28);
    if ((longlong)*(int *)(param_1 + 0x38) == -1) {
      lVar9 = lVar7;
    }
    bVar2 = 0;
    do {
      bVar6 = bVar2;
      uVar3 = *puVar8;
      uVar10 = (ulonglong)(int)uVar3;
      bVar2 = *(byte *)(lVar7 + 4 + uVar10);
      if ((uVar10 < 0x20) && (bVar2 != param_4)) {
        *(char *)(lVar7 + 4 + uVar10) = (char)param_4;
      }
      iVar4 = *(int *)(lVar7 + 0x30);
      if ((longlong)iVar4 != 0) {
        lVar5 = *(longlong *)(lVar7 + 0x28);
        lVar11 = 0;
        do {
          if (((*(byte *)(lVar5 + uVar10 + 4 + lVar11) == bVar2) && (bVar2 != param_4)) &&
             (uVar3 < 0x20)) {
            *(char *)((ulonglong)uVar3 + lVar5 + 4 + lVar11) = (char)param_4;
          }
          lVar11 = lVar11 + 0x24;
        } while ((longlong)iVar4 * 0x24 != lVar11);
      }
      if (param_5 == '\0') {
        bVar12 = false;
      }
      else {
        bVar12 = *(byte *)(lVar9 + 4 + uVar10) != bVar2;
      }
      puVar8 = puVar8 + 1;
      bVar2 = bVar6 | bVar12;
    } while (puVar8 != puVar1);
    if ((bool)(bVar6 | bVar12)) {
                    /* WARNING: Could not recover jumptable at 0x000140369a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x948))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140369a46 FUN_140369a46 body=364 status=ok
// SIG undefined FUN_140369a46(void)

void FUN_140369a46(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
    *(int *)(param_1 + 0xc) = iVar3;
    uVar4 = FUN_140bc1dde();
    lVar7 = (**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (lVar7 != 0) {
      uVar4 = FUN_140bc1dde();
      lVar5 = FUN_144718840(lVar7,uVar4);
      if (lVar7 != lVar5) goto LAB_140369ae0;
    }
  }
  lVar5 = 0;
LAB_140369ae0:
  FUN_140369bb4(&local_38,lVar5);
  *(undefined4 *)(param_1 + 0x10) = local_38;
  *(undefined4 *)(param_1 + 0x14) = uStack_34;
  *(undefined4 *)(param_1 + 0x18) = uStack_30;
  *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *(longlong **)(param_1 + 0x98) = param_2;
  if ((param_2 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0xa0) = param_2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140369bb4 FUN_140369bb4 body=204 status=ok
// SIG undefined FUN_140369bb4(void)

uint * FUN_140369bb4(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140369c80 FUN_140369c80 body=380 status=ok
// SIG undefined FUN_140369c80(void)

longlong FUN_140369c80(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140369dfc();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140369dfc FUN_140369dfc body=228 status=ok
// SIG undefined FUN_140369dfc(void)

longlong FUN_140369dfc(void)

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
  if (DAT_14cbaa908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148c14a23;
    local_40 = &LAB_145cc81b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x440;
    FUN_14081cfa3(L"/Script/OakGame",L"OakFreezeData",&DAT_14cbaa908,&DAT_148c14a22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140369ee2 FUN_140369ee2 body=387 status=ok
// SIG undefined FUN_140369ee2(void)

void FUN_140369ee2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  FUN_14036a066(param_1 + 0x110,&local_28);
  lVar4 = local_28;
  if (local_28 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_28);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x120) = lVar4;
  if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_3);
    lVar4 = *(longlong *)(param_1 + 0x120);
  }
  *(longlong *)(param_1 + 0x128) = param_3;
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(lVar4 + 0x858);
    if ((lVar1 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar1);
      lVar4 = *(longlong *)(param_1 + 0x120);
    }
    *(longlong *)(param_1 + 0x138) = lVar1;
    lVar1 = *(longlong *)(lVar4 + 0x428);
    if (lVar1 != 0) {
      lVar3 = *(longlong *)(lVar1 + 0xae8);
      if (DAT_14c950c29 == 1) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(lVar1 + 0xae8);
          lVar4 = *(longlong *)(param_1 + 0x120);
        }
      }
      *(longlong *)(param_1 + 0x130) = lVar3;
    }
    if (*(char *)(lVar4 + 0x178) == '\x03') {
      FUN_140e70c9e(&local_30,*(undefined8 *)(lVar4 + 0x18));
      *(undefined8 *)(param_1 + 0x4d0) = local_30;
      *(int *)(param_1 + 0x398) = (int)((ulonglong)local_30 >> 0x20);
      *(undefined1 *)(param_1 + 0x51) = 1;
      if ((*(longlong *)(param_1 + 0x110) != 0) &&
         (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_1 + 0x118) + 0x20))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14036a066 FUN_14036a066 body=107 status=ok
// SIG undefined FUN_14036a066(void)

longlong * FUN_14036a066(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_14036a0a7;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  uVar2 = FUN_1408a34bc();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
LAB_14036a0a7:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 14036a0d2 FUN_14036a0d2 body=430 status=ok
// SIG undefined FUN_14036a0d2(void)

void FUN_14036a0d2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  longlong **local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x9038);
  *(undefined8 *)(param_1 + 0x9038) = 0;
  plVar2 = (longlong *)(param_1 + 0x9040);
  *(undefined8 *)(param_1 + 0x9040) = 0;
  *(undefined8 *)(param_1 + 0x9048) = 0;
  lVar4 = FUN_14030dc32();
  if (lVar4 == 0) {
    lVar4 = *plVar2;
  }
  else {
    lVar5 = (**(code **)(*(longlong *)(param_1 + 0x3bc0) + 0x10))(param_1 + 0x3bc0);
    FUN_14097d33c(lVar4,&local_58,*(undefined1 *)(lVar5 + 0x57));
    if (*(undefined1 **)(param_1 + 0x9038) != local_58) {
      *(undefined8 *)(param_1 + 0x9048) = 0;
    }
    *plVar1 = (longlong)local_58;
    if ((longlong **)*plVar2 != local_50) {
      *(undefined8 *)(param_1 + 0x9048) = 0;
    }
    uVar6 = FUN_14477b664();
    lVar4 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x9040) = lVar4;
    *(undefined8 *)(param_1 + 0x9048) = local_48;
  }
  if (lVar4 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar4 = FUN_14477b664(uVar6);
    *plVar2 = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x9048);
  if (*(longlong *)(param_1 + 0x9048) == 0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_14036a1df;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x9048) = 0;
      goto LAB_14036a1df;
    }
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_38 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(param_1 + 0x9048) = local_38;
    lVar5 = local_38;
    if (local_38 == 0) goto LAB_14036a1df;
  }
  local_38 = lVar5;
  if (*(longlong **)(param_1 + 0x35d0) != (longlong *)0x0) {
    local_40 = &local_38;
    local_50 = &local_40;
    local_58 = &LAB_1440b5ff6;
    (**(code **)(**(longlong **)(param_1 + 0x35d0) + 0x40))();
  }
LAB_14036a1df:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14036a282 FUN_14036a282 body=370 status=ok
// SIG undefined FUN_14036a282(void)

undefined8 * FUN_14036a282(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14036a402 FUN_14036a402 body=494 status=ok
// SIG undefined FUN_14036a402(void)

undefined * FUN_14036a402(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x88);
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar14) {
          return &DAT_14c763fd8;
        }
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar13[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar15 = (longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x78);
      cVar4 = FUN_14021d296(param_2,lVar15);
      if (cVar4 != '\0') {
        return (undefined *)(lVar15 + 8);
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar13 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x88);
      }
      iVar3 = *(int *)(param_1 + 0xa0);
      iVar5 = (int)uVar14;
      lVar15 = (longlong)iVar5;
      uVar8 = puVar13[lVar15] & uVar11;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar5 < iVar6) {
          lVar12 = 0;
          do {
            uVar8 = puVar13[lVar15 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar11 = 0xffffffff;
              goto LAB_14036a559;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar15 != lVar12);
          uVar11 = 0xffffffff;
          iVar5 = iVar7;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14036a559:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return &DAT_14c763fd8;
}



// FUNCTION 14036a5f0 FUN_14036a5f0 body=78 status=ok
// SIG undefined FUN_14036a5f0(void)

void FUN_14036a5f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140831778();
  if (*(longlong *)(lVar1 + 0x1a8) != 0) {
    FUN_140559328(param_2 + 0x90,lVar1 + 0x1a8);
    FUN_140559328(param_2 + 0x70,lVar1 + 0x1a8);
    return;
  }
  return;
}



// FUNCTION 14036a63e FUN_14036a63e body=57 status=ok
// SIG undefined FUN_14036a63e(void)

void FUN_14036a63e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91eb0 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91eb0 = FUN_140002ddd(FUN_1418b7497,uVar1,L"GbxUIDisplayDataDef_LocalizedText");
  }
  return;
}



// FUNCTION 14036a678 FUN_14036a678 body=512 status=ok
// SIG undefined FUN_14036a678(void)

void FUN_14036a678(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_14036a802;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x58) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar3 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar3 = *(int *)(lVar9 + 0x10);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar3 = iVar7;
    }
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  lVar9 = FUN_1403ca227();
  uVar4 = (**(code **)(*(longlong *)(param_2 + 0x3a20) + 0x10))(param_2 + 0x3a20);
  uVar5 = FUN_14011c2be(lVar9 + 0x108);
  local_48 = 0;
  uStack_40 = (longlong *)0x0;
  uStack_30 = CONCAT35(uStack_30._5_3_,0xff00000000);
  local_38 = 0;
  FUN_14493679e(uVar4,&local_48,uVar5,0);
  if ((((uStack_40 == (longlong *)0x0) || (local_48._4_4_ == 0)) || ((int)(uint)local_48 < 0)) ||
     (((DAT_14c9647dc <= (int)(uint)local_48 ||
       (lVar8 = (ulonglong)(((uint)local_48 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_48 >> 0x10) * 8), lVar8 == 0))
      || ((*(int *)(lVar8 + 0x10) != local_48._4_4_ || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0))))
     )) {
LAB_14036a7b3:
    uVar5 = FUN_14011c2be(lVar9 + 0x108);
    FUN_14036c7e6(uVar4,&local_68,uVar5,0);
    local_38 = local_58;
    uStack_30 = uStack_50;
    local_48 = local_68;
    uStack_40 = plStack_60;
  }
  else {
    if (*(code **)(*uStack_40 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar6 = uStack_40 + 0xd9;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*uStack_40 + 0x10))();
    }
    cVar2 = FUN_14486eb0e(plVar6,&local_48);
    if (cVar2 == '\0') goto LAB_14036a7b3;
  }
  *(undefined4 *)(param_1 + 0x88) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x8c) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x90) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_30._4_4_;
  *(uint *)(param_1 + 0x78) = (uint)local_48;
  *(int *)(param_1 + 0x7c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x80) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x84) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x98) = 0;
LAB_14036a802:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14036a87a FUN_14036a87a body=228 status=ok
// SIG undefined FUN_14036a87a(void)

longlong FUN_14036a87a(void)

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
  if (DAT_14cb20de0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f14cfd;
    local_40 = &LAB_1458f5323;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverUserData",&DAT_14cb20de0,&DAT_147f14cfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20de0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14036a960 FUN_14036a960 body=188 status=ok
// SIG undefined FUN_14036a960(void)

void FUN_14036a960(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x55) & 2) != 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfe;
    FUN_140639baa(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_145706336(param_1 + 0x38,0);
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar2 = *param_2;
      lVar1 = (longlong)(int)param_2[1] * 0xf0;
      do {
        FUN_14036d004(param_1,lVar2);
        lVar2 = lVar2 + 0xf0;
        lVar1 = lVar1 + -0xf0;
      } while (lVar1 != 0);
    }
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 1;
    FUN_14036aa1c(param_1);
    FUN_14036abb0(param_1);
    FUN_14036b0fc(param_1);
    FUN_1447cd2ec(param_1 + 8,0);
    FUN_1447f69b6(param_1 + 0x18);
    FUN_14036aa80(param_1);
    return;
  }
  return;
}



// FUNCTION 14036aa1c FUN_14036aa1c body=99 status=ok
// SIG undefined FUN_14036aa1c(void)

void FUN_14036aa1c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0x18;
    lVar2 = 0;
    do {
      lVar1 = FUN_1409d448e(*(longlong *)(param_1 + 0x38) + lVar3);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x19) == '\x01') {
          *(int *)(param_1 + 0x58) = (int)lVar2;
        }
        else if (*(char *)(lVar1 + 0x19) == '\x02') {
          *(int *)(param_1 + 0x5c) = (int)lVar2;
        }
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x88;
    } while (lVar2 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 14036aa80 FUN_14036aa80 body=284 status=ok
// SIG undefined FUN_14036aa80(void)

void FUN_14036aa80(longlong param_1)

{
  longlong lVar1;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar1 = FUN_144718840(lVar1,DAT_14cb56270);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


