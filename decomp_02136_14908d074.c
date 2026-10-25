// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14908d074 FUN_14908d074 body=120 status=ok
// SIG undefined FUN_14908d074(void)

void FUN_14908d074(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (-1 < param_2 && param_1 != 0) {
    iVar1 = DAT_14cbf9358;
    if (DAT_14cbf9358 < 1) {
      iVar1 = 0;
    }
    fVar3 = (float)param_2;
    if ((float)param_2 <= (float)iVar1) {
      fVar3 = (float)iVar1;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x3a0) + 0x418) + -1;
    if ((float)iVar1 <= fVar3) {
      fVar3 = (float)iVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    iVar2 = (int)ROUND(fVar3 + fVar3 + -0.5) >> 1;
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    FUN_14442bf1a(0,iVar2,DAT_14ca85550);
    return;
  }
  return;
}



// FUNCTION 14908d0f0 FUN_14908d0f0 body=7 status=ok
// SIG undefined FUN_14908d0f0(void)

int FUN_14908d0f0(int param_1)

{
  return (param_1 + 4) * (param_1 + 4);
}



// FUNCTION 14908d0f7 FUN_14908d0f7 body=505 status=ok
// SIG undefined FUN_14908d0f7(void)

undefined8
FUN_14908d0f7(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4,uint *param_5,
             undefined8 param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  int iVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_99;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < DAT_14cbf95a8) {
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 8;
  }
  iVar8 = param_5[1] * *param_5;
  if (iVar8 == 0) {
    puVar2 = (undefined8 *)*param_3;
    if (puVar2 != (undefined8 *)0x0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    uVar6 = 0;
  }
  else {
    local_99 = param_4;
    lVar5 = FUN_140fc05d0(param_2,1);
    local_a8 = (undefined8 *)&local_89;
    local_89 = 1;
    local_98 = param_6;
    uStack_80 = param_5[2];
    uStack_7c = param_5[3];
    local_78 = *(undefined ****)(param_5 + 4);
    uVar3 = *param_5;
    if (DAT_14ca84e48 <= *param_5) {
      uVar3 = DAT_14ca84e48;
    }
    uVar4 = DAT_14ca84e48;
    if (param_5[1] < DAT_14ca84e48) {
      uVar4 = param_5[1];
    }
    local_88 = (undefined1 *)CONCAT44(uVar4 + (uVar4 == 0),uVar3 + (uVar3 == 0));
    uVar6 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_98,&local_88);
    local_98 = uVar6;
    if (lVar5 != 0) {
      if (DAT_14cbf95a8 < 1) {
        local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
        FUN_1447759b4(param_1,uVar6,lVar5,iVar8);
        *(undefined1 *)(param_2 + 0x13) = 0;
        if ((*(byte *)(param_2 + 0x14) & 8) != 0) {
          FUN_1400ea36e(param_2,param_2);
        }
      }
      else {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14baaa060;
        local_88 = &LAB_14443971a;
        local_a8 = &local_88;
        local_60 = param_2;
        FUN_1480ae9e8(param_1,uVar6,lVar5,iVar8);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar7 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar7 = &local_68;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
    }
    FUN_1444348ec(param_1,&local_98,param_3,local_99);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908d2f2 FUN_14908d2f2 body=42 status=ok
// SIG undefined FUN_14908d2f2(void)

void FUN_14908d2f2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14908d324 FUN_14908d324 body=96 status=ok
// SIG undefined FUN_14908d324(void)

undefined8 FUN_14908d324(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e68f9a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa018,1);
  return uVar3;
}



// FUNCTION 14908d384 FUN_14908d384 body=52 status=ok
// SIG undefined FUN_14908d384(void)

void FUN_14908d384(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14908d3b8 FUN_14908d3b8 body=245 status=ok
// SIG undefined FUN_14908d3b8(void)

undefined8 FUN_14908d3b8(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    *param_3 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar5 = (uint)(param_2 >> 2) & 0x3fffffff;
    local_58 = &local_29;
    local_29 = 1;
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_48 = 0x10119;
    if (DAT_14ca84e48 <= uVar5) {
      uVar5 = DAT_14ca84e48;
    }
    local_40 = 0;
    local_50 = CONCAT44(uVar5 + (uVar5 == 0),uVar4 + (uVar4 == 0));
    local_38 = param_4;
    uVar3 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_38,&local_50);
    local_50 = uVar3;
    FUN_1444348ec(param_1,&local_50,param_3,0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908d4ae FUN_14908d4ae body=219 status=ok
// SIG undefined FUN_14908d4ae(void)

void FUN_14908d4ae(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  wchar_t *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0 && param_3 != 0) {
    local_58 = &local_21;
    local_21 = 1;
    local_30 = L"Hair.Strands_DebugAttributeBuffer";
    uVar2 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar2 = DAT_14ca84e48;
    }
    local_40 = 0x10119;
    uVar1 = param_3 >> 2;
    if (DAT_14ca84e48 <= param_3 >> 2) {
      uVar1 = DAT_14ca84e48;
    }
    local_38 = 0;
    local_48 = CONCAT44(uVar1 + (uVar1 == 0),uVar2 + (uVar2 == 0));
    local_48 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_30,&local_48);
    FUN_1444348ec(param_1,&local_48,param_2,0x1c);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908d58a FUN_14908d58a body=207 status=ok
// SIG undefined FUN_14908d58a(void)

void FUN_14908d58a(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  bVar1 = *(byte *)((longlong)param_1 + 0x11);
  if (bVar1 == 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
    bVar1 = *(byte *)((longlong)param_1 + 0x11);
  }
  if ((((bVar1 & 1) == 0) && (*(char *)((longlong)param_1 + 0x12) != '\x01')) &&
     (DAT_14ca84e78 == '\0')) {
    (**(code **)(*param_1 + 0x50))(param_1,0x3fffff,0xffffff);
    if ((char)param_1[2] == '\x01') {
      FUN_1407779ba(local_688,&DAT_14ca85100);
      (**(code **)(*param_1 + 0x30))(param_1,local_688,0x3fffff,0xffffff);
      FUN_140779360(local_688);
      FUN_140778010(local_688);
    }
    else {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908d65a FUN_14908d65a body=24 status=ok
// SIG undefined FUN_14908d65a(void)

void FUN_14908d65a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x48))();
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  return;
}



// FUNCTION 14908d67c FUN_14908d67c body=690 status=ok
// SIG undefined FUN_14908d67c(void)

void FUN_14908d67c(longlong *param_1,longlong param_2,char param_3,ulonglong *param_4,uint param_5,
                  undefined4 param_6,char param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar3 = *(byte *)((longlong)param_1 + 0x11);
  if (param_3 == '\x01') {
    if (bVar3 == 0) {
      FUN_14006bf18(param_1,*(undefined8 *)(param_2 + 0x18));
      bVar3 = *(byte *)((longlong)param_1 + 0x11);
    }
    if ((bVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,param_2,param_5,param_6);
    }
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
    *(uint *)(param_1 + 9) = param_5;
  }
  else {
    if ((bVar3 != 0) && (param_5 <= *(uint *)(param_1 + 9))) {
      uVar8 = 2;
      if ((param_7 != '\0') && (0 < DAT_14cbf93b8)) {
        uVar7 = 0x8000;
        if (DAT_14c7649f4 < 0x8000) {
          uVar7 = DAT_14c7649f4;
        }
        uVar7 = uVar7 + (uVar7 == 0);
        uVar5 = 2;
        if (2 < (int)DAT_14c7649f8) {
          uVar5 = DAT_14c7649f8;
        }
        if (uVar5 <= ((*(uint *)(param_1 + 9) + uVar7) - 1) / uVar7 -
                     ((param_5 + uVar7) - 1) / uVar7) {
          plVar1 = param_1 + 4;
          cVar4 = thunk_FUN_1462727b8(plVar1);
          if (cVar4 != '\0') {
            *(uint *)(param_1 + 7) = param_5;
            *(undefined4 *)((longlong)param_1 + 0x3c) = param_6;
            lVar6 = (**(code **)(*param_1 + 0x60))(param_1);
            if (lVar6 != 0) {
              FUN_149097e34(lVar6,plVar1);
            }
            (**(code **)(*param_1 + 0x30))(param_1,param_2,param_5,param_6);
            *(int *)(param_1 + 9) = (int)param_1[7];
            local_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            local_88 = 0;
            uStack_80 = 0;
            uStack_68 = 0;
            uStack_64 = 0;
            FUN_144aff862(&local_88);
            uStack_80 = 0;
            local_78 = 0;
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            uStack_64 = CONCAT31(uStack_64._1_3_,1);
            FUN_144aa1acc(plVar1,&local_88);
            FUN_149095382(param_1 + 5,&uStack_80);
            param_1[7] = CONCAT44(uStack_6c,uStack_70);
            *(ulonglong *)((longlong)param_1 + 0x3d) =
                 CONCAT17((undefined1)uStack_64,CONCAT43(uStack_68,uStack_6c._1_3_));
            FUN_149073728(&local_88);
          }
        }
      }
      goto LAB_14908d6f8;
    }
    cVar4 = (**(code **)(*param_1 + 0x50))(param_1,param_5,param_6);
    uVar8 = 1;
    if (cVar4 == '\0') goto LAB_14908d6f8;
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      FUN_14006bf18(param_1,*(undefined8 *)(param_2 + 0x18));
    }
    (**(code **)(*param_1 + 0x30))
              (param_1,param_2,(int)param_1[7],*(undefined4 *)((longlong)param_1 + 0x3c));
    *(undefined1 *)((longlong)param_1 + 0x11) = 1;
    *(int *)(param_1 + 9) = (int)param_1[7];
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    FUN_144aff862(&local_88);
    uStack_80 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = CONCAT31(uStack_64._1_3_,1);
    FUN_144aa1acc(param_1 + 4,&local_88);
    FUN_149095382(param_1 + 5,&uStack_80);
    param_1[7] = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)((longlong)param_1 + 0x3d) =
         CONCAT17((undefined1)uStack_64,CONCAT43(uStack_68,uStack_6c._1_3_));
    FUN_149073728(&local_88);
  }
  uVar8 = 2;
LAB_14908d6f8:
  uVar2 = *param_4;
  *param_4 = uVar8 | uVar2;
  uVar5 = (uint)(uVar2 >> 0x20);
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar5 < *(uint *)(param_1 + 9)) {
    uVar7 = uVar5;
  }
  *(uint *)((longlong)param_4 + 4) = uVar7;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908d930 FUN_14908d930 body=655 status=ok
// SIG undefined FUN_14908d930(void)

void FUN_14908d930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Dst;
  uint uVar7;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined8 *local_a0;
  longlong local_90;
  uint local_84 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x18) + 8);
  uVar7 = uVar4 << 2;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FHairCardIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84[1] = 4;
  local_84[2] = 0x8001;
  local_84[0] = uVar7;
  if ((uVar4 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_78,0x8001,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != &local_90) {
    lVar5 = *plVar1;
    *plVar1 = local_90;
    local_90 = 0;
    if (lVar5 == 0) goto LAB_14908da84;
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar2 = (uint *)(local_90 + 8);
    uVar4 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14908da84:
  lVar5 = *plVar1;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = uVar7;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  memcpy(_Dst,(void *)**(undefined8 **)(param_1 + 0x18),(ulonglong)uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar6);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar6);
  }
  FUN_1432232f4(param_1,local_84);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908dbc0 FUN_14908dbc0 body=376 status=ok
// SIG undefined FUN_14908dbc0(void)

undefined8 *
FUN_14908dbc0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa5d20;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_14742fc38(param_1 + 10);
  param_1[10] = &PTR_FUN_14baa9850;
  FUN_14322417a(param_1 + 0xf);
  param_1[0xf] = &PTR_FUN_14baa5cc0;
  param_1[0x12] = param_2 + 0x60;
  FUN_1414c1412(param_1 + 0xf,param_4);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_14742fc38(param_1 + 0x14);
  param_1[0x14] = &PTR_FUN_14baa9850;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_14742fc38(param_1 + 0x19);
  param_1[0x19] = &PTR_FUN_14baa9850;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  FUN_14742fc38(param_1 + 0x1e);
  param_1[0x1e] = &PTR_FUN_14baa9850;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = param_2;
  return param_1;
}



// FUNCTION 14908dd38 FUN_14908dd38 body=126 status=ok
// SIG undefined FUN_14908dd38(void)

void FUN_14908dd38(longlong param_1)

{
  FUN_144435506(*(longlong *)(param_1 + 0x140) + 0x20,param_1 + 0x50,
                L"Hair.CardsRest_PositionBuffer");
  FUN_144435999(*(longlong *)(param_1 + 0x140) + 0x30,param_1 + 0xa0,L"Hair.CardsRest_NormalBuffer")
  ;
  FUN_144435e2e(*(longlong *)(param_1 + 0x140) + 0x40,param_1 + 200,L"Hair.CardsRest_UVBuffer");
  FUN_1444362c1(*(longlong *)(param_1 + 0x140) + 0x50,param_1 + 0xf0);
  return;
}



// FUNCTION 14908ddb8 FUN_14908ddb8 body=95 status=ok
// SIG undefined FUN_14908ddb8(void)

void FUN_14908ddb8(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x78,param_2);
  FUN_14006bf18(param_1 + 0x50,param_2);
  FUN_14006bf18(param_1 + 0xa0,param_2);
  FUN_14006bf18(param_1 + 200,param_2);
  FUN_14006bf18(param_1 + 0xf0,param_2);
  return;
}



// FUNCTION 14908de18 FUN_14908de18 body=75 status=ok
// SIG undefined FUN_14908de18(void)

void FUN_14908de18(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x78);
  FUN_144725486(param_1 + 0x50);
  FUN_144725486(param_1 + 0xa0);
  FUN_144725486(param_1 + 200);
  FUN_144725486(param_1 + 0xf0);
  return;
}



// FUNCTION 14908de64 FUN_14908de64 body=165 status=ok
// SIG undefined FUN_14908de64(void)

undefined8 *
FUN_14908de64(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_5;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa5e70;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x16] = param_2;
  *(undefined1 *)(param_1 + 0x17) = param_3;
  return param_1;
}



// FUNCTION 14908df0a FUN_14908df0a body=414 status=ok
// SIG undefined FUN_14908df0a(void)

void FUN_14908df0a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x50;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_14443675d(param_2,*(longlong *)(param_1 + 0xb0) + 0x20,lVar1,
                  L"Hair.CardsDeformedPosition(Current)");
    FUN_14443675d(param_2,*(longlong *)(param_1 + 0xb0) + 0x20,param_1 + 0x70,
                  L"Hair.CardsDeformedPosition(Previous)");
    FUN_14443682a(param_2,*(longlong *)(param_1 + 0xb0) + 0x30,param_1 + 0x90);
  }
  else {
    FUN_14908e0a9(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x28),lVar1,
                  L"Hair.CardsDeformedPosition(Current)");
    FUN_14908e0a9(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x28),param_1 + 0x70,
                  L"Hair.CardsDeformedPosition(Previous)");
    FUN_14908e207(param_2,*(int *)(*(longlong *)(param_1 + 0xb0) + 0x28) * 2,param_1 + 0x90);
    local_58 = 0;
    FUN_14716cfd3(local_50,param_2,lVar1,1);
    FUN_14178e91e(param_2,local_50[0],0x70,1);
    local_58 = 0;
    FUN_14716cfd3(local_50,param_2,param_1 + 0x70,1);
    FUN_14178e91e(param_2,local_50[0],0x70,1);
  }
  local_58 = 0;
  FUN_14716cfd3(local_50,param_2,param_1 + 0x90,1);
  FUN_14178e91e(param_2,local_50[0],0x70,1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908e0a9 FUN_14908e0a9 body=322 status=ok
// SIG undefined FUN_14908e0a9(void)

void FUN_14908e0a9(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0xfffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_48 = param_4;
    local_58 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,1);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 8,&local_60);
    FUN_143212081(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908e207 FUN_14908e207 body=329 status=ok
// SIG undefined FUN_14908e207(void)

void FUN_14908e207(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0x3fffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    local_48 = L"Hair.CardsDeformedNormal";
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_58 = (wchar_t *)FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,0x3d);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 4,&local_60);
    FUN_143212081(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,0x3d);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908e36c FUN_14908e36c body=46 status=ok
// SIG undefined FUN_14908e36c(void)

void FUN_14908e36c(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  FUN_14716cf4c(param_1 + 0x90);
  return;
}



// FUNCTION 14908e39a FUN_14908e39a body=336 status=ok
// SIG undefined FUN_14908e39a(void)

undefined8 *
FUN_14908e39a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa5fa0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_14742fc38(param_1 + 10);
  param_1[10] = &PTR_FUN_14baa9850;
  FUN_14322417a(param_1 + 0xf);
  param_1[0xf] = &PTR_FUN_14baa5cc0;
  param_1[0x12] = param_2 + 0x30;
  FUN_1414c1412(param_1 + 0xf,param_4);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_14742fc38(param_1 + 0x14);
  param_1[0x14] = &PTR_FUN_14baa9850;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_14742fc38(param_1 + 0x19);
  param_1[0x19] = &PTR_FUN_14baa9850;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = param_2;
  return param_1;
}



// FUNCTION 14908e4ea FUN_14908e4ea body=99 status=ok
// SIG undefined FUN_14908e4ea(void)

void FUN_14908e4ea(longlong param_1)

{
  FUN_144435506(*(undefined8 *)(param_1 + 0x118),param_1 + 0x50,L"Hair.MeshesRest_Positions");
  FUN_144435999(*(longlong *)(param_1 + 0x118) + 0x10,param_1 + 0xa0,L"Hair.MeshesRest_Normals");
  FUN_144435e2e(*(longlong *)(param_1 + 0x118) + 0x20,param_1 + 200,L"Hair.MeshesRest_UVs");
  return;
}



// FUNCTION 14908e550 FUN_14908e550 body=80 status=ok
// SIG undefined FUN_14908e550(void)

void FUN_14908e550(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x78,param_2);
  FUN_14006bf18(param_1 + 0x50,param_2);
  FUN_14006bf18(param_1 + 0xa0,param_2);
  FUN_14006bf18(param_1 + 200,param_2);
  return;
}



// FUNCTION 14908e5a0 FUN_14908e5a0 body=63 status=ok
// SIG undefined FUN_14908e5a0(void)

void FUN_14908e5a0(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x78);
  FUN_144725486(param_1 + 0x50);
  FUN_144725486(param_1 + 0xa0);
  FUN_144725486(param_1 + 200);
  return;
}



// FUNCTION 14908e5e0 FUN_14908e5e0 body=161 status=ok
// SIG undefined FUN_14908e5e0(void)

undefined8 *
FUN_14908e5e0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_5;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa60a0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = param_2;
  *(undefined1 *)(param_1 + 0x13) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  return param_1;
}



// FUNCTION 14908e682 FUN_14908e682 body=138 status=ok
// SIG undefined FUN_14908e682(void)

void FUN_14908e682(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x98) == '\x01') {
    FUN_14443675d(param_2,*(longlong *)(param_1 + 0x90),param_1 + 0x50,
                  L"Hair.MeshesDeformed(Current)");
    FUN_14443675d(param_2,*(undefined8 *)(param_1 + 0x90),param_1 + 0x70,
                  L"Hair.MeshesDeformed(Previous)");
    return;
  }
  FUN_14908e0a9(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8),param_1 + 0x50,
                L"Hair.MeshesDeformed(Current)");
  FUN_14908e0a9(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x90) + 8),param_1 + 0x70,
                L"Hair.MeshesDeformed(Previous)");
  return;
}



// FUNCTION 14908e70c FUN_14908e70c body=34 status=ok
// SIG undefined FUN_14908e70c(void)

void FUN_14908e70c(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  return;
}



// FUNCTION 14908e72e FUN_14908e72e body=102 status=ok
// SIG undefined FUN_14908e72e(void)

void FUN_14908e72e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0x20;
  cVar2 = thunk_FUN_1462727b8(lVar1);
  if (cVar2 != '\0') {
    FUN_149098154(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x130),0,0,0,param_1 + 0x14,0);
  }
  FUN_1490980c6(lVar1);
  return;
}



// FUNCTION 14908e794 FUN_14908e794 body=1446 status=ok
// SIG undefined FUN_14908e794(void)

void FUN_14908e794(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  float *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined7 local_ab;
  undefined1 uStack_a4;
  undefined7 uStack_a3;
  undefined8 local_9c;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined3 local_88;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined4 local_7d;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar10 = *(longlong *)(param_1 + 0x130);
  iVar7 = *(int *)(lVar10 + 0xc);
  if ((*(byte *)(lVar10 + 0x60) & 4) == 0) {
    local_178 = &local_d0;
    local_d0 = 0;
    local_cc = DAT_14c846330;
    local_c4 = DAT_14c846338;
    local_c0 = DAT_14c846330;
    local_b8 = DAT_14c846338;
    local_b4 = 0;
    pwVar12 = L"Hair.StrandsRest_PositionBuffer(Cards)";
    if (*(char *)(param_1 + 0x138) == '\x01') {
      pwVar12 = L"Hair.StrandsRest_PositionBuffer(Strands)";
    }
    pwVar11 = L"Hair.StrandsRest_PositionBuffer(Guides)";
    if (*(char *)(param_1 + 0x138) != '\0') {
      pwVar11 = pwVar12;
    }
    lVar10 = lVar10 + 0xf0;
  }
  else {
    local_7d = *(undefined4 *)(lVar10 + 0xb8);
    uVar8 = *(undefined8 *)(lVar10 + 0xb0);
    uStack_85 = (undefined4)uVar8;
    uStack_81 = (undefined4)((ulonglong)uVar8 >> 0x20);
    lVar9 = *(longlong *)(lVar10 + 0x158);
    if (lVar9 == 0) {
      local_90 = 0;
      local_8c = 0;
    }
    else {
      local_8c = (*(uint *)(lVar9 + 0x10) >> 1 & 0xfffffff8) * 3;
      local_90 = (*(uint *)(lVar9 + 0x18) >> 1 & 0xfffffff8) * 3;
    }
    local_178 = (undefined4 *)&local_ac;
    local_ac = 1;
    local_ab = CONCAT43(uStack_85,local_88);
    uStack_a4 = (undefined1)((ulonglong)uVar8 >> 0x20);
    uStack_a3 = (undefined7)(CONCAT44(local_7d,uStack_81) >> 8);
    local_9c = *(undefined8 *)(lVar10 + 0xbc);
    local_94 = *(undefined4 *)(lVar10 + 0xc4);
    pwVar12 = L"Hair.StrandsRest_PositionBuffer(Cards)";
    if (*(char *)(param_1 + 0x138) == '\x01') {
      pwVar12 = L"Hair.StrandsRest_PositionBuffer(Strands)";
    }
    pwVar11 = L"Hair.StrandsRest_PositionBuffer(Guides)";
    if (*(char *)(param_1 + 0x138) != '\0') {
      pwVar11 = pwVar12;
    }
    lVar10 = lVar10 + 0x128;
  }
  FUN_14443495b(param_2,lVar10,param_1 + 0x50,pwVar11);
  local_178 = &local_f4;
  local_f4 = 0;
  local_f0 = DAT_14c846330;
  local_e8 = DAT_14c846338;
  local_e4 = DAT_14c846330;
  local_dc = DAT_14c846338;
  local_d8 = 0;
  pwVar12 = L"Hair.StrandsRest_CurveAttributeBuffer(Cards)";
  if (*(char *)(param_1 + 0x138) == '\x01') {
    pwVar12 = L"Hair.StrandsRest_CurveAttributeBuffer(Strands)";
  }
  pwVar11 = L"Hair.StrandsRest_CurveAttributeBuffer(Guides)";
  if (*(char *)(param_1 + 0x138) != '\0') {
    pwVar11 = pwVar12;
  }
  FUN_14443495b(param_2,*(longlong *)(param_1 + 0x130) + 0x160,param_1 + 0xd0,pwVar11);
  if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0x60) & 2) == 0) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      local_128 = (float *)0x0;
      uStack_120 = 1;
      FUN_1447808da(&local_128,0);
      *local_128 = 0.0;
      pwVar12 = L"Hair.StrandsRest_PointAttributeBuffer(Cards)";
      if (*(char *)(param_1 + 0x138) == '\x01') {
        pwVar12 = L"Hair.StrandsRest_PointAttributeBuffer(Strands)";
      }
      pwVar11 = L"Hair.StrandsRest_PointAttributeBuffer(Guides)";
      if (*(char *)(param_1 + 0x138) != '\0') {
        pwVar11 = pwVar12;
      }
      FUN_14908ed3b(param_2,&local_128,param_1 + 0xb0,pwVar11);
      local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_88,param_2,param_1 + 0xb0,1);
      FUN_14178e91e(param_2,CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,local_88)),0x70,1);
      if (local_128 != (float *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_178 = &local_118;
    local_118 = 0;
    local_114 = DAT_14c846330;
    local_10c = DAT_14c846338;
    local_108 = DAT_14c846330;
    local_100 = DAT_14c846338;
    local_fc = 0;
    pwVar12 = L"Hair.StrandsRest_PointAttributeBuffer(Cards)";
    if (*(char *)(param_1 + 0x138) == '\x01') {
      pwVar12 = L"Hair.StrandsRest_PointAttributeBuffer(Strands)";
    }
    pwVar11 = L"Hair.StrandsRest_PointAttributeBuffer(Guides)";
    if (*(char *)(param_1 + 0x138) != '\0') {
      pwVar11 = pwVar12;
    }
    FUN_14443495b(param_2,*(longlong *)(param_1 + 0x130) + 0x198,param_1 + 0xb0,pwVar11);
  }
  local_178 = &local_14c;
  local_14c = 0;
  local_148 = DAT_14c846330;
  local_140 = DAT_14c846338;
  local_13c = DAT_14c846330;
  local_134 = DAT_14c846338;
  local_130 = 0;
  pwVar12 = L"Hair.StrandsRest_CurveBuffer(Cards)";
  if (*(char *)(param_1 + 0x138) == '\x01') {
    pwVar12 = L"Hair.StrandsRest_CurveBuffer(Strands)";
  }
  pwVar11 = L"Hair.StrandsRest_CurveBuffer(Guides)";
  if (*(char *)(param_1 + 0x138) != '\0') {
    pwVar11 = pwVar12;
  }
  FUN_14443495b(param_2,*(longlong *)(param_1 + 0x130) + 0x208,param_1 + 0x110,pwVar11);
  local_178 = &local_170;
  local_170 = 0;
  local_16c = DAT_14c846330;
  local_164 = DAT_14c846338;
  local_160 = DAT_14c846330;
  local_158 = DAT_14c846338;
  local_154 = 0;
  pwVar12 = L"Hair.StrandsRest_PointToCurveBuffer(Cards)";
  if (*(char *)(param_1 + 0x138) == '\x01') {
    pwVar12 = L"Hair.StrandsRest_PointToCurveBuffer(Strands)";
  }
  pwVar11 = L"Hair.StrandsRest_PointToCurveBuffer(Guides)";
  if (*(char *)(param_1 + 0x138) != '\0') {
    pwVar11 = pwVar12;
  }
  FUN_14443495b(param_2,*(longlong *)(param_1 + 0x130) + 0x1d0,param_1 + 0xf0,pwVar11);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14908ee5b(param_2,iVar7 * 2,param_1 + 0x90,L"Hair.StrandsRest_TangentBuffer");
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_128 = (float *)0x0;
    lVar10 = *(longlong *)(param_1 + 0x130);
    dVar1 = *(double *)(lVar10 + 0x38);
    dVar2 = *(double *)(lVar10 + 0x50);
    dVar3 = *(double *)(lVar10 + 0x28);
    dVar4 = *(double *)(lVar10 + 0x30);
    dVar5 = *(double *)(lVar10 + 0x48);
    dVar6 = *(double *)(lVar10 + 0x40);
    uStack_120 = 1;
    FUN_1449e2712(&local_128,0);
    *local_128 = (float)((dVar3 + dVar6) * 0.5);
    local_128[1] = (float)((dVar4 + dVar5) * 0.5);
    local_128[2] = (float)((dVar1 + dVar2) * 0.5);
    local_128[3] = 1.0;
    pwVar12 = L"Hair.StrandsRest_PositionOffsetBuffer(Cards)";
    if (*(char *)(param_1 + 0x138) == '\x01') {
      pwVar12 = L"Hair.StrandsRest_PositionOffsetBuffer(Strands)";
    }
    pwVar11 = L"Hair.StrandsRest_PositionOffsetBuffer(Guides)";
    if (*(char *)(param_1 + 0x138) != '\0') {
      pwVar11 = pwVar12;
    }
    FUN_14908efb9(param_2,&local_128,param_1 + 0x70,pwVar11);
    local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffffffffff00);
    FUN_14716cfd3(&local_88,param_2,param_1 + 0x70,1);
    FUN_14178e91e(param_2,CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,local_88)),0x70,1);
    if (local_128 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908ed3b FUN_14908ed3b body=287 status=ok
// SIG undefined FUN_14908ed3b(void)

void FUN_14908ed3b(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(uint *)(param_2 + 1);
  iVar2 = uVar5 * 4;
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != (undefined8 *)0x0) {
    *param_3 = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (iVar2 != 0) {
    uVar5 = uVar5 & 0x3fffffff;
    local_68 = &local_39;
    local_39 = 1;
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_58 = 0x10111;
    if (DAT_14ca84e48 <= uVar5) {
      uVar5 = DAT_14ca84e48;
    }
    local_50 = 0;
    local_60 = CONCAT44(uVar5 + (uVar5 == 0),uVar4 + (uVar4 == 0));
    local_48 = param_4;
    local_60 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    if (*param_2 != 0) {
      local_68 = (undefined1 *)((ulonglong)local_68 & 0xffffffffffffff00);
      FUN_1447759b4(param_1,local_60,*param_2,iVar2);
    }
    FUN_1444348ec(param_1,&local_60,param_3,0x1c);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908ee5b FUN_14908ee5b body=322 status=ok
// SIG undefined FUN_14908ee5b(void)

void FUN_14908ee5b(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0x3fffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_48 = param_4;
    local_58 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,0x3d);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 8,&local_60);
    FUN_143212081(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,0x3d);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908efb9 FUN_14908efb9 body=174 status=ok
// SIG undefined FUN_14908efb9(void)

void FUN_14908efb9(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_2 + 1);
  if (((longlong)iVar2 & 0xfffffffU) == 0) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  else {
    local_30 = (longlong)iVar2 << 4;
    local_38 = *param_2;
    local_28 = 0;
    local_20 = FUN_144942e63(param_1,param_4,0x10,iVar2);
    FUN_1444348ec(param_1,&local_20,param_3,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908f07c FUN_14908f07c body=248 status=ok
// SIG undefined FUN_14908f07c(void)

longlong *
FUN_14908f07c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if ((lVar1 == 0) || (*(uint *)(lVar1 + 0x14) >> 1 < param_5)) {
    FUN_14908ee5b(param_3,param_5 * 2,param_1 + 0x90,L"Hair.StrandsRest_TangentBuffer");
LAB_14908f11e:
    uVar2 = FUN_14716d252(param_3,param_1 + 0x90,0);
    uVar3 = FUN_14716d181(param_3,param_1 + 0x50);
    FUN_1444410eb(param_3,param_4,param_5,0,uVar3,uVar2);
    *(uint *)(param_1 + 0x150) = param_5;
    lVar1 = *(longlong *)(param_1 + 0x90);
    *param_2 = lVar1;
    if (lVar1 == 0) goto LAB_14908f0c7;
  }
  else {
    if (*(uint *)(param_1 + 0x150) < param_5) goto LAB_14908f11e;
    *param_2 = lVar1;
  }
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  UNLOCK();
LAB_14908f0c7:
  lVar1 = *(longlong *)(param_1 + 0x98);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 14908f174 FUN_14908f174 body=103 status=ok
// SIG undefined FUN_14908f174(void)

void FUN_14908f174(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  FUN_14716cf4c(param_1 + 0xd0);
  FUN_14716cf4c(param_1 + 0xb0);
  FUN_14716cf4c(param_1 + 0xf0);
  FUN_14716cf4c(param_1 + 0x90);
  FUN_14716cf4c(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}



// FUNCTION 14908f1ea FUN_14908f1ea body=452 status=ok
// SIG undefined FUN_14908f1ea(void)

undefined8 *
FUN_14908f1ea(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_5;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa6840;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x139) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  param_1[0x2a] = DAT_14c8464e0;
  param_1[0x2b] = uVar5;
  uVar5 = DAT_14c8464e8;
  param_1[0x2d] = DAT_14c8464e0;
  param_1[0x2e] = uVar5;
  param_1[0x2f] = DAT_14c8464f0;
  param_1[0x30] = param_2;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = param_3;
  dVar1 = *(double *)(param_2 + 0x38);
  dVar2 = *(double *)(param_2 + 0x50);
  dVar3 = *(double *)(param_2 + 0x30);
  dVar4 = *(double *)(param_2 + 0x48);
  param_1[0x2a] = (*(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x40)) * 0.5;
  param_1[0x2b] = (dVar3 + dVar4) * 0.5;
  param_1[0x2c] = (dVar1 + dVar2) * 0.5;
  dVar1 = *(double *)(param_2 + 0x38);
  dVar2 = *(double *)(param_2 + 0x50);
  dVar3 = *(double *)(param_2 + 0x30);
  dVar4 = *(double *)(param_2 + 0x48);
  param_1[0x2d] = (*(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x40)) * 0.5;
  param_1[0x2e] = (dVar3 + dVar4) * 0.5;
  param_1[0x2f] = (dVar1 + dVar2) * 0.5;
  return param_1;
}



// FUNCTION 14908f3ae FUN_14908f3ae body=757 status=ok
// SIG undefined FUN_14908f3ae(void)

void FUN_14908f3ae(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  float *local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *(uint *)(*(longlong *)(param_1 + 0x180) + 0xc);
  if (param_4 < uVar7) {
    uVar7 = param_4;
  }
  local_a8 = local_a8 & 0xffffffffffffff00;
  FUN_14716cfd3(&local_98,param_2,param_1 + 0x50,0);
  pfVar8 = local_98;
  local_a8 = local_a8 & 0xffffffffffffff00;
  FUN_14716cfd3(&local_98,param_2,param_1 + 0x70,0);
  pfVar9 = local_98;
  pwVar13 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Cards)";
  if (*(char *)(param_1 + 0x194) == '\x01') {
    pwVar13 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Strands)";
  }
  pwVar14 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Guides)";
  if (*(char *)(param_1 + 0x194) != '\0') {
    pwVar14 = pwVar13;
  }
  lVar11 = FUN_14908d3b8(param_2,*(int *)(*(longlong *)(param_1 + 0x180) + 200) * uVar7,
                         param_1 + 0x50,pwVar14);
  pwVar13 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Cards)";
  if (*(char *)(param_1 + 0x194) == '\x01') {
    pwVar13 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Strands)";
  }
  pwVar14 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Guides)";
  if (*(char *)(param_1 + 0x194) != '\0') {
    pwVar14 = pwVar13;
  }
  uVar12 = FUN_14908d3b8(param_2,*(int *)(*(longlong *)(param_1 + 0x180) + 200) * uVar7,
                         param_1 + 0x70,pwVar14);
  pwVar13 = L"Hair.StrandsDeformed_TangentBuffer(Cards)";
  if (*(char *)(param_1 + 0x194) == '\x01') {
    pwVar13 = L"Hair.StrandsDeformed_TangentBuffer(Strands)";
  }
  pwVar14 = L"Hair.StrandsDeformed_TangentBuffer(Guides)";
  if (*(char *)(param_1 + 0x194) != '\0') {
    pwVar14 = pwVar13;
  }
  FUN_14908ee5b(param_2,uVar7 * 2,param_1 + 0xd0,pwVar14);
  if (pfVar8 != (float *)0x0) {
    uVar10 = *(int *)(lVar11 + 100) * *(int *)(lVar11 + 0x60);
    uVar7 = (int)pfVar8[0x19] * (int)pfVar8[0x18];
    if (uVar10 <= (uint)((int)pfVar8[0x19] * (int)pfVar8[0x18])) {
      uVar7 = uVar10;
    }
    local_a8 = 0;
    local_a0 = (ulonglong)uVar7;
    FUN_143211d72(param_2,lVar11,0,pfVar8);
    local_a8 = 0;
    local_a0 = (ulonglong)uVar7;
    FUN_143211d72(param_2,uVar12,0,pfVar9);
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    local_98 = (float *)0x0;
    lVar11 = *(longlong *)(param_1 + 0x180);
    dVar1 = *(double *)(lVar11 + 0x38);
    dVar2 = *(double *)(lVar11 + 0x50);
    dVar3 = *(double *)(lVar11 + 0x28);
    dVar4 = *(double *)(lVar11 + 0x30);
    dVar5 = *(double *)(lVar11 + 0x48);
    dVar6 = *(double *)(lVar11 + 0x40);
    uStack_90 = 1;
    FUN_1449e2712(&local_98,0);
    *local_98 = (float)((dVar3 + dVar6) * 0.5);
    local_98[1] = (float)((dVar4 + dVar5) * 0.5);
    local_98[2] = (float)((dVar1 + dVar2) * 0.5);
    local_98[3] = 1.0;
    pwVar13 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Cards)";
    if (*(char *)(param_1 + 0x194) == '\x01') {
      pwVar13 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Strands)";
    }
    pwVar14 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Guides)";
    if (*(char *)(param_1 + 0x194) != '\0') {
      pwVar14 = pwVar13;
    }
    FUN_14908efb9(param_2,&local_98,param_1 + 0x90,pwVar14);
    pwVar13 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Cards)";
    if (*(char *)(param_1 + 0x194) == '\x01') {
      pwVar13 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Strands)";
    }
    pwVar14 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Guides)";
    if (*(char *)(param_1 + 0x194) != '\0') {
      pwVar14 = pwVar13;
    }
    FUN_14908efb9(param_2,&local_98,param_1 + 0xb0,pwVar14);
    if (local_98 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908f6a4 FUN_14908f6a4 body=103 status=ok
// SIG undefined FUN_14908f6a4(void)

longlong FUN_14908f6a4(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    pwVar2 = L"Hair.StrandsDeformed_DeformerBuffer(Cards)";
    if (*(char *)(param_1 + 0x194) == '\x01') {
      pwVar2 = L"Hair.StrandsDeformed_DeformerBuffer(Strands)";
    }
    pwVar1 = L"Hair.StrandsDeformed_DeformerBuffer(Guides)";
    if (*(char *)(param_1 + 0x194) != '\0') {
      pwVar1 = pwVar2;
    }
    FUN_14908d3b8(param_2,*(int *)(*(longlong *)(param_1 + 0x180) + 200) *
                          *(int *)(*(longlong *)(param_1 + 0x180) + 0xc),param_1 + 0xf0,pwVar1);
  }
  return param_1 + 0xf0;
}



// FUNCTION 14908f70c FUN_14908f70c body=137 status=ok
// SIG undefined FUN_14908f70c(void)

longlong FUN_14908f70c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if (*(longlong *)(param_1 + 0x130) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x180);
    uVar2 = 0x3fffff;
    if (*(uint *)(lVar1 + 8) < 0x3fffff) {
      uVar2 = *(uint *)(lVar1 + 8);
    }
    pwVar4 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Cards)";
    if (*(char *)(param_1 + 0x194) == '\x01') {
      pwVar4 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Strands)";
    }
    pwVar3 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Guides)";
    if (*(char *)(param_1 + 0x194) != '\0') {
      pwVar3 = pwVar4;
    }
    FUN_14908d3b8(param_2,(((*(uint *)(lVar1 + 0xe4) + uVar2) - 1) / *(uint *)(lVar1 + 0xe4)) *
                          *(int *)(lVar1 + 0xd4),param_1 + 0x130,pwVar3);
  }
  return param_1 + 0x130;
}



// FUNCTION 14908f796 FUN_14908f796 body=167 status=ok
// SIG undefined FUN_14908f796(void)

longlong FUN_14908f796(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  if (((*(longlong *)(param_1 + 0x110) == 0) &&
      (lVar1 = *(longlong *)(param_1 + 0x180), (*(byte *)(lVar1 + 0x60) & 2) != 0)) &&
     (*(char *)(lVar1 + 0x1ac) != '\0' || *(int *)(lVar1 + 0x1a8) != 0)) {
    uVar2 = 0xffffff;
    if (*(uint *)(lVar1 + 0xc) < 0xffffff) {
      uVar2 = *(uint *)(lVar1 + 0xc);
    }
    pwVar4 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Cards)";
    if (*(char *)(param_1 + 0x194) == '\x01') {
      pwVar4 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Strands)";
    }
    pwVar3 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Guides)";
    if (*(char *)(param_1 + 0x194) != '\0') {
      pwVar3 = pwVar4;
    }
    FUN_14908d3b8(param_2,(((*(uint *)(lVar1 + 0xe8) + uVar2) - 1) / *(uint *)(lVar1 + 0xe8)) *
                          *(int *)(lVar1 + 0xd8),param_1 + 0x110,pwVar3);
  }
  return param_1 + 0x110;
}



// FUNCTION 14908f83e FUN_14908f83e body=106 status=ok
// SIG undefined FUN_14908f83e(void)

void FUN_14908f83e(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  FUN_14716cf4c(param_1 + 0xd0);
  FUN_14716cf4c(param_1 + 0xf0);
  FUN_14716cf4c(param_1 + 0x110);
  FUN_14716cf4c(param_1 + 0x130);
  FUN_14716cf4c(param_1 + 0x90);
  FUN_14716cf4c(param_1 + 0xb0);
  return;
}



// FUNCTION 14908f8a8 FUN_14908f8a8 body=146 status=ok
// SIG undefined FUN_14908f8a8(void)

undefined8 *
FUN_14908f8a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR_FUN_14baa7250;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  param_1[0x16] = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 14908f93a FUN_14908f93a body=102 status=ok
// SIG undefined FUN_14908f93a(void)

void FUN_14908f93a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0x20;
  cVar2 = thunk_FUN_1462727b8(lVar1);
  if (cVar2 != '\0') {
    FUN_149098154(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0xb0),0,0,0,param_1 + 0x14,0);
  }
  FUN_1490980c6(lVar1);
  return;
}



// FUNCTION 14908f9a0 FUN_14908f9a0 body=152 status=ok
// SIG undefined FUN_14908f9a0(void)

void FUN_14908f9a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  iVar1 = *(int *)(lVar2 + 0x28);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    FUN_14908fa38(param_2,lVar2 + 0x50,*(undefined4 *)(lVar2 + 0x20),param_1 + 0x50);
    lVar2 = *(longlong *)(param_1 + 0xb0);
  }
  FUN_14908fbc3(param_2,lVar2 + 0x88,*(undefined4 *)(lVar2 + 0x2c),param_1 + 0x70,
                L"Hair.StrandsCluster_CurveToClusterIds");
  FUN_14908fbc3(param_2,*(longlong *)(param_1 + 0xb0) + 0xc0,iVar1 + 7U >> 3,param_1 + 0x90,
                L"Hair.StrandsCluster_PointLOD");
  return;
}



// FUNCTION 14908fa38 FUN_14908fa38 body=394 status=ok
// SIG undefined FUN_14908fa38(void)

void FUN_14908fa38(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  wchar_t *local_70;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_78 = &local_40;
    local_40 = 0x10;
    local_38 = 0x10101;
    local_30 = 0;
    local_70 = L"Hair.StrandsCluster_ClusterInfoBuffer";
    uStack_3c = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0);
  }
  else {
    if (*param_4 == 0) {
      local_48 = 0;
    }
    else {
      local_78 = (undefined4 *)((ulonglong)local_78 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_40,param_1,param_4);
      local_48 = CONCAT44(uStack_3c,local_40);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 0xf;
    uStack_3c = uVar5 >> 4;
    local_40 = 0x10;
    local_38 = 0x10101;
    local_30 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 0xf;
    local_5c = uVar3 >> 4;
    local_60 = 0x10;
    local_58 = 0x10101;
    local_50 = 0;
    if (uVar5 < 0x10) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (0xf < uVar3) {
      local_70 = L"Hair.StrandsCluster_ClusterInfoBuffer";
      local_78 = &local_60;
      local_68 = FUN_1444399a8(param_1,param_2,&local_48,&local_40);
      if (local_68 != 0) {
        FUN_1444348ec(param_1,&local_68,param_4,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908fbc3 FUN_14908fbc3 body=398 status=ok
// SIG undefined FUN_14908fbc3(void)

void FUN_14908fbc3(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0x1c);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908fd52 FUN_14908fd52 body=51 status=ok
// SIG undefined FUN_14908fd52(void)

void FUN_14908fd52(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  FUN_14716cf4c(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14908fd94 FUN_14908fd94 body=204 status=ok
// SIG undefined FUN_14908fd94(void)

undefined8 *
FUN_14908fd94(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_6;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *param_1 = &PTR_FUN_14baa7390;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  *(undefined4 *)(param_1 + 10) = param_4;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 14908fe60 FUN_14908fe60 body=281 status=ok
// SIG undefined FUN_14908fe60(void)

void FUN_14908fe60(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar1 = *(uint *)(param_1 + 0x54);
    if (param_4 < *(uint *)(param_1 + 0x54)) {
      uVar1 = param_4;
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    if (param_3 < *(uint *)(param_1 + 0x58)) {
      uVar2 = param_3;
    }
    FUN_1432232f4(param_1,local_40);
    FUN_14908d3b8(param_2,uVar2 << 2,param_1 + 0xa0,L"Hair.Cluster_CulledCurveBuffer");
    FUN_1432232f4(param_1,local_40);
    FUN_14908ff7a(param_2,uVar1,param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      FUN_1432232f4(param_1,local_40);
      FUN_1444368fc(param_2,param_1 + 0x60,L"Hair.Cluster_DrawIndirectBuffer");
      FUN_1432232f4(param_1,local_40);
      FUN_1444368fc(param_2,param_1 + 0x80,L"Hair.Cluster_DrawIndirectRasterComputeBuffer");
      local_48 = 0;
      FUN_14716cfd3(local_40,param_2,param_1 + 0x60,0);
      *(undefined4 *)(local_40[0] + 0x58) = 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14908ff7a FUN_14908ff7a body=329 status=ok
// SIG undefined FUN_14908ff7a(void)

void FUN_14908ff7a(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0x3fffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    local_48 = L"Hair.Cluster_CulledVertexIdBuffer";
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_58 = (wchar_t *)FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,0x1c);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 4,&local_60);
    FUN_1405bfba3(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,0x1c);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490900e0 FUN_1490900e0 body=66 status=ok
// SIG undefined FUN_1490900e0(void)

void FUN_1490900e0(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x60);
  FUN_14716cf4c(param_1 + 0x80);
  FUN_14716cf4c(param_1 + 0xa0);
  FUN_14716cf4c(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 149090122 FUN_149090122 body=271 status=ok
// SIG undefined FUN_149090122(void)

undefined8 *
FUN_149090122(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 *param_6)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_6;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa7520;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x129) = 0;
  *(undefined8 *)((longlong)param_1 + 0x131) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = param_2;
  *(undefined1 *)(param_1 + 0x29) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14c) = param_4;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 149090232 FUN_149090232 body=102 status=ok
// SIG undefined FUN_149090232(void)

void FUN_149090232(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0x20;
  cVar2 = thunk_FUN_1462727b8(lVar1);
  if (cVar2 != '\0') {
    FUN_149098154(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x140),0,0,0,param_1 + 0x14,0);
  }
  FUN_1490980c6(lVar1);
  return;
}



// FUNCTION 149090298 FUN_149090298 body=692 status=ok
// SIG undefined FUN_149090298(void)

void FUN_149090298(longlong param_1,undefined8 param_2,uint param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = 0;
    lVar2 = *(longlong *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar2 + 0x14);
    uVar3 = *(uint *)(lVar2 + 0xc);
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x140);
    uVar3 = *(uint *)(lVar2 + 0xc);
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
    if ((*(int *)(param_1 + 0x50) - 1U < 2) && (param_3 <= *(uint *)(param_1 + 0x54))) {
      return;
    }
  }
  pwVar4 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Cards)";
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pwVar4 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Strands)";
  }
  pwVar1 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Guides)";
  if (*(char *)(param_1 + 0x148) != '\0') {
    pwVar1 = pwVar4;
  }
  FUN_14909054c(param_2,lVar2 + 0x88,uVar3,param_1 + 0x98,pwVar1);
  pwVar4 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Cards)";
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pwVar4 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Strands)";
  }
  pwVar1 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Guides)";
  if (*(char *)(param_1 + 0x148) != '\0') {
    pwVar1 = pwVar4;
  }
  FUN_1490906db(param_2,*(longlong *)(param_1 + 0x140) + 0x50,
                *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0xc),param_1 + 0x78,pwVar1);
  pwVar4 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Cards)";
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pwVar4 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Strands)";
  }
  pwVar1 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Guides)";
  if (*(char *)(param_1 + 0x148) != '\0') {
    pwVar1 = pwVar4;
  }
  FUN_14909086a(param_2,*(longlong *)(param_1 + 0x140) + 0xc0,
                *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x1c),param_1 + 0x58,pwVar1);
  pwVar4 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Cards)";
  if (*(char *)(param_1 + 0x148) == '\x01') {
    pwVar4 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Strands)";
  }
  pwVar1 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Guides)";
  if (*(char *)(param_1 + 0x148) != '\0') {
    pwVar1 = pwVar4;
  }
  FUN_1490909f9(param_2,*(longlong *)(param_1 + 0x140) + 0xf8,
                *(int *)(*(longlong *)(param_1 + 0x140) + 0x1c) * 3,param_1 + 0xb8,pwVar1);
  lVar2 = *(longlong *)(param_1 + 0x140);
  if ((*(int *)(lVar2 + 0x14) != 0) && (*(longlong *)(param_1 + 0xe0) == 0)) {
    pwVar4 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Cards)";
    if (*(char *)(param_1 + 0x148) == '\x01') {
      pwVar4 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Strands)";
    }
    pwVar1 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Guides)";
    if (*(char *)(param_1 + 0x148) != '\0') {
      pwVar1 = pwVar4;
    }
    FUN_149090b88(param_2,lVar2 + 0x130,(ulonglong)(*(uint5 *)(lVar2 + 0x140) >> 2),param_1 + 0xe0,
                  pwVar1);
    pwVar4 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Cards)";
    if (*(char *)(param_1 + 0x148) == '\x01') {
      pwVar4 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Strands)";
    }
    pwVar1 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Guides)";
    if (*(char *)(param_1 + 0x148) != '\0') {
      pwVar1 = pwVar4;
    }
    FUN_149090d17(param_2,*(longlong *)(param_1 + 0x140) + 0x168,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x14),param_1 + 0x100,pwVar1);
    pwVar4 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Cards)";
    if (*(char *)(param_1 + 0x148) == '\x01') {
      pwVar4 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Strands)";
    }
    pwVar1 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Guides)";
    if (*(char *)(param_1 + 0x148) != '\0') {
      pwVar1 = pwVar4;
    }
    FUN_149090ea6(param_2,*(longlong *)(param_1 + 0x140) + 0x1a0,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x14),param_1 + 0x120,pwVar1);
    lVar2 = *(longlong *)(param_1 + 0x140);
  }
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(uint *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar2 + 0x14);
  return;
}



// FUNCTION 14909054c FUN_14909054c body=398 status=ok
// SIG undefined FUN_14909054c(void)

void FUN_14909054c(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0x1c);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490906db FUN_1490906db body=398 status=ok
// SIG undefined FUN_1490906db(void)

void FUN_1490906db(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0x1c);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909086a FUN_14909086a body=398 status=ok
// SIG undefined FUN_14909086a(void)

void FUN_14909086a(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0x1c);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490909f9 FUN_1490909f9 body=398 status=ok
// SIG undefined FUN_1490909f9(void)

void FUN_1490909f9(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 0x10;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,1);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 0xf;
    uStack_44 = uVar5 >> 4;
    local_48 = 0x10;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 0xf;
    local_64 = uVar3 >> 4;
    local_68 = 0x10;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 0x10) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (0xf < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149090b88 FUN_149090b88 body=398 status=ok
// SIG undefined FUN_149090b88(void)

void FUN_149090b88(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x10101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x10101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x10101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149090d17 FUN_149090d17 body=398 status=ok
// SIG undefined FUN_149090d17(void)

void FUN_149090d17(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0x1c);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 3;
    uStack_44 = uVar5 >> 2;
    local_48 = 4;
    local_40 = 0x4101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 3;
    local_64 = uVar3 >> 2;
    local_68 = 4;
    local_60 = 0x4101;
    local_58 = 0;
    if (uVar5 < 4) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (3 < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0x1c);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149090ea6 FUN_149090ea6 body=398 status=ok
// SIG undefined FUN_149090ea6(void)

void FUN_149090ea6(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_80;
  longlong local_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 0x30);
  if (lVar4 == 0) {
    local_88 = &local_48;
    local_48 = 0x10;
    local_40 = 0x10101;
    local_38 = 0;
    local_80 = param_5;
    uStack_44 = param_3;
    FUN_14908d0f7(param_1,param_2 + 8,param_4,0);
  }
  else {
    if (*param_4 == 0) {
      local_50 = 0;
    }
    else {
      local_88 = (undefined4 *)((ulonglong)local_88 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_48,param_1,param_4);
      local_50 = CONCAT44(uStack_44,local_48);
      lVar4 = *(longlong *)(param_2 + 0x30);
    }
    uVar5 = *(int *)(lVar4 + 0x18) + 0xf;
    uStack_44 = uVar5 >> 4;
    local_48 = 0x10;
    local_40 = 0x10101;
    local_38 = 0;
    uVar3 = *(int *)(lVar4 + 0x14) + 0xf;
    local_64 = uVar3 >> 4;
    local_68 = 0x10;
    local_60 = 0x10101;
    local_58 = 0;
    if (uVar5 < 0x10) {
      puVar2 = (undefined8 *)*param_4;
      if (puVar2 != (undefined8 *)0x0) {
        *param_4 = 0;
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else if (0xf < uVar3) {
      local_80 = param_5;
      local_88 = &local_68;
      local_70 = FUN_1444399a8(param_1,param_2,&local_50,&local_48);
      if (local_70 != 0) {
        FUN_1444348ec(param_1,&local_70,param_4,0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149091036 FUN_149091036 body=108 status=ok
// SIG undefined FUN_149091036(void)

void FUN_149091036(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_14716cf4c(param_1 + 0x98);
  FUN_14716cf4c(param_1 + 0x78);
  FUN_14716cf4c(param_1 + 0x58);
  FUN_14716cf4c(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_14716cf4c(param_1 + 0xe0);
  FUN_14716cf4c(param_1 + 0x100);
  FUN_14716cf4c(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



// FUNCTION 1490910b0 FUN_1490910b0 body=172 status=ok
// SIG undefined FUN_1490910b0(void)

longlong * FUN_1490910b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = (char)param_3;
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar4 = (longlong)(int)param_2[1] * 0x1d8;
    do {
      uVar2 = FUN_14001cc68(0x150,0x10);
      FUN_149090122(uVar2,lVar3,param_3,*(undefined4 *)(lVar3 + 8));
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_149096b8a(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      lVar3 = lVar3 + 0x1d8;
      lVar4 = lVar4 + -0x1d8;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 14909115c FUN_14909115c body=78 status=ok
// SIG undefined FUN_14909115c(void)

void FUN_14909115c(longlong *param_1)

{
  longlong lVar1;
  uint in_stack_00000028;
  
  if ((-1 < (int)in_stack_00000028) && ((int)in_stack_00000028 < (int)param_1[1])) {
    lVar1 = *(longlong *)(*(longlong *)(*param_1 + (ulonglong)in_stack_00000028 * 8) + 0x140);
    if ((*(int *)(lVar1 + 0xc) != 0) && (-1 < *(int *)(lVar1 + 8))) {
      FUN_14908d67c();
    }
  }
  return;
}



// FUNCTION 1490911aa FUN_1490911aa body=97 status=ok
// SIG undefined FUN_1490911aa(void)

void FUN_1490911aa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_7) && ((int)param_7 < (int)param_1[1])) {
    lVar1 = *(longlong *)(*param_1 + (ulonglong)param_7 * 8);
    lVar2 = *(longlong *)(lVar1 + 0x140);
    if ((*(int *)(lVar2 + 0xc) != 0) && (-1 < *(int *)(lVar2 + 8))) {
      FUN_14908d67c(lVar1,param_2,0,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 14909120c FUN_14909120c body=119 status=ok
// SIG undefined FUN_14909120c(void)

void FUN_14909120c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_149096c10(param_1,0);
  return;
}



// FUNCTION 149091284 FUN_149091284 body=295 status=ok
// SIG undefined FUN_149091284(void)

undefined8 *
FUN_149091284(undefined8 *param_1,longlong *param_2,undefined1 param_3,int param_4,
             undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_6;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa7f50;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd1) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int *)(param_1 + 0x25) = param_4;
  *(undefined1 *)((longlong)param_1 + 300) = param_3;
  lVar1 = *(longlong *)(*param_2 + (longlong)param_4 * 8);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0xc);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0x14);
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1490913ac FUN_1490913ac body=584 status=ok
// SIG undefined FUN_1490913ac(void)

void FUN_1490913ac(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  int *piVar9;
  
  uVar1 = *(uint *)(param_1 + 0x124);
  if ((uVar1 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(uint *)(param_1 + 0x54) = uVar1;
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 == 0) {
      piVar9 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    }
    else {
      pwVar7 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Cards)";
      if (*(char *)(param_1 + 300) == '\x01') {
        pwVar7 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Strands)";
      }
      pwVar8 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Guides)";
      if (*(char *)(param_1 + 300) != '\0') {
        pwVar8 = pwVar7;
      }
      FUN_1490915f4(param_2,iVar2,param_1 + 0xa0,pwVar8);
      pwVar7 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Cards)";
      if (*(char *)(param_1 + 300) == '\x01') {
        pwVar7 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Strands)";
      }
      pwVar8 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Guides)";
      if (*(char *)(param_1 + 300) != '\0') {
        pwVar8 = pwVar7;
      }
      FUN_1490915f4(param_2,iVar2 + 4,param_1 + 0xe0,pwVar8);
      lVar4 = DAT_14c9d2450;
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
        uVar6 = 0;
      }
      else {
        bVar5 = FUN_144a61b4f();
        uVar6 = (ulonglong)(bVar5 ^ 1);
      }
      piVar9 = (int *)(lVar3 + 0xc60);
      if (0 < *(int *)(lVar4 + uVar6 * 4)) {
        pwVar7 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Cards)";
        if (*(char *)(param_1 + 300) == '\x01') {
          pwVar7 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Strands)";
        }
        pwVar8 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Guides)";
        if (*(char *)(param_1 + 300) != '\0') {
          pwVar8 = pwVar7;
        }
        FUN_1490915f4(param_2,*(undefined4 *)(param_1 + 0x98),param_1 + 0xc0,pwVar8);
        pwVar7 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Cards)";
        if (*(char *)(param_1 + 300) == '\x01') {
          pwVar7 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Strands)";
        }
        pwVar8 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Guides)";
        if (*(char *)(param_1 + 300) != '\0') {
          pwVar8 = pwVar7;
        }
        FUN_1490915f4(param_2,iVar2 + 4,param_1 + 0x100,pwVar8);
      }
    }
    pwVar7 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Cards)";
    if (*(char *)(param_1 + 300) == '\x01') {
      pwVar7 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Strands)";
    }
    pwVar8 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Guides)";
    if (*(char *)(param_1 + 300) != '\0') {
      pwVar8 = pwVar7;
    }
    FUN_149091752(param_2,*(int *)(param_1 + 0x124) * 3,param_1 + 0x58,pwVar8);
    lVar3 = DAT_14c9d2450;
    if (*piVar9 == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar5 ^ 1);
    }
    if (0 < *(int *)(lVar3 + uVar6 * 4)) {
      pwVar7 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Cards)";
      if (*(char *)(param_1 + 300) == '\x01') {
        pwVar7 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Strands)";
      }
      pwVar8 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Guides)";
      if (*(char *)(param_1 + 300) != '\0') {
        pwVar8 = pwVar7;
      }
      FUN_149091752(param_2,*(int *)(param_1 + 0x124) * 3,param_1 + 0x78,pwVar8);
      return;
    }
  }
  return;
}



// FUNCTION 1490915f4 FUN_1490915f4 body=322 status=ok
// SIG undefined FUN_1490915f4(void)

void FUN_1490915f4(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0xfffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = CONCAT44(local_58._4_4_,0x10109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_48 = param_4;
    local_58 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,1);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 8,&local_60);
    FUN_1405bfba3(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149091752 FUN_149091752 body=322 status=ok
// SIG undefined FUN_149091752(void)

void FUN_149091752(longlong param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0xfffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_48 = param_4;
    local_58 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,1);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 8,&local_60);
    FUN_143212081(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490918b0 FUN_1490918b0 body=158 status=ok
// SIG undefined FUN_1490918b0(void)

void FUN_1490918b0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_14716cf4c(param_1 + 0x58);
  FUN_14716cf4c(param_1 + 0xa0);
  FUN_14716cf4c(param_1 + 0xe0);
  lVar1 = DAT_14c9d2450;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (0 < *(int *)(lVar1 + uVar3 * 4)) {
    FUN_14716cf4c(param_1 + 0x78);
    FUN_14716cf4c(param_1 + 0xc0);
    FUN_14716cf4c(param_1 + 0x100);
    return;
  }
  return;
}



// FUNCTION 14909194e FUN_14909194e body=213 status=ok
// SIG undefined FUN_14909194e(void)

longlong * FUN_14909194e(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = (char)param_3;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_149096c70(param_1);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        uVar5 = FUN_14001cc68(0x130,0x10);
        FUN_149091284(uVar5,param_2,param_3,*(undefined4 *)(lVar3 + 0x14c));
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_149096cd0(param_1,iVar1);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar5;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar6);
    }
  }
  return param_1;
}



// FUNCTION 149091a24 FUN_149091a24 body=77 status=ok
// SIG undefined FUN_149091a24(void)

void FUN_149091a24(longlong *param_1)

{
  longlong lVar1;
  uint in_stack_00000028;
  
  if ((((-1 < (int)in_stack_00000028) && ((int)in_stack_00000028 < (int)param_1[1])) &&
      (lVar1 = *(longlong *)(*param_1 + (ulonglong)in_stack_00000028 * 8),
      *(int *)(lVar1 + 0x124) != 0)) && (-1 < *(int *)(lVar1 + 0x128))) {
    FUN_14908d67c();
  }
  return;
}



// FUNCTION 149091a72 FUN_149091a72 body=119 status=ok
// SIG undefined FUN_149091a72(void)

void FUN_149091a72(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_149096c70(param_1,0);
  return;
}



// FUNCTION 149091aea FUN_149091aea body=102 status=ok
// SIG undefined FUN_149091aea(void)

void FUN_149091aea(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1 + 0x20;
  cVar2 = thunk_FUN_1462727b8(lVar1);
  if (cVar2 != '\0') {
    FUN_149098154(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 0x90),0,0,0,param_1 + 0x14,0);
  }
  FUN_1490980c6(lVar1);
  return;
}



// FUNCTION 149091b50 FUN_149091b50 body=215 status=ok
// SIG undefined FUN_149091b50(void)

void FUN_149091b50(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_44;
  local_44 = 0;
  local_40 = DAT_14c846330;
  local_38 = DAT_14c846338;
  local_34 = DAT_14c846330;
  local_2c = DAT_14c846338;
  local_28 = 0;
  FUN_14443495b(param_2,*(longlong *)(param_1 + 0x90) + 0x20,param_1 + 0x50,
                L"Hair.StrandsInterpolation_CurveInterpolationBuffer");
  local_78 = &local_68;
  local_68 = 0;
  local_64 = DAT_14c846330;
  local_5c = DAT_14c846338;
  local_58 = DAT_14c846330;
  local_50 = DAT_14c846338;
  local_4c = 0;
  FUN_14443495b(param_2,*(longlong *)(param_1 + 0x90) + 0x58,param_1 + 0x70,
                L"Hair.StrandsInterpolation_PointInterpolationBuffer");
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149091c28 FUN_149091c28 body=39 status=ok
// SIG undefined FUN_149091c28(void)

void FUN_149091c28(longlong param_1)

{
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 149091c71 FUN_149091c71 body=291 status=ok
// SIG undefined FUN_149091c71(void)

void FUN_149091c71(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(uint *)(param_2 + 1);
  iVar2 = uVar5 * 4;
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != (undefined8 *)0x0) {
    *param_3 = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (iVar2 != 0) {
    uVar5 = uVar5 & 0x3fffffff;
    local_68 = &local_39;
    local_39 = 1;
    local_48 = L"Hair.CardsInterpolation_InterpolationBuffer";
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_58 = 0x10111;
    if (DAT_14ca84e48 <= uVar5) {
      uVar5 = DAT_14ca84e48;
    }
    local_50 = 0;
    local_60 = CONCAT44(uVar5 + (uVar5 == 0),uVar4 + (uVar4 == 0));
    local_60 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    if (*param_2 != 0) {
      local_68 = (undefined1 *)((ulonglong)local_68 & 0xffffffffffffff00);
      FUN_1447759b4(param_1,local_60,*param_2,iVar2);
    }
    FUN_1444348ec(param_1,&local_60,param_3,0x1c);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149091da0 FUN_149091da0 body=193 status=ok
// SIG undefined FUN_149091da0(void)

undefined8 *
FUN_149091da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa8ad0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  FUN_143268f94(param_1 + 0x12);
  *(undefined2 *)(param_1 + 0x29) = 1;
  *(undefined1 *)((longlong)param_1 + 0x14a) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = FUN_14909c330(DAT_14ca85550);
  *(undefined1 *)((longlong)param_1 + 0x14a) = uVar1;
  return param_1;
}



// FUNCTION 149091e62 FUN_149091e62 body=160 status=ok
// SIG undefined FUN_149091e62(void)

undefined8 *
FUN_149091e62(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa8ad0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  FUN_143268f94(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x147) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 149091f02 FUN_149091f02 body=160 status=ok
// SIG undefined FUN_149091f02(void)

undefined8 *
FUN_149091f02(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14baa5c50;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  FUN_144aff862(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 0x3fffff;
  *param_1 = &PTR_FUN_14baa8ad0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  FUN_143268f94(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x147) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 149091fa2 FUN_149091fa2 body=229 status=ok
// SIG undefined FUN_149091fa2(void)

void FUN_149091fa2(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 local_52;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined8 uStack_39;
  undefined8 local_31;
  undefined5 uStack_29;
  undefined3 uStack_24;
  undefined5 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x148) == '\x01') {
    if (*(char *)(param_1 + 0x14a) == '\x01') {
      iVar1 = param_4 << 3;
    }
    else {
      iVar1 = param_4 * 4;
      *(int *)(param_1 + 0x144) = param_4 * 0x18;
    }
    *(int *)(param_1 + 0x140) = iVar1;
    FUN_149092088(param_2,iVar1,param_1 + 0x50);
    FUN_1490921ed(param_2,*(undefined4 *)(param_1 + 0x144),param_1 + 0x70);
    FUN_147428402(param_1 + 0x90);
    uStack_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5a = 0;
    local_52 = 1;
    local_51 = 0;
    uStack_49 = 0;
    local_41 = 0;
    uStack_39 = 0;
    local_31 = 0;
    uStack_29 = 0;
    uStack_24 = 0;
    uStack_21 = 0;
    FUN_141793e86(param_1 + 0xd0,&local_68);
    FUN_14005bca4(&local_68);
    *(undefined1 *)(param_1 + 0x149) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149092088 FUN_149092088 body=329 status=ok
// SIG undefined FUN_149092088(void)

void FUN_149092088(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0xfffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    local_48 = L"Hair.StrandsRaytracing_PositionBuffer";
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,0x4109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_58 = (wchar_t *)FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,1);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 4,&local_60);
    FUN_143212081(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490921ed FUN_1490921ed body=329 status=ok
// SIG undefined FUN_1490921ed(void)

void FUN_1490921ed(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 & 0x3fffffff) == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
      }
    }
  }
  else {
    local_39 = 1;
    local_48 = L"Hair.StrandsRaytracing_IndexBuffer";
    uVar4 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar4 = DAT_14ca84e48;
    }
    local_60 = uVar4 + (uVar4 == 0);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,0x10109);
    uVar4 = DAT_14ca84e48;
    if (param_2 < DAT_14ca84e48) {
      uVar4 = param_2;
    }
    local_50 = 0;
    local_5c = uVar4 + (uVar4 == 0);
    local_68 = &local_39;
    local_58 = (wchar_t *)FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_48,&local_60);
    local_60 = CONCAT13(local_60._3_1_,0x1c);
    local_39 = 0;
    local_68 = &local_39;
    local_48 = local_58;
    uVar3 = FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,local_58 + 4,&local_60);
    FUN_1405bfba3(param_1,uVar3,0,2);
    FUN_1444348ec(param_1,&local_48,param_3,0x1c);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149092352 FUN_149092352 body=150 status=ok
// SIG undefined FUN_149092352(void)

void FUN_149092352(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 local_52;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined8 uStack_39;
  undefined8 local_31;
  undefined5 uStack_29;
  undefined3 uStack_24;
  undefined5 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14716cf4c(param_1 + 0x50);
  FUN_14716cf4c(param_1 + 0x70);
  FUN_147428402(param_1 + 0x90);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  local_52 = 1;
  local_51 = 0;
  uStack_49 = 0;
  local_41 = 0;
  uStack_39 = 0;
  local_31 = 0;
  uStack_29 = 0;
  uStack_24 = 0;
  uStack_21 = 0;
  FUN_141793e86(param_1 + 0xd0,&local_68);
  FUN_14005bca4(&local_68);
  *(undefined1 *)(param_1 + 0x149) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490923fa FUN_1490923fa body=194 status=ok
// SIG undefined FUN_1490923fa(void)

bool FUN_1490923fa(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)*DAT_14cbf9798;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 + 1 != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = plVar1[1];
      plVar1[1] = 0;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(plVar1 + 2);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0x14);
      plVar1[2] = 0;
    }
    param_1[4] = plVar1[5];
    uVar2 = *(undefined4 *)((longlong)plVar1 + 0x1c);
    uVar3 = *(undefined4 *)(plVar1 + 4);
    uVar4 = *(undefined4 *)((longlong)plVar1 + 0x24);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(plVar1 + 3);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    plVar5 = DAT_14cbf9798;
    DAT_14cbf9798 = plVar1;
    if (plVar1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)plVar1 + 0x14) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x1c) = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *(undefined1 *)((longlong)plVar1 + 0x24) = 0x25;
    *(undefined8 *)((longlong)plVar1 + 0x25) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = 0;
    if (plVar5 != (longlong *)0x0) {
      if (plVar5[1] != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar5);
    }
  }
  return plVar1 != (longlong *)0x0;
}



// FUNCTION 1490924bc FUN_1490924bc body=42 status=ok
// SIG undefined FUN_1490924bc(void)

void FUN_1490924bc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490924ee FUN_1490924ee body=96 status=ok
// SIG undefined FUN_1490924ee(void)

undefined8 FUN_1490924ee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e69504();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa0a0,1);
  return uVar3;
}



// FUNCTION 14909254e FUN_14909254e body=52 status=ok
// SIG undefined FUN_14909254e(void)

void FUN_14909254e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149092582 FUN_149092582 body=42 status=ok
// SIG undefined FUN_149092582(void)

void FUN_149092582(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490925b4 FUN_1490925b4 body=96 status=ok
// SIG undefined FUN_1490925b4(void)

undefined8 FUN_1490925b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9d46a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa128,1);
  return uVar3;
}



// FUNCTION 149092614 FUN_149092614 body=52 status=ok
// SIG undefined FUN_149092614(void)

void FUN_149092614(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149092648 FUN_149092648 body=42 status=ok
// SIG undefined FUN_149092648(void)

void FUN_149092648(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14909267a FUN_14909267a body=96 status=ok
// SIG undefined FUN_14909267a(void)

undefined8 FUN_14909267a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3b074();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa1b0,1);
  return uVar3;
}



// FUNCTION 1490926da FUN_1490926da body=52 status=ok
// SIG undefined FUN_1490926da(void)

void FUN_1490926da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909270e FUN_14909270e body=42 status=ok
// SIG undefined FUN_14909270e(void)

void FUN_14909270e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149092740 FUN_149092740 body=96 status=ok
// SIG undefined FUN_149092740(void)

undefined8 FUN_149092740(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7a2b0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa238,1);
  return uVar3;
}



// FUNCTION 1490927a0 FUN_1490927a0 body=52 status=ok
// SIG undefined FUN_1490927a0(void)

void FUN_1490927a0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1490927d4 FUN_1490927d4 body=42 status=ok
// SIG undefined FUN_1490927d4(void)

void FUN_1490927d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149092806 FUN_149092806 body=96 status=ok
// SIG undefined FUN_149092806(void)

undefined8 FUN_149092806(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9d9da();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa2c0,1);
  return uVar3;
}



// FUNCTION 149092866 FUN_149092866 body=52 status=ok
// SIG undefined FUN_149092866(void)

void FUN_149092866(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14909289a FUN_14909289a body=42 status=ok
// SIG undefined FUN_14909289a(void)

void FUN_14909289a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490928cc FUN_1490928cc body=96 status=ok
// SIG undefined FUN_1490928cc(void)

undefined8 FUN_1490928cc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5eedc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbfa348,1);
  return uVar3;
}



// FUNCTION 14909292c FUN_14909292c body=52 status=ok
// SIG undefined FUN_14909292c(void)

void FUN_14909292c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149092960 FUN_149092960 body=154 status=ok
// SIG undefined FUN_149092960(void)

uint FUN_149092960(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x38);
    piVar5 = (int *)(param_1 + 0x98);
    switch(uVar3 & 0xff) {
    case 0:
      break;
    case 1:
      piVar5 = (int *)(param_1 + 0xb8);
      break;
    case 2:
      piVar5 = (int *)(param_1 + 0xa8);
      break;
    case 3:
      piVar5 = (int *)(param_1 + 0x128);
      if (0 < *(int *)(param_1 + 0x118)) break;
      goto switchD_1490929b4_default;
    case 4:
      goto switchD_1490929b4_caseD_4;
    case 5:
      piVar4 = (int *)(param_1 + 0x48);
      goto switchD_1490929b4_caseD_4;
    case 6:
      piVar4 = (int *)(param_1 + 0x58);
switchD_1490929b4_caseD_4:
      iVar1 = *piVar4;
      goto joined_r0x0001490929e2;
    default:
      goto switchD_1490929b4_default;
    }
    iVar1 = *piVar5;
joined_r0x0001490929e2:
    if (0 < iVar1) {
      uVar2 = uVar2 | 1 << (uVar3 & 0x1f);
    }
switchD_1490929b4_default:
    uVar3 = uVar3 + 1;
    if (uVar3 == 7) {
      return uVar2;
    }
  } while( true );
}



// FUNCTION 1490929fa FUN_1490929fa body=60 status=ok
// SIG undefined FUN_1490929fa(void)

undefined8 * FUN_1490929fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092a4c FUN_149092a4c body=38 status=ok
// SIG undefined FUN_149092a4c(void)

undefined8 FUN_149092a4c(undefined8 param_1,int param_2)

{
  FUN_14003f39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092a72 FUN_149092a72 body=38 status=ok
// SIG undefined FUN_149092a72(void)

undefined8 FUN_149092a72(undefined8 param_1,int param_2)

{
  FUN_149096d56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092a98 FUN_149092a98 body=32 status=ok
// SIG undefined FUN_149092a98(void)

undefined8 FUN_149092a98(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairCardsResource");
  return param_2;
}



// FUNCTION 149092ab8 FUN_149092ab8 body=38 status=ok
// SIG undefined FUN_149092ab8(void)

undefined8 FUN_149092ab8(undefined8 param_1,int param_2)

{
  FUN_149096e04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092ade FUN_149092ade body=32 status=ok
// SIG undefined FUN_149092ade(void)

undefined8 FUN_149092ade(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairCardsDeformedResource");
  return param_2;
}



// FUNCTION 149092afe FUN_149092afe body=38 status=ok
// SIG undefined FUN_149092afe(void)

undefined8 FUN_149092afe(undefined8 param_1,int param_2)

{
  FUN_149096e5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092b24 FUN_149092b24 body=32 status=ok
// SIG undefined FUN_149092b24(void)

undefined8 FUN_149092b24(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairMeshesRestResource");
  return param_2;
}



// FUNCTION 149092b44 FUN_149092b44 body=38 status=ok
// SIG undefined FUN_149092b44(void)

undefined8 FUN_149092b44(undefined8 param_1,int param_2)

{
  FUN_149096efe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092b6a FUN_149092b6a body=32 status=ok
// SIG undefined FUN_149092b6a(void)

undefined8 FUN_149092b6a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairMeshesDeformedResource");
  return param_2;
}



// FUNCTION 149092b8a FUN_149092b8a body=38 status=ok
// SIG undefined FUN_149092b8a(void)

undefined8 FUN_149092b8a(undefined8 param_1,int param_2)

{
  FUN_149096f4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092bb0 FUN_149092bb0 body=32 status=ok
// SIG undefined FUN_149092bb0(void)

undefined8 FUN_149092bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsResource");
  return param_2;
}



// FUNCTION 149092bd8 FUN_149092bd8 body=38 status=ok
// SIG undefined FUN_149092bd8(void)

undefined8 FUN_149092bd8(undefined8 param_1,int param_2)

{
  FUN_149096fdc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092bfe FUN_149092bfe body=32 status=ok
// SIG undefined FUN_149092bfe(void)

undefined8 FUN_149092bfe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsDeformedResource");
  return param_2;
}



// FUNCTION 149092c1e FUN_149092c1e body=38 status=ok
// SIG undefined FUN_149092c1e(void)

undefined8 FUN_149092c1e(undefined8 param_1,int param_2)

{
  FUN_149097070();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092c44 FUN_149092c44 body=32 status=ok
// SIG undefined FUN_149092c44(void)

undefined8 FUN_149092c44(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsClusterResource");
  return param_2;
}



// FUNCTION 149092c6c FUN_149092c6c body=38 status=ok
// SIG undefined FUN_149092c6c(void)

undefined8 FUN_149092c6c(undefined8 param_1,int param_2)

{
  FUN_1490970c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092c92 FUN_149092c92 body=32 status=ok
// SIG undefined FUN_149092c92(void)

undefined8 FUN_149092c92(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsCullingResource");
  return param_2;
}



// FUNCTION 149092cb2 FUN_149092cb2 body=38 status=ok
// SIG undefined FUN_149092cb2(void)

undefined8 FUN_149092cb2(undefined8 param_1,int param_2)

{
  FUN_149097124();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092cd8 FUN_149092cd8 body=32 status=ok
// SIG undefined FUN_149092cd8(void)

undefined8 FUN_149092cd8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsLODRestRootResource");
  return param_2;
}



// FUNCTION 149092d00 FUN_149092d00 body=38 status=ok
// SIG undefined FUN_149092d00(void)

undefined8 FUN_149092d00(undefined8 param_1,int param_2)

{
  FUN_1490971a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092d26 FUN_149092d26 body=32 status=ok
// SIG undefined FUN_149092d26(void)

undefined8 FUN_149092d26(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsLODDeformedRootResource ");
  return param_2;
}



// FUNCTION 149092d46 FUN_149092d46 body=38 status=ok
// SIG undefined FUN_149092d46(void)

undefined8 FUN_149092d46(undefined8 param_1,int param_2)

{
  FUN_149097226();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092d6c FUN_149092d6c body=32 status=ok
// SIG undefined FUN_149092d6c(void)

undefined8 FUN_149092d6c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsInterpolationResource");
  return param_2;
}



// FUNCTION 149092d94 FUN_149092d94 body=79 status=ok
// SIG undefined FUN_149092d94(void)

undefined8 * FUN_149092d94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14baa8a10;
  FUN_14908489c(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092de4 FUN_149092de4 body=32 status=ok
// SIG undefined FUN_149092de4(void)

undefined8 FUN_149092de4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairCardsInterplationResource");
  return param_2;
}



// FUNCTION 149092e04 FUN_149092e04 body=38 status=ok
// SIG undefined FUN_149092e04(void)

undefined8 FUN_149092e04(undefined8 param_1,int param_2)

{
  FUN_14909726a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149092e2a FUN_149092e2a body=32 status=ok
// SIG undefined FUN_149092e2a(void)

undefined8 FUN_149092e2a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FHairStrandsRaytracingResource");
  return param_2;
}



// FUNCTION 149092e9a FUN_149092e9a body=38 status=ok
// SIG undefined FUN_149092e9a(void)

undefined8 FUN_149092e9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149092ee8 FUN_149092ee8 body=59 status=ok
// SIG undefined FUN_149092ee8(void)

undefined8 FUN_149092ee8(longlong *param_1)

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



// FUNCTION 149092f8a FUN_149092f8a body=138 status=ok
// SIG undefined FUN_149092f8a(void)

code * FUN_149092f8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Infos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000019c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667bee4;
}



// FUNCTION 149093014 FUN_149093014 body=138 status=ok
// SIG undefined FUN_149093014(void)

code * FUN_149093014(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UniqueMeshCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000019a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4d3e6;
}



// FUNCTION 14909309e FUN_14909309e body=138 status=ok
// SIG undefined FUN_14909309e(void)

code * FUN_14909309e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSkinCacheEnable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000198;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4d362;
}



// FUNCTION 149093128 FUN_149093128 body=121 status=ok
// SIG undefined FUN_149093128(void)

void FUN_149093128(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149093258(param_1,iVar1);
    }
    FUN_149093221((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1490932de(param_1,param_2,iVar1 - param_2);
    FUN_149093338(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490931a2 FUN_1490931a2 body=127 status=ok
// SIG undefined FUN_1490931a2(void)

void FUN_1490931a2(longlong param_1)

{
  FUN_149094619(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_149094656(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 4) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      thunk_FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0x10) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      thunk_FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 149093221 FUN_149093221 body=55 status=ok
// SIG undefined FUN_149093221(void)

void FUN_149093221(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    puVar2 = &DAT_14c846480;
    puVar3 = (undefined8 *)(param_1 + 8);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 149093258 FUN_149093258 body=132 status=ok
// SIG undefined FUN_149093258(void)

void FUN_149093258(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490932de FUN_1490932de body=89 status=ok
// SIG undefined FUN_1490932de(void)

void FUN_1490932de(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x80 + *param_1);
  FUN_144827b96(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar2 << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149093338 FUN_149093338 body=62 status=ok
// SIG undefined FUN_149093338(void)

void FUN_149093338(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149093376(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,0x10);
  }
  return;
}



// FUNCTION 149093376 FUN_149093376 body=93 status=ok
// SIG undefined FUN_149093376(void)

ulonglong FUN_149093376(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,0x10);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 1490933d4 FUN_1490933d4 body=604 status=ok
// SIG undefined FUN_1490933d4(void)

void FUN_1490933d4(longlong param_1,longlong param_2,longlong param_3,int *param_4,byte param_5,
                  int param_6,int param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (param_6 != 1) {
      param_7 = param_4[4];
    }
    local_8c = param_7;
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x38) + 0x28;
      lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x48;
      do {
        if ((*(longlong *)(lVar3 + -0x28) == param_3) && (*(int *)(lVar3 + -0x10) == *param_4)) {
          *(int *)(lVar3 + -0xc) = *(int *)(lVar3 + -0xc) + 1;
          *(uint *)(lVar3 + -8) = *(uint *)(lVar3 + -8) | 1 << ((byte)param_6 & 0x1f);
          *(uint *)(lVar3 + -4) = *(uint *)(lVar3 + -4) | 1 << (param_5 & 0x1f);
          FUN_149093632(&local_8c,&local_80,param_4 + 2);
          local_50 = 0;
          local_48 = 0x8000000000;
          local_98 = &local_88;
          FUN_146fdacc0(lVar3,&local_80,local_60,1);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14909361e;
        }
        lVar3 = lVar3 + 0x48;
        lVar2 = lVar2 + -0x48;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)FUN_14909374c(param_1 + 0x38);
    local_88 = *(undefined8 *)(*(longlong *)(param_2 + 0x188) + 0x18);
    FUN_1400021e4(&local_88,&local_80);
    if (plVar1 + 1 == &local_80) {
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar1[1] != 0) {
        FUN_1400020a8();
      }
      plVar1[1] = local_80;
      local_80 = 0;
      *(undefined4 *)(plVar1 + 2) = uStack_78;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_74;
    }
    *plVar1 = param_3;
    *(int *)(plVar1 + 3) = *param_4;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = 1;
    *(uint *)(plVar1 + 4) = *(uint *)(plVar1 + 4) | 1 << ((byte)param_6 & 0x1f);
    *(uint *)((longlong)plVar1 + 0x24) = *(uint *)((longlong)plVar1 + 0x24) | 1 << (param_5 & 0x1f);
    FUN_149093632(&local_8c,&local_80,param_4 + 2);
    if (plVar1 + 5 == &local_80) {
LAB_14909361e:
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (local_70 == 0) {
        *(undefined4 *)(plVar1 + 5) = (undefined4)local_80;
        *(undefined4 *)((longlong)plVar1 + 0x2c) = local_80._4_4_;
        *(undefined4 *)(plVar1 + 6) = uStack_78;
        *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_74;
      }
      if (plVar1[7] != 0) {
        FUN_1400020a8(plVar1[7]);
      }
      plVar1[7] = local_70;
      *(undefined4 *)(plVar1 + 8) = local_68;
      *(undefined4 *)((longlong)plVar1 + 0x44) = local_64;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149093632 FUN_149093632 body=282 status=ok
// SIG undefined FUN_149093632(void)

void * FUN_149093632(int *param_1,void *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x80;
  iVar2 = *param_1;
  *(int *)((longlong)param_2 + 0x18) = iVar2;
  uVar7 = iVar2 + 0x1f;
  if (uVar7 < 0x20) goto LAB_14909365d;
  pvVar6 = param_2;
  if (uVar7 < 0xa0) {
LAB_1490936ff:
    uVar7 = uVar7 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(param_2,0,uVar7 >> 5,4);
    *(uint *)((longlong)param_2 + 0x1c) = uVar7 & 0xffffffe0;
    pvVar6 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar6 = param_2;
    }
    if (uVar7 < 0x120) goto LAB_1490936ff;
    uVar7 = (uVar7 >> 5) << 2;
  }
  memset(pvVar6,0,(ulonglong)uVar7);
  iVar2 = *(int *)((longlong)param_2 + 0x18);
  iVar9 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  if (iVar2 % 0x20 != 0) {
    pvVar6 = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      pvVar6 = param_2;
    }
    bVar5 = -(char)(iVar2 % 0x20);
    *(uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
         (bVar5 & 0x1f);
  }
LAB_14909365d:
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_3;
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar3 + 0x60 + lVar8);
      pvVar6 = *(void **)((longlong)param_2 + 0x10);
      if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
        pvVar6 = param_2;
      }
      iVar9 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      puVar1 = (uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
      lVar8 = lVar8 + 0x70;
    } while ((longlong)(int)lVar4 * 0x70 - lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 14909374c FUN_14909374c body=63 status=ok
// SIG undefined FUN_14909374c(void)

longlong FUN_14909374c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490937b6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_14909378b(lVar2);
  return lVar2;
}



// FUNCTION 14909378b FUN_14909378b body=43 status=ok
// SIG undefined FUN_14909378b(void)

void FUN_14909378b(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000;
  return;
}



// FUNCTION 1490937b6 FUN_1490937b6 body=147 status=ok
// SIG undefined FUN_1490937b6(void)

void FUN_1490937b6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14909384a FUN_14909384a body=1785 status=ok
// SIG undefined FUN_14909384a(void)

void FUN_14909384a(longlong param_1,uint *param_2,longlong param_3,longlong param_4,int param_5,
                  longlong *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  void *_Dst;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  void *pvVar18;
  int iVar19;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  uint *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  wchar_t *local_78;
  undefined1 local_69;
  int local_68 [4];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  lVar5 = DAT_14c9d2450;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar14 = 0;
  local_a8 = param_2;
  local_90 = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar9 = 0;
  }
  else {
    bVar13 = FUN_144a61b4f();
    uVar9 = (ulonglong)(bVar13 ^ 1);
  }
  iVar19 = *(int *)(local_90 + 100);
  local_68[0] = iVar19;
  local_68[1] = param_5;
  lVar10 = 0;
  do {
    uVar14 = ((uint)(*(int *)((longlong)local_68 + lVar10) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)local_68 + lVar10) * 0x16a88000) * 0x1b873593 ^ uVar14;
    uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    lVar10 = lVar10 + 4;
  } while (lVar10 != 8);
  uVar14 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
  uVar6 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar14 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(*(uint *)(param_1 + 4) & uVar6) * 4
                    );
  local_88 = param_4;
  if (uVar14 != 0xffffffff) {
    do {
      lVar10 = (longlong)(int)uVar14;
      if ((*(int *)(*(longlong *)(param_1 + 0x20) + 0x40 + lVar10 * 0x90) == iVar19) &&
         (*(int *)(*(longlong *)(param_1 + 0x20) + 0x44 + lVar10 * 0x90) == param_5))
      goto LAB_149093cd9;
      uVar14 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar14 * 4);
    } while (uVar14 != 0xffffffff);
  }
  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar5 + uVar9 * 4));
  uVar14 = FUN_149093f46(param_1 + 0x20);
  if (*(uint *)(param_1 + 8) <= uVar14) {
    uVar9 = (ulonglong)(uVar14 + (uVar14 == 0xffffffff)) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar5 & 0x1f);
    uVar15 = 0x20;
    if (0x20 < uVar7) {
      uVar15 = uVar7;
    }
    FUN_1404b04e2(param_1,uVar15);
  }
  lVar4 = local_88;
  uVar9 = (ulonglong)(*(uint *)(param_1 + 4) & uVar6);
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar14 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar9 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x10) + uVar9 * 4) = uVar14;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar10 = (longlong)(int)uVar14;
  lVar16 = lVar10 * 0x90;
  local_a0 = lVar5 + lVar16;
  *(longlong *)(lVar5 + lVar16) = local_90;
  *(longlong *)(lVar5 + 8 + lVar16) = local_88;
  *(uint *)(lVar5 + 0x48 + lVar16) = uVar6;
  *(ulonglong *)(lVar5 + 0x40 + lVar16) = CONCAT44(param_5,iVar19);
  *(undefined4 *)(lVar5 + 0x4c + lVar16) = *(undefined4 *)(local_88 + 0x18);
  uVar14 = *(int *)(local_88 + 0xec) * 3;
  local_b8 = &local_69;
  local_69 = 0;
  local_78 = L"Hair.SkinnedDeformedPositions";
  uVar6 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar6 = DAT_14ca84e48;
  }
  local_68[0] = uVar6 + (uVar6 == 0);
  local_58 = 0;
  uVar6 = DAT_14ca84e48;
  if (uVar14 < DAT_14ca84e48) {
    uVar6 = uVar14;
  }
  local_68[2] = 0x4109;
  local_68[1] = uVar6 + (uVar6 == 0);
  puVar1 = local_a8 + 0x62;
  puVar2 = local_a8 + 0x1c;
  local_50 = FUN_144738de6(puVar1,puVar2);
  *(longlong *)(lVar5 + 0x10 + lVar16) = local_50;
  if ((int)local_98 < 1) {
    uVar11 = 0;
  }
  else {
    uVar14 = *(int *)(lVar4 + 0xec) * 3;
    local_69 = 0;
    local_78 = L"Hair.SkinnedDeformedPreviousPositions";
    uVar6 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar6 = DAT_14ca84e48;
    }
    local_58 = 0;
    local_68[0] = uVar6 + (uVar6 == 0);
    uVar6 = DAT_14ca84e48;
    if (uVar14 < DAT_14ca84e48) {
      uVar6 = uVar14;
    }
    local_68[2] = 0x4109;
    local_68[1] = uVar6 + (uVar6 == 0);
    local_b8 = &local_69;
    uVar11 = FUN_144738de6(puVar1,puVar2);
    local_50 = *(longlong *)(local_a0 + 0x10);
  }
  lVar5 = local_a0;
  *(undefined8 *)(local_a0 + 0x18) = uVar11;
  local_68[0] = CONCAT31(local_68[0]._1_3_,0xd);
  local_68[1] = 0;
  local_68[2] = -1;
  local_58 = 0;
  puVar17 = local_a8 + 0x66;
  uVar11 = FUN_14475683e(puVar17,puVar2,local_50 + 8);
  *(undefined8 *)(lVar5 + 0x28) = uVar11;
  if ((int)local_98 < 1) {
    uVar11 = 0;
  }
  else {
    local_50 = *(longlong *)(lVar5 + 0x18);
    local_68[0] = CONCAT31(local_68[0]._1_3_,0xd);
    local_68[1] = 0;
    local_68[2] = -1;
    local_58 = 0;
    uVar11 = FUN_14475683e(puVar17,puVar2,local_50 + 8);
  }
  *(undefined8 *)(lVar5 + 0x30) = uVar11;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  if (*(longlong *)(lVar4 + 0x78) != 0) {
    uVar6 = (uint)*(byte *)(lVar4 + 0xb1) * 8 + 8;
    uVar3 = *(undefined1 *)(*(longlong *)(lVar4 + 0x78) + 0x19);
    local_69 = 0;
    local_78 = L"Hair.SkinnedDeformedTangents";
    uVar14 = *(uint *)(local_88 + 0xac);
    if (DAT_14ca84e48 <= *(uint *)(local_88 + 0xac)) {
      uVar14 = DAT_14ca84e48;
    }
    local_58 = 0;
    local_68[0] = uVar14 + (uVar14 == 0);
    uVar14 = DAT_14ca84e48;
    if (uVar6 < DAT_14ca84e48) {
      uVar14 = uVar6;
    }
    local_68[2] = 0x4109;
    local_68[1] = uVar14 + (uVar14 == 0);
    local_b8 = &local_69;
    local_50 = FUN_144738de6(puVar1,puVar2,&local_78,local_68);
    *(longlong *)(lVar5 + 0x20) = local_50;
    local_68[0] = CONCAT31(local_68[0]._1_3_,uVar3);
    local_68[1] = 0;
    local_68[2] = -1;
    local_58 = 0;
    uVar11 = FUN_14475683e(puVar17,puVar2,local_50 + 8,local_68);
    *(undefined8 *)(lVar5 + 0x38) = uVar11;
  }
  iVar19 = *(int *)(lVar5 + 0x4c);
  if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar19);
  }
  if (*(int *)(lVar5 + 0x6c) < iVar19) {
    FUN_14909408c(lVar5 + 0x60);
    iVar19 = *(int *)(lVar5 + 0x4c);
  }
  *(int *)(lVar5 + 0x88) = iVar19;
  uVar14 = iVar19 + 0x1f;
  if (0x1f < uVar14) {
    pvVar18 = (void *)(lVar5 + 0x70);
    uVar6 = uVar14 >> 5;
    if (*(int *)(lVar5 + 0x8c) + 0x1fU >> 5 < uVar6) {
      FUN_14499171c(pvVar18,0,uVar6,4);
      *(uint *)(lVar5 + 0x8c) = uVar14 & 0xffffffe0;
    }
    _Dst = *(void **)(lVar5 + 0x80);
    if (*(void **)(lVar5 + 0x80) == (void *)0x0) {
      _Dst = pvVar18;
    }
    if (uVar14 < 0x120) {
      uVar6 = uVar14 >> 3 & 0x3c;
    }
    else {
      uVar6 = uVar6 << 2;
    }
    memset(_Dst,0,(ulonglong)uVar6);
    iVar19 = *(int *)(lVar5 + 0x88);
    iVar8 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar8 = iVar19;
    }
    if (iVar19 % 0x20 != 0) {
      if (*(void **)(lVar5 + 0x80) != (void *)0x0) {
        pvVar18 = *(void **)(lVar5 + 0x80);
      }
      bVar13 = -(char)(iVar19 % 0x20);
      *(uint *)((longlong)pvVar18 + (longlong)(iVar8 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar18 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
           (bVar13 & 0x1f);
    }
  }
LAB_149093cd9:
  lVar10 = lVar10 * 0x90 + *(longlong *)(param_1 + 0x20);
  lVar5 = param_6[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_6;
    local_80 = lVar10 + 0x60;
    lVar16 = 0;
    do {
      uVar14 = *(uint *)(lVar4 + lVar16);
      lVar12 = *(longlong *)(lVar10 + 0x80);
      if (*(longlong *)(lVar10 + 0x80) == 0) {
        lVar12 = lVar10 + 0x70;
      }
      uVar6 = uVar14 + 0x1f;
      if (-1 < (longlong)(int)uVar14) {
        uVar6 = uVar14;
      }
      if ((*(uint *)(lVar12 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0) {
        local_98 = *(longlong *)(local_88 + 0x10);
        local_a0 = (longlong)(int)uVar14 * 0xf8;
        local_a8 = (uint *)FUN_149093f82(local_80);
        *local_a8 = uVar14;
        local_a8[1] = *(uint *)(local_98 + 0x48 + local_a0);
        local_a8[2] = *(uint *)(local_98 + 0x10 + local_a0);
        uVar11 = FUN_147d1cbd0(local_90,param_5,uVar14,0);
        *(undefined8 *)(local_a8 + 4) = uVar11;
        uVar11 = FUN_147d1cbd0(local_90,param_5,uVar14);
        *(undefined8 *)(local_a8 + 6) = uVar11;
        lVar12 = *(longlong *)(lVar10 + 0x80);
        if (*(longlong *)(lVar10 + 0x80) == 0) {
          lVar12 = lVar10 + 0x70;
        }
        puVar2 = (uint *)(lVar12 + (longlong)((int)uVar6 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar14 & 0x1f);
      }
      lVar16 = lVar16 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar16);
  }
  *param_7 = *(undefined8 *)(lVar10 + 0x28);
  *param_8 = *(undefined8 *)(lVar10 + 0x30);
  *param_9 = *(undefined8 *)(lVar10 + 0x38);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149093f46 FUN_149093f46 body=59 status=ok
// SIG undefined FUN_149093f46(void)

int FUN_149093f46(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149093ff8(param_1,iVar1);
  }
  FUN_149093fbd((longlong)iVar1 * 0x90 + *param_1);
  return iVar1;
}



// FUNCTION 149093f82 FUN_149093f82 body=59 status=ok
// SIG undefined FUN_149093f82(void)

longlong FUN_149093f82(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149094102(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1490940eb(lVar2);
  return lVar2;
}



// FUNCTION 149093fbd FUN_149093fbd body=59 status=ok
// SIG undefined FUN_149093fbd(void)

void FUN_149093fbd(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000;
  *param_1 = 0;
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
  return;
}



// FUNCTION 149093ff8 FUN_149093ff8 body=147 status=ok
// SIG undefined FUN_149093ff8(void)

void FUN_149093ff8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14909408c FUN_14909408c body=95 status=ok
// SIG undefined FUN_14909408c(void)

void FUN_14909408c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
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



// FUNCTION 1490940eb FUN_1490940eb body=22 status=ok
// SIG undefined FUN_1490940eb(void)

void FUN_1490940eb(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 149094102 FUN_149094102 body=132 status=ok
// SIG undefined FUN_149094102(void)

void FUN_149094102(longlong param_1,int param_2)

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



// FUNCTION 149094187 FUN_149094187 body=177 status=ok
// SIG undefined FUN_149094187(void)

void FUN_149094187(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e4d174();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbf9f50,param_4);
  local_78 = &DAT_14cbf9f50;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149094258(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14909423a FUN_14909423a body=29 status=ok
// SIG undefined FUN_14909423a(void)

undefined8 FUN_14909423a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149094258 FUN_149094258 body=384 status=ok
// SIG undefined FUN_149094258(void)

void FUN_149094258(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cbf9f98;
  if (DAT_14cbf9f98 != 0) {
    LOCK();
    *(int *)(DAT_14cbf9f98 + 8) = *(int *)(DAT_14cbf9f98 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cbf9f50;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14baa9700;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490943da FUN_1490943da body=38 status=ok
// SIG undefined FUN_1490943da(void)

undefined8 FUN_1490943da(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149094400 FUN_149094400 body=163 status=ok
// SIG undefined FUN_149094400(void)

void FUN_149094400(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1444387fa();
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
  FUN_1444388e2(param_1,param_2);
  return;
}



// FUNCTION 1490944a3 FUN_1490944a3 body=374 status=ok
// SIG undefined FUN_1490944a3(void)

void FUN_1490944a3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149094619 FUN_149094619 body=61 status=ok
// SIG undefined FUN_149094619(void)

void FUN_149094619(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149094656 FUN_149094656 body=41 status=ok
// SIG undefined FUN_149094656(void)

void FUN_149094656(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149094680(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 149094680 FUN_149094680 body=65 status=ok
// SIG undefined FUN_149094680(void)

void FUN_149094680(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490946c2 FUN_1490946c2 body=85 status=ok
// SIG undefined FUN_1490946c2(void)

undefined8 * FUN_1490946c2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149094718(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 149094718 FUN_149094718 body=111 status=ok
// SIG undefined FUN_149094718(void)

void FUN_149094718(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149094788 FUN_149094788 body=784 status=ok
// SIG undefined FUN_149094788(void)

void * FUN_149094788(void *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  memcpy(param_1,param_2,0xd8);
  FUN_149094b06((longlong)param_1 + 0xd8,(longlong)param_2 + 0xd8);
  FUN_149094b06((longlong)param_1 + 0xf8,(longlong)param_2 + 0xf8);
  FUN_149094b06((longlong)param_1 + 0x118,(longlong)param_2 + 0x118);
  FUN_149094b06((longlong)param_1 + 0x138,(longlong)param_2 + 0x138);
  FUN_149094b06((longlong)param_1 + 0x158,(longlong)param_2 + 0x158);
  FUN_149094b06((longlong)param_1 + 0x178,(longlong)param_2 + 0x178);
  FUN_149094b06((longlong)param_1 + 0x198,(longlong)param_2 + 0x198);
  FUN_149094b06((longlong)param_1 + 0x1b8,(longlong)param_2 + 0x1b8);
  FUN_149094b06((longlong)param_1 + 0x1d8,(longlong)param_2 + 0x1d8);
  if (param_1 != param_2) {
    lVar3 = *(longlong *)((longlong)param_1 + 0x1f8);
    *(undefined8 *)((longlong)param_1 + 0x1f8) = *(undefined8 *)((longlong)param_2 + 0x1f8);
    *(undefined8 *)((longlong)param_2 + 0x1f8) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x200);
    *(undefined8 *)((longlong)param_1 + 0x200) = *(undefined8 *)((longlong)param_2 + 0x200);
    *(undefined8 *)((longlong)param_2 + 0x200) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x208);
    *(undefined8 *)((longlong)param_1 + 0x208) = *(undefined8 *)((longlong)param_2 + 0x208);
    *(undefined8 *)((longlong)param_2 + 0x208) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x210);
    *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)((longlong)param_2 + 0x210);
    *(undefined8 *)((longlong)param_2 + 0x210) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x218);
    *(undefined8 *)((longlong)param_1 + 0x218) = *(undefined8 *)((longlong)param_2 + 0x218);
    *(undefined8 *)((longlong)param_2 + 0x218) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x220);
    *(undefined8 *)((longlong)param_1 + 0x220) = *(undefined8 *)((longlong)param_2 + 0x220);
    *(undefined8 *)((longlong)param_2 + 0x220) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x228);
    *(undefined8 *)((longlong)param_1 + 0x228) = *(undefined8 *)((longlong)param_2 + 0x228);
    *(undefined8 *)((longlong)param_2 + 0x228) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x230);
    *(undefined8 *)((longlong)param_1 + 0x230) = *(undefined8 *)((longlong)param_2 + 0x230);
    *(undefined8 *)((longlong)param_2 + 0x230) = 0;
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
    lVar3 = *(longlong *)((longlong)param_1 + 0x238);
    *(undefined8 *)((longlong)param_1 + 0x238) = *(undefined8 *)((longlong)param_2 + 0x238);
    *(undefined8 *)((longlong)param_2 + 0x238) = 0;
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
  memcpy((void *)((longlong)param_1 + 0x240),(void *)((longlong)param_2 + 0x240),0x130);
  return param_1;
}



// FUNCTION 149094a98 FUN_149094a98 body=110 status=ok
// SIG undefined FUN_149094a98(void)

void FUN_149094a98(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000149094acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 149094b06 FUN_149094b06 body=174 status=ok
// SIG undefined FUN_149094b06(void)

longlong * FUN_149094b06(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    lVar5 = param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar5 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar5 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}



// FUNCTION 149094bb4 FUN_149094bb4 body=38 status=ok
// SIG undefined FUN_149094bb4(void)

void FUN_149094bb4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149094bda(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 149094bda FUN_149094bda body=99 status=ok
// SIG undefined FUN_149094bda(void)

void FUN_149094bda(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149094c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 149094c3e FUN_149094c3e body=138 status=ok
// SIG undefined FUN_149094c3e(void)

code * FUN_149094c3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6920c;
}



// FUNCTION 149094cc8 FUN_149094cc8 body=138 status=ok
// SIG undefined FUN_149094cc8(void)

code * FUN_149094cc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000011a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667bffc;
}



// FUNCTION 149094d52 FUN_149094d52 body=138 status=ok
// SIG undefined FUN_149094d52(void)

code * FUN_149094d52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UncompressedOffsetInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149094ddc;
}



// FUNCTION 149094ddc FUN_149094ddc body=138 status=ok
// SIG undefined FUN_149094ddc(void)

code * FUN_149094ddc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TotalSizeInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000115;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149094e66;
}



// FUNCTION 149094e66 FUN_149094e66 body=138 status=ok
// SIG undefined FUN_149094e66(void)

code * FUN_149094e66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DataSizeInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000114;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e69188;
}



// FUNCTION 149094ef0 FUN_149094ef0 body=177 status=ok
// SIG undefined FUN_149094ef0(void)

void FUN_149094ef0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e68f9a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbfa018,param_4);
  local_78 = &DAT_14cbfa018;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149094fc0(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149094fa2 FUN_149094fa2 body=29 status=ok
// SIG undefined FUN_149094fa2(void)

undefined8 FUN_149094fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149094fc0 FUN_149094fc0 body=384 status=ok
// SIG undefined FUN_149094fc0(void)

void FUN_149094fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cbfa060;
  if (DAT_14cbfa060 != 0) {
    LOCK();
    *(int *)(DAT_14cbfa060 + 8) = *(int *)(DAT_14cbfa060 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cbfa018;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14baa9830;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149095142 FUN_149095142 body=38 status=ok
// SIG undefined FUN_149095142(void)

undefined8 FUN_149095142(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149095168 FUN_149095168 body=163 status=ok
// SIG undefined FUN_149095168(void)

void FUN_149095168(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1444391be();
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
  FUN_1444392a6(param_1,param_2);
  return;
}



// FUNCTION 14909520b FUN_14909520b body=374 status=ok
// SIG undefined FUN_14909520b(void)

void FUN_14909520b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149095382 FUN_149095382 body=80 status=ok
// SIG undefined FUN_149095382(void)

longlong * FUN_149095382(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_149078ff9(*param_1,(int)param_1[1]);
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



// FUNCTION 1490953d2 FUN_1490953d2 body=38 status=ok
// SIG undefined FUN_1490953d2(void)

undefined8 FUN_1490953d2(undefined8 param_1,int param_2)

{
  FUN_14631f922();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490954c4 FUN_1490954c4 body=59 status=ok
// SIG undefined FUN_1490954c4(void)

undefined8 FUN_1490954c4(longlong *param_1)

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



// FUNCTION 1490955ee FUN_1490955ee body=59 status=ok
// SIG undefined FUN_1490955ee(void)

undefined8 FUN_1490955ee(longlong *param_1)

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



// FUNCTION 149095690 FUN_149095690 body=138 status=ok
// SIG undefined FUN_149095690(void)

code * FUN_149095690(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000020c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667c1d0;
}



// FUNCTION 14909571a FUN_14909571a body=138 status=ok
// SIG undefined FUN_14909571a(void)

code * FUN_14909571a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTriangleMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000024a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3b2e6;
}



// FUNCTION 1490957a4 FUN_1490957a4 body=138 status=ok
// SIG undefined FUN_1490957a4(void)

code * FUN_1490957a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTestTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000246;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909582e;
}



// FUNCTION 14909582e FUN_14909582e body=138 status=ok
// SIG undefined FUN_14909582e(void)

code * FUN_14909582e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000245;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490958b8;
}



// FUNCTION 1490958b8 FUN_1490958b8 body=138 status=ok
// SIG undefined FUN_1490958b8(void)

code * FUN_1490958b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClearPass";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000244;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095942;
}



// FUNCTION 149095942 FUN_149095942 body=138 status=ok
// SIG undefined FUN_149095942(void)

code * FUN_149095942(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000243;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490959cc;
}



// FUNCTION 1490959cc FUN_1490959cc body=132 status=ok
// SIG undefined FUN_1490959cc(void)

undefined1 * FUN_1490959cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LayoutIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x242;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149095a50;
}



// FUNCTION 149095a54 FUN_149095a54 body=138 status=ok
// SIG undefined FUN_149095a54(void)

code * FUN_149095a54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7a526;
}



// FUNCTION 149095ade FUN_149095ade body=138 status=ok
// SIG undefined FUN_149095ade(void)

code * FUN_149095ade(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7a49e;
}



// FUNCTION 149095b68 FUN_149095b68 body=138 status=ok
// SIG undefined FUN_149095b68(void)

code * FUN_149095b68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095bf2;
}



// FUNCTION 149095bf2 FUN_149095bf2 body=132 status=ok
// SIG undefined FUN_149095bf2(void)

undefined1 * FUN_149095bf2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e7a49a;
}



// FUNCTION 149095c76 FUN_149095c76 body=138 status=ok
// SIG undefined FUN_149095c76(void)

code * FUN_149095c76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9dbc8;
}



// FUNCTION 149095d00 FUN_149095d00 body=138 status=ok
// SIG undefined FUN_149095d00(void)

code * FUN_149095d00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667c3ea;
}



// FUNCTION 149095d8a FUN_149095d8a body=138 status=ok
// SIG undefined FUN_149095d8a(void)

code * FUN_149095d8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000002ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9dc52;
}



// FUNCTION 149095e14 FUN_149095e14 body=132 status=ok
// SIG undefined FUN_149095e14(void)

undefined1 * FUN_149095e14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9dbc4;
}



// FUNCTION 149095e98 FUN_149095e98 body=138 status=ok
// SIG undefined FUN_149095e98(void)

code * FUN_149095e98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2680000030a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5efe2;
}



// FUNCTION 149095f22 FUN_149095f22 body=138 status=ok
// SIG undefined FUN_149095f22(void)

code * FUN_149095f22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TangentTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25800000308;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667c4fa;
}



// FUNCTION 149095fac FUN_149095fac body=138 status=ok
// SIG undefined FUN_149095fac(void)

code * FUN_149095fac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000304;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096036;
}



// FUNCTION 149096036 FUN_149096036 body=138 status=ok
// SIG undefined FUN_149096036(void)

code * FUN_149096036(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23800000303;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490960c0;
}



// FUNCTION 1490960c0 FUN_1490960c0 body=138 status=ok
// SIG undefined FUN_1490960c0(void)

code * FUN_1490960c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23000000302;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909614a;
}



// FUNCTION 14909614a FUN_14909614a body=138 status=ok
// SIG undefined FUN_14909614a(void)

code * FUN_14909614a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_Data";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22800000300;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490961d4;
}



// FUNCTION 1490961d4 FUN_1490961d4 body=138 status=ok
// SIG undefined FUN_1490961d4(void)

code * FUN_1490961d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_OffsetAndCount";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000002ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909625e;
}



// FUNCTION 14909625e FUN_14909625e body=138 status=ok
// SIG undefined FUN_14909625e(void)

code * FUN_14909625e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_Data_MaxCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x218000002fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490962e8;
}



// FUNCTION 1490962e8 FUN_1490962e8 body=138 status=ok
// SIG undefined FUN_1490962e8(void)

code * FUN_1490962e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_OffsetAndCount_MaxCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x214000002fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096372;
}



// FUNCTION 149096372 FUN_149096372 body=138 status=ok
// SIG undefined FUN_149096372(void)

code * FUN_149096372(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_MaxSegmentPerVoxel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210000002fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5f06c;
}



// FUNCTION 1490963fc FUN_1490963fc body=138 status=ok
// SIG undefined FUN_1490963fc(void)

code * FUN_1490963fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096486;
}



// FUNCTION 149096486 FUN_149096486 body=138 status=ok
// SIG undefined FUN_149096486(void)

code * FUN_149096486(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_MaxBound";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f0000002f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096510;
}



// FUNCTION 149096510 FUN_149096510 body=138 status=ok
// SIG undefined FUN_149096510(void)

code * FUN_149096510(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_MinBound";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e0000002f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909659a;
}



// FUNCTION 14909659a FUN_14909659a body=138 status=ok
// SIG undefined FUN_14909659a(void)

code * FUN_14909659a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d4000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096624;
}



// FUNCTION 149096624 FUN_149096624 body=138 status=ok
// SIG undefined FUN_149096624(void)

code * FUN_149096624(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVsChannelIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d0000002f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daedf6;
}



// FUNCTION 1490966ae FUN_1490966ae body=138 status=ok
// SIG undefined FUN_1490966ae(void)

code * FUN_1490966ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TracingDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490968d4;
}



// FUNCTION 149096738 FUN_149096738 body=138 status=ok
// SIG undefined FUN_149096738(void)

code * FUN_149096738(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490967c2;
}



// FUNCTION 1490967c2 FUN_1490967c2 body=138 status=ok
// SIG undefined FUN_1490967c2(void)

code * FUN_1490967c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointToCurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145daf382;
}



// FUNCTION 14909684c FUN_14909684c body=132 status=ok
// SIG undefined FUN_14909684c(void)

undefined1 * FUN_14909684c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x62;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490968d0;
}



// FUNCTION 1490968d4 FUN_1490968d4 body=138 status=ok
// SIG undefined FUN_1490968d4(void)

code * FUN_1490968d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000002ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909695e;
}



// FUNCTION 14909695e FUN_14909695e body=138 status=ok
// SIG undefined FUN_14909695e(void)

code * FUN_14909695e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667c692;
}



// FUNCTION 1490969e8 FUN_1490969e8 body=138 status=ok
// SIG undefined FUN_1490969e8(void)

code * FUN_1490969e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LayoutIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096a72;
}



// FUNCTION 149096a72 FUN_149096a72 body=138 status=ok
// SIG undefined FUN_149096a72(void)

code * FUN_149096a72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileOffsetInPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149096afc;
}



// FUNCTION 149096afc FUN_149096afc body=138 status=ok
// SIG undefined FUN_149096afc(void)

code * FUN_149096afc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667c71a;
}



// FUNCTION 149096b8a FUN_149096b8a body=132 status=ok
// SIG undefined FUN_149096b8a(void)

void FUN_149096b8a(longlong param_1,int param_2)

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



// FUNCTION 149096c10 FUN_149096c10 body=96 status=ok
// SIG undefined FUN_149096c10(void)

void FUN_149096c10(longlong param_1,int param_2)

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



// FUNCTION 149096c70 FUN_149096c70 body=96 status=ok
// SIG undefined FUN_149096c70(void)

void FUN_149096c70(longlong param_1,int param_2)

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



// FUNCTION 149096cd0 FUN_149096cd0 body=132 status=ok
// SIG undefined FUN_149096cd0(void)

void FUN_149096cd0(longlong param_1,int param_2)

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



// FUNCTION 149096d56 FUN_149096d56 body=174 status=ok
// SIG undefined FUN_149096d56(void)

void FUN_149096d56(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa5d20;
  FUN_147d70ac1(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14907ac08(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14631f922(param_1 + 0x1e);
  FUN_14631f922(param_1 + 0x19);
  FUN_14631f922(param_1 + 0x14);
  FUN_14003f39a(param_1 + 0xf);
  FUN_14631f922(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149096e04 FUN_149096e04 body=88 status=ok
// SIG undefined FUN_149096e04(void)

void FUN_149096e04(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14baa5e70;
  FUN_14908489c(param_1 + 0x12);
  lVar1 = 0x70;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x30);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149096e5c FUN_149096e5c body=162 status=ok
// SIG undefined FUN_149096e5c(void)

void FUN_149096e5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa5fa0;
  FUN_147d70ac1(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14907ac08(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14631f922(param_1 + 0x19);
  FUN_14631f922(param_1 + 0x14);
  FUN_14003f39a(param_1 + 0xf);
  FUN_14631f922(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149096efe FUN_149096efe body=76 status=ok
// SIG undefined FUN_149096efe(void)

void FUN_149096efe(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14baa60a0;
  lVar1 = 0x70;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x30);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149096f4a FUN_149096f4a body=145 status=ok
// SIG undefined FUN_149096f4a(void)

void FUN_149096f4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa6180;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14908489c(param_1 + 0x22);
  FUN_14908489c(param_1 + 0x1e);
  FUN_14908489c(param_1 + 0x1a);
  FUN_14908489c(param_1 + 0x16);
  FUN_14908489c(param_1 + 0x12);
  FUN_14908489c(param_1 + 0xe);
  FUN_14908489c(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149096fdc FUN_149096fdc body=148 status=ok
// SIG undefined FUN_149096fdc(void)

void FUN_149096fdc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14baa6840;
  FUN_14908489c(param_1 + 0x26);
  FUN_14908489c(param_1 + 0x22);
  FUN_14908489c(param_1 + 0x1e);
  FUN_14908489c(param_1 + 0x1a);
  lVar1 = 0xb0;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x70);
  lVar1 = 0x70;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x30);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149097070 FUN_149097070 body=80 status=ok
// SIG undefined FUN_149097070(void)

void FUN_149097070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa7250;
  FUN_14908489c(param_1 + 0x12);
  FUN_14908489c(param_1 + 0xe);
  FUN_14908489c(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1490970c0 FUN_1490970c0 body=100 status=ok
// SIG undefined FUN_1490970c0(void)

void FUN_1490970c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa7390;
  FUN_14908489c(param_1 + 0x18);
  FUN_14908489c(param_1 + 0x14);
  FUN_14908489c(param_1 + 0x10);
  FUN_14908489c(param_1 + 0xc);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149097124 FUN_149097124 body=128 status=ok
// SIG undefined FUN_149097124(void)

void FUN_149097124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa7520;
  FUN_14908489c(param_1 + 0x24);
  FUN_14908489c(param_1 + 0x20);
  FUN_14908489c(param_1 + 0x1c);
  FUN_14908489c(param_1 + 0x17);
  FUN_14908489c(param_1 + 0x13);
  FUN_14908489c(param_1 + 0xf);
  FUN_14908489c(param_1 + 0xb);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1490971a4 FUN_1490971a4 body=130 status=ok
// SIG undefined FUN_1490971a4(void)

void FUN_1490971a4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14baa7f50;
  lVar1 = 0x100;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0xc0);
  lVar1 = 0xc0;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x80);
  lVar1 = 0x78;
  do {
    FUN_14908489c((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x38);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 149097226 FUN_149097226 body=68 status=ok
// SIG undefined FUN_149097226(void)

void FUN_149097226(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa88d0;
  FUN_14908489c(param_1 + 0xe);
  FUN_14908489c(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14909726a FUN_14909726a body=80 status=ok
// SIG undefined FUN_14909726a(void)

void FUN_14909726a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14baa8ad0;
  FUN_140137a98(param_1 + 0x12);
  FUN_14908489c(param_1 + 0xe);
  FUN_14908489c(param_1 + 10);
  *param_1 = &PTR_FUN_14baa5c50;
  FUN_149073728(param_1 + 4);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1490972ba FUN_1490972ba body=93 status=ok
// SIG undefined FUN_1490972ba(void)

void FUN_1490972ba(longlong param_1,undefined8 param_2)

{
  FUN_146c4db8e(param_2,param_1 + 0x20);
  FUN_1490b4d5e(param_2,param_1 + 0x30);
  FUN_146c4db8e(param_2,param_1 + 0x40);
  FUN_1447a84cc(param_2,param_1 + 0x50);
  FUN_1447a84cc(param_2,param_1 + 0x60);
  FUN_140119d96(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 149097317 FUN_149097317 body=217 status=ok
// SIG undefined FUN_149097317(void)

longlong * FUN_149097317(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *param_2;
    puVar2 = (ulonglong *)param_1[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  else {
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *param_2 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490973f2 FUN_1490973f2 body=80 status=ok
// SIG undefined FUN_1490973f2(void)

void FUN_1490973f2(longlong param_1,undefined8 param_2)

{
  FUN_146c4db8e(param_2,param_1);
  FUN_1490b4d5e(param_2,param_1 + 0x10);
  FUN_146c4db8e(param_2,param_1 + 0x20);
  FUN_1447a84cc(param_2,param_1 + 0x30);
  FUN_140119d96(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 149097442 FUN_149097442 body=823 status=ok
// SIG undefined FUN_149097442(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149097442(undefined8 param_1,longlong param_2,uint param_3,int param_4,char param_5)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  uint local_e8 [3];
  undefined8 local_dc;
  undefined4 local_d4;
  float local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(&local_c8,0,0x88);
  if (param_4 == 1) {
    lVar5 = (ulonglong)param_3 * 0x68;
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x110) + lVar5);
    local_e8[0] = (uint)*(byte *)(lVar7 + 0x98);
    local_d4 = *(undefined4 *)(*(longlong *)(lVar7 + 0x140) + 0x28);
    local_d0 = (float)_DAT_14cbfa758;
    if (16.0 <= local_d0) {
      local_d0 = 16.0;
    }
    if (local_d0 <= -16.0) {
      local_d0 = -16.0;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x110) + 8 + lVar5);
    if (lVar5 == 0) {
      local_c8 = *(undefined8 *)(lVar7 + 0x68);
      puVar6 = (undefined8 *)(lVar7 + 0xb8);
      local_c0 = local_c8;
    }
    else {
      local_c8 = *(undefined8 *)(lVar5 + 0x58);
      puVar6 = (undefined8 *)(lVar5 + 0x98);
      local_c0 = *(undefined8 *)(lVar5 + 0x78);
    }
    local_b8 = *puVar6;
    local_b0 = *(undefined8 *)(lVar7 + 0xe0);
    local_a8 = *(undefined8 *)(lVar7 + 0x108);
    uVar4 = *(undefined4 *)(lVar7 + 0x138);
    lVar5 = lVar7 + 0x118;
    lVar7 = lVar7 + 0x128;
  }
  else {
    lVar5 = (ulonglong)param_3 * 0x30;
    plVar2 = (longlong *)(*(longlong *)(param_2 + 0x120) + lVar5);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x120) + 8 + lVar5);
    if (lVar5 == 0) {
      lVar7 = *plVar2;
      local_c0 = *(undefined8 *)(lVar7 + 0x68);
      local_c8 = local_c0;
    }
    else {
      local_c0 = *(undefined8 *)(lVar5 + 0x58 + (ulonglong)(1 - *(uint *)(lVar5 + 0x9c)) * 0x20);
      lVar7 = *plVar2;
      local_c8 = *(undefined8 *)(lVar5 + 0x58 + (ulonglong)*(uint *)(lVar5 + 0x9c) * 0x20);
    }
    local_e8[0] = 0;
    local_d4 = *(undefined4 *)(*(longlong *)(lVar7 + 0x118) + 8);
    local_d0 = 0.0;
    local_b8 = *(undefined8 *)(lVar7 + 0xb8);
    local_b0 = *(undefined8 *)(lVar7 + 0xe0);
    uVar4 = *(undefined4 *)(lVar7 + 0x110);
    lVar5 = lVar7 + 0xf0;
    lVar7 = lVar7 + 0x100;
    local_a8 = local_b8;
  }
  local_dc = 0;
  FUN_14443ac59(lVar7,lVar5,uVar4);
  lVar5 = DAT_14c9c0de0;
  if (param_5 == '\0') {
    local_c8 = DAT_14ca8c0b0;
    local_c0 = DAT_14ca8c0b0;
    local_b8 = DAT_14ca8c0b0;
    local_b0 = DAT_14ca8c0b0;
    local_a8 = DAT_14ca8c0b0;
  }
  lVar7 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  if (DAT_14c9c0de0 != 0) {
    LOCK();
    *(int *)(DAT_14c9c0de0 + 8) = *(int *)(DAT_14c9c0de0 + 8) + 1;
    UNLOCK();
  }
  if (local_a0 == 0) {
    local_a0 = lVar7;
  }
  if (local_90 == 0) {
    local_90 = lVar7;
  }
  if (local_80 == 0) {
    local_80 = lVar7;
  }
  if (local_70 == 0) {
    local_70 = lVar7;
  }
  if (local_60 == 0) {
    local_60 = lVar7;
  }
  if (local_50 == 0) {
    local_50 = lVar7;
  }
  if (local_98 == 0) {
    local_98 = lVar5;
  }
  if (local_88 == 0) {
    local_88 = lVar5;
  }
  if (local_78 == 0) {
    local_78 = lVar5;
  }
  if (local_68 == 0) {
    local_68 = lVar5;
  }
  if (local_58 == 0) {
    local_58 = lVar5;
  }
  if (local_48 == 0) {
    local_48 = lVar5;
  }
  FUN_14443ad7c(param_1,local_e8);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149097786 FUN_149097786 body=211 status=ok
// SIG undefined FUN_149097786(void)

undefined8 *
FUN_149097786(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_144b1dcb8(param_1,param_6);
  *param_1 = &PTR_FUN_14baaa7f0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  lVar2 = 0x160;
  do {
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x10) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar2 + -0xc) = 0x105;
    *(undefined1 *)((longlong)param_1 + lVar2 + -10) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined ***)((longlong)param_1 + lVar2 + -0x18) = &PTR_FUN_14baae340;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 9);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x1d0);
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1c6) = 0;
  param_1[0x39] = 0;
  param_1[0x37] = &PTR_FUN_14baae340;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e1) = 0;
  param_1[0x26] = param_2;
  *(undefined4 *)(param_1 + 0x27) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x13c) = param_4;
  return param_1;
}



// FUNCTION 14909785a FUN_14909785a body=67 status=ok
// SIG undefined FUN_14909785a(void)

void FUN_14909785a(longlong param_1)

{
  FUN_144725486();
  (**(code **)(*(longlong *)(param_1 + 0x148) + 0x20))(param_1 + 0x148);
  (**(code **)(*(longlong *)(param_1 + 0x180) + 0x20))(param_1 + 0x180);
  FUN_144725486(param_1 + 0x1b8);
  return;
}


