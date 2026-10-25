// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1457b3e8a FUN_1457b3e8a body=525 status=ok
// SIG undefined FUN_1457b3e8a(void)

void FUN_1457b3e8a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined7 uStack_87;
  longlong *local_80;
  undefined4 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(lVar2 + 1000);
  if (lVar8 == 0) {
    uVar7 = FUN_1406eea5e();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar2 + 1000) = lVar8;
  }
  if (*(longlong *)(lVar2 + 0x3f0) == 0) {
    if ((lVar8 == 0) || (*(longlong *)(lVar2 + 0x3e0) == 0)) goto LAB_1457b3fa5;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(lVar2 + 0x3f0) = 0;
      goto LAB_1457b3fa5;
    }
    uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar2 + 0x3e0));
    *(longlong *)(lVar2 + 0x3f0) = lVar8;
    if (lVar8 == 0) goto LAB_1457b3fa5;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  uVar7 = FUN_14479d2ce(param_1 + 0x290);
  local_88 = 0;
  local_60 = 0;
  FUN_1456bb102(&local_88,uVar7);
  FUN_1448729ea(lVar2 + 0x3f8,local_58,&local_88);
  iVar6 = FUN_14005fbd2(local_58,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar9 = local_58;
    if (0x18 < local_40) {
      ppppuVar9 = (undefined8 ****)local_58[0];
    }
    (*pcVar3)(ppppuVar9);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(&local_88);
  if (0 < iVar6) {
    uVar7 = FUN_14479d2ce(param_1 + 0x290);
    FUN_1412cbf9c(&local_88,uVar7);
    if (CONCAT71(uStack_87,local_88) != 0) {
      FUN_140e0c8b2(CONCAT71(uStack_87,local_88),*(longlong *)(param_1 + 8) + 0x3e0,iVar6);
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
LAB_1457b3fa5:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b4098 FUN_1457b4098 body=69 status=ok
// SIG undefined FUN_1457b4098(void)

void FUN_1457b4098(longlong *param_1)

{
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b40dd(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b40dd FUN_1457b40dd body=77 status=ok
// SIG undefined FUN_1457b40dd(void)

void FUN_1457b40dd(longlong param_1,int param_2)

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



// FUNCTION 1457b412a FUN_1457b412a body=228 status=ok
// SIG undefined FUN_1457b412a(void)

longlong FUN_1457b412a(void)

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
  if (DAT_14cacd2a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4ec;
    local_38 = &LAB_14793b6f1;
    local_40 = FUN_1417b73b7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/Engine",L"PoseAsset",&DAT_14cacd2a8,&DAT_14793b6f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacd2a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b4210 FUN_1457b4210 body=96 status=ok
// SIG undefined FUN_1457b4210(void)

longlong FUN_1457b4210(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = param_1;
  if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x150), *(longlong *)(param_1 + 0x150) == 0)) {
    lVar1 = param_1;
  }
  uVar2 = *(uint *)(lVar1 + 0x6c8);
  do {
    if ((int)uVar2 < 1) {
      return 0;
    }
    lVar1 = param_1;
    if (((*(byte *)(param_1 + 0x7e1) & 0x10) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x150), *(longlong *)(param_1 + 0x150) == 0)) {
      lVar1 = param_1;
    }
    uVar2 = uVar2 - 1;
  } while (*(char *)(*(longlong *)(lVar1 + 0x6c0) + 0x55 + (ulonglong)uVar2 * 0x58) != '\x01');
  return *(longlong *)(lVar1 + 0x6c0) + (ulonglong)uVar2 * 0x58;
}



// FUNCTION 1457b4270 FUN_1457b4270 body=116 status=ok
// SIG undefined FUN_1457b4270(void)

longlong * FUN_1457b4270(longlong *param_1,longlong param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  return param_1;
}



// FUNCTION 1457b42e4 FUN_1457b42e4 body=66 status=ok
// SIG undefined FUN_1457b42e4(void)

void FUN_1457b42e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_140114204(param_2);
  if (cVar2 != '\0') {
    uVar1 = FUN_1457b47e6(param_1);
    FUN_140e0ff80(uVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1457b4326 FUN_1457b4326 body=325 status=ok
// SIG undefined FUN_1457b4326(void)

void FUN_1457b4326(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_1 + 2;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_70 = param_1;
  local_48 = param_1;
  local_40 = param_1;
  if (iStack_1c < (int)local_28[3]) {
    do {
      cVar1 = FUN_144729dda((longlong)iStack_54 * 0x58 + *local_70);
      if (cVar1 == '\0') {
        FUN_14883ed34(local_48,iStack_54);
        local_38 = CONCAT11(local_38._1_1_,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_14883ecf0(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b446c FUN_1457b446c body=269 status=ok
// SIG undefined FUN_1457b446c(void)

undefined4 * FUN_1457b446c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1457b4702(param_1,local_48);
  FUN_1457b45e4(param_4,local_40);
  *(undefined4 *)(local_40 + 0x50) = 0xffffffff;
  cVar1 = FUN_1457b457a(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x54) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x50) =
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
      FUN_1457b49cc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b457a FUN_1457b457a body=105 status=ok
// SIG undefined FUN_1457b457a(void)

undefined8 FUN_1457b457a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_140e0fef0(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x58 + *param_1);
    FUN_14883ee1a(_Dst);
    memmove(_Dst,param_3,0x50);
    FUN_14883eda6(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1457b45e4 FUN_1457b45e4 body=187 status=ok
// SIG undefined FUN_1457b45e4(void)

undefined8 * FUN_1457b45e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  puVar3 = (undefined8 *)*param_1;
  *param_2 = *puVar3;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[1] = puVar3[1];
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 2);
  FUN_1447715ec(param_2 + 3,puVar3 + 3);
  param_2[8] = 0;
  param_2[9] = 0;
  FUN_1457b46a0(param_2 + 8,&local_48);
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b46a0 FUN_1457b46a0 body=98 status=ok
// SIG undefined FUN_1457b46a0(void)

undefined8 * FUN_1457b46a0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 1457b4702 FUN_1457b4702 body=227 status=ok
// SIG undefined FUN_1457b4702(void)

int * FUN_1457b4702(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x58) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1457b47e6 FUN_1457b47e6 body=324 status=ok
// SIG undefined FUN_1457b47e6(void)

longlong FUN_1457b47e6(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  if (lVar4 != 0) goto LAB_1457b48a4;
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b3fce50;
  plVar5 = plVar3 + 2;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  *(undefined4 *)(plVar3 + 0xf) = 0xbf800000;
  local_30 = plVar5;
  local_28 = plVar3;
  FUN_1457b492c(&local_30,plVar5);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 != (longlong *)0x0) {
      param_1[1] = 0;
LAB_1457b48d7:
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001457b4902:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar5;
    plVar5 = (longlong *)param_1[1];
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar3;
        goto joined_r0x0001457b4902;
      }
    }
    else {
      param_1[1] = (longlong)plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1457b48d7;
    }
  }
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar4 = *param_1;
LAB_1457b48a4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b492c FUN_1457b492c body=159 status=ok
// SIG undefined FUN_1457b492c(void)

void FUN_1457b492c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1457b4969;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1457b4969;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1457b4969:
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
                    /* WARNING: Could not recover jumptable at 0x0001457b49c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457b49cc FUN_1457b49cc body=954 status=ok
// SIG undefined FUN_1457b49cc(void)

void FUN_1457b49cc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_c0;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar5 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar11 = local_c0._4_4_;
      local_c0 = uVar5;
      do {
        lVar4 = *local_d8;
        lVar7 = (longlong)iVar11 * 0x58;
        lVar2 = lVar4 + lVar7;
        uVar3 = *(uint *)(lVar4 + lVar7);
        uVar9 = *(uint *)(lVar4 + 4 + lVar7);
        if (*(char *)(lVar4 + 8 + lVar7) == '\x01') {
          FUN_1447a97f4(&local_70,lVar2 + 0x18);
          if (0 < local_70._4_4_) {
            iVar10 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar10,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar10,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar10,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar10,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar10,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar10,0);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < local_70._4_4_);
          }
          iVar10 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar10 = *(int *)(lVar2 + 0x18);
        }
        uVar9 = uVar9 ^ uVar3;
        uVar6 = (longlong)(int)(iVar10 + (uVar9 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9) &
                (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar6;
        *(int *)(lVar2 + 0x54) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x50) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar11;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar11 = local_c0._4_4_;
        uVar5 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b4d87 FUN_1457b4d87 body=170 status=ok
// SIG undefined FUN_1457b4d87(void)

byte FUN_1457b4d87(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140944864(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_14042ada0(param_1);
    lVar3 = FUN_140e13f44(uVar2);
    if (lVar3 != 0) {
      local_24 = FUN_141068a6c(param_1);
      plVar4 = (longlong *)FUN_140d17acc(lVar3);
      bVar5 = (byte)lVar3;
      if (plVar4 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,lVar1 + 0x98,&local_24);
        bVar5 = lVar1 != 0;
      }
      bVar5 = plVar4 != (longlong *)0x0 & bVar5;
      goto LAB_1457b4e0d;
    }
  }
  bVar5 = 0;
LAB_1457b4e0d:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 1457b4e32 FUN_1457b4e32 body=311 status=ok
// SIG undefined FUN_1457b4e32(void)

void FUN_1457b4e32(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xde8) != *param_2) || (*(int *)(param_1 + 0xdf0) != (int)param_2[1])
     ) {
    *(longlong *)(param_1 + 0xde8) = *param_2;
    *(int *)(param_1 + 0xdf0) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0xdf8) = 0;
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_1457b5026(param_1,param_2,param_3);
  }
  FUN_140e13f56(param_1 + 0xdd0,param_2,param_3);
  uVar5 = FUN_1447210f0(param_1);
  FUN_1408b794c(&local_38,uVar5);
  if (local_30 != (longlong *)0x0) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_30;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_1457b4f6a(local_38 + 0x20,param_1,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b4f6a FUN_1457b4f6a body=187 status=ok
// SIG undefined FUN_1457b4f6a(void)

void FUN_1457b4f6a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
        goto LAB_1457b500d;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1457b500d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1457b5026 FUN_1457b5026 body=146 status=ok
// SIG undefined FUN_1457b5026(void)

void FUN_1457b5026(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0x3860a972;
  local_28 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x3860a972)) {
    local_38 = *param_2;
    local_30 = (int)param_2[1];
  }
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae360);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b50ba FUN_1457b50ba body=54 status=ok
// SIG undefined FUN_1457b50ba(void)

void FUN_1457b50ba(void)

{
  FUN_140e15530();
  if (DAT_14c9a0e58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a0e38 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b50f0 FUN_1457b50f0 body=168 status=ok
// SIG undefined FUN_1457b50f0(void)

undefined8 FUN_1457b50f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_14001cc68(0x68,0x10);
  local_28 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_20 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1457b519a(uVar4,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1457b519a(uVar4);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b519a FUN_1457b519a body=197 status=ok
// SIG undefined FUN_1457b519a(void)

undefined8 * FUN_1457b519a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_28 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140e18e3c(param_1,&local_30);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140e18e3c(param_1);
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
  }
  *param_1 = &PTR_FUN_14b4108d0;
  param_1[10] = *param_2;
  lVar4 = param_2[1];
  param_1[0xb] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0xc] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b5260 FUN_1457b5260 body=314 status=ok
// SIG undefined FUN_1457b5260(void)

ulonglong FUN_1457b5260(longlong param_1,float param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  fVar11 = 0.0;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  uVar4 = (uint)(int)ROUND(param_2 + param_2 + param_2 + param_2 + 0.5) >> 1;
  if ((byte)uVar4 < 3) {
    local_68 = 0;
    uStack_60 = 0;
    lVar9 = -0xc;
    do {
      uVar7 = uStack_60;
      fVar10 = *(float *)(param_1 + (ulonglong)(uVar4 & 3) * 0xc + 0xd2c + lVar9);
      lVar8 = (longlong)(int)uStack_60;
      uVar5 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
      if (uStack_60._4_4_ < uVar5) {
        FUN_14475e4ac(&local_68,uVar7 & 0xffffffff);
      }
      lVar2 = local_68;
      *(float *)(local_68 + lVar8 * 4) = fVar10;
      fVar11 = fVar11 + fVar10;
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0);
    iVar3 = (int)uStack_60;
    uVar6 = uStack_60 & 0xffffffff;
    uVar4 = rand();
    if (0 < iVar3) {
      fVar11 = fVar11 * ((float)(uVar4 & 0x7fff) / 32767.0);
      fVar10 = 0.0;
      uVar7 = 0;
      do {
        bVar1 = fVar10 <= fVar11;
        fVar10 = fVar10 + *(float *)(lVar2 + uVar7 * 4);
        if ((bVar1) && (fVar11 <= fVar10)) {
          if (uVar7 < 3) goto LAB_1457b535b;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    uVar7 = 0;
LAB_1457b535b:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar7 = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1457b539c FUN_1457b539c body=549 status=ok
// SIG undefined FUN_1457b539c(void)

void FUN_1457b539c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b55c2 FUN_1457b55c2 body=132 status=ok
// SIG undefined FUN_1457b55c2(void)

void FUN_1457b55c2(longlong param_1,int param_2)

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



// FUNCTION 1457b5650 FUN_1457b5650 body=79 status=ok
// SIG undefined FUN_1457b5650(void)

void FUN_1457b5650(longlong param_1)

{
  longlong lVar1;
  
  FUN_1405f1eac();
  lVar1 = FUN_1447210f0(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(param_1);
    *(float *)(param_1 + 0x4ac) = (float)*(double *)(lVar1 + 0x6d0);
  }
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_140e2509e(param_1);
    return;
  }
  return;
}



// FUNCTION 1457b56a0 FUN_1457b56a0 body=137 status=ok
// SIG undefined FUN_1457b56a0(void)

void FUN_1457b56a0(byte *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_140838726(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x599,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b572a FUN_1457b572a body=137 status=ok
// SIG undefined FUN_1457b572a(void)

void FUN_1457b572a(byte *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_140852908(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x59a,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b57b4 FUN_1457b57b4 body=21 status=ok
// SIG undefined FUN_1457b57b4(void)

longlong FUN_1457b57b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar1 = param_1;
  }
  return lVar1 + 0x138;
}



// FUNCTION 1457b57ca FUN_1457b57ca body=196 status=ok
// SIG undefined FUN_1457b57ca(void)

undefined8 * FUN_1457b57ca(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2d30) {
    FUN_144b3d300(&DAT_14cbc2d30);
    if (DAT_14cbc2d30 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"rityZone",9);
      builtin_wcsncpy(local_48 + 8,L"gSingula",8);
      builtin_wcsncpy(local_48,L"OnExitin",8);
      FUN_1446f470e(&DAT_14cbc2d28,local_48,1);
      _Init_thread_footer(&DAT_14cbc2d30);
    }
  }
  *param_1 = DAT_14cbc2d28;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b5890 FUN_1457b5890 body=197 status=ok
// SIG undefined FUN_1457b5890(void)

undefined8 * FUN_1457b5890(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2d20) {
    FUN_144b3d300(&DAT_14cbc2d20);
    if (DAT_14cbc2d20 == -1) {
      builtin_wcsncpy(local_48,L"OnEnteringSingularityZone",0x1a);
      FUN_1446f470e(&DAT_14cbc2d18,local_48,1);
      _Init_thread_footer(&DAT_14cbc2d20);
    }
  }
  *param_1 = DAT_14cbc2d18;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b5956 FUN_1457b5956 body=241 status=ok
// SIG undefined FUN_1457b5956(void)

longlong * FUN_1457b5956(undefined1 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = lVar4 * 0x38;
    plVar5 = plVar2;
    do {
      if (*plVar5 == *param_2) {
        if (plVar5 != (longlong *)0x0) goto LAB_1457b59e0;
        break;
      }
      plVar5 = plVar5 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  local_48 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0xffffffff00000000;
  local_38 = 0xffffffff00000000;
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_140d9427a(param_1 + 0x38,iVar1);
    plVar2 = *(longlong **)(param_1 + 0x38);
  }
  plVar5 = plVar2 + lVar4 * 7;
  plVar2[lVar4 * 7] = *param_2;
  FUN_1457b5a48(plVar2 + lVar4 * 7 + 1,&local_58);
LAB_1457b59e0:
  *param_1 = 0;
  if (param_1[0x78] == '\x01') {
    FUN_140e26d80(param_1 + 0x48);
    param_1[0x78] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5 + 1;
}



// FUNCTION 1457b5a48 FUN_1457b5a48 body=215 status=ok
// SIG undefined FUN_1457b5a48(void)

void FUN_1457b5a48(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
  }
  cVar1 = *(char *)(param_2 + 3);
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    param_1[2] = param_2[2];
  }
  cVar1 = *(char *)((longlong)param_2 + 0x11);
  *(char *)((longlong)param_1 + 0x11) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x13);
  *(char *)((longlong)param_1 + 0x13) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x15);
  *(char *)((longlong)param_1 + 0x15) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x17);
  *(char *)((longlong)param_1 + 0x17) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  *(char *)((longlong)param_1 + 0x19) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  if (param_2[9] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 9);
  }
  *(undefined8 *)(param_1 + 9) = uVar2;
  cVar1 = *(char *)((longlong)param_2 + 0x2d);
  *(char *)((longlong)param_1 + 0x2d) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x2f);
  *(char *)((longlong)param_1 + 0x2f) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  }
  return;
}



// FUNCTION 1457b5b20 FUN_1457b5b20 body=147 status=ok
// SIG undefined FUN_1457b5b20(void)

void FUN_1457b5b20(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457b5bb4 FUN_1457b5bb4 body=40 status=ok
// SIG undefined FUN_1457b5bb4(void)

undefined8 FUN_1457b5bb4(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b5bdc FUN_1457b5bdc body=70 status=ok
// SIG undefined FUN_1457b5bdc(void)

undefined8 FUN_1457b5bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_140d76916(param_1,1);
    FUN_1411b30c0(param_1,&DAT_14cbcff70,param_3);
  }
  return param_1;
}



// FUNCTION 1457b5c22 FUN_1457b5c22 body=237 status=ok
// SIG undefined FUN_1457b5c22(void)

undefined8
FUN_1457b5c22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b419d50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b996790;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1457b5dfe(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b5d10 FUN_1457b5d10 body=237 status=ok
// SIG undefined FUN_1457b5d10(void)

undefined8
FUN_1457b5d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14a1c7440;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b996800;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_140725f8c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b5dfe FUN_1457b5dfe body=216 status=ok
// SIG undefined FUN_1457b5dfe(void)

undefined8 * FUN_1457b5dfe(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457b5ee4 FUN_1457b5ee4 body=132 status=ok
// SIG undefined FUN_1457b5ee4(void)

void FUN_1457b5ee4(longlong param_1,int param_2)

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



// FUNCTION 1457b5f6a FUN_1457b5f6a body=132 status=ok
// SIG undefined FUN_1457b5f6a(void)

void FUN_1457b5f6a(longlong param_1,int param_2)

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



// FUNCTION 1457b5ff0 FUN_1457b5ff0 body=174 status=ok
// SIG undefined FUN_1457b5ff0(void)

void FUN_1457b5ff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong **)(param_1 + 0x10);
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar5 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar5 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_1457b6026;
      }
      LOCK();
      iVar4 = (int)local_18[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_18 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_20 = *(undefined8 *)(param_1 + 8);
  }
LAB_1457b6026:
  if ((*(int *)(param_1 + 0x80) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x78), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_20);
  }
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b60a0 FUN_1457b60a0 body=21 status=ok
// SIG undefined FUN_1457b60a0(void)

undefined8 FUN_1457b60a0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457b60bc FUN_1457b60bc body=147 status=ok
// SIG undefined FUN_1457b60bc(void)

void FUN_1457b60bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x20 + uVar3);
      if ((lVar2 != 0) && (lVar2 == *param_2)) {
        iVar4 = (int)(uVar3 >> 3) * -0x49249249;
        if (iVar4 < 0) {
          return;
        }
        if (iVar1 <= iVar4) {
          return;
        }
        FUN_140bef00e();
        FUN_1457b61f6(param_1 + 0x110,iVar4);
        FUN_1457b6150(param_1 + 0x110);
        FUN_1407058ce(param_1);
        FUN_140705914(param_1);
        *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
        return;
      }
      uVar3 = uVar3 + 0x38;
    } while ((longlong)iVar1 * 0x38 - uVar3 != 0);
  }
  return;
}



// FUNCTION 1457b6150 FUN_1457b6150 body=62 status=ok
// SIG undefined FUN_1457b6150(void)

void FUN_1457b6150(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457b618e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 1457b618e FUN_1457b618e body=103 status=ok
// SIG undefined FUN_1457b618e(void)

ulonglong FUN_1457b618e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x38) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 1457b61f6 FUN_1457b61f6 body=121 status=ok
// SIG undefined FUN_1457b61f6(void)

void FUN_1457b61f6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x28 + (ulonglong)param_2 * 0x38);
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x38);
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar5) * 0x38);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1457b6270 FUN_1457b6270 body=60 status=ok
// SIG undefined FUN_1457b6270(void)

void FUN_1457b6270(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1457b62ac FUN_1457b62ac body=217 status=ok
// SIG undefined FUN_1457b62ac(void)

undefined8 FUN_1457b62ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14a55e880;
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
  *local_38 = &PTR_FUN_14a55e810;
  local_38[3] = param_3;
  FUN_1457b6386(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b6386 FUN_1457b6386 body=216 status=ok
// SIG undefined FUN_1457b6386(void)

undefined8 * FUN_1457b6386(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457b6470 FUN_1457b6470 body=313 status=ok
// SIG undefined FUN_1457b6470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b6470(void)

{
  if ((DAT_14caa6177 & 2) == 0) {
    DAT_14caa6177 = DAT_14caa6177 | 2;
    _DAT_14caa6118 = L"FLandscapeGrassWeightVS";
    _DAT_14caa6130 = FUN_146826540;
    _DAT_14caa6138 = FUN_146825d77;
    _DAT_14caa6140 = FUN_146825fd6;
    _DAT_14caa6148 = FUN_1407e02ea;
    _DAT_14caa6150 = FUN_146826273;
    _DAT_14caa6128 = FUN_1474613f4;
    _DAT_14caa6168 = 0xffffffff00000110;
    _DAT_14caa6170 = 8;
    DAT_14caa6174 = 0;
    _DAT_14caa6158 = &LAB_147461438;
    _DAT_14caa6610 = L"RenderOffsetParameter";
    DAT_14caa663a = FUN_140850cc5();
    _DAT_14caa6618 = FUN_140ec6960();
    _DAT_14caa6628 = &LAB_14682652b;
    _DAT_14caa6630 = &DAT_100000108;
    _DAT_14caa6638 = 0;
    _DAT_14caa6620 = DAT_14caa6120;
    DAT_14caa6120 = &DAT_14caa6610;
    FUN_1457b65aa();
    FUN_1407e00cc(&DAT_14caa6110);
    return;
  }
  return;
}



// FUNCTION 1457b65aa FUN_1457b65aa body=123 status=ok
// SIG undefined FUN_1457b65aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b65aa(void)

{
  _DAT_14caa6670 = L"BASE";
  DAT_14caa669a = 4;
  _DAT_14caa6678 = FUN_141092e92();
  _DAT_14caa6680 = DAT_14caa6120;
  _DAT_14caa6688 = &LAB_14682652b;
  DAT_14caa6120 = &DAT_14caa6670;
  DAT_14caa6175 = DAT_14caa6175 + '\x01';
  _DAT_14caa6690 = 0x100000000;
  if (*(char *)(_DAT_14caa6678 + 100) != '\0') {
    DAT_14caa6176 = DAT_14caa6176 + '\x01';
  }
  return;
}



// FUNCTION 1457b6626 FUN_1457b6626 body=313 status=ok
// SIG undefined FUN_1457b6626(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b6626(void)

{
  if ((DAT_14caa629f & 2) == 0) {
    DAT_14caa629f = DAT_14caa629f | 2;
    _DAT_14caa6240 = L"FLandscapeGrassWeightPS";
    _DAT_14caa6258 = FUN_146826540;
    _DAT_14caa6260 = FUN_146825d77;
    _DAT_14caa6268 = FUN_146825fd6;
    _DAT_14caa6270 = FUN_1407e02ea;
    _DAT_14caa6278 = FUN_146826273;
    _DAT_14caa6250 = FUN_1474614b8;
    _DAT_14caa6290 = 0xffffffff00000110;
    _DAT_14caa6298 = 8;
    DAT_14caa629c = 0;
    _DAT_14caa6280 = &LAB_1474614fc;
    _DAT_14caa6640 = L"OutputPassParameter";
    DAT_14caa666a = FUN_140850cc5();
    _DAT_14caa6648 = FUN_140ec6960();
    _DAT_14caa6658 = &LAB_14682652b;
    _DAT_14caa6660 = &DAT_100000108;
    _DAT_14caa6668 = 0;
    _DAT_14caa6650 = DAT_14caa6248;
    DAT_14caa6248 = &DAT_14caa6640;
    FUN_1457b6760();
    FUN_1407e00cc(&DAT_14caa6238);
    return;
  }
  return;
}



// FUNCTION 1457b6760 FUN_1457b6760 body=123 status=ok
// SIG undefined FUN_1457b6760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457b6760(void)

{
  _DAT_14caa66a0 = L"BASE";
  DAT_14caa66ca = 4;
  _DAT_14caa66a8 = FUN_141092e92();
  _DAT_14caa66b0 = DAT_14caa6248;
  _DAT_14caa66b8 = &LAB_14682652b;
  DAT_14caa6248 = &DAT_14caa66a0;
  DAT_14caa629d = DAT_14caa629d + '\x01';
  _DAT_14caa66c0 = 0x100000000;
  if (*(char *)(_DAT_14caa66a8 + 100) != '\0') {
    DAT_14caa629e = DAT_14caa629e + '\x01';
  }
  return;
}



// FUNCTION 1457b67dc FUN_1457b67dc body=199 status=ok
// SIG undefined FUN_1457b67dc(void)

void FUN_1457b67dc(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403c747e(param_1,&local_20,*(undefined8 *)(param_1 + 0x3e0));
  if ((((local_20 != 0) && (cVar1 = FUN_144729dda(param_3), cVar1 != '\0')) &&
      (0 < *(int *)(param_3 + 0x138))) &&
     (lVar2 = FUN_14479d2ce(*(longlong *)(param_3 + 0x130) + 0xb0), lVar2 != 0)) {
    lVar3 = FUN_144a7e30a();
    lVar5 = *(longlong *)(lVar3 + 0x110);
    if (lVar5 == 0) {
      FUN_140aa6c08(lVar3);
      lVar5 = *(longlong *)(lVar3 + 0x110);
      if (lVar5 == 0) goto LAB_1457b6863;
    }
    uVar4 = FUN_140849db6(lVar5,*(undefined1 *)(lVar2 + 0x60));
    FUN_140849a08(local_20,uVar4);
  }
LAB_1457b6863:
  FUN_144a61ac8(&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b68a4 FUN_1457b68a4 body=40 status=ok
// SIG undefined FUN_1457b68a4(void)

undefined8 FUN_1457b68a4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b68cc thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1457b68d2 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1457b68d8 FUN_1457b68d8 body=91 status=ok
// SIG undefined FUN_1457b68d8(void)

undefined8 FUN_1457b68d8(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1401fa540();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1401fa540();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001457b6927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1457b6934 FUN_1457b6934 body=48 status=ok
// SIG undefined FUN_1457b6934(void)

void FUN_1457b6934(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 1457b6974 FUN_1457b6974 body=202 status=ok
// SIG undefined FUN_1457b6974(void)

undefined8 * FUN_1457b6974(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_149eeb850;
  FUN_1457b6a3e(param_1 + 2,param_2 + 0x10);
  FUN_1457b6a3e(param_1 + 0xca,param_2 + 0x650);
  param_1[0x192] = &PTR_FUN_149eeb510;
  FUN_140e361c2(param_1 + 0x194,param_2 + 0xca0);
  FUN_140e361c2(param_1 + 0x1aa,param_2 + 0xd50);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0xe00);
  FUN_140e361c2(param_1 + 0x1c2,param_2 + 0xe10);
  uVar1 = *(undefined4 *)(param_2 + 0xec4);
  uVar2 = *(undefined4 *)(param_2 + 0xec8);
  uVar3 = *(undefined4 *)(param_2 + 0xecc);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0xec0);
  *(undefined4 *)((longlong)param_1 + 0xec4) = uVar1;
  *(undefined4 *)(param_1 + 0x1d9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xecc) = uVar3;
  *(undefined4 *)(param_1 + 0x1da) = *(undefined4 *)(param_2 + 0xed0);
  FUN_140e361c2(param_1 + 0x1dc,param_2 + 0xee0);
  *(undefined4 *)(param_1 + 0x1f2) = *(undefined4 *)(param_2 + 0xf90);
  return param_1;
}



// FUNCTION 1457b6a3e FUN_1457b6a3e body=184 status=ok
// SIG undefined FUN_1457b6a3e(void)

undefined8 * FUN_1457b6a3e(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_FUN_149eeb4f0;
  FUN_140e361c2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x18,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x2e,param_2 + 0x170);
  FUN_140e361c2(param_1 + 0x44,param_2 + 0x220);
  FUN_140e361c2(param_1 + 0x5a,param_2 + 0x2d0);
  FUN_140e361c2(param_1 + 0x70,param_2 + 0x380);
  FUN_140e361c2(param_1 + 0x86,param_2 + 0x430);
  FUN_140e361c2(param_1 + 0x9c,param_2 + 0x4e0);
  FUN_140e361c2(param_1 + 0xb2,param_2 + 0x590);
  return param_1;
}



// FUNCTION 1457b6af6 FUN_1457b6af6 body=132 status=ok
// SIG undefined FUN_1457b6af6(void)

void FUN_1457b6af6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_var;
  longlong lVar3;
  int iVar4;
  
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
      lVar3 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    FUN_144a3809e(lVar3 << 8,0x10);
    iVar4 = 0x7fffffff;
    if ((int)uVar1 <= extraout_var) {
      iVar4 = extraout_var;
    }
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,param_2,iVar4,0x100,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457b6b7c FUN_1457b6b7c body=96 status=ok
// SIG undefined FUN_1457b6b7c(void)

void FUN_1457b6b7c(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else if (param_2 < 4) {
    iVar3 = 3;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = iVar3;
    FUN_1457b6bdc(param_1,*(undefined4 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1457b6bdc FUN_1457b6bdc body=131 status=ok
// SIG undefined FUN_1457b6bdc(void)

void FUN_1457b6bdc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x10);
  return;
}



// FUNCTION 1457b6c60 FUN_1457b6c60 body=1209 status=ok
// SIG undefined FUN_1457b6c60(void)

void FUN_1457b6c60(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_4d8 [32];
  longlong local_4b8;
  int local_4b0;
  undefined8 local_4a8;
  undefined8 *local_2a0;
  int local_298;
  undefined1 local_288 [560];
  undefined1 local_58;
  undefined6 local_54;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (*(longlong *)(param_1 + 0x16d0) == 0) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x16d0) + 0x488);
  }
  lVar6 = *(longlong *)(param_1 + 0x1768);
  if (lVar6 == 0) {
    uVar8 = FUN_14043db3a();
    lVar6 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x1768) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + -0x3c0);
  if (*(longlong *)(param_1 + 6000) == 0) {
    bVar11 = false;
    if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x1760) != 0)) {
      plVar3 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 6000) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar6 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x1760));
        *(longlong *)(param_1 + 6000) = lVar6;
        if (lVar6 != 0) goto LAB_1457b6cc8;
      }
      goto LAB_1457b6f36;
    }
  }
  else {
LAB_1457b6cc8:
    cVar4 = (**(code **)(*plVar1 + 0x658))(plVar1);
    if (cVar4 == '\0') {
      bVar11 = *(longlong *)(param_1 + 0x17d0) == 0;
    }
    else {
LAB_1457b6f36:
      bVar11 = false;
    }
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
LAB_1457b6ea3:
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(longlong *)*param_2 + 8))();
    if (lVar6 == 0) {
LAB_1457b6e8d:
      if ((longlong *)*param_2 == (longlong *)0x0) goto LAB_1457b6ea3;
      lVar6 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    }
    else {
      lVar7 = FUN_1449f3324();
      if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
         (lVar6 = *(longlong *)(lVar6 + 0xa08), lVar6 == 0)) goto LAB_1457b6e8d;
    }
  }
  if (bVar11) {
    cVar4 = FUN_1457b711a(plVar1,lVar6);
    if (cVar4 == '\0') {
      if ((cVar5 == '\0') || (cVar5 = FUN_1487c1f90(plVar1,lVar6), cVar5 == '\0'))
      goto LAB_1457b6d47;
      FUN_140e386ea(&local_4b8);
      FUN_140e386ea(local_288);
      local_58 = 0;
      local_44 = 0;
      local_54 = 0;
      uStack_4e = 0;
      uStack_4c = 0;
      FUN_1414b2d2c(&local_4b8,1);
      lVar6 = *(longlong *)(param_1 + 0x16d0);
      if (((lVar6 != 0) &&
          ((lVar7 = *(longlong *)(lVar6 + 0x470), lVar7 != 0 &&
           (iVar2 = *(int *)(lVar6 + 0x478), iVar2 - 1U < 0xfffffffe)))) &&
         ((local_4b8 != lVar7 || (local_4b0 != iVar2)))) {
        local_4a8 = 0;
        local_4b8 = lVar7;
        local_4b0 = iVar2;
      }
      if ((char)param_2[1] == '\x01') {
        if (local_298 != 3) {
          FUN_1446efa72(&local_2a0,0,3,0x10);
          local_298 = 3;
        }
        *local_2a0 = &PTR_LAB_14b3e9b40;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_2a0[2] = lVar7;
        ppuVar9 = &PTR_FUN_14b3e8ea0;
        puVar10 = local_2a0;
        goto LAB_1457b70d9;
      }
    }
    else {
      FUN_140e386ea(&local_4b8);
      FUN_140e386ea(local_288);
      local_58 = 0;
      local_44 = 0;
      local_54 = 0;
      uStack_4e = 0;
      uStack_4c = 0;
      FUN_1414b2d2c(&local_4b8,1);
      lVar6 = *(longlong *)(param_1 + 0x16d0);
      if (((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 0x470), lVar7 != 0)) &&
         ((iVar2 = *(int *)(lVar6 + 0x478), iVar2 - 1U < 0xfffffffe &&
          ((local_4b8 != lVar7 || (local_4b0 != iVar2)))))) {
        local_4a8 = 0;
        local_4b8 = lVar7;
        local_4b0 = iVar2;
      }
      if ((char)param_2[1] == '\x01') {
        if (local_298 != 3) {
          FUN_1446efa72(&local_2a0,0,3,0x10);
          local_298 = 3;
        }
        *local_2a0 = &PTR_LAB_14b3e9b40;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_2a0[2] = lVar7;
        ppuVar9 = &PTR_FUN_14b3e8e30;
        puVar10 = local_2a0;
LAB_1457b70d9:
        *puVar10 = ppuVar9;
        puVar10[3] = 0;
        FUN_14485c47a(puVar10 + 3,plVar1);
        puVar10[4] = plVar1;
      }
    }
    FUN_140e386c4(param_3,&local_4b8,0);
  }
  else {
LAB_1457b6d47:
    FUN_140e386ea(&local_4b8);
    FUN_140e386ea(local_288);
    local_58 = 0;
    local_44 = 0;
    local_54 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    FUN_140e386c4(param_3,&local_4b8,0);
  }
  FUN_144908ac8(local_288);
  FUN_144908ac8(&local_4b8);
  if ((local_40 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b711a FUN_1457b711a body=280 status=ok
// SIG undefined FUN_1457b711a(void)

ulonglong FUN_1457b711a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 unaff_RBP;
  longlong lVar8;
  
  lVar4 = FUN_1447210f0();
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (lVar4 != 0) {
    lVar4 = FUN_140115352(lVar4);
    if (lVar4 != 0) {
      uVar3 = FUN_145d8acae(param_1,4);
      lVar6 = *(longlong *)(param_1 + 0x1a90);
      uVar7 = 0;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_1 + 0x1b54);
        if (-1 < (int)uVar1) {
          uVar2 = *(uint *)(lVar6 + 0x368);
          if (((int)uVar1 < (int)uVar2) && (-1 < (int)uVar3)) {
            lVar6 = *(longlong *)(lVar6 + 0x360);
            lVar8 = (ulonglong)uVar1 * 0x60 + lVar6;
            if (((int)uVar3 < *(int *)(lVar8 + 0x20)) &&
               (plVar5 = (longlong *)((ulonglong)uVar3 * 0x100 + *(longlong *)(lVar8 + 0x18)),
               plVar5 != (longlong *)0x0)) {
              lVar8 = 0;
              do {
                if (*(longlong *)(lVar6 + lVar8) == *plVar5) {
                  uVar3 = (int)(lVar8 >> 5) * -0x55555555;
                  uVar7 = 0;
                  if ((-1 < (int)uVar3) && (uVar7 = 0, (int)uVar3 < (int)uVar2)) {
                    lVar6 = FUN_140e779b2(param_1 + 0x1920,
                                          lVar6 + (ulonglong)(uVar3 & 0x7fffffff) * 0x60 + 0x40);
                    uVar7 = 1;
                    if (lVar6 != 0) {
                      uVar7 = FUN_140e3896e(lVar4,lVar6 + 0x20,param_1,param_2);
                      return uVar7;
                    }
                  }
                  goto LAB_1457b71c5;
                }
                lVar8 = lVar8 + 0x60;
              } while ((ulonglong)uVar2 * 0x60 != lVar8);
            }
          }
          uVar7 = 0;
        }
      }
    }
  }
LAB_1457b71c5:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1457b7242 FUN_1457b7242 body=112 status=ok
// SIG undefined FUN_1457b7242(void)

void FUN_1457b7242(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1457b72b2 FUN_1457b72b2 body=87 status=ok
// SIG undefined FUN_1457b72b2(void)

void FUN_1457b72b2(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x28 + *param_1);
  FUN_1457b7348(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar1) * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1457b730a(param_1);
  return;
}



// FUNCTION 1457b730a FUN_1457b730a body=62 status=ok
// SIG undefined FUN_1457b730a(void)

void FUN_1457b730a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457b7394(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1457b7348 FUN_1457b7348 body=76 status=ok
// SIG undefined FUN_1457b7348(void)

void FUN_1457b7348(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b7394 FUN_1457b7394 body=113 status=ok
// SIG undefined FUN_1457b7394(void)

ulonglong FUN_1457b7394(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x28) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 1457b7406 FUN_1457b7406 body=136 status=ok
// SIG undefined FUN_1457b7406(void)

void FUN_1457b7406(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_14479d2ce(lVar3);
        (**(code **)(*plVar2 + 0x2f8))(plVar2,param_2);
        plVar2 = (longlong *)FUN_14479d2ce(lVar3);
        (**(code **)(*plVar2 + 0x2b8))(plVar2,0);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_1457b748e(param_1 + 8);
  FUN_14148aa64(param_1);
  return;
}



// FUNCTION 1457b748e FUN_1457b748e body=116 status=ok
// SIG undefined FUN_1457b748e(void)

void FUN_1457b748e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_14759e5d8(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)(uint)-iVar1 << 3);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14759ff18(param_1);
  return;
}



// FUNCTION 1457b7504 FUN_1457b7504 body=80 status=ok
// SIG undefined FUN_1457b7504(void)

longlong * FUN_1457b7504(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140e41ceb(*param_1,(int)param_1[1]);
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



// FUNCTION 1457b7554 FUN_1457b7554 body=12 status=ok
// SIG undefined FUN_1457b7554(void)

void FUN_1457b7554(longlong param_1)

{
  FUN_140d82b92(*(undefined8 *)(param_1 + 8),param_1);
  return;
}



// FUNCTION 1457b7560 FUN_1457b7560 body=33 status=ok
// SIG undefined FUN_1457b7560(void)

void FUN_1457b7560(longlong param_1)

{
  FUN_140e436b6();
  FUN_1447f69b6(param_1 + 0x380);
  return;
}



// FUNCTION 1457b7582 FUN_1457b7582 body=34 status=ok
// SIG undefined FUN_1457b7582(void)

void FUN_1457b7582(undefined8 param_1)

{
  FUN_141452ad6();
  FUN_143e30788(param_1);
  FUN_1412dc1ee(param_1);
  return;
}



// FUNCTION 1457b75a4 FUN_1457b75a4 body=104 status=ok
// SIG undefined FUN_1457b75a4(void)

void FUN_1457b75a4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(byte *)(*(longlong *)(param_1 + 8) + 0x10c) = *(byte *)(param_1 + 0x10) >> 1 & 1;
  lVar3 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(lVar3 + 0x88) == 0) ||
     (plVar1 = *(longlong **)(lVar3 + 0x90), plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_14485c47a(lVar3 + 0x104,uVar2);
  FUN_143e30de8(param_1);
  FUN_143e31c8a(param_1);
  return;
}



// FUNCTION 1457b760c FUN_1457b760c body=124 status=ok
// SIG undefined FUN_1457b760c(void)

undefined8 FUN_1457b760c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 8) == 0) || (0xfffffffd < *(int *)(param_1 + 0x10) - 1U)) {
    uVar1 = 0;
  }
  else {
    local_48 = *(longlong *)(param_1 + 8);
    FUN_1446dcdd4(local_40);
    uVar1 = FUN_140cde312(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b768a FUN_1457b768a body=191 status=ok
// SIG undefined FUN_1457b768a(void)

bool FUN_1457b768a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = param_1 != 0;
    if ((bVar6) && (param_1 != param_2)) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (lVar3 == 0) {
          uVar4 = FUN_14042c486();
          lVar3 = FUN_14477b664(uVar4);
          *(longlong *)(param_1 + 0x60) = lVar3;
        }
        lVar5 = *(longlong *)(param_1 + 0x68);
        if (lVar5 == 0) {
          if (lVar3 == 0) {
            return false;
          }
          if (*(longlong *)(param_1 + 0x58) == 0) {
            return false;
          }
          plVar1 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            lVar5 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x58));
          }
          *(longlong *)(param_1 + 0x68) = lVar5;
        }
        bVar6 = lVar5 != 0;
        param_1 = lVar5;
      } while (lVar5 != param_2 && bVar6);
    }
  }
  return bVar6;
}



// FUNCTION 1457b7772 FUN_1457b7772 body=100 status=ok
// SIG undefined FUN_1457b7772(void)

undefined8 * FUN_1457b7772(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14ac47e10;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23e40,0);
  *(undefined2 *)((longlong)param_1 + 0x7b) = 0x100;
  *(undefined2 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1457b77d6 FUN_1457b77d6 body=53 status=ok
// SIG undefined FUN_1457b77d6(void)

void FUN_1457b77d6(longlong *param_1)

{
  FUN_1457b7842();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b780c FUN_1457b780c body=53 status=ok
// SIG undefined FUN_1457b780c(void)

void FUN_1457b780c(longlong *param_1)

{
  FUN_1457b789c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b7842 FUN_1457b7842 body=90 status=ok
// SIG undefined FUN_1457b7842(void)

void FUN_1457b7842(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457b789c FUN_1457b789c body=90 status=ok
// SIG undefined FUN_1457b789c(void)

void FUN_1457b789c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1457b78f6 FUN_1457b78f6 body=120 status=ok
// SIG undefined FUN_1457b78f6(void)

longlong FUN_1457b78f6(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1457b796e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1457b796e FUN_1457b796e body=121 status=ok
// SIG undefined FUN_1457b796e(void)

undefined8 * FUN_1457b796e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e4a73c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1457b7a04 FUN_1457b7a04 body=38 status=ok
// SIG undefined FUN_1457b7a04(void)

undefined8 FUN_1457b7a04(undefined8 param_1,int param_2)

{
  FUN_1457b7a2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b7a2a FUN_1457b7a2a body=202 status=ok
// SIG undefined FUN_1457b7a2a(void)

void FUN_1457b7a2a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b40ddd0;
  if ((param_1[0x1f] != 0) && (param_1[0x21] != 0)) {
    FUN_14480f766(param_1[0x1f] + 0x88);
  }
  plVar3 = (longlong *)param_1[0x2b];
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
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x20];
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
  FUN_1449db362(param_1 + 0x1d);
  FUN_1457b7af4(param_1);
  return;
}



// FUNCTION 1457b7af4 FUN_1457b7af4 body=360 status=ok
// SIG undefined FUN_1457b7af4(void)

void FUN_1457b7af4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_LAB_14b432200;
  FUN_1457b7cfc();
  FUN_1457b7c82(param_1);
  puVar4 = param_1 + 3;
  cVar6 = FUN_144729dda(puVar4);
  if (cVar6 != '\0') {
    lVar7 = FUN_14479d2ce(puVar4);
    if (*(int *)(lVar7 + 0x3b0) != 0) {
      puVar3 = *(undefined8 **)(lVar7 + 0x3a8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,0);
        FUN_1446efa72((longlong *)(lVar7 + 0x3a8),0,0,0x10);
        *(undefined4 *)(lVar7 + 0x3b0) = 0;
      }
    }
    lVar7 = FUN_14479d2ce(puVar4);
    uVar8 = FUN_14479d2ce(param_1 + 2);
    FUN_140457ffc(lVar7 + 0x390,uVar8);
    uVar8 = FUN_14479d2ce(puVar4);
    FUN_140aeefbc(uVar8,0,1);
    param_1[3] = 0;
  }
  if (param_1[0x19] != 0) {
    cVar6 = FUN_144729dda(param_1 + 0x1a);
    if (cVar6 != '\0') {
      lVar7 = FUN_14479d2ce(param_1 + 0x1a);
      if (param_1[0x19] != 0) {
        FUN_14480f766(lVar7 + 0x410);
      }
    }
  }
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[9] = 0;
    (**(code **)*puVar4)(puVar4,1);
    puVar4 = (undefined8 *)param_1[9];
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  plVar5 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x0001457b7c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457b7c5c FUN_1457b7c5c body=38 status=ok
// SIG undefined FUN_1457b7c5c(void)

undefined8 FUN_1457b7c5c(undefined8 param_1,int param_2)

{
  FUN_140e50e88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b7c82 FUN_1457b7c82 body=122 status=ok
// SIG undefined FUN_1457b7c82(void)

void FUN_1457b7c82(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30), lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0xc0));
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,lVar1);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1457b7cfc FUN_1457b7cfc body=116 status=ok
// SIG undefined FUN_1457b7cfc(void)

void FUN_1457b7cfc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x30), lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x50));
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,lVar1);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1457b7d70 FUN_1457b7d70 body=59 status=ok
// SIG undefined FUN_1457b7d70(void)

void FUN_1457b7d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b431a40;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1457b7dac(param_1 + 9);
  FUN_1457b7dec(param_1);
  return;
}



// FUNCTION 1457b7dac FUN_1457b7dac body=64 status=ok
// SIG undefined FUN_1457b7dac(void)

void FUN_1457b7dac(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457b7dec FUN_1457b7dec body=80 status=ok
// SIG undefined FUN_1457b7dec(void)

void FUN_1457b7dec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa51e30;
  FUN_140457ffc(&DAT_14c872d10,param_1);
  FUN_140e50f6c(param_1);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 1457b7e3c FUN_1457b7e3c body=84 status=ok
// SIG undefined FUN_1457b7e3c(void)

void FUN_1457b7e3c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x260);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x260) = 0;
    lVar2 = DAT_14cafa570;
    if ((DAT_14cafa570 != 0) && (*(undefined4 *)(DAT_14cafa570 + 8) = 0, *(int *)(lVar2 + 0xc) != 0)
       ) {
      FUN_147c86524(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1457b7e90 FUN_1457b7e90 body=96 status=ok
// SIG undefined FUN_1457b7e90(void)

void FUN_1457b7e90(longlong param_1,int param_2)

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



// FUNCTION 1457b7ef0 FUN_1457b7ef0 body=26 status=ok
// SIG undefined FUN_1457b7ef0(void)

void FUN_1457b7ef0(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_1457b7f0a(param_1);
  return;
}



// FUNCTION 1457b7f0a FUN_1457b7f0a body=208 status=ok
// SIG undefined FUN_1457b7f0a(void)

void FUN_1457b7f0a(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  code *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e5127a(param_1 + 0x1a0,0);
  FUN_140e5127a(param_1 + 0x150,0);
  FUN_140e5127a(param_1 + 0x100,0);
  FUN_140e5127a(param_1 + 0x1f0,0);
  if (*(longlong *)(param_1 + 200) == 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(int *)(param_1 + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_141091604(param_1,*(longlong *)(param_1 + 200),param_1 + 0xd0);
    local_18 = &local_28;
    local_20 = FUN_1433f5126;
    local_28 = param_1;
    FUN_141091a34(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b7fea FUN_1457b7fea body=59 status=ok
// SIG undefined FUN_1457b7fea(void)

longlong FUN_1457b7fea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148c45746(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148c45728(lVar2);
  return lVar2;
}



// FUNCTION 1457b8026 FUN_1457b8026 body=100 status=ok
// SIG undefined FUN_1457b8026(void)

void FUN_1457b8026(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148dfde54(lVar1 + 0x6e70,param_3,param_4);
    }
  }
  FUN_148ddc3be(param_1);
  return;
}



// FUNCTION 1457b808a FUN_1457b808a body=98 status=ok
// SIG undefined FUN_1457b808a(void)

void FUN_1457b808a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148dfdda6(lVar1 + 0x6e58,param_2,param_3);
    }
  }
  FUN_148ddc3be(param_1);
  return;
}



// FUNCTION 1457b80ec FUN_1457b80ec body=289 status=ok
// SIG undefined FUN_1457b80ec(void)

void FUN_1457b80ec(int param_1,int param_2,undefined1 *param_3,int *param_4,int *param_5,
                  char *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c846b14 == '\0') {
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = '\0';
  }
  else {
    local_4c = 0;
    local_50 = 0;
    FUN_141369f9a(&DAT_14c846b20,L"-physicalcorelimit=");
    FUN_141369f9a(&DAT_14c846b20,L"-corelimit=",&local_50);
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"usehyperthreading");
    iVar2 = local_4c;
    if ((cVar1 == '\0') && (0 < param_1)) {
      iVar2 = (param_2 * local_4c) / param_1;
    }
    iVar3 = iVar2;
    iVar4 = local_4c;
    if (0 < local_50) {
      iVar4 = local_50;
      if (local_4c < local_50) {
        iVar4 = local_4c;
      }
      if (local_4c == 0) {
        iVar4 = local_50;
      }
      iVar3 = local_50;
      if ((iVar2 != 0) && (iVar3 = iVar2, local_50 <= iVar2)) {
        iVar3 = local_50;
      }
    }
    *param_3 = 1;
    *param_4 = iVar4;
    *param_5 = iVar3;
    *param_6 = cVar1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b820e FUN_1457b820e body=290 status=ok
// SIG undefined FUN_1457b820e(void)

undefined8 * FUN_1457b820e(undefined8 *param_1,longlong *param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_14591fa3e();
  *param_1 = &PTR_LAB_149e33e90;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  FUN_1457b8330(param_1 + 6);
  lVar1 = *param_4;
  param_1[0x16] = lVar1;
  param_1[0x18] = 0;
  if (lVar1 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 0x18);
  }
  param_1[0x1e] = param_2;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_3 == -1) {
    param_3 = (**(code **)(*param_2 + 0x28))(param_2);
  }
  *(int *)(param_1 + 0x2b) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x165) = 0;
  if (*param_4 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 1457b8330 FUN_1457b8330 body=33 status=ok
// SIG undefined FUN_1457b8330(void)

void FUN_1457b8330(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x600000000;
  param_1[0x1e] = 0;
  return;
}



// FUNCTION 1457b8352 FUN_1457b8352 body=32 status=ok
// SIG undefined FUN_1457b8352(void)

void FUN_1457b8352(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140dea724();
  uVar1 = FUN_140dea694(param_1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



// FUNCTION 1457b8372 FUN_1457b8372 body=675 status=ok
// SIG undefined FUN_1457b8372(void)

void FUN_1457b8372(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (((*(char *)(param_1 + 0x178) != '\x03') ||
      (lVar4 = *(longlong *)(param_1 + 0x940), lVar4 == 0)) ||
     (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x3a40) + 0x10))(lVar4 + 0x3a40), lVar4 == 0)) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x4f8) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x4f0);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x4f8) * 2;
    do {
      lVar6 = *plVar9;
      if (lVar6 != 0) {
        uVar5 = FUN_140e5bf68();
        cVar3 = FUN_1448093f4(lVar6,uVar5);
        if (cVar3 != '\0') {
          lVar6 = (longlong)*(int *)(*plVar9 + 0x38);
          if (lVar6 != 0) {
            plVar11 = *(longlong **)(*plVar9 + 0x30);
            lVar6 = lVar6 * 0x18;
            do {
              lVar8 = plVar11[1];
              if (lVar8 == 0) {
                uVar5 = FUN_140feeb70();
                lVar8 = FUN_14477b664(uVar5);
                plVar11[1] = lVar8;
              }
              lVar7 = plVar11[2];
              if (lVar7 == 0) {
                if ((lVar8 != 0) && (*plVar11 != 0)) {
                  plVar2 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                    plVar11[2] = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar7 = FUN_144aff482(uVar5,plVar11);
                    plVar11[2] = lVar7;
                    if (lVar7 != 0) {
                      lVar8 = plVar11[1];
                      goto LAB_1457b849e;
                    }
                  }
                }
              }
              else {
LAB_1457b849e:
                if (lVar8 == 0) {
                  uVar5 = FUN_140feeb70();
                  lVar8 = FUN_14477b664(uVar5);
                  plVar11[1] = lVar8;
                  lVar7 = plVar11[2];
                  if (lVar7 == 0) {
                    if (lVar8 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = 0;
                      if (*plVar11 != 0) {
                        plVar2 = *(longlong **)(lVar8 + 0xb8);
                        if ((plVar2 == (longlong *)0x0) ||
                           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                          lVar7 = 0;
                        }
                        else {
                          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                          lVar7 = FUN_144aff482(uVar5,plVar11);
                        }
                        plVar11[2] = lVar7;
                      }
                    }
                  }
                }
                lVar8 = FUN_14117f118(lVar4,lVar7);
                if (lVar8 != 0) {
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar8);
                  }
                  iVar1 = *(int *)(param_1 + 0x950);
                  *(uint *)(param_1 + 0x950) = iVar1 + 1U;
                  if (*(uint *)(param_1 + 0x954) < iVar1 + 1U) {
                    FUN_14120b214((longlong *)(param_1 + 0x948),iVar1);
                  }
                  *(longlong *)(*(longlong *)(param_1 + 0x948) + (longlong)iVar1 * 8) = lVar8;
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar8);
                  }
                }
              }
              plVar11 = plVar11 + 3;
              lVar6 = lVar6 + -0x18;
            } while (lVar6 != 0);
          }
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar10);
  }
  FUN_140e5bfa2(param_1 + 0x5f8);
  return;
}



// FUNCTION 1457b8616 FUN_1457b8616 body=147 status=ok
// SIG undefined FUN_1457b8616(void)

void FUN_1457b8616(longlong param_1,int param_2)

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



// FUNCTION 1457b86b2 FUN_1457b86b2 body=162 status=ok
// SIG undefined FUN_1457b86b2(void)

void FUN_1457b86b2(longlong *param_1,undefined8 param_2)

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
        goto LAB_1457b873f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1457b873f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1457b8754 FUN_1457b8754 body=101 status=ok
// SIG undefined FUN_1457b8754(void)

void FUN_1457b8754(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001457b879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457b87d6 FUN_1457b87d6 body=589 status=ok
// SIG undefined FUN_1457b87d6(void)

void FUN_1457b87d6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  code *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
    lVar7 = FUN_140e5f200(uVar6);
    if (lVar7 != 0) {
      if (*(longlong *)(param_1 + 0x1a0) == 0) {
        local_40 = (code *)&DAT_148ef7cb8;
        local_38 = 0;
        FUN_1457b8a24(lVar7 + 0x10,&local_30);
        *(undefined8 *)(param_1 + 0x1a0) = local_30;
      }
      cVar3 = FUN_145d27e30(lVar7,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xe0));
      pwVar8 = L"false";
      if (cVar3 == '\x03') {
        pwVar8 = L"true";
      }
      FUN_14020fad6((longlong *)(param_1 + 0x168),pwVar8);
      FUN_140e5f3c8(param_1,&local_40);
      if (local_38 == *(int *)(param_1 + 0x170)) {
        bVar10 = true;
        if (1 < local_38) {
          lVar7 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_40 + lVar7);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x168) + lVar7);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1457b89e2;
              }
              iVar5 = uVar4 - uVar9;
              goto LAB_1457b8a1a;
            }
            if (uVar1 == 0) break;
LAB_1457b89e2:
            lVar7 = lVar7 + 2;
          }
          iVar5 = 0;
LAB_1457b8a1a:
          bVar10 = iVar5 == 0;
        }
      }
      else {
        bVar10 = *(int *)(param_1 + 0x170) + local_38 == 1;
      }
      if (local_40 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar10) {
        local_50 = (void *)0x0;
        local_48 = *(int *)(param_1 + 0x170);
        lVar7 = (longlong)local_48;
        _Src = *(void **)(param_1 + 0x168);
        if (lVar7 == 0) {
          local_44 = 0;
        }
        else {
          FUN_1446dd670(&local_50,local_48,0);
          memcpy(local_50,_Src,lVar7 * 2);
        }
        FUN_145da60d4(param_1,&local_50);
      }
    }
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
    lVar7 = FUN_141165984(uVar6);
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x1a8) == 0)) {
      local_40 = FUN_148ef7cdc;
      local_38 = 0;
      FUN_1457b8c22(lVar7 + 0x40,&local_30,param_1);
      *(undefined8 *)(param_1 + 0x1a8) = local_30;
    }
    FUN_1410e5ae4(param_1,1);
    FUN_14101e326(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b8a24 FUN_1457b8a24 body=254 status=ok
// SIG undefined FUN_1457b8a24(void)

undefined8
FUN_1457b8a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9dbc90;
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
  *local_48 = &PTR_FUN_14b9dbc20;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457b8b24(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b8b24 FUN_1457b8b24 body=216 status=ok
// SIG undefined FUN_1457b8b24(void)

undefined8 * FUN_1457b8b24(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457b8c0a FUN_1457b8c0a body=24 status=ok
// SIG undefined FUN_1457b8c0a(void)

bool FUN_1457b8c0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457b8c22 FUN_1457b8c22 body=254 status=ok
// SIG undefined FUN_1457b8c22(void)

undefined8
FUN_1457b8c22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b4edcd0;
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
  *local_48 = &PTR_FUN_14b9dbd00;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145caf794(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b8d2e FUN_1457b8d2e body=143 status=ok
// SIG undefined FUN_1457b8d2e(void)

void FUN_1457b8d2e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1457b8dce FUN_1457b8dce body=89 status=ok
// SIG undefined FUN_1457b8dce(void)

void FUN_1457b8dce(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1457b8e28();
  return;
}



// FUNCTION 1457b8e28 FUN_1457b8e28 body=116 status=ok
// SIG undefined FUN_1457b8e28(void)

void FUN_1457b8e28(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1457b8e9c FUN_1457b8e9c body=174 status=ok
// SIG undefined FUN_1457b8e9c(void)

void FUN_1457b8e9c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != -1) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1c0), lVar2 != 0)) {
    FUN_1429e104a();
    lVar4 = FUN_14172bec4(&local_21,*(undefined8 *)(param_1 + 0xf0));
    if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x9c8), lVar3 != 0)) {
      FUN_146db0bc0(lVar3 + 0x100,lVar4,param_2);
    }
    iVar1 = *(int *)(lVar2 + 0x3f4);
    iVar5 = iVar1;
    if (param_2 < iVar1) {
      iVar5 = param_2;
    }
    if (iVar1 == -1) {
      iVar5 = param_2;
    }
    *(int *)(lVar2 + 0x3f4) = iVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b8fdc FUN_1457b8fdc body=132 status=ok
// SIG undefined FUN_1457b8fdc(void)

void FUN_1457b8fdc(longlong param_1,int param_2)

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



// FUNCTION 1457b9062 FUN_1457b9062 body=132 status=ok
// SIG undefined FUN_1457b9062(void)

void FUN_1457b9062(longlong param_1,int param_2)

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



// FUNCTION 1457b90e7 FUN_1457b90e7 body=510 status=ok
// SIG undefined FUN_1457b90e7(void)

void FUN_1457b90e7(ulonglong param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  FUN_14473b0f0();
  param_1 = param_1 & 0xffff;
  iVar1 = (&DAT_14ca814b8)[param_1 * 0xf];
  uVar3 = 0;
  bVar6 = 0;
  if (iVar1 == 1) {
    bVar6 = DAT_14c760e14 & DAT_14ca964f0;
  }
  puVar8 = &DAT_14ca96b08;
  if (DAT_14ca96b58 != (undefined4 *)0x0) {
    puVar8 = DAT_14ca96b58;
  }
  uVar7 = 1 << ((byte)param_1 & 0x1f) & puVar8[param_1 >> 5];
  if (uVar7 != 0) {
    uVar3 = *(uint *)((longlong)&DAT_14ca814d0 + param_1 * 0x3c) & 0x400000;
  }
  uVar4 = *param_2;
  *param_2 = uVar4 & 0xffbfffff | uVar3;
  cVar2 = FUN_144ae7be5(uVar4 & 0xff);
  if (((cVar2 == '\0') && ((char)*param_2 != '\x05')) && (cVar2 = FUN_1449279a5(), cVar2 == '\0')) {
    *(char *)param_2 = '\x02';
  }
  if (uVar7 == 0) {
    uVar3 = *param_2;
    if (iVar1 != 1 || bVar6 != 0) goto LAB_1457b917b;
    uVar3 = uVar3 & 0xfff9ffff;
LAB_1457b927c:
    uVar3 = uVar3 & 0xffefffff;
    *param_2 = uVar3;
  }
  else {
    cVar2 = FUN_1449279a5((char)*param_2);
    uVar3 = *param_2;
    if (cVar2 != '\0') {
      uVar3 = uVar3 & 0xffffff00 | 2;
      *param_2 = uVar3;
    }
LAB_1457b917b:
    if (iVar1 == 1) goto LAB_1457b927c;
  }
  if ((char)uVar3 == '\x05') {
    uVar3 = uVar3 & 0xfffdff05;
    *param_2 = uVar3;
  }
  if ((bVar6 == 0) || (uVar4 = 0x1000, (uVar3 & 0xf0000) == 0)) {
    if ((iVar1 == 1) && (uVar7 == 0)) {
      uVar4 = 0x800;
      if ((uVar3 & 0x90000) == 0) goto LAB_1457b91ab;
      goto LAB_1457b91b8;
    }
    if ((uVar7 == 0) || ((uVar3 & 0x70000) == 0)) {
LAB_1457b91ab:
      uVar4 = 0x400;
      if ((uVar3 & 0xf0000) != 0) goto LAB_1457b91b8;
      goto LAB_1457b91bc;
    }
    uVar3 = uVar3 | 0x200;
    *param_2 = uVar3;
LAB_1457b929d:
    uVar5 = uVar3 & 0x200000;
    uVar4 = uVar5 >> 0xc | uVar3;
    if ((uVar7 == 0) || ((uVar3 & 0x80000) == 0)) {
      uVar3 = uVar4;
      if (uVar5 == 0) goto LAB_1457b91cc;
    }
    else {
      uVar4 = uVar4 | 0x2000;
    }
  }
  else {
LAB_1457b91b8:
    uVar3 = uVar3 | uVar4;
    *param_2 = uVar3;
LAB_1457b91bc:
    if (uVar7 != 0) goto LAB_1457b929d;
    if ((uVar3 >> 0x15 & 1) == 0) goto LAB_1457b91cc;
    uVar4 = uVar3 | 0x400;
  }
  *param_2 = uVar4;
  uVar3 = uVar4;
LAB_1457b91cc:
  if ((uVar3 >> 0x14 & 1) != 0) {
    *param_2 = uVar3 | 0x4000;
  }
  return;
}



// FUNCTION 1457b92ee FUN_1457b92ee body=40 status=ok
// SIG undefined FUN_1457b92ee(void)

undefined8 FUN_1457b92ee(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457b9316 FUN_1457b9316 body=151 status=ok
// SIG undefined FUN_1457b9316(void)

void FUN_1457b9316(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1c + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
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
      puVar7 = puVar7 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1457b93ae FUN_1457b93ae body=100 status=ok
// SIG undefined FUN_1457b93ae(void)

void FUN_1457b93ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1457b9412(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
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
                    /* WARNING: Could not recover jumptable at 0x0001457b940e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1457b9412 FUN_1457b9412 body=51 status=ok
// SIG undefined FUN_1457b9412(void)

void FUN_1457b9412(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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



// FUNCTION 1457b9446 FUN_1457b9446 body=84 status=ok
// SIG undefined FUN_1457b9446(void)

longlong * FUN_1457b9446(longlong *param_1,longlong *param_2)

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



// FUNCTION 1457b949a FUN_1457b949a body=113 status=ok
// SIG undefined FUN_1457b949a(void)

void FUN_1457b949a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1457b950c FUN_1457b950c body=165 status=ok
// SIG undefined FUN_1457b950c(void)

void FUN_1457b950c(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1409b4ce6();
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 != 0) &&
     (((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (*(char *)(param_1 + 0x1a98) == '\0')))) {
    FUN_1457b95b2(param_1);
  }
  (**(code **)(*(longlong *)(param_1 + 0x458) + 0x10))(param_1 + 0x458,local_30);
  FUN_14036bd36(param_1 + 0x1a68,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b95b2 FUN_1457b95b2 body=689 status=ok
// SIG undefined FUN_1457b95b2(void)

void FUN_1457b95b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1;
  if (*(longlong *)(param_1 + 0x1a90) == 0) goto LAB_1457b9767;
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1457b9767;
  }
  *(undefined1 *)(param_1 + 0x1a98) = 1;
  lVar1 = *(longlong *)(param_1 + 0x1aa8);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0xae8) == 0)) {
LAB_1457b9651:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_144a73ef6();
    lVar1 = *(longlong *)(lVar1 + 0xae8);
    if (lVar1 == 0) goto LAB_1457b9651;
    lVar7 = 0;
    if ((lVar5 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) goto LAB_1457b9651;
      lVar7 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  *(longlong *)(param_1 + 0x1ab0) = lVar7;
  *(undefined8 *)(param_1 + 0x1ab8) = 0;
  lVar1 = param_1 + 0x1ad0;
  *(undefined8 *)(param_1 + 0x1ac0) = 0;
  *(undefined8 *)(param_1 + 0x1ac8) = 0;
  if (*(int *)(param_1 + 0x1ad8) != *(int *)(param_1 + 0x1b04)) {
    FUN_1487c7efa(lVar1);
    FUN_1487c8042(lVar1);
  }
  lVar5 = FUN_140e779b2(param_1 + 0x1920,*(longlong *)(param_1 + 0x1a90) + 0x450);
  if (lVar5 != 0) {
    FUN_140e7790a(param_1 + 0x1ab8,lVar5 + 0x20);
    FUN_1457b9864(lVar1,lVar5 + 0x38);
  }
  FUN_1403631dc(&local_40,param_1 + 0x1920);
  if (local_38 == 0) {
    uVar6 = FUN_14043db3a();
    local_38 = FUN_14477b664(uVar6);
  }
  if (local_30 == 0) {
    if ((local_40 != 0) && (local_38 != 0)) {
      plVar3 = *(longlong **)(local_38 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        local_30 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
        local_30 = FUN_144aff482(uVar6,&local_40);
        if (local_30 != 0) goto LAB_1457b96f8;
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
  }
  else {
LAB_1457b96f8:
    uStack_50 = 0;
    lStack_48 = 0;
    local_58 = local_40;
    uVar6 = FUN_14477b664(local_38);
    uStack_50 = FUN_14477b664(uVar6);
    lStack_48 = local_30;
  }
  FUN_140e7795e(param_1 + 0x1b20,&local_58);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined4 *)(param_1 + 0x1b54) = 0xffffffff;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x12);
    FUN_140e77d08(param_1,0,0xffffffff);
  }
  else {
    FUN_140e7818a(param_1);
    FUN_1457b99d6(param_1);
  }
LAB_1457b9767:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457b9864 FUN_1457b9864 body=122 status=ok
// SIG undefined FUN_1457b9864(void)

longlong FUN_1457b9864(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1457b98de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1457b98de FUN_1457b98de body=247 status=ok
// SIG undefined FUN_1457b98de(void)

undefined8 * FUN_1457b98de(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_1406f049a(param_1,(ulonglong)uVar2);
    iVar3 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar3 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      puVar7 = (undefined4 *)*param_1;
      puVar5 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar5;
          puVar7[1] = puVar5[1];
        }
        else {
          FUN_141847482(puVar7,puVar5);
          bVar1 = *(byte *)(puVar5 + 0x14);
          *(byte *)(puVar7 + 0x14) = bVar1;
          (*(code *)(&PTR_FUN_14b04c4f0)[bVar1])(puVar7 + 6,puVar5 + 6);
          *(undefined8 *)(puVar7 + 0x16) = *(undefined8 *)(puVar5 + 0x16);
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x18;
        puVar7 = puVar7 + 0x18;
      } while (uVar2 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1457b99d6 FUN_1457b99d6 body=332 status=ok
// SIG undefined FUN_1457b99d6(void)

void FUN_1457b99d6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((char)param_1[0x2f] != '\x03') && (param_1[0x355] != 0)) {
    lVar2 = *(longlong *)(param_1[0x355] + 0xae8);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_1457b9a68;
    if (((param_1[0x352] != 0) && (-1 < *(int *)((longlong)param_1 + 0x1b64))) &&
       (*(int *)((longlong)param_1 + 0x1b64) < *(int *)(param_1[0x352] + 0x368))) {
      FUN_1446f470e(local_40,L"FullBody",1);
      lVar2 = FUN_141222460(lVar2,local_40);
      if ((lVar2 == 0) && (-1 < (int)param_1[0x36d])) {
        lVar2 = (longlong)*(int *)((longlong)param_1 + 0x1b64) * 0x60 +
                *(longlong *)(param_1[0x352] + 0x360);
        if ((int)param_1[0x36d] < *(int *)(lVar2 + 0x10)) {
          FUN_140e78e14(local_40);
          local_40[0] = *(undefined4 *)(lVar2 + 0x28);
          lVar3 = (longlong)(int)param_1[0x36d] * 0x70;
          lVar1 = *(longlong *)(lVar2 + 8) + lVar3;
          if (*(char *)(*(longlong *)(lVar2 + 8) + 0x68 + lVar3) == '\x01') {
            uVar4 = (**(code **)(*param_1 + 0x650))(param_1,lVar1 + 0x60);
          }
          else {
            uVar4 = FUN_140654ab6(lVar1 + 0x38);
          }
          FUN_140e78972(param_1,uVar4,local_40,0);
        }
      }
    }
  }
LAB_1457b9a68:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b9b24 FUN_1457b9b24 body=115 status=ok
// SIG undefined FUN_1457b9b24(void)

undefined8 FUN_1457b9b24(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_2 + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0x38;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + 8);
      if (*(char *)(lVar1 + 0x30 + lVar3) == '\x01') {
        uVar2 = (**(code **)(*param_1 + 0x650))(param_1,lVar1 + lVar3 + 0x28);
      }
      else {
        uVar2 = FUN_140654ab6(lVar1 + lVar3);
      }
      uVar2 = FUN_140e78e2e(param_1,uVar2);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar4 < *(int *)(param_2 + 0x10));
  }
  return uVar2;
}



// FUNCTION 1457b9b98 FUN_1457b9b98 body=57 status=ok
// SIG undefined FUN_1457b9b98(void)

void FUN_1457b9b98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c7f0 = FUN_140002ddd(FUN_1464d6aab,uVar1,L"GbxDecoCharacterTaggedAnimDef");
  }
  return;
}



// FUNCTION 1457b9bd2 FUN_1457b9bd2 body=198 status=ok
// SIG undefined FUN_1457b9bd2(void)

void FUN_1457b9bd2(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*(char *)(param_1 + -0xc60) == '\x03')) {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x3a20) + 0x10))(param_2 + 0x3a20);
    FUN_145d23f66(extraout_XMM0_Da,&local_50,uVar1);
    *(undefined4 *)(param_1 + 0x2b0) = local_40;
    *(undefined4 *)(param_1 + 0x2b4) = uStack_3c;
    *(undefined4 *)(param_1 + 0x2b8) = uStack_38;
    *(undefined4 *)(param_1 + 700) = uStack_34;
    *(undefined4 *)(param_1 + 0x2a0) = local_50;
    *(undefined4 *)(param_1 + 0x2a4) = uStack_4c;
    *(undefined4 *)(param_1 + 0x2a8) = uStack_48;
    *(undefined4 *)(param_1 + 0x2ac) = uStack_44;
  }
  FUN_140e796c2(param_1,param_2,param_3,param_4);
  if (((param_2 != 0) && (*(char *)(param_1 + -0xc60) == '\x03')) &&
     (*(longlong *)(param_1 + 0x2d4) != 0)) {
    FUN_14615c894(param_1 + 0x298);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b9c9a FUN_1457b9c9a body=63 status=ok
// SIG undefined FUN_1457b9c9a(void)

undefined1 FUN_1457b9c9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457b9cda(param_2,param_3);
    param_3 = param_3 + 0x6b0;
    param_2 = param_2 + 0x6b0;
  }
  return 1;
}



// FUNCTION 1457b9cda FUN_1457b9cda body=203 status=ok
// SIG undefined FUN_1457b9cda(void)

longlong FUN_1457b9cda(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_140e7c0e8();
  memcpy((void *)(param_1 + 0x110),(void *)(param_2 + 0x110),0x2b4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined1 *)(param_1 + 0x3cc) = *(undefined1 *)(param_2 + 0x3cc);
  memcpy((void *)(param_1 + 0x3e0),(void *)(param_2 + 0x3e0),0x2b4);
  *(undefined1 *)(param_1 + 0x69c) = *(undefined1 *)(param_2 + 0x69c);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  uVar3 = *(undefined8 *)(param_2 + 0x6a0);
  lVar4 = *(longlong *)(param_2 + 0x6a8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x6a8);
  *(undefined8 *)(param_1 + 0x6a0) = uVar3;
  *(longlong *)(param_1 + 0x6a8) = lVar4;
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
  return param_1;
}



// FUNCTION 1457b9da8 FUN_1457b9da8 body=9 status=ok
// SIG undefined FUN_1457b9da8(void)

void FUN_1457b9da8(longlong param_1)

{
  FUN_140e7c694(param_1 + 0x10);
  return;
}



// FUNCTION 1457b9db2 FUN_1457b9db2 body=296 status=ok
// SIG undefined FUN_1457b9db2(void)

undefined4 * FUN_1457b9db2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457b9f3a(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_144a74281(local_40);
  cVar6 = FUN_1457b9edc(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_140e7f20a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457b9edc FUN_1457b9edc body=93 status=ok
// SIG undefined FUN_1457b9edc(void)

undefined8 FUN_1457b9edc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_140e7f160(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147444a72(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1457b9f3a FUN_1457b9f3a body=239 status=ok
// SIG undefined FUN_1457b9f3a(void)

int * FUN_1457b9f3a(longlong *param_1,int *param_2)

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



// FUNCTION 1457ba02a FUN_1457ba02a body=52 status=ok
// SIG undefined FUN_1457ba02a(void)

void FUN_1457ba02a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x668);
  memset(_Dst,0,0x668);
  FUN_1457ba05e(_Dst);
  return;
}



// FUNCTION 1457ba05e FUN_1457ba05e body=117 status=ok
// SIG undefined FUN_1457ba05e(void)

undefined8 * FUN_1457ba05e(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *param_1 = &PTR_FUN_14b9d0390;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_1457ba0d4(param_1 + 0x60);
  FUN_1457ba0d4(param_1 + 0x96);
  *(undefined2 *)(param_1 + 0xcc) = 0;
  return param_1;
}



// FUNCTION 1457ba0d4 FUN_1457ba0d4 body=780 status=ok
// SIG undefined FUN_1457ba0d4(void)

longlong * FUN_1457ba0d4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 2) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[3] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 5) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[6] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 7) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 8) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[9] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 10) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0xb) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0xc] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0xe) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0xf] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x10) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x11) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x12] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x13) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x14) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x15] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x16) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x18] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x19) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1b] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1c) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x1d) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x1e] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1f) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x20) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x21] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x22) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x23) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x24] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x25) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x26) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x27] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x28) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x29) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2a] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2b) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x2c) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2d] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2e) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x2f) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x30] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x31) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x32) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x33] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x34) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 1457ba3e0 FUN_1457ba3e0 body=143 status=ok
// SIG undefined FUN_1457ba3e0(void)

void FUN_1457ba3e0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_1;
  local_20 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if ((param_2 & 2) != 0) {
    FUN_140e82d46(&local_28,2);
  }
  if ((param_2 & 4) != 0) {
    FUN_140e82d46(&local_28,0);
  }
  if ((param_2 & 8) != 0) {
    FUN_140e82d46(&local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001457ba455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ba470 FUN_1457ba470 body=113 status=ok
// SIG undefined FUN_1457ba470(void)

undefined8 * FUN_1457ba470(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
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
  uVar1 = FUN_140e82e72();
  FUN_1457ba67c(param_1,uVar1,param_2);
  return param_1;
}



// FUNCTION 1457ba4e2 FUN_1457ba4e2 body=247 status=ok
// SIG undefined FUN_1457ba4e2(void)

void FUN_1457ba4e2(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  if ((param_2 & 2) != 0) {
    uVar1 = FUN_142787044();
    FUN_140b7fa3a(&local_38,uVar1);
  }
  if ((param_2 & 4) != 0) {
    uVar1 = FUN_140e82e76();
    FUN_140b7fa3a(&local_38,uVar1);
  }
  if ((param_2 & 8) != 0) {
    uVar1 = FUN_140e82edc();
    FUN_140b7fa3a(&local_38,uVar1);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_1457ba5da(&DAT_14c86aa18,&local_38);
  }
  FUN_140e83ee5(&local_48,&local_38);
  FUN_140e82fa0(param_3,&local_48);
  FUN_1447a1747(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ba5da FUN_1457ba5da body=162 status=ok
// SIG undefined FUN_1457ba5da(void)

void FUN_1457ba5da(longlong *param_1,undefined8 param_2)

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
        goto LAB_1457ba667;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1457ba667:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1457ba67c FUN_1457ba67c body=281 status=ok
// SIG undefined FUN_1457ba67c(void)

void FUN_1457ba67c(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_39;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = '\x01';
  if (param_2 != '\x02') {
    cVar2 = param_2;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (cVar2 != '\0') {
    uVar1 = FUN_1457ba796();
    FUN_14020fad6(local_38,uVar1);
  }
  local_39 = 0xc;
  local_50 = local_38;
  local_48 = param_3;
  FUN_140e83a80(&local_39,&local_60,L"EnabledCultures");
  FUN_140e841e8(&local_50,&local_60,param_1);
  FUN_140e83a80(&local_39,&local_70,L"DisabledCultures");
  FUN_140e841e8(&local_50,&local_70,param_1 + 0x50);
  FUN_1447a1747(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ba796 FUN_1457ba796 body=30 status=ok
// SIG undefined FUN_1457ba796(void)

wchar_t * FUN_1457ba796(char param_1)

{
  if ((byte)(param_1 - 1U) < 5) {
    return (wchar_t *)(&PTR_u_Debug_149e06680)[(byte)(param_1 - 1U)];
  }
  return L"Unknown";
}



// FUNCTION 1457ba7b4 FUN_1457ba7b4 body=29 status=ok
// SIG undefined FUN_1457ba7b4(void)

undefined8 FUN_1457ba7b4(undefined8 param_1)

{
  FUN_140056680(param_1,L"Platforms");
  return param_1;
}



// FUNCTION 1457ba7d2 FUN_1457ba7d2 body=137 status=ok
// SIG undefined FUN_1457ba7d2(void)

void FUN_1457ba7d2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xa28))(param_1,&local_38,0);
  lVar1 = local_38;
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      FUN_1457ba85c(param_1,*(undefined8 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 8;
    } while ((longlong)local_30 * 8 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ba85c FUN_1457ba85c body=264 status=ok
// SIG undefined FUN_1457ba85c(void)

void FUN_1457ba85c(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140381810(param_2,*(byte *)((longlong)param_1 + 0x9e) >> 7);
  uVar2 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
  FUN_1457ba972(param_2,uVar2);
  iVar3 = (**(code **)(*param_1 + 0x570))(param_1);
  if (iVar3 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)((longlong)param_1 + 0x2de) & 2;
  }
  *(byte *)(param_2 + 0x2de) = *(byte *)(param_2 + 0x2de) & 0xfd | bVar1;
  *(undefined1 *)(param_2 + 0x1fb) = 0;
  *(undefined1 *)(param_2 + 0x4f5) = *(undefined1 *)((longlong)param_1 + 0x4f5);
  param_2 = param_2 + 0x590;
  FUN_140e846aa(param_2,0);
  uVar2 = FUN_140e846a4(param_1 + 0xb2);
  FUN_140e846bc(param_2,uVar2);
  FUN_140e846ce(param_1 + 0xb2,local_30);
  thunk_FUN_1457ba98c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1457ba97a(param_2,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457ba966 thunk_FUN_1457ba98c body=5 status=ok
// SIG undefined thunk_FUN_1457ba98c(void)

void thunk_FUN_1457ba98c(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong lStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)param_1 = 0;
  if ((DAT_14cae3c30 != (code *)0x0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      pcVar3 = DAT_14cae3c30;
      if (*(longlong *)(lVar1 + lVar7) != 0) {
        plVar6 = DAT_14cae3c40;
        if (DAT_14cae3c40 == (longlong *)0x0) {
          plVar6 = &DAT_14cae3c50;
        }
        lStack_48 = *(longlong *)(lVar1 + lVar7);
        uVar5 = (**(code **)(*plVar6 + 8))();
        bVar4 = (*pcVar3)(uVar5,&lStack_48);
        *param_1 = *param_1 | 1 << (bVar4 & 0x1f);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar7);
  }
  if ((uStack_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457ba972 FUN_1457ba972 body=7 status=ok
// SIG undefined FUN_1457ba972(void)

void FUN_1457ba972(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2e9) = param_2;
  return;
}



// FUNCTION 1457ba97a FUN_1457ba97a body=18 status=ok
// SIG undefined FUN_1457ba97a(void)

void FUN_1457ba97a(uint *param_1,byte param_2)

{
  *param_1 = (uint)param_2 << 0xd | *param_1 & 0xffffdfff;
  return;
}



// FUNCTION 1457ba98c FUN_1457ba98c body=191 status=ok
// SIG undefined FUN_1457ba98c(void)

void FUN_1457ba98c(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)param_1 = 0;
  if ((DAT_14cae3c30 != (code *)0x0) && (lVar2 = param_2[1], (longlong)(int)lVar2 != 0)) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      pcVar3 = DAT_14cae3c30;
      if (*(longlong *)(lVar1 + lVar7) != 0) {
        plVar6 = DAT_14cae3c40;
        if (DAT_14cae3c40 == (longlong *)0x0) {
          plVar6 = &DAT_14cae3c50;
        }
        local_48 = *(longlong *)(lVar1 + lVar7);
        uVar5 = (**(code **)(*plVar6 + 8))();
        bVar4 = (*pcVar3)(uVar5,&local_48);
        *param_1 = *param_1 | 1 << (bVar4 & 0x1f);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457baa4c FUN_1457baa4c body=20 status=ok
// SIG undefined FUN_1457baa4c(void)

undefined8 FUN_1457baa4c(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_144729dda(param_1 + 0x4ef0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1457baa60 FUN_1457baa60 body=164 status=ok
// SIG undefined FUN_1457baa60(void)

ulonglong FUN_1457baa60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x3b0) != 0) {
      lVar4 = FUN_144a7b4ca();
      if (((((*(longlong *)(lVar3 + 0x3b0) != 0) && (lVar4 != 0)) &&
           (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x3b0) + 0x10), lVar1 != 0)) &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) && (cVar2 = FUN_140e8536a(), cVar2 == '\0')) {
        return 0;
      }
    }
    lVar3 = *(longlong *)(&DAT_00006850 + lVar3);
    if ((lVar3 != 0) &&
       (cVar2 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0xe8))(lVar3 + 0x178), cVar2 != '\0')) {
      return 0;
    }
  }
  uVar5 = FUN_1457bab04(param_1);
  if ((char)uVar5 != '\0') {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)(param_1 + 0x68)) ^ 1;
}



// FUNCTION 1457bab04 FUN_1457bab04 body=68 status=ok
// SIG undefined FUN_1457bab04(void)

ulonglong FUN_1457bab04(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    cVar1 = FUN_14486ea84(param_1 + 0x78);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar2 = FUN_14008e0ae(param_1 + 0x78);
      uVar3 = FUN_141362ac2(uVar2,0);
      uVar3 = uVar3 ^ 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1457bab58 FUN_1457bab58 body=226 status=ok
// SIG undefined FUN_1457bab58(void)

longlong * FUN_1457bab58(longlong *param_1)

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
  pcVar13 = FUN_1463263cc;
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



// FUNCTION 1457bac3c FUN_1457bac3c body=132 status=ok
// SIG undefined FUN_1457bac3c(void)

undefined1 * FUN_1457bac3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14746f27a;
}



// FUNCTION 1457bacc0 FUN_1457bacc0 body=138 status=ok
// SIG undefined FUN_1457bacc0(void)

code * FUN_1457bacc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Size";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457bad4a;
}



// FUNCTION 1457bad4a FUN_1457bad4a body=138 status=ok
// SIG undefined FUN_1457bad4a(void)

code * FUN_1457bad4a(undefined8 param_1,longlong *param_2)

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
  *(undefined2 **)(lVar2 + lVar3) = &DAT_14a3d4668;
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457bac3c;
}



// FUNCTION 1457baddc FUN_1457baddc body=108 status=ok
// SIG undefined FUN_1457baddc(void)

undefined8 * FUN_1457baddc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83bc08) {
    FUN_144b3d300(&DAT_14c83bc08);
    if (DAT_14c83bc08 == -1) {
      FUN_1457bae48(&DAT_14c83bba0);
      atexit((_func_5014 *)&LAB_14274b997);
      _Init_thread_footer(&DAT_14c83bc08);
    }
  }
  return &DAT_14c83bba0;
}



// FUNCTION 1457bae48 FUN_1457bae48 body=82 status=ok
// SIG undefined FUN_1457bae48(void)

undefined8 * FUN_1457bae48(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1457bae9a FUN_1457bae9a body=199 status=ok
// SIG undefined FUN_1457bae9a(void)

void FUN_1457bae9a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = *param_1;
  local_70 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_70 = 0;
  }
  FUN_140f123c4(&local_78,&local_48,&local_58,&local_68);
  FUN_1402980a2(param_2,local_48,local_40);
  FUN_1402980a2(param_3,local_58,local_50);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1402980a2(param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98,local_68,local_60);
}



// FUNCTION 1457baf62 FUN_1457baf62 body=132 status=ok
// SIG undefined FUN_1457baf62(void)

void FUN_1457baf62(longlong param_1,int param_2)

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



// FUNCTION 1457bafe8 FUN_1457bafe8 body=399 status=ok
// SIG undefined FUN_1457bafe8(void)

longlong * FUN_1457bafe8(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_1[1] == 0) {
    return param_2;
  }
  lVar6 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0xf0;
  while (*(char *)(lVar6 + 0xe9) == '\0') {
    lVar6 = lVar6 + 0xf0;
    lVar5 = lVar5 + -0xf0;
    if (lVar5 == 0) {
      return param_2;
    }
  }
  if (lVar6 == 0) {
    return param_2;
  }
  iVar4 = FUN_144a788f7(param_3 & 0xffffffff);
  if (*(int *)(lVar6 + 0x88) == *(int *)(lVar6 + 0xb4)) {
    return param_2;
  }
  lVar5 = lVar6 + 0xb8;
  if (*(longlong *)(lVar6 + 0xc0) != 0) {
    lVar5 = *(longlong *)(lVar6 + 0xc0);
  }
  iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar6 + 200) - 1U & iVar4 + (int)(param_3 >> 0x20))
                           * 4);
  if (iVar4 == -1) {
    return param_2;
  }
  while (lVar5 = *(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x20,
        *(ulonglong *)(*(longlong *)(lVar6 + 0x80) + (longlong)iVar4 * 0x20) != param_3) {
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 == -1) {
      return param_2;
    }
  }
  if ((lVar5 + 8U & 0xfffffffffffffff7) == 0) {
    return param_2;
  }
  iVar4 = *(int *)(lVar5 + 0x10);
  if (-1 < iVar4) {
    if (iVar4 == 0) {
      return param_2;
    }
    FUN_1408be2c4(param_2);
    iVar4 = *(int *)(lVar5 + 0x10);
    if ((longlong)iVar4 == 0) {
      return param_2;
    }
    lVar6 = *(longlong *)(lVar5 + 8);
    lVar5 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar7 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar7);
      *(undefined8 *)(lVar3 + lVar7) = 0;
      iVar2 = *(int *)(lVar6 + 8 + lVar5);
      _Src = *(void **)(lVar6 + lVar5);
      *(int *)(lVar3 + 8 + lVar7) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      lVar5 = lVar5 + 0x70;
    } while ((longlong)iVar4 * 0x70 - lVar5 != 0);
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1457bb178 FUN_1457bb178 body=115 status=ok
// SIG undefined FUN_1457bb178(void)

undefined8 * FUN_1457bb178(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[1] = *(undefined8 *)(param_1 + 0xd0);
  FUN_1447715ec(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x168);
  return puVar1;
}



// FUNCTION 1457bb1ec FUN_1457bb1ec body=92 status=ok
// SIG undefined FUN_1457bb1ec(void)

void FUN_1457bb1ec(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar3 = &DAT_14cb7fa20;
  if (DAT_14cb7fa28 != (undefined *)0x0) {
    puVar3 = DAT_14cb7fa28;
  }
  lVar1 = DAT_14cb7f9e8 + (longlong)param_1 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)(puVar3 + lVar5 * 4);
  if (iVar2 == param_1) {
    piVar4 = (int *)(puVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(DAT_14cb7f9e8 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_1);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1457bb324();
  return;
}



// FUNCTION 1457bb248 FUN_1457bb248 body=92 status=ok
// SIG undefined FUN_1457bb248(void)

void FUN_1457bb248(int param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar3 = &DAT_14cb7f9d0;
  if (DAT_14cb7f9d8 != (undefined *)0x0) {
    puVar3 = DAT_14cb7f9d8;
  }
  lVar1 = DAT_14cb7f998 + (longlong)param_1 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)(puVar3 + lVar5 * 4);
  if (iVar2 == param_1) {
    piVar4 = (int *)(puVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(DAT_14cb7f998 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_1);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1457bb2a4();
  return;
}



// FUNCTION 1457bb2a4 FUN_1457bb2a4 body=128 status=ok
// SIG undefined FUN_1457bb2a4(void)

void FUN_1457bb2a4(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7f998;
  if (DAT_14cb7f9cc != 0) {
    *(int *)(DAT_14cb7f998 + (longlong)DAT_14cb7f9c8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7f9cc) {
    iVar4 = DAT_14cb7f9c8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb7f9cc = DAT_14cb7f9cc + 1;
  puVar3 = &DAT_14cb7f9a8;
  if (DAT_14cb7f9b8 != (undefined *)0x0) {
    puVar3 = DAT_14cb7f9b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7f9c8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1457bb324 FUN_1457bb324 body=128 status=ok
// SIG undefined FUN_1457bb324(void)

void FUN_1457bb324(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7f9e8;
  if (DAT_14cb7fa1c != 0) {
    *(int *)(DAT_14cb7f9e8 + (longlong)DAT_14cb7fa18 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7fa1c) {
    iVar4 = DAT_14cb7fa18;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cb7fa1c = DAT_14cb7fa1c + 1;
  puVar3 = &DAT_14cb7f9f8;
  if (DAT_14cb7fa08 != (undefined *)0x0) {
    puVar3 = DAT_14cb7fa08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7fa18 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1457bb3a4 FUN_1457bb3a4 body=138 status=ok
// SIG undefined FUN_1457bb3a4(void)

undefined8 * FUN_1457bb3a4(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *param_1 = &PTR_FUN_14b9c6f40;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) & 0xfc | 2;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 1457bb42e FUN_1457bb42e body=12 status=ok
// SIG undefined FUN_1457bb42e(void)

void FUN_1457bb42e(longlong param_1)

{
  FUN_1457bb43a(param_1 + 0x448);
  return;
}



// FUNCTION 1457bb43a FUN_1457bb43a body=122 status=ok
// SIG undefined FUN_1457bb43a(void)

int FUN_1457bb43a(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if (*(int *)(lVar4 + uVar3) == *param_2) {
        iVar2 = (int)(uVar3 >> 3) * -0x33333333;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0x28;
    } while (lVar5 * 0x28 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14014a81a(param_1,iVar1);
    lVar4 = *param_1;
  }
  FUN_1447a97f4(lVar4 + lVar5 * 0x28,param_2);
  return iVar1;
}



// FUNCTION 1457bb4b4 FUN_1457bb4b4 body=130 status=ok
// SIG undefined FUN_1457bb4b4(void)

void FUN_1457bb4b4(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  lVar5 = (longlong)*(int *)(lVar1 + 0x44);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x40);
  if (*(longlong *)(*param_1 + 0x28 + (longlong)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1402b45bc(param_1,param_2,1);
  return;
}



// FUNCTION 1457bb536 FUN_1457bb536 body=494 status=ok
// SIG undefined FUN_1457bb536(void)

undefined4 * FUN_1457bb536(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_d8 [44];
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == '\x01') {
    FUN_1447a97f4(&local_70,param_3 + 0x10);
    if (0 < local_6c) {
      iVar2 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_7c,iVar2,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_88,iVar2,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_94,iVar2,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_a0,iVar2,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ac,iVar2,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar2,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_6c);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(undefined4 *)(param_3 + 0x10);
  }
  uVar1 = FUN_1402b3efe(param_1,local_70,param_3);
  *param_2 = uVar1;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1457bb726 FUN_1457bb726 body=677 status=ok
// SIG undefined FUN_1457bb726(void)

void FUN_1457bb726(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  HANDLE pvVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_144a53f06();
  if (cVar3 != '\0') {
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar6 = &PTR_FUN_14a34fd90;
    puVar6[1] = param_1;
    puVar6[2] = FUN_1400bd744;
    bVar15 = false;
    *(undefined1 *)(puVar6 + 3) = 0;
    pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    puVar6[4] = pvVar7;
    local_70 = 0;
    local_78 = 0xffffffffffffffff;
    uVar8 = FUN_1411b1052(puVar6,L"RHIInterruptThread",0,3);
    puVar6[5] = uVar8;
    *(undefined8 **)(param_1 + 0x28) = puVar6;
    lVar10 = DAT_14ca772d8;
    uVar9 = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar4 ^ 1);
    }
    iVar1 = *(int *)(lVar10 + uVar9 * 4);
    if (iVar1 == 2) {
      bVar15 = true;
    }
    else if (iVar1 == 1) {
      bVar15 = 0x1e < (uint)POPCOUNT(-1 << ((byte)DAT_14c760da4 & 0x1f));
    }
    bVar4 = 1;
    cVar3 = FUN_140e8e584();
    if (cVar3 != '\0') {
      puVar6 = (undefined8 *)FUN_147381ad4();
      bVar4 = (**(code **)*puVar6)(puVar6);
    }
    if ((bVar4 & bVar15) != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *puVar6 = &PTR_FUN_14a34fd90;
      puVar6[1] = param_1;
      puVar6[2] = FUN_1400be10a;
      *(undefined1 *)(puVar6 + 3) = 0;
      pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      puVar6[4] = pvVar7;
      local_70 = 0;
      local_78 = 0xffffffffffffffff;
      uVar8 = FUN_1411b1052(puVar6,L"RHISubmissionThread",0,3);
      puVar6[5] = uVar8;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
    }
  }
  local_68 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar5 = *(uint *)(param_1 + 0x1b8);
  local_60 = param_1;
  if (uVar5 != 0) {
    uVar12 = 0;
    do {
      lVar10 = (longlong)DAT_14c760da4;
      if (lVar10 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)(int)uVar12 * 0x10);
        plVar14 = (longlong *)(lVar2 + 2000);
        do {
          lVar13 = *plVar14;
          lVar11 = lVar13 + 0xb00;
          if (*(longlong *)(lVar13 + 0x1280) != 0) {
            lVar11 = *(longlong *)(lVar13 + 0x1280);
          }
          if ((longlong)*(int *)(lVar13 + 0x12c0) != 0) {
            lVar13 = (longlong)*(int *)(lVar13 + 0x12c0) * 0x280;
            do {
              FUN_140e8e43a(&local_68,lVar11);
              lVar11 = lVar11 + 0x280;
              lVar13 = lVar13 + -0x280;
            } while (lVar13 != 0);
          }
          plVar14 = plVar14 + 1;
        } while (plVar14 != (longlong *)(lVar2 + lVar10 * 8 + 2000));
        uVar5 = *(uint *)(param_1 + 0x1b8);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar5);
  }
  FUN_14473bfcc(param_1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bb9cc FUN_1457bb9cc body=185 status=ok
// SIG undefined FUN_1457bb9cc(void)

void FUN_1457bb9cc(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_1[0x47]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x46] + lVar3 * 8);
      if (*(code **)(*param_1 + 0x120) == (code *)&LAB_1478d5456) {
        local_48 = param_1[-0x53];
      }
      else {
        local_48 = (**(code **)(*param_1 + 0x120))(param_1);
      }
      local_48 = *(int *)(lVar1 + 0x44) + local_48;
      local_40 = *(undefined8 *)(lVar1 + 0x70);
      iVar2 = (*(code *)*param_2)(param_2[1],&local_48);
    } while ((iVar2 != 0) && (lVar3 = lVar3 + 1, lVar3 < (int)param_1[0x47]));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bba86 FUN_1457bba86 body=263 status=ok
// SIG undefined FUN_1457bba86(void)

void FUN_1457bba86(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    FUN_1415b7ec4(L"Divide by zero: Divide_IntInt",3,DAT_14cae6e38);
    iVar1 = 0;
  }
  else {
    iVar1 = local_1c / local_20;
  }
  *param_3 = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bbb8e FUN_1457bbb8e body=75 status=ok
// SIG undefined FUN_1457bbb8e(void)

void FUN_1457bbb8e(longlong param_1,int param_2)

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



// FUNCTION 1457bbbda FUN_1457bbbda body=40 status=ok
// SIG undefined FUN_1457bbbda(void)

undefined8 FUN_1457bbbda(undefined8 param_1,int param_2)

{
  FUN_1457bbc02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457bbc02 FUN_1457bbc02 body=249 status=ok
// SIG undefined FUN_1457bbc02(void)

void FUN_1457bbc02(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b46b300;
  FUN_1457bbd94(param_1 + 0x9c);
  FUN_1457bbcfc(param_1 + 0x8d);
  FUN_140e91a8c(param_1 + 0x7d);
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x66) == '\x01') {
    *(undefined1 *)(param_1 + 0x66) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 0x43) == '\x01') {
    *(undefined1 *)(param_1 + 0x43) = 0;
  }
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_1457bbd44(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1457bbcfc FUN_1457bbcfc body=72 status=ok
// SIG undefined FUN_1457bbcfc(void)

void FUN_1457bbcfc(longlong param_1)

{
  FUN_140dde381(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e916c2(param_1);
  return;
}



// FUNCTION 1457bbd44 FUN_1457bbd44 body=79 status=ok
// SIG undefined FUN_1457bbd44(void)

void FUN_1457bbd44(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 6;
      if ((longlong *)puVar1[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[4];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1457bbd94 FUN_1457bbd94 body=192 status=ok
// SIG undefined FUN_1457bbd94(void)

void FUN_1457bbd94(longlong *param_1)

{
  FUN_144760e21(param_1[0x11],(int)param_1[0x12]);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],(int)param_1[0xc]);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91ad4(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457bbe54 FUN_1457bbe54 body=79 status=ok
// SIG undefined FUN_1457bbe54(void)

undefined8 * FUN_1457bbe54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bc010;
  param_1[0x1f] = &PTR_LAB_14a4bc380;
  FUN_140e91cce(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1457bbea4 FUN_1457bbea4 body=14 status=ok
// SIG undefined FUN_1457bbea4(void)

void FUN_1457bbea4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e03580;
  return;
}



// FUNCTION 1457bbeb2 FUN_1457bbeb2 body=501 status=ok
// SIG undefined FUN_1457bbeb2(void)

void FUN_1457bbeb2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0 [4];
  int local_7c;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140810f5e(local_a0,0);
  FUN_1405f3246(&local_28,local_a0);
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
  }
  cVar1 = FUN_140e92d26(&DAT_14c846b20,&local_38);
  if (cVar1 != '\0') {
    if ((int)uStack_30 == local_20) {
      if (1 < (int)uStack_30) {
        lVar2 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)local_38 + lVar2);
          uVar5 = (ulonglong)uVar4;
          uVar6 = *(ushort *)(local_28 + lVar2);
          if (uVar4 != uVar6) break;
          if (uVar4 == 0) goto LAB_1457bbf32;
LAB_1457bc020:
          lVar2 = lVar2 + 2;
        }
        if ((uVar6 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1457bc020;
        }
        if (uVar4 != uVar6) goto LAB_1457bc06d;
      }
    }
    else if (local_20 + (int)uStack_30 != 1) {
LAB_1457bc06d:
      puVar3 = &DAT_149dfb77a;
      if ((int)uStack_30 != 0) {
        puVar3 = local_38;
      }
      FUN_140245d8a(local_a0,0,puVar3,0);
      if (local_7c != 0) {
        *(undefined1 *)(param_1 + 0x532) = 1;
      }
      FUN_141238aee(local_a0);
    }
  }
LAB_1457bbf32:
  if (((*(char *)(param_1 + 0x1f8) == '\0') && (*(char *)(param_1 + 0x531) == '\0')) &&
     (cVar1 = FUN_1457bc0a8(param_1), cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0x531) = *(undefined1 *)(param_1 + 0x532);
  }
  thunk_FUN_1457bc0b2(param_1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bc0a8 FUN_1457bc0a8 body=3 status=ok
// SIG undefined FUN_1457bc0a8(void)

undefined8 FUN_1457bc0a8(void)

{
  return 0;
}



// FUNCTION 1457bc0ac thunk_FUN_1457bc0b2 body=5 status=ok
// SIG undefined thunk_FUN_1457bc0b2(void)

void thunk_FUN_1457bc0b2(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  code *pcStack_38;
  undefined4 uStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e944d2();
  if ((*(char *)((longlong)param_1 + 0x2d9) == '\0') && (param_1[0x41] == 0)) {
    param_1[0x41] = (longlong)param_1;
  }
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x4f0))(param_1);
  FUN_1457bc2cc(param_1);
  lVar1 = DAT_14cb7d838;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (param_1[6] == 0) {
    if (*(char *)(lVar1 + uVar4) == '\0') goto LAB_1457bc15a;
  }
  else if ((*(char *)(lVar1 + uVar4) == '\0') &&
          (((lVar1 = *(longlong *)(param_1[6] + 0x360), lVar1 == 0 ||
            (cVar3 = FUN_144b2c332(lVar1), cVar3 == '\0')) ||
           (cVar3 = FUN_144a80e00(lVar1), cVar3 != '\0')))) goto LAB_1457bc15a;
  FUN_140e92d2a();
LAB_1457bc15a:
  pcStack_38 = (code *)&LAB_143d4f49a;
  uStack_30 = 0;
  FUN_1457bc534(&lStack_28,param_1,&pcStack_38);
  pcStack_38 = (code *)&LAB_143d4f4a8;
  uStack_30 = 0;
  FUN_1457bc62e(&lStack_28,param_1,&pcStack_38);
  pcStack_38 = (code *)&LAB_145cfefc2;
  uStack_30 = 0;
  FUN_1457bc822(param_1 + 0xc,&lStack_28,param_1,&pcStack_38);
  pcStack_38 = (code *)&LAB_143d4f4b6;
  uStack_30 = 0;
  FUN_1457bc33e(&DAT_14c867518,&lStack_28,param_1,&pcStack_38);
  pcStack_38 = (code *)&LAB_143d4f4c4;
  uStack_30 = 0;
  FUN_1457bc728(&lStack_28,param_1,&pcStack_38);
  pcStack_38 = (code *)CONCAT71(pcStack_38._1_7_,2);
  FUN_140627eda(param_1 + 0x40,&pcStack_38);
  pcStack_38 = FUN_141632dce;
  uStack_30 = 0;
  FUN_1457bc33e(&DAT_14cadbe48,&lStack_28,param_1,&pcStack_38);
  param_1[0x82] = lStack_28;
  FUN_1457bca8b(param_1);
  if ((uStack_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bc0b2 FUN_1457bc0b2 body=536 status=ok
// SIG undefined FUN_1457bc0b2(void)

void FUN_1457bc0b2(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e944d2();
  if ((*(char *)((longlong)param_1 + 0x2d9) == '\0') && (param_1[0x41] == 0)) {
    param_1[0x41] = (longlong)param_1;
  }
  param_1[0x3c] = 0;
  (**(code **)(*param_1 + 0x4f0))(param_1);
  FUN_1457bc2cc(param_1);
  lVar1 = DAT_14cb7d838;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (param_1[6] == 0) {
    if (*(char *)(lVar1 + uVar4) == '\0') goto LAB_1457bc15a;
  }
  else if ((*(char *)(lVar1 + uVar4) == '\0') &&
          (((lVar1 = *(longlong *)(param_1[6] + 0x360), lVar1 == 0 ||
            (cVar3 = FUN_144b2c332(lVar1), cVar3 == '\0')) ||
           (cVar3 = FUN_144a80e00(lVar1), cVar3 != '\0')))) goto LAB_1457bc15a;
  FUN_140e92d2a();
LAB_1457bc15a:
  local_38 = (code *)&LAB_143d4f49a;
  local_30 = 0;
  FUN_1457bc534(&local_28,param_1,&local_38);
  local_38 = (code *)&LAB_143d4f4a8;
  local_30 = 0;
  FUN_1457bc62e(&local_28,param_1,&local_38);
  local_38 = (code *)&LAB_145cfefc2;
  local_30 = 0;
  FUN_1457bc822(param_1 + 0xc,&local_28,param_1,&local_38);
  local_38 = (code *)&LAB_143d4f4b6;
  local_30 = 0;
  FUN_1457bc33e(&DAT_14c867518,&local_28,param_1,&local_38);
  local_38 = (code *)&LAB_143d4f4c4;
  local_30 = 0;
  FUN_1457bc728(&local_28,param_1,&local_38);
  local_38 = (code *)CONCAT71(local_38._1_7_,2);
  FUN_140627eda(param_1 + 0x40,&local_38);
  local_38 = FUN_141632dce;
  local_30 = 0;
  FUN_1457bc33e(&DAT_14cadbe48,&local_28,param_1,&local_38);
  param_1[0x82] = local_28;
  FUN_1457bca8b(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bc2cc FUN_1457bc2cc body=113 status=ok
// SIG undefined FUN_1457bc2cc(void)

void FUN_1457bc2cc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x3f8) == 0) {
    lVar1 = FUN_14090368a(param_1 + 0x3d8);
    if (lVar1 == 0) {
      lVar1 = FUN_14595c81c();
    }
    plVar2 = (longlong *)FUN_1457bc43d(param_1,lVar1);
    if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar2);
    }
    *(longlong **)(param_1 + 0x3f8) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x0001457bc324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2a0))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1457bc33e FUN_1457bc33e body=254 status=ok
// SIG undefined FUN_1457bc33e(void)

undefined8
FUN_1457bc33e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b4034f0;
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



// FUNCTION 1457bc43d FUN_1457bc43d body=187 status=ok
// SIG undefined FUN_1457bc43d(void)

undefined8 FUN_1457bc43d(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
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



// FUNCTION 1457bc4fa FUN_1457bc4fa body=57 status=ok
// SIG undefined FUN_1457bc4fa(void)

void FUN_1457bc4fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60348 = FUN_140002ddd(FUN_1464ebd08,uVar1,L"GbxLevelStationTypeDef");
  }
  return;
}



// FUNCTION 1457bc534 FUN_1457bc534 body=248 status=ok
// SIG undefined FUN_1457bc534(void)

undefined8 FUN_1457bc534(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e063e0;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b4033a0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14134bd86(&DAT_14c964278,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bc62e FUN_1457bc62e body=248 status=ok
// SIG undefined FUN_1457bc62e(void)

undefined8 FUN_1457bc62e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b403410;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bc728 FUN_1457bc728 body=248 status=ok
// SIG undefined FUN_1457bc728(void)

undefined8 FUN_1457bc728(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e06450;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b403560;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(&DAT_14c867590,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bc822 FUN_1457bc822 body=254 status=ok
// SIG undefined FUN_1457bc822(void)

undefined8
FUN_1457bc822(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b403f60;
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
  *local_48 = &PTR_FUN_14b403480;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bc922(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bc922 FUN_1457bc922 body=214 status=ok
// SIG undefined FUN_1457bc922(void)

undefined8 * FUN_1457bc922(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457bca06 FUN_1457bca06 body=132 status=ok
// SIG undefined FUN_1457bca06(void)

void FUN_1457bca06(longlong param_1,int param_2)

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



// FUNCTION 1457bca8b FUN_1457bca8b body=1655 status=ok
// SIG undefined FUN_1457bca8b(void)

void FUN_1457bca8b(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_d0;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_1 != 0) && (lVar8 = FUN_144a7af92(), lVar8 != 0)) {
    local_110 = 0;
    FUN_14485c47a(&local_110,param_1);
    if ((DAT_14cb8cc00 == (longlong *)0x0 || DAT_14cb8cc08 == 0) ||
       (cVar6 = (**(code **)(*DAT_14cb8cc00 + 0x30))(), cVar6 == '\0')) {
      local_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,2,0x10);
      local_b8 = 2;
      puVar3 = (undefined8 *)CONCAT44(uStack_bc,local_c0);
      *puVar3 = &PTR_LAB_14b432880;
      puVar3[1] = local_110;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar3[2] = lVar10;
      *puVar3 = &PTR_FUN_14b432810;
      puVar3[3] = FUN_14604bd3e;
      FUN_144a450dc(&DAT_14cb8cc00,&local_c0);
      FUN_1449db362(&local_c0);
      local_c0 = local_c0 & 0xffffff00;
      uStack_bc = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      uStack_98 = 0;
      local_90 = 0xc69c4000;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_2f = 1;
      local_2d = 0;
      local_2c = 0;
      FUN_1401aa3da((longlong)&uStack_a4 + 4,&DAT_14cb8cc00);
      FUN_144928b90(&local_f8,2);
      local_120 = DAT_14cb8cbb8;
      local_118 = DAT_14cb8cbc0;
      FUN_1411efe9e(&local_f8);
      lVar9 = FUN_140149a73(lVar8,0);
      if (lVar9 == 0) {
        local_2c = 2;
      }
      else {
        FUN_140983ba6(&local_f8,lVar9,&local_c0);
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1409838b8(&local_c0);
    }
    if ((DAT_14cb8cc10 == (longlong *)0x0 || DAT_14cb8cc18 == 0) ||
       (cVar6 = (**(code **)(*DAT_14cb8cc10 + 0x30))(), cVar6 == '\0')) {
      local_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,2,0x10);
      local_b8 = 2;
      puVar3 = (undefined8 *)CONCAT44(uStack_bc,local_c0);
      *puVar3 = &PTR_LAB_14b432880;
      puVar3[1] = local_110;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      puVar3[2] = lVar10;
      *puVar3 = &PTR_FUN_14b432810;
      puVar3[3] = FUN_14604be93;
      FUN_144a450dc(&DAT_14cb8cc10,&local_c0);
      FUN_1449db362(&local_c0);
      local_c0 = local_c0 & 0xffffff00;
      uStack_bc = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      uStack_a4 = 0;
      local_9c = 0;
      uStack_98 = 0;
      local_90 = 0xc69c4000;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_2f = 1;
      local_2d = 0;
      local_2c = 0;
      FUN_140e1bbe8(&local_c0,1);
      FUN_1401aa3da((longlong)&uStack_a4 + 4,&DAT_14cb8cc10);
      FUN_144928b90(&local_f8,3);
      local_120 = DAT_14cb8cbd0;
      local_118 = DAT_14cb8cbd8;
      FUN_1411efe9e(&local_f8);
      lVar9 = FUN_140149a73(lVar8,0);
      if (lVar9 == 0) {
        local_2c = 2;
      }
      else {
        FUN_140983ba6(&local_f8,lVar9,&local_c0);
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      FUN_1409838b8(&local_c0);
    }
    FUN_1457bd104(&local_c0);
    FUN_1404d1e78(&local_f8,lVar8);
    plVar4 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      iVar7 = (int)local_f0[1];
      do {
        if (iVar7 == 0) goto LAB_1457bcf75;
        LOCK();
        iVar5 = (int)local_f0[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(local_f0 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      if (local_f8 != 0) {
        if (*(longlong *)(local_f8 + 0x430) != 0) {
          FUN_141434f00(&local_120);
          FUN_144928b90(&local_c0,2);
          local_108 = DAT_14cb8cbb8;
          local_100 = DAT_14cb8cbc0;
          FUN_1411efe9e(&local_c0);
          lVar8 = FUN_140149a73(lVar8,0);
          if (lVar8 != 0) {
            FUN_140bc53f1(&local_c0,&local_120,lVar8,0);
          }
          if (CONCAT44(uStack_94,uStack_98) != 0) {
            FUN_1400020a8();
          }
        }
        FUN_145a0be5a(local_f8 + 0x300,&local_c0);
        if (*(int *)(local_f8 + 0x350) != 2) {
          FUN_1446efa72((longlong *)(local_f8 + 0x348),0,2,0x10);
          *(undefined4 *)(local_f8 + 0x350) = 2;
        }
        puVar3 = *(undefined8 **)(local_f8 + 0x348);
        *puVar3 = &PTR_LAB_14b4326c0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        puVar3[2] = lVar9;
        *puVar3 = &PTR_FUN_14b432650;
        puVar3[3] = FUN_146008df6;
        if (*(int *)(local_f8 + 0x360) != 2) {
          FUN_1446efa72((longlong *)(local_f8 + 0x358),0,2,0x10);
          *(undefined4 *)(local_f8 + 0x360) = 2;
        }
        puVar3 = *(undefined8 **)(local_f8 + 0x358);
        *puVar3 = &PTR_LAB_14b4327a0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        puVar3[2] = lVar9;
        *puVar3 = &PTR_FUN_14b432730;
        puVar3[3] = FUN_145891f92;
      }
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
LAB_1457bcf75:
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f0 + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bd104 FUN_1457bd104 body=207 status=ok
// SIG undefined FUN_1457bd104(void)

undefined8 FUN_1457bd104(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14b432960;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14b4328f0;
  local_28[3] = FUN_145a0bd0e;
  FUN_1457bd1d4(param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd1d4 FUN_1457bd1d4 body=233 status=ok
// SIG undefined FUN_1457bd1d4(void)

undefined8 * FUN_1457bd1d4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cb54798,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cb547a0;
      lVar6 = (longlong)(int)DAT_14cb547a0;
      DAT_14cb547a0 = DAT_14cb547a0 + 1;
      if (DAT_14cb547a4 < DAT_14cb547a0) {
        FUN_1447a71f6(&DAT_14cb54798,uVar3);
      }
      lVar2 = DAT_14cb54798;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cb54798 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd2ce FUN_1457bd2ce body=204 status=ok
// SIG undefined FUN_1457bd2ce(void)

void FUN_1457bd2ce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e94f5e();
  FUN_1457bd59a(param_1);
  FUN_1457bd7f6(param_1);
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar2 = FUN_1449db7f2();
    lVar3 = *(longlong *)(param_1 + 0x430);
    if (lVar3 != 0) {
      lVar4 = 0;
      if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_1457bd345;
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar4 = lVar3;
        }
        goto LAB_1457bd345;
      }
    }
  }
  lVar4 = 0;
LAB_1457bd345:
  lVar3 = FUN_140e94db6(lVar4);
  if (lVar3 != 0) {
    local_28 = &LAB_140db231c;
    local_20 = 0;
    FUN_1457bd39c(lVar3 + 0x30,local_18,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd39c FUN_1457bd39c body=254 status=ok
// SIG undefined FUN_1457bd39c(void)

undefined8
FUN_1457bd39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14ae6bc70;
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
  *local_48 = &PTR_FUN_14b3e91b0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457bd49c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd49c FUN_1457bd49c body=216 status=ok
// SIG undefined FUN_1457bd49c(void)

undefined8 * FUN_1457bd49c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457bd582 FUN_1457bd582 body=24 status=ok
// SIG undefined FUN_1457bd582(void)

bool FUN_1457bd582(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457bd59a FUN_1457bd59a body=347 status=ok
// SIG undefined FUN_1457bd59a(void)

void FUN_1457bd59a(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_145abfef0();
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
    FUN_140e951a6(&local_28,uVar2);
    plVar3 = local_20;
    if (local_28 != 0) {
      *(longlong *)(param_1 + 0xb00) = local_28;
      plVar5 = *(longlong **)(param_1 + 0xb08);
      if (plVar5 != local_20) {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar5 = *(longlong **)(param_1 + 0xb08);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        *(longlong **)(param_1 + 0xb08) = plVar3;
      }
      local_40 = &LAB_1461a2f6e;
      local_38 = 0;
      FUN_1457bd6f6(local_28 + 0x10,local_30,param_1);
      if ((longlong)*(int *)(local_28 + 0x78) < 1) {
        plVar3 = (longlong *)(local_28 + 0x28);
      }
      else {
        lVar4 = local_28 + 0x30;
        if (*(longlong *)(local_28 + 0x70) != 0) {
          lVar4 = *(longlong *)(local_28 + 0x70);
        }
        plVar3 = (longlong *)(lVar4 + (longlong)*(int *)(local_28 + 0x78) * 0x10 + -0x10);
      }
      if ((*plVar3 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
        FUN_14125aa0e(param_1);
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd6f6 FUN_1457bd6f6 body=254 status=ok
// SIG undefined FUN_1457bd6f6(void)

undefined8
FUN_1457bd6f6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e9d10;
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
  *local_48 = &PTR_FUN_14b3e9300;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1459850be(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bd7f6 FUN_1457bd7f6 body=787 status=ok
// SIG undefined FUN_1457bd7f6(void)

void FUN_1457bd7f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar9 = (**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
    FUN_140e951a6(&local_78,uVar9);
    uVar9 = local_88;
    if ((local_78 != 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
      lVar10 = FUN_140183ac4();
      uVar9 = local_88;
      if (((*(longlong *)(param_1 + 0x448) != 0) &&
          (((lVar10 != 0 &&
            (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x448) + 0x10), lVar12 != 0)) &&
           (*(int *)(lVar10 + 0x38) <= *(int *)(lVar12 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30)) {
        plVar11 = (longlong *)FUN_1457bdb0a(local_78);
        plVar1 = plVar11 + 2;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar13 = 0;
        local_60 = plVar1;
        if ((int)plVar11[5] != 0) {
          FUN_1449c0562(&local_68);
          iVar13 = (int)plVar11[5];
        }
        local_88 = local_58;
        uVar9 = local_88;
        local_80 = local_50;
        local_7c = local_4c;
        local_98 = local_68;
        local_90 = local_60;
        local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_a0 = plVar11;
        if ((local_88._4_4_ != iVar13) || (local_60 != plVar1)) {
          iVar14 = local_88._4_4_;
          local_88 = uVar9;
          do {
            lVar10 = *local_a0;
            iVar5 = *(int *)(param_1 + 0xbb0);
            *(uint *)(param_1 + 0xbb0) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0xbb4) < iVar5 + 1U) {
              FUN_1487c9ffa((longlong *)(param_1 + 0xba8),iVar5);
            }
            puVar3 = (undefined8 *)(lVar10 + (longlong)iVar14 * 0x24);
            lVar10 = *(longlong *)(param_1 + 0xba8);
            lVar12 = (longlong)iVar5 * 0x1c;
            *(undefined8 *)(lVar10 + lVar12) = *puVar3;
            uVar6 = *(undefined4 *)((longlong)puVar3 + 0xc);
            uVar7 = *(undefined4 *)(puVar3 + 2);
            uVar8 = *(undefined4 *)((longlong)puVar3 + 0x14);
            puVar4 = (undefined4 *)(lVar10 + 8 + lVar12);
            *puVar4 = *(undefined4 *)(puVar3 + 1);
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            *(undefined4 *)(lVar10 + 0x18 + lVar12) = *(undefined4 *)(puVar3 + 3);
            local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
            FUN_1449c0562(&local_98);
            iVar14 = local_88._4_4_;
          } while (((local_88._4_4_ != iVar13) || (local_90 != plVar1)) ||
                  (uVar9 = local_88, local_a0 != plVar11));
        }
      }
    }
    local_88 = uVar9;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar12 = FUN_140183ac4();
    lVar10 = *(longlong *)(param_1 + 0x448);
    if (((((lVar10 != 0) && (lVar12 != 0)) && (lVar15 = *(longlong *)(lVar10 + 0x10), lVar15 != 0))
        && ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar15 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
             lVar12 + 0x30)))) &&
       (((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0 && ((longlong)*(int *)(param_1 + 0xbb0) != 0)))) {
      lVar12 = *(longlong *)(param_1 + 0xba8);
      lVar15 = (longlong)*(int *)(param_1 + 0xbb0) * 0x1c;
      do {
        FUN_148803f40(lVar10,&local_68,lVar12);
        if (local_68._4_1_ == '\0') {
          FUN_148804734(lVar12 + 8,&local_a0);
          FUN_140fa871e(lVar10,lVar12,&local_a0);
        }
        lVar12 = lVar12 + 0x1c;
        lVar15 = lVar15 + -0x1c;
      } while (lVar15 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bdb0a FUN_1457bdb0a body=8 status=ok
// SIG undefined FUN_1457bdb0a(void)

longlong FUN_1457bdb0a(longlong param_1)

{
  return param_1 + 0x90;
}



// FUNCTION 1457bdb12 FUN_1457bdb12 body=150 status=ok
// SIG undefined FUN_1457bdb12(void)

longlong FUN_1457bdb12(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [120];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_a8 = FUN_1457bdbaa(uVar1,param_3);
  local_b0 = &PTR_FUN_14a4c5378;
  FUN_1457bdd22(local_a0,uVar1);
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  FUN_1457bdc14(param_2,&local_b0);
  local_b0 = &PTR_FUN_14a4c5378;
  FUN_140e9522c(local_a0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bdbaa FUN_1457bdbaa body=105 status=ok
// SIG undefined FUN_1457bdbaa(void)

ulonglong FUN_1457bdbaa(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_21 = 0;
  FUN_1406f9c46(param_1,local_68,param_2);
  FUN_140e9550e(local_68,&local_21);
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_21);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bdc14 FUN_1457bdc14 body=144 status=ok
// SIG undefined FUN_1457bdc14(void)

void FUN_1457bdc14(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar3 = (undefined8 *)FUN_14001cc68(0x88,8);
  *param_1 = puVar3;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar3;
  }
  *param_1 = &PTR_FUN_14a4c5378;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  FUN_1457bdca4(param_1 + 2,param_2 + 0x10);
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar2;
  return;
}



// FUNCTION 1457bdca4 FUN_1457bdca4 body=125 status=ok
// SIG undefined FUN_1457bdca4(void)

undefined8 * FUN_1457bdca4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457bdf52();
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



// FUNCTION 1457bdd22 FUN_1457bdd22 body=155 status=ok
// SIG undefined FUN_1457bdd22(void)

undefined8 * FUN_1457bdd22(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1457bddbe();
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  _Src = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar2;
  return param_1;
}



// FUNCTION 1457bddbe FUN_1457bddbe body=120 status=ok
// SIG undefined FUN_1457bddbe(void)

longlong FUN_1457bddbe(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1457bde36(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1457bde36 FUN_1457bde36 body=283 status=ok
// SIG undefined FUN_1457bde36(void)

longlong * FUN_1457bde36(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_140e9529e(param_1,(ulonglong)uVar3);
    lVar8 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar8 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar8) < uVar3) {
      FUN_1406fba42(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar3) {
      lVar8 = *param_1;
      lVar4 = *param_2;
      lVar11 = 0;
      uVar10 = 0;
      do {
        plVar9 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar9 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar8 + lVar11) = *(undefined4 *)(lVar4 + lVar11);
          *(undefined4 *)(lVar8 + 4 + lVar11) = *(undefined4 *)(lVar4 + 4 + lVar11);
        }
        else {
          *(undefined8 *)(lVar8 + lVar11) = *(undefined8 *)(lVar4 + lVar11);
          FUN_1406fa146(lVar8 + 8 + lVar11,lVar4 + 8 + lVar11);
          *(undefined8 *)(lVar8 + 0x30 + lVar11) = *(undefined8 *)(lVar4 + 0x30 + lVar11);
          puVar1 = (undefined4 *)(lVar4 + 0x38 + lVar11);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(lVar8 + 0x38 + lVar11);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          *(undefined8 *)(lVar8 + 0x48 + lVar11) = *(undefined8 *)(lVar4 + 0x48 + lVar11);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x50;
      } while (uVar3 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 1457bdf52 FUN_1457bdf52 body=443 status=ok
// SIG undefined FUN_1457bdf52(void)

longlong * FUN_1457bdf52(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x20 + (longlong)iVar6 * 0x50) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
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
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1457be10e FUN_1457be10e body=25 status=ok
// SIG undefined FUN_1457be10e(void)

undefined8 FUN_1457be10e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1457be128 FUN_1457be128 body=22 status=ok
// SIG undefined FUN_1457be128(void)

void FUN_1457be128(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  FUN_1447f69b6(uVar1);
  return;
}



// FUNCTION 1457be13e FUN_1457be13e body=102 status=ok
// SIG undefined FUN_1457be13e(void)

undefined8 * FUN_1457be13e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455d40;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1457be1ae FUN_1457be1ae body=10 status=ok
// SIG undefined FUN_1457be1ae(void)

void FUN_1457be1ae(undefined8 param_1)

{
  FUN_140aeefbc(param_1,0,1);
  return;
}



// FUNCTION 1457be1c0 FUN_1457be1c0 body=192 status=ok
// SIG undefined FUN_1457be1c0(void)

void FUN_1457be1c0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457be476(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x30) = local_20;
  FUN_1457be664(&local_20,param_1);
  *(undefined8 *)(param_1 + 0x38) = local_20;
  FUN_1457be282(&DAT_14cb0a8e8,&local_20,param_1,FUN_140a82582);
  *(undefined8 *)(param_1 + 0x40) = local_20;
  FUN_1457be282(&DAT_14cb0a900,&local_20,param_1,FUN_140a828ec);
  *(undefined8 *)(param_1 + 0x48) = local_20;
  if (DAT_14cafafb0 == '\x01') {
    FUN_14365af8e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be282 FUN_1457be282 body=244 status=ok
// SIG undefined FUN_1457be282(void)

undefined8
FUN_1457be282(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa5a800;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14aa5a230;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1457be378(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be378 FUN_1457be378 body=216 status=ok
// SIG undefined FUN_1457be378(void)

undefined8 * FUN_1457be378(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457be45e FUN_1457be45e body=24 status=ok
// SIG undefined FUN_1457be45e(void)

bool FUN_1457be45e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457be476 FUN_1457be476 body=239 status=ok
// SIG undefined FUN_1457be476(void)

undefined8 FUN_1457be476(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14aa5a870;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14aa5a150;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1406ba394;
  FUN_1457be566(&DAT_14cb0a918,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be566 FUN_1457be566 body=216 status=ok
// SIG undefined FUN_1457be566(void)

undefined8 * FUN_1457be566(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1457be64c FUN_1457be64c body=24 status=ok
// SIG undefined FUN_1457be64c(void)

bool FUN_1457be64c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1457be664 FUN_1457be664 body=239 status=ok
// SIG undefined FUN_1457be664(void)

undefined8 FUN_1457be664(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca3a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14aa5a1c0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1405302d4;
  FUN_140ea1bb6(&DAT_14cb0a930,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be754 FUN_1457be754 body=176 status=ok
// SIG undefined FUN_1457be754(void)

void FUN_1457be754(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)param_1[2];
  if (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1] < 0.0001) {
    local_28 = 1.0;
    dStack_20 = 0.0;
    local_18 = 0.0;
  }
  else {
    local_18 = pdVar1[2];
    local_28 = *pdVar1;
    dStack_20 = pdVar1[1];
  }
  local_38 = &local_28;
  FUN_140ea70ce(param_2,*param_1,param_3,*(undefined8 *)param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be8b8 FUN_1457be8b8 body=95 status=ok
// SIG undefined FUN_1457be8b8(void)

void FUN_1457be8b8(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_20;
  local_20 = 0x3ff0000000000000;
  local_18 = 0x3ff0000000000000;
  local_10 = 0x3ff0000000000000;
  local_38 = in_stack_00000028;
  FUN_1457beb56();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457be918 FUN_1457be918 body=573 status=ok
// SIG undefined FUN_1457be918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457be918(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  undefined4 local_84;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = 0;
  local_80 = FUN_14172546a;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457beb56 FUN_1457beb56 body=2004 status=ok
// SIG undefined FUN_1457beb56(void)

undefined4
FUN_1457beb56(longlong param_1,longlong *param_2,double *param_3,double param_4,undefined8 *param_5,
             double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_2b8 [32];
  double local_298;
  double *local_290;
  longlong local_288;
  double local_280;
  undefined8 local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218 [2];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_198;
  longlong local_190;
  double *local_188;
  longlong *local_180;
  double *local_178;
  double *local_170;
  double local_168 [4];
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  dVar1 = param_6[2];
  dVar4 = 1.0 / dVar1;
  dVar13 = *param_6;
  dVar10 = param_6[1];
  dVar3 = 1.0 / dVar10;
  dVar2 = 1.0 / dVar13;
  local_f8 = param_4;
  if (param_5 == (undefined8 *)0x0) {
    pdVar8 = param_3;
    pdVar9 = local_168;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
    local_138 = dVar1 * local_138;
    dVar10 = dVar10 * (double)local_148._8_8_;
    dVar13 = dVar13 * (double)local_148._0_8_;
    local_148._8_4_ = SUB84(dVar10,0);
    local_148._0_8_ = dVar13;
    local_148._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_130 = 0;
    local_288 = param_1;
    if ((0.9 < ABS(param_3[3])) || (ABS(param_3[3] + -0.7071067690849304) <= 0.01)) {
      (**(code **)(*param_2 + 0x80))(param_2,local_218);
      FUN_1400c6592(local_218,&local_278,local_168);
      dVar1 = ABS(param_4);
      dVar13 = ((double)local_258._8_8_ + dVar1) * dVar4;
      dVar14 = ((double)local_258._0_8_ + dVar1) * dVar3;
      dVar10 = (dStack_260 + dVar1) * dVar2;
      local_258._8_8_ = (local_268 - dVar1) * dVar4;
      local_258._0_8_ = (dStack_270 - dVar1) * dVar3;
      dStack_260 = (local_278 - dVar1) * dVar2;
      local_268 = (double)local_258._8_8_;
      if (dVar13 <= (double)local_258._8_8_) {
        local_268 = dVar13;
      }
      dStack_270 = (double)local_258._0_8_;
      if (dVar14 <= (double)local_258._0_8_) {
        dStack_270 = dVar14;
      }
      local_278 = dStack_260;
      if (dVar10 <= dStack_260) {
        local_278 = dVar10;
      }
      if ((double)local_258._8_8_ <= dVar13) {
        local_258._8_8_ = dVar13;
      }
      if ((double)local_258._0_8_ <= dVar14) {
        local_258._0_8_ = dVar14;
      }
      if (dStack_260 <= dVar10) {
        dStack_260 = dVar10;
      }
      local_218[0] = *param_3;
      local_218[1] = param_3[1];
      local_208 = *(undefined4 *)(param_3 + 2);
      uStack_204 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_200 = *(undefined4 *)(param_3 + 3);
      uStack_1fc = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_1e8 = param_3[6] * param_6[2];
      local_1f8._8_8_ = param_3[5] * param_6[1];
      local_1f8._0_8_ = param_3[4] * *param_6;
      uStack_1e0 = 0;
      local_1d8 = 0x3ff0000000000000;
      uStack_1d0 = 0x3ff0000000000000;
      local_1c8 = 0x3ff0000000000000;
      uStack_1c0 = 0;
      local_290 = param_6;
      local_298 = param_4;
      uVar6 = FUN_1457bf32c(param_1 + 0xe0,&local_278,local_218,param_2);
    }
    else {
      param_4 = ABS(param_4);
      dVar15 = (double)*(float *)((longlong)param_2 + 0x44) - param_4;
      dVar14 = ((param_4 + (double)*(float *)((longlong)param_2 + 0x54)) -
               ((double)*(float *)(param_2 + 9) - param_4)) * 0.5;
      dVar11 = (((double)*(float *)(param_2 + 10) + param_4) - dVar15) * 0.5;
      dVar1 = (((double)*(float *)((longlong)param_2 + 0x4c) + param_4) -
              ((double)*(float *)(param_2 + 8) - param_4)) * 0.5;
      dVar12 = ((double)*(float *)(param_2 + 9) - param_4) + dVar14;
      dVar15 = dVar15 + dVar11;
      dVar5 = ((double)*(float *)(param_2 + 8) - param_4) + dVar1;
      dVar18 = dVar5 * local_168[2] - local_168[0] * dVar12;
      dVar16 = dVar15 * local_168[0] - local_168[1] * dVar5;
      dVar17 = dVar12 * local_168[1] - local_168[2] * dVar15;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar16 = dVar16 + dVar16;
      dVar10 = dVar10 + (local_168[2] * dVar17 - local_168[0] * dVar16) +
                        local_168[3] * dVar18 + dVar15;
      local_138 = local_138 +
                  dVar16 * local_168[3] + dVar12 + (dVar18 * local_168[0] - dVar17 * local_168[1]);
      local_148._8_4_ = SUB84(dVar10,0);
      local_148._0_8_ =
           dVar13 + (dVar16 * local_168[1] - dVar18 * local_168[2]) + local_168[3] * dVar17 + dVar5;
      local_148._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uStack_130 = 0;
      local_278 = (double)CONCAT44((float)dVar3,(float)dVar2);
      dStack_270 = (double)CONCAT44(dStack_270._4_4_,(float)dVar4);
      local_198 = (longlong *)CONCAT44((float)dVar11,(float)dVar1);
      local_190 = CONCAT44(local_190._4_4_,(float)dVar14);
      local_280 = dVar3;
      FUN_1402e7b1c(local_218,local_168,&local_198,&local_278);
      local_248 = param_3[6] * param_6[2];
      local_278 = *param_3;
      dStack_270 = param_3[1];
      local_268 = param_3[2];
      dStack_260 = param_3[3];
      local_258._8_4_ = SUB84(param_3[5] * param_6[1],0);
      local_258._0_8_ = param_3[4] * *param_6;
      local_258._12_4_ = (int)((ulonglong)(param_3[5] * param_6[1]) >> 0x20);
      uStack_240 = 0;
      local_238 = 0x3ff0000000000000;
      uStack_230 = 0x3ff0000000000000;
      local_228 = 0x3ff0000000000000;
      uStack_220 = 0;
      local_290 = param_6;
      local_298 = local_f8;
      uVar6 = FUN_1457bfa58(param_1 + 0xe0,local_218,&local_278,param_2);
    }
  }
  else {
    pdVar8 = param_3;
    pdVar9 = local_218;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
    local_1e8 = dVar1 * local_1e8;
    dVar10 = dVar10 * (double)local_1f8._8_8_;
    local_1f8._8_4_ = SUB84(dVar10,0);
    local_1f8._0_8_ = dVar13 * (double)local_1f8._0_8_;
    local_1f8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_1e0 = 0;
    (**(code **)(*param_2 + 0x80))(param_2,local_168);
    FUN_1400c6592(local_168,&local_278,local_218);
    param_4 = ABS(param_4);
    dVar10 = ((double)local_258._8_8_ + param_4) * dVar4;
    dVar13 = ((double)local_258._0_8_ + param_4) * dVar3;
    dVar1 = (dStack_260 + param_4) * dVar2;
    local_258._8_8_ = (local_268 - param_4) * dVar4;
    local_258._0_8_ = (dStack_270 - param_4) * dVar3;
    dStack_260 = (local_278 - param_4) * dVar2;
    local_268 = (double)local_258._8_8_;
    if (dVar10 <= (double)local_258._8_8_) {
      local_268 = dVar10;
    }
    dStack_270 = (double)local_258._0_8_;
    if (dVar13 <= (double)local_258._0_8_) {
      dStack_270 = dVar13;
    }
    local_278 = dStack_260;
    if (dVar1 <= dStack_260) {
      local_278 = dVar1;
    }
    if ((double)local_258._8_8_ <= dVar10) {
      local_258._8_8_ = dVar10;
    }
    if ((double)local_258._0_8_ <= dVar13) {
      local_258._0_8_ = dVar13;
    }
    if (dStack_260 <= dVar1) {
      dStack_260 = dVar1;
    }
    FUN_140d8788e(param_1 + 0xe0,local_108,&local_278);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_138 = param_3[6] * param_6[2];
    local_168[0] = *param_3;
    local_168[1] = param_3[1];
    local_168[2] = param_3[2];
    local_168[3] = param_3[3];
    local_148._8_4_ = SUB84(param_3[5] * param_6[1],0);
    local_148._0_8_ = param_3[4] * *param_6;
    local_148._12_4_ = (int)((ulonglong)(param_3[5] * param_6[1]) >> 0x20);
    uStack_130 = 0;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0x3ff0000000000000;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0;
    local_188 = param_6;
    local_170 = &local_f8;
    local_198 = local_108;
    local_190 = param_1;
    local_180 = param_2;
    local_178 = local_168;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar6 = FUN_146e58026(&local_198,param_1 + 0x60,param_5);
    }
    else {
      uVar6 = FUN_146e582f6(&local_198,param_1 + 0x70,param_5);
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1457bf32c FUN_1457bf32c body=777 status=ok
// SIG undefined FUN_1457bf32c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1457bf32c(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d0 = *param_6;
  uStack_c8 = param_6[1];
  local_c0 = param_6[2];
  local_b8 = param_5;
  local_b0 = param_7;
  local_a8 = 0;
  fVar23 = (float)param_3[2];
  fVar25 = (float)param_3[3];
  fVar27 = (float)*param_3;
  fVar30 = (float)param_3[1];
  fVar24 = fVar27 * fVar27 + fVar30 * fVar30;
  fVar26 = fVar23 * fVar23 + fVar25 * fVar25;
  auVar31._0_4_ = fVar26 + fVar24;
  auVar31._4_4_ = fVar26 + fVar24;
  auVar31._8_4_ = fVar24 + fVar26;
  auVar31._12_4_ = fVar24 + fVar26;
  auVar32 = sqrtps(auVar31,auVar31);
  auVar32 = divps(_DAT_1499314a0,auVar32);
  auVar33._0_4_ = auVar32._0_4_ * fVar27;
  auVar33._4_4_ = auVar32._4_4_ * fVar30;
  auVar33._8_4_ = auVar32._8_4_ * fVar23;
  auVar33._12_4_ = auVar32._12_4_ * fVar25;
  auVar32._4_4_ = -(uint)(1e-08 <= auVar31._4_4_);
  auVar32._0_4_ = -(uint)(1e-08 <= auVar31._0_4_);
  auVar32._8_4_ = -(uint)(1e-08 <= auVar31._8_4_);
  auVar32._12_4_ = -(uint)(1e-08 <= auVar31._12_4_);
  local_f8 = blendvps(_DAT_149932320,auVar33,auVar32);
  local_e8._0_4_ = (float)param_3[4];
  local_e8._4_4_ = (float)param_3[5];
  local_e8._8_4_ = (float)param_3[6];
  local_e8._12_4_ = 0;
  local_d8 = param_4;
  if ((int)param_1[1] == 0) {
    uVar15 = 0;
  }
  else {
    dVar10 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    dVar11 = param_2[3];
    dVar5 = param_2[4];
    dVar6 = param_2[5];
    local_108 = 0;
    uStack_100 = 0;
    FUN_14481578e(&local_108,0x10);
    uVar15 = uStack_100;
    lVar19 = (longlong)(int)uStack_100;
    uVar13 = (int)uStack_100 + 1;
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar13);
    if (uStack_100._4_4_ < uVar13) {
      FUN_1446f48e2(&local_108,uVar15 & 0xffffffff);
    }
    *(undefined4 *)(local_108 + lVar19 * 4) = 0;
    uVar15 = uStack_100 & 0xffffffff;
    if ((int)uStack_100 != 0) {
      do {
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uVar15 + -1);
        lVar20 = (longlong)*(int *)(local_108 + -4 + (longlong)(int)uVar15 * 4) * 0x50 + *param_1;
        lVar19 = 0;
        bVar12 = true;
        do {
          bVar18 = bVar12;
          uVar15 = uStack_100;
          iVar7 = *(int *)(lVar20 + 0x40 + lVar19 * 4);
          uVar22 = (ulonglong)iVar7;
          if (uVar22 != 0xffffffffffffffff) {
            lVar17 = lVar19 * 0x20;
            pfVar2 = (float *)(lVar20 + 0x10 + lVar17);
            pfVar1 = (float *)(lVar20 + lVar17);
            auVar28._4_4_ = -(uint)((float)dVar5 < pfVar1[1]);
            auVar28._0_4_ = -(uint)((float)dVar11 < *pfVar1);
            auVar28._8_4_ = -(uint)((float)dVar6 < pfVar1[2]);
            auVar28._12_4_ = -(uint)(0.0 < pfVar1[3]);
            auVar8._4_4_ = -(uint)(pfVar2[1] < (float)dVar3);
            auVar8._0_4_ = -(uint)(*pfVar2 < (float)dVar10);
            auVar8._8_4_ = -(uint)(pfVar2[2] < (float)dVar4);
            auVar8._12_4_ = -(uint)(pfVar2[3] < 0.0);
            iVar16 = movmskps((int)lVar17,auVar28 | auVar8);
            if (iVar16 == 0) {
              iVar16 = *(int *)(lVar20 + 0x48 + lVar19 * 4);
              if (iVar16 == 0) {
                lVar19 = (longlong)(int)uStack_100;
                uVar13 = (int)uStack_100 + 1;
                uStack_100 = CONCAT44(uStack_100._4_4_,uVar13);
                if (uStack_100._4_4_ < uVar13) {
                  FUN_1446f48e2(&local_108,uVar15 & 0xffffffff);
                }
                *(int *)(local_108 + lVar19 * 4) = iVar7;
              }
              else if (0 < iVar16) {
                uVar21 = uVar22 << 5 | 0x10;
                do {
                  lVar19 = param_1[2];
                  pfVar1 = (float *)(lVar19 + uVar21);
                  pfVar2 = (float *)(lVar19 + -0x10 + uVar21);
                  auVar29._4_4_ = -(uint)((float)dVar5 < pfVar2[1]);
                  auVar29._0_4_ = -(uint)((float)dVar11 < *pfVar2);
                  auVar29._8_4_ = -(uint)((float)dVar6 < pfVar2[2]);
                  auVar29._12_4_ = -(uint)(0.0 < pfVar2[3]);
                  auVar9._4_4_ = -(uint)(pfVar1[1] < (float)dVar3);
                  auVar9._0_4_ = -(uint)(*pfVar1 < (float)dVar10);
                  auVar9._8_4_ = -(uint)(pfVar1[2] < (float)dVar4);
                  auVar9._12_4_ = -(uint)(pfVar1[3] < 0.0);
                  iVar14 = movmskps((int)lVar19,auVar29 | auVar9);
                  if ((iVar14 == 0) &&
                     (uVar15 = FUN_1457bf636(local_f8,uVar22 & 0xffffffff), (char)uVar15 == '\0'))
                  goto LAB_1457bf5a9;
                  uVar22 = uVar22 + 1;
                  uVar21 = uVar21 + 0x20;
                } while ((longlong)uVar22 < (longlong)(iVar16 + iVar7));
              }
            }
          }
          lVar19 = 1;
          bVar12 = false;
        } while (bVar18);
        uVar15 = uStack_100 & 0xffffffff;
      } while ((int)uStack_100 != 0);
    }
LAB_1457bf5a9:
    if (local_108 != 0) {
      uVar15 = FUN_1400020a8();
    }
    uVar15 = CONCAT71((int7)(uVar15 >> 8),local_a8);
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffffffffff01;
}



// FUNCTION 1457bf636 FUN_1457bf636 body=408 status=ok
// SIG undefined FUN_1457bf636(void)

ulonglong FUN_1457bf636(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double *local_c0;
  double *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    local_b8 = &local_68;
    local_c0 = &local_48;
    local_c8 = &local_28;
    FUN_146e53748(param_1 + 0x28,param_2,lVar1 + 0x20,lVar1 + 0x60);
  }
  else {
    local_b8 = &local_68;
    local_c0 = &local_48;
    local_c8 = &local_28;
    FUN_1457bf7cf(param_1 + 0x28,param_2,lVar1 + 0x20,lVar1 + 0x70);
  }
  fVar8 = (float)local_18;
  fVar3 = (float)local_28;
  fVar4 = (float)dStack_20;
  local_a8._4_4_ = fVar4;
  local_a8._0_4_ = fVar3;
  local_a8._8_4_ = fVar8;
  local_a8._12_4_ = 0;
  local_98._4_4_ = (float)dStack_40;
  local_98._0_4_ = (float)local_48;
  local_98._8_4_ = (float)local_38;
  local_98._12_4_ = 0;
  fVar5 = (float)local_48 - fVar3;
  fVar6 = (float)dStack_40 - fVar4;
  fVar7 = (float)local_38 - fVar8;
  local_88._4_4_ = (float)dStack_60;
  local_88._0_4_ = (float)local_68;
  local_88._8_4_ = (float)local_58;
  local_88._12_4_ = 0;
  fVar3 = (float)local_68 - fVar3;
  fVar4 = (float)dStack_60 - fVar4;
  fVar8 = (float)local_58 - fVar8;
  local_c0 = (double *)local_78;
  local_78._4_4_ = fVar3 * fVar7 - fVar5 * fVar8;
  local_78._0_4_ = fVar8 * fVar6 - fVar7 * fVar4;
  local_78._8_4_ = fVar4 * fVar5 - fVar6 * fVar3;
  local_78._12_4_ = 0;
  local_c8 = *(double **)(param_1 + 0x40);
  uVar2 = FUN_1457bf8e2(local_a8,*(undefined8 *)(param_1 + 0x20),param_1 + 0x10,param_1);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457bf7cf FUN_1457bf7cf body=275 status=ok
// SIG undefined FUN_1457bf7cf(void)

void FUN_1457bf7cf(double *param_1,int param_2,longlong param_3,longlong *param_4,double *param_5,
                  double *param_6,double *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = (longlong)param_2 * 6;
  uVar7 = (ulonglong)*(ushort *)(*param_4 + lVar6);
  dVar3 = param_1[2];
  lVar5 = *(longlong *)(param_3 + 0x28);
  fVar1 = *(float *)(lVar5 + 8 + uVar7 * 0xc);
  dVar4 = param_1[1];
  fVar2 = *(float *)(lVar5 + 4 + uVar7 * 0xc);
  *param_5 = (double)((float)*param_1 * *(float *)(lVar5 + uVar7 * 0xc));
  param_5[1] = (double)((float)dVar4 * fVar2);
  param_5[2] = (double)((float)dVar3 * fVar1);
  uVar7 = (ulonglong)*(ushort *)(*param_4 + 2 + lVar6);
  dVar3 = param_1[2];
  lVar5 = *(longlong *)(param_3 + 0x28);
  fVar1 = *(float *)(lVar5 + 8 + uVar7 * 0xc);
  dVar4 = param_1[1];
  fVar2 = *(float *)(lVar5 + 4 + uVar7 * 0xc);
  *param_6 = (double)((float)*param_1 * *(float *)(lVar5 + uVar7 * 0xc));
  param_6[1] = (double)((float)dVar4 * fVar2);
  param_6[2] = (double)((float)dVar3 * fVar1);
  uVar7 = (ulonglong)*(ushort *)(*param_4 + 4 + lVar6);
  lVar5 = *(longlong *)(param_3 + 0x28);
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  fVar1 = *(float *)(lVar5 + 8 + uVar7 * 0xc);
  fVar2 = *(float *)(lVar5 + 4 + uVar7 * 0xc);
  *param_7 = (double)((float)*param_1 * *(float *)(lVar5 + uVar7 * 0xc));
  param_7[1] = (double)((float)dVar4 * fVar2);
  param_7[2] = (double)((float)dVar3 * fVar1);
  return;
}



// FUNCTION 1457bf8e2 FUN_1457bf8e2 body=373 status=ok
// SIG undefined FUN_1457bf8e2(void)

void FUN_1457bf8e2(undefined1 (*param_1) [16],longlong param_2,undefined8 param_3,undefined8 param_4
                  ,undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 (*local_50) [16];
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  float local_30;
  undefined4 local_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar1 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar2 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar3 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar1 <= dVar2 || dVar1 <= dVar3) && (dVar1 = dVar3, dVar3 <= dVar2)) {
    dVar1 = dVar2;
  }
  auVar5 = minps(*param_1,param_1[1]);
  auVar6 = minps(auVar5,param_1[2]);
  auVar5 = maxps(*param_1,param_1[1]);
  auVar5 = maxps(auVar5,param_1[2]);
  dVar4 = (double)auVar5._0_4_ - (double)auVar6._0_4_;
  dVar7 = (double)auVar5._4_4_ - (double)auVar6._4_4_;
  dVar2 = (double)auVar5._8_4_ - (double)auVar6._8_4_;
  dVar3 = dVar7;
  if (dVar7 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar3 = (double)((-(ulonglong)(dVar2 < dVar4) & (ulonglong)dVar4 |
                   ~-(ulonglong)(dVar2 < dVar4) & (ulonglong)dVar3) & -(ulonglong)(dVar7 < dVar4) |
                  ~-(ulonglong)(dVar7 < dVar4) & (ulonglong)dVar3);
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  local_30 = (float)*(double *)(param_2 + 0x10);
  local_2c = 0;
  local_28 = FUN_14172546a;
  local_48 = 0;
  local_40 = FUN_14014b546;
  local_58 = param_6;
  local_60 = param_5;
  local_68 = param_4;
  local_50 = param_1;
  local_38 = param_2;
  FUN_144946907(&local_50,&local_38,dVar3,param_3);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457bfa58 FUN_1457bfa58 body=618 status=ok
// SIG undefined FUN_1457bfa58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1457bfa58(longlong *param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = *param_6;
  uStack_78 = param_6[1];
  local_70 = param_6[2];
  local_68 = param_5;
  local_60 = param_7;
  local_58 = 0;
  fVar11 = (float)param_3[2];
  fVar13 = (float)param_3[3];
  fVar15 = (float)*param_3;
  fVar16 = (float)param_3[1];
  fVar12 = fVar15 * fVar15 + fVar16 * fVar16;
  fVar14 = fVar11 * fVar11 + fVar13 * fVar13;
  auVar17._0_4_ = fVar14 + fVar12;
  auVar17._4_4_ = fVar14 + fVar12;
  auVar17._8_4_ = fVar12 + fVar14;
  auVar17._12_4_ = fVar12 + fVar14;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  auVar19._0_4_ = auVar18._0_4_ * fVar15;
  auVar19._4_4_ = auVar18._4_4_ * fVar16;
  auVar19._8_4_ = auVar18._8_4_ * fVar11;
  auVar19._12_4_ = auVar18._12_4_ * fVar13;
  auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  local_a8 = blendvps(_DAT_149932320,auVar19,auVar18);
  local_98._0_4_ = (float)param_3[4];
  local_98._4_4_ = (float)param_3[5];
  local_98._8_4_ = (float)param_3[6];
  local_98._12_4_ = 0;
  local_88 = param_4;
  if ((int)param_1[1] == 0) {
    uVar6 = 0;
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_14481578e(&local_b8,0x10);
    uVar6 = uStack_b0;
    lVar7 = (longlong)(int)uStack_b0;
    uVar5 = (int)uStack_b0 + 1;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
    if (uStack_b0._4_4_ < uVar5) {
      FUN_1446f48e2(&local_b8,uVar6 & 0xffffffff);
    }
    *(undefined4 *)(local_b8 + lVar7 * 4) = 0;
    uVar6 = uStack_b0 & 0xffffffff;
    if ((int)uStack_b0 != 0) {
      do {
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uVar6 + -1);
        lVar7 = (longlong)*(int *)(local_b8 + -4 + (longlong)(int)uVar6 * 4) * 0x50 + *param_1;
        lVar10 = 0;
        bVar3 = true;
        do {
          bVar9 = bVar3;
          iVar1 = *(int *)(lVar7 + 0x40 + lVar10 * 4);
          uVar8 = (ulonglong)iVar1;
          if ((uVar8 != 0xffffffffffffffff) &&
             (cVar4 = FUN_1402e78fc(param_2,lVar10 * 0x20 + lVar7), uVar6 = uStack_b0, cVar4 != '\0'
             )) {
            iVar2 = *(int *)(lVar7 + 0x48 + lVar10 * 4);
            if (iVar2 == 0) {
              lVar10 = (longlong)(int)uStack_b0;
              uVar5 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
              if (uStack_b0._4_4_ < uVar5) {
                FUN_1446f48e2(&local_b8,uVar6 & 0xffffffff);
              }
              *(int *)(local_b8 + lVar10 * 4) = iVar1;
            }
            else if (0 < iVar2) {
              lVar10 = uVar8 << 5;
              do {
                cVar4 = FUN_1402e78fc(param_2,param_1[2] + lVar10);
                if ((cVar4 != '\0') &&
                   (uVar6 = FUN_1457bf636(local_a8,uVar8 & 0xffffffff), (char)uVar6 == '\0'))
                goto LAB_1457bfc56;
                uVar8 = uVar8 + 1;
                lVar10 = lVar10 + 0x20;
              } while ((longlong)uVar8 < (longlong)(iVar2 + iVar1));
            }
          }
          lVar10 = 1;
          bVar3 = false;
        } while (bVar9);
        uVar6 = uStack_b0 & 0xffffffff;
      } while ((int)uStack_b0 != 0);
    }
LAB_1457bfc56:
    if (local_b8 != 0) {
      uVar6 = FUN_1400020a8();
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffffffffff01;
}



// FUNCTION 1457bfcc4 FUN_1457bfcc4 body=113 status=ok
// SIG undefined FUN_1457bfcc4(void)

void FUN_1457bfcc4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 1457bfd36 FUN_1457bfd36 body=113 status=ok
// SIG undefined FUN_1457bfd36(void)

void FUN_1457bfd36(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}


