// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146f25f36 FUN_146f25f36 body=208 status=ok
// SIG undefined FUN_146f25f36(void)

void FUN_146f25f36(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x2100);
  if (uVar4 < *(uint *)(param_1 + 0x2104)) {
    do {
      uVar6 = (ulonglong)((uVar4 & 0x3ff) >> 5);
      if ((*(uint *)(param_1 + 0x2080 + uVar6 * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        uVar5 = (ulonglong)(uVar4 & 0x3ff);
        lVar3 = *(longlong *)(param_1 + uVar5 * 8);
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x20) != 0)) &&
           ((*(byte *)(*(longlong *)(param_1 + uVar5 * 8) + 0xc) & 1) == 0)) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_146f1ae52(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(param_1 + uVar5 * 8);
          *(undefined8 *)(param_1 + uVar5 * 8) = 0;
          if (uVar4 == *(uint *)(param_1 + 0x2100)) {
            puVar1 = (uint *)(param_1 + 0x2080 + uVar6 * 4);
            *puVar1 = *puVar1 & ~(1 << ((byte)uVar4 & 0x1f));
            *(uint *)(param_1 + 0x2100) = uVar4 + 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x2104));
  }
  return;
}



// FUNCTION 146f26006 FUN_146f26006 body=34 status=ok
// SIG undefined FUN_146f26006(void)

void FUN_146f26006(undefined8 param_1,char param_2,undefined8 param_3)

{
  if (param_2 != '\x02') {
    if (param_2 == '\x01') {
      FUN_146f26102(param_1,param_3);
      return;
    }
    if (param_2 != '\0') {
      return;
    }
  }
  FUN_146f26028(param_1,param_3);
  return;
}



// FUNCTION 146f26028 FUN_146f26028 body=217 status=ok
// SIG undefined FUN_146f26028(void)

void FUN_146f26028(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = 0;
  do {
    uVar3 = *(ushort *)(param_2 + lVar10 * 2);
    if (0x3ff < uVar3) {
      uVar7 = uVar3 & 0x3ff;
      uVar8 = (uVar3 >> 10) + uVar7;
      do {
        puVar2 = (uint *)(param_1 + 0x2080 + (ulonglong)(uVar7 >> 3 & 0x7c));
        *puVar2 = *puVar2 | 1 << ((byte)uVar7 & 0x1f);
        plVar5 = *(longlong **)(param_1 + (ulonglong)(uVar7 & 0x3ff) * 8);
        if (plVar5 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + (ulonglong)(uVar7 & 0x3ff) * 8) = 0;
          LOCK();
          plVar1 = plVar5 + 4;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 0x20))(plVar5,1);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  uVar7 = *(uint *)(param_1 + 0x2100);
  uVar8 = *(uint *)(param_1 + 0x2104);
  while( true ) {
    if (uVar7 == uVar8) {
      return;
    }
    uVar6 = (ulonglong)(uVar7 >> 5 & 0x1f);
    uVar4 = *(uint *)(param_1 + 0x2080 + uVar6 * 4);
    if ((uVar4 >> (uVar7 & 0x1f) & 1) == 0) break;
    uVar9 = ~(1 << ((byte)uVar7 & 0x1f));
    *(uint *)(param_1 + 0x2080 + uVar6 * 4) = uVar4 & uVar9;
    puVar2 = (uint *)(param_1 + 0x2000 + uVar6 * 4);
    *puVar2 = *puVar2 & uVar9;
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0x2100) = uVar7;
  }
  return;
}



// FUNCTION 146f26102 FUN_146f26102 body=98 status=ok
// SIG undefined FUN_146f26102(void)

void FUN_146f26102(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar5 = *(int *)(param_1 + 0x2108);
  lVar6 = 0;
  do {
    uVar2 = *(ushort *)(param_2 + lVar6 * 2);
    uVar7 = (uint)(uVar2 >> 10);
    iVar5 = iVar5 + uVar7;
    *(int *)(param_1 + 0x2108) = iVar5;
    if (0x3ff < uVar2) {
      uVar4 = *(ushort *)(param_2 + lVar6 * 2) & 0x3ff;
      do {
        bVar3 = (byte)uVar4 & 0x1f;
        puVar1 = (uint *)(param_1 + 0x2000 + (ulonglong)(uVar4 >> 3 & 0x7c));
        *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        uVar4 = uVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}



// FUNCTION 146f26164 FUN_146f26164 body=132 status=ok
// SIG undefined FUN_146f26164(void)

undefined8 * FUN_146f26164(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[1] = *param_3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *puVar1 = &PTR_LAB_149f9a0b0;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0x400000000;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xf] = 0;
  *(undefined2 *)(puVar1 + 0x10) = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146f261e8 FUN_146f261e8 body=42 status=ok
// SIG undefined FUN_146f261e8(void)

void FUN_146f261e8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c9997b8;
  FUN_146f5b89e(param_2);
  if (*(longlong *)(param_2 + 8) == 0) {
    *(undefined8 *)(param_2 + 8) = uVar1;
  }
  return;
}



// FUNCTION 146f26212 FUN_146f26212 body=105 status=ok
// SIG undefined FUN_146f26212(void)

void * FUN_146f26212(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  _Src = *(void **)((longlong)param_2 + 0x80);
  if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
    _Src = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0x88);
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 4;
  }
  else {
    FUN_1400e91fc(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 146f2627c FUN_146f2627c body=27 status=ok
// SIG undefined FUN_146f2627c(void)

undefined8 FUN_146f2627c(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return param_2;
}



// FUNCTION 146f262b8 FUN_146f262b8 body=7 status=ok
// SIG undefined FUN_146f262b8(void)

void FUN_146f262b8(undefined8 param_1,undefined4 *param_2)

{
  FUN_146f14ba4(param_1,*param_2);
  return;
}



// FUNCTION 146f262c0 thunk_FUN_146efc8cc body=5 status=ok
// SIG undefined thunk_FUN_146efc8cc(void)

void thunk_FUN_146efc8cc(longlong *param_1,int param_2)

{
  byte bVar1;
  
  *(int *)(param_1 + 2) = param_2;
  FUN_1402d2c96(param_1,param_2 + 0x1fU >> 5,0);
  if ((int)param_1[2] != 0) {
    bVar1 = -(char)(int)param_1[2];
    *(uint *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4) =
         (uint)(*(int *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4) << (bVar1 & 0x1f)) >>
         (bVar1 & 0x1f);
  }
  return;
}



// FUNCTION 146f262c6 FUN_146f262c6 body=30 status=ok
// SIG undefined FUN_146f262c6(void)

bool FUN_146f262c6(longlong *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4);
  *(uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4) = uVar1 & ~(1 << (param_2 & 0x1f));
  return (uVar1 >> (param_2 & 0x1f) & 1) != 0;
}



// FUNCTION 146f262e4 FUN_146f262e4 body=130 status=ok
// SIG undefined FUN_146f262e4(void)

void FUN_146f262e4(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  return;
}



// FUNCTION 146f26366 FUN_146f26366 body=212 status=ok
// SIG undefined FUN_146f26366(void)

void FUN_146f26366(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar3 * 0x20) == param_2) {
          if ((lVar1 + 4U & 0xfffffffffffffffb) == 0) {
            return;
          }
          lVar4 = 4;
          do {
            if (*(int *)(lVar1 + lVar4) != -1) {
              FUN_146f2643a(param_1 + 10);
            }
            lVar4 = lVar4 + 4;
          } while (lVar4 != 0x10);
          if (*(int *)(lVar1 + 0x10) != -1) {
            FUN_146f26472(param_1 + 0x11);
          }
          if (*(int *)(lVar1 + 0x14) != -1) {
            FUN_146f264a6(param_1 + 0x18);
          }
          FUN_146f2e96a(param_1,param_2);
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 146f2643a FUN_146f2643a body=56 status=ok
// SIG undefined FUN_146f2643a(void)

void FUN_146f2643a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x20 + (longlong)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2e804(param_1,param_2);
  return;
}



// FUNCTION 146f26472 FUN_146f26472 body=52 status=ok
// SIG undefined FUN_146f26472(void)

void FUN_146f26472(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2e87e(param_1,param_2);
  return;
}



// FUNCTION 146f264a6 FUN_146f264a6 body=56 status=ok
// SIG undefined FUN_146f264a6(void)

void FUN_146f264a6(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x40 + (longlong)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2e8f0(param_1,param_2);
  return;
}



// FUNCTION 146f264de FUN_146f264de body=195 status=ok
// SIG undefined FUN_146f264de(void)

undefined4 * FUN_146f264de(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  uint *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          if (lVar3 != 0) {
            puVar4 = (undefined4 *)(lVar3 + 4);
            goto LAB_146f26584;
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = &local_2c;
  FUN_146f2ea88(param_1,&local_1c);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
  puVar4 = (undefined4 *)(lVar3 + 4);
  *puVar4 = 0xffffffff;
  *(undefined4 *)(lVar3 + 8) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0xc) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x14) = 0xffffffff;
LAB_146f26584:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f265a2 FUN_146f265a2 body=144 status=ok
// SIG undefined FUN_146f265a2(void)

longlong FUN_146f265a2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f264de();
  if ((longlong)*(int *)(lVar1 + 0x10) == -1) {
    FUN_146f26634(param_1 + 0xc0,local_30);
    *(undefined4 *)(lVar1 + 0x10) = local_30[0];
    *(undefined8 *)(local_28 + 0x40) = 0;
    *(undefined8 *)(local_28 + 0x48) = 0x800000000;
  }
  else {
    local_28 = (longlong)*(int *)(lVar1 + 0x10) * 0x50 + *(longlong *)(param_1 + 0xc0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f26634 FUN_146f26634 body=238 status=ok
// SIG undefined FUN_146f26634(void)

int * FUN_146f26634(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 146f26722 FUN_146f26722 body=172 status=ok
// SIG undefined FUN_146f26722(void)

longlong FUN_146f26722(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f264de();
  if ((longlong)*(int *)(lVar1 + 0xc) == -1) {
    FUN_146f267d0(param_1 + 0x88,local_30);
    *(undefined4 *)(lVar1 + 0xc) = local_30[0];
    *(undefined8 *)(local_28 + 8) = 0;
    *(undefined8 *)(local_28 + 0x10) = 0x800000000;
    FUN_146f268b6(local_28,*(undefined4 *)
                            (*(longlong *)(param_1 + 0x50) + 0x28 +
                            (longlong)*(int *)(lVar1 + 4) * 0x30));
  }
  else {
    local_28 = (longlong)*(int *)(lVar1 + 0xc) * 0x18 + *(longlong *)(param_1 + 0x88);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f267d0 FUN_146f267d0 body=230 status=ok
// SIG undefined FUN_146f267d0(void)

int * FUN_146f267d0(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146f268b6 FUN_146f268b6 body=118 status=ok
// SIG undefined FUN_146f268b6(void)

void FUN_146f268b6(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f2eec0(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + iVar1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x10) = param_2;
    FUN_146f2efb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2692e FUN_146f2692e body=179 status=ok
// SIG undefined FUN_146f2692e(void)

longlong FUN_146f2692e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f264de();
  if (*(int *)(lVar1 + 4) == -1) {
    FUN_146f269e2(param_1 + 0x50,local_38);
    *(undefined4 *)(lVar1 + 4) = local_38[0];
    *(undefined8 *)(local_30 + 0x20) = 0;
    *(undefined8 *)(local_30 + 0x28) = 0x800000000;
    *param_3 = 0;
  }
  else {
    if ((longlong)*(int *)(lVar1 + 0xc) == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)*(int *)(lVar1 + 0xc) * 0x18 + *(longlong *)(param_1 + 0x88);
    }
    *param_3 = lVar2;
    local_30 = (longlong)*(int *)(lVar1 + 4) * 0x30 + *(longlong *)(param_1 + 0x50);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f269e2 FUN_146f269e2 body=238 status=ok
// SIG undefined FUN_146f269e2(void)

int * FUN_146f269e2(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146f26ad0 FUN_146f26ad0 body=149 status=ok
// SIG undefined FUN_146f26ad0(void)

longlong FUN_146f26ad0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_146f264de();
  lVar2 = (longlong)*(int *)(lVar1 + (ulonglong)param_3 * 4);
  if (lVar2 == -1) {
    FUN_146f269e2(param_1 + 0x50,local_38);
    *(undefined4 *)(lVar1 + (ulonglong)param_3 * 4) = local_38[0];
    *(undefined8 *)(local_30 + 0x20) = 0;
    *(undefined8 *)(local_30 + 0x28) = 0x800000000;
  }
  else {
    local_30 = lVar2 * 0x30 + *(longlong *)(param_1 + 0x50);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f26b66 FUN_146f26b66 body=19 status=ok
// SIG undefined FUN_146f26b66(void)

void FUN_146f26b66(longlong param_1)

{
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44);
  return;
}



// FUNCTION 146f26b7a FUN_146f26b7a body=248 status=ok
// SIG undefined FUN_146f26b7a(void)

void FUN_146f26b7a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_2 + 8);
  lVar7 = *(longlong *)(lVar8 + 0x100);
  if (*(longlong *)(lVar8 + 0x100) == 0) {
    lVar7 = lVar8;
  }
  iVar1 = *(int *)(lVar8 + 0x108);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar7 + lVar6);
      uVar4 = *(uint *)(param_1 + 0x20);
      uVar5 = (ulonglong)(uVar4 - *(int *)(param_1 + 0x24));
      if ((ulonglong)(longlong)*(int *)(param_1 + 0x38) <= uVar5) {
        FUN_146f2a8e4((uint *)(param_1 + 0x20),uVar5 + 1);
        uVar4 = *(uint *)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x20) = uVar4 + 1;
      *(undefined8 *)
       (*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 & *(uint *)(param_1 + 0x28)) * 8) = uVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  lVar7 = lVar8 + 0x110;
  if (*(longlong *)(lVar8 + 400) != 0) {
    lVar7 = *(longlong *)(lVar8 + 400);
  }
  iVar1 = *(int *)(lVar8 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar8 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar7 + lVar8);
      uVar4 = *(uint *)(param_1 + 0x40);
      uVar5 = (ulonglong)(uVar4 - *(int *)(param_1 + 0x44));
      if ((ulonglong)(longlong)*(int *)(param_1 + 0x58) <= uVar5) {
        FUN_146f2acac((uint *)(param_1 + 0x40),uVar5 + 1);
        uVar4 = *(uint *)(param_1 + 0x40);
      }
      *(uint *)(param_1 + 0x40) = uVar4 + 1;
      *(undefined4 *)
       (*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar4 & *(uint *)(param_1 + 0x48)) * 4) = uVar2;
      lVar8 = lVar8 + 4;
    } while ((longlong)iVar1 * 4 != lVar8);
  }
  return;
}



// FUNCTION 146f26c72 FUN_146f26c72 body=118 status=ok
// SIG undefined FUN_146f26c72(void)

void FUN_146f26c72(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  uVar1 = param_1[8];
  uVar2 = param_1[9];
  uVar3 = param_1[0x18];
  uVar4 = param_1[0x10];
  uVar5 = param_1[0x11];
  uVar6 = param_1[0x19];
  if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar7 - param_1[1])) {
    FUN_146f2a51c(param_1,(ulonglong)(uVar7 - param_1[1]) + 1);
    uVar7 = *param_1;
  }
  *param_1 = uVar7 + 1;
  *(ulonglong *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar7 & param_1[2]) * 8) =
       CONCAT44(uVar4 - (uVar5 + uVar6),uVar1 - (uVar2 + uVar3));
  return;
}



// FUNCTION 146f26ce8 FUN_146f26ce8 body=149 status=ok
// SIG undefined FUN_146f26ce8(void)

void FUN_146f26ce8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(longlong *)(param_2 + 0x100);
  if (*(longlong *)(param_2 + 0x100) == 0) {
    local_28 = param_2;
  }
  local_20 = *(undefined4 *)(param_2 + 0x108);
  FUN_146f26d7e(param_1 + 0x68);
  local_38 = param_2 + 0x110;
  if (*(longlong *)(param_2 + 400) != 0) {
    local_38 = *(longlong *)(param_2 + 400);
  }
  local_30 = *(undefined4 *)(param_2 + 0x198);
  FUN_146f26e48(param_1 + 0xb8);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f26d7e FUN_146f26d7e body=199 status=ok
// SIG undefined FUN_146f26d7e(void)

void FUN_146f26d7e(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146f2f030(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_146f2f1de(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_146f2f6e8(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f26e48 FUN_146f26e48 body=199 status=ok
// SIG undefined FUN_146f26e48(void)

void FUN_146f26e48(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146f2f3a8(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_146f2f544(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 2;
    do {
      FUN_146f2fa2c(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f26f12 FUN_146f26f12 body=255 status=ok
// SIG undefined FUN_146f26f12(void)

void FUN_146f26f12(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar3;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 4) + (ulonglong)(param_1[2] & uVar1) * 8);
  uVar4 = uVar3 >> 0x20;
  if (*param_1 != uVar1) {
    param_1[1] = uVar1 + 1;
  }
  if (param_2 == '\0') {
    if ((int)uVar3 != 0) {
      uVar1 = param_1[9];
      do {
        local_40 = *(undefined8 *)
                    (*(longlong *)(param_1 + 0xc) + (ulonglong)(uVar1 & param_1[10]) * 8);
        FUN_146f2f6e8(param_1 + 0x1a,local_44,&local_40,0);
        uVar1 = param_1[9] + 1;
        param_1[9] = uVar1;
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
    if (uVar4 != 0) {
      uVar1 = param_1[0x11];
      do {
        local_40 = CONCAT44(local_40._4_4_,
                            *(undefined4 *)
                             (*(longlong *)(param_1 + 0x14) + (ulonglong)(uVar1 & param_1[0x12]) * 4
                             ));
        FUN_146f2fa2c(param_1 + 0x2e,local_44,&local_40,0);
        uVar1 = param_1[0x11] + 1;
        param_1[0x11] = uVar1;
        uVar2 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
  }
  else {
    param_1[9] = param_1[9] + (int)uVar3;
    param_1[0x11] = param_1[0x11] + (int)(uVar3 >> 0x20);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f27012 FUN_146f27012 body=17 status=ok
// SIG undefined FUN_146f27012(void)

void FUN_146f27012(longlong *param_1,undefined1 param_2,longlong param_3)

{
  *(undefined1 *)(param_1 + 6) = param_2;
  param_1[5] = param_3;
                    /* WARNING: Could not recover jumptable at 0x000146f2701c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))();
  return;
}



// FUNCTION 146f27024 FUN_146f27024 body=31 status=ok
// SIG undefined FUN_146f27024(void)

void FUN_146f27024(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2c0))();
  param_1[5] = 0;
  return;
}



// FUNCTION 146f27044 FUN_146f27044 body=143 status=ok
// SIG undefined FUN_146f27044(void)

longlong * FUN_146f27044(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_146f33cd8(param_1[5],param_3);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_38,param_3);
    if (local_38 != 0) {
      *(undefined4 *)(local_38 + 8) = param_4;
      *(char *)(local_38 + 0xc) = (char)param_1[6];
    }
    *param_2 = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f270d4 FUN_146f270d4 body=169 status=ok
// SIG undefined FUN_146f270d4(void)

bool FUN_146f270d4(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_3 + 0xe0);
  FUN_146f5435e(lVar1,*(undefined1 *)(param_4 + 0xc),3);
  FUN_146f5435e(lVar1,*(undefined4 *)(param_4 + 8),0x20);
  local_48 = param_1[5];
  local_50 = param_2;
  local_40 = param_1;
  local_38 = param_3;
  cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,&local_50,param_4);
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar1 + 0x18) == 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2717e FUN_146f2717e body=200 status=ok
// SIG undefined FUN_146f2717e(void)

undefined8 *
FUN_146f2717e(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_4 + 0xd8);
  uVar2 = FUN_146f546d2(lVar1,0x20);
  local_58 = param_1[5];
  local_60 = param_3;
  local_50 = param_1;
  local_48 = param_4;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_40);
  if (local_40 == (undefined8 *)0x0) {
    *param_2 = 0;
  }
  else if (*(int *)(lVar1 + 0x14) == 0) {
    *(char *)((longlong)local_40 + 0xc) = (char)param_1[6];
    *(undefined4 *)(local_40 + 1) = uVar2;
    *param_2 = local_40;
  }
  else {
    *param_2 = 0;
    (**(code **)*local_40)(local_40,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f27248 FUN_146f27248 body=53 status=ok
// SIG undefined FUN_146f27248(void)

undefined1 FUN_146f27248(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)DAT_14c9997a8 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c9996e8 + lVar1) == param_1) {
        return (&DAT_14c9996f8)[lVar1];
      }
      lVar1 = lVar1 + 0x18;
    } while ((longlong)DAT_14c9997a8 * 0x18 != lVar1);
  }
  return 0xff;
}



// FUNCTION 146f2727e FUN_146f2727e body=77 status=ok
// SIG undefined FUN_146f2727e(void)

undefined8 FUN_146f2727e(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 >> 0x3c == 0) {
    FUN_140002266(param_2,L"NetRefHandle (Id=%llu):(RepSystemId=?)");
  }
  else {
    FUN_140002266(param_2,L"NetRefHandle (Id=%llu):(RepSystemId=%u)",uVar1 & 0xfffffffffffffff,
                  (uint)(uVar1 >> 0x3c) - 1);
  }
  return param_2;
}



// FUNCTION 146f272cc FUN_146f272cc body=533 status=ok
// SIG undefined FUN_146f272cc(void)

undefined8 * FUN_146f272cc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff00000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xfe;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_146f274e2(param_1 + 0x4e,0);
  FUN_146f275fe(param_1 + 0x52,0,1);
  FUN_146f276d8(param_1 + 0x56,0,1);
  FUN_146f277b2(param_1 + 0x5a,0,1);
  param_1[0x5e] = 1;
  param_1[0x5f] = 1;
  FUN_146f262e4(param_1 + 0x60);
  param_1[0x7f] = param_2;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 2;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  return param_1;
}



// FUNCTION 146f274e2 FUN_146f274e2 body=284 status=ok
// SIG undefined FUN_146f274e2(void)

longlong * FUN_146f274e2(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146f2b298(param_1,0);
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar4 = (param_2 + 99) / 100;
  FUN_146f2b298(param_1,uVar4);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)(int)uVar4;
  uVar6 = 0xffffffffffffffff;
  if (SUB168(auVar3 * ZEXT816(0x15e0),8) == 0) {
    uVar6 = SUB168(auVar3 * ZEXT816(0x15e0),0);
  }
  lVar5 = FUN_144a7d36f(uVar6);
  if (0xc6 < param_2 + 0xc6U) {
    lVar7 = lVar5;
    do {
      lVar8 = 0x32;
      do {
        puVar1 = (undefined8 *)(lVar7 + -0x12 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar7 + -0x22 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar7 + -0x32 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(lVar7 + -2 + lVar8) = 0xff;
        *(undefined2 *)(lVar7 + lVar8) = 0;
        lVar8 = lVar8 + 0x38;
      } while (lVar8 != 0x1612);
      lVar7 = lVar7 + 0x15e0;
    } while (lVar7 != (longlong)(int)uVar4 * 0x15e0 + lVar5);
    if (0 < param_2) {
      uVar9 = 1;
      if (1 < (int)uVar4) {
        uVar9 = (ulonglong)uVar4;
      }
      do {
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_1,iVar2);
        }
        *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar5;
        lVar5 = lVar5 + 0x15e0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(param_1 + 3) = uVar4;
  return param_1;
}



// FUNCTION 146f275fe FUN_146f275fe body=217 status=ok
// SIG undefined FUN_146f275fe(void)

longlong * FUN_146f275fe(longlong *param_1,int param_2,char param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  undefined8 uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146f2b306(0,0);
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar2 = (param_2 + 99) / 100;
  FUN_146f2b306(param_1,uVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)uVar2;
  uVar5 = 0xffffffffffffffff;
  if (SUB168(auVar1 * ZEXT816(800),8) == 0) {
    uVar5 = SUB168(auVar1 * ZEXT816(800),0);
  }
  _Dst = (void *)FUN_144a7d36f(uVar5);
  if (0 < param_2) {
    uVar6 = 1;
    if (1 < (int)uVar2) {
      uVar6 = (ulonglong)uVar2;
    }
    do {
      if (param_3 == '\0') {
        memset(_Dst,0,800);
      }
      lVar3 = param_1[1];
      uVar4 = (int)lVar3 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
        FUN_1456bd870(param_1);
      }
      *(void **)(*param_1 + (longlong)(int)lVar3 * 8) = _Dst;
      _Dst = (void *)((longlong)_Dst + 800);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(uint *)(param_1 + 3) = uVar2;
  return param_1;
}



// FUNCTION 146f276d8 FUN_146f276d8 body=217 status=ok
// SIG undefined FUN_146f276d8(void)

longlong * FUN_146f276d8(longlong *param_1,int param_2,char param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  void *_Dst;
  undefined8 uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146f2b374(0,0);
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar2 = (param_2 + 99) / 100;
  FUN_146f2b374(param_1,uVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)uVar2;
  uVar5 = 0xffffffffffffffff;
  if (SUB168(auVar1 * ZEXT816(200),8) == 0) {
    uVar5 = SUB168(auVar1 * ZEXT816(200),0);
  }
  _Dst = (void *)FUN_144a7d36f(uVar5);
  if (0 < param_2) {
    uVar6 = 1;
    if (1 < (int)uVar2) {
      uVar6 = (ulonglong)uVar2;
    }
    do {
      if (param_3 == '\0') {
        memset(_Dst,0,200);
      }
      lVar3 = param_1[1];
      uVar4 = (int)lVar3 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
        FUN_1456bd870(param_1);
      }
      *(void **)(*param_1 + (longlong)(int)lVar3 * 8) = _Dst;
      _Dst = (void *)((longlong)_Dst + 200);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(uint *)(param_1 + 3) = uVar2;
  return param_1;
}



// FUNCTION 146f277b2 FUN_146f277b2 body=290 status=ok
// SIG undefined FUN_146f277b2(void)

longlong * FUN_146f277b2(longlong *param_1,int param_2,char param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  void *_Dst;
  longlong lVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146f2b3e2(0,0);
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar2 = (param_2 + 99) / 100;
  FUN_146f2b3e2(param_1,uVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)uVar2;
  lVar4 = SUB168(auVar1 * ZEXT816(800),0);
  lVar5 = -1;
  if (SUB168(auVar1 * ZEXT816(800),8) == 0) {
    lVar5 = lVar4;
  }
  _Dst = (void *)FUN_144a7d36f(lVar5);
  if (0xc6 < param_2 + 0xc6U) {
    memset(_Dst,0,((lVar4 - 800U) / 800) * 800 + 800);
    if (0 < param_2) {
      uVar6 = 1;
      if (1 < (int)uVar2) {
        uVar6 = (ulonglong)uVar2;
      }
      do {
        if (param_3 == '\0') {
          memset(_Dst,0,800);
        }
        lVar5 = param_1[1];
        uVar3 = (int)lVar5 + 1;
        *(uint *)(param_1 + 1) = uVar3;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
          FUN_1456bd870(param_1);
        }
        *(void **)(*param_1 + (longlong)(int)lVar5 * 8) = _Dst;
        _Dst = (void *)((longlong)_Dst + 800);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  *(uint *)(param_1 + 3) = uVar2;
  return param_1;
}



// FUNCTION 146f278d4 FUN_146f278d4 body=102 status=ok
// SIG undefined FUN_146f278d4(void)

void FUN_146f278d4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[3]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(*param_1 + lVar1 * 8);
      }
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[3]);
    if (lVar2 != 0) {
      thunk_FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_146f2b298(param_1,0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f2793a FUN_146f2793a body=102 status=ok
// SIG undefined FUN_146f2793a(void)

void FUN_146f2793a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[3]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(*param_1 + lVar1 * 8);
      }
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[3]);
    if (lVar2 != 0) {
      thunk_FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_146f2b374(param_1,0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f279a0 FUN_146f279a0 body=102 status=ok
// SIG undefined FUN_146f279a0(void)

void FUN_146f279a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[3]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(*param_1 + lVar1 * 8);
      }
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[3]);
    if (lVar2 != 0) {
      thunk_FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_146f2b306(param_1,0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f27a06 FUN_146f27a06 body=102 status=ok
// SIG undefined FUN_146f27a06(void)

void FUN_146f27a06(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[3]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(*param_1 + lVar1 * 8);
      }
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[3]);
    if (lVar2 != 0) {
      thunk_FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_146f2b3e2(param_1,0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f27a6c FUN_146f27a6c body=88 status=ok
// SIG undefined FUN_146f27a6c(void)

void FUN_146f27a6c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_146f14ba4(param_2,*(undefined4 *)(param_1 + 0xc));
  iVar1 = *(int *)(param_1 + 0x438);
  *(uint *)(param_1 + 0x438) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x43c) < iVar1 + 1U) {
    FUN_146f2fee8((longlong *)(param_1 + 0x430),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x430) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 146f27ac4 FUN_146f27ac4 body=214 status=ok
// SIG undefined FUN_146f27ac4(void)

void FUN_146f27ac4(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  **(uint **)(param_1 + 0x150) = **(uint **)(param_1 + 0x150) & 0xfffffffe;
  uVar2 = *(uint *)(param_1 + 0x158);
  iVar8 = 0;
  cVar1 = *(char *)(param_1 + 0x160);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x150);
    uVar7 = 0;
    do {
      uVar5 = 0xffffffff;
      if (uVar7 == uVar2 - 1) {
        uVar5 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar5 = uVar5 & *(uint *)(lVar3 + uVar7 * 4);
      iVar6 = iVar8;
      if (uVar5 != 0) {
        do {
          if ((uVar5 & 1) != 0) {
            FUN_142a80aa0(param_1,iVar6);
          }
          bVar4 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
          iVar6 = iVar6 + 1;
        } while (bVar4);
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar7 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(int *)(param_1 + 0x43c) != 0) {
    FUN_146f2feb8(param_1 + 0x430);
    return;
  }
  return;
}



// FUNCTION 146f27b9a FUN_146f27b9a body=198 status=ok
// SIG undefined FUN_146f27b9a(void)

void FUN_146f27b9a(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_3 != 0 && param_2 != 0) {
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_2 / 100) * 8) + 0x18 +
     (ulonglong)(uint)((int)param_2 % 100) * 0x38) = param_3;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2d0) + (longlong)((int)param_2 / 100) * 8);
    if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_4);
    }
    *(longlong *)(lVar1 + (ulonglong)(uint)((int)param_2 % 100) * 8) = param_4;
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    if ((*(ushort *)(param_3 + 0x12) & 8) == 0) {
      uVar2 = *(ushort *)(param_3 + 0x12) & 8;
    }
    *(uint *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(param_2 >> 5) * 4) =
         *(uint *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)(param_2 >> 5) * 4) &
         ~(1 << (param_2 & 0x1f)) | uVar2;
  }
  return;
}



// FUNCTION 146f27c60 FUN_146f27c60 body=215 status=ok
// SIG undefined FUN_146f27c60(void)

void FUN_146f27c60(longlong param_1,ulonglong *param_2,byte param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2f0 + (ulonglong)(param_3 ^ 1) * 8);
  uVar5 = lVar1 * 2;
  uVar2 = (ulonglong)(*(int *)(param_1 + 0x14) + 1) << 0x3c | (ulonglong)param_3 |
          uVar5 & 0xffffffffffffffe;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)uVar2 + ((uint)(uVar5 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18) ^ uVar2) &
            0xfffffffffffffff) == 0) {
          uVar2 = 0;
          goto LAB_146f27cc9;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  uVar5 = lVar1 + 1U & 0x7ffffffffffffff;
  *(ulonglong *)(param_1 + (ulonglong)(param_3 ^ 1) * 8 + 0x2f0) = uVar5 + (uVar5 == 0);
LAB_146f27cc9:
  *param_2 = uVar2;
  return;
}



// FUNCTION 146f27d38 FUN_146f27d38 body=30 status=ok
// SIG undefined FUN_146f27d38(void)

void FUN_146f27d38(ulonglong *param_1,ulonglong param_2,int param_3)

{
  *param_1 = (ulonglong)(param_3 + 1) << 0x3c | param_2 & 0xfffffffffffffff;
  return;
}



// FUNCTION 146f27d56 FUN_146f27d56 body=308 status=ok
// SIG undefined FUN_146f27d56(void)

undefined8 *
FUN_146f27d56(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int *_Dst;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  int *local_60;
  uint local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_4;
  iVar1 = FUN_142a80588(param_1,param_3,&local_50,param_5);
  if (iVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = (ulonglong)*(uint *)(param_5 + 0x10);
    lVar2 = FUN_14153c902(*(int *)(param_5 + 0xc) + (uint)(*(int *)(param_5 + 0xc) == 0),uVar3);
    lVar5 = (longlong)(iVar1 / 100);
    if ((*(byte *)(param_5 + 0x3c) & 4) != 0) {
      local_54 = *(int *)(param_5 + 0x24);
      _Dst = (int *)(lVar2 + (ulonglong)*(uint *)(param_5 + 0x28));
      uVar4 = local_54 + 0x1fU >> 5;
      if (local_54 == 0) {
        _Dst = &local_54;
      }
      local_68 = (longlong)(iVar1 / 100);
      local_60 = _Dst;
      local_58 = uVar4;
      memset(_Dst,(int)CONCAT71((int7)(uVar3 >> 8),0xff),(ulonglong)(uVar4 * 4));
      lVar5 = local_68;
      if (local_54 != 0) {
        _Dst[uVar4 - 1] =
             (uint)(_Dst[uVar4 - 1] << (-(char)local_54 & 0x1fU)) >> (-(char)local_54 & 0x1fU);
      }
    }
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x290) + lVar5 * 8) + (ulonglong)(uint)(iVar1 % 100) * 8
     ) = lVar2;
    FUN_146f41c34(param_5);
  }
  *param_2 = param_3;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146f27e8c FUN_146f27e8c body=247 status=ok
// SIG undefined FUN_146f27e8c(void)

ulonglong *
FUN_146f27e8c(longlong param_1,ulonglong *param_2,ulonglong param_3,longlong param_4,
             undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0xf000000000000000 < param_3 + 0xf000000000000000) {
    param_3 = (ulonglong)(*(int *)(param_1 + 0x14) + 1) << 0x3c | param_3;
    local_38 = 0;
    iVar2 = FUN_142a80588(param_1,param_3);
    if (iVar2 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)(iVar2 / 100) * 8);
      lVar3 = (ulonglong)(uint)(iVar2 % 100) * 0x38;
      *(undefined1 *)(lVar1 + 0x30 + lVar3) = param_5;
      _Dst = (void *)FUN_14001cc68(*(undefined4 *)(param_4 + 0xc));
      *(void **)(lVar1 + 0x20 + lVar3) = _Dst;
      memset(_Dst,0,(ulonglong)*(uint *)(param_4 + 0xc));
      FUN_146f41c34(param_4);
      goto LAB_146f27ec4;
    }
  }
  param_3 = 0;
LAB_146f27ec4:
  *param_2 = param_3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f27f84 FUN_146f27f84 body=119 status=ok
// SIG undefined FUN_146f27f84(void)

longlong FUN_146f27f84(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while (lVar2 = *param_1 + (longlong)iVar3 * 0x20,
            *(uint *)(*param_1 + (longlong)iVar3 * 0x20) != param_2) {
        iVar3 = *(int *)(lVar2 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if ((int *)(lVar2 + 4) == (int *)0x0 || lVar2 == 0) {
        return 0;
      }
      lVar2 = (longlong)*(int *)(lVar2 + 4);
      if (lVar2 != -1) {
        return lVar2 * 0x30 + param_1[10];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f27ffc FUN_146f27ffc body=487 status=ok
// SIG undefined FUN_146f27ffc(void)

void FUN_146f27ffc(longlong param_1,int param_2,uint param_3,char param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_3c;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  if (param_3 != 0 && param_2 != 0) {
    lVar8 = (ulonglong)(uint)((int)param_3 % 100) * 0x38 +
            *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_3 / 100) * 8);
    if (param_4 != '\0') {
      lVar4 = FUN_146f27f84(param_1 + 0x300);
      if (lVar4 != 0) {
        local_38 = &local_3c;
        FUN_146f30f22(lVar4);
      }
      if ((*(int *)(lVar8 + 0x2c) != 0) &&
         (cVar3 = FUN_146f288b4(param_1 + 0x300,*(int *)(lVar8 + 0x2c),&local_38,&local_48),
         puVar1 = local_38, cVar3 != '\0')) {
        puVar5 = *(uint **)(local_38 + 8);
        if (*(uint **)(local_38 + 8) == (uint *)0x0) {
          puVar5 = local_38;
        }
        uVar6 = local_38[10];
        if ((longlong)(int)uVar6 != 0) {
          lVar4 = (longlong)(int)uVar6 * 4;
          lVar11 = 0;
          lVar9 = 0;
          do {
            if (puVar5[lVar11] == local_3c) {
              iVar10 = (int)lVar11;
              if (iVar10 != -1) {
                lVar9 = lVar9 >> 0x20;
                if (uVar6 - 1 != iVar10) {
                  memmove(puVar5 + lVar9,puVar5 + lVar9 + 1,
                          (longlong)(int)((uVar6 - 1) - iVar10) << 2);
                  uVar6 = puVar1[10];
                }
                puVar1[10] = uVar6 - 1;
                FUN_146f30ff2(puVar1);
                if (local_48 != 0) {
                  iVar7 = *(int *)(local_48 + 0x10);
                  if (iVar7 + -1 != iVar10) {
                    lVar4 = *(longlong *)(local_48 + 8);
                    if (*(longlong *)(local_48 + 8) == 0) {
                      lVar4 = local_48;
                    }
                    memmove((void *)(lVar4 + lVar9),(void *)(lVar4 + lVar9 + 1),
                            (longlong)((iVar7 + -1) - iVar10));
                    iVar7 = *(int *)(local_48 + 0x10);
                  }
                  *(int *)(local_48 + 0x10) = iVar7 + -1;
                  FUN_146f2efb0(local_48);
                }
              }
              break;
            }
            lVar9 = lVar9 + 0x100000000;
            lVar11 = lVar11 + 1;
            lVar4 = lVar4 + -4;
          } while (lVar4 != 0);
        }
      }
    }
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(byte *)(lVar8 + 0x32) = *(byte *)(lVar8 + 0x32) & 0xfb;
    bVar2 = (byte)local_3c & 0x1f;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x168) + (ulonglong)(local_3c >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f281e4 FUN_146f281e4 body=115 status=ok
// SIG undefined FUN_146f281e4(void)

longlong FUN_146f281e4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while (lVar1 = *param_1 + (longlong)iVar3 * 0x20,
            *(uint *)(*param_1 + (longlong)iVar3 * 0x20) != param_2) {
        iVar3 = *(int *)(lVar1 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 4U & 0xfffffffffffffffb) == 0) {
        return 0;
      }
      if ((longlong)*(int *)(lVar1 + 8) != -1) {
        return (longlong)*(int *)(lVar1 + 8) * 0x30 + param_1[10];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f28258 FUN_146f28258 body=343 status=ok
// SIG undefined FUN_146f28258(void)

void FUN_146f28258(longlong param_1,uint param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = FUN_146f28cd4(param_1 + 0x300);
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(lVar5 + 0x20);
    if (*(longlong *)(lVar5 + 0x20) == 0) {
      lVar8 = lVar5;
    }
    iVar3 = *(int *)(lVar5 + 0x28);
    if ((longlong)iVar3 != 0) {
      lVar7 = 0;
      do {
        FUN_146f28af2(param_1,*(undefined4 *)(lVar8 + lVar7),param_2,2);
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar3 * 4 != lVar7);
    }
    *(undefined4 *)(lVar5 + 0x28) = 0;
    if (*(int *)(lVar5 + 0x2c) < 0) {
      FUN_146effd44(lVar5,0);
    }
  }
  lVar5 = FUN_146f28d48(param_1 + 0x300,param_2);
  if (lVar5 != 0) {
    lVar8 = *(longlong *)(lVar5 + 0x40);
    if (*(longlong *)(lVar5 + 0x40) == 0) {
      lVar8 = lVar5;
    }
    iVar3 = *(int *)(lVar5 + 0x48);
    if ((longlong)iVar3 != 0) {
      lVar7 = 0;
      do {
        FUN_146f28af2(param_1,param_2,*(undefined4 *)(lVar8 + lVar7),1);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar3 * 8 != lVar7);
    }
    *(undefined4 *)(lVar5 + 0x48) = 0;
    if (*(int *)(lVar5 + 0x4c) < 0) {
      FUN_146f3122c(lVar5);
    }
  }
  puVar2 = (ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_2 / 100) * 8) +
            0x32 + (ulonglong)(uint)((int)param_2 % 100) * 0x38);
  *puVar2 = *puVar2 & 0xffe7;
  bVar4 = (byte)param_2 & 0x1f;
  uVar6 = -2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & uVar6;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & uVar6;
  return;
}



// FUNCTION 146f283b0 FUN_146f283b0 body=277 status=ok
// SIG undefined FUN_146f283b0(void)

longlong * FUN_146f283b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_58;
  uint local_54 [3];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f27c60(param_1,&local_48,0);
  local_54[1] = 0;
  local_54[2] = 0;
  local_68 = param_4;
  FUN_146f27d56(param_1,param_2,local_48);
  if (*param_2 != 0) {
    uVar2 = FUN_146f18900(param_1);
    local_54[0] = uVar2;
    local_58 = FUN_146f18900(param_1,param_3);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    if (local_58 != 0) {
      FUN_146f30b96(param_1 + 0x210,uVar2,local_54,&local_58);
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)(local_58 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)local_58 & 0x1f);
      FUN_146f30b96(param_1 + 0x210,local_58,&local_58,local_54);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f284c6 FUN_146f284c6 body=273 status=ok
// SIG undefined FUN_146f284c6(void)

void FUN_146f284c6(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  FUN_146f30d6c(param_1 + 0x18,&local_2c);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)local_2c * 0x18);
  FUN_146f30dec(param_1 + 0x18);
  if ((*(uint *)(*(longlong *)(param_1 + 0x150) + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1
      ) != 0) {
    FUN_146f30e4a(param_1 + 0x68,
                  (ulonglong)(uint)((int)uVar2 % 100) * 0x38 +
                  *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)uVar2 / 100) * 8) +
                  8);
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
    iVar3 = *(int *)(param_1 + 0x268);
    *(uint *)(param_1 + 0x268) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x26c) < iVar3 + 1U) {
      FUN_1447808da((longlong *)(param_1 + 0x260),iVar3);
    }
    *(uint *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar3 * 4) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f285d8 FUN_146f285d8 body=126 status=ok
// SIG undefined FUN_146f285d8(void)

undefined8
FUN_146f285d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_146f18900();
  iVar2 = FUN_146f18900(param_1,param_3);
  if (iVar2 == 0 || iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if ((param_5 & 8) != 0) {
    uVar3 = FUN_146f18900(param_1,param_4);
  }
  uVar4 = FUN_146f28656(param_1,iVar1,iVar2,uVar3);
  return uVar4;
}



// FUNCTION 146f28656 FUN_146f28656 body=605 status=ok
// SIG undefined FUN_146f28656(void)

bool FUN_146f28656(longlong param_1,undefined4 param_2,uint param_3,int param_4,ushort param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_3 / 100) * 8);
  lVar4 = (ulonglong)(uint)((int)param_3 % 100) * 0x38;
  iVar2 = *(int *)(lVar7 + 0x28 + lVar4);
  if (iVar2 == 0) {
    lVar7 = lVar7 + lVar4;
    local_58 = param_1 + 0x300;
    lVar4 = FUN_146f26ad0(local_58,param_2,0);
    iVar3 = *(int *)(lVar4 + 0x28);
    *(uint *)(lVar4 + 0x28) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x2c) < iVar3 + 1U) {
      FUN_140694806(lVar4,iVar3);
    }
    lVar5 = *(longlong *)(lVar4 + 0x20);
    if (*(longlong *)(lVar4 + 0x20) == 0) {
      lVar5 = lVar4;
    }
    *(uint *)(lVar5 + (longlong)iVar3 * 4) = param_3;
    *(undefined4 *)(lVar7 + 0x28) = param_2;
    *(ushort *)(lVar7 + 0x32) = *(ushort *)(lVar7 + 0x32) & 0xfffb | param_5 & 4;
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x168) + (ulonglong)(param_3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
    if (param_4 != 0) {
      lVar5 = lVar4;
      if (*(longlong *)(lVar4 + 0x20) != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x20);
      }
      if ((longlong)*(int *)(lVar4 + 0x28) != 0) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar5 + uVar6) == param_4) {
            if ((int)(~uVar6 >> 2) != 0) {
              local_50 = 0;
              lVar4 = FUN_146f2692e(local_58,param_4);
              iVar3 = *(int *)(lVar4 + 0x28);
              *(uint *)(lVar4 + 0x28) = iVar3 + 1U;
              if (*(uint *)(lVar4 + 0x2c) < iVar3 + 1U) {
                FUN_140694806(lVar4,iVar3);
              }
              lVar5 = local_50;
              if (*(longlong *)(lVar4 + 0x20) != 0) {
                lVar4 = *(longlong *)(lVar4 + 0x20);
              }
              *(uint *)(lVar4 + (longlong)iVar3 * 4) = param_3;
              if (local_50 != 0) {
                iVar3 = *(int *)(local_50 + 0x10);
                *(uint *)(local_50 + 0x10) = iVar3 + 1U;
                if (*(uint *)(local_50 + 0x14) < iVar3 + 1U) {
                  FUN_146f2eec0(local_50,iVar3);
                }
                lVar4 = *(longlong *)(lVar5 + 8);
                if (lVar4 == 0) {
                  lVar4 = lVar5;
                }
                *(undefined1 *)(lVar4 + iVar3) = 0;
              }
              *(int *)(lVar7 + 0x2c) = param_4;
              goto LAB_146f286b1;
            }
            break;
          }
          uVar6 = uVar6 + 4;
        } while ((longlong)*(int *)(lVar4 + 0x28) * 4 != uVar6);
      }
    }
    local_50 = 0;
    lVar4 = FUN_146f2692e(local_58,param_2);
    iVar3 = *(int *)(lVar4 + 0x28);
    *(uint *)(lVar4 + 0x28) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x2c) < iVar3 + 1U) {
      FUN_140694806(lVar4,iVar3);
    }
    lVar5 = local_50;
    if (*(longlong *)(lVar4 + 0x20) != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    *(uint *)(lVar4 + (longlong)iVar3 * 4) = param_3;
    if (local_50 != 0) {
      iVar3 = *(int *)(local_50 + 0x10);
      *(uint *)(local_50 + 0x10) = iVar3 + 1U;
      if (*(uint *)(local_50 + 0x14) < iVar3 + 1U) {
        FUN_146f2eec0(local_50,iVar3);
      }
      lVar4 = *(longlong *)(lVar5 + 8);
      if (lVar4 == 0) {
        lVar4 = lVar5;
      }
      *(undefined1 *)(lVar4 + iVar3) = 0;
    }
    *(undefined4 *)(lVar7 + 0x2c) = param_2;
  }
LAB_146f286b1:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2 == 0;
}



// FUNCTION 146f288b4 FUN_146f288b4 body=141 status=ok
// SIG undefined FUN_146f288b4(void)

undefined8 FUN_146f288b4(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          if (lVar3 == 0) {
            return 0;
          }
          if ((longlong)*(int *)(lVar3 + 8) == -1) {
            return 0;
          }
          *param_3 = (longlong)*(int *)(lVar3 + 8) * 0x30 + param_1[10];
          if ((longlong)*(int *)(lVar3 + 0x10) == -1) {
            lVar3 = 0;
          }
          else {
            lVar3 = (longlong)*(int *)(lVar3 + 0x10) * 0x18 + param_1[0x11];
          }
          *param_4 = lVar3;
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f28942 FUN_146f28942 body=285 status=ok
// SIG undefined FUN_146f28942(void)

undefined8 FUN_146f28942(longlong param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)(param_2 / 100) * 8)
                       + 0x2c + (ulonglong)(uint)(param_2 % 100) * 0x38), iVar1 != 0)) {
    cVar2 = FUN_146f288b4(param_1 + 0x300,iVar1,&local_38,&local_40);
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(local_38 + 0x20);
      if (*(longlong *)(local_38 + 0x20) == 0) {
        lVar3 = local_38;
      }
      if ((longlong)*(int *)(local_38 + 0x28) != 0) {
        uVar5 = 0;
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + uVar5) == param_2) {
            if ((int)(~uVar5 >> 2) != 0) {
              if (local_40 == 0) {
                local_40 = FUN_146f26722(param_1 + 0x300,iVar1);
              }
              lVar3 = *(longlong *)(local_40 + 8);
              if (*(longlong *)(local_40 + 8) == 0) {
                lVar3 = local_40;
              }
              *(undefined1 *)(lVar3 + (lVar6 >> 0x20)) = param_3;
              uVar4 = 1;
              goto LAB_146f2899b;
            }
            break;
          }
          lVar6 = lVar6 + 0x100000000;
          uVar5 = uVar5 + 4;
        } while ((longlong)*(int *)(local_38 + 0x28) * 4 != uVar5);
      }
    }
  }
  uVar4 = 0;
LAB_146f2899b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146f28a60 FUN_146f28a60 body=145 status=ok
// SIG undefined FUN_146f28a60(void)

undefined8 * FUN_146f28a60(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_146f18900(param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)(iVar1 / 100) * 8) +
                     0x28 + (longlong)(iVar1 % 100) * 0x38);
    if (iVar1 != 0) {
      uVar2 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)(iVar1 / 100) * 8) +
               (longlong)(iVar1 % 100) * 0x38);
      goto LAB_146f28ae4;
    }
  }
  uVar2 = 0;
LAB_146f28ae4:
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 146f28af2 FUN_146f28af2 body=481 status=ok
// SIG undefined FUN_146f28af2(void)

void FUN_146f28af2(longlong param_1,uint param_2,uint param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined1 auStack_68 [44];
  uint local_3c;
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_2;
  if ((param_4 & 1) != 0) {
    lVar6 = FUN_146f28cd4(param_1 + 0x300,param_3);
    if (lVar6 != 0) {
      local_38 = &local_3c;
      FUN_146f30f22(lVar6);
      if (*(int *)(lVar6 + 0x28) == 0) {
        puVar2 = (ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)param_3 / 100) * 8)
                  + 0x32 + (ulonglong)(uint)((int)param_3 % 100) * 0x38);
        *puVar2 = *puVar2 & 0xfff7;
        bVar4 = (byte)param_3 & 0x1f;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_3 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      }
    }
  }
  if ((param_4 & 2) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)((int)local_3c / 100) * 8);
    lVar12 = (ulonglong)(uint)((int)local_3c % 100) * 0x38;
    if ((*(byte *)(lVar6 + 0x32 + lVar12) & 0x10) != 0) {
      lVar7 = FUN_146f28d48(param_1 + 0x300);
      if (lVar7 != 0) {
        pbVar11 = (byte *)(lVar6 + lVar12 + 0x32);
        iVar5 = *(int *)(lVar7 + 0x48);
        lVar6 = *(longlong *)(lVar7 + 0x40);
        if (*(longlong *)(lVar7 + 0x40) == 0) {
          lVar6 = lVar7;
        }
        lVar12 = (longlong)iVar5 << 0x20;
        uVar8 = (longlong)iVar5 << 3;
        do {
          if (uVar8 == 0) goto LAB_146f28c72;
          lVar12 = lVar12 + -0x100000000;
          uVar1 = uVar8 - 8;
          puVar3 = (uint *)(lVar6 + -8 + uVar8);
          uVar8 = uVar1;
        } while (*puVar3 != param_3);
        uVar9 = (uint)(uVar1 >> 3);
        if (uVar9 != 0xffffffff) {
          iVar10 = ~uVar9 + iVar5;
          if (iVar10 != 0) {
            memmove((void *)(lVar6 + (lVar12 >> 0x20) * 8),
                    (void *)(lVar6 + (lVar12 >> 0x20) * 8 + 8),(longlong)iVar10 << 3);
            iVar5 = *(int *)(lVar7 + 0x48);
          }
          *(int *)(lVar7 + 0x48) = iVar5 + -1;
          FUN_146f3118c(lVar7);
          iVar5 = *(int *)(lVar7 + 0x48);
        }
LAB_146f28c72:
        if (iVar5 == 0) {
          *pbVar11 = *pbVar11 & 0xef;
          bVar4 = (byte)local_3c & 0x1f;
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(local_3c >> 5) * 4);
          *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f28cd4 FUN_146f28cd4 body=115 status=ok
// SIG undefined FUN_146f28cd4(void)

longlong FUN_146f28cd4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while (lVar1 = *param_1 + (longlong)iVar3 * 0x20,
            *(uint *)(*param_1 + (longlong)iVar3 * 0x20) != param_2) {
        iVar3 = *(int *)(lVar1 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 4U & 0xfffffffffffffffb) == 0) {
        return 0;
      }
      if ((longlong)*(int *)(lVar1 + 0xc) != -1) {
        return (longlong)*(int *)(lVar1 + 0xc) * 0x30 + param_1[10];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f28d48 FUN_146f28d48 body=118 status=ok
// SIG undefined FUN_146f28d48(void)

longlong FUN_146f28d48(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      while (lVar1 = *param_1 + (longlong)iVar3 * 0x20,
            *(uint *)(*param_1 + (longlong)iVar3 * 0x20) != param_2) {
        iVar3 = *(int *)(lVar1 + 0x18);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 4U & 0xfffffffffffffffb) == 0) {
        return 0;
      }
      if ((longlong)*(int *)(lVar1 + 0x14) != -1) {
        return (longlong)*(int *)(lVar1 + 0x14) * 0x50 + param_1[0x18];
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146f28dbe FUN_146f28dbe body=79 status=ok
// SIG undefined FUN_146f28dbe(void)

void FUN_146f28dbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_146f18900();
  iVar2 = FUN_146f18900(param_1,param_3);
  if (iVar2 == 0 || iVar1 == 0) {
    return;
  }
  FUN_146f28af2(param_1,iVar1,iVar2,3);
  return;
}



// FUNCTION 146f28e0e FUN_146f28e0e body=85 status=ok
// SIG undefined FUN_146f28e0e(void)

void FUN_146f28e0e(longlong param_1,undefined8 param_2,char param_3)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = FUN_146f18900();
  if (iVar2 != 0 && param_3 == '\0') {
    puVar1 = (ushort *)
             (*(longlong *)(*(longlong *)(param_1 + 0x270) + (longlong)(iVar2 / 100) * 8) + 0x32 +
             (ulonglong)(uint)(iVar2 % 100) * 0x38);
    *puVar1 = *puVar1 & 0xfffe;
  }
  return;
}



// FUNCTION 146f28e64 FUN_146f28e64 body=95 status=ok
// SIG undefined FUN_146f28e64(void)

void FUN_146f28e64(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x2e0);
  if (iVar4 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x2d0);
    uVar3 = 0;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,uVar3 * 8 + *plVar1,0,0);
      uVar2 = (int)uVar3 + 1;
      plVar1 = plVar1 + (99 < uVar2);
      uVar3 = (ulonglong)uVar2;
      if (99 < uVar2) {
        uVar3 = 0;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 146f28ec4 FUN_146f28ec4 body=20 status=ok
// SIG undefined FUN_146f28ec4(void)

void FUN_146f28ec4(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = param_2 & 0xfffffffffffffff;
  return;
}



// FUNCTION 146f28ed8 FUN_146f28ed8 body=251 status=ok
// SIG undefined FUN_146f28ed8(void)

void FUN_146f28ed8(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x70) = uVar1;
  *(uint *)(param_1 + 0x74) = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 2);
  if ((ulonglong)uVar1 < 0x10) {
    uVar3 = (&DAT_14c999ae0)[uVar1];
  }
  else {
    uVar3 = 0;
  }
  lVar2 = FUN_146f42d10(uVar3);
  *(longlong *)(param_1 + 0x58) = lVar2;
  uVar1 = param_2[1];
  if (((longlong)(int)uVar1 == 0) || (*(uint *)(lVar2 + 0x10) <= uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar1 * 8);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  if (DAT_14c9996c8 == '\x01') {
    FUN_146f28fec(lVar2,&local_40);
    if ((longlong)local_38 != 0) {
      lVar2 = 0;
      do {
        FUN_146f313c4(param_1 + 0x40);
        uVar1 = *(uint *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = uVar1 + 1;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar1 & *(uint *)(param_1 + 0x48)) * 4) =
             *(undefined4 *)(local_40 + lVar2);
        lVar2 = lVar2 + 4;
      } while ((longlong)local_38 * 4 != lVar2);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f28fd4 FUN_146f28fd4 body=24 status=ok
// SIG undefined FUN_146f28fd4(void)

undefined8 FUN_146f28fd4(longlong param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < *(uint *)(param_1 + 0x10))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8);
  }
  return 0;
}



// FUNCTION 146f28fec FUN_146f28fec body=252 status=ok
// SIG undefined FUN_146f28fec(void)

longlong * FUN_146f28fec(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = param_1[4];
  if ((longlong)(int)lVar5 == 0) {
    uStack_50._4_4_ = 0;
    uStack_50._0_4_ = 0;
  }
  else {
    lVar2 = *param_1;
    lVar3 = param_1[3];
    lVar8 = 0;
    do {
      uVar7 = uStack_50;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar8);
      uVar1 = *(uint *)(lVar2 + 8 + (ulonglong)*(uint *)(lVar4 + 0x20) * 0x10);
      if (1 < uVar1) {
        lVar4 = *(longlong *)(lVar4 + 8);
        iVar6 = (int)uStack_50;
        lVar9 = (longlong)(int)uStack_50;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar1 + (int)uStack_50 + -1);
        if ((uint)(uStack_50._4_4_ - iVar6) < uVar1 - 1) {
          FUN_1459a0cf0(&local_58,uVar7 & 0xffffffff);
        }
        memcpy((void *)(lVar9 * 4 + local_58),(void *)(lVar4 + 4),(longlong)(int)(uVar1 - 1) << 2);
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar8);
  }
  *param_2 = local_58;
  *(int *)(param_2 + 1) = (int)uStack_50;
  *(int *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f290ea FUN_146f290ea body=174 status=ok
// SIG undefined FUN_146f290ea(void)

undefined8 FUN_146f290ea(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
    lVar2 = lVar1 + 0x88;
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x90);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0x98) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x50);
      do {
        if (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) == param_2) {
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        }
        iVar4 = *(int *)(lVar1 + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
    }
  }
  lVar1 = param_1[1];
  lVar2 = lVar1 + 0x110;
  if (*(longlong *)(lVar1 + 400) != 0) {
    lVar2 = *(longlong *)(lVar1 + 400);
  }
  if ((longlong)*(int *)(lVar1 + 0x198) != 0) {
    uVar3 = 0;
    do {
      if (*(uint *)(lVar2 + uVar3) == param_2) {
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),(int)(~uVar3 >> 2) != 0);
      }
      uVar3 = uVar3 + 4;
    } while ((longlong)*(int *)(lVar1 + 0x198) * 4 != uVar3);
  }
  return 0;
}



// FUNCTION 146f29198 FUN_146f29198 body=111 status=ok
// SIG undefined FUN_146f29198(void)

void FUN_146f29198(longlong param_1,char param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == '\x01') {
    if (param_3 != 0) {
      uVar4 = *(uint *)(param_1 + 0x34);
      do {
        lVar2 = *(longlong *)(param_1 + 0x28);
        uVar1 = *(uint *)(param_1 + 0x30);
        FUN_146f313c4(param_1 + 0x40);
        uVar3 = *(int *)(param_1 + 0x4c) - 1;
        *(uint *)(param_1 + 0x4c) = uVar3;
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x40) + (ulonglong)(uVar3 & *(uint *)(param_1 + 0x48)) * 4) =
             *(undefined4 *)(lVar2 + (ulonglong)(uVar4 & uVar1) * 4);
        uVar4 = *(int *)(param_1 + 0x34) + 1;
        *(uint *)(param_1 + 0x34) = uVar4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (int)param_3;
  }
  return;
}



// FUNCTION 146f2921e FUN_146f2921e body=127 status=ok
// SIG undefined FUN_146f2921e(void)

uint * FUN_146f2921e(uint *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  *param_1 = 0;
  uVar2 = FUN_146f592ce(lVar1);
  if (uVar2 != 0) {
    uVar3 = FUN_146f546d2(lVar1,1);
    if (param_3 == 0xffffffff) {
      param_3 = FUN_146f546d2(lVar1,3);
    }
    if (*(int *)(lVar1 + 0x14) == 0) {
      *param_1 = (uVar3 & 1) << 0x17 | uVar2 & 0xfffff | (param_3 & 7) << 0x14;
    }
  }
  return param_1;
}



// FUNCTION 146f2929e FUN_146f2929e body=123 status=ok
// SIG undefined FUN_146f2929e(void)

ulonglong FUN_146f2929e(longlong param_1,uint param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  FUN_146f59287(uVar1,param_2 & 0xfffff);
  uVar3 = (ulonglong)(param_2 & 0xfffff);
  if ((param_2 & 0xfffff) != 0) {
    uVar2 = FUN_146f5435e(uVar1,(param_2 >> 0x17 & 1) != 0,1);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)(param_2 >> 0x17)) & 0xffffffffffffff01;
    if (param_3 != '\0') {
      uVar3 = FUN_146f5435e(uVar1,param_2 >> 0x14 & 7,3);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 146f2931a FUN_146f2931a body=202 status=ok
// SIG undefined FUN_146f2931a(void)

uint * FUN_146f2931a(uint *param_1,longlong *param_2,uint param_3)

{
  undefined1 auStack_68 [44];
  uint local_3c;
  byte local_35;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_34 = 0;
  (**(code **)(*param_2 + 0x188))(param_2,&local_34);
  if (local_34 != 0) {
    local_35 = 0;
    (**(code **)(*param_2 + 0x178))(param_2,&local_35,1);
    if (param_3 == 0xffffffff) {
      local_3c = 0;
      (**(code **)(*param_2 + 0x178))(param_2,&local_3c,3);
      param_3 = local_3c;
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      *param_1 = (uint)local_35 << 0x17 | local_34 & 0xfffff | (param_3 & 7) << 0x14;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f293e6 FUN_146f293e6 body=164 status=ok
// SIG undefined FUN_146f293e6(void)

void FUN_146f293e6(longlong *param_1,uint param_2,char param_3)

{
  undefined1 auStack_58 [36];
  uint local_34;
  byte local_2d;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2 & 0xfffff;
  (**(code **)(*param_1 + 0x188))(param_1,&local_2c);
  if (local_2c != 0) {
    local_2d = (byte)(param_2 >> 0x17) & 1;
    (**(code **)(*param_1 + 0x178))(param_1,&local_2d,1);
    if (param_3 != '\0') {
      local_34 = param_2 >> 0x14 & 7;
      (**(code **)(*param_1 + 0x178))(param_1,&local_34,3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2948c FUN_146f2948c body=49 status=ok
// SIG undefined FUN_146f2948c(void)

longlong FUN_146f2948c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (longlong)*(int *)(param_1 + 0x20) << 4;
  do {
    if (*plVar1 == param_2) {
      if (plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
      return 0;
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  return 0;
}



// FUNCTION 146f294be FUN_146f294be body=368 status=ok
// SIG undefined FUN_146f294be(void)

ulonglong FUN_146f294be(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  if ((bool)((byte)(param_4 >> 0x17) & 1) == ((int)param_1[5] == 1)) {
    if (param_3 == 0) {
      FUN_146f5435e(uVar7,1,1);
      uVar5 = param_4 & 0xfffff;
      uVar6 = (ulonglong)uVar5;
      if (uVar5 != 0) {
        uVar6 = (ulonglong)(param_4 >> 0x10 & 0x70);
        plVar2 = *(longlong **)(param_1[3] + 8 + uVar6);
                    /* WARNING: Could not recover jumptable at 0x000146f2957f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar2 + 0x10))
                          (plVar2,param_2,
                           *(undefined4 *)(*(longlong *)(*param_1 + uVar6) + (ulonglong)uVar5 * 4));
        return uVar6;
      }
    }
    else {
      bVar4 = FUN_146f290ea(param_3,param_4);
      uVar7 = FUN_146f5435e(uVar7,(bVar4 ^ 1) != 0,1);
      uVar6 = CONCAT71((int7)((ulonglong)uVar7 >> 8),bVar4) ^ 1;
      if ((bVar4 ^ 1) != 0) {
        if ((param_4 & 0xfffff) != 0) {
          uVar6 = (ulonglong)(param_4 >> 0x10 & 0x70);
          plVar2 = *(longlong **)(param_1[3] + 8 + uVar6);
          (**(code **)(*plVar2 + 0x10))
                    (plVar2,param_2,
                     *(undefined4 *)
                      (*(longlong *)(*param_1 + uVar6) + (ulonglong)(param_4 & 0xfffff) * 4));
        }
        lVar3 = *(longlong *)(param_3 + 8);
        iVar1 = *(int *)(lVar3 + 0x198);
        *(uint *)(lVar3 + 0x198) = iVar1 + 1U;
        if (*(uint *)(lVar3 + 0x19c) < iVar1 + 1U) {
          FUN_146f1af62(lVar3 + 0x110U,iVar1);
        }
        uVar6 = *(ulonglong *)(lVar3 + 400);
        uVar8 = lVar3 + 0x110U;
        if (uVar6 != 0) {
          uVar8 = uVar6;
        }
        *(uint *)(uVar8 + (longlong)iVar1 * 4) = param_4;
      }
    }
  }
  else {
    uVar6 = FUN_146f5435e(uVar7,0,1);
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 146f2962e FUN_146f2962e body=93 status=ok
// SIG undefined FUN_146f2962e(void)

void FUN_146f2962e(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  uVar2 = FUN_146f546d2(lVar1,1);
  if (((uVar2 & 1) != 0) && (*(int *)(lVar1 + 0x14) == 0)) {
    FUN_142a81694(param_1,param_2,param_3,*(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x10));
    return;
  }
  return;
}



// FUNCTION 146f296e2 FUN_146f296e2 body=60 status=ok
// SIG undefined FUN_146f296e2(void)

void FUN_146f296e2(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x1fU & 0xffffffe0;
  FUN_1401211f6(param_1 + 0x108,uVar1,1);
  FUN_1401211f6(param_1 + 0x118,uVar1,1);
  return;
}



// FUNCTION 146f2971e FUN_146f2971e body=89 status=ok
// SIG undefined FUN_146f2971e(void)

void FUN_146f2971e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_144893a1c(param_1 + 0x108,0);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_144893a1c(param_1 + 0x118,0);
    return;
  }
  return;
}



// FUNCTION 146f29778 FUN_146f29778 body=60 status=ok
// SIG undefined FUN_146f29778(void)

void FUN_146f29778(longlong param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + 0x1fU & 0xffffffe0;
  FUN_1401211f6(param_1 + 0x108,uVar1,1);
  FUN_1401211f6(param_1 + 0x118,uVar1,1);
  return;
}



// FUNCTION 146f297b4 FUN_146f297b4 body=273 status=ok
// SIG undefined FUN_146f297b4(void)

undefined8 * FUN_146f297b4(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfe;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_146f298c6(param_1);
  return param_1;
}



// FUNCTION 146f298c6 FUN_146f298c6 body=90 status=ok
// SIG undefined FUN_146f298c6(void)

void FUN_146f298c6(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x170) = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"net.AllowAsyncLoading",0)
  ;
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    *(bool *)(param_1 + 0x171) = 0 < iVar1;
  }
  return;
}



// FUNCTION 146f29920 FUN_146f29920 body=158 status=ok
// SIG undefined FUN_146f29920(void)

void FUN_146f29920(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(longlong *)(param_1 + 0xf0) = param_2;
  uVar1 = FUN_146f23e78(param_2);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  lVar2 = FUN_146f42d10(param_2);
  *(longlong *)(param_1 + 0x100) = lVar2;
  if ((longlong)*(int *)(lVar2 + 0x20) == 0) {
LAB_146f29987:
    lVar2 = 0;
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x18);
    lVar3 = (longlong)*(int *)(lVar2 + 0x20) << 4;
    lVar2 = 0;
    do {
      if (*plVar4 == DAT_14c9995f4) {
        if (plVar4 == (longlong *)0x0) goto LAB_146f29987;
        lVar2 = plVar4[1];
        break;
      }
      plVar4 = plVar4 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(longlong *)(param_1 + 0x108) = lVar2;
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_2 + 0x28) + 0x160;
  *(uint *)(param_1 + 0x118) =
       *(uint *)(param_1 + 0x118) & 0xfffffffe | *(uint *)(param_2 + 0x50) & 1;
  return;
}



// FUNCTION 146f299be FUN_146f299be body=150 status=ok
// SIG undefined FUN_146f299be(void)

undefined8 FUN_146f299be(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar5 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x40;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x40) ^ param_2) &
            0xfffffffffffffff) == 0) {
          if ((uint *)(lVar5 + 8) == (uint *)0x0 || lVar5 == 0) {
            return 0;
          }
          if (*(int *)(lVar5 + 0xc) == 0) {
            return 0;
          }
          uVar1 = *(uint *)(lVar5 + 8);
          uVar2 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (puVar3 == (undefined8 *)0x0) {
              return 0;
            }
            if (*(int *)(puVar3 + 2) != *(int *)(lVar5 + 0xc)) {
              return 0;
            }
            if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
              return 0;
            }
            uVar2 = *puVar3;
          }
          return uVar2;
        }
        iVar4 = *(int *)(lVar5 + 0x38);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f29a54 FUN_146f29a54 body=157 status=ok
// SIG undefined FUN_146f29a54(void)

ulonglong FUN_146f29a54(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  param_3 = param_3 & 0xffffffff;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40) ^ param_2) &
            0xfffffffffffffff) == 0) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) == 0) {
            return param_3;
          }
          uVar1 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(lVar3 + 0x30)) & 0xffffffffffffff08;
          return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 3);
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  return param_3;
}



// FUNCTION 146f29af2 FUN_146f29af2 body=243 status=ok
// SIG undefined FUN_146f29af2(void)

undefined8 FUN_146f29af2(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  do {
    lVar1 = *param_3;
    lVar3 = (longlong)(int)param_3[1] * 0x128;
    if ((int)param_3[1] != 0) {
      do {
        if (((*(ulonglong *)(lVar1 + 0x120) ^ param_2) & 0xfffffffffffffff) == 0) {
          if (lVar1 != 0) goto LAB_146f29be1;
          break;
        }
        lVar3 = lVar3 + -0x128;
        lVar1 = lVar1 + 0x128;
      } while (lVar3 != 0);
    }
    if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar1 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar2 == -1) {
      return 0;
    }
    while (lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40,
          ((*(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x40) ^ param_2) &
          0xfffffffffffffff) != 0) {
      iVar2 = *(int *)(lVar3 + 0x38);
      if (iVar2 == -1) {
        return 0;
      }
    }
    lVar1 = 0;
    if (lVar3 == 0) {
      return 0;
    }
    if (lVar3 == -8) {
      return 0;
    }
    if ((*(byte *)(lVar3 + 0x30) & 0x10) != 0) {
LAB_146f29be1:
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    param_2 = *(ulonglong *)(lVar3 + 0x28);
    if (param_2 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 146f29be6 FUN_146f29be6 body=197 status=ok
// SIG undefined FUN_146f29be6(void)

void FUN_146f29be6(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
    lVar2 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x160);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x168) - 1U &
                             (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 0x20;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar1 * 0x20) ^ param_2) &
            0xfffffffffffffff) == 0) {
          if ((longlong *)(lVar2 + 8) == (longlong *)0x0 || lVar2 == 0) {
            return;
          }
          if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_3);
          }
          *(longlong *)(lVar2 + 8) = param_3;
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f29cac FUN_146f29cac body=231 status=ok
// SIG undefined FUN_146f29cac(void)

undefined8 FUN_146f29cac(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar6 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U &
                    (int)param_2 + ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar5 != -1) {
      lVar2 = *plVar1;
      do {
        if (((*(ulonglong *)(lVar2 + (longlong)iVar5 * 0x10) ^ param_2) & 0xfffffffffffffff) == 0) {
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar2 + 8);
      } while (iVar5 != -1);
    }
  }
  lVar2 = param_1[1];
  lVar3 = *(longlong *)(lVar2 + 0x100);
  if (*(longlong *)(lVar2 + 0x100) == 0) {
    lVar3 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0x108) != 0) {
    uVar4 = 0;
    do {
      if (((*(ulonglong *)(lVar3 + uVar4) ^ param_2) & 0xfffffffffffffff) == 0) {
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),(int)(~uVar4 >> 3) != 0);
      }
      uVar4 = uVar4 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x108) * 8 != uVar4);
  }
  return 0;
}



// FUNCTION 146f29d94 FUN_146f29d94 body=95 status=ok
// SIG undefined FUN_146f29d94(void)

void FUN_146f29d94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x3a8) = 0;
  if (*(int *)(lVar1 + 0x3ac) != 0) {
    FUN_146f2b1bc(lVar1 + 0x1a0,0);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x438) = 0;
  if (*(int *)(lVar1 + 0x43c) == 0) {
    return;
  }
  FUN_146f2b22a(lVar1 + 0x3b0,0);
  return;
}



// FUNCTION 146f29df4 FUN_146f29df4 body=134 status=ok
// SIG undefined FUN_146f29df4(void)

void FUN_146f29df4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)
           FUN_146f32874(param_1 + 0x120,
                         ((uint)((ulonglong)param_2 >> 0x20) & 0xfffffff) * 0x17 + (int)param_2);
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *plVar1 = param_3;
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f29e7c FUN_146f29e7c body=138 status=ok
// SIG undefined FUN_146f29e7c(void)

void FUN_146f29e7c(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    lVar4 = param_1 + 0x158;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x160);
    }
    puVar5 = (ulonglong *)
             (lVar4 + (longlong)
                      (int)(*(int *)(param_1 + 0x168) - 1U &
                           ((uint)(param_2 >> 0x20) & 0xfffffff) * 0x17 + (int)param_2) * 4);
    do {
      iVar3 = (int)*puVar5;
      if ((longlong)iVar3 == -1) {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0x120);
      lVar6 = (longlong)iVar3 * 0x20;
      puVar1 = (ulonglong *)(lVar4 + lVar6);
      puVar5 = puVar1 + 3;
    } while (((*puVar1 ^ param_2) & 0xfffffffffffffff) != 0);
    piVar2 = (int *)(lVar4 + 0x10 + lVar6);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_146f32e12((longlong *)(param_1 + 0x120),iVar3);
      return;
    }
  }
  return;
}



// FUNCTION 146f29f06 FUN_146f29f06 body=38 status=ok
// SIG undefined FUN_146f29f06(void)

undefined8 FUN_146f29f06(undefined8 param_1,int param_2)

{
  FUN_146f23312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f29f2c FUN_146f29f2c body=65 status=ok
// SIG undefined FUN_146f29f2c(void)

undefined8 * FUN_146f29f2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f9a0f0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_146f23312(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f29f6e FUN_146f29f6e body=38 status=ok
// SIG undefined FUN_146f29f6e(void)

undefined8 FUN_146f29f6e(undefined8 param_1,int param_2)

{
  FUN_146f24d60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f29f94 FUN_146f29f94 body=38 status=ok
// SIG undefined FUN_146f29f94(void)

undefined8 FUN_146f29f94(undefined8 param_1,int param_2)

{
  FUN_146f32e6c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f29fba FUN_146f29fba body=65 status=ok
// SIG undefined FUN_146f29fba(void)

undefined8 * FUN_146f29fba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f9a0f0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_146f23312(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f29ffc FUN_146f29ffc body=38 status=ok
// SIG undefined FUN_146f29ffc(void)

undefined8 FUN_146f29ffc(undefined8 param_1,int param_2)

{
  FUN_146f32eb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f2a024 FUN_146f2a024 body=95 status=ok
// SIG undefined FUN_146f2a024(void)

void FUN_146f2a024(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x128) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 300) = 4;
    return;
  }
  FUN_146f2a084(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_146f2a0fd(lVar1,param_2,param_3);
  return;
}



// FUNCTION 146f2a084 FUN_146f2a084 body=121 status=ok
// SIG undefined FUN_146f2a084(void)

void FUN_146f2a084(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146f2a148(param_1,0,iVar3,0x48);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 300) = param_3;
  return;
}



// FUNCTION 146f2a0fd FUN_146f2a0fd body=75 status=ok
// SIG undefined FUN_146f2a0fd(void)

void FUN_146f2a0fd(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
      *(undefined8 *)(param_1 + 8 + lVar8) = *(undefined8 *)(param_2 + 8 + lVar8);
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar8);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x20 + lVar8);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_2 + 0x30 + lVar8);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar8);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(param_1 + 0x30 + lVar8);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined4 *)(param_1 + 0x40 + lVar8) = *(undefined4 *)(param_2 + 0x40 + lVar8);
      lVar8 = lVar8 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f2a148 FUN_146f2a148 body=150 status=ok
// SIG undefined FUN_146f2a148(void)

void FUN_146f2a148(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x120);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x120,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f2a1de FUN_146f2a1de body=154 status=ok
// SIG undefined FUN_146f2a1de(void)

void FUN_146f2a1de(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar7 * 0x20) == param_3) {
          if (((lVar1 + 4U & 0xfffffffffffffffb) != 0) && ((longlong)*(int *)(lVar1 + 0xc) != -1)) {
            lVar2 = param_1[10];
            lVar5 = (longlong)*(int *)(lVar1 + 0xc) * 0x30;
            lVar1 = *(longlong *)(lVar2 + 0x20 + lVar5);
            lVar6 = lVar2 + lVar5;
            if (lVar1 != 0) {
              lVar6 = lVar1;
            }
            *param_2 = lVar6;
            uVar3 = *(undefined4 *)(lVar2 + 0x28 + lVar5);
            goto LAB_146f2a1f2;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x18);
      } while (iVar7 != -1);
    }
  }
  *param_2 = 0;
  uVar3 = 0;
LAB_146f2a1f2:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 146f2a278 FUN_146f2a278 body=168 status=ok
// SIG undefined FUN_146f2a278(void)

void FUN_146f2a278(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x108) = param_2;
    uVar4 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar1) < uVar4) {
      FUN_146f2a322(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar2 = param_1;
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + lVar2);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = puVar3 + 2;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 0x108) = param_2, param_3 == '\x01')) {
    FUN_146f2a428(param_1);
    return;
  }
  return;
}



// FUNCTION 146f2a322 FUN_146f2a322 body=119 status=ok
// SIG undefined FUN_146f2a322(void)

void FUN_146f2a322(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_146f2a39a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2a39a FUN_146f2a39a body=141 status=ok
// SIG undefined FUN_146f2a39a(void)

void FUN_146f2a39a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 146f2a428 FUN_146f2a428 body=67 status=ok
// SIG undefined FUN_146f2a428(void)

void FUN_146f2a428(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2a46c(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c));
  if (iVar1 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar1;
  FUN_146f2a39a(param_1,*(undefined4 *)(param_1 + 0x108),iVar1);
  return;
}



// FUNCTION 146f2a46c FUN_146f2a46c body=108 status=ok
// SIG undefined FUN_146f2a46c(void)

ulonglong FUN_146f2a46c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146f2a4d8 FUN_146f2a4d8 body=67 status=ok
// SIG undefined FUN_146f2a4d8(void)

void FUN_146f2a4d8(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0x10) = param_2;
  uVar2 = param_2 + 0x1fU >> 5;
  FUN_140250df4(param_1,uVar2);
  iVar1 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar1 + uVar2;
  if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < uVar2) {
    FUN_1447808da(param_1);
    return;
  }
  return;
}



// FUNCTION 146f2a51c FUN_146f2a51c body=708 status=ok
// SIG undefined FUN_146f2a51c(void)

void FUN_146f2a51c(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f2a573;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f2a573;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f2a573;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_146f2a7fe(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_146f2a85e(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 8);
      uVar10 = uVar9;
      goto LAB_146f2a6d8;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_146f2a85e(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 8 + local_58),(void *)((longlong)_Src + (ulonglong)uVar11 * 8),
             (longlong)(int)uVar5 << 3);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_146f2a85e(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f2a6f0;
    }
LAB_146f2a6d8:
    memcpy((void *)((longlong)iVar12 * 8 + local_58),_Src,(longlong)(int)uVar10 << 3);
  }
LAB_146f2a6f0:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_146f2a85e(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f2a573:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f2a7fe FUN_146f2a7fe body=95 status=ok
// SIG undefined FUN_146f2a7fe(void)

void FUN_146f2a7fe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146f2a85e FUN_146f2a85e body=132 status=ok
// SIG undefined FUN_146f2a85e(void)

void FUN_146f2a85e(longlong param_1,int param_2)

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



// FUNCTION 146f2a8e4 FUN_146f2a8e4 body=708 status=ok
// SIG undefined FUN_146f2a8e4(void)

void FUN_146f2a8e4(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f2a93b;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f2a93b;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f2a93b;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_146f2abc6(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_146f2ac26(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 8);
      uVar10 = uVar9;
      goto LAB_146f2aaa0;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_146f2ac26(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 8 + local_58),(void *)((longlong)_Src + (ulonglong)uVar11 * 8),
             (longlong)(int)uVar5 << 3);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_146f2ac26(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f2aab8;
    }
LAB_146f2aaa0:
    memcpy((void *)((longlong)iVar12 * 8 + local_58),_Src,(longlong)(int)uVar10 << 3);
  }
LAB_146f2aab8:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_146f2ac26(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f2a93b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f2abc6 FUN_146f2abc6 body=96 status=ok
// SIG undefined FUN_146f2abc6(void)

void FUN_146f2abc6(longlong param_1,int param_2)

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



// FUNCTION 146f2ac26 FUN_146f2ac26 body=132 status=ok
// SIG undefined FUN_146f2ac26(void)

void FUN_146f2ac26(longlong param_1,int param_2)

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



// FUNCTION 146f2acac FUN_146f2acac body=708 status=ok
// SIG undefined FUN_146f2acac(void)

void FUN_146f2acac(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar4 == 0) {
    bVar2 = 0;
  }
  else {
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar2 = (byte)lVar13 ^ 0x3f;
  }
  uVar8 = 1L << (-bVar2 & 0x3f);
  uVar10 = param_1[6];
  if (uVar8 == (longlong)(int)uVar10) goto LAB_146f2ad03;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar9 = uVar6 - uVar5;
  if (uVar8 < uVar9) goto LAB_146f2ad03;
  puVar1 = param_1 + 4;
  uVar7 = (uint)uVar8;
  if ((int)uVar10 < 1) {
    param_1[2] = uVar7 - 1;
    param_1[6] = uVar10 + uVar7;
    if (param_1[7] - uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_146f2ad03;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff);
  }
  if (uVar4 < 0x80000000) {
    FUN_146f2af8e(&local_58,uVar8 & 0xffffffff);
    uVar6 = *param_1;
    uVar5 = param_1[1];
    uVar9 = uVar6 - uVar5;
  }
  uVar4 = uStack_50;
  uVar11 = param_1[2] & uVar5;
  uVar10 = param_1[2] & uVar6;
  _Src = *(void **)(param_1 + 4);
  iVar12 = (uint)uStack_50;
  local_60 = puVar1;
  if (uVar11 < uVar10 || uVar6 == uVar5) {
    iVar3 = (uint)uStack_50 + uVar9;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar9) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = (uint)uStack_50 + uVar9;
      FUN_1459a0cf0(&local_58,uVar4);
      iVar3 = (uint)uStack_50;
    }
    uStack_50._0_4_ = iVar3;
    if (uVar6 != uVar5) {
      _Src = (void *)((longlong)_Src + (ulonglong)uVar11 * 4);
      uVar10 = uVar9;
      goto LAB_146f2ae68;
    }
  }
  else {
    uVar6 = param_1[6];
    uVar5 = uVar6 - uVar11;
    lVar13 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar5);
    if (uStack_50._4_4_ - iVar12 < uVar5) {
      local_68 = _Src;
      FUN_1459a0cf0(&local_58,uVar4 & 0xffffffff);
      _Src = local_68;
    }
    if (uVar6 != uVar11) {
      memcpy((void *)(lVar13 * 4 + local_58),(void *)((longlong)_Src + (ulonglong)uVar11 * 4),
             (longlong)(int)uVar5 << 2);
    }
    iVar12 = (uint)uStack_50;
    iVar3 = (uint)uStack_50 + uVar10;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar10) {
      uVar4 = uStack_50 & 0xffffffff;
      uStack_50._0_4_ = iVar3;
      FUN_1459a0cf0(&local_58,uVar4);
    }
    else {
      uStack_50._0_4_ = iVar3;
      if (uVar10 == 0) goto LAB_146f2ae80;
    }
LAB_146f2ae68:
    memcpy((void *)((longlong)iVar12 * 4 + local_58),_Src,(longlong)(int)uVar10 << 2);
  }
LAB_146f2ae80:
  iVar12 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar7 - uVar9));
  if (uStack_50._4_4_ - iVar12 < uVar7 - uVar9) {
    FUN_1459a0cf0(&local_58);
  }
  if (local_60 == (uint *)&local_58) {
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar7 - 1;
    param_1[1] = 0;
    *param_1 = uVar9;
  }
LAB_146f2ad03:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f2af8e FUN_146f2af8e body=95 status=ok
// SIG undefined FUN_146f2af8e(void)

void FUN_146f2af8e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146f2afee FUN_146f2afee body=62 status=ok
// SIG undefined FUN_146f2afee(void)

void FUN_146f2afee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2b02c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146f2b02c FUN_146f2b02c body=93 status=ok
// SIG undefined FUN_146f2b02c(void)

ulonglong FUN_146f2b02c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f2b08a FUN_146f2b08a body=124 status=ok
// SIG undefined FUN_146f2b08a(void)

void FUN_146f2b08a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14581e548(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146f2afee(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2b108 FUN_146f2b108 body=179 status=ok
// SIG undefined FUN_146f2b108(void)

ulonglong FUN_146f2b108(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x200);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x208);
  uVar6 = (ulonglong)iVar2;
  if (uVar6 != 0) {
    lVar8 = 0;
    iVar7 = 0;
    do {
      if ((((*(ulonglong *)(lVar5 + lVar8) ^ *param_2) & 0xfffffffffffffff) == 0) &&
         (*(int *)(lVar5 + 8 + lVar8) == (int)param_2[1])) {
        if (iVar7 != 1) {
          uVar6 = (ulonglong)(uint)-iVar7;
          goto LAB_146f2b18e;
        }
        break;
      }
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + 0x10;
    } while (uVar6 << 4 != lVar8);
  }
  *(uint *)(param_1 + 0x208) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar2 + 1U) {
    FUN_146f1b4b8(param_1,iVar2);
    lVar4 = *(longlong *)(param_1 + 0x200);
  }
  if (lVar4 != 0) {
    param_1 = lVar4;
  }
  uVar3 = param_2[1];
  puVar1 = (ulonglong *)(param_1 + uVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
LAB_146f2b18e:
  return uVar6 & 0xffffffff;
}



// FUNCTION 146f2b1bc FUN_146f2b1bc body=110 status=ok
// SIG undefined FUN_146f2b1bc(void)

void FUN_146f2b1bc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 4)) {
        uVar2 = uVar1 >> 4 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = (int)uVar2;
    FUN_146f1b536(param_1,*(undefined4 *)(param_1 + 0x208),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 146f2b22a FUN_146f2b22a body=110 status=ok
// SIG undefined FUN_146f2b22a(void)

void FUN_146f2b22a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x20;
    if (0x20 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_146f1afe0(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 146f2b298 FUN_146f2b298 body=108 status=ok
// SIG undefined FUN_146f2b298(void)

void FUN_146f2b298(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2b306 FUN_146f2b306 body=108 status=ok
// SIG undefined FUN_146f2b306(void)

void FUN_146f2b306(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2b374 FUN_146f2b374 body=108 status=ok
// SIG undefined FUN_146f2b374(void)

void FUN_146f2b374(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2b3e2 FUN_146f2b3e2 body=108 status=ok
// SIG undefined FUN_146f2b3e2(void)

void FUN_146f2b3e2(longlong *param_1,int param_2)

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
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1447ab16c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2b44f FUN_146f2b44f body=41 status=ok
// SIG undefined FUN_146f2b44f(void)

void FUN_146f2b44f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f2b50c(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 146f2b478 FUN_146f2b478 body=146 status=ok
// SIG undefined FUN_146f2b478(void)

void FUN_146f2b478(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f2b50c FUN_146f2b50c body=175 status=ok
// SIG undefined FUN_146f2b50c(void)

void FUN_146f2b50c(undefined8 *param_1)

{
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 146f2b5bc FUN_146f2b5bc body=98 status=ok
// SIG undefined FUN_146f2b5bc(void)

void FUN_146f2b5bc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x160 + *param_1);
  FUN_146f2b65c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x160 + (longlong)_Dst),(longlong)iVar2 * 0x160);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146f2b61e FUN_146f2b61e body=62 status=ok
// SIG undefined FUN_146f2b61e(void)

void FUN_146f2b61e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2b78e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x160,8);
  }
  return;
}



// FUNCTION 146f2b65c FUN_146f2b65c body=41 status=ok
// SIG undefined FUN_146f2b65c(void)

void FUN_146f2b65c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146f2b686(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 146f2b686 FUN_146f2b686 body=149 status=ok
// SIG undefined FUN_146f2b686(void)

void FUN_146f2b686(longlong *param_1)

{
  FUN_146f2b71c(param_1 + 0x18);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f2b71c FUN_146f2b71c body=114 status=ok
// SIG undefined FUN_146f2b71c(void)

void FUN_146f2b71c(longlong *param_1)

{
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f2b78e FUN_146f2b78e body=110 status=ok
// SIG undefined FUN_146f2b78e(void)

ulonglong FUN_146f2b78e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x160) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146f2b7c7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x160,8);
      param_2 = param_2 / 0x160;
    }
  }
LAB_146f2b7c7:
  return param_2 & 0xffffffff;
}



// FUNCTION 146f2b7fc FUN_146f2b7fc body=132 status=ok
// SIG undefined FUN_146f2b7fc(void)

void FUN_146f2b7fc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146f2b882 FUN_146f2b882 body=62 status=ok
// SIG undefined FUN_146f2b882(void)

void FUN_146f2b882(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2b8c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146f2b8c0 FUN_146f2b8c0 body=93 status=ok
// SIG undefined FUN_146f2b8c0(void)

ulonglong FUN_146f2b8c0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146f2b91e FUN_146f2b91e body=132 status=ok
// SIG undefined FUN_146f2b91e(void)

void FUN_146f2b91e(longlong param_1,int param_2)

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



// FUNCTION 146f2b9a4 FUN_146f2b9a4 body=62 status=ok
// SIG undefined FUN_146f2b9a4(void)

void FUN_146f2b9a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2b9e2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146f2b9e2 FUN_146f2b9e2 body=93 status=ok
// SIG undefined FUN_146f2b9e2(void)

ulonglong FUN_146f2b9e2(uint param_1,uint param_2)

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



// FUNCTION 146f2ba40 FUN_146f2ba40 body=90 status=ok
// SIG undefined FUN_146f2ba40(void)

void FUN_146f2ba40(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xa0c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xa0c) = 0;
    if (*(void **)((longlong)param_1 + 0xa00) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xa00),
              (longlong)*(int *)((longlong)param_1 + 0xa08) << 2);
      FUN_1446efa72((longlong)param_1 + 0xa00,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 146f2ba9a FUN_146f2ba9a body=144 status=ok
// SIG undefined FUN_146f2ba9a(void)

void FUN_146f2ba9a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa00);
  if ((uint)param_3 < 0x281) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa00,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,param_3,4);
  return;
}



// FUNCTION 146f2bb2a FUN_146f2bb2a body=90 status=ok
// SIG undefined FUN_146f2bb2a(void)

void FUN_146f2bb2a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x30c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
    if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x300),
              (longlong)*(int *)((longlong)param_1 + 0x308) << 2);
      FUN_1446efa72((longlong)param_1 + 0x300,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 146f2bb84 FUN_146f2bb84 body=144 status=ok
// SIG undefined FUN_146f2bb84(void)

void FUN_146f2bb84(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0xc1) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,4);
  return;
}



// FUNCTION 146f2bc14 FUN_146f2bc14 body=125 status=ok
// SIG undefined FUN_146f2bc14(void)

void FUN_146f2bc14(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xc0;
    if (0xc0 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xc0 < *(uint *)(param_1 + 0x30c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x30c) = iVar5;
    FUN_146f2bb84(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2bc92 FUN_146f2bc92 body=125 status=ok
// SIG undefined FUN_146f2bc92(void)

void FUN_146f2bc92(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x280;
    if (0x280 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x280 < *(uint *)(param_1 + 0xa0c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xa0c) = iVar5;
    FUN_146f2ba9a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2bd10 FUN_146f2bd10 body=282 status=ok
// SIG undefined FUN_146f2bd10(void)

undefined4 * FUN_146f2bd10(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f2be2c(param_1,local_48);
  FUN_146f2bfc0(param_3,local_40);
  local_40[0x18] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_146f2bf0e(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[0x19] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[0x18] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f2c684(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2be2c FUN_146f2be2c body=226 status=ok
// SIG undefined FUN_146f2be2c(void)

int * FUN_146f2be2c(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 146f2bf0e FUN_146f2bf0e body=178 status=ok
// SIG undefined FUN_146f2bf0e(void)

undefined8 FUN_146f2bf0e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x68);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x68) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_146f2c44c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x60);
          FUN_146f2c610(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x60);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2bfc0 FUN_146f2bfc0 body=170 status=ok
// SIG undefined FUN_146f2bfc0(void)

undefined4 * FUN_146f2bfc0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_28 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_146f2c06c(param_2 + 2,&local_78);
  param_2[0x16] = (undefined4)local_28;
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_146f2c44c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2c06c FUN_146f2c06c body=123 status=ok
// SIG undefined FUN_146f2c06c(void)

undefined8 * FUN_146f2c06c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146f2c0e8();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146f2c0e8 FUN_146f2c0e8 body=425 status=ok
// SIG undefined FUN_146f2c0e8(void)

longlong * FUN_146f2c0e8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x90;
        *(undefined4 *)(lVar2 + 0x78 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x70 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_146f2c292(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2c292 FUN_146f2c292 body=55 status=ok
// SIG undefined FUN_146f2c292(void)

void FUN_146f2c292(longlong param_1)

{
  FUN_146f2c2ca(param_1,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f2c2ca FUN_146f2c2ca body=125 status=ok
// SIG undefined FUN_146f2c2ca(void)

void FUN_146f2c2ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != param_2) {
    FUN_146f2c348(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < (int)uVar2 || 0x20 < *(int *)(param_1 + 0x54)) {
    uVar1 = 0x20;
    if (0x20 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x54) = uVar1;
    FUN_14008f53c(param_1 + 0x40,0);
    return;
  }
  return;
}



// FUNCTION 146f2c348 FUN_146f2c348 body=118 status=ok
// SIG undefined FUN_146f2c348(void)

void FUN_146f2c348(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0xc)) {
        uVar2 = uVar1 / 0xc & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    FUN_146f2c3be(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,0xc);
    return;
  }
  return;
}



// FUNCTION 146f2c3be FUN_146f2c3be body=141 status=ok
// SIG undefined FUN_146f2c3be(void)

void FUN_146f2c3be(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f2c44c FUN_146f2c44c body=54 status=ok
// SIG undefined FUN_146f2c44c(void)

void FUN_146f2c44c(longlong *param_1)

{
  FUN_146f2c482(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146f2c482 FUN_146f2c482 body=396 status=ok
// SIG undefined FUN_146f2c482(void)

void FUN_146f2c482(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x90;
      *(undefined4 *)(lVar2 + 0x78 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_146f2c292(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140d97c6c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146f2c610 FUN_146f2c610 body=116 status=ok
// SIG undefined FUN_146f2c610(void)

void FUN_146f2c610(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146f2c684 FUN_146f2c684 body=419 status=ok
// SIG undefined FUN_146f2c684(void)

void FUN_146f2c684(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x68;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 100 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar7) =
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



// FUNCTION 146f2c828 FUN_146f2c828 body=78 status=ok
// SIG undefined FUN_146f2c828(void)

void FUN_146f2c828(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)(*param_1 + (longlong)iVar1 * 0x68) == param_2) {
          FUN_146f2c876(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x68 + *param_1 + 0x60);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f2c876 FUN_146f2c876 body=87 status=ok
// SIG undefined FUN_146f2c876(void)

void FUN_146f2c876(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 100 + (longlong)param_2 * 0x68);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x60 + lVar5 * 0x68);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x68 + 0x60);
  FUN_146f2c8ce();
  return;
}



// FUNCTION 146f2c8ce FUN_146f2c8ce body=78 status=ok
// SIG undefined FUN_146f2c8ce(void)

void FUN_146f2c8ce(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2c44c(lVar1 + lVar2 + 8);
  FUN_146f2c610(param_1,param_2);
  return;
}



// FUNCTION 146f2c91c FUN_146f2c91c body=147 status=ok
// SIG undefined FUN_146f2c91c(void)

void FUN_146f2c91c(longlong param_1,int param_2)

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



// FUNCTION 146f2c9b0 FUN_146f2c9b0 body=239 status=ok
// SIG undefined FUN_146f2c9b0(void)

undefined4 * FUN_146f2c9b0(longlong param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f2caa0(param_1,local_48);
  iVar3 = *param_3;
  *local_40 = iVar3;
  local_40[1] = -1;
  local_4c = local_48[0];
  cVar2 = FUN_146f2cb9c(param_1,iVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    cVar2 = FUN_146f2cd1e(param_1,*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x5c));
    if (cVar2 == '\0') {
      uVar4 = (longlong)*(int *)(param_1 + 0x70) - 1U & (longlong)iVar3;
      iVar3 = (int)uVar4;
      local_40[2] = iVar3;
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar5 = param_1 + 0x60;
      }
      local_40[1] = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x70) - 1U & uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(param_1 + 0x68) == 0) {
        lVar5 = param_1 + 0x60;
      }
      *(undefined4 *)(lVar5 + ((longlong)iVar3 & (longlong)*(int *)(param_1 + 0x70) - 1U) * 4) =
           uVar1;
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2caa0 FUN_146f2caa0 body=252 status=ok
// SIG undefined FUN_146f2caa0(void)

int * FUN_146f2caa0(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar6 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar6 + 1;
    if (*(int *)(param_1 + 0x3c) == iVar6) {
      FUN_146f2cc1e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x40,1);
    lVar5 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar5 = param_1 + 0x40;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x58);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(param_1 + 0x5c) + -1;
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0xc;
  return param_2;
}



// FUNCTION 146f2cb9c FUN_146f2cb9c body=129 status=ok
// SIG undefined FUN_146f2cb9c(void)

undefined8 FUN_146f2cb9c(longlong param_1,uint param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x5c) != 1) &&
     (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x5c))) {
    lVar1 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar1 = param_1;
      }
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_146f2cca4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(lVar1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2cc1e FUN_146f2cc1e body=133 status=ok
// SIG undefined FUN_146f2cc1e(void)

void FUN_146f2cc1e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_146f2c3be(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2cca4 FUN_146f2cca4 body=121 status=ok
// SIG undefined FUN_146f2cca4(void)

void FUN_146f2cca4(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x58) * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x5c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x58);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  lVar5 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146f2cd1e FUN_146f2cd1e body=98 status=ok
// SIG undefined FUN_146f2cd1e(void)

undefined8 FUN_146f2cd1e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x70))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x70) = iVar4;
    FUN_146f2cd80(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 146f2cd80 FUN_146f2cd80 body=432 status=ok
// SIG undefined FUN_146f2cd80(void)

void FUN_146f2cd80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1446efa72(param_1 + 0x68,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x60;
    uVar7 = 0;
    FUN_145cfbc50(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x70) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x40;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar6 = *(longlong *)(local_70 + 0x30);
        if (*(longlong *)(local_70 + 0x30) == 0) {
          lVar6 = local_70;
        }
        lVar5 = (longlong)iVar4;
        uVar10 = (longlong)*(int *)(param_1 + 0x70) - 1U & (longlong)*(int *)(lVar6 + lVar5 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar6 + 8 + lVar5 * 0xc) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar6 + 4 + lVar5 * 0xc) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x70) - 1U & uVar10) * 4);
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar6 = lVar1;
        }
        *(int *)(lVar6 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x70) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146f2cf32 FUN_146f2cf32 body=95 status=ok
// SIG undefined FUN_146f2cf32(void)

void FUN_146f2cf32(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar6;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  lVar5 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
  }
  lVar1 = lVar2 + (longlong)param_2 * 0xc;
  lVar6 = (longlong)*(int *)(lVar1 + 8);
  iVar4 = *(int *)(lVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)(lVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 4 + lVar5 * 0xc);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar5 * 0xc + 4);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 4);
  FUN_146f2cca4();
  return;
}



// FUNCTION 146f2cf92 FUN_146f2cf92 body=88 status=ok
// SIG undefined FUN_146f2cf92(void)

void FUN_146f2cf92(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x90) == param_2) {
          FUN_146f2cfea(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x90 + *param_1 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f2cfea FUN_146f2cfea body=106 status=ok
// SIG undefined FUN_146f2cfea(void)

void FUN_146f2cfea(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x8c + (longlong)param_2 * 0x90);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x88 + lVar5 * 0x90);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x90 + 0x88);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x90 + 0x88);
  FUN_146f2d054();
  return;
}



// FUNCTION 146f2d054 FUN_146f2d054 body=82 status=ok
// SIG undefined FUN_146f2d054(void)

void FUN_146f2d054(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x90;
  *(undefined4 *)(lVar1 + 0x78 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x70 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_146f2c292(lVar1 + lVar2 + 8);
  FUN_146f2d0a6(param_1,param_2);
  return;
}



// FUNCTION 146f2d0a6 FUN_146f2d0a6 body=122 status=ok
// SIG undefined FUN_146f2d0a6(void)

void FUN_146f2d0a6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 146f2d120 FUN_146f2d120 body=191 status=ok
// SIG undefined FUN_146f2d120(void)

longlong FUN_146f2d120(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x90;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x90) == *param_3) {
          if (lVar3 != 0) goto LAB_146f2d1c2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x88);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146f2d1e0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x90 + *param_1;
LAB_146f2d1c2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146f2d1e0 FUN_146f2d1e0 body=281 status=ok
// SIG undefined FUN_146f2d1e0(void)

undefined4 * FUN_146f2d1e0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146f2d2fa(param_1,local_48);
  FUN_146f2d4a2(param_4,local_40);
  *(undefined4 *)(local_40 + 0x88) = 0xffffffff;
  cVar1 = FUN_146f2d3e8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x8c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x88) =
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
      FUN_146f2d6ca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2d2fa FUN_146f2d2fa body=238 status=ok
// SIG undefined FUN_146f2d2fa(void)

int * FUN_146f2d2fa(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 146f2d3e8 FUN_146f2d3e8 body=185 status=ok
// SIG undefined FUN_146f2d3e8(void)

undefined8 FUN_146f2d3e8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x78) = 0;
          if (*(longlong *)((longlong)_Dst + 0x70) != 0) {
            FUN_1400020a8();
          }
          FUN_146f2c292((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x88);
          FUN_146f2d0a6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x88);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2d4a2 FUN_146f2d4a2 body=190 status=ok
// SIG undefined FUN_146f2d4a2(void)

undefined4 * FUN_146f2d4a2(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_c8 [32];
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_58 = 0;
  uStack_4c = 0;
  local_38 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_70 = 0x400000000;
  uStack_54 = 0x20;
  uStack_50 = 0xffffffff;
  uStack_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_146f2d562(param_2 + 2,&local_a8);
  param_2[0x20] = (undefined4)uStack_30;
  local_38 = local_38 & 0xffffffff00000000;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  FUN_146f2c292(&local_a8);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2d562 FUN_146f2d562 body=132 status=ok
// SIG undefined FUN_146f2d562(void)

longlong FUN_146f2d562(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x400000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x20;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_146f2d5e6();
  if (*(longlong *)(param_2 + 0x68) == 0) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x70) = 0;
  return param_1;
}



// FUNCTION 146f2d5e6 FUN_146f2d5e6 body=115 status=ok
// SIG undefined FUN_146f2d5e6(void)

longlong FUN_146f2d5e6(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146f2d65a(param_1);
    if (*(longlong *)(param_2 + 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined8 *)(param_2 + 0x58) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 146f2d65a FUN_146f2d65a body=112 status=ok
// SIG undefined FUN_146f2d65a(void)

undefined4 * FUN_146f2d65a(undefined4 *param_1,undefined4 *param_2)

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
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 0xc) == 0) {
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
      param_1[8] = param_2[8];
      param_1[9] = uVar9;
      param_1[10] = uVar10;
      param_1[0xb] = uVar11;
      param_1[4] = uVar5;
      param_1[5] = uVar6;
      param_1[6] = uVar7;
      param_1[7] = uVar8;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
    }
    if (*(longlong *)(param_1 + 0xc) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    *(undefined8 *)(param_2 + 0xe) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 146f2d6ca FUN_146f2d6ca body=433 status=ok
// SIG undefined FUN_146f2d6ca(void)

void FUN_146f2d6ca(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
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



// FUNCTION 146f2d87c FUN_146f2d87c body=29 status=ok
// SIG undefined FUN_146f2d87c(void)

undefined8 FUN_146f2d87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f2d8bc FUN_146f2d8bc body=93 status=ok
// SIG undefined FUN_146f2d8bc(void)

void FUN_146f2d8bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146f2d91a FUN_146f2d91a body=93 status=ok
// SIG undefined FUN_146f2d91a(void)

void FUN_146f2d91a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9a6d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146f2d978 FUN_146f2d978 body=126 status=ok
// SIG undefined FUN_146f2d978(void)

void FUN_146f2d978(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f9a6d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9a660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f2d9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f2da06 FUN_146f2da06 body=26 status=ok
// SIG undefined FUN_146f2da06(void)

undefined8 FUN_146f2da06(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 146f2da22 FUN_146f2da22 body=29 status=ok
// SIG undefined FUN_146f2da22(void)

undefined8 FUN_146f2da22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146f2da62 FUN_146f2da62 body=93 status=ok
// SIG undefined FUN_146f2da62(void)

void FUN_146f2da62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9a7b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146f2dac0 FUN_146f2dac0 body=93 status=ok
// SIG undefined FUN_146f2dac0(void)

void FUN_146f2dac0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9a7b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9a740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146f2db1e FUN_146f2db1e body=126 status=ok
// SIG undefined FUN_146f2db1e(void)

void FUN_146f2db1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f9a7b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9a740;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f2db8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146f2dbb4 FUN_146f2dbb4 body=34 status=ok
// SIG undefined FUN_146f2dbb4(void)

undefined8
FUN_146f2dbb4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 146f2dbd8 FUN_146f2dbd8 body=333 status=ok
// SIG undefined FUN_146f2dbd8(void)

undefined4 * FUN_146f2dbd8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f2dd26(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146f2de0c(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146f2df04(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2dd26 FUN_146f2dd26 body=230 status=ok
// SIG undefined FUN_146f2dd26(void)

int * FUN_146f2dd26(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146f2de0c FUN_146f2de0c body=134 status=ok
// SIG undefined FUN_146f2de0c(void)

undefined8 FUN_146f2de0c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_146f2de92(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2de92 FUN_146f2de92 body=114 status=ok
// SIG undefined FUN_146f2de92(void)

void FUN_146f2de92(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 146f2df04 FUN_146f2df04 body=473 status=ok
// SIG undefined FUN_146f2df04(void)

void FUN_146f2df04(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 146f2e0de FUN_146f2e0de body=132 status=ok
// SIG undefined FUN_146f2e0de(void)

void FUN_146f2e0de(longlong param_1,int param_2)

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



// FUNCTION 146f2e164 FUN_146f2e164 body=62 status=ok
// SIG undefined FUN_146f2e164(void)

void FUN_146f2e164(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146f2e1a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146f2e1a2 FUN_146f2e1a2 body=93 status=ok
// SIG undefined FUN_146f2e1a2(void)

ulonglong FUN_146f2e1a2(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146f2e200 FUN_146f2e200 body=187 status=ok
// SIG undefined FUN_146f2e200(void)

longlong * FUN_146f2e200(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_146f2e29e;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_146f2e2bc(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_146f2e29e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 146f2e2bc FUN_146f2e2bc body=281 status=ok
// SIG undefined FUN_146f2e2bc(void)

undefined4 * FUN_146f2e2bc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a2bc24(param_1,local_48);
  puVar1 = (undefined1 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_140a2bb88(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140a2be0e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2e3d6 FUN_146f2e3d6 body=12 status=ok
// SIG undefined FUN_146f2e3d6(void)

void FUN_146f2e3d6(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 146f2e3e2 FUN_146f2e3e2 body=147 status=ok
// SIG undefined FUN_146f2e3e2(void)

void FUN_146f2e3e2(longlong param_1,int param_2)

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



// FUNCTION 146f2e476 FUN_146f2e476 body=73 status=ok
// SIG undefined FUN_146f2e476(void)

void FUN_146f2e476(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      plVar2 = (longlong *)plVar3[-1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 4;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,1);
        }
      }
      plVar3 = plVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146f2e4c0 FUN_146f2e4c0 body=48 status=ok
// SIG undefined FUN_146f2e4c0(void)

void FUN_146f2e4c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 146f2e4f0 FUN_146f2e4f0 body=47 status=ok
// SIG undefined FUN_146f2e4f0(void)

void FUN_146f2e4f0(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_146f2e520(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146f2e520 FUN_146f2e520 body=129 status=ok
// SIG undefined FUN_146f2e520(void)

undefined4 * FUN_146f2e520(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar2 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 << 2);
  }
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 146f2e5a2 FUN_146f2e5a2 body=147 status=ok
// SIG undefined FUN_146f2e5a2(void)

void FUN_146f2e5a2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((((*(ulonglong *)(lVar4 + uVar5) ^ *param_2) & 0xfffffffffffffff) == 0) &&
         (*(int *)(lVar4 + 8 + uVar5) == (int)param_2[1])) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar6 << 4 != uVar5);
  }
  *(uint *)(param_1 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
    FUN_146f2e636(param_1,iVar2);
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar3 != 0) {
    param_1 = lVar3;
  }
  uVar5 = param_2[1];
  puVar1 = (ulonglong *)(param_1 + lVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 146f2e636 FUN_146f2e636 body=110 status=ok
// SIG undefined FUN_146f2e636(void)

void FUN_146f2e636(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_146f2e6a6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2e6a6 FUN_146f2e6a6 body=132 status=ok
// SIG undefined FUN_146f2e6a6(void)

void FUN_146f2e6a6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 146f2e72a FUN_146f2e72a body=210 status=ok
// SIG undefined FUN_146f2e72a(void)

void FUN_146f2e72a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_146f2e7ce;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146f2e7ce:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146f2e7fc FUN_146f2e7fc body=8 status=ok
// SIG undefined FUN_146f2e7fc(void)

void FUN_146f2e7fc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 146f2e804 FUN_146f2e804 body=122 status=ok
// SIG undefined FUN_146f2e804(void)

void FUN_146f2e804(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146f2e87e FUN_146f2e87e body=114 status=ok
// SIG undefined FUN_146f2e87e(void)

void FUN_146f2e87e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 146f2e8f0 FUN_146f2e8f0 body=122 status=ok
// SIG undefined FUN_146f2e8f0(void)

void FUN_146f2e8f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 146f2e96a FUN_146f2e96a body=81 status=ok
// SIG undefined FUN_146f2e96a(void)

void FUN_146f2e96a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_146f2e9bc(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146f2e9bc FUN_146f2e9bc body=90 status=ok
// SIG undefined FUN_146f2e9bc(void)

void FUN_146f2e9bc(longlong *param_1,int param_2)

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
  FUN_146f2ea16();
  return;
}



// FUNCTION 146f2ea16 FUN_146f2ea16 body=114 status=ok
// SIG undefined FUN_146f2ea16(void)

void FUN_146f2ea16(longlong *param_1,int param_2)

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



// FUNCTION 146f2ea88 FUN_146f2ea88 body=286 status=ok
// SIG undefined FUN_146f2ea88(void)

undefined4 * FUN_146f2ea88(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146f2eba8(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_40[2] = 0xffffffff;
  local_40[3] = 0xffffffff;
  local_40[4] = 0xffffffff;
  local_40[5] = 0xffffffff;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_146f2ec8e(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146f2ed18(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2eba8 FUN_146f2eba8 body=229 status=ok
// SIG undefined FUN_146f2eba8(void)

int * FUN_146f2eba8(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 146f2ec8e FUN_146f2ec8e body=137 status=ok
// SIG undefined FUN_146f2ec8e(void)

undefined8 FUN_146f2ec8e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146f2ea16(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146f2ed18 FUN_146f2ed18 body=422 status=ok
// SIG undefined FUN_146f2ed18(void)

void FUN_146f2ed18(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 146f2eec0 FUN_146f2eec0 body=108 status=ok
// SIG undefined FUN_146f2eec0(void)

void FUN_146f2eec0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_146f2ef2e(param_1,param_2,iVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146f2ef2e FUN_146f2ef2e body=129 status=ok
// SIG undefined FUN_146f2ef2e(void)

void FUN_146f2ef2e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 146f2efb0 FUN_146f2efb0 body=127 status=ok
// SIG undefined FUN_146f2efb0(void)

void FUN_146f2efb0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x14);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  FUN_146f2ef2e(param_1,*(undefined4 *)(param_1 + 0x10),uVar1,1);
  return;
}



// FUNCTION 146f2f030 FUN_146f2f030 body=428 status=ok
// SIG undefined FUN_146f2f030(void)

void FUN_146f2f030(longlong *param_1,uint param_2)

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



// FUNCTION 146f2f1de FUN_146f2f1de body=457 status=ok
// SIG undefined FUN_146f2f1de(void)

void FUN_146f2f1de(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)(((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) & 0xfffffff) *
                       0x17 + (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 146f2f3a8 FUN_146f2f3a8 body=411 status=ok
// SIG undefined FUN_146f2f3a8(void)

void FUN_146f2f3a8(longlong *param_1,uint param_2)

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
      FUN_1447a08a2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447cc1b4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0xc + -8);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = iVar8 + -1;
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
        puVar5 = puVar5 + -3;
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



// FUNCTION 146f2f544 FUN_146f2f544 body=419 status=ok
// SIG undefined FUN_146f2f544(void)

void FUN_146f2f544(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
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



// FUNCTION 146f2f6e8 FUN_146f2f6e8 body=318 status=ok
// SIG undefined FUN_146f2f6e8(void)

undefined4 *
FUN_146f2f6e8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_146f2f828(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = ((uint)((ulonglong)uVar1 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_146f2f90e(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
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
      FUN_146f2f1de(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2f828 FUN_146f2f828 body=229 status=ok
// SIG undefined FUN_146f2f828(void)

int * FUN_146f2f828(longlong *param_1,int *param_2)

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



// FUNCTION 146f2f90e FUN_146f2f90e body=148 status=ok
// SIG undefined FUN_146f2f90e(void)

void FUN_146f2f90e(longlong *param_1,uint param_2,ulonglong *param_3,int *param_4,
                  undefined1 *param_5)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x10);
        if (((*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x10) ^ *param_3) & 0xfffffffffffffff) ==
            0) {
          *puVar1 = *param_3;
          FUN_146f2f9a2(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146f2f97d;
        }
        iVar4 = (int)puVar1[1];
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146f2f97d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 146f2f9a2 FUN_146f2f9a2 body=138 status=ok
// SIG undefined FUN_146f2f9a2(void)

void FUN_146f2f9a2(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146f2fa2c FUN_146f2fa2c body=294 status=ok
// SIG undefined FUN_146f2fa2c(void)

undefined4 * FUN_146f2fa2c(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f2fb54(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_146f2fc3a(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_146f2f544(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146f2fb54 FUN_146f2fb54 body=230 status=ok
// SIG undefined FUN_146f2fb54(void)

int * FUN_146f2fb54(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 146f2fc3a FUN_146f2fc3a body=141 status=ok
// SIG undefined FUN_146f2fc3a(void)

void FUN_146f2fc3a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
        if (*(int *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_146f2fcc8(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_146f2fca5;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_146f2fca5:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 146f2fcc8 FUN_146f2fcc8 body=138 status=ok
// SIG undefined FUN_146f2fcc8(void)

void FUN_146f2fcc8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


